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
undefined4 FUN_8c1f0312_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f0312";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar4 == 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4694(vr4,vr5,vr6,vr7));
    return uVar1;
  }
  if (ar4 == 2) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4662(vr4,vr5,vr6,vr7));
    return uVar1;
  }
  if (ar4 == 4) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f46e8(vr4,vr5,vr6,vr7));
    return uVar1;
  }
  if (ar4 == 3) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f46a8(vr4,vr5,vr6,vr7));
    return uVar1;
  }
  if (ar4 == 6) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f46d4(vr4,vr5,vr6,vr7));
    return uVar1;
  }
  if (ar4 == 5) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4680(vr4,vr5,vr6,vr7));
    return uVar1;
  }
  if (ar4 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4702(vr4,vr5,vr6,vr7));
    return uVar1;
  }
  if (ar4 != 7) {
    if (ar4 == 8) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4734(vr4,vr5,vr6,vr7));
      return uVar1;
    }
    if (ar4 != 9) {
      return 0xffffffff;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f476e(vr4,vr5,vr6,vr7));
    return uVar1;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4720(vr4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c1f0312\n.set _FUN_8c1f0312, _FUN_8c1f0312_def\n");
