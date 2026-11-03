#!/usr/bin/env python3
"""Static SH-4 -> C++ translation of guest functions that the Wii port would otherwise run in the interpreter (wii_sh4.cpp).
Each instruction becomes the C the interpreter's step()/fpu() would run for it, with the opcode fields, pc-relative loads and
branch targets resolved here, so a translated function does exactly what the interpreter does, without fetching and decoding.
Shared state and helpers: port/wii/host/sh4_core.h (Cpu registers, the global FPU file, rd/wr with store queues).

Contract of a translated function `void sh4x_<addr>(Cpu &C)`: it starts at <addr> with C.pr holding the return address and returns
to its caller once guest control reaches that address. Control flow inside the function's extent (src/modules/function_index.tsv)
becomes gotos; calls go to the translated callee, the native (C) version, or the interpreter, in the order the interpreter uses;
anything else (branches out of the extent, returns to another address, computed jumps to unknown places) continues in the
interpreter (sh4::exec), which is always correct.

usage: sh4_translate.py <root> [addr ...]   (default: the addresses in port/wii/sh4x/sh4x_list.txt)
writes port/wii/sh4x/mod_8cXX0000.cpp (tools/units.py region files) and port/wii/sh4x/sh4x_tab.inc"""
import os, re, struct, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__))); import units

R = sys.argv[1]
OUT = os.path.join(R, 'port', 'wii', 'sh4x')
D = open(os.path.join(R, 'disc', '1ST_READ.BIN'), 'rb').read()
BASE = 0x8c010000
END = BASE + len(D)
def w16(a): return struct.unpack_from('<H', D, a - BASE)[0]
def w32(a): return struct.unpack_from('<I', D, a - BASE)[0]
def sx8(v): return v - 0x100 if v & 0x80 else v
def sx12(v): return v - 0x1000 if v & 0x800 else v
def sx16(v): v &= 0xffff; return v - 0x10000 if v & 0x8000 else v
def u(v): return '0x%xu' % (v & 0xffffffff)

SIZE = {}
for l in open(os.path.join(R, 'src', 'modules', 'function_index.tsv')).read().splitlines()[1:]:
    p = l.split('\t'); SIZE[int(p[0], 16)] = int(p[1])
INTERP = set(int(l.strip().rstrip(',').rstrip('u'), 16) for l in open(os.path.join(R, 'port', 'wii', 'host', 'interp_tab.inc')) if l.strip())

def r(i): return 'C.r[%d]' % i

