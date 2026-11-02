import re, glob, sys, collections
R = sys.argv[1]
hdr = re.compile(r'^/\* (\S+) @ ([0-9a-f]{8}) callers=(\d+) callees=(\d+) \*/$', re.M)
num = re.compile(r'\b0x([0-9a-fA-F]{8})\b')
def klass(v):
    if 0xa05f8000 <= v < 0xa05f9000 or 0xa0000000 | 0x5f8000 <= v < 0xa05f9000 or 0x105f8000 <= v < 0x105f9000: return 'pvr'
    if 0xa05f7000 <= v < 0xa05f7500: return 'gdrom'
    if 0xa05f6800 <= v < 0xa05f6900: return 'g2dma'
    if 0xa05f6000 <= v < 0xa05f6800: return 'asic'
    if 0xa05f7400 <= v < 0xa05f7500: return 'g1'
    if 0xa0700000 <= v < 0xa0800000: return 'aica_reg'
    if 0xa0800000 <= v < 0xa0a00000: return 'aica_ram'
    if 0xa05f9000 <= v < 0xa0600000: return 'g2'
    if 0xa0400000 <= v < 0xa0800000 and False: return 'vram'
    if 0xa4000000 <= v < 0xa5000000: return 'vram64'
    if 0xa5000000 <= v < 0xa5800000: return 'vram'
    if 0x10000000 <= v < 0x10800000: return 'ta_fifo'
    if v in (0xffa00000, 0xffa0000c, 0xffa00010, 0xffa00014, 0xffa00018): return 'dmac'
    if 0xff000000 <= v < 0xff100000: return 'sh4_ccn'
    if 0xffa00000 <= v < 0xffa10000: return 'sh4_dmac'
    if 0xffd80000 <= v < 0xffd90000: return 'sh4_tmu'
    if v in (0x8c0000b0, 0x8c0000b4, 0x8c0000b8, 0x8c0000bc, 0x8c0000c0): return 'syscall'
    return None
rows = []; cnt = collections.Counter()
for f in sorted(glob.glob(R + '/src/clean/mod_*.c')):
    t = open(f).read()
    ms = list(hdr.finditer(t))
    for i, m in enumerate(ms):
        body = t[m.end(): ms[i+1].start() if i + 1 < len(ms) else len(t)]
        ks = collections.Counter(k for k in (klass(int(x, 16)) for x in num.findall(body)) if k)
        if ks:
            top = ks.most_common(1)[0][0]
            rows.append((int(m.group(2), 16), m.group(1), top, dict(ks)))
            cnt[top] += 1
print(cnt)
open(R + '/notes/hw_functions.tsv', 'w').write(''.join('%08x\t%s\t%s\t%s\n' % (a, n, k, ks) for a, n, k, ks in rows))
open(R + '/notes/names_hw.tsv', 'w').write(''.join('%08x\t%s_%06x\n' % (a, k, a & 0xffffff) for a, n, k, ks in rows if n.startswith('FUN_')))
