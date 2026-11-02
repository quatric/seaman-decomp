import re, glob, os, sys, collections
R = sys.argv[1]
hdr = re.compile(r'^/\* (\S+) @ ([0-9a-f]{8}) callers=(\d+) callees=(\d+) \*/$', re.M)
KW = set('if while for switch return sizeof else do case default goto'.split())
MAC = set('CONCAT44 CONCAT12 CONCAT22 CONCAT13 CONCAT31 CONCAT11 CONCAT14 CONCAT24 CONCAT16 CONCAT17 ABS SUB84 SUB44 SUB41 SUB42 SUB81 SUB82 ZEXT48 ZEXT44 SEXT48 POPCOUNT'.split())
MAC |= {'CONCAT%d%d' % (a, b) for a in range(1, 8) for b in range(1, 8) if a + b <= 8}
funcs = {}
FUNC_NAMES = set()
for f in sorted(glob.glob(R + '/src/clean/mod_*.c')):
    t = open(f).read(); h = list(hdr.finditer(t))
    for i, m in enumerate(h):
        b = t[m.end(): h[i+1].start() if i + 1 < len(h) else len(t)]
        b = re.sub(r'/\*.*?\*/', '', b, flags=re.S).strip('\n')
        funcs[m.group(1)] = (m.group(2), b)
for _f in sorted(glob.glob(R + '/src/clean/mod_*.c')):
    for _m in hdr.finditer(open(_f).read()): FUNC_NAMES.add(_m.group(1))
def fix(b):
    b = re.sub(r'\(float\)(?!\()(p\w+)', r'(float)(uint)\1', b)
    b = re.sub(r'case \([\w ]+\*+\)(0x[0-9a-f]+):', r'case \1:', b)
    b = re.sub(r'(\(undefined4 \*\*\))\((SUB84)', r'\1(uint)(\2', b)
    b = re.sub(r'= \*(uStack_\w+);', r'= *(undefined4 *)(unsigned)\1;', b)
    b = re.sub(r'\((\w+) \*\)(ar\d)\[', r'(\1 *)(uint)\2[', b)
    b = re.sub(r'case \(undefined \*+\)(0x[0-9a-f]+):', r'case \1:', b)
    b = re.sub(r'\(undefined \*\)\*(ar\d)\b', r'(undefined *)(uint)*\1', b)
    b = re.sub(r'switch\((pp\w+)\)', r'switch((uint)\1)', b)
    b = re.sub(r'\b(0x[0-9a-f]+)\[(\(int\)\w+|\w+)\]', r'((undefined1 *)\2)[\1]', b)
    b = re.sub(r'switch\(((?:ar|pp|pu)\w*)\)', r'switch((uint)\1)', b)
    b = re.sub(r'(?<![(\w])\*\(code \*\)\(', r'*(undefined4 *)(', b)
    b = re.sub(r'&\((?:int|uint)\)(0x[0-9a-f]+)', r'((undefined1 *)\1)', b)
    b = re.sub(r'(?m)^(\s*)\(\*\*\(code \*\*\)', r'\1(**(code **)', b)
    b = re.sub(r'\bchar (in_FPSCR_(?:SZ|PR));', r'char \1 = 0;', b)
    b = re.sub(r'\b_(\w*Stack\w*_\w+)', r'\1', b)
    b = re.sub(r'(\w+)\._(\d)_(\d)_', lambda m: '(*(((uchar*)&%s)+%s))' % (m.group(1), m.group(2)) if False else '(*(uint*)((uchar*)&%s+%s))' % (m.group(1), m.group(2)), b)
    A = r'0x(?:8c|a0|a4|a5|ac|ff|f0)[0-9a-f]{6}'
    b = re.sub(r'\(\*\(undefined4 \*\)(' + A + r')\)\(', r'(*(code **)\1)(', b)
    b = re.sub(r'\(\*(' + A + r')\)\(', r'(*(code *)\1)(', b)
    b = re.sub(r'(?m)^(\s*)(auStack_\w+) = ', r'\1*(ulonglong *)\2 = ', b)
    b = re.sub(r'(?m)^(\s*)(auStack_\w+) = ', r'\1*(ulonglong *)\2 = ', b)
    b = re.sub(r'(?m)^(\s*)(0x[0-9a-f]+) = ', r'\1*(undefined4 *)\2 = ', b)
    b = re.sub(r'\*\*\(undefined4 \*\)\(&(\w+)\)', r'**(undefined4 **)(&\1)', b)
    b = re.sub(r'\(float\)\(undefined \*\)(\w+)', r'(float)(uint)\1', b)
    b = re.sub(r'(?<![\w])_([A-Za-z]\w*)\(', r'\1(', b)
    b = re.sub(r'\(&\(&(\w+)\)\)\[', r'((code **)&\1)[', b)
    b = re.sub(r'switchD_(\w+)::switchdataD_(\w+)', r'switchdata_\1_\2', b)
    b = re.sub(r'(?<![\)\w*])\(&(\w+)\) = ', r'*(undefined4 *)(&\1) = ', b)
    b = re.sub(r'&(0x[0-9a-f]+)\b', r'(void *)\1', b)
    b = re.sub(r'\((undefined\d? \*)\)\*(param_\d+)', r'(\1)(uint)*\2', b)
    b = re.sub(r'(?<![\w\]])\*(' + A + r')\b', r'*(undefined4 *)\1', b)
    b = re.sub(r'\b(' + A + r')\[', r'((undefined4 *)\1)[', b)
    b = re.sub(r'(?<![\w*)\]\.>-])(' + A + r') = ', r'*(undefined4 *)\1 = ', b)
    b = re.sub(r'\(float\)(p\w*Var\w*)', r'(float)(uint)\1', b)
    b = re.sub(r'\b_(\w*Stack_\w+)', r'\1', b)
    RT = {'u': 'uint', 's': 'short', 'c': 'char', 'b': 'byte', 'i': 'int', 'p': 'undefined4 *', 'f': 'float', 'l': 'longlong', 'd': 'double', 'a': 'undefined4'}
    b = re.sub(r'\b([uscbipfld])Ram([0-9a-f]{8})\b', lambda m: '(*(%s *)0x%s)' % (RT[m.group(1)], m.group(2)), b)
    b = re.sub(r'\*\*\(undefined4 \*\)\(&(\w+)\)', r'**(undefined4 **)(&\1)', b)
    b = re.sub(r'(PTR_s_\w*?)>(\w+)', r'\1_\2', b)
    b = re.sub(r'= \(undefined \*\)\(SUB84', r'= (undefined *)(uint)(SUB84', b)
    b = re.sub(r'\(undefined1\s+\[\d+\]\)', r'(ulonglong)', b)
    b = re.sub(r'\(\*(_UNK_[0-9a-f]{8})\)\(', r'(*(code **)&\1)(', b)
    b = re.sub(r'\b_(\w+)\b(?!\()', lambda m: '0' if m.group(1) in FUNC_NAMES else m.group(0), b)
    return b