def sem(op, pc, mode=None):
    """C for a non-branch instruction (as step()/fpu() run it); None for a branch. mode: (SZ, PR) when the translator knows the
    FPU mode at this instruction (only that variant is emitted), None to test FPSCR at run time"""
    n, m, i8, d4 = (op >> 8) & 15, (op >> 4) & 15, op & 255, op & 15
    hi = op >> 12
    BAD = 'bad("unknown op", %s, 0x%04x);' % (u(pc), op)
    if hi == 0x0:
        lo8 = op & 0xff
        T = {0x09: '', 0x00: '', 0x08: 'C.t = 0;', 0x18: 'C.t = 1;', 0x48: 'C.s = 0;', 0x58: 'C.s = 1;', 0x19: 'C.q = C.m = C.t = 0;',
             0x28: 'C.mach = C.macl = 0;', 0x0a: '%s = C.mach;' % r(n), 0x1a: '%s = C.macl;' % r(n), 0x2a: '%s = C.pr;' % r(n),
             0x5a: '%s = F.fpul;' % r(n), 0x6a: '%s = F.fpscr;' % r(n), 0x12: '%s = C.gbr;' % r(n),
             0x02: '%s = 0x40000000u | (C.m << 9) | (C.q << 8) | (C.s << 1) | C.t;' % r(n), 0x29: '%s = C.t;' % r(n),
             0x83: 'sq_pref_i(%s);' % r(n), 0x93: '', 0xa3: '', 0xb3: '', 0xc3: 'wr32(%s, C.r[0]);' % r(n), 0x1b: ''}
        if lo8 in (0x0b, 0x03, 0x23): return None
        if lo8 in T: return T[lo8]
        T2 = {4: 'wr8(C.r[0] + %s, %s);' % (r(n), r(m)), 5: 'wr16(C.r[0] + %s, %s);' % (r(n), r(m)), 6: 'wr32(C.r[0] + %s, %s);' % (r(n), r(m)),
              7: 'C.macl = %s * %s;' % (r(n), r(m)), 0xc: '%s = sx8(rd8(C.r[0] + %s));' % (r(n), r(m)), 0xd: '%s = sx16(rd16(C.r[0] + %s));' % (r(n), r(m)),
              0xe: '%s = rd32(C.r[0] + %s);' % (r(n), r(m)),
              0xf: '{ long long a = (int)rd32(%s), b = (int)rd32(%s); %s += 4; %s += 4; long long acc = (long long)(((unsigned long long)C.mach << 32) | C.macl) + a * b; C.mach = (unsigned)((unsigned long long)acc >> 32); C.macl = (unsigned)acc; }' % (r(n), r(m), r(n), r(m))}
        return T2.get(d4, BAD)
    if hi == 0x1: return 'wr32(%s + %d, %s);' % (r(n), d4 * 4, r(m))
    if hi == 0x2:
        T = {0: 'wr8(%s, %s);' % (r(n), r(m)), 1: 'wr16(%s, %s);' % (r(n), r(m)), 2: 'wr32(%s, %s);' % (r(n), r(m)),
             4: '%s -= 1; wr8(%s, %s);' % (r(n), r(n), r(m)), 5: '%s -= 2; wr16(%s, %s);' % (r(n), r(n), r(m)), 6: '%s -= 4; wr32(%s, %s);' % (r(n), r(n), r(m)),
             7: 'C.q = %s >> 31; C.m = %s >> 31; C.t = C.q != C.m;' % (r(n), r(m)), 8: 'C.t = (%s & %s) == 0;' % (r(n), r(m)),
             9: '%s &= %s;' % (r(n), r(m)), 10: '%s ^= %s;' % (r(n), r(m)), 11: '%s |= %s;' % (r(n), r(m)),
             12: '{ unsigned x = %s ^ %s; C.t = !(x & 0xff) || !(x & 0xff00) || !(x & 0xff0000) || !(x & 0xff000000u); }' % (r(n), r(m)),
             13: '%s = (%s << 16) | (%s >> 16);' % (r(n), r(n), r(m)), 14: 'C.macl = (%s & 0xffff) * (%s & 0xffff);' % (r(n), r(m)),
             15: 'C.macl = (unsigned)((int)sx16(%s) * (int)sx16(%s));' % (r(n), r(m))}
        return T.get(d4, BAD)
    if hi == 0x3:
        N, M = r(n), r(m)
        T = {0: 'C.t = %s == %s;' % (N, M), 2: 'C.t = %s >= %s;' % (N, M), 3: 'C.t = (int)%s >= (int)%s;' % (N, M), 6: 'C.t = %s > %s;' % (N, M),
             7: 'C.t = (int)%s > (int)%s;' % (N, M), 8: '%s -= %s;' % (N, M), 12: '%s += %s;' % (N, M),
             5: '{ unsigned long long p = (unsigned long long)%s * %s; C.mach = (unsigned)(p >> 32); C.macl = (unsigned)p; }' % (N, M),
             13: '{ long long p = (long long)(int)%s * (int)%s; C.mach = (unsigned)((unsigned long long)p >> 32); C.macl = (unsigned)p; }' % (N, M),
             10: '{ unsigned t = %s - %s; unsigned c = %s < t; unsigned t2 = t - C.t; c |= t < t2; %s = t2; C.t = c; }' % (N, M, N, N),
             14: '{ unsigned t = %s + %s; unsigned c = t < %s; unsigned t2 = t + C.t; c |= t2 < t; %s = t2; C.t = c; }' % (N, M, N, N),
             11: '{ int a = (int)%s, b = (int)%s; long long d = (long long)a - b; %s = (unsigned)d; C.t = d != (int)d; }' % (N, M, N),
             15: '{ int a = (int)%s, b = (int)%s; long long d = (long long)a + b; %s = (unsigned)d; C.t = d != (int)d; }' % (N, M, N),
             4: ('{ unsigned old_q = C.q; C.q = %(N)s >> 31; %(N)s = (%(N)s << 1) | C.t; unsigned tmp0 = %(N)s;'
                 ' if (!old_q) { if (!C.m) { %(N)s -= %(M)s; unsigned tmp1 = %(N)s > tmp0; C.q = C.q ? !tmp1 : tmp1; } else { %(N)s += %(M)s; unsigned tmp1 = %(N)s < tmp0; C.q = C.q ? tmp1 : !tmp1; } }'
                 ' else { if (!C.m) { %(N)s += %(M)s; unsigned tmp1 = %(N)s < tmp0; C.q = C.q ? !tmp1 : tmp1; } else { %(N)s -= %(M)s; unsigned tmp1 = %(N)s > tmp0; C.q = C.q ? tmp1 : !tmp1; } }'
                 ' C.t = C.q == C.m; }') % {'N': N, 'M': M}}
        return T.get(d4, BAD)
    if hi == 0x4:
        N, M = r(n), r(m)
        lo8 = op & 0xff
        if lo8 in (0x0b, 0x2b): return None
        T = {0x00: 'C.t = %s >> 31; %s <<= 1;' % (N, N), 0x01: 'C.t = %s & 1; %s >>= 1;' % (N, N),
             0x04: 'C.t = %s >> 31; %s = (%s << 1) | C.t;' % (N, N, N), 0x05: 'C.t = %s & 1; %s = (%s >> 1) | ((unsigned)C.t << 31);' % (N, N, N),
             0x08: '%s <<= 2;' % N, 0x09: '%s >>= 2;' % N, 0x18: '%s <<= 8;' % N, 0x19: '%s >>= 8;' % N, 0x28: '%s <<= 16;' % N, 0x29: '%s >>= 16;' % N,
             0x20: 'C.t = %s >> 31; %s <<= 1;' % (N, N), 0x21: 'C.t = %s & 1; %s = (unsigned)((int)%s >> 1);' % (N, N, N),
             0x24: '{ unsigned t = %s >> 31; %s = (%s << 1) | C.t; C.t = t; }' % (N, N, N),
             0x25: '{ unsigned t = %s & 1; %s = (%s >> 1) | ((unsigned)C.t << 31); C.t = t; }' % (N, N, N),
             0x10: '%s -= 1; C.t = %s == 0;' % (N, N), 0x11: 'C.t = (int)%s >= 0;' % N, 0x15: 'C.t = (int)%s > 0;' % N,
             0x0a: 'C.mach = %s;' % N, 0x1a: 'C.macl = %s;' % N, 0x2a: 'C.pr = %s;' % N, 0x5a: 'F.fpul = %s;' % N,
             0x6a: 'set_fpscr(%s & 0x003fffffu);' % N, 0x1e: 'C.gbr = %s;' % N,
             0x0e: 'C.t = %s & 1; C.s = (%s >> 1) & 1; C.q = (%s >> 8) & 1; C.m = (%s >> 9) & 1;' % (N, N, N, N),
             0x02: '%s -= 4; wr32(%s, C.mach);' % (N, N), 0x12: '%s -= 4; wr32(%s, C.macl);' % (N, N), 0x22: '%s -= 4; wr32(%s, C.pr);' % (N, N),
             0x52: '%s -= 4; wr32(%s, F.fpul);' % (N, N), 0x62: '%s -= 4; wr32(%s, F.fpscr);' % (N, N), 0x13: '%s -= 4; wr32(%s, C.gbr);' % (N, N),
             0x06: 'C.mach = rd32(%s); %s += 4;' % (N, N), 0x16: 'C.macl = rd32(%s); %s += 4;' % (N, N), 0x26: 'C.pr = rd32(%s); %s += 4;' % (N, N),
             0x56: 'F.fpul = rd32(%s); %s += 4;' % (N, N), 0x66: 'set_fpscr(rd32(%s) & 0x003fffffu); %s += 4;' % (N, N),
             0x17: 'C.gbr = rd32(%s); %s += 4;' % (N, N),
             0x1b: '{ unsigned v = rd8(%s); C.t = v == 0; wr8(%s, v | 0x80); }' % (N, N)}
        if lo8 in T: return T[lo8]
        if d4 == 0xc: return '{ int s = (int)%s; if (s >= 0) %s <<= (s & 31); else if ((s & 31) == 0) %s = (int)%s < 0 ? 0xffffffffu : 0; else %s = (unsigned)((int)%s >> (-s & 31)); }' % (M, N, N, N, N, N)
        if d4 == 0xd: return '{ int s = (int)%s; if (s >= 0) %s <<= (s & 31); else if ((s & 31) == 0) %s = 0; else %s >>= (-s & 31); }' % (M, N, N, N)
        if d4 == 0xf: return ('{ int a = sx16(rd16(%s)), b = sx16(rd16(%s)); %s += 2; %s += 2; long long acc = (long long)(((unsigned long long)C.mach << 32) | C.macl) + (long long)a * b;'
                              ' C.mach = (unsigned)((unsigned long long)acc >> 32); C.macl = (unsigned)acc; }') % (N, M, N, M)
        return BAD
    if hi == 0x5: return '%s = rd32(%s + %d);' % (r(n), r(m), d4 * 4)
    if hi == 0x6:
        N, M = r(n), r(m)
        T = {0: '%s = sx8(rd8(%s));' % (N, M), 1: '%s = sx16(rd16(%s));' % (N, M), 2: '%s = rd32(%s);' % (N, M), 3: '%s = %s;' % (N, M),
             4: '%s = sx8(rd8(%s));%s' % (N, M, ' %s += 1;' % M if n != m else ''), 5: '%s = sx16(rd16(%s));%s' % (N, M, ' %s += 2;' % M if n != m else ''),
             6: '%s = rd32(%s);%s' % (N, M, ' %s += 4;' % M if n != m else ''), 7: '%s = ~%s;' % (N, M),
             8: '%s = (%s & 0xffff0000u) | ((%s & 0xff) << 8) | ((%s >> 8) & 0xff);' % (N, M, M, M), 9: '%s = (%s << 16) | (%s >> 16);' % (N, M, M),
             10: '{ unsigned t = 0 - %s; unsigned c = 0 < t; %s = t - C.t; c |= t < %s; C.t = c; }' % (M, N, N), 11: '%s = 0 - %s;' % (N, M),
             12: '%s = %s & 0xff;' % (N, M), 13: '%s = %s & 0xffff;' % (N, M), 14: '%s = sx8(%s);' % (N, M), 15: '%s = sx16(%s);' % (N, M)}
        return T[d4]
    if hi == 0x7: return '%s += %s;' % (r(n), u(sx8(i8)))
    if hi == 0x8:
        s = (op >> 8) & 15
        if s in (9, 11, 13, 15): return None
        T = {0: 'wr8(%s + %d, C.r[0]);' % (r(m), d4), 1: 'wr16(%s + %d, C.r[0]);' % (r(m), d4 * 2),
             4: 'C.r[0] = sx8(rd8(%s + %d));' % (r(m), d4), 5: 'C.r[0] = sx16(rd16(%s + %d));' % (r(m), d4 * 2), 8: 'C.t = C.r[0] == %s;' % u(sx8(i8))}
        return T.get(s, BAD)
    if hi == 0x9:
        a = pc + 4 + i8 * 2
        return '%s = %s;' % (r(n), u(sx16(w16(a)))) if BASE <= a < END else '%s = sx16(rd16(%s));' % (r(n), u(a))
    if hi in (0xa, 0xb): return None
    if hi == 0xc:
        s = (op >> 8) & 15
        T = {0: 'wr8(C.gbr + %d, C.r[0]);' % i8, 1: 'wr16(C.gbr + %d, C.r[0]);' % (i8 * 2), 2: 'wr32(C.gbr + %d, C.r[0]);' % (i8 * 4),
             4: 'C.r[0] = sx8(rd8(C.gbr + %d));' % i8, 5: 'C.r[0] = sx16(rd16(C.gbr + %d));' % (i8 * 2), 6: 'C.r[0] = rd32(C.gbr + %d);' % (i8 * 4),
             7: 'C.r[0] = %s;' % u(((pc + 4) & ~3) + i8 * 4), 8: 'C.t = (C.r[0] & %du) == 0;' % i8, 9: 'C.r[0] &= %du;' % i8,
             10: 'C.r[0] ^= %du;' % i8, 11: 'C.r[0] |= %du;' % i8, 12: 'C.t = (rd8(C.gbr + C.r[0]) & %du) == 0;' % i8,
             13: 'wr8(C.gbr + C.r[0], rd8(C.gbr + C.r[0]) & %du);' % i8, 14: 'wr8(C.gbr + C.r[0], rd8(C.gbr + C.r[0]) ^ %du);' % i8,
             15: 'wr8(C.gbr + C.r[0], rd8(C.gbr + C.r[0]) | %du);' % i8}
        return T.get(s, BAD)
    if hi == 0xd:
        a = ((pc + 4) & ~3) + i8 * 4
        return '%s = %s;' % (r(n), u(w32(a))) if BASE <= a < END - 3 else '%s = rd32(%s);' % (r(n), u(a))
    if hi == 0xe: return '%s = %s;' % (r(n), u(sx8(i8)))
    return fsem(op, pc, mode)

