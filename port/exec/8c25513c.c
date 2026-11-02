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
undefined4 * FUN_8c25513c_def(float *ar4,float *ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25513c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined8 in_dr4 = 0;
  float fVar4;
  
  fVar4 = F32HI(in_dr4);
  fVar3 = 1.0 - fVar4;
  pfVar1 = ar6 + 1;
  pfVar2 = ar6 + 2;
  *ar6 = *ar4 * fVar3 + *ar5 * fVar4;
  *pfVar1 = fVar3 * ar4[1] + ar5[1] * fVar4;
  fVar3 = fVar3 * ar4[2] + ar5[2] * fVar4;
  *pfVar2 = fVar3;
  fVar3 = *ar6 * *ar6 + *pfVar1 * *pfVar1 + fVar3 * fVar3;
  if (fVar3 <= 1e-05) {
    *ar6 = 0.0;
    *pfVar1 = 0.0;
    *pfVar2 = 1.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar3);
    *ar6 = *ar6 * fVar3;
    *pfVar1 = *pfVar1 * fVar3;
    *pfVar2 = *pfVar2 * fVar3;
  }
  return ((undefined4 *)(unsigned)0x8c255408);
}

__asm__(".globl _FUN_8c25513c\n.set _FUN_8c25513c, _FUN_8c25513c_def\n");
