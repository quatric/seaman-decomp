import struct, sys
src, dst, base = sys.argv[1], sys.argv[2], int(sys.argv[3], 16)
data = open(src, 'rb').read()
ehsz, phsz, shsz = 52, 32, 40
shstr = b'\0.text\0.shstrtab\0'
off_data = 0x100
off_shstr = off_data + len(data)
off_sh = (off_shstr + len(shstr) + 3) & ~3
eh = b'\x7fELF' + bytes([1, 1, 1, 0]) + b'\0' * 8
eh += struct.pack('<HHIIIIIHHHHHH', 2, 42, 1, base, ehsz, off_sh, 0x0, ehsz, phsz, 1, shsz, 3, 2)
ph = struct.pack('<IIIIIIII', 1, off_data, base, base, len(data), len(data), 7, 0x1000)
sh = b'\0' * 40
sh += struct.pack('<IIIIIIIIII', 1, 1, 7, base, off_data, len(data), 0, 0, 4, 0)
sh += struct.pack('<IIIIIIIIII', 7, 3, 0, 0, off_shstr, len(shstr), 0, 0, 1, 0)
out = bytearray(eh + ph)
out += b'\0' * (off_data - len(out))
out += data + shstr
out += b'\0' * (off_sh - len(out))
out += sh
open(dst, 'wb').write(out)