def fsem(op, pc, mode=None):
    def PR(dbl, sgl): return ('if (F.fpscr & PRB) { %s } else { %s }' % (dbl, sgl)) if mode is None else dbl if mode[1] else sgl
    def SZ_(sgl, dbl): return ('if (!(F.fpscr & SZ)) { %s } else { %s }' % (sgl, dbl)) if mode is None else dbl if mode[0] else sgl
    n, m, lo = (op >> 8) & 15, (op >> 4) & 15, op & 15
    BAD = 'bad("unknown FPU op", %s, 0x%04x);' % (u(pc), op)
    fr = lambda i: 'F.fr[%d]' % i
    if op == 0xf3fd: return 'F.fpscr ^= SZ;'
    if op == 0xfbfd: return 'set_fpscr(F.fpscr ^ FRB);'
    if lo <= 5:
        if n & 1 or m & 1: dbl = 'bad("odd double register", %s, 0x%04x);' % (u(pc), op)
        else:
            a, b = 'getd(F.fr, %d)' % n, 'getd(F.fr, %d)' % m
            dbl = {0: 'setd(F.fr, %d, %s + %s);' % (n, a, b), 1: 'setd(F.fr, %d, %s - %s);' % (n, a, b), 2: 'setd(F.fr, %d, %s * %s);' % (n, a, b),
                   3: 'setd(F.fr, %d, %s / %s);' % (n, a, b), 4: 'C.t = %s == %s;' % (a, b), 5: 'C.t = %s > %s;' % (a, b)}[lo]
        sgl = {0: '%s = %s + %s;' % (fr(n), fr(n), fr(m)), 1: '%s = %s - %s;' % (fr(n), fr(n), fr(m)), 2: '%s = %s * %s;' % (fr(n), fr(n), fr(m)),
               3: '%s = %s / %s;' % (fr(n), fr(n), fr(m)), 4: 'C.t = %s == %s;' % (fr(n), fr(m)), 5: 'C.t = %s > %s;' % (fr(n), fr(m))}[lo]
        return PR(dbl, sgl)
    if lo == 0xe: return '%s = %s + F.fr[0] * %s;' % (fr(n), fr(n), fr(m))
    dn = ('F.xf[%d]' if n & 1 else 'F.fr[%d]') % (n & 14); dn1 = ('F.xf[%d]' if n & 1 else 'F.fr[%d]') % ((n & 14) + 1)
    dm = ('F.xf[%d]' if m & 1 else 'F.fr[%d]') % (m & 14); dm1 = ('F.xf[%d]' if m & 1 else 'F.fr[%d]') % ((m & 14) + 1)
    if lo == 0xc:
        return SZ_('%s = %s;' % (fr(n), fr(m)), '%s = %s; %s = %s;' % (dn, dm, dn1, dm1))
    if 6 <= lo <= 0xb:
        N, M = r(n), r(m)
        sgl = {6: '%s = u2f(rd32(C.r[0] + %s));' % (fr(n), M), 7: 'wr32(C.r[0] + %s, f2u(%s));' % (N, fr(m)), 8: '%s = u2f(rd32(%s));' % (fr(n), M),
               9: '%s = u2f(rd32(%s)); %s += 4;' % (fr(n), M, M), 0xa: 'wr32(%s, f2u(%s));' % (N, fr(m)), 0xb: '%s -= 4; wr32(%s, f2u(%s));' % (N, N, fr(m))}[lo]
        dbl = {6: '{ unsigned a = C.r[0] + %s; %s = u2f(rd32(a)); %s = u2f(rd32(a + 4)); }' % (M, dn, dn1),
               7: '{ unsigned a = C.r[0] + %s; wr32(a, f2u(%s)); wr32(a + 4, f2u(%s)); }' % (N, dm, dm1),
               8: '%s = u2f(rd32(%s)); %s = u2f(rd32(%s + 4));' % (dn, M, dn1, M),
               9: '%s = u2f(rd32(%s)); %s = u2f(rd32(%s + 4)); %s += 8;' % (dn, M, dn1, M, M),
               0xa: 'wr32(%s, f2u(%s)); wr32(%s + 4, f2u(%s));' % (N, dm, N, dm1),
               0xb: '%s -= 8; wr32(%s, f2u(%s)); wr32(%s + 4, f2u(%s));' % (N, N, dm, N, dm1)}[lo]
        return SZ_(sgl, dbl)
    if lo == 0xd:
        e = n & 14
        if m == 0: return '%s = u2f(F.fpul);' % fr(n)
        if m == 1: return 'F.fpul = f2u(%s);' % fr(n)
        if m == 2: return PR('setd(F.fr, %d, (double)(int)F.fpul);' % e, '%s = (float)(int)F.fpul;' % fr(n))
        if m == 3:
            src = PR('getd(F.fr, %d)' % e, '(double)%s' % fr(n)) if mode is not None else '(F.fpscr & PRB) ? getd(F.fr, %d) : (double)%s' % (e, fr(n))
            return '{ double f = %s; F.fpul = (f != f) ? 0x80000000u : (f >= 2147483648.0) ? 0x7fffffffu : (f <= -2147483648.0) ? 0x80000000u : (unsigned)(int)f; }' % src
        if m == 4: return PR('setd(F.fr, %d, -getd(F.fr, %d));' % (e, e), '%s = -%s;' % (fr(n), fr(n)))
        if m == 5: return PR('setd(F.fr, %d, fabs(getd(F.fr, %d)));' % (e, e), '%s = fabsf(%s);' % (fr(n), fr(n)))
        if m == 6: return PR('setd(F.fr, %d, sqrt(getd(F.fr, %d)));' % (e, e), '%s = sqrtf(%s);' % (fr(n), fr(n)))
        if m == 7: return '%s = 1.0f / sqrtf(%s);' % (fr(n), fr(n))
        if m == 8: return '%s = 0.0f;' % fr(n)
        if m == 9: return '%s = 1.0f;' % fr(n)
        if m == 0xa: return 'setd(F.fr, %d, (double)u2f(F.fpul));' % e
        if m == 0xb: return 'F.fpul = f2u((float)getd(F.fr, %d));' % e
        if m == 0xe:
            vn, vm = n & 0xc, (n & 3) << 2
            return '%s = %s * %s + %s * %s + %s * %s + %s * %s;' % (fr(vn + 3), fr(vn), fr(vm), fr(vn + 1), fr(vm + 1), fr(vn + 2), fr(vm + 2), fr(vn + 3), fr(vm + 3))
        if m == 0xf:
            if (n & 3) == 1:
                v = n & 0xc
                return ('{ float x0 = F.fr[%d], x1 = F.fr[%d], x2 = F.fr[%d], x3 = F.fr[%d];' % (v, v + 1, v + 2, v + 3) +
                        ''.join(' F.fr[%d] = F.xf[%d] * x0 + F.xf[%d] * x1 + F.xf[%d] * x2 + F.xf[%d] * x3;' % (v + i, i, i + 4, i + 8, i + 12) for i in range(4)) + ' }')
            if (n & 1) == 0:
                return '{ float a = (float)(F.fpul & 0xffff) * (6.28318530717958647692f / 65536.0f); %s = sinf(a); %s = cosf(a); }' % (fr(n), fr(n + 1))
        return BAD
    return BAD

