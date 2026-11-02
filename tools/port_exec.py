import re, sys, os
R = sys.argv[1]
idx = {}
rows = []
for l in open(R + '/src/modules/function_index.tsv').read().splitlines()[1:]:
    a, sz, n, ci, co = l.split('\t'); idx[n] = a; rows.append((int(a, 16), n)) if os.path.exists(R + '/port/fn/%s.c' % a) else None
REGIN_BY_NAME = {}
SYM = re.compile(r'\b(_?[A-Za-z][A-Za-z0-9_]*_([0-9a-f]{8}))\b')
LOCAL = re.compile(r'^(LAB_|switchD|caseD|param_|iVar|uVar|puVar|local_|auStack|uStack|in_|extraout_|pc|pi|pu|ppu|pp)')
def wrap_calls(b):
    out = []; i = 0
    while True:
        j1 = b.find('(*(code *)', i); j2 = b.find('(**(code **)', i); j3 = b.find('(*(code **)', i)
        cand = [(j, k) for j, k in ((j1, '(*(code *)'), (j2, '(**(code **)'), (j3, '(*(code **)')) if j >= 0]
        if not cand: out.append(b[i:]); break
        j, key = min(cand)
        depth = 0; k = j
        while True:
            c = b[k]
            if c == '(': depth += 1
            elif c == ')':
                depth -= 1
                if depth == 0: break
            k += 1
        inner = wrap_calls(b[j + len(key):k])
        out.append(b[i:j])
        if key == '(*(code *)': out.append('(*(code *)xlat((unsigned long)(%s)))' % inner)
        elif key == '(*(code **)': out.append('(*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(%s)))' % inner)
        else: out.append('(*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(%s)))' % inner)
        i = k + 1
    return ''.join(out)
sys.path.insert(0, R + '/tools')
from patches import PATCHES, STUBS, NATIVE, HOST
def rewrite_ptr_assign(b, pname, off):
    out = []; i = 0
    pat = re.compile(r'(?<![\*\w])' + pname + r'\b\s*=(?!=)\s*')
    while True:
        m = pat.search(b, i)
        if not m: out.append(b[i:]); break
        k = m.end(); d = 0
        while k < len(b):
            c = b[k]
            if c in '([{': d += 1
            elif c in ')]}':
                if d == 0: break
                d -= 1
            elif c in ',;' and d == 0: break
            k += 1
        out.append(b[i:m.start()])
        out.append('(*(unsigned *)(fr0_ %s) = (unsigned)(unsigned long)(%s))' % (off, b[m.end():k]))
        i = k
    return ''.join(out)
import glob
PTR_EV = re.compile(r'(?<![\w)\]])\*\s*_?DAT_([0-9a-f]{8})\b|\b_?DAT_([0-9a-f]{8})\s*(?:==|!=)\s*\((?:\w+ )*\*+\)|\b_?DAT_([0-9a-f]{8}) = &|\(\w[\w ]*\*+\)\s*\*\s*_?DAT_([0-9a-f]{8})\b|\b_?DAT_([0-9a-f]{8})\s*(?:\[|->)|\b_?DAT_([0-9a-f]{8})\s*= \(\w+ \*+\)')
PTRG = set()
for _f in glob.glob(R + '/port/fn/*.c'):
    _t = open(_f).read()
    for _m in re.finditer(r'(?<![\w)\]])\*\s*_?DAT_([0-9a-f]{8})\b|\b_?DAT_([0-9a-f]{8})\s*(?:==|!=)\s*\((?:\w+ )*\*+\)|\b_?DAT_([0-9a-f]{8}) = &|\(\w[\w ]*\*+\)\s*\*\s*_DAT_([0-9a-f]{8})\b|\b_DAT_([0-9a-f]{8})\s*(?:\[|->)|\b_DAT_([0-9a-f]{8})\s*= \(\w+ \*+\)', _t):
        PTRG.add(int(next(g for g in _m.groups() if g), 16))
REGIN = {}
if os.path.exists(R + '/notes/regin.tsv'):
    for _l in open(R + '/notes/regin.tsv').read().splitlines():
        _a, _u0, _u1 = _l.split('\t')
        REGIN[_a] = (int(_u0), int(_u1))
