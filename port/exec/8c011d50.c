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
undefined4 FUN_8c011d50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c011d50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  ulonglong in_dr4 = 0;
  
  uVar1 = (uint)(in_dr4 >> 0x20) & 0x7f800000;
  if (uVar1 != 0x7f800000) {
    if ((in_dr4 & 0x7f80000000000000) != 0) {
      iVar2 = ((int)uVar1 >> 0x17) + ar4;
      if ((0 < iVar2) && (iVar2 < 0xff)) {
        return ain0;
      }
      if (-1 < ar4) goto joined_r0x8c011d76;
    }
    if ((in_dr4 & 0x8000000000000000) != 0) {
      return ain0;
    }
    return ain0;
  }
  ain0 = 0x7fffff;
  if ((in_dr4 & 0x7fffff00000000) != 0) {
    return ain0;
  }
joined_r0x8c011d76:
  if ((in_dr4 & 0x8000000000000000) != 0) {
    return ain0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c011d50\n.set _FUN_8c011d50, _FUN_8c011d50_def\n");