def writes(op):
    """registers an instruction may write (conservative), for the constant-call-target peephole"""
    n, m, hi = (op >> 8) & 15, (op >> 4) & 15, op >> 12
    if hi == 0x1: return set()
    if hi == 0x2: return set() if op & 15 in (0, 1, 2, 7, 8, 12, 14, 15) else {n}
    if hi in (0x0, 0x6): return {n, m}
    if hi == 0x8: return {0} if (op >> 8) & 15 in (4, 5) else set()
    if hi == 0xc: return {0} if (op >> 8) & 15 in (4, 5, 6, 7, 9, 10, 11) else set()
    if hi == 0xf: return {n, m} if 6 <= op & 15 <= 0xb else set()
    if hi == 0x4: return {n, m}
    return {n}

def branch(op, pc):
    """(kind, static target or None, register or None) of a branch instruction"""
    hi, n = op >> 12, (op >> 8) & 15
    if hi == 0x0 and op & 0xff == 0x0b: return 'rts', None, None    # step() takes any n field as rts
    if hi == 0x0 and op & 0xff == 0x03: return 'bsrf', None, n
    if hi == 0x0 and op & 0xff == 0x23: return 'braf', None, n
    if hi == 0x4 and op & 0xff == 0x0b: return 'jsr', None, n
    if hi == 0x4 and op & 0xff == 0x2b: return 'jmp', None, n
    if hi == 0x8 and (op >> 8) & 15 in (9, 11, 13, 15):
        s = (op >> 8) & 15; t = pc + 4 + sx8(op & 255) * 2
        return {9: 'bt', 11: 'bf', 13: 'bts', 15: 'bfs'}[s], t, None
    if hi == 0xa: return 'bra', pc + 4 + sx12(op & 0xfff) * 2, None
    if hi == 0xb: return 'bsr', pc + 4 + sx12(op & 0xfff) * 2, None
    return None

