#!/usr/bin/env python3
"""Turn the Ghidra export (src/clean/mod_*.c) into a readable source tree (decomp/).

Ghidra was run with an unknown calling convention, so every function takes r4-r7 (ar4..ar7) whether it uses them or not, every
call passes four arguments, float code is split on the FPU mode at entry, and globals appear as raw addresses. This pass:
  - infers each function's real parameter count (a parameter is used if the body reads it, or passes it on to a used parameter of
    a callee; fixpoint over the call graph) and trims signatures and direct call sites to it; parameters become a0..a3 (r4..r7),
    stack parameters stay s0, s4, ...
  - resolves the FPSCR.SZ/PR tests: the game keeps single precision and 32-bit FMOV (PR = SZ = 0) at function boundaries
  - names: string-derived "Class_Method" hints, the tables in notes/, and tools/readable_names.tsv; other hint names
    (s_<string>, uses_gfx_) go back to FUN_ with the hint in the header comment
  - types: undefined4 -> u32 etc. (decomp/include/seaman.h); DAT_/raw-address globals -> g_8cXXXXXX (decomp/include/globals.h)
  - drops the decompiler's housekeeping warnings and dead register copies, adds a header (address, callers, strings), and formats
    the result with clang-format
The output is a reading aid: the Wii port builds from its own pipeline (tools/wii_xform.py), not from decomp/.
usage: readable.py <project root>"""
import os, re, sys, subprocess, collections
from concurrent.futures import ThreadPoolExecutor

ROOT = sys.argv[1]
SRC = os.path.join(ROOT, 'src', 'clean')
OUT = os.path.join(ROOT, 'decomp')
NOTES = os.path.join(ROOT, 'notes')

HDR = re.compile(r'^/\* (\S+) @ ([0-9a-f]{8}) callers=\d+ callees=\d+ \*/\n', re.M)
IDENT = re.compile(r'[A-Za-z_][A-Za-z0-9_]*')
TYPES = {'undefined1': 'u8', 'undefined2': 'u16', 'undefined3': 'u32', 'undefined4': 'u32', 'undefined8': 'u64', 'undefined': 'u8',
         'uint': 'u32', 'ushort': 'u16', 'byte': 'u8', 'sbyte': 's8', 'ulonglong': 'u64', 'longlong': 's64', 'uint3': 'u32',
         'int3': 's32', 'dword': 'u32', 'word': 'u16', 'ulong': 'u32', 'uchar': 'u8', 'float10': 'double'}
DROP_WARN = ('Unknown calling convention', 'Removing unreachable block', 'Globals starting with', 'Restarted to delay deadcode',
             'Ignoring partial resolution', 'Switch is manually overridden', 'Could not reconcile some variable overlaps',
             'Variable defined which should be unmapped', 'Type propagation algorithm not settling', 'Removing unreachable')
PARAM_NAMES = {'ar4': 'a0', 'ar5': 'a1', 'ar6': 'a2', 'ar7': 'a3'}


# ---------------------------------------------------------------- lexing helpers
def skip_lit(s, i):
    """i at a quote or comment start: return the index just past it"""
    c = s[i]
    if c in '"\'':
        j = i + 1
        while j < len(s) and s[j] != c:
            j += 2 if s[j] == '\\' else 1
        return j + 1
    if s.startswith('/*', i):
        j = s.find('*/', i + 2)
        return len(s) if j < 0 else j + 2
    if s.startswith('//', i):
        j = s.find('\n', i)
        return len(s) if j < 0 else j
    return i + 1


def match(s, i, o, c):
    """s[i] == o: index of the matching c"""
    d = 0
    while i < len(s):
        ch = s[i]
        if ch in '"\'' or s.startswith('/*', i) or s.startswith('//', i):
            i = skip_lit(s, i); continue
        if ch == o: d += 1
        elif ch == c:
            d -= 1
            if not d: return i
        i += 1
    return -1


def split_args(s):
    """top-level comma split of an argument list (without the parentheses)"""
    out, d, cur, i = [], 0, 0, 0
    while i < len(s):
        ch = s[i]
        if ch in '"\'':
            i = skip_lit(s, i); continue
        if ch in '([{': d += 1
        elif ch in ')]}': d -= 1
        elif ch == ',' and d == 0:
            out.append(s[cur:i]); cur = i + 1
        i += 1
    if s.strip() or out: out.append(s[cur:])
    return out


def code_spans(s):
    """(start, end) spans of s outside string/char literals and comments"""
    spans, i, st = [], 0, 0
    while i < len(s):
        if s[i] in '"\'' or s.startswith('/*', i) or s.startswith('//', i):
            spans.append((st, i)); i = skip_lit(s, i); st = i; continue
        i += 1
    spans.append((st, len(s)))
    return spans


def sub_code(rx, repl, s):
    """re.sub applied outside literals and comments"""
    out, last = [], 0
    i = 0
    while i < len(s):
        if s[i] in '"\'' or s.startswith('/*', i) or s.startswith('//', i):
            out.append(rx.sub(repl, s[last:i])); j = skip_lit(s, i); out.append(s[i:j]); last = i = j; continue
        i += 1
    out.append(rx.sub(repl, s[last:]))
    return ''.join(out)


# ---------------------------------------------------------------- parse
class Fn:
    pass


