#!/usr/bin/env python3
"""Check tools/sh4_translate.py against the interpreter, instruction by instruction, on the host (macOS, clang++).
Every non-branch opcode that occurs in the interpreted functions (port/wii/host/interp_tab.inc) is run once through the
interpreter's step() and once through its translated C, from the same random registers, FPU file (in all four SZ/PR modes) and
memory (a 16 MB buffer holding the program image, so folded literal-pool loads read the same words), and the resulting CPU state,
FPU state and memory are compared.  usage: sh4x_test.py <root> [rounds]"""
import os, struct, subprocess, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
R = sys.argv[1]; ROUNDS = int(sys.argv[2]) if len(sys.argv) > 2 else 4
sys.argv = [sys.argv[0], R]
import sh4_translate as X

H = os.path.join(R, 'port', 'wii', 'host')
OUT = os.path.join(R, 'port', 'wii', 'sh4x', 'test')
os.makedirs(OUT, exist_ok=True)
forms = {}
for a in sorted(X.INTERP):
    if a not in X.SIZE: continue
    for pc in range(a, a + X.SIZE[a], 2):
        op = X.w16(pc)
        if X.branch(op, pc) or op in forms: continue
        s = X.sem(op, pc)
        if 'bad(' in s: continue
        forms[op] = pc
items = sorted(forms.items())
src = ['#define GM(T, a) (*(le<T> *)(test_mem + ((unsigned)(a) & 0xffffffu)))\n#include "../lep.h"\nextern unsigned char test_mem[];\n',
       '#define NO_SH4X 1\n#include "wii_sh4.cpp"\n',
       'unsigned char test_mem[0x1000010];\n'
       'extern "C" { const char *ring[256]; unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; unsigned long vsp; unsigned long xlat_exact(unsigned long) { return 0; }\n'
       'unsigned sq_log[64][3], sq_n; void sq_direct(unsigned ea, unsigned v, int size) { if (sq_n < 64) { sq_log[sq_n][0] = ea; sq_log[sq_n][1] = v; sq_log[sq_n][2] = size; } sq_n++; }\n'
       'void sq_pref(unsigned ea) { if (sq_n < 64) { sq_log[sq_n][0] = ea; sq_log[sq_n][1] = 0xffffffff; sq_log[sq_n][2] = 0; } sq_n++; }\n'
       'void host_log(const char *f, ...) { } unsigned long xlat(unsigned long a) { return a; } }\n'
       'namespace sh4 {\n']
for i, (op, pc) in enumerate(items):
    src.append('static void t%d(Cpu &C) { %s }\n' % (i, X.sem(op, pc)))
    for mi in range(4): src.append('static void t%d_%d(Cpu &C) { %s }\n' % (i, mi, X.sem(op, pc, (mi >> 1, mi & 1))))   # the FPU mode known: (SZ, PR)