TYPES = {}
if os.path.exists(R + '/notes/global_types.tsv'):
    for _l in open(R + '/notes/global_types.tsv').read().splitlines():
        _p = _l.split('\t')
        if len(_p) >= 3 and _p[1] == 'scalar' and _p[2] == '4': TYPES[int(_p[0], 16)] = 4
# sizes the decompiler gave each global it touched when the second data block was made writable (notes/global_sizes_redo.tsv)
if os.path.exists(R + '/notes/global_sizes_redo.tsv'):
    for _l in open(R + '/notes/global_sizes_redo.tsv').read().splitlines():
        _p = _l.split('\t')
        if len(_p) >= 3 and _p[1] in ('2', '4', '8') and not (_p[2].endswith('[]') or '[' in _p[2]): TYPES[int(_p[0], 16)] = int(_p[1])
for _f in glob.glob(R + '/port/fn/*.c'):
    for _m in re.finditer(r'\bp+uRam(8c[0-9a-f]{6})\b', open(_f).read()): PTRG.add(int(_m.group(1), 16))
NOPTR = set(open(R + '/notes/noptr.txt').read().split()) if os.path.exists(R + '/notes/noptr.txt') else set()
CUR_NOPTR = False
USES_FRAME = False; CUR_K_G = 0; CUR_ANCHOR = None
def pad_calls(b):
    # Ghidra drops trailing argument registers it thinks are dead; pass the last register values for them
    out = []; i = 0
    pat = re.compile(r'\b([A-Za-z_]\w*)\(|\(\*\(code \*\)xlat\(')
    while True:
        m = pat.search(b, i)
        if not m: out.append(b[i:]); break
        if m.group(1) is not None:
            if m.group(1) not in idx: out.append(b[i:m.end()]); i = m.end(); continue
            start = m.end()                      # just after the call's '('
            prefix_end = m.end()
        else:
            # '(*(code *)xlat(' ... '))(' : skip to the matching close of xlat( then the '))' then '('
            depth = 1; k = m.end()
            while depth:
                depth += (b[k] == '(') - (b[k] == ')'); k += 1
            wm = re.compile(r'\)\s*\(').match(b, k)
            if not wm: out.append(b[i:m.end()]); i = m.end(); continue
            start = wm.end(); prefix_end = start
        depth = 1; k = start; args = []; cur = start
        while depth:
            c = b[k]
            if c == '(': depth += 1
            elif c == ')': depth -= 1
            elif c == ',' and depth == 1: args.append(b[cur:k]); cur = k + 1
            k += 1
        last = b[cur:k - 1]
        if last.strip() or args: args.append(last)
        inner = pad_calls(','.join(args)) if args else ''
        argl = [x for x in (pad_calls(a) for a in args)]
        while len(argl) < 4: argl.append('vr%d' % (4 + len(argl)))
        rin = []; rnames = []
        fl = REGIN.get(idx.get(m.group(1))) if m.group(1) is not None else None
        if fl and len(argl) > 4:
            rnames = [nm_ for nm_, f_ in (('vin0', fl[0]), ('vin1', fl[1])) if f_]
            rin = argl[4:4 + len(rnames)]; argl = argl[:4] + argl[4 + len(rnames):]
        extras = argl[4:]; argl = argl[:4]
        if USES_FRAME:
            spx = ('(%s ? (unsigned long)%s - %d : (unsigned long)(fr0_ - %d))' % (CUR_ANCHOR[0], CUR_ANCHOR[0], CUR_ANCHOR[1], CUR_K_G)) if CUR_ANCHOR else '((unsigned long)(fr0_ - %d))' % CUR_K_G
            out.append(b[i:m.start()])
            if extras or rin:
                if extras: spx = '(%s - %d)' % (spx, (4 * len(extras) + 7) & ~7)
                tmps = ''.join('unsigned long t%d_ = (unsigned long)(%s); ' % (j, e) for j, e in enumerate(extras))
                tmps += ''.join('unsigned long ri%d_ = (unsigned long)(%s); ' % (j, e) for j, e in enumerate(rin))
                stores = ''.join('*(unsigned *)(%s + %d) = (unsigned)t%d_; ' % (spx, 4 * j, j) for j in range(len(extras)))
                stores += ''.join('%s = (unsigned)ri%d_; ' % (nm_, j) for j, nm_ in enumerate(rnames))
                out.append('({ %s%svsp = %s; ' % (tmps, stores, spx))
            else:
                out.append('(vsp = %s, ' % spx)
            out.append(b[m.start():prefix_end])
        else: out.append(b[i:prefix_end])
        out.append(','.join(argl)); out.append(')')
        if USES_FRAME: out.append('; })' if (extras or rin) else ')')
        i = k
    return ''.join(out)
