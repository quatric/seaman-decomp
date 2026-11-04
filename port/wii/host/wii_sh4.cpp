/* SH-4 interpreter. It runs every guest function that uses the FPU (notes/fpu_funcs.txt, tools/fpu_funcs.py) and the hand-written
   assembly the decompiler could not turn into C: Ghidra loses float arguments, float results and FPU state between functions, so those
   functions keep their original code and run here on one global FPU register file, as on the real CPU.
   A call (jsr/jmp/bsr/bra to a function start) into an integer-only function runs the host C version with r4..r7, r0/r1 (vin0/vin1)
   and the guest stack (vsp = r15); calls into FPU functions and the register-argument helpers stay in the interpreter.
   Full integer ISA, single and double precision FPU (SZ/PR/FR modes), store-queue writes flushed by pref. */
#include "sh4_core.h"

extern "C" {
Sh4Fpu sh4_fpu;
unsigned long sh4_total, sh4_runs;
unsigned sz_on_pc, sz_on_entry, sz_cur_entry, sz_hist[16], sz_hn;
unsigned sh4_pc;                      /* guest pc of the instruction being run, for fault reports */
void sq_direct(unsigned ea, unsigned v, int size);
void sq_pref(unsigned ea);
unsigned long xlat_exact(unsigned long);
#ifdef SH4_PROF
/* profile (test builds): interpreted instructions per 64-byte block of program code from 0x8c010000, and the time spent in the
   interpreter (outermost run() calls) and in the native functions it calls; wii_main.cpp reports and resets them */
unsigned sh4x_cur;
unsigned sh4x_guards;
void sh4x_guard(unsigned pc) { if (sh4x_guards++ < 20) host_log("sh4x: fpu mode %x at %08x, interpreting\n", sh4_fpu.fpscr, pc); }
unsigned sh4_prof[0x9800]; unsigned long long sh4_prof_t[4], sh4_prof_last; int sh4_mode, sh4_depth;   /* time per mode: 0 native, 1 interpreter, 2 store queues and TA, 3 DSI */
unsigned long long sh4_ticks(void);
static inline void prof_mode(int m) { unsigned long long now = sh4_ticks(); sh4_prof_t[sh4_mode] += now - sh4_prof_last; sh4_prof_last = now; sh4_mode = m; }
int sh4_prof_mode(int m) { int o = sh4_mode; prof_mode(m); return o; }
#endif
}
static const unsigned interp_tab[] = {
#include "interp_tab.inc"
};
namespace sh4 {
[[noreturn]] void bad(const char *why, unsigned pc, unsigned op)
{
  host_log("sh4: %s at %08x op=%04x\n", why, pc, op);
  for (int i = 12; i > 0; i--) host_log("  call %s\n", ring[(rp - i) & 255] ? ring[(rp - i) & 255] : "-");
  for (;;) { }
}
#ifndef NO_SH4X
#define X(a, f) void f(Cpu &);
#include "../sh4x/sh4x_tab.inc"
#undef X
#endif
}
namespace {
using namespace sh4;
bool interp_here(unsigned a)
{
  unsigned lo = 0, hi = sizeof interp_tab / sizeof interp_tab[0];
  while (lo < hi) { unsigned m = (lo + hi) / 2; if (interp_tab[m] < a) lo = m + 1; else hi = m; }
  return lo < sizeof interp_tab / sizeof interp_tab[0] && interp_tab[lo] == a;
}

struct Island { unsigned pc; };
Island islands[48];
int nisl;

void fpu(Cpu &C, unsigned op, unsigned pc)
{
  unsigned n = (op >> 8) & 15, m = (op >> 4) & 15, lo = op & 15;
  bool sz = F.fpscr & SZ, dbl = F.fpscr & PRB;
  float *fr = F.fr;
  if (op == 0xf3fd) { if (!(F.fpscr & SZ)) { sz_on_pc = pc; sz_on_entry = sz_cur_entry; } F.fpscr ^= SZ; sz_hist[sz_hn++ & 15] = pc | ((F.fpscr & SZ) ? 1 : 0); return; }
  if (op == 0xfbfd) { set_fpscr(F.fpscr ^ FRB); return; }
  if (dbl && lo <= 5) {
    if (n & 1 || m & 1) bad("odd double register", pc, op);
    double a = getd(fr, n), b = getd(fr, m);
    switch (lo) {
      case 0: setd(fr, n, a + b); return;
      case 1: setd(fr, n, a - b); return;
      case 2: setd(fr, n, a * b); return;
      case 3: setd(fr, n, a / b); return;
      case 4: C.t = a == b; return;
      case 5: C.t = a > b; return;
    }
  }
  switch (lo) {
    case 0: fr[n] = fr[n] + fr[m]; return;
    case 1: fr[n] = fr[n] - fr[m]; return;
    case 2: fr[n] = fr[n] * fr[m]; return;
    case 3: fr[n] = fr[n] / fr[m]; return;
    case 4: C.t = fr[n] == fr[m]; return;
    case 5: C.t = fr[n] > fr[m]; return;
    case 0xe: fr[n] = fr[n] + fr[0] * fr[m]; return;
    case 0xc:
      if (!sz) { fr[n] = fr[m]; return; }
      { float *dn = (n & 1) ? &F.xf[n & 14] : &fr[n & 14], *dm = (m & 1) ? &F.xf[m & 14] : &fr[m & 14]; dn[0] = dm[0]; dn[1] = dm[1]; } return;
    case 6: case 7: case 8: case 9: case 0xa: case 0xb: {
      unsigned *rn = &C.r[n], *rm = &C.r[m];
      if (!sz) {
        switch (lo) {
          case 6: fr[n] = u2f(rd32(C.r[0] + *rm)); break;
          case 7: wr32(C.r[0] + *rn, f2u(fr[m])); break;
          case 8: fr[n] = u2f(rd32(*rm)); break;
          case 9: fr[n] = u2f(rd32(*rm)); *rm += 4; break;
          case 0xa: wr32(*rn, f2u(fr[m])); break;
          case 0xb: *rn -= 4; wr32(*rn, f2u(fr[m])); break;
        }
        return;
      }
      /* SZ=1: 64-bit moves of DRn/XDn; in memory the even (upper) register is at the lower address on this little-endian CPU's
         word order, i.e. FRn at a, FRn+1 at a+4 */
      float *dn = (n & 1) ? &F.xf[n & 14] : &fr[n & 14], *dm = (m & 1) ? &F.xf[m & 14] : &fr[m & 14];
      switch (lo) {
        case 6: { unsigned a = C.r[0] + *rm; dn[0] = u2f(rd32(a)); dn[1] = u2f(rd32(a + 4)); break; }
        case 7: { unsigned a = C.r[0] + *rn; wr32(a, f2u(dm[0])); wr32(a + 4, f2u(dm[1])); break; }
        case 8: dn[0] = u2f(rd32(*rm)); dn[1] = u2f(rd32(*rm + 4)); break;
        case 9: dn[0] = u2f(rd32(*rm)); dn[1] = u2f(rd32(*rm + 4)); *rm += 8; break;
        case 0xa: wr32(*rn, f2u(dm[0])); wr32(*rn + 4, f2u(dm[1])); break;
        case 0xb: *rn -= 8; wr32(*rn, f2u(dm[0])); wr32(*rn + 4, f2u(dm[1])); break;
      }
      return;
    }
    case 0xd:
      switch (m) {
        case 0: fr[n] = u2f(F.fpul); return;                                     /* fsts */
        case 1: F.fpul = f2u(fr[n]); return;                                     /* flds */
        case 2: if (dbl) setd(fr, n & 14, (double)(int)F.fpul); else fr[n] = (float)(int)F.fpul; return;   /* float */
        case 3: {                                                                /* ftrc */
          double f = dbl ? getd(fr, n & 14) : (double)fr[n];
          F.fpul = (f != f) ? 0x80000000u : (f >= 2147483648.0) ? 0x7fffffffu : (f <= -2147483648.0) ? 0x80000000u : (unsigned)(int)f; return;
        }
        case 4: if (dbl) setd(fr, n & 14, -getd(fr, n & 14)); else fr[n] = -fr[n]; return;
        case 5: if (dbl) setd(fr, n & 14, fabs(getd(fr, n & 14))); else fr[n] = fabsf(fr[n]); return;
        case 6: if (dbl) setd(fr, n & 14, sqrt(getd(fr, n & 14))); else fr[n] = sqrtf(fr[n]); return;
        case 7: fr[n] = 1.0f / sqrtf(fr[n]); return;                             /* fsrra */
        case 8: fr[n] = 0.0f; return;
        case 9: fr[n] = 1.0f; return;
        case 0xa: setd(fr, n & 14, (double)u2f(F.fpul)); return;                 /* fcnvsd FPUL,DRn */
        case 0xb: F.fpul = f2u((float)getd(fr, n & 14)); return;                 /* fcnvds DRn,FPUL */
        case 0xe: {                                                              /* fipr FVm,FVn */
          unsigned vn = n & 0xc, vm = (n & 3) << 2;
          fr[vn + 3] = fr[vn] * fr[vm] + fr[vn + 1] * fr[vm + 1] + fr[vn + 2] * fr[vm + 2] + fr[vn + 3] * fr[vm + 3];
          return;
        }
        case 0xf:
          if ((n & 3) == 1) {                                                    /* ftrv XMTRX,FVn */
            unsigned v = n & 0xc; float x0 = fr[v], x1 = fr[v + 1], x2 = fr[v + 2], x3 = fr[v + 3];
            for (int i = 0; i < 4; i++) fr[v + i] = F.xf[i] * x0 + F.xf[i + 4] * x1 + F.xf[i + 8] * x2 + F.xf[i + 12] * x3;
            return;
          }
          if ((n & 1) == 0) {                                                    /* fsca FPUL,DRn */
            float a = (float)(F.fpul & 0xffff) * (6.28318530717958647692f / 65536.0f);
            fr[n] = sinf(a); fr[n + 1] = cosf(a); return;
          }
      }
  }
  bad("unknown FPU op", pc, op);
}

void step(Cpu &C, unsigned pc, unsigned op, unsigned &next);

/* execute the instruction in a delay slot */
void slot(Cpu &C, unsigned pc) { unsigned dummy = pc + 2; step(C, pc, rd16(pc), dummy); }

void step(Cpu &C, unsigned pc, unsigned op, unsigned &next)
{
  unsigned n = (op >> 8) & 15, m = (op >> 4) & 15, i8 = op & 255, d4 = op & 15;
  unsigned *R = C.r;
  switch (op >> 12) {
    case 0x0:
      switch (op & 0xff) {
        case 0x09: case 0x00: return;                                                       /* nop (0x0000 sits in the delay slot of the pointer-to-member helper's jmp) */
        case 0x0b: { slot(C, pc + 2); next = C.pr; if (F.fpscr & SZ) { static int nl; if (nl++ < 10) host_log("sh4: rts with SZ=1 at %08x to %08x (run %08x, SZ set at %08x)\n", pc, C.pr, sz_cur_entry, sz_on_pc); for (int i = 16; i > 0; i--) host_log("  fschg %08x -> %d\n", sz_hist[(sz_hn - i) & 15] & ~1u, sz_hist[(sz_hn - i) & 15] & 1); } return; }   /* rts */
        case 0x08: C.t = 0; return;
        case 0x18: C.t = 1; return;
        case 0x48: C.s = 0; return;
        case 0x58: C.s = 1; return;
        case 0x19: C.q = C.m = C.t = 0; return;                                             /* div0u */
        case 0x28: C.mach = C.macl = 0; return;
        case 0x0a: R[n] = C.mach; return;
        case 0x1a: R[n] = C.macl; return;
        case 0x2a: R[n] = C.pr; return;
        case 0x5a: R[n] = F.fpul; return;
        case 0x6a: R[n] = F.fpscr; return;
        case 0x12: R[n] = C.gbr; return;                                                    /* stc gbr */
        case 0x02: R[n] = 0x40000000u | (C.m << 9) | (C.q << 8) | (C.s << 1) | C.t; return; /* stc sr */
        case 0x29: R[n] = C.t; return;                                                      /* movt */
        case 0x03: { unsigned t = pc + 4 + R[n]; slot(C, pc + 2); C.pr = pc + 4; next = t; return; }   /* bsrf */
        case 0x23: { unsigned t = pc + 4 + R[n]; slot(C, pc + 2); next = t; return; }       /* braf */
        case 0x83: sq_pref(R[n]); return;                                                   /* pref */
        case 0x93: case 0xa3: case 0xb3: return;                                            /* ocbi, ocbp, ocbwb */
        case 0xc3: wr32(R[n], R[0]); return;                                                /* movca.l */
        case 0x1b: return;                                                                  /* sleep */
      }
      switch (op & 15) {
        case 4: wr8(R[0] + R[n], R[m]); return;
        case 5: wr16(R[0] + R[n], R[m]); return;
        case 6: wr32(R[0] + R[n], R[m]); return;
        case 7: C.macl = R[n] * R[m]; return;
        case 0xc: R[n] = sx8(rd8(R[0] + R[m])); return;
        case 0xd: R[n] = sx16(rd16(R[0] + R[m])); return;
        case 0xe: R[n] = rd32(R[0] + R[m]); return;
        case 0xf: {                                                                         /* mac.l @Rm+,@Rn+ */
          long long a = (int)rd32(R[n]), b = (int)rd32(R[m]); R[n] += 4; R[m] += 4;
          long long acc = (long long)(((unsigned long long)C.mach << 32) | C.macl) + a * b;
          C.mach = (unsigned)((unsigned long long)acc >> 32); C.macl = (unsigned)acc; return;
        }
      }
      break;
    case 0x1: wr32(R[n] + d4 * 4, R[m]); return;
    case 0x2:
      switch (d4) {
        case 0: wr8(R[n], R[m]); return;
        case 1: wr16(R[n], R[m]); return;
        case 2: wr32(R[n], R[m]); return;
        case 4: R[n] -= 1; wr8(R[n], R[m]); return;
        case 5: R[n] -= 2; wr16(R[n], R[m]); return;
        case 6: R[n] -= 4; wr32(R[n], R[m]); return;
        case 7: C.q = R[n] >> 31; C.m = R[m] >> 31; C.t = C.q != C.m; return;               /* div0s */
        case 8: C.t = (R[n] & R[m]) == 0; return;
        case 9: R[n] &= R[m]; return;
        case 10: R[n] ^= R[m]; return;
        case 11: R[n] |= R[m]; return;
        case 12: { unsigned x = R[n] ^ R[m]; C.t = !(x & 0xff) || !(x & 0xff00) || !(x & 0xff0000) || !(x & 0xff000000u); return; }
        case 13: R[n] = (R[n] << 16) | (R[m] >> 16); return;                                /* xtrct */
        case 14: C.macl = (R[n] & 0xffff) * (R[m] & 0xffff); return;
        case 15: C.macl = (unsigned)((int)sx16(R[n]) * (int)sx16(R[m])); return;
      }
      break;
    case 0x3:
      switch (d4) {
        case 0: C.t = R[n] == R[m]; return;
        case 2: C.t = R[n] >= R[m]; return;
        case 3: C.t = (int)R[n] >= (int)R[m]; return;
        case 6: C.t = R[n] > R[m]; return;
        case 7: C.t = (int)R[n] > (int)R[m]; return;
        case 8: R[n] -= R[m]; return;
        case 12: R[n] += R[m]; return;
        case 5: { unsigned long long p = (unsigned long long)R[n] * R[m]; C.mach = (unsigned)(p >> 32); C.macl = (unsigned)p; return; }
        case 13: { long long p = (long long)(int)R[n] * (int)R[m]; C.mach = (unsigned)((unsigned long long)p >> 32); C.macl = (unsigned)p; return; }
        case 10: { unsigned t = R[n] - R[m]; unsigned c = R[n] < t; unsigned t2 = t - C.t; c |= t < t2; R[n] = t2; C.t = c; return; }
        case 14: { unsigned t = R[n] + R[m]; unsigned c = t < R[n]; unsigned t2 = t + C.t; c |= t2 < t; R[n] = t2; C.t = c; return; }
        case 11: { int a = (int)R[n], b = (int)R[m]; long long d = (long long)a - b; R[n] = (unsigned)d; C.t = d != (int)d; return; }  /* subv */
        case 15: { int a = (int)R[n], b = (int)R[m]; long long d = (long long)a + b; R[n] = (unsigned)d; C.t = d != (int)d; return; }  /* addv */
        case 4: {                                                                          /* div1 */
          unsigned old_q = C.q; C.q = R[n] >> 31; R[n] = (R[n] << 1) | C.t; unsigned tmp0 = R[n];
          if (!old_q) { if (!C.m) { R[n] -= R[m]; unsigned tmp1 = R[n] > tmp0; C.q = C.q ? !tmp1 : tmp1; } else { R[n] += R[m]; unsigned tmp1 = R[n] < tmp0; C.q = C.q ? tmp1 : !tmp1; } }
          else { if (!C.m) { R[n] += R[m]; unsigned tmp1 = R[n] < tmp0; C.q = C.q ? !tmp1 : tmp1; } else { R[n] -= R[m]; unsigned tmp1 = R[n] > tmp0; C.q = C.q ? tmp1 : !tmp1; } }
          C.t = C.q == C.m; return;
        }
      }
      break;
    case 0x4:
      switch (op & 0xff) {
        case 0x00: C.t = R[n] >> 31; R[n] <<= 1; return;
        case 0x01: C.t = R[n] & 1; R[n] >>= 1; return;
        case 0x04: C.t = R[n] >> 31; R[n] = (R[n] << 1) | C.t; return;
        case 0x05: C.t = R[n] & 1; R[n] = (R[n] >> 1) | ((unsigned)C.t << 31); return;
        case 0x08: R[n] <<= 2; return;
        case 0x09: R[n] >>= 2; return;
        case 0x18: R[n] <<= 8; return;
        case 0x19: R[n] >>= 8; return;
        case 0x28: R[n] <<= 16; return;
        case 0x29: R[n] >>= 16; return;
        case 0x20: C.t = R[n] >> 31; R[n] <<= 1; return;
        case 0x21: C.t = R[n] & 1; R[n] = (unsigned)((int)R[n] >> 1); return;
        case 0x24: { unsigned t = R[n] >> 31; R[n] = (R[n] << 1) | C.t; C.t = t; return; }
        case 0x25: { unsigned t = R[n] & 1; R[n] = (R[n] >> 1) | ((unsigned)C.t << 31); C.t = t; return; }
        case 0x10: R[n] -= 1; C.t = R[n] == 0; return;
        case 0x11: C.t = (int)R[n] >= 0; return;
        case 0x15: C.t = (int)R[n] > 0; return;
        case 0x0a: C.mach = R[n]; return;
        case 0x1a: C.macl = R[n]; return;
        case 0x2a: C.pr = R[n]; return;
        case 0x5a: F.fpul = R[n]; return;
        case 0x6a: set_fpscr(R[n] & 0x003fffffu); return;
        case 0x1e: C.gbr = R[n]; return;                                                    /* ldc gbr */
        case 0x0e: C.t = R[n] & 1; C.s = (R[n] >> 1) & 1; C.q = (R[n] >> 8) & 1; C.m = (R[n] >> 9) & 1; return;   /* ldc sr */
        case 0x02: R[n] -= 4; wr32(R[n], C.mach); return;
        case 0x12: R[n] -= 4; wr32(R[n], C.macl); return;
        case 0x22: R[n] -= 4; wr32(R[n], C.pr); return;
        case 0x52: R[n] -= 4; wr32(R[n], F.fpul); return;
        case 0x62: R[n] -= 4; wr32(R[n], F.fpscr); return;
        case 0x13: R[n] -= 4; wr32(R[n], C.gbr); return;                                    /* stc.l gbr */
        case 0x06: C.mach = rd32(R[n]); R[n] += 4; return;
        case 0x16: C.macl = rd32(R[n]); R[n] += 4; return;
        case 0x26: C.pr = rd32(R[n]); R[n] += 4; return;
        case 0x56: F.fpul = rd32(R[n]); R[n] += 4; return;
        case 0x66: set_fpscr(rd32(R[n]) & 0x003fffffu); R[n] += 4; return;
        case 0x17: C.gbr = rd32(R[n]); R[n] += 4; return;                                   /* ldc.l gbr */
        case 0x0b: { unsigned t = R[n]; slot(C, pc + 2); C.pr = pc + 4; next = t; return; }   /* jsr */
        case 0x2b: { unsigned t = R[n]; slot(C, pc + 2); next = t; return; }                  /* jmp */
        case 0x1b: { unsigned v = rd8(R[n]); C.t = v == 0; wr8(R[n], v | 0x80); return; }     /* tas.b */
      }
      if ((op & 15) == 0xc) { int s = (int)R[m]; if (s >= 0) R[n] <<= (s & 31); else if ((s & 31) == 0) R[n] = (int)R[n] < 0 ? 0xffffffffu : 0; else R[n] = (unsigned)((int)R[n] >> (-s & 31)); return; }   /* shad */
      if ((op & 15) == 0xd) { int s = (int)R[m]; if (s >= 0) R[n] <<= (s & 31); else if ((s & 31) == 0) R[n] = 0; else R[n] >>= (-s & 31); return; }                                              /* shld */
      if ((op & 15) == 0xf) {                                                               /* mac.w @Rm+,@Rn+ */
        int a = sx16(rd16(R[n])), b = sx16(rd16(R[m])); R[n] += 2; R[m] += 2;
        long long acc = (long long)(((unsigned long long)C.mach << 32) | C.macl) + (long long)a * b;
        C.mach = (unsigned)((unsigned long long)acc >> 32); C.macl = (unsigned)acc; return;
      }
      break;
    case 0x5: R[n] = rd32(R[m] + d4 * 4); return;
    case 0x6:
      switch (d4) {
        case 0: R[n] = sx8(rd8(R[m])); return;
        case 1: R[n] = sx16(rd16(R[m])); return;
        case 2: R[n] = rd32(R[m]); return;
        case 3: R[n] = R[m]; return;
        case 4: R[n] = sx8(rd8(R[m])); if (n != m) R[m] += 1; return;
        case 5: R[n] = sx16(rd16(R[m])); if (n != m) R[m] += 2; return;
        case 6: R[n] = rd32(R[m]); if (n != m) R[m] += 4; return;
        case 7: R[n] = ~R[m]; return;
        case 8: R[n] = (R[m] & 0xffff0000u) | ((R[m] & 0xff) << 8) | ((R[m] >> 8) & 0xff); return;
        case 9: R[n] = (R[m] << 16) | (R[m] >> 16); return;
        case 10: { unsigned t = 0 - R[m]; unsigned c = 0 < t; R[n] = t - C.t; c |= t < R[n]; C.t = c; return; }
        case 11: R[n] = 0 - R[m]; return;
        case 12: R[n] = R[m] & 0xff; return;
        case 13: R[n] = R[m] & 0xffff; return;
        case 14: R[n] = sx8(R[m]); return;
        case 15: R[n] = sx16(R[m]); return;
      }
      break;
    case 0x7: R[n] += sx8(i8); return;
    case 0x8:
      switch ((op >> 8) & 15) {
        case 0: wr8(R[m] + d4, R[0]); return;
        case 1: wr16(R[m] + d4 * 2, R[0]); return;
        case 4: R[0] = sx8(rd8(R[m] + d4)); return;
        case 5: R[0] = sx16(rd16(R[m] + d4 * 2)); return;
        case 8: C.t = R[0] == (unsigned)sx8(i8); return;
        case 9: if (C.t) next = pc + 4 + sx8(i8) * 2; return;
        case 11: if (!C.t) next = pc + 4 + sx8(i8) * 2; return;
        case 13: { unsigned t = pc + 4 + sx8(i8) * 2; int tk = C.t; slot(C, pc + 2); next = tk ? t : pc + 4; return; }    /* bt/s: the slot runs once either way */
        case 15: { unsigned t = pc + 4 + sx8(i8) * 2; int tk = !C.t; slot(C, pc + 2); next = tk ? t : pc + 4; return; }   /* bf/s */
      }
      break;
    case 0x9: R[n] = sx16(rd16(pc + 4 + i8 * 2)); return;
    case 0xa: { int dd = (int)(op & 0xfff); if (dd & 0x800) dd -= 0x1000; unsigned t = pc + 4 + dd * 2; slot(C, pc + 2); next = t; return; }
    case 0xb: { int dd = (int)(op & 0xfff); if (dd & 0x800) dd -= 0x1000; unsigned t = pc + 4 + dd * 2; slot(C, pc + 2); C.pr = pc + 4; next = t; return; }
    case 0xc:
      switch ((op >> 8) & 15) {
        case 0: wr8(C.gbr + i8, R[0]); return;
        case 1: wr16(C.gbr + i8 * 2, R[0]); return;
        case 2: wr32(C.gbr + i8 * 4, R[0]); return;
        case 4: R[0] = sx8(rd8(C.gbr + i8)); return;
        case 5: R[0] = sx16(rd16(C.gbr + i8 * 2)); return;
        case 6: R[0] = rd32(C.gbr + i8 * 4); return;
        case 7: R[0] = ((pc + 4) & ~3u) + i8 * 4; return;
        case 8: C.t = (R[0] & i8) == 0; return;
        case 9: R[0] &= i8; return;
        case 10: R[0] ^= i8; return;
        case 11: R[0] |= i8; return;
        case 12: C.t = (rd8(C.gbr + R[0]) & i8) == 0; return;
        case 13: wr8(C.gbr + R[0], rd8(C.gbr + R[0]) & i8); return;
        case 14: wr8(C.gbr + R[0], rd8(C.gbr + R[0]) ^ i8); return;
        case 15: wr8(C.gbr + R[0], rd8(C.gbr + R[0]) | i8); return;
      }
      break;
    case 0xd: R[n] = rd32(((pc + 4) & ~3u) + i8 * 4); return;
    case 0xe: R[n] = sx8(i8); return;
    case 0xf: fpu(C, op, pc); return;
  }
  bad("unknown op", pc, op);
}

/* a control transfer to `t`: if it is the start of an integer-only function, run the host version and return its r0 */
inline void host_call_h(Cpu &C, hfn h)
{
  vsp = C.r[15]; vin0 = C.r[0]; vin1 = C.r[1];
  vr4 = C.r[4]; vr5 = C.r[5]; vr6 = C.r[6]; vr7 = C.r[7];
#ifdef SH4_PROF
  prof_mode(0);
#endif
  C.r[0] = (unsigned)h(C.r[4], C.r[5], C.r[6], C.r[7]);
#ifdef SH4_PROF
  prof_mode(1);
#endif
}
inline bool host_call(Cpu &C, unsigned t)
{
  if (interp_here(t)) return false;
  unsigned long h = xlat_exact(t);
  if (!h) return false;
  host_call_h(C, (hfn)h);
  return true;
}

/* statically translated functions (tools/sh4_translate.py, port/wii/sh4x): sorted by address */
#ifndef NO_SH4X
struct XEnt { unsigned a; xfn f; };
const XEnt xtab_sh4[] = {
#define X(a, f) { a, f },
#include "../sh4x/sh4x_tab.inc"
#undef X
};
const unsigned nxtab_sh4 = sizeof xtab_sh4 / sizeof xtab_sh4[0];
#else
struct XEnt { unsigned a; xfn f; };
const XEnt xtab_sh4[1] = { { 0, 0 } };
const unsigned nxtab_sh4 = 0;
#endif
inline xfn xfind_(unsigned a)
{
  unsigned lo = 0, hi = nxtab_sh4;
  while (lo < hi) { unsigned m = (lo + hi) / 2; if (xtab_sh4[m].a < a) lo = m + 1; else hi = m; }
  return lo < nxtab_sh4 && xtab_sh4[lo].a == a ? xtab_sh4[lo].f : 0;
}

unsigned long guard, guard_base;   /* instructions run; a runaway is counted from the outermost run() */
/* run guest code from pc until control reaches `stop` (the return address of the outermost call) */
void exec_(Cpu &C, unsigned pc, unsigned stop)
{
  XPROF(0);
#ifdef SH4_STACKCHECK
  unsigned sret[64], ssp[64], sent[64]; int sd = 0;
#endif
  for (; pc != stop; guard++) {
    if (guard - guard_base > 400000000UL) { host_log("sh4: runs away: entry=%08x pc=%08x r0..r7=%08x %08x %08x %08x %08x %08x %08x %08x\n", sz_cur_entry, pc, C.r[0], C.r[1], C.r[2], C.r[3], C.r[4], C.r[5], C.r[6], C.r[7]); bad("runs away", pc, rd16(pc)); }
    sh4_pc = pc;
#ifdef SH4_PROF
    { unsigned b = (pc - 0x8c010000u) >> 6; if (b < 0x9800) sh4_prof[b]++; }
#endif
    unsigned op = rd16(pc), next = pc + 2;
    unsigned hi = op >> 12;
    if ((op & 0xf0ff) == 0x400b) {                                       /* jsr @Rn */
      unsigned t = C.r[(op >> 8) & 15];
      if (!interp_here(t) && xlat_exact(t)) { slot(C, pc + 2); host_call(C, t); pc += 4; continue; }
      if (xfn f = xfind_(t)) { slot(C, pc + 2); C.pr = pc + 4; f(C); pc += 4; continue; }
    } else if ((op & 0xf0ff) == 0x402b) {                                /* jmp @Rn: a tail call when it lands on a function start */
      unsigned t = C.r[(op >> 8) & 15];
      if (!interp_here(t) && xlat_exact(t)) { slot(C, pc + 2); host_call(C, t); pc = C.pr; continue; }
      if (xfn f = xfind_(t)) { slot(C, pc + 2); unsigned r = C.pr; f(C); pc = r; continue; }
    } else if (hi == 0xb) {                                              /* bsr to an integer-only function (a bra stays here: its target can be a label the tables list as a function) */
      int dd = (int)(op & 0xfff); if (dd & 0x800) dd -= 0x1000; unsigned t = pc + 4 + dd * 2;
      if (!interp_here(t) && xlat_exact(t)) { slot(C, pc + 2); host_call(C, t); pc += 4; continue; }
      if (xfn f = xfind_(t)) { slot(C, pc + 2); C.pr = pc + 4; f(C); pc += 4; continue; }
    } else if (hi == 0xa || (op & 0xf0ff) == 0x0003) {                   /* bra / bsrf into a translated function */
      unsigned t;
      if (hi == 0xa) { int dd = (int)(op & 0xfff); if (dd & 0x800) dd -= 0x1000; t = pc + 4 + dd * 2; } else t = pc + 4 + C.r[(op >> 8) & 15];
      if (xfn f = xfind_(t)) {
        slot(C, pc + 2);
        if (hi == 0xa) { unsigned r = C.pr; f(C); pc = r; } else { C.pr = pc + 4; f(C); pc += 4; }
        continue;
      }
    }
#ifdef SH4_STACKCHECK
    if ((op & 0xf0ff) == 0x400b || hi == 0xb || (op & 0xf0ff) == 0x0003) { if (sd < 64) { sret[sd] = pc + 4; ssp[sd] = C.r[15]; sent[sd] = 0; sd++; } }
    if (op == 0x000b && sd > 0 && C.pr == sret[sd - 1]) {
      unsigned dummy = pc + 2; Cpu T = C; step(T, pc + 2, rd16(pc + 2), dummy);
      if (T.r[15] != ssp[sd - 1]) { static int nb; if (nb++ < 20) host_log("sh4: unbalanced return at %08x to %08x: sp %x, at call %x (run entry %08x)\n", pc, C.pr, T.r[15], ssp[sd - 1], sz_cur_entry); }
      sd--;
    }
#endif
    step(C, pc, op, next);
#ifdef SH4_JTRACE
    /* debug builds: the last control transfers in the interpreter, dumped when pc leaves guest RAM */
    { static unsigned jf[64], jt[64], jr[64], jn; if (next != pc + 2) { jf[jn & 63] = pc; jt[jn & 63] = next; jr[jn & 63] = C.r[15]; jn++; }
      if ((next >> 24) != 0x8c && next != stop) { host_log("sh4: pc left RAM: %08x -> %08x pr=%08x r0..r7 %08x %08x %08x %08x %08x %08x %08x %08x r14 %08x r15 %08x\n", pc, next, C.pr, C.r[0], C.r[1], C.r[2], C.r[3], C.r[4], C.r[5], C.r[6], C.r[7], C.r[14], C.r[15]);
        for (unsigned i = jn > 64 ? jn - 64 : 0; i < jn; i++) host_log("  jt %08x -> %08x sp %08x\n", jf[i & 63], jt[i & 63], jr[i & 63]); bad("pc left RAM", pc, op); } }
#endif
    pc = next;
  }
}

unsigned long run(unsigned entry, unsigned long a, unsigned long b, unsigned long c, unsigned long d)
{
  Cpu C; memset(&C, 0, sizeof C);
  C.r[0] = vin0; C.r[1] = vin1;
  C.r[4] = (unsigned)a; C.r[5] = (unsigned)b; C.r[6] = (unsigned)c; C.r[7] = (unsigned)d; C.r[15] = (unsigned)vsp;
  const unsigned SENT = 0xfffffffeu; C.pr = SENT;
  unsigned long saved_vsp = vsp;
  unsigned fpscr0 = F.fpscr; unsigned prev_entry = sz_cur_entry; sz_cur_entry = entry;
  unsigned long g0 = guard, gb = guard_base; guard_base = guard;
#ifdef SH4_PROF
  int pmode = sh4_mode; prof_mode(1); sh4_depth++;
#endif
  if (xfn f = xfind_(entry)) f(C); else exec_(C, entry, SENT);
  vsp = saved_vsp;
  sz_cur_entry = prev_entry;
#ifdef SH4_PROF
  sh4_depth--; prof_mode(pmode);
#endif
  if ((F.fpscr ^ fpscr0) & (SZ | FRB | PRB)) { static int nf; if (nf++ < 20) host_log("sh4: %08x changed fpscr %x -> %x\n", entry, fpscr0, F.fpscr); }
  vin1 = C.r[1];                                                         /* upper word of a 64-bit result */
  sh4_total += guard - g0; sh4_runs++; guard_base = gb;
  return C.r[0];
}

template <int I> unsigned long tramp(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { return run(islands[I].pc, a, b, c, d); }
template <int... Is> struct Tab { static constexpr hfn fns[sizeof...(Is)] = { tramp<Is>... }; };
template <int N, int... Is> struct Gen : Gen<N - 1, N - 1, Is...> {};
template <int... Is> struct Gen<0, Is...> { typedef Tab<Is...> type; };
}

namespace sh4 {
#ifdef SH4_PROF
/* profile builds: where translated code continues in the interpreter (guest pc, calls) */
extern "C" { unsigned xe_a[1024], xe_n[1024]; extern unsigned prof_on; }
void exec(Cpu &C, unsigned pc, unsigned stop)
{
  if (prof_on) { unsigned h = (pc * 2654435761u) >> 22; for (int k = 0; k < 1024 && xe_a[h] && xe_a[h] != pc; k++) h = (h + 1) & 1023; if (!xe_a[h]) xe_a[h] = pc; if (xe_a[h] == pc) xe_n[h]++; }
  exec_(C, pc, stop);
}
#else
void exec(Cpu &C, unsigned pc, unsigned stop) { exec_(C, pc, stop); }
#endif
bool native_call(Cpu &C, unsigned t) { return host_call(C, t); }
xfn xfind(unsigned a) { return xfind_(a); }
void call_ptr(Cpu &C, hfn h) { host_call_h(C, h); }
}

/* entry from the generated units: a function of notes/fpu_funcs.txt */
extern "C" unsigned long sh4_interp(unsigned entry, unsigned long a, unsigned long b, unsigned long c, unsigned long d) { return run(entry, a, b, c, d); }

extern "C" unsigned long sh4_island_for(unsigned pc)
{
  typedef Gen<48>::type T;
  for (int i = 0; i < nisl; i++) if (islands[i].pc == pc) return (unsigned long)T::fns[i];
  if (nisl >= 48) return 0;
  islands[nisl].pc = pc; host_log("sh4: island at %08x\n", pc);
  return (unsigned long)T::fns[nisl++];
}

/* a float result of an interpreted function, for the (rare) C caller that takes it as a host float */
extern "C" float sh4_fpu_fr0(void) { return sh4_fpu.fr[0]; }