src.append('}\nstruct TC { unsigned op, pc; void (*f)(sh4::Cpu &); void (*m[4])(sh4::Cpu &); };\nstatic const TC tests[] = {\n')
src.append(''.join('{ 0x%04x, 0x%08xu, sh4::t%d, { %s } },\n' % (op, pc, i, ', '.join('sh4::t%d_%d' % (i, mi) for mi in range(4))) for i, (op, pc) in enumerate(items)))
src.append('''};
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static unsigned rnd() { static unsigned long long s = 88172645463325252ull; s ^= s << 13; s ^= s >> 7; s ^= s << 17; return (unsigned)s; }
static float rf() { static const float v[] = { 0.0f, 1.0f, -1.0f, 0.5f, 2.0f, 3.25f, -7.5f, 100.0f, 1e-3f, 65536.0f, -0.125f, 1234.5f }; return (rnd() & 1) ? v[rnd() % 12] : (float)((int)(rnd() % 20001) - 10000) / 64.0f; }
static unsigned char *img0;
int main(int argc, char **argv)
{
  FILE *f = fopen(argv[1], "rb"); fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
  img0 = (unsigned char *)malloc(0x1000010); memset(img0, 0, 0x1000010);
  for (long i = 0; i < 0x1000000; i++) img0[i] = (unsigned char)(i * 37 + 11);
  fread(img0 + 0x10000, 1, sz, f); fclose(f);
  memcpy(test_mem, img0, 0x1000010);
  static unsigned char win[64][1100]; unsigned wb[64]; const unsigned WL = 1100;
  int rounds = atoi(argv[2]), bad = 0, n = sizeof tests / sizeof tests[0];
  for (int k = 0; k < n; k++)
    for (int rr = 0; rr < rounds; rr++) {
      sh4::Cpu A; memset(&A, 0, sizeof A);
      for (int i = 0; i < 16; i++) A.r[i] = (rr & 1) ? 0x8c100000u + (rnd() & 0xfff0) : rnd();
      A.r[15] = 0x8c200000u + (rnd() & 0xff0);
      A.pr = rnd(); A.mach = rnd(); A.macl = rnd(); A.gbr = 0x8c300000u + (rnd() & 0xff00); A.t = rnd() & 1; A.s = rnd() & 1; A.q = rnd() & 1; A.m = rnd() & 1;
      Sh4Fpu FA; for (int i = 0; i < 16; i++) { FA.fr[i] = rf(); FA.xf[i] = rf(); } FA.fpul = rnd();
      FA.fpscr = 0x00040001u | ((rr & 2) ? 0x100000u : 0) | ((rr >> 2 & 1) ? 0x80000u : 0);
      if ((FA.fpscr & 0x80000u) && ((tests[k].op >> 12) == 0xf)) { unsigned lo = tests[k].op & 15, nn = (tests[k].op >> 8) & 15, mm = (tests[k].op >> 4) & 15; if (lo <= 5 && ((nn | mm) & 1)) continue; }
      /* the memory one instruction can write: near each register, r0 + each register, and the GBR window */
      int nw = 0;
      for (int i = 0; i < 16; i++) { wb[nw++] = A.r[i] - 32; wb[nw++] = A.r[0] + A.r[i] - 32; }
      wb[nw++] = A.gbr - 32; wb[nw++] = A.gbr + A.r[0] - 32;
      sh4::Cpu B0 = A;
      sh4_fpu = FA; sq_n = 0;
      unsigned nx = tests[k].pc + 2; step(A, tests[k].pc, tests[k].op, nx);
      Sh4Fpu RA = sh4_fpu; unsigned sqa = sq_n; unsigned sqla[64][3]; memcpy(sqla, sq_log, sizeof sqla);
      for (int w = 0; w < nw; w++) for (unsigned j = 0; j < WL; j++) win[w][j] = test_mem[(wb[w] + j) & 0xffffffu];
      for (int w = 0; w < nw; w++) for (unsigned j = 0; j < WL; j++) { unsigned o = (wb[w] + j) & 0xffffffu; test_mem[o] = img0[o]; }
      for (int v = 0; v < 2; v++) {   /* the run-time-mode C, then the C for this round's mode */
      sh4::Cpu B = B0;
      sh4_fpu = FA; sq_n = 0;
      (v ? tests[k].m[((FA.fpscr >> 20) & 1) * 2 + ((FA.fpscr >> 19) & 1)] : tests[k].f)(B);
      Sh4Fpu RB = sh4_fpu;
      bool memok = true;
      for (int w = 0; w < nw; w++) for (unsigned j = 0; j < WL; j++) { unsigned o = (wb[w] + j) & 0xffffffu; if (test_mem[o] != win[w][j]) memok = false; }
      for (int w = 0; w < nw; w++) for (unsigned j = 0; j < WL; j++) { unsigned o = (wb[w] + j) & 0xffffffu; test_mem[o] = img0[o]; }
      bool ok = !memcmp(&A, &B, sizeof A) && !memcmp(&RA, &RB, sizeof RA) && memok && sqa == sq_n && !memcmp(sqla, sq_log, sizeof sqla);
      if (!ok) { if (bad++ < 30) { printf("MISMATCH%s op %04x pc %08x round %d fpscr %x:", v ? " (mode known)" : "", tests[k].op, tests[k].pc, rr, FA.fpscr);
          for (int i = 0; i < 16; i++) if (A.r[i] != B.r[i]) printf(" r%d %08x/%08x", i, A.r[i], B.r[i]);
          if (A.t != B.t) printf(" t %d/%d", A.t, B.t); if (A.pr != B.pr) printf(" pr"); if (A.mach != B.mach || A.macl != B.macl) printf(" mac");
          if (memcmp(&RA, &RB, sizeof RA)) printf(" fpu"); if (!memok) printf(" mem"); if (sqa != sq_n) printf(" sq");
          printf("\\n"); } }
      }
    }
  printf("%d opcode forms, %d rounds each: %d mismatches\\n", n, rounds, bad);
  return bad != 0;
}
''')
open(os.path.join(OUT, 'sh4x_test.cpp'), 'w').write(''.join(src))
exe = os.path.join(OUT, 'sh4x_test')
r = subprocess.run(['clang++', '-std=gnu++17', '-O1', '-w', '-fno-exceptions', '-fno-rtti', '-ffp-contract=off', '-I', H, '-o', exe, os.path.join(OUT, 'sh4x_test.cpp')], capture_output=True, text=True)
if r.returncode: print(r.stderr[:3000]); sys.exit(1)
print(len(items), 'opcode forms')
sys.exit(subprocess.run([exe, os.path.join(R, 'disc', '1ST_READ.BIN'), str(ROUNDS * 2)]).returncode)
