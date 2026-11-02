import struct, sys
R = sys.argv[1]
f = open(R + '/disc/ADXPACK.AFS', 'rb')
hdr = f.read(8)
assert hdr[:4] == b'AFS\0', hdr
n = struct.unpack('<I', hdr[4:])[0]
toc = struct.unpack('<%dI' % (2 * n), f.read(8 * n))
ents = [(toc[2*i], toc[2*i+1]) for i in range(n)]
# name table pointer follows the TOC (aligned): offset/size pair, then names at that offset (48 bytes each: 32 name + 16 meta)
pos = 8 + 8 * n
f.seek(pos); no, ns = struct.unpack('<II', f.read(8))
names = []
if no and ns:
    f.seek(no); tbl = f.read(ns)
    for i in range(min(n, ns // 48)):
        names.append(tbl[i*48:i*48+32].split(b'\0')[0].decode('ascii', 'replace'))
out = open(R + '/notes/asset_manifest_afs.tsv', 'w')
out.write('index\toffset\tsize\tname\n')
bad = 0
import os
total = os.path.getsize(R + '/disc/ADXPACK.AFS')
for i, (o, s) in enumerate(ents):
    if o + s > total: bad += 1
    out.write('%d\t0x%x\t%d\t%s\n' % (i, o, s, names[i] if i < len(names) else ''))
print('afs entries', n, 'named', len(names), 'out-of-range', bad, 'name table at', hex(no), 'size', ns)
# TMCPACK.IDX: 32-byte name records
d = open(R + '/disc/TMCPACK.IDX', 'rb').read()
recs = [d[i:i+32].split(b'\0')[0] for i in range(0, len(d) - 31, 32)]
good = [r.decode('ascii', 'replace') for r in recs if r and all(32 <= c < 127 for c in r)]
open(R + '/notes/asset_manifest_tmcpack_idx.txt', 'w').write('\n'.join(good) + '\n')
print('tmcpack.idx records', len(recs), 'printable names', len(good), good[:3])