def fix_ptr_assigns(b):
    # assignments to pointer-typed variables from int values would sign-extend; go through unsigned
    names = set(re.findall(r'(?m)^  [A-Za-z_][\w ]*?[ \*]\*+\s*(\w+)(?: = [^;]+)?;', b)) | set(re.findall(r'(?m)^  [A-Za-z_][\w ]* \*\s*(\w+)(?: = [^;]+)?;', b))
    names |= set(re.findall(r'[A-Za-z_]\w*[ ]\*+(ar\d)\b', b.split('{', 1)[0]))
    names = {x for x in names if not x.startswith('fr_')}
    if not names: return b
    pat = re.compile(r'(?<![\w.>\])*\]])(' + '|'.join(sorted(map(re.escape, names))) + r') = (?!=)')
    out = []; i = 0
    while True:
        m = pat.search(b, i)
        if not m: out.append(b[i:]); break
        j = m.end(); depth = 0; k = j
        while k < len(b):
            c = b[k]
            if c in '([': depth += 1
            elif c in ')]':
                if depth == 0: break
                depth -= 1
            elif c in ';,' and depth == 0: break
            k += 1
        rhs = b[j:k]
        out.append(b[i:j]); out.append('(unsigned)(' + rhs + ')' if rhs.strip() and not rhs.strip().startswith('(unsigned)') else rhs); i = k
    return ''.join(out)
def narrow_ptr_loads(b):
    # guest pointers are 4 bytes; `*(T **)(unsigned)X` would read 8
    pat = re.compile(r'\*\(([A-Za-z_][\w ]*?) \*\*\)(?:\(unsigned\))?')
    out = []; i = 0
    while True:
        m = pat.search(b, i)
        if not m: out.append(b[i:]); break
        j = m.end()
        if b[j] == '(':
            depth = 0; k = j
            while True:
                depth += (b[k] == '(') - (b[k] == ')'); k += 1
                if depth == 0: break
        else:
            k = j
            while k < len(b) and (b[k].isalnum() or b[k] == '_'): k += 1
        if k == j: out.append(b[i:m.end()]); i = m.end(); continue
        while k < len(b) and b[k] == '[':
            depth = 0
            while True:
                depth += (b[k] == '[') - (b[k] == ']'); k += 1
                if depth == 0: break
        operand = narrow_ptr_loads(b[j:k])   # pointer loads nested inside the operand need narrowing too
        out.append(b[i:m.start()])
        outer_deref = m.start() > 0 and b[m.start() - 1] == '*'
        if not outer_deref and re.match(r'\s*[|+&^-]?=(?!=)', b[k:k+6]):
            out.append('*(unsigned *)(unsigned)' + operand)
        else:
            out.append('((%s *)(unsigned long)*(unsigned *)(unsigned)%s)' % (m.group(1), operand))
        i = k
    return ''.join(out)
