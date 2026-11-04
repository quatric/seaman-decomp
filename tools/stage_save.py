#!/usr/bin/env python3
"""Build a later-stage Seaman habitat (SM2000US.USR) from a blank one.

usage: stage_save.py <in USR> <out USR> <records.txt> <kind> <code> [substage] [--land]

records.txt holds the "rec <kind> <code> +<off> <words...>" lines a RECORD_DUMP test build logs: the 0xf0-byte record the
creature's own save method (vtable +0x158, CAnimal_state_save) writes. The record is put in the habitat's item list the way
CGame_GetUserGameInfo (8c0c3bxx) lays it out:
  water tank (habitat byte +0xa8 < 3): count at +0x1b4, records of 0xf0 bytes from +0x1ec (kind at +0x18 of each)
  land (habitat byte >= 3, --land):    count at +0x2790, records from +0x2794
The USR data starts at file offset 0x280 (VMS header 0x80 + one icon 0x200); the VMS CRC is fixed at the end.
Record fields: +0x18 kind, +0x4c talk block: +0x54 growth-stage code (+0x13c), +0x50 its row (table 0x8c13019c), +0x76 sub-stage
(+0xa8 block field 0x16). The stage the game reports (vtable +0x148) is min(row length - 1, sub-stage)."""
import struct, sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import vms

ROWS = [[1], [2, 3, 4], [6, 7], [0xa], [9], [0xb], [0xc, 0xd], [0xe, 0xf, 0x10], [0x11, 0x12, 0x13], [0x14], [0], [0x15], [5],
        [0x16], [8], [0x17], [0x18], [0x19]]

def load_records(path):
    recs = {}
    for l in open(path, errors='ignore'):
        p = l.split()
        if len(p) < 5 or p[0] != 'rec' or not p[3].startswith('+'): continue
        k, c, off = int(p[1]), int(p[2]), int(p[3][1:], 16)
        b = recs.setdefault((k, c), bytearray(0xf0))
        for i, w in enumerate(p[4:]):
            b[off + 4 * i:off + 4 * i + 4] = struct.pack('<I', int(w, 16))
    return recs

def main():
    a = [x for x in sys.argv[1:] if not x.startswith('--')]
    land = '--land' in sys.argv
    src, dst, rp, kind, code = a[0], a[1], a[2], int(a[3], 0), int(a[4], 0)
    sub = int(a[5], 0) if len(a) > 5 else None
    rec = load_records(rp).get((kind, code))
    if rec is None: sys.exit('no record for kind %d code %d in %s' % (kind, code, rp))
    rec = bytearray(rec)
    if sub is not None:
        rec[0x76:0x78] = struct.pack('<h', sub)
    rec[0x54:0x58] = struct.pack('<I', code)
    rec[0x50:0x54] = struct.pack('<I', next(i for i, r in enumerate(ROWS) if code in r))
    f = bytearray(open(src, 'rb').read()); D = 0x280
    if land:
        f[D + 0xa8] = 3
        n = f[D + 0x2790]; at = D + 0x2794 + n * 0xf0; f[D + 0x2790] = n + 1
    else:
        n = f[D + 0x1b4]; at = D + 0x1ec + n * 0xf0; f[D + 0x1b4] = n + 1
        # put it in the middle of the tank: the Nautilus record's position
        rec[0x1c:0x28] = f[D + 0x1ec + 0x1c:D + 0x1ec + 0x28]
    f[at:at + 0xf0] = rec
    open(dst, 'wb').write(vms.fix(f))
    print('%s: kind %d code %d sub %s in %s slot %d at +%x' % (dst, kind, code, sub, 'land' if land else 'tank', n, at - D))

main()