def extent(entry):
    """the function's indexed range plus all code reachable from it by fall-through and static branches, up to another function's
    entry (Ghidra cuts some functions short; their tails would otherwise run in the interpreter)"""
    seen = set(range(entry, entry + SIZE[entry], 2))
    work = sorted(seen)
    lim = entry + max(0x1000, 4 * SIZE[entry])         # tails sit right after the function; farther code is another routine
    while work:
        a = work.pop()
        if not (BASE <= a < END) or (a != entry and a in SIZE and a not in range(entry, entry + SIZE[entry])): continue
        if a not in seen: seen.add(a)
        p = branch(w16(a - 2), a - 2) if a > entry else None
        if p and p[0] in ('rts', 'jmp', 'braf', 'bra'): continue   # the delay slot of a jump: what follows is a literal pool or another routine
        b = branch(w16(a), a)
        nxt = []
        if not b: nxt = [a + 2]
        else:
            k, t, _ = b
            if k in ('bt', 'bf'): nxt = [a + 2, t]
            elif k in ('bts', 'bfs'): nxt = [a + 2, a + 4, t]
            elif k in ('bsr', 'jsr', 'bsrf'): nxt = [a + 2, a + 4]
            elif k == 'bra': nxt = [a + 2, t]
            else: nxt = [a + 2]                         # rts, jmp, braf: only the delay slot
        for x in nxt:
            if x in seen or not (entry <= x < lim) or (x != entry and x in SIZE): continue
            if len(seen) > 20000: break
            seen.add(x); work.append(x)
    return sorted(seen)

