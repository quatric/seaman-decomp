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
float * FUN_8c0f7278_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f7278";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  float fVar2;
  
  fVar2 = *(float *)(unsigned)(ar4 + 0x60) - 0.00018518518;
  *(float *)(unsigned)(ar4 + 0x60) = fVar2;
  *(float *)(unsigned)(ar4 + 0x5c) = fVar2;
  *(float *)(unsigned)(ar4 + 0x58) = fVar2;
  *(float *)(unsigned)(ar4 + 0x54) = fVar2;
  pfVar1 = (float *)(unsigned)(ar4 + 0x60);
  if (*pfVar1 <= 0.0) {
    pfVar1 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + 1);
    *(unsigned *)(unsigned)(ar4 + 0x2c) = pfVar1;
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c0f7278\n.set _FUN_8c0f7278, _FUN_8c0f7278_def\n");