sigs = {}; decl_extra = set(); varnames = set(); called = set()
for name, (addr, b) in funcs.items():
    b = fix(b); funcs[name] = (addr, b)
    k = b.find('{')
    sig = b[:k].strip() if k > 0 else ''
    mm = re.search(r'\b' + re.escape(name) + r'\s*\(', sig)
    if mm:
        rt = sig[:mm.start()].strip() or 'int'
        sigs[name] = rt
for name, (addr, b) in funcs.items():
    for m in re.finditer(r'\b([A-Za-z_]\w*)\s*\(', b):
        n = m.group(1)
        if n not in KW and n not in MAC and n not in funcs and n not in ('code', 'char', 'int', 'short', 'uint', 'ulonglong', 'undefined4', 'undefined8', 'undefined2', 'undefined1', 'float', 'double', 'longlong', 'bool', 'ushort', 'byte', 'undefined', 'uchar', 'float10'):
            called.add(n)
ids = set(); arrs = set()
for name, (addr, b) in funcs.items():
    ids.update(re.findall(r'\b(_?[A-Za-z][A-Za-z0-9_]*_[0-9a-f]{8})\b', b))
    ids.update(re.findall(r'\b([a-z]Ram[0-9a-f]{8})\b', b))
    ids.update(re.findall(r'\b(stack0x[0-9a-f]{8})\b', b))
    ids.update(re.findall(r'\b(unique0x[0-9a-f]+)\b', b))
    ids.update(re.findall(r'\b(_UNK_[0-9a-f]{8})\b', b))
    arrs.update(re.findall(r'\b([A-Za-z_]\w*)\[', b))
    ids.update(re.findall(r'\b(register0x[0-9a-f]{8})\b', b))
    ids.update(re.findall(r'\b(switchdata_\w+)\b', b))
    ids.update(re.findall(r'\b(_?[A-Za-z][A-Za-z0-9_]*_[0-9a-f]{6})\b', b))
decls = ['#include "prelude.h"']
for name, rt in sorted(sigs.items()):
    decls.append('ulonglong %s();' % name)
for n in sorted(set(funcs) - set(sigs)):
    decls.append('ulonglong %s();' % n)
for n in sorted(called):
    decls.append('ulonglong %s();' % n)
for n in sorted(ids):
    if n in funcs or n in called or re.match(r'^(uVar|iVar|pcVar|puVar|lVar|dVar|fVar|bVar|cVar|sVar|uStack|auStack|in_|unaff_|extraout_|param_)', n): continue
    decls.append('extern undefined1 %s%s;' % (n, '[]' if n in arrs else ''))
open(R + '/port/decls.h', 'w').write('\n'.join(decls) + '\n')
for name, (addr, b) in funcs.items():
    b2 = re.sub(r'\b' + re.escape(name) + r'(\s*\()', name + r'_def\1', b, count=1)
    alias = '\n__asm__(".globl _%s\\n.set _%s, _%s_def\\n");\n' % (name, name, name)
    open(R + '/port/fn/%s.c' % addr, 'w').write('#include "../decls.h"\n' + b2 + '\n' + alias)
print(len(funcs), 'functions;', len(sigs), 'signatures;', len(called), 'external calls;', len(ids), 'idents')