def parse_module(path):
    text = open(path, errors='replace').read()
    title = text.split('\n', 1)[0]
    hs = list(HDR.finditer(text))
    fns = []
    for k, h in enumerate(hs):
        chunk = text[h.end():hs[k + 1].start() if k + 1 < len(hs) else len(text)]
        f = Fn(); f.name, f.addr = h.group(1), int(h.group(2), 16); f.notes = []; f.body = None
        # leading comments (decompiler warnings)
        pos = 0
        while True:
            m = re.match(r'\s*/\*(.*?)\*/', chunk[pos:], re.S)
            if not m or chunk[pos:].lstrip().startswith('/* ' + f.name + ' @'): break
            if not m.group(0).strip().startswith('/*'): break
            note = ' '.join(m.group(1).split())
            if note.startswith('WARNING:') and not any(w in note for w in DROP_WARN): f.notes.append(note[8:].strip())
            elif not note.startswith('WARNING:') and note: f.notes.append(note)
            pos += m.end()
        rest = chunk[pos:]
        p = rest.find('(')
        b = rest.find('{')
        if p < 0 or b < 0 or b < p:
            f.raw = rest.strip(); fns.append(f); continue
        q = match(rest, p, '(', ')')
        f.ret = ' '.join(rest[:p].split()[:-1]) if len(rest[:p].split()) > 1 else 'void'
        decl_name = rest[:p].split()[-1].lstrip('*')
        f.ret = (f.ret + ' ' + '*' * (len(rest[:p].split()[-1]) - len(decl_name))).strip()
        f.decl_name = decl_name
        f.params = [x.strip() for x in split_args(rest[p + 1:q])]
        if f.params == ['void']: f.params = []
        bs = rest.find('{', q)
        be = match(rest, bs, '{', '}')
        f.body = rest[bs:be + 1]
        f.tail = rest[be + 1:].strip()
        f.pnames = [IDENT.findall(x)[-1] if IDENT.findall(x) else '' for x in f.params]
        fns.append(f)
    return title, fns


# ---------------------------------------------------------------- names
def load_names(fns):
    names = {}
    for f in fns: names[f.addr] = f.name
    table = {}
    for fn in ('names.tsv', 'names_input.tsv', 'names_hw_filtered.tsv', 'names_auto_wrappers.tsv', 'names_vtable.tsv'):
        p = os.path.join(NOTES, fn)
        if not os.path.exists(p): continue
        for l in open(p):
            a = l.rstrip('\n').split('\t')
            if len(a) >= 2 and re.fullmatch(r'8c[0-9a-f]{6}', a[0]) and IDENT.fullmatch(a[1]): table[int(a[0], 16)] = a[1]
    p = os.path.join(ROOT, 'tools', 'readable_names.tsv')
    curated = {}
    if os.path.exists(p):
        for l in open(p):
            if l.startswith('#') or not l.strip(): continue
            a = l.rstrip('\n').split('\t')
            curated[int(a[0], 16)] = (a[1], a[2] if len(a) > 2 else '', int(a[3]) if len(a) > 3 and a[3].strip() else None)
    final, hints = {}, {}
    for a, n in names.items():
        m = re.fullmatch(r's_(.+)_[0-9a-f]{6}', n)
        hint = None
        if a in curated and curated[a][0] != '-': new = curated[a][0]
        elif m:
            s = m.group(1)
            cm = re.fullmatch(r'(C[A-Z][A-Za-z0-9]*)_([A-Z][A-Za-z0-9]*)(?:_wrap)?', s)
            new = '%s_%s' % cm.groups() if cm else 'FUN_%08x' % a
            if not cm: hint = 'name hint from a string it uses: ' + s.replace('_', ' ')
        elif n.startswith('uses_gfx_'): new = 'FUN_%08x' % a; hint = 'uses the graphics layer'
        elif n.startswith('FUN_') and a in table: new = table[a]
        else: new = n
        final[a] = new
        if hint: hints[a] = hint
    # unique names: of several curated functions with one name (copies of strcmp, ...) the first listed keeps it
    seen = collections.Counter(final.values())
    order = {a: i for i, a in enumerate(curated)}
    kept = set()
    for a in sorted(final, key=lambda a: (order.get(a, len(order)), a)):
        n = final[a]
        if seen[n] < 2 or n.startswith('FUN_'): continue
        if a in curated and n not in kept: kept.add(n); continue
        final[a] = '%s_%06x' % (n, a & 0xffffff)
    return final, hints, curated


# ---------------------------------------------------------------- calling convention
def calls_in(body, known):
    """direct calls: (callee name, [args], start, end of the arg list)"""
    out = []
    for m in re.finditer(r'\b([A-Za-z_][A-Za-z0-9_]*)\s*\(', body):
        if m.group(1) not in known: continue
        o = m.end() - 1
        c = match(body, o, '(', ')')
        if c < 0: continue
        out.append((m.group(1), split_args(body[o + 1:c]), o, c))
    return out


