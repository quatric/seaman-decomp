#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2552b0_def(float *ar4,float *ar5,float *ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c2552b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  float * s0 = (float *)(unsigned long)*(unsigned *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  undefined8 in_dr4 = 0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = F32HI(in_dr4);
  fVar1 = fVar5 * fVar5;
  fVar3 = fVar5 * fVar1;
  fVar2 = ((fVar1 * 2.0 - fVar5) - fVar3) * 0.5;
  fVar4 = (fVar3 * 1.5 - fVar1 * 2.5) + 1.0;
  fVar5 = (fVar5 * 0.5 - fVar3 * 1.5) + fVar1 * 2.0;
  fVar1 = (fVar3 - fVar1) * 0.5;
  *s0 = fVar1 * *ar7 + fVar5 * *ar6 + fVar2 * *ar4 + *ar5 * fVar4;
  s0[1] = fVar1 * ar7[1] + fVar5 * ar6[1] + fVar2 * ar4[1] + ar5[1] * fVar4;
  s0[2] = fVar1 * ar7[2] + fVar5 * ar6[2] + fVar2 * ar4[2] + ar5[2] * fVar4;
  return 8;
}

__asm__(".globl _FUN_8c2552b0\n.set _FUN_8c2552b0, _FUN_8c2552b0_def\n");
