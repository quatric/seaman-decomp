# Parse the ISO9660 metadata at the start of port/disc.head (mkisofs output of disc/) into port/disc.map: "<first sector> <sectors> <host path>"
import os, struct, sys
R = sys.argv[1]
head = open(R + '/port/disc.head', 'rb').read()
def rec(buf, off):
    ln = buf[off]
    if ln == 0: return None
    ext = struct.unpack_from('<I', buf, off + 2)[0]; size = struct.unpack_from('<I', buf, off + 10)[0]
    flags = buf[off + 25]; nl = buf[off + 32]; name = buf[off + 33:off + 33 + nl].decode('latin1')
    return ln, ext, size, flags, name
out = []
def walk(ext, size, hostdir):
    data = head[ext * 2048:ext * 2048 + size]
    off = 0
    while off < len(data):
        r = rec(data, off)
        if r is None: off = (off // 2048 + 1) * 2048; continue
        ln, e, sz, fl, name = r
        off += ln
        if name in ('\x00', '\x01'): continue
        nm = name.split(';')[0]
        real = None
        for f in os.listdir(hostdir):
            if f.upper() == nm.upper(): real = f
        if real is None: print('no host file for', nm, file=sys.stderr); continue
        p = os.path.join(hostdir, real)
        if fl & 2: walk(e, sz, p)
        else: out.append((e, (sz + 2047) // 2048, p))
pvd = head[16 * 2048:17 * 2048]
rr = rec(pvd, 156)
walk(rr[1], rr[2], R + '/disc')
open(R + '/port/disc.map', 'w').write(''.join('%d %d %s\n' % x for x in sorted(out)))
print(len(out), 'files; volume sectors', struct.unpack_from('<I', pvd, 80)[0])

# GD-ROM discs store extents with a +45000 offset (the game reads FAD = extent + 150), so rebase every extent in the metadata the game will parse.
OFF = 45000
hb = bytearray(head)
def rebase_rec(buf, off):
    e = struct.unpack_from('<I', buf, off + 2)[0]
    struct.pack_into('<I', buf, off + 2, e + OFF); struct.pack_into('>I', buf, off + 6, e + OFF)
def rebase_dir(ext, size):
    off = 0
    base = ext * 2048
    while off < size:
        ln = hb[base + off]
        if ln == 0: off = (off // 2048 + 1) * 2048; continue
        e = struct.unpack_from('<I', hb, base + off + 2)[0]; fl = hb[base + off + 25]; nl = hb[base + off + 32]; name = hb[base + off + 33:base + off + 33 + nl]
        sz = struct.unpack_from('<I', hb, base + off + 10)[0]
        if name not in (b'\x00', b'\x01') and fl & 2: rebase_dir(e, sz)
        rebase_rec(hb, base + off); off += ln
pv = 16 * 2048
rext = struct.unpack_from('<I', hb, pv + 156 + 2)[0]; rsz = struct.unpack_from('<I', hb, pv + 156 + 10)[0]
rebase_dir(rext, rsz)
rebase_rec(hb, pv + 156)
ptsize = struct.unpack_from('<I', hb, pv + 132)[0]
for loc_off, le in ((140, True), (144, True), (148, False), (152, False)):
    loc = struct.unpack_from('<I' if le else '>I', hb, pv + loc_off)[0]
    if loc == 0: continue
    p = loc * 2048; end = p + ptsize
    while p < end and hb[p] != 0:
        di = hb[p]
        e = struct.unpack_from('<I' if le else '>I', hb, p + 2)[0]
        struct.pack_into('<I' if le else '>I', hb, p + 2, e + OFF)
        p += 8 + di + (di & 1)
    # the path-table location fields themselves also carry the offset
    struct.pack_into('<I' if le else '>I', hb, pv + loc_off, loc + OFF)
open(R + '/port/disc.head', 'wb').write(bytes(hb))
print('rebased metadata by', OFF)