# Inside a translated function the guest registers it uses live in locals (the compiler keeps them in host registers; through the Cpu
# and Sh4Fpu structs every guest store would force them back to memory). FILL_ loads them from C/F, SPILL_ stores them back: before
# anything that runs other guest code or leaves the function, which then sees only C/F, and FILL_ again where control comes back.
LOC = [(re.compile(r'C\.r\[(\d+)\]'), r'rr\1'), (re.compile(r'C\.mach\b'), 'MACH_'), (re.compile(r'C\.macl\b'), 'MACL_'),
       (re.compile(r'C\.pr\b'), 'PR_'), (re.compile(r'C\.gbr\b'), 'GBR_'), (re.compile(r'C\.t\b'), 'T_'), (re.compile(r'C\.s\b'), 'S_'),
       (re.compile(r'C\.q\b'), 'Q_'), (re.compile(r'C\.m\b'), 'M_'), (re.compile(r'F\.fpul\b'), 'FPUL_'), (re.compile(r'F\.fpscr\b'), 'FPSCR_'),
       (re.compile(r'getd\(F\.fr, (\d+)\)'), lambda m: 'getd2(ff%d, ff%d)' % (int(m.group(1)), int(m.group(1)) + 1)),
       (re.compile(r'setd\(F\.fr, (\d+), '), lambda m: 'setd2(ff%d, ff%d, ' % (int(m.group(1)), int(m.group(1)) + 1)),
       (re.compile(r'set_fpscr\('), 'SETFPSCR_('), (re.compile(r'F\.fr\[(\d+)\]'), r'ff\1'), (re.compile(r'F\.xf\[(\d+)\]'), r'xx\1')]
STACK_ST = re.compile(r'\bwr(8|16|32)\(rr15\b')               # stores through the stack pointer cannot reach the store queues
def loc(s):
    for rx, to in LOC: s = rx.sub(to, s)
    return STACK_ST.sub(r'wrs\1(rr15', s)
CPU_LOC = [('rr%d' % i, 'unsigned', 'C.r[%d]' % i) for i in range(16)] + [('T_', 'int', 'C.t'), ('S_', 'int', 'C.s'), ('Q_', 'int', 'C.q'),
           ('M_', 'int', 'C.m'), ('MACH_', 'unsigned', 'C.mach'), ('MACL_', 'unsigned', 'C.macl'), ('PR_', 'unsigned', 'C.pr'),
           ('GBR_', 'unsigned', 'C.gbr'), ('FPUL_', 'unsigned', 'F.fpul'), ('FPSCR_', 'unsigned', 'F.fpscr')]
FPU_LOC = [('ff%d' % i, 'float', 'F.fr[%d]' % i) for i in range(16)] + [('xx%d' % i, 'float', 'F.xf[%d]' % i) for i in range(16)]
SWAP = ' '.join('{ float s_ = ff%d; ff%d = xx%d; xx%d = s_; }' % (i, i, i, i) for i in range(16))

def fpu_modes(entry, addrs, inside, ops):
    """the FPU mode (SZ, PR) at each instruction when it is the same on every path from the entry, which runs in the Katana
    default (0, 0) (translate() guards that at entry and after every call); 'U' where paths disagree or lds set FPSCR"""
    def xfer(m, op):
        if m == 'U': return m
        if op == 0xf3fd: return (m[0] ^ 1, m[1])                           # fschg
        if op & 0xf0ff in (0x406a, 0x4066): return 'U'                     # lds / lds.l to FPSCR
        return m
    M = {entry: (0, 0)}; work = [entry]
    def flow(x, m):
        if x not in inside: return
        o = M.get(x)
        n = m if o is None or o == m else 'U'
        if n != o: M[x] = n; work.append(x)
    while work:
        a = work.pop(); m = M[a]; op = ops[a]
        b = branch(op, a)
        if not b: flow(a + 2, xfer(m, op)); continue
        k, t, _ = b
        if k in ('bt', 'bf'): flow(a + 2, m); flow(t, m); continue
        ms = xfer(m, ops.get(a + 2, 0x0009))                                # after the delay slot
        if k in ('bts', 'bfs'): flow(a + 4, ms); flow(t, ms)
        elif k == 'bra': flow(t, ms)
        elif k in ('bsr', 'jsr', 'bsrf'): flow(a + 4, ms)
    return M

