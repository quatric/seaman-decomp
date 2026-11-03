#!/usr/bin/env python3
"""Regenerate port/wii/decls.h with each function's real return type (the x86 build declared everything
`ulonglong f()`, which on 32-bit PowerPC returns in r3:r4 and would read garbage from 32-bit callees).
usage: wii_decls.py <port dir>"""
import re, sys, glob, os
port = sys.argv[1]
ret = {}
DEF = re.compile(r'^([A-Za-z_][A-Za-z_0-9 \*<>]*?)\s*([A-Za-z_0-9]+)_def\(', re.M)
for f in glob.glob(os.path.join(port, 'wii', 'src', 'mod_8c*.cpp')):
    for m in DEF.finditer(open(f).read()):
        t = re.sub(r'\s+', ' ', m.group(1).strip())
        if t in ('unsigned long long', 'ulonglong', 'undefined8', 'longlong', 'long long'): r = 'unsigned long long'
        elif t == 'float': r = 'float'
        elif t == 'void': r = 'void'
        else: r = 'unsigned'
        ret[m.group(2)] = r
src = open(os.path.join(port, 'decls.h')).read()
ARGS = ','.join(['unsigned=0'] * 16)
def sub(m):
    name = m.group(1)
    if name == 'main': name = 'guest_main'
    return '%s %s(%s);' % (ret.get(m.group(1), 'unsigned'), name, ARGS)
out = re.sub(r'^ulonglong (\w+)\(\);$', sub, src, flags=re.M)
# libm / intrinsics with real floating-point signatures
for n in ('sin', 'cos', 'SQRT'):
    out = re.sub(r'^unsigned %s\(.*\);$' % n, 'double %s(double);' % n, out, flags=re.M)
out = out.replace('#include "prelude.h"', '#include "prelude.h"\nextern "C" {', 1) + '\n}\n'
open(os.path.join(port, 'wii', 'decls.h'), 'w').write(out)
# calls through xlat() read r3 only; a 64-bit return lands in r3:r4 (r3 = high word), so the table points those entries at 32-bit thunks
ull = sorted(n for n, v in ret.items() if v == 'unsigned long long' and n != 'main')
host = os.path.join(port, 'wii', 'host')
open(os.path.join(host, 'xthunks.inc'), 'w').write(''.join('static unsigned xt_%s(unsigned a, unsigned b, unsigned c, unsigned d) { return (unsigned)%s(a, b, c, d); }\n' % (n, n) for n in ull))
xt = open(os.path.join(host, 'xtab.inc')).read().replace('(void*)xt_', '(void*)')   # a unit whose return type changed loses its thunk
for n in ull: xt = xt.replace('(void*)%s,' % n, '(void*)xt_%s,' % n)
open(os.path.join(host, 'xtab.inc'), 'w').write(xt)
print(len(ret), 'definitions;', sum(1 for v in ret.values() if v != 'unsigned'), 'non-32-bit returns')