def classify(f, byname):
    """per parameter: read in the body? and the (callee, position) slots it is passed on to unchanged"""
    reads, passes, writes = [False] * len(f.pnames), [[] for _ in f.pnames], [False] * len(f.pnames)
    body = f.body
    spans = code_spans(body)
    pass_pos = {}
    for callee, args, o, c in calls_in(body, byname):
        pos = o + 1
        for j, a in enumerate(args):
            st = a.strip()
            if st in f.pnames: pass_pos[pos + a.index(st)] = (f.pnames.index(st), callee, j)
            pos += len(a) + 1
    for i, pn in enumerate(f.pnames):
        if not pn: continue
        for s0, s1 in spans:
            for m in re.finditer(r'\b%s\b' % re.escape(pn), body[s0:s1]):
                at = s0 + m.start()
                if at in pass_pos and pass_pos[at][0] == i: passes[i].append(pass_pos[at][1:]); continue
                after = body[at + len(pn):at + len(pn) + 3]
                before = body[max(0, at - 30):at].rstrip(' ')
                if re.match(r'\s*=[^=]', after) and (before.endswith((';', '{', '}', '\n')) or before == ''):
                    writes[i] = True; continue
                reads[i] = True
    return reads, passes, writes


def arities(fns, byname):
    info = {f.name: classify(f, byname) for f in fns if f.body is not None}
    live = {n: list(r) for n, (r, p, w) in info.items()}
    # a function that jumps through a pointer with no visible arguments (a thunk, a tail call) forwards r4-r7 unseen
    for f in fns:
        if f.body is not None and re.search(r'\(\*+\(code \*+\)[^;]*?\)\(\)', f.body): live[f.name] = [True] * len(live[f.name])
    # a literal passed in a slot shows the callee takes that parameter, whatever its body says
    for f in fns:
        if f.body is None: continue
        for callee, args, o, c in calls_in(f.body, byname):
            if callee not in live: continue
            for j, a in enumerate(args):
                if j < len(live[callee]) and re.fullmatch(r"\s*(?:-?0x[0-9a-f]+|-?\d+|'.*'|\".*\"|&\w+|s_\w+)\s*", a): live[callee][j] = True
    changed = True
    while changed:
        changed = False
        for n, (r, p, w) in info.items():
            for i, ps in enumerate(p):
                if live[n][i]: continue
                for callee, j in ps:
                    if callee in live and j < len(live[callee]) and live[callee][j]:
                        live[n][i] = True; changed = True; break
                    if callee not in live: live[n][i] = True; changed = True; break   # unknown body: assume used
    return live, info


# ---------------------------------------------------------------- FPSCR
def simplify_cond(c, fixed):
    for v in fixed:
        c = re.sub(r"\bin_FPSCR_%s == (?:'\\0'|0\b)" % v, '1', c); c = re.sub(r"\bin_FPSCR_%s != (?:'\\0'|0\b)" % v, '0', c)
        c = re.sub(r"\(1\)", '1', c); c = re.sub(r"\(0\)", '0', c)
    for _ in range(4):
        c2 = re.sub(r'^\s*1\s*&&\s*', '', c); c2 = re.sub(r'\s*&&\s*1\s*$', '', c2)
        c2 = re.sub(r'^\s*0\s*\|\|\s*', '', c2); c2 = re.sub(r'\s*\|\|\s*0\s*$', '', c2)
        if c2 == c: break
        c = c2
    if re.fullmatch(r'\s*0\s*&&.*', c, re.S): c = '0'
    if re.fullmatch(r'\s*1\s*\|\|.*', c, re.S): c = '1'
    return c.strip()


def collapse_fpscr(body, fixed):
    """rewrite `if (cond on FPSCR.SZ/PR at entry) A else B` for PR = SZ = 0; `fixed` lists the bits the body never assigns"""
    names = re.compile(r'\bin_FPSCR_(?:%s)\b' % '|'.join(fixed))
    for _ in range(400):
        m = None
        for mm in re.finditer(r'\bif \(', body):
            o = mm.end() - 1
            c = match(body, o, '(', ')')
            if c > 0 and names.search(body, o, c): m = (mm.start(), o, c); break
        if not m: break
        st, o, c = m
        cond = simplify_cond(body[o + 1:c], fixed)
        if cond not in ('0', '1'):
            if names.search(cond): return body   # a use this pass does not understand: leave the rest as it is
            body = body[:o + 1] + cond + body[c:]
            continue
        # then-part
        k = c + 1
        while body[k] in ' \n': k += 1
        if body[k] == '{': te = match(body, k, '{', '}'); then = body[k + 1:te]
        else: te = body.find(';', k); then = body[k:te + 1]
        # else-part
        j = te + 1
        while j < len(body) and body[j] in ' \n': j += 1
        els, ee = '', te
        if body.startswith('else', j) and not IDENT.match(body[j + 4:j + 5] or ' '):
            k = j + 4
            while body[k] in ' \n': k += 1
            if body[k] == '{': ee = match(body, k, '{', '}'); els = body[k + 1:ee]
            elif body.startswith('if', k):
                # else if: its extent is the whole if statement chain; keep it as the else text
                e2 = stmt_end(body, k); els = body[k:e2 + 1]; ee = e2
            else: ee = body.find(';', k); els = body[k:ee + 1]
        keep = then if cond == '1' else els
        body = body[:st] + keep + body[ee + 1:]
    return body


