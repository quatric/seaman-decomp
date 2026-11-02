#!/usr/bin/env python3
"""Recover the dropped r0 of every call to the GCC pointer-to-member helper 8c0101bc (Ghidra: pure_virtual_stub).
usage: pmf_sites.py <root> [out.json]
For each `jsr` to 8c0101bc a straight-line symbolic walk from the function start gives r0 as an expression over the
function arguments and guest memory; the result is written as {unit: [C expression per call site, in address order]}."""
import struct, sys, re, json, os
R = sys.argv[1]
D = open(os.path.join(R, 'disc/1ST_READ.BIN'), 'rb').read()
BASE = 0x8c010000
HELPER = 0x8c0101bc
def w(a): return struct.unpack_from('<H', D, a - BASE)[0]
def l(a): return struct.unpack_from('<I', D, a - BASE)[0]
def sx(v, b): return v - (1 << b) if v & (1 << (b - 1)) else v

NAMES = dict((int(m.group(1), 16), m.group(2)) for m in re.finditer(r'\{0x(8c[0-9a-f]{6}),\(void\*\)\w+,"(\w+)"\}', open(os.path.join(R, 'port/exec/xlat_tab.c')).read()))
starts = sorted(int(m.group(1), 16) for m in re.finditer(r'\{0x(8c[0-9a-f]{6}),', open(os.path.join(R, 'port/exec/xlat_tab.c')).read()))
def fstart(a):
    import bisect
    return starts[bisect.bisect_right(starts, a) - 1]

# ---- call sites
sites = []
for pc in range(BASE, BASE + len(D) - 8, 2):
    o = w(pc)
    if o >> 12 == 0xd:
        la = (pc & ~3) + 4 + (o & 0xff) * 4
        if BASE <= la < BASE + len(D) - 4 and l(la) == HELPER:
            for k in range(1, 5):
                x = w(pc + 2 * k)
                if x & 0xf0ff == 0x400b and (x >> 8) & 15 == (o >> 8) & 15:
                    sites.append(pc + 2 * k); break

def const(v): return ('c', v & 0xffffffff)
def add(a, b):
    if a[0] == 'c' and b[0] == 'c': return const(a[1] + b[1])
    if a[0] == 'c' and a[1] == 0: return b
    if b[0] == 'c' and b[1] == 0: return a
    return ('add', a, b)
def shl(a, k):
    if a[0] == 'c': return const(a[1] << k)
    return ('shl', a, k)

def render(e):
    t = e[0]
    if t == 'c': return '0x%x' % e[1]
    if t == 'arg': return 'ar%d' % e[1]
    if t == 'add': return '(%s + %s)' % (render(e[1]), render(e[2]))
    if t == 'shl': return '(%s << %d)' % (render(e[1]), e[2])
    if t == 'call':
        return '(int)(vsp = (unsigned long)(fr0_ - 4096), %s(%s))' % (NAMES[e[1]], ','.join(render(a) if a[0] in ('c', 'arg', 'add', 'shl', 'ld', 'and', 'sx', 'call') else '0' for a in e[2]))
    if t == 'and': return '(%s & 0x%x)' % (render(e[1]), e[2])
    if t == 'sx': return '(%s)' % render(e[1]) if False else ('(int)(%s)(%s)' % ({8: 'signed char', 16: 'short'}[e[2]], render(e[1])))
    if t == 'ld':
        ty = {4: 'int', 2: 'short', 1: 'signed char'}[e[2]]
        return '*(%s *)(unsigned)(%s)' % (ty, render(e[1]))
    raise ValueError(e)

