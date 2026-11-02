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
undefined4 FUN_8c2551aa_def(float *ar4,float *ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2551aa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  undefined8 in_dr4 = 0;
  float fVar2;
  
  fVar2 = F32HI(in_dr4);
  fVar1 = 1.0 - fVar2;
  *ar6 = *ar4 * fVar1 + *ar5 * fVar2;
  ar6[1] = fVar1 * ar4[1] + ar5[1] * fVar2;
  ar6[2] = fVar1 * ar4[2] + ar5[2] * fVar2;
  return 8;
}

__asm__(".globl _FUN_8c2551aa\n.set _FUN_8c2551aa, _FUN_8c2551aa_def\n");