def stmt_end(body, k):
    """index of the last char of the statement starting at k (if/else chains, blocks, simple statements)"""
    if body.startswith('if', k):
        o = body.find('(', k); c = match(body, o, '(', ')')
        j = c + 1
        while body[j] in ' \n': j += 1
        e = match(body, j, '{', '}') if body[j] == '{' else stmt_end(body, j)
        j = e + 1
        while j < len(body) and body[j] in ' \n': j += 1
        if body.startswith('else', j) and not IDENT.match(body[j + 4:j + 5] or ' '):
            j += 4
            while body[j] in ' \n': j += 1
            return match(body, j, '{', '}') if body[j] == '{' else stmt_end(body, j)
        return e
    if body[k] == '{': return match(body, k, '{', '}')
    return body.find(';', k)


# ---------------------------------------------------------------- rewrite
IMG = open(os.path.join(ROOT, 'disc', '1ST_READ.BIN'), 'rb').read()   # the game's own program image, loaded at 0x8c010000


def cstring(addr):
    """the printable NUL-terminated string at a guest address, as a C literal, or None"""
    o = addr - 0x8c010000
    if not 0 <= o < len(IMG): return None
    e = IMG.find(b'\0', o, o + 512)
    if e < 0 or e - o < 2: return None
    b = IMG[o:e]
    if not all(32 <= x < 127 or x in (9, 10) for x in b): return None
    return '"' + b.decode().replace('\\', '\\\\').replace('"', '\\"').replace('\n', '\\n').replace('\t', '\\t') + '"'


STR_SYM = re.compile(r'\bs_[A-Za-z0-9_]*_(8c[0-9a-f]{6})\b')
STR_DATA = re.compile(r'\(?&DATA_(8c[0-9a-f]{6})\)?(?: \+ (0x[0-9a-f]+|\d+))?')
NEG_ADDR = re.compile(r'(?<![\w.])-0x(7[0-9a-f]{7})\b')


def strings_and_addresses(body):
    body = sub_code(STR_SYM, lambda m: cstring(int(m.group(1), 16)) or m.group(0), body)
    def data(m):
        n = m.group(2); a = int(m.group(1), 16) + (int(n, 0) if n else 0)
        return cstring(a) or m.group(0)
    body = sub_code(STR_DATA, data, body)
    def neg(m):
        v = 0x100000000 - int(m.group(1), 16)
        return '0x%08x' % v if 0x8c000000 <= v < 0x8d000000 else m.group(0)
    body = sub_code(NEG_ADDR, neg, body)
    body = re.sub(r'\+ 0x8c', '+ 0x8c', body)
    return body


GLOB_DEREF = re.compile(r'(?<![A-Za-z0-9_)\]])\*(0x8c[0-9a-f]{6})\b')
GLOB_DAT = re.compile(r'\b_?DAT_(8c[0-9a-f]{6})\b')
NULLCAST = re.compile(r'\([A-Za-z_][A-Za-z0-9_ ]*\*+\)0x0\b')


def rewrite(f, names, live, byname_arity, globals_used):
    body = f.body
    # FPSCR
    fixed = [v for v in ('SZ', 'PR') if 'in_FPSCR_' + v in body and not re.search(r'\bin_FPSCR_%s\s*=[^=]' % v, body)]
    if fixed:
        body = collapse_fpscr(body, fixed)
        for v in fixed:
            if len(re.findall(r'\bin_FPSCR_%s\b' % v, body)) == 1:
                body = re.sub(r"\n\s*(?:char|byte|undefined1) in_FPSCR_%s;" % v, '', body)
    # call sites: trim to the callee's arity
    out, last = [], 0
    for callee, args, o, c in calls_in(body, byname_arity):
        n = byname_arity[callee]
        if len(args) > n and all(re.fullmatch(r"\s*[-&*\w.()\[\]>' ]*\s*", a) and '=' not in a and not re.search(r'\w\s*\(', a) for a in args[n:]):
            out.append(body[last:o + 1]); out.append(','.join(args[:n]).strip() if n else ''); last = c
    out.append(body[last:])
    body = ''.join(out)
    # parameters
    lv = live.get(f.name, [])
    n = (max([i for i, x in enumerate(lv) if x], default=-1) + 1) if lv else len(f.params)
    params = f.params[:n]
    extra_locals = []
    for i in range(n, len(f.params)):
        pn = f.pnames[i]
        if pn and re.search(r'\b%s\b' % re.escape(pn), body): extra_locals.append(f.params[i] + ';')
    ren = {}
    for i, pn in enumerate(f.pnames[:n]):
        if pn in PARAM_NAMES: ren[pn] = PARAM_NAMES[pn] if lv and lv[i] else 'unused_' + PARAM_NAMES[pn]
    for i, pn in enumerate(f.pnames[n:]):
        if pn in PARAM_NAMES: ren[pn] = 'r%s' % pn[2:]
    if extra_locals:
        body = body.replace('{', '{\n  ' + '\n  '.join(extra_locals), 1)
    sig_params = []
    for p in params:
        for a, b in ren.items(): p = re.sub(r'\b%s\b' % a, b, p)
        sig_params.append(p)
    for a, b in ren.items(): body = sub_code(re.compile(r'\b%s\b' % a), b, body)
    # register-copy locals that only feed dead arguments: `x = y;` with x used nowhere else
    for _ in range(3):
        decl = [v for v in re.findall(r'\n\s+(?!return\b)[A-Za-z_]\w*(?: \w+)*\s*\**\s*\b([A-Za-z_]\w*);', body) if v not in ('break', 'continue')]
        removed = False
        for v in decl:
            uses = len(re.findall(r'\b%s\b' % re.escape(v), body))
            copies = re.findall(r'\n\s*%s = [A-Za-z_]\w*;' % re.escape(v), body)
            if uses == 1 + len(copies) and copies:
                body = re.sub(r'\n\s*%s = [A-Za-z_]\w*;' % re.escape(v), '', body)
                body = re.sub(r'\n\s+(?!return\b)[A-Za-z_][\w ]*?\**\s*\b%s;' % re.escape(v), '', body, count=1); removed = True
            elif uses == 1:
                body = re.sub(r'\n\s+(?!return\b)[A-Za-z_][\w ]*?\**\s*\b%s;' % re.escape(v), '', body, count=1); removed = True
        if not removed: break
    body = strings_and_addresses(body)
    body = re.sub(r'\+ (0x8c[0-9a-f]{6})', r'+ \1', body)
    # decompiler housekeeping comments inside the body
    body = re.sub(r'[ \t]*/\* WARNING: (?:%s)[^*]*\*/[ \t]*\n' % '|'.join(re.escape(w) for w in DROP_WARN), '', body)
    # globals
    def gd(m): globals_used.add(m.group(1)[2:]); return 'g_' + m.group(1)[2:]
    def gdat(m): globals_used.add(m.group(1)); return 'g_' + m.group(1)
    body = sub_code(GLOB_DEREF, gd, body)
    body = sub_code(GLOB_DAT, gdat, body)
    body = sub_code(NULLCAST, 'NULL', body)
    # names and types
    def nm(m):
        w = m.group(0)
        if w in TYPES: return TYPES[w]
        a = names.get(w)
        return a if a else w
    body = sub_code(IDENT, nm, body)
    ret = IDENT.sub(nm, f.ret)
    sig = [IDENT.sub(nm, p) for p in sig_params]
    return ret, sig or ['void'], body