def slice_site(jsr):
    fs = fstart(jsr)
    Rg = [('u', i) for i in range(16)]
    for i in (4, 5, 6, 7): Rg[i] = ('arg', i)
    Rg[15] = ('sp', 0)
    mem = {}
    uncertain = []
    def isbr(o):
        return (o >> 12 == 8 and ((o >> 8) & 15) in (9, 11, 13, 15)) or o >> 12 == 0xa or o >> 12 == 0xb or (o & 0xf0ff) in (0x400b, 0x402b, 0x0023, 0x0003)
    fb = fs
    while fb < jsr and not isbr(w(fb)): fb += 2
    W = max(fb, jsr - 80)
    pcs = list(range(fs, min(fb, jsr), 2)) + list(range(W, jsr, 2))
    for pc in pcs:
        o = w(pc); hi = o >> 12; n = (o >> 8) & 15; m = (o >> 4) & 15; lo = o & 15; i8 = o & 255
        def spoff(r, d):
            return ('spoff', Rg[15][1] + d) if r == 15 and Rg[15][0] == 'sp' else None
        if hi == 0xd: Rg[n] = const(l((pc & ~3) + 4 + i8 * 4))
        elif hi == 0x9: Rg[n] = const(sx(w(pc + 4 + i8 * 2), 16))
        elif hi == 0xe: Rg[n] = const(sx(i8, 8))
        elif hi == 0x7:
            if n == 15 and Rg[15][0] == 'sp': Rg[15] = ('sp', Rg[15][1] + sx(i8, 8))
            else: Rg[n] = add(Rg[n], const(sx(i8, 8)))
        elif hi == 6 and lo == 3: Rg[n] = Rg[m]
        elif hi == 6 and lo == 12: Rg[n] = ('and', Rg[m], 0xff)               # extu.b
        elif hi == 6 and lo == 13: Rg[n] = ('and', Rg[m], 0xffff)             # extu.w
        elif hi == 6 and lo == 14: Rg[n] = ('sx', Rg[m], 8)                   # exts.b
        elif hi == 6 and lo == 15: Rg[n] = ('sx', Rg[m], 16)                  # exts.w
        elif hi == 6 and lo == 0: Rg[n] = ('ld', Rg[m], 1)
        elif hi == 0 and lo == 12: Rg[n] = ('ld', add(Rg[0], Rg[m]), 1)       # mov.b @(r0,Rm),Rn
        elif hi == 0 and lo == 13: Rg[n] = ('ld', add(Rg[0], Rg[m]), 2)       # mov.w @(r0,Rm),Rn
        elif hi == 8 and n == 0 and m == 15 and Rg[15][0] == 'sp': mem[Rg[15][1] + (o & 15)] = Rg[0]   # mov.b r0,@(d,r15)
        elif hi == 8 and n == 4 and m == 15 and Rg[15][0] == 'sp': Rg[0] = ('and', mem.get(Rg[15][1] + (o & 15), ('u', 0)), 0xff) if False else mem.get(Rg[15][1] + (o & 15), ('u', 0))
        elif hi == 8 and n == 4: Rg[0] = ('ld', add(Rg[m], const((o & 15))), 1)   # mov.b @(d,Rm),r0
        elif hi == 8 and n == 5: Rg[0] = ('ld', add(Rg[m], const((o & 15) * 2)), 2)  # mov.w @(d,Rm),r0
        elif hi == 3 and lo == 12:
            Rg[n] = add(Rg[n], Rg[m])
        elif hi == 4 and lo == 0 and m == 0: Rg[n] = shl(Rg[n], 1)           # shll
        elif hi == 4 and lo == 8 and m == 0: Rg[n] = shl(Rg[n], 2)           # shll2
        elif hi == 4 and lo == 8 and m == 1: Rg[n] = shl(Rg[n], 8)           # shll8
        elif hi == 4 and lo == 8 and m == 2: Rg[n] = shl(Rg[n], 16)          # shll16
        elif hi == 2 and lo == 6 and n == 15 and Rg[15][0] == 'sp':          # mov.l Rm,@-r15
            Rg[15] = ('sp', Rg[15][1] - 4); mem[Rg[15][1]] = Rg[m]
        elif hi == 6 and lo == 6 and m == 15 and Rg[15][0] == 'sp':          # mov.l @r15+,Rn
            Rg[n] = mem.get(Rg[15][1], ('u', n)); Rg[15] = ('sp', Rg[15][1] + 4)
        elif hi == 2 and lo == 2 and n == 15 and Rg[15][0] == 'sp': mem[Rg[15][1]] = Rg[m]
        elif hi == 1 and n == 15 and Rg[15][0] == 'sp': mem[Rg[15][1] + (o & 15) * 4] = Rg[m]   # mov.l Rm,@(d,r15)
        elif hi == 5 and m == 15 and Rg[15][0] == 'sp': Rg[n] = mem.get(Rg[15][1] + (o & 15) * 4, ('u', n))  # mov.l @(d,r15),Rn
        elif hi == 6 and lo == 2 and m == 15 and Rg[15][0] == 'sp': Rg[n] = mem.get(Rg[15][1], ('u', n))
        elif hi == 5:                                                       # mov.l @(d,Rm),Rn
            Rg[n] = ('ld', add(Rg[m], const((o & 15) * 4)), 4)
        elif hi == 6 and lo == 2: Rg[n] = ('ld', Rg[m], 4)
        elif hi == 6 and lo == 1: Rg[n] = ('ld', Rg[m], 2)
        elif hi == 0 and lo == 14:                                          # mov.l @(r0,Rm),Rn
            Rg[n] = ('ld', add(Rg[0], Rg[m]), 4)
        elif hi == 8 and (n == 4 or n == 5) and False: pass
        elif hi == 0x4 and lo == 0xb and (o & 0xf0ff) == 0x400b:                              # jsr @Rn: r0 = result
            tgt = Rg[n]
            if tgt[0] == 'c' and tgt[1] in NAMES: Rg[0] = ('call', tgt[1], tuple(Rg[4:8]))
            else: Rg[0] = ('u', 0)
            for q in (1, 2, 3, 4, 5, 6, 7): Rg[q] = ('u', q)
        elif hi == 0x4 and lo == 0xe: pass                                   # ldc
        elif (hi == 8 and n in (9, 11, 13, 15)) or hi == 0xa or (o & 0xf00f) == 0x4005 and False:
            pass
        elif (hi == 4 and lo == 2 and m == 2) or o == 0x0009 or hi == 2 and lo in (0, 1) or hi == 1 or (hi == 0 and lo in (4, 5, 6)):
            pass                                                            # sts.l pr / nop / stores we do not track
        else:
            # any other write to a register we may need: mark unknown
            if hi in (2,) and lo in (0, 1, 2, 6): pass
            elif hi in (6, 3, 4, 0, 5, 7, 0xe, 0xd, 0x9, 0xc): Rg[n] = ('u', n) if hi != 0xc else Rg[n]
    # the call: jsr is at `jsr`; r0 is whatever was computed before the jsr's delay slot
    return Rg[0], uncertain, fs

out = {}
bad = 0
for j in sites:
    r0, unc, fs = slice_site(j)
    try:
        s = render(r0)
        ok = 'ld' in s or 'ar' in s
    except Exception:
        s = None; ok = False
    print('%x fn=%x %s%s' % (j, fs, s, ' UNCERTAIN(branch at %s)' % ','.join(hex(x) for x in unc[:3]) if unc else ''))
    out.setdefault('%x' % fs, []).append(s)
    if not s: bad += 1
print(len(sites), 'sites', bad, 'unresolved')
if len(sys.argv) > 2: json.dump(out, open(sys.argv[2], 'w'), indent=0)