def translate(entry, TRANS):
    addrs = extent(entry)
    inside = set(addrs)
    ops = {a: w16(a) for a in addrs}
    targets, computed = {entry}, False
    for a in addrs:
        b = branch(ops[a], a)
        if not b: continue
        k, t, _ = b
        if t is not None and t in inside: targets.add(t)
        if k in ('bsr', 'jsr', 'bsrf', 'bts', 'bfs') and a + 4 in inside: targets.add(a + 4)
        if k in ('braf', 'jmp'): computed = True
    nxt_of = dict(zip(addrs, addrs[1:] + [None]))
    for a in addrs:                                     # a fall-through into a gap of the extent needs a label to jump to
        if nxt_of[a] != a + 2 and a + 2 in inside: targets.add(a + 2)
    if computed: targets = set(addrs)
    L = lambda a: 'L_%08x' % a
    lr = lambda i: 'rr%d' % i
    fpu = any(ops[a] >> 12 == 0xf for a in addrs)
    M = fpu_modes(entry, addrs, inside, ops) if fpu and not computed else {}
    md = lambda a: M[a] if isinstance(M.get(a), tuple) else None
    def back(ret):
        """control is back from a call at ret: reload the locals; if the callee left another FPU mode than the code at ret was
        translated for, continue in the interpreter"""
        g = '' if md(ret) is None else 'if ((FPSCR_ & (SZ | PRB)) != %du) { XGUARD(%s); exec(C, %s, ret0); return; } ' % (
            (md(ret)[0] << 20) | (md(ret)[1] << 19), u(ret), u(ret))
        return 'FILL_ %sgoto %s;' % (g, L(ret))
    out = []
    if computed:
        out.append('  static const unsigned la_[] = { %s };\n  static void *const lp_[] = { %s };\n' % (', '.join(u(a) for a in addrs), ', '.join('&&' + L(a) for a in addrs)))
    def ret_raw(x): return 'if (%s == ret0) return; exec(C, %s, ret0); return;' % (x, x)          # C/F hold the state
    def go(t):
        if t in inside: return 'goto %s;' % L(t)
        if t in TRANS: return '{ SPILL_ unsigned r_ = C.pr; sh4x_%08x(C); %s }' % (t, ret_raw('r_'))
        return '{ SPILL_ exec(C, %s, ret0); return; }' % u(t)
    def lookup(tv):
        if not computed: return ''
        return ('{ unsigned lo_ = 0, hi_ = %d; while (lo_ < hi_) { unsigned md_ = (lo_ + hi_) / 2; if (la_[md_] < %s) lo_ = md_ + 1; else hi_ = md_; }'
                ' if (lo_ < %d && la_[lo_] == %s) { FILL_ goto *lp_[lo_]; } } ' % (len(addrs), tv, len(addrs), tv))
    def call_const(t, ret, slot):
        if t in TRANS and t in INTERP: return '{ %s SPILL_ C.pr = %s; sh4x_%08x(C); %s }' % (slot, u(ret), t, back(ret))
        if t in INTERP: return '{ %s SPILL_ C.pr = %s; exec(C, %s, %s); %s }' % (slot, u(ret), u(t), u(ret), back(ret))
        return ('{ %s SPILL_ static hfn h_; if (!h_) { unsigned long x_ = xlat_exact(%s); h_ = x_ ? (hfn)x_ : (hfn)1; }'
                ' if (h_ != (hfn)1) call_ptr(C, h_); else { C.pr = %s; exec(C, %s, %s); } %s }' % (slot, u(t), u(ret), u(t), u(ret), back(ret)))
    known = {}
    for a in addrs:
        op = ops[a]
        if a in targets:
            out.append('%s:\n' % L(a)); known = {}
        b = branch(op, a)
        falls = not b or b[0] in ('bt', 'bf')
        if falls and nxt_of[a] != a + 2:
            out.append('  %s\n' % (loc(sem(op, a, md(a))) if not b else ('if (T_) ' if b[0] == 'bt' else 'if (!T_) ') + go(b[1])))
            out.append('  %s\n' % go(a + 2))
            known = {}
            continue
        if not b:
            out.append('  %s\n' % loc(sem(op, a, md(a))))
            if op >> 12 == 0xd: known[(op >> 8) & 15] = w32(((a + 4) & ~3) + (op & 255) * 4) if ((a + 4) & ~3) + (op & 255) * 4 < END - 3 else None
            else:
                for x in writes(op): known.pop(x, None)
            continue
        k, t, rn = b
        sop = w16(a + 2) if a + 2 < END else 0x0009
        slot = loc(sem(sop, a + 2, md(a))) if not branch(sop, a + 2) else 'bad("branch in a delay slot", %s, 0x%04x);' % (u(a + 2), sop)
        if k == 'bt': out.append('  if (T_) %s\n' % go(t))
        elif k == 'bf': out.append('  if (!T_) %s\n' % go(t))
        elif k in ('bts', 'bfs'):
            out.append('  { int tk_ = %sT_; %s if (tk_) %s goto %s; }\n' % ('' if k == 'bts' else '!', slot, go(t), L(a + 4)) if a + 4 in inside else
                       '  { int tk_ = %sT_; %s if (tk_) %s SPILL_ exec(C, %s, ret0); return; }\n' % ('' if k == 'bts' else '!', slot, go(t), u(a + 4)))
        elif k == 'rts': out.append('  { %s SPILL_ %s }\n' % (slot, ret_raw('C.pr')))
        elif k == 'bra': out.append('  { %s %s }\n' % (slot, go(t)))
        elif k in ('bsr', 'jsr', 'bsrf'):
            ret = a + 4
            if ret not in inside:
                tail = 'exec(C, %s, ret0); return;' % u(ret)
                nat = 'native_call(C, t_)' if k != 'bsrf' else 'false'
                out.append('  { unsigned t_ = %s; %s SPILL_ if (!%s) { C.pr = %s; if (xfn f_ = xfind(t_)) f_(C); else exec(C, t_, %s); } %s }\n'
                           % (u(t) if k == 'bsr' else lr(rn) if k == 'jsr' else '%s + %s' % (u(a + 4), lr(rn)), slot, nat, u(ret), u(ret), tail))
            elif k == 'bsr': out.append('  %s\n' % call_const(t, ret, slot))
            elif k == 'jsr' and known.get(rn) is not None: out.append('  %s\n' % call_const(known[rn], ret, slot))
            elif k == 'jsr':
                out.append('  { unsigned t_ = %s; %s SPILL_ if (!native_call(C, t_)) { C.pr = %s; if (xfn f_ = xfind(t_)) f_(C); else exec(C, t_, %s); } %s }\n'
                           % (lr(rn), slot, u(ret), u(ret), back(ret)))
            else:   # bsrf: no native check in the interpreter
                out.append('  { unsigned t_ = %s + %s; %s SPILL_ C.pr = %s; if (xfn f_ = xfind(t_)) f_(C); else exec(C, t_, %s); %s }\n'
                           % (u(a + 4), lr(rn), slot, u(ret), u(ret), back(ret)))
            known = {}
        elif k == 'jmp':
            out.append('  { unsigned t_ = %s; %s SPILL_ if (native_call(C, t_)) { %s } %sif (xfn f_ = xfind(t_)) { unsigned r_ = C.pr; f_(C); %s } exec(C, t_, ret0); return; }\n'
                       % (lr(rn), slot, ret_raw('C.pr'), lookup('t_'), ret_raw('r_')))
        elif k == 'braf':
            out.append('  { unsigned t_ = %s + %s; %s SPILL_ %sexec(C, t_, ret0); return; }\n' % (u(a + 4), lr(rn), slot, lookup('t_')))
    body = ''.join(out)
    used = set(re.findall(r'\b(rr\d+|ff\d+|xx\d+|[A-Z]+_)\b', body))
    if M: used.add('FPSCR_')
    if 'SETFPSCR_' in used: used |= set(n for n, _, _ in FPU_LOC) | {'FPSCR_'}
    vs = [v for v in CPU_LOC + FPU_LOC if v[0] in used]
    head = ''.join('#define %s %s\n' % (m, ' '.join(('%s = %s;' % (n, f)) if m == 'FILL_' else ('%s = %s;' % (f, n)) for n, _, f in vs))
                   for m in ('FILL_', 'SPILL_'))
    head += '#define SETFPSCR_(v) { unsigned v_ = (v); if ((v_ ^ FPSCR_) & FRB) { %s } FPSCR_ = v_; }\n' % SWAP
    decl = ''.join('  %s %s;\n' % (ty, n) for n, ty, _ in vs)
    guard = '  if (FPSCR_ & (SZ | PRB)) { XGUARD(%s); exec(C, %s, ret0); return; }\n' % (u(entry), u(entry)) if M else ''   # translated for the default mode
    return (head + 'void sh4x_%08x(Cpu &C)\n{\n  const unsigned ret0 = C.pr;\n  XPROF(%s);\n' % (entry, u(entry)) + decl + '  FILL_\n' + guard + body + '}\n'
            '#undef FILL_\n#undef SPILL_\n#undef SETFPSCR_\n')

if __name__ == '__main__':
    lst = sys.argv[2:] or open(os.path.join(OUT, 'sh4x_list.txt')).read().split()
    for a in lst:                                       # unindexed entries (routines reached only through pointer tables): their extent is what they reach
        if BASE <= int(a, 16) < END: SIZE.setdefault(int(a, 16), 2)
    TRANS = sorted(set(int(a, 16) for a in lst if int(a, 16) in SIZE))
    T = set(TRANS)
    us = {'%08x' % a: 'namespace sh4 {\n' + translate(a, T) + '}\n' for a in TRANS}
    # each region file declares every translated function once, then holds its units
    head = '#include "../host/sh4_core.h"\nnamespace sh4 {\n' + ''.join('void sh4x_%08x(Cpu &);\n' % t for t in TRANS) + '}\n'
    units.save(OUT, us, 'cpp', head=head)
    open(os.path.join(OUT, 'sh4x_tab.inc'), 'w').write(''.join('X(0x%08xu, sh4x_%08x)\n' % (a, a) for a in TRANS))
    print(len(TRANS), 'functions translated,', sum(len(extent(a)) for a in TRANS), 'instructions')
