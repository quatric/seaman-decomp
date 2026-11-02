# Which functions read caller-pushed stack arguments? (positive offsets from the entry sp in the current decompile)
import re, glob, sys
R = sys.argv[1]
out = []
for f in glob.glob(R + '/port/fn/*.c'):
    t = open(f).read(); addr = f.split('/')[-1][:-2]
    mx = -1
    for m in re.finditer(r'\bin_stack_([0-9a-f]{8})\b', t): mx = max(mx, int(m.group(1), 16))
    for m in re.finditer(r'\blocal_res([0-9a-f]+)\b', t): mx = max(mx, int(m.group(1), 16))
    for m in re.finditer(r'\bstack0x([0-9a-f]{8})\b', t):
        v = int(m.group(1), 16)
        if v < 0x80: mx = max(mx, v)
    if 0 <= mx < 0x40: out.append((addr, mx // 4 + 1))
open(R + '/notes/stackargs.tsv', 'w').write(''.join('%s\t%d\n' % x for x in sorted(out)))
print(len(out), 'functions with stack args; max words', max(w for _, w in out))
