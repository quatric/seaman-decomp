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
undefined4 FUN_8c234a68_def(float *ar4,float *ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c234a68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = ar5[3];
  fVar2 = ar5[4];
  fVar3 = ar5[5];
  if (ar6 != (float *)(unsigned)0x0) {
    fVar2 = -(fVar3 * ar4[2] + fVar4 * *ar4 + fVar2 * ar4[1] +
             ((-(fVar4 * *ar5) - fVar2 * ar5[1]) - fVar3 * ar5[2])) /
            (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
    *ar6 = fVar2 * ar5[3] + *ar4;
    ar6[1] = fVar2 * ar5[4] + ar4[1];
    ar6[2] = fVar2 * ar5[5] + ar4[2];
  }
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c258048(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c234a68\n.set _FUN_8c234a68, _FUN_8c234a68_def\n");
