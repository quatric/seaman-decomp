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
undefined4 FUN_8c20ad04_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c20ad04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint ar7_00;
  
  uVar1 = 0;
  if (ar5 == 3) {
    uVar1 = 0x1000000;
  }
  ar7_00 = ar7 - 1U & 0x3f;
  uVar1 = (s0 - 1U & 0x3f) << 8 | ar7_00 | uVar1;
  if (ar6 != 0) {
    uVar1 = 0x10000 | uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0x14c,uVar1,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0x148,*(undefined4 *)(unsigned)(ar4 + 0x1c),ar6,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c20ad04\n.set _FUN_8c20ad04, _FUN_8c20ad04_def\n");
