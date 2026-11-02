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
undefined4 FUN_8c0d20f0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d20f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr4 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x18) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = in_fr4;
  if (ar6 == 4) {
    *(float *)(unsigned)(ar4 + 0x10) = *(float *)(unsigned)(ar4 + 0x10) * 1.5;
    *(float *)(unsigned)(ar4 + 0x14) = *(float *)(unsigned)(ar4 + 0x14) * 1.5;
    *(float *)(unsigned)(ar4 + 0x18) = *(float *)(unsigned)(ar4 + 0x18) * 1.5;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d25a0(ar4,ar5,ar6,ar7));
  *(undefined2 *)(unsigned)(ar4 + 0x24) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = ar5;
  *(int *)(unsigned)(ar4 + 0x3c) = ar6;
  return ar5;
}

__asm__(".globl _FUN_8c0d20f0\n.set _FUN_8c0d20f0, _FUN_8c0d20f0_def\n");