def header(f, newname, callers, hint, strings, curated_note):
    lines = ['%s  0x%08x' % (newname, f.addr)]
    if curated_note: lines.append(curated_note)
    if hint: lines.append(hint)
    if callers:
        cs = sorted(set(callers))
        lines.append('called by: ' + ', '.join(cs[:8]) + (' (+%d more)' % (len(cs) - 8) if len(cs) > 8 else ''))
    if strings: lines.append('strings: ' + '; '.join(strings[:4]) + (' ...' if len(strings) > 4 else ''))
    for n in f.notes: lines.append('decompiler: ' + n)
    return '/*\n' + ''.join(' * %s\n' % l.replace('*/', '* /') for l in lines) + ' */\n'


# ---------------------------------------------------------------- names from a function's shape
NUM = r'(?:0x[0-9a-f]+|\d+)'
FIELD_T = {'char': '_s8', 'undefined1': '_u8', 'undefined': '_u8', 'byte': '_u8', 'uchar': '_u8', 'short': '_s16',
           'undefined2': '_u16', 'ushort': '_u16', 'float': '_f32'}
DECL = re.compile(r'(?!return\b)[A-Za-z_][\w ]*?[\s*]+[A-Za-z_]\w*(?:\s*\[\d+\])?;')


def statements(body):
    """the body's statements, one per line, without declarations; None if it has any control flow"""
    st = []
    for l in re.sub(r'/\*.*?\*/', '', body[1:-1], flags=re.S).split('\n'):
        l = l.strip()
        if not l or DECL.fullmatch(l): continue
        if '{' in l or '}' in l or re.match(r'(if|for|while|do|switch|goto)\b', l) or re.match(r'\w+:$', l): return None
        st.append(l)
    return st


def hexoff(n):
    return '%x' % int(n, 0)


def field(e, f):
    """'*(T *)(ar4 + N)', '*ar4', 'ar4[N]' -> (offset hex, type suffix), else None"""
    m = re.fullmatch(r'\*\((\w[\w ]*?) \*\)\((?:ar4 \+ (%s)|(%s) \+ ar4)\)' % (NUM, NUM), e)
    if m: return hexoff(m.group(2) or m.group(3)), FIELD_T.get(m.group(1), '')
    p0 = f.params[0] if f.params else ''
    base = p0.rsplit('*', 1)[0].strip() if '*' in p0 else None
    size = {'char': 1, 'undefined1': 1, 'byte': 1, 'short': 2, 'undefined2': 2, 'ushort': 2}.get(base, 4)
    if base is None: return None
    if e == '*ar4': return '0', FIELD_T.get(base, '')
    m = re.fullmatch(r'ar4\[(%s)\]' % NUM, e)
    if m: return '%x' % (int(m.group(1), 0) * size), FIELD_T.get(base, '')
    return None


