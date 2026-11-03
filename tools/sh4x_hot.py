#!/usr/bin/env python3
"""Pick functions for tools/sh4_translate.py from an SH4_PROF run: the `prof block <addr> <count>` lines of a test log (interpreted
instructions per 64-byte block) are charged to the function that contains each block (src/modules/function_index.tsv).
usage: sh4x_hot.py <root> <log> [coverage, default 0.95]  - prints the functions, hottest first, and whether each is interpreted"""
import bisect, sys
R, log = sys.argv[1], sys.argv[2]; cov = float(sys.argv[3]) if len(sys.argv) > 3 else 0.95
fs = sorted((int(l.split('\t')[0], 16), int(l.split('\t')[1])) for l in open(R + '/src/modules/function_index.tsv').read().splitlines()[1:])
st = [a for a, _ in fs]
interp = set(int(l.strip().rstrip(',').rstrip('u'), 16) for l in open(R + '/port/wii/host/interp_tab.inc') if l.strip())
names = dict((l.split('\t')[0], l.split('\t')[1]) for l in open(R + '/decomp/functions.tsv').read().splitlines()[1:])
tot = {}; allc = 0
for l in open(log, errors='replace'):
    if not l.startswith('prof block'): continue
    _, _, a, c = l.split(); a = int(a, 16); c = int(c); allc += c
    i = bisect.bisect_right(st, a) - 1
    f = fs[i][0] if i >= 0 and a < fs[i][0] + fs[i][1] else a
    if f == a and i + 1 < len(fs) and fs[i + 1][0] < a + 64: f = fs[i + 1][0]   # a block that starts in a gap: the function starting inside it
    tot[f] = tot.get(f, 0) + c
run = 0
for f, c in sorted(tot.items(), key=lambda x: -x[1]):
    run += c
    print('%08x %10d %5.1f%% %s %s' % (f, c, 100.0 * run / allc, 'I' if f in interp else '-', names.get('%08x' % f, '?')))
    if run >= cov * allc: break