n = 0
for a, fname in rows:
    name = fname; CUR_NOPTR = '%08x' % a in NOPTR
    if '%08x' % a in HOST:
        hf = HOST['%08x' % a]
        code = ('#include "../decls.h"\nunsigned long %s(unsigned long, unsigned long, unsigned long, unsigned long);\n'
                'unsigned long long %s_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)\n{\n  return %s(ar4, ar5, ar6, ar7);\n}\n'
                '__asm__(".globl _%s\\n.set _%s, _%s_def\\n");\n') % (hf, name, hf, name, name, name)
        fn = R + '/port/exec/%08x.c' % a
        if not (os.path.exists(fn) and open(fn).read() == code): open(fn, 'w').write(code)
        n += 1
        continue
    if '%08x' % a in NATIVE:
        sx, op = NATIVE['%08x' % a]
        T = 'int' if sx else 'unsigned'
        e = 'ar4 / ar5' if op == '/' else 'ar4 % ar5'
        code = ('#include "../decls.h"\nunsigned long long %s_def(unsigned long ar4_, unsigned long ar5_, unsigned long ar6, unsigned long ar7)\n{\n'
                '  %s ar4 = (%s)ar4_, ar5 = (%s)ar5_;\n  if (ar5 == 0) { *(unsigned *)0x8c2787a8 = 0x44e; return 0; }\n'
                '  return (unsigned long long)(unsigned)(%s);\n}\n__asm__(".globl _%s\\n.set _%s, _%s_def\\n");\n') % (name, T, T, T, e, name, name, name)
        fn = R + '/port/exec/%08x.c' % a
        if not (os.path.exists(fn) and open(fn).read() == code): open(fn, 'w').write(code)
        n += 1
        continue
    src = open(R + '/port/fn/%08x.c' % a).read()
    arrs = set(re.findall(r'\b([A-Za-z_]\w*)\[', src))
    PEV = set()
    for _m in re.finditer(PTR_EV, src): PEV.add(int(next(g for g in _m.groups() if g), 16))
    for _m in re.finditer(r'\bp+uRam(8c[0-9a-f]{6})\b', src): PEV.add(int(_m.group(1), 16))
    def sub(m):
        nm, ad = m.group(1), int(m.group(2), 16)
        is_arr = nm in arrs and TYPES.get(ad) != 4 and ad not in PEV
        if re.match(r'^(s|u)_\w+_8c[0-9a-f]{6}$', nm) and ad >= 0x8c130000: return '((undefined1 *)0x%x)' % ad   # string literal label: its address
        if not ((0x8c000000 <= ad < 0x8d000000) or (nm.lstrip('_').startswith('DAT_') and ad >= 0x04000000)) or nm.endswith('_def') or nm in idx or LOCAL.match(nm): return m.group(0)
        if re.match(r'_?PTR_', nm) and ad >= 0x8c130000 and ad < 0x8d000000: return '((undefined4 *)0x%x)' % ad if is_arr else '(*(undefined4 *)(unsigned)0x%x)' % ad   # pointer cell: the value is the 4-byte word
        if nm.startswith('_DAT_') and not is_arr and '%08x' % a in NOPTR: return '(*(undefined4 *)(unsigned)0x%x)' % ad
        if nm.startswith('_DAT_') and not is_arr:
            if ad in PEV: return '(*(undefined4 **)0x%x)' % ad
            return '(*(undefined4 *)(unsigned)0x%x)' % ad
        if nm.startswith('DAT_') and not is_arr and (TYPES.get(ad) == 4 or ad in PEV):
            return '(*(undefined4 **)0x%x)' % ad if ad in PEV else '(*(undefined4 *)(unsigned)0x%x)' % ad
        if nm.startswith('DAT_') and not is_arr and TYPES.get(ad) == 2: return '(*(undefined2 *)(unsigned)0x%x)' % ad
        if nm.startswith('DAT_') and not is_arr and TYPES.get(ad) == 8: return '(*(undefined8 *)(unsigned)0x%x)' % ad
        return '((undefined1 *)0x%x)' % ad if is_arr else '(*(undefined1 *)0x%x)' % ad
    body = src.split('\n', 1)[1]
    if '%08x' % a in STUBS:
        sig = body.split('{', 1)[0]
        tl = body[body.rfind('__asm__('):]
        body = sig + '{\n  return 0;\n}\n\n' + tl
    k = body.rfind('__asm__(')
    tail = body[k:]; body = body[:k]
    src2 = re.sub(r'\bp+uRam(8c[0-9a-f]{6})\b', r'_DAT_\1', src)
    body = re.sub(r'\bp+uRam(8c[0-9a-f]{6})\b', r'_DAT_\1', body)
    body = re.sub(r'\b(_?DAT_[0-9a-f]{8})_\d+\b', r'\1', body)
    body = re.sub(r'(\s)&(\s+_?DAT_)', lambda mm: mm.group(1) + '\x01' + mm.group(2), body)   # `x & DAT_y` is a bitwise and with the variable, not an address
    body = re.sub(r'&\s*_?DAT_(8c[0-9a-f]{6})\b(?!\s*[\[\.])', lambda mm: ('((undefined4 *)0x%s)' if TYPES.get(int(mm.group(1), 16)) == 4 else '((undefined1 *)0x%s)') % mm.group(1), body)
    body = body.replace('\x01', '&')
    body = SYM.sub(sub, body)
    # a word global is `undefined4` (unsigned); a comparison against a negative constant means the decompiler saw it as signed
    _w = r'\((\*\(undefined4 \*\)(?:\(unsigned\))*0x8c[0-9a-f]+)\)'
    body = re.sub(r'(-\d+) (<=?|>=?) ' + _w, r'\1 \2 (int)(\3)', body)
    body = re.sub(_w + r' (<=?|>=?) (-\d+)', r'(int)(\1) \2 \3', body)
    body = re.sub(r'\(int\)(0x8[0-9a-f]{7})\b', r'(unsigned)\1', body)   # a guest address cast to a signed int sign-extends when it later becomes a pointer
    body = re.sub(r'\(&(\w+)\)', lambda m: '((void *)0x%x)' % int(idx[m.group(1)], 16) if m.group(1) in idx else m.group(0), body)
    # float code: Ghidra models float registers as halves of a double built with CONCAT44 and takes them apart with SUB84; these are bit moves
    body = re.sub(r'\(double\)CONCAT44\(', 'CONCAT44D(', body)
    body = re.sub(r'\(float\)\(\(ulonglong\)(\w+) >> 0x20\)', r'F32HI(\1)', body)
    body = re.sub(r'\(ulonglong\)(dVar\w+)\b', r'D2U(\1)', body)
    body = re.sub(r'\bSUB84\((\w+),0\)(?= [*+/-] )', r'F32LO(\1)', body)
    body = re.sub(r'(?<=[*+/-] )SUB84\((\w+),0\)', r'F32LO(\1)', body)
    body = re.sub(r'(\bfVar\w+ = )SUB84\((\w+),0\)', r'\1F32LO(\2)', body)
    # code labels whose address is taken (constructor/callback entries): the guest address, translated to the ported function at call time
    body = re.sub(r'&LAB_(8c(?!000000)[0-9a-f]{6})\b', lambda m: '((void *)0x%s)' % m.group(1), body)
    if name == 'main': tail = tail.replace('.globl _main','.globl _game_main').replace('.set _main,','.set _game_main,')
    for pa, pre, prep in PATCHES:
        if pa == '%08x' % a: body = re.sub(pre, prep, body)
    body = re.sub(r'\(\*\(undefined1 \*\)(0x[0-9a-f]+)\)\(', r'(*(code *)xlat(\1UL))(', body)
    body = re.sub(r'\(\*\(undefined4 \*\)(?:\(unsigned\))*(0x[0-9a-f]+)\)\s*\(', r'(*(code *)xlat((unsigned long)*(unsigned *)\1UL))(', body)
    body = re.sub(r'\(\*\(\*\(undefined4 \*\)(?:\(unsigned\))*(0x[0-9a-f]+)\)\)\s*\(', r'(*(code *)xlat((unsigned long)*(unsigned *)(unsigned)*(unsigned *)\1UL))(', body)
    body = re.sub(r'&(\(\(undefined1 \*\)0x[0-9a-f]+\))', r'\1', body)
    body = re.sub(r'\((?!code )[A-Za-z_][\w ]*? \*+\)', lambda m: m.group(0) + '(unsigned)', body)
    # One contiguous guest stack. fr0_ is this function's entry sp (set by the caller through vsp). Ghidra's names give offsets:
    #   xStack_N / local_N = sp-N, stack0xNNNNNNNN = sp+signed, local_resN / in_stack_NNNNNNNN = sp+N (caller-pushed arguments).
    # Before each call vsp is set to the bottom of this frame, so the callee's sp+N lands on the arguments this function stored there.
    uses_frame = False; maxneg = 0
    ptrs = {}
    def decl(m):
        global uses_frame, maxneg
        ty, name, arr = (m.group(1).strip() + (' ' + m.group(2) if m.group(2) else '')).strip(), m.group(3), m.group(4)
        if ty.split()[0] in ('return', 'goto', 'else', 'case'): return m.group(0)
        mm = re.match(r'(?:\w*Stack_|local_)([0-9a-f]+)$', name)
        if mm: off = '- 0x' + mm.group(1); maxneg = max(maxneg, int(mm.group(1), 16))
        elif name.startswith('in_stack_'):
            v_ = int(name[9:], 16)
            if v_ >= 0x80000000: off = '- 0x%x' % (0x100000000 - v_); maxneg = max(maxneg, 0x100000000 - v_)   # caller-side slot below sp
            else: off = '+ 0x' + name[9:]
        else: off = '+ 0x' + re.match(r'local_res([0-9a-f]+)$', name).group(1)
        uses_frame = True
        ptrs[name] = (ty, bool(arr), off)
        return ''
    body = re.sub(r'(?m)^  ([A-Za-z_][\w ]*?)\s+(\**)(\w*Stack_[0-9a-f]+|local_[0-9a-f]+|local_res[0-9a-f]+|in_stack_[0-9a-f]+)( \[\d+\])?;\n', decl, body)
    for pname, (ty, isarr, off) in ptrs.items():
        if ty.strip().endswith('*') and not isarr and not CUR_NOPTR:
            body = re.sub(r'&\s*' + pname + r'\b', lambda mm: '((%s *)(fr0_ %s))' % (ty, off), body)
            body = rewrite_ptr_assign(body, pname, off)
            rep = '((%s)(unsigned long)*(unsigned *)(fr0_ %s))' % (ty, off)
        else: rep = '((%s *)(fr0_ %s))' % (ty, off) if isarr else '(*(%s *)(fr0_ %s))' % (ty, off)
        body = re.sub(r'\b' + pname + r'\b', rep.replace('\\', '\\\\'), body)
    body = re.sub(r'&(\(\([\w ]+ \*\)\(fr0_ [-+] 0x[0-9a-f]+\)\))', r'\1', body)
    if 'stack0x' in body:
        uses_frame = True
        for mm in re.finditer(r'stack0x([0-9a-f]{8})', body):
            v = int(mm.group(1), 16)
            if v >= 0x80000000: maxneg = max(maxneg, 0x100000000 - v)
        body = re.sub(r'&stack0x([0-9a-f]{8})', lambda m: '(fr0_ + (int)0x%s)' % m.group(1), body)
        body = re.sub(r'\bstack0x([0-9a-f]{8})', lambda m: '(*(undefined4 *)(fr0_ + (int)0x%s))' % m.group(1), body)
    pbase = {}; anchor = None; anchor_n = 0x40
    for mm in re.finditer(r'\b(\w+) = (?:\(\w+ \*\)\(unsigned\)\(\(int\))?&?\(+(?:\*?\(?[\w ]+ \*+\)\(fr0_ - 0x([0-9a-f]+)\))', body):
        pbase[mm.group(1)] = max(pbase.get(mm.group(1), 0), int(mm.group(2), 16))
    for mm in re.finditer(r'\(int\)(\w+) \+ -0x([0-9a-f]+)\b', body):
        if mm.group(1) in pbase:
            maxneg = max(maxneg, pbase[mm.group(1)] + int(mm.group(2), 16))
            if int(mm.group(2), 16) >= anchor_n: anchor = mm.group(1); anchor_n = int(mm.group(2), 16)
    dyn = 0
    for mm in re.finditer(r'\b0x(ffff[0-9a-f]{4})\b', body):
        v = int(mm.group(1), 16) | 0xffff0000
        if v >= 0xffffe000:
            dyn = max(dyn, 0x100000000 - v)   # frame-relative offsets built in a register (e.g. iVar = -0xd0)
            uses_frame = True
    CUR_K = (maxneg + dyn + 3) & ~3
    uses_frame = True   # every function re-establishes its entry sp before each call, even with no locals
    if uses_frame:
        body = body.replace('{', '{\n  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;\n  { unsigned char *z_ = fr0_ - %d; for (int i_ = 0; i_ < %d; i_++) z_[i_] = 0; }' % (CUR_K, CUR_K), 1)
    body = re.sub(r'(?m)^(  [A-Za-z_][\w ]*? \*?)(in_VBR|in_GBR);', lambda m: m.group(1) + m.group(2) + ' = (void *)0x8cf80000;', body)
    body = re.sub(r'(?m)^(  (?!return\b)[A-Za-z_][\w ]*? \*?)in_r([01]);', lambda mm: '%sin_r%s = (%s)(unsigned long)vin%s;' % (mm.group(1), mm.group(2), mm.group(1).strip().rstrip('*').strip() + (' *' if mm.group(1).rstrip().endswith('*') else ''), mm.group(2)), body)
    body = re.sub(r'(?m)^(  [A-Za-z_][\w ]*? \*?)((?:in|unaff|extraout)_\w+);', r'\1\2 = 0;', body)
    # function names used as values (not calls) become guest addresses, not host pointers
    def fnval(m):
        nm = m.group(2)
        return '((void *)0x%x)' % int(idx[nm], 16) if nm in idx and nm != 'main' else m.group(0)
    body = re.sub(r'(&\s*)?\b([A-Za-z_]\w*)\b(?!\s*\()', fnval, body)
    if fname.startswith('thunk_'): body = body.replace(')()', ')(ar4,ar5,ar6,ar7)')  # a thunk is a tail jump: it forwards r4-r7 untouched
    body = re.sub(r'\(\*(0x[0-9a-f]+)\)\(', r'(*(code *)xlat(\1))(', body)
    body = re.sub(r'\(\*\(\*\(undefined4 \*\*\)(?:\(unsigned\))?(0x[0-9a-f]+)\)\)\(', r'(*(code *)*(unsigned *)\1)(', body)
    # a pointer global is a 4-byte cell on the guest: `*(undefined4 **)` would read/write 8 host bytes and glue in the neighbouring cell
    _pc = r'\(\*\(undefined4 \*\*\)(?:\(unsigned\))*(0x[0-9a-f]+)\)'
    body = re.sub(r'(?<![\w)\]])\*' + _pc + r' = ([^;=][^;]*);', r'*(unsigned *)(unsigned long)*(unsigned *)\1 = (unsigned)(\2);', body)   # store through the pointer
    body = re.sub(_pc + r' = ([^;=][^;]*);', r'*(unsigned *)\1 = (unsigned)(unsigned long)(\2);', body)
    body = re.sub(_pc, r'((undefined4 *)(unsigned long)*(unsigned *)\1)', body)
    body = re.sub(r'(?m)^(\s*)\(\(undefined1 \*\)(?:\(unsigned\))?(0x[0-9a-f]+)\) = ', r'\1*(unsigned *)\2 = ', body)
    body = wrap_calls(body)
    cnames = set(re.findall(r'\bcode \*(\w+)', body)) | {'pcVar'}
    body = re.sub(r'\(\*((?:pcVar\w*|' + '|'.join(sorted(map(re.escape, cnames))) + r'))\)\(', r'(*(code *)xlat((unsigned long)\1))(', body)
    USES_FRAME = uses_frame; CUR_K_G = CUR_K; CUR_ANCHOR = (anchor, anchor_n) if anchor else None
    body = pad_calls(body)
    body = narrow_ptr_loads(body)
    # stack-passed arguments arrive in 8-byte host slots with undefined upper halves: read pointer-typed ones as 32-bit
    head, rest = body.split('{', 1)
    pre = ''
    def narrowp(m):
        global pre
        pre += '  %s %s = (%s)(unsigned long)%s_u;\n' % (m.group(1) + ' ' + m.group(2), m.group(3), m.group(1) + ' ' + m.group(2), m.group(3))
        return 'unsigned %s_u' % m.group(3)
    def stackparam(m):
        global pre
        ty, st, nm = m.group(1), m.group(2), m.group(3)
        off = int(nm[1:])
        if st: pre += '  %s %s = (%s)(unsigned long)*(unsigned *)(vsp + %d);\n' % (ty + ' ' + st, nm, ty + ' ' + st, off)
        else: pre += '  %s %s = *(%s *)(vsp + %d);\n' % (ty, nm, ty, off)
        return ''
    hp = head.index('(') if '(' in head else -1
    if hp >= 0 and re.search(r'\bain[01][,)]', head):
        plist = head[hp + 1:head.rindex(')')].split(',')
        keep = []
        for part in plist:
            mm = re.match(r'^\s*([A-Za-z_][\w ]*?)\s*(\**)(ain([01]))\s*$', part)
            if mm:
                ty, st = mm.group(1), mm.group(2)
                pre += '  %s %s = (%s)(unsigned long)vin%s;\n' % (ty + (' ' + st if st else ''), mm.group(3), ty + (' ' + st if st else ''), mm.group(4))
            else: keep.append(part)
        head = head[:hp + 1] + ','.join(keep) + head[head.rindex(')'):]
    if hp >= 0 and re.search(r'\bs\d+[,)]', head):
        plist = head[hp + 1:head.rindex(')')].split(',')
        keep = []
        for part in plist:
            mm = re.match(r'^\s*([A-Za-z_][\w ]*?)\s*(\**)(s\d+)\s*$', part)
            if mm and mm.group(3)[1:].isdigit(): stackparam(mm)
            else: keep.append(part)
        head = head[:hp + 1] + ','.join(keep) + head[head.rindex(')'):]
    body = head + '{\n' + pre + rest
    entry = '\n  ring[rp++ & 255] = "%s";' % fname
    if 'ar4' in body.split('{', 1)[0]:
        entry += '\n  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;'
    body = body.replace('{', '{' + entry, 1)
    body += tail
    new = '#include "../decls.h"\n#ifndef INFINITY\n#define INFINITY __builtin_inff()\n#endif\n#ifndef NAN\n#define NAN __builtin_nanf("")\n#endif\ntypedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;\nunsigned long xlat(unsigned long);\nextern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;\n' + body
    fn = R + '/port/exec/%08x.c' % a
    new = re.sub(r'(?<!\*)\(\(\(undefined4 \*\)\(unsigned long\)\*\(unsigned \*\)\(unsigned\)(0x[0-9a-f]+)\)\) = ([^;]+);', r'*(unsigned *)\1 = (unsigned)(unsigned long)(\2);', new)
    if not (os.path.exists(fn) and open(fn).read() == new): open(fn, 'w').write(new)
    n += 1