def shape_name(f, cur):
    """a descriptive name for a function whose whole body is one recognisable idiom (accessor, constant, forwarder, ...);
    cur maps old names to current names. Returns (name, hint) or None."""
    st = statements(f.body)
    if st is None or len(st) > 4: return None
    ret = st[-1] if st and st[-1].startswith('return') else None
    rv = ret[6:].strip(' ;') if ret else ''
    body = st[:-1] if ret else st
    # a 'return' of a scratch register or of a temporary set to a constant is housekeeping
    if body and re.fullmatch(r'(\w+) = %s;' % NUM, body[0]) and rv == body[0].split()[0]: body, rv = body[1:], 'in_r0'
    junk = rv in ('', 'in_r0') or re.fullmatch(r'\(?\w*\)?' + NUM, rv) or rv in ('ar4', 'ar5')
    if not body:
        if rv in ('', 'in_r0'): return 'noop', 'does nothing'
        if re.fullmatch(r'(?:\(\w+\))?' + NUM, rv): return 'ret_const_%s' % hexoff(re.sub(r'^\(\w+\)', '', rv)), None
        m = re.fullmatch(r'(?:\(\w+ \*\))?\(?(?:ar4|\(int\)ar4) \+ (%s)\)?' % NUM, rv)
        if m: return 'field_ptr_%s' % hexoff(m.group(1)), 'returns the address of the member at +0x%s' % hexoff(m.group(1))
        m = re.fullmatch(r'(?:\(\w+\))?(.+)', rv)
        fl = field(m.group(1), f) if m else None
        if fl: return 'get_field_%s%s' % fl, None
        m = re.fullmatch(r'(?:\(\w+\))?_?DAT_(8c[0-9a-f]{6})', rv)
        if m: return 'get_g_%s' % m.group(1), 'returns the global at 0x%s' % m.group(1)
        m = re.fullmatch(r'(?:\(\w+ \*?\))?&?_?DATA?_(8c[0-9a-f]{6})', rv)
        if m: return 'get_ptr_%s' % m.group(1), 'returns the address 0x%s' % m.group(1)
        m = re.fullmatch(r'\(\*\*\(code \*\*\)\(\*(?:\(int \*\))?\(?ar4(?: \+ (%s))?\)?\s*\+\s*(%s)\)\)\(.*\)' % (NUM, NUM), rv)
        if m:
            k = int(m.group(2), 0) // 4
            return ('vcall_field_%s_slot%d' % (hexoff(m.group(1)), k) if m.group(1) else 'vcall_slot%d' % k), \
                'calls virtual slot %d of the object %s' % (k, 'at +0x%s' % hexoff(m.group(1)) if m.group(1) else 'passed in')
    if len(body) == 1 and junk:
        s = body[0]
        m = re.fullmatch(r'(.+?) = (?:\(\w+\))?(ar5|%s|in_fr4);' % NUM, s)
        fl = field(m.group(1), f) if m else None
        if fl:
            v = m.group(2)
            if v in ('ar5', 'in_fr4'): return 'set_field_%s%s' % fl, None
            return ('clear_field_%s%s' % fl if int(v, 0) == 0 else 'set_field_%s%s_to_%s' % (fl + (hexoff(v),))), None
        m = re.fullmatch(r'(.+?) = (.+?) ([+|&-]) (?:\(\w+\))?(?:\'\\x)?([0-9a-fx]+)\'?;', s)
        if m and m.group(1) == m.group(2) and field(m.group(1), f):
            o, t = field(m.group(1), f)
            op = {'+': 'inc', '-': 'dec', '|': 'set_bits', '&': 'mask'}[m.group(3)]
            return ('%s_field_%s%s' % (op, o, t) if op in ('inc', 'dec') else '%s_%s%s_%s' % (op, o, t, m.group(4).replace('0x', ''))), None
        m = re.fullmatch(r'_?DAT_(8c[0-9a-f]{6}) = (?:\(\w+\))?ar4;', s)
        if m: return 'set_g_%s' % m.group(1), 'stores its argument in the global at 0x%s' % m.group(1)
    # forwarders: the whole body is one call to a named function
    call = None
    if not body and rv: call, res = rv, None
    elif len(body) == 1 and (junk or re.fullmatch(r'\w+', rv)): call, res = body[0].rstrip(';'), rv
    if call:
        m = re.fullmatch(r'(?:(\w+) = )?(?:\(\w+\))?(\w+)\((.*)\)', call)
        if m and (m.group(1) is None or m.group(1) == res or junk):
            callee = cur.get(m.group(2), m.group(2))
            first = split_args(m.group(3))[0].strip() if m.group(3).strip() else ''
            if callee == 'vec_delete_array':
                a = re.search(r'8c[0-9a-f]{6}', first)
                if a: return 'destroy_array_%s' % a.group(0), 'destroys the global array at 0x%s' % a.group(0)
            if callee.startswith(('FUN_', 'halt_', 'thunk_FUN_')) or not IDENT.fullmatch(callee): return None
            stem = re.sub(r'_(?:8c)?[0-9a-f]{6}$', '', callee)
            if stem == 'noop': return 'noop', 'only calls %s, which does nothing' % callee
            fm = re.fullmatch(r'\(?(?:ar4|\(int\)ar4) \+ (%s)\)?' % NUM, first)
            if fm: return '%s_on_field_%s' % (stem, hexoff(fm.group(1))), 'calls %s on the member at +0x%s' % (callee, hexoff(fm.group(1)))
            if stem.endswith('_wrap'): return None
            return stem + '_wrap', 'only calls %s' % callee
    return None


