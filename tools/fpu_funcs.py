#!/usr/bin/env python3
"""List the ported functions whose SH-4 body executes FPU instructions (these run in the SH-4 interpreter on Wii).
usage: fpu_funcs.py <root> [out.txt]
Each function is decoded by recursive descent from its entry (branches, delay slots; literal pools are never decoded as code).
A computed jump (braf/jmp inside the body) falls back to a linear scan up to the next function start, skipping known pool words."""
import struct, sys, re, os, bisect
R = sys.argv[1]
D = open(os.path.join(R, 'disc/1ST_READ.BIN'), 'rb').read()
BASE = 0x8c010000
END = BASE + len(D)
def w(a): return struct.unpack_from('<H', D, a - BASE)[0]
def sx(v, b): return v - (1 << b) if v & (1 << (b - 1)) else v

tab = open(os.path.join(R, 'port/exec/xlat_tab.c')).read()
NAMES = dict((int(m.group(1), 16), m.group(2)) for m in re.finditer(r'\{0x(8c[0-9a-f]{6}),\(void\*\)\w+,"(\w+)"\}', tab))
starts = sorted(NAMES)

def is_fpu(o):
    hi = o >> 12
    if hi == 0xf: return True
    lo8 = o & 0xff
    if hi == 4 and lo8 in (0x5a, 0x6a, 0x56, 0x66, 0x52, 0x62): return True     # lds/sts(.l) fpul/fpscr
    if hi == 0 and lo8 in (0x5a, 0x6a): return True
    return False

def decode(entry, limit):
    seen, pools, work = set(), set(), [entry]
    ext = [limit]
    tails = TAILS.setdefault(entry, [])
    fpu = computed = False
    while work:
        pc = work.pop()
        while BASE <= pc < END - 2 and pc not in seen:
            if pc in pools: break
            seen.add(pc)
            o = w(pc); hi = o >> 12; n = (o >> 8) & 15
            if is_fpu(o): fpu = True
            if hi == 0xd: pools.add((pc & ~3) + 4 + (o & 0xff) * 4); pools.add((pc & ~3) + 6 + (o & 0xff) * 4)
            elif hi == 0x9: pools.add(pc + 4 + (o & 0xff) * 2)
            elif hi == 0xc and n == 7: pools.add((pc & ~3) + 4 + (o & 0xff) * 4)
            if o == 0x000b or (o & 0xf0ff) == 0x402b:                     # rts / jmp: delay slot then stop
                if (o & 0xf0ff) == 0x402b: computed = True
                if is_fpu(w(pc + 2)): fpu = True
                seen.add(pc + 2); break
            if (o & 0xf0ff) == 0x0023:                                    # braf
                computed = True
                if is_fpu(w(pc + 2)): fpu = True
                seen.add(pc + 2); break
            if hi == 8 and n in (9, 11, 13, 15):                          # bt / bf / bt.s / bf.s
                work.append(pc + 4 + sx(o & 0xff, 8) * 2)
            elif hi == 0xa:                                               # bra
                t = pc + 4 + sx(o & 0xfff, 12) * 2
                if is_fpu(w(pc + 2)): fpu = True
                seen.add(pc + 2)
                if entry <= t < ext[0]: pc = t; continue
                tails.append(t)
                break                                                     # tail branch into another function
            pc += 2
            if pc >= ext[0]:                                              # straight-line code runs past a spurious table entry (split prologue)
                i = bisect.bisect_right(starts, pc)
                ext[0] = starts[i] if i < len(starts) else END
    if computed and not fpu:
        # switch tables follow computed jumps and can look like FPU words: trust the linear scan only when the decompile handles floats too
        for pc in range(entry, ext[0], 2):
            if pc in pools or (pc - 2) in pools: continue
            if is_fpu(w(pc)) and w(pc) not in (0xffff,): fpu = 'scan'; break
    return fpu

sys.path.insert(0, os.path.join(R, 'tools')); import units
EXEC = units.load(os.path.join(R, 'port/exec'), 'c')
FLOATY = re.compile(r'\b(?:float|double|(?:in|extraout)_(?:fr|dr|xd)\d+|F32HI|F32LO|CONCAT44D)\b')
def floaty(a):
    t = EXEC.get('%x' % a)
    return t is not None and bool(FLOATY.search(t))
TAILS = {}
out = []
nscan = 0
for i, a in enumerate(starts):
    limit = starts[i + 1] if i + 1 < len(starts) else END
    f = decode(a, limit)
    if f == 'scan':
        f = floaty(a); nscan += bool(f)
    if f: out.append(a)
print(nscan, 'found by the linear scan', file=sys.stderr)
# a function that ends in a tail branch into an FPU function hands it the FPU registers: interpret it too
fs = set(out); changed = True
while changed:
    changed = False
    for a, ts in TAILS.items():
        if a not in fs and any(starts[bisect.bisect_right(starts, t) - 1] in fs for t in ts): fs.add(a); changed = True   # target may be inside a function
print(len(fs) - len(out), 'added through tail branches', file=sys.stderr)
out = sorted(fs)
print(len(out), 'of', len(starts), 'functions use the FPU', file=sys.stderr)
txt = ''.join('%x %s\n' % (a, NAMES[a]) for a in out)
if len(sys.argv) > 2: open(sys.argv[2], 'w').write(txt)
else: sys.stdout.write(txt)
