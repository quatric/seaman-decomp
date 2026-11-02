# Functions whose decompile reads r0/r1 as live-in registers: notes/regin.tsv (addr, uses_r0, uses_r1)
import re, glob, sys
R = sys.argv[1]
skip = {'8c010468', '8c01051c', '8c010614', '8c0106dc', '8c0101e4', '8c010284', '8c01031c', '8c0103d0'}
out = []
for f in sorted(glob.glob(R + '/port/fn/*.c')):
    a = f.split('/')[-1][:-2]
    if a in skip: continue
    t = open(f).read()
    u0 = bool(re.search(r'\bin_r0\b', t)); u1 = bool(re.search(r'\bin_r1\b', t))
    if u0 or u1: out.append('%s\t%d\t%d\n' % (a, u0, u1))
open(R + '/notes/regin.tsv', 'w').write(''.join(out))
print(len(out))
