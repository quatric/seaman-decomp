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
float * FUN_8c0d6164_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6164";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  float *pfVar1;
  
  *(float *)(unsigned)(ar4 + 0x14) = *(float *)(unsigned)(ar4 + 0x14) + -0.1;
  *(float *)(unsigned)(ar4 + 4) = *(float *)(unsigned)(ar4 + 4) + *(float *)(unsigned)(ar4 + 0x14);
  *(float *)(unsigned)(ar4 + 8) = *(float *)(unsigned)(ar4 + 8) + -4.0;
  *(float *)(unsigned)(ar4 + 0x10) = *(float *)(unsigned)(ar4 + 0x10) + 0.015;
  pfVar1 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x18));
  if (pfVar1 == (float *)(unsigned)0x0) {
    if (*(uint *)(unsigned)(ar4 + 0x1c) < 0xe6ffffff) {
      *(int *)(unsigned)(ar4 + 0x1c) = *(int *)(unsigned)(ar4 + 0x1c) + 0x19000000;
    }
    pfVar1 = (float *)(unsigned)(ar4 + 0x10);
    if (1.0 <= *pfVar1) {
      *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0xffffffff;
      pfVar1 = (float *)(unsigned)0x1;
      *(undefined4 *)(unsigned)(ar4 + 0x18) = 1;
    }
  }
  else if (pfVar1 == (float *)(unsigned)0x1) {
    pfVar1 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_0103d0(ar5,0x2d,ar6,ar7));
    if (pfVar1 == (float *)(unsigned)0x0) {
      pfVar1 = (float *)(unsigned)0x2;
      *(undefined4 *)(unsigned)(ar4 + 0x18) = 2;
    }
  }
  else if (pfVar1 == (float *)(unsigned)0x2) {
    if (*(uint *)(unsigned)(ar4 + 0x1c) < 0x7000000) {
      pfVar1 = (float *)(unsigned)0x0;
      *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
    }
    else {
      pfVar1 = (float *)(unsigned)0x6000000;
      *(int *)(unsigned)(ar4 + 0x1c) = *(int *)(unsigned)(ar4 + 0x1c) + -0x6000000;
    }
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c0d6164\n.set _FUN_8c0d6164, _FUN_8c0d6164_def\n");