rows.sort()
with open(R + '/port/exec/xlat_tab.c', 'w') as f:
    f.write('#include "../decls.h"\n#include <stdint.h>\n#include <stdio.h>\nextern void abort(void);\nconst char *hostname(void *p);\n')
    f.write('ulonglong game_main();\n')
    f.write('const char *ring[256]; unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; unsigned long vsp;\nunsigned long guest_rts(unsigned long a, unsigned long b, unsigned long c, unsigned long d){ return 0; }\nunsigned long bios_stub(unsigned long a, unsigned long b, unsigned long c, unsigned long d){ extern unsigned long bios_call(unsigned long, unsigned long, unsigned long, unsigned long); return bios_call(a, b, c, d); }\n')
    f.write('struct ent { unsigned a; void *p; const char *n; };\nstruct ent xtab[] = {\n')
    for a, name in rows: f.write('{0x%x,(void*)%s,"%s"},\n' % (a, 'game_main' if name == 'main' else name, name))
    f.write('};\nint xn = %d;\n' % len(rows))
    f.write('''unsigned long xlat(unsigned long a){ unsigned long lo=0,hi=xn; if((a>>32)==0xffffffffUL) a&=0xffffffffUL; else if(a>>32) return a;
 if((a>>29)==5||(a>>29)==4||(a>>29)==0) a=0x80000000UL|(a&0x1fffffffUL);
 while(lo<hi){unsigned long m=(lo+hi)/2; if(xtab[m].a<a) lo=m+1; else hi=m;}
 if(lo<xn && xtab[lo].a==a) return (unsigned long)xtab[lo].p;\n if(a==0x8c0000f0UL) return (unsigned long)bios_stub;\n if(a>=0x8c010000UL && a<0x8d000000UL && *(unsigned short *)a==0x000bUL) return (unsigned long)guest_rts;
 /* jump thunk: mov.l @(disp,pc),rN ; jmp @rN ; nop - follow it to the real target */
 if(a>=0x8c010000UL && a<0x8d000000UL){ unsigned short w0=*(unsigned short *)a, w1=*(unsigned short *)(a+2); if((w0>>12)==0xd && (w1&0xf0ff)==0x402b && ((w1>>8)&15)==((w0>>8)&15)) return xlat((unsigned long)*(unsigned *)(((a&~3UL)+4)+(unsigned long)(w0&0xff)*4)); }
 fprintf(stderr,"xlat: unmapped call target %lx\\n",a); unsigned long *fp=(unsigned long*)__builtin_frame_address(0); for(int i=0;i<16&&fp&&(unsigned long)fp>0x100000;i++){const char*m=hostname((void*)fp[1]);fprintf(stderr,"  from %lx (%s)\\n",fp[1],m?m:"?");fp=(unsigned long*)fp[0];} abort(); }
const char *hostname(void *p){ const char *b=0; unsigned long bp=0; for(int i=0;i<xn;i++){ unsigned long q=(unsigned long)xtab[i].p; if(q<=(unsigned long)p && q>bp){bp=q;b=xtab[i].n;} } return ((unsigned long)p-bp<0x40000)?b:0; }
''')
print('exec units', n)
