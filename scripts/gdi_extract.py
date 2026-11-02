import struct, sys, os
trk, out = sys.argv[1], sys.argv[2]
BASE = 45000
f = open(trk, 'rb')
def sector(lba):
    f.seek((lba - BASE) * 2352)
    d = f.read(2352)
    mode = d[15]
    return d[16:16+2048] if mode == 1 else d[24:24+2048]
pvd = sector(BASE + 16)
assert pvd[1:6] == b'CD001', pvd[:8]
root_lba, root_len = struct.unpack('<I', pvd[156+2:156+6])[0], struct.unpack('<I', pvd[156+10:156+14])[0]
print('volume', pvd[40:72].strip(), 'root', root_lba, root_len)
def read_file(lba, size):
    out = bytearray()
    n = (size + 2047) // 2048
    for i in range(n):
        out += sector(lba + i)
    return bytes(out[:size])
def walk(lba, size, path):
    data = read_file(lba, size)
    i = 0
    while i < len(data):
        l = data[i]
        if l == 0:
            i = (i // 2048 + 1) * 2048
            continue
        rec = data[i:i+l]
        flba = struct.unpack('<I', rec[2:6])[0]
        fsz = struct.unpack('<I', rec[10:14])[0]
        flags = rec[25]
        nl = rec[32]
        name = rec[33:33+nl]
        i += l
        if name in (b'\x00', b'\x01'):
            continue
        name = name.decode('ascii', 'replace').split(';')[0]
        p = os.path.join(path, name)
        if flags & 2:
            os.makedirs(os.path.join(out, p), exist_ok=True)
            walk(flba, fsz, p)
        else:
            os.makedirs(os.path.join(out, path), exist_ok=True)
            open(os.path.join(out, p), 'wb').write(read_file(flba, fsz))
            print(p, fsz, 'lba', flba)
walk(root_lba, root_len, '')