def vtable_names(f, vt):
    """constructor / destructor of a class with a vtable: the body stores a known vtable into the object's first word"""
    stores = [m.group(1) for m in re.finditer(r'\*ar4 = (?:\(\w+ \*?\))?(?:&DAT_|&DATA_|0x)(8c[0-9a-f]{6})[;,)]', f.body)]
    stores = [s for s in stores if s in vt]
    if not stores: return None
    # g++ 2.x destructors take (this, in_chrg), test this for NULL and free this when in_chrg says so
    dtor = re.search(r'\(ar5 & 1\)|\bfree_if_nonnull\(ar4\b|ar4 != \(\w+ \*\)0x0', f.body) is not None
    cls = vt[stores[0] if dtor else stores[-1]]
    return ('%s_dtor' % cls if dtor else '%s_ctor' % cls), 'stores the vtable 0x%s' % (stores[0] if dtor else stores[-1])


def main():
    mods = sorted(x for x in os.listdir(SRC) if x.startswith('mod_') and x.endswith('.c'))
    raw = [(m,) + parse_module(os.path.join(SRC, m)) for m in mods]
    # one body per address: the region modules carry the merged (current) bodies; mod_redo*.c / mod_extra.c only add addresses
    # the modules lack. Every function goes to the file of its 64 KB region, in address order.
    best = {}
    for m, title, fs in sorted(raw, key=lambda r: not re.fullmatch(r'mod_8c[0-9a-f]{6}\.c', r[0])):
        for f in fs:
            if f.addr not in best or (best[f.addr].body is None and f.body is not None): best[f.addr] = f
    regions = collections.defaultdict(list)
    for a in sorted(best): regions[a & ~0xffff].append(best[a])
    parsed = [('mod_%08x.c' % r, 'Seaman (USA) region 0x%08x-0x%08x (Ghidra decompiler, cleaned up by tools/readable.py)' % (r, r + 0x10000), regions[r]) for r in sorted(regions)]
    mods = [m for m, _, _ in parsed]
    allf = [f for _, _, fs in parsed for f in fs]
    # Ghidra gave a few one-call stubs the name of the function they jump to; the function whose address is in the name (else
    # the longest body) keeps it, the stubs go back to FUN_<addr> so the wrapper rule below names them after their target
    same = collections.defaultdict(list)
    for f in allf: same[f.name].append(f)
    for n, fs in same.items():
        keep = sorted(fs, key=lambda f: ('%06x' % (f.addr & 0xffffff) not in n, -len(f.body or '')))
        for f in keep[1:]: f.name = 'FUN_%08x' % f.addr
    names, hints, curated = load_names(allf)
    # library error messages name functions: CRI "...(ADXF_Seek)" and mwRna "E1201:mwRnaCreate ..." name the function that
    # prints them; mwSnd "sdPstmPlay return error in mwSndPlay" names that function and the callee whose result it checked
    taken = collections.Counter(names.values())
    def give(a, new, why):
        if not names[a].startswith('FUN_') or a in curated: return
        if taken[new]: new = '%s_%06x' % (new, a & 0xffffff)
        taken[new] += 1; names[a] = new; hints[a] = 'named from the library error message ' + why
    by_old_name = {f.name: f for f in allf}
    for f in allf:
        if f.body is None: continue
        body = strings_and_addresses(f.body)
        own = set()
        for lit in re.finditer(r'"((?:[^"\\]|\\.)*)"', body):
            t = lit.group(1)
            m = re.search(r'\(((?:ADX|SJ|mw)[A-Za-z0-9]*_[A-Za-z0-9]+)\)\s*(?:\\n)?$', t)
            if m: own.add(m.group(1))
            m = re.match(r'E\d+:\s*(mw(?:Rna|Snd)[A-Z]\w+)\b(?! return)', t)
            if m: own.add(m.group(1))
            m = re.match(r'E\d+:(\w+) return error(?: in (\w+))?', t)
            if m:
                if m.group(2): own.add(m.group(2))
                calls = [c for c in re.finditer(r'\b(\w+) = (\w+)\(', body[:lit.start()])]
                if calls and calls[-1].group(2) in by_old_name:
                    give(by_old_name[calls[-1].group(2)].addr, m.group(1), '"%s"' % t[:60])
        if len(own) == 1:
            o = own.pop(); give(f.addr, o, 'it prints (%s)' % o)
    # a function that passes exactly one "Class::Method(...)" string (the error reporter's `where` argument) is that method
    taken = collections.Counter(names.values())
    for f in allf:
        if f.body is None or not names[f.addr].startswith('FUN_') or f.addr in curated: continue
        sigs = set(re.findall(r'"([A-Z]\w*)::(~?\w+)\([^"]*\)"', strings_and_addresses(f.body)))
        if len(sigs) == 1:
            c, m = sigs.pop(); new = '%s_%s' % (c, m.replace('~', 'dtor_'))
            if taken[new]: new = '%s_%06x' % (new, f.addr & 0xffffff)
            taken[new] += 1; names[f.addr] = new; hints.pop(f.addr, None)
    # constructors and destructors from vtable stores, then whole-body idioms (accessors, constants, forwarders); forwarders to a
    # function named in an earlier round get named in the next
    vt = {}
    for l in open(os.path.join(NOTES, 'vtables.tsv')):
        a = l.rstrip('\n').split('\t')
        if len(a) >= 4: vt[a[0]] = a[3]
    for rnd in range(3):
        cur = {f.name: names[f.addr] for f in allf}
        for f in allf:
            if f.body is None or f.addr in curated: continue
            # slot-0 methods and the free_if_nonnull wrappers that store a vtable are destructors
            if rnd == 0 and re.match(r'(C\w+_m0_|free_if_nonnull_wrap_)', names[f.addr]): got = vtable_names(f, vt)
            elif not names[f.addr].startswith('FUN_'): continue
            else: got = (vtable_names(f, vt) if rnd == 0 else None) or shape_name(f, cur)
            if not got: continue
            new, why = got
            if taken[new]: new = '%s_%06x' % (new, f.addr & 0xffffff)
            taken[new] += 1; names[f.addr] = new
            if why: hints[f.addr] = why
    by_old = {}
    for f in allf: by_old[f.name] = f
    known = set(by_old)
    live, info = arities([f for f in allf if f.body is not None], known)
    arity = {}
    for f in allf:
        if f.body is None: continue
        lv = live.get(f.name, [])
        arity[f.name] = max([i for i, x in enumerate(lv) if x], default=-1) + 1
    for f in allf:   # arities stated in tools/readable_names.tsv (library functions)
        c = curated.get(f.addr)
        if c and c[2] is not None and f.name in live:
            live[f.name] = [i < c[2] for i in range(len(live[f.name]))]; arity[f.name] = c[2]
    # names must be unique: the notes tables and the rounds above can hand one name to two functions; a curated one keeps it,
    # otherwise the lowest address does, and the rest get their address appended
    seen = set()
    for f in sorted(allf, key=lambda f: (f.addr not in curated, f.addr)):
        n = names[f.addr]
        if n in seen: names[f.addr] = n = '%s_%06x' % (n, f.addr & 0xffffff)
        seen.add(n)
    rename = {f.name: names[f.addr] for f in allf}
    # callers (direct calls, by new name)
    callers = collections.defaultdict(list)
    for f in allf:
        if f.body is None: continue
        for callee, *_ in calls_in(f.body, known): callers[callee].append(rename[f.name])
    os.makedirs(os.path.join(OUT, 'include'), exist_ok=True)
    globals_used = set()
    index = []
    for mod, title, fns in parsed:
        parts = ['/* %s */\n\n#include "seaman.h"\n#include "globals.h"\n\n' % title.strip('/* ').strip(' */')]
        for f in fns:
            new = rename[f.name]
            if f.body is None:
                parts.append('/* %s  0x%08x: no body (%s) */\n\n' % (new, f.addr, ' '.join(f.raw.split())[:80])); continue
            ret, sig, body = rewrite(f, rename, live, arity, globals_used)
            strs = []
            for s in re.findall(r'"((?:[^"\\]|\\.){3,})"', body):
                if s not in strs: strs.append('"%s"' % s[:60])
            parts.append(header(f, new, callers.get(f.name), hints.get(f.addr), strs, curated.get(f.addr, ('', '', None))[1]))
            parts.append('%s %s(%s)\n%s\n\n' % (ret, new, ', '.join(sig), body))
            index.append((f.addr, new, mod, len(sig) if sig != ['void'] else 0))
        open(os.path.join(OUT, mod), 'w').write(''.join(parts))
    # globals header
    gt = {}
    p = os.path.join(NOTES, 'global_types.tsv')
    for l in open(p):
        a = l.rstrip('\n').split('\t')
        if len(a) >= 4: gt[a[0]] = (a[2], a[3])
    gl = ['/* globals referenced by address in the decompile; type from Ghidra where it had one */\n#pragma once\n#include "seaman.h"\n\n']
    for g in sorted(globals_used):
        size, t = gt.get(g, ('4', 'undefined4'))
        ty = {'undefined1': 'u8', 'undefined2': 'u16', 'undefined4': 'u32', 'undefined8': 'u64', 'pointer': 'void *', 'string': 'char'}.get(t, 'u32')
        if ty == 'char': gl.append('extern char g_%s[%s];\n' % (g, size))
        else: gl.append('extern %s g_%s;\n' % (ty, g))
    open(os.path.join(OUT, 'include', 'globals.h'), 'w').write(''.join(gl))
    with open(os.path.join(OUT, 'functions.tsv'), 'w') as fo:
        fo.write('address\tname\tfile\tparams\n')
        for a, n, m, k in sorted(index): fo.write('%08x\t%s\t%s\t%d\n' % (a, n, m, k))
    # format
    style = '{BasedOnStyle: LLVM, IndentWidth: 4, ColumnLimit: 120, AllowShortFunctionsOnASingleLine: None, SortIncludes: Never}'
    def fmt(m): subprocess.run(['clang-format', '-i', '--style=' + style, os.path.join(OUT, m)], check=False)
    with ThreadPoolExecutor(8) as ex: list(ex.map(fmt, mods))
    trimmed = sum(1 for f in allf if f.body is not None and arity.get(f.name, 4) < len(f.params))
    print('%d functions, %d with trimmed parameters, %d named, %d globals' % (len(index), trimmed, sum(1 for _, n, _, _ in index if not n.startswith('FUN_')), len(globals_used)))


main()
