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
undefined4 * FUN_8c2551d4_def(float *ar4,float *ar5,float *ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c2551d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined8 in_dr4 = 0;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = F32HI(in_dr4);
  fVar3 = fVar4 * fVar4;
  fVar6 = fVar4 * fVar3;
  fVar5 = ((fVar3 * 2.0 - fVar4) - fVar6) * 0.5;
  fVar7 = (fVar6 * 1.5 - fVar3 * 2.5) + 1.0;
  fVar4 = (fVar4 * 0.5 - fVar6 * 1.5) + fVar3 * 2.0;
  pfVar1 = ((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 1;
  fVar3 = (fVar6 - fVar3) * 0.5;
  *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) = fVar3 * *ar7 + fVar4 * *ar6 + fVar5 * *ar4 + *ar5 * fVar7;
  *pfVar1 = fVar3 * ar7[1] + fVar4 * ar6[1] + fVar5 * ar4[1] + ar5[1] * fVar7;
  pfVar2 = ((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 2;
  fVar3 = fVar3 * ar7[2] + fVar4 * ar6[2] + fVar5 * ar4[2] + ar5[2] * fVar7;
  *pfVar2 = fVar3;
  fVar3 = *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) * *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + *pfVar1 * *pfVar1 + fVar3 * fVar3;
  if (fVar3 <= 1e-05) {
    *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) = 0.0;
    *pfVar1 = 0.0;
    *pfVar2 = 1.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar3);
    *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) = *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) * fVar3;
    *pfVar1 = *pfVar1 * fVar3;
    *pfVar2 = *pfVar2 * fVar3;
  }
  return ((undefined4 *)(unsigned)0x8c255408);
}

__asm__(".globl _FUN_8c2551d4\n.set _FUN_8c2551d4, _FUN_8c2551d4_def\n");
