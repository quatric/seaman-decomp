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
undefined4 FUN_8c11189a_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11189a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int *ain0;
  int iVar3;
  uint ar6_00;
  
  if (ar6 != 0) {
    iVar3 = ar5 * 4;
    ar6_00 = ar6 * (uint)*(ushort *)(unsigned)(ar4 + 0xc);
    uVar2 = *(int *)(unsigned)(ar4 + 0x24) - *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar3);
    if (0x7fffffff < uVar2) {
      uVar2 = uVar2 + *(int *)(unsigned)(ar4 + 0x10);
    }
    if ((uVar2 == 0) && (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar3) == *(int *)(unsigned)(ar4 + 0x3c))) {
      uVar2 = *(uint *)(unsigned)(ar4 + 0x10);
    }
    if (uVar2 < ar6_00) {
      return 0;
    }
    if (ar6_00 == uVar2) {
      *(undefined1 *)(unsigned)(ar4 + 0x30) = 1;
    }
    ain0 = (int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar3);
    iVar1 = *(int *)(unsigned)(ar4 + 0x1c);
    uVar2 = (*ain0 - iVar1) - ar6_00;
    if (0x7fffffff < uVar2) {
      iVar1 = *(int *)(unsigned)(ar4 + 0x20);
    }
    *ain0 = iVar1 + uVar2;
    *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar3) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar3) - ar6;
    if (*(int *)(unsigned)(ar4 + 0x14) == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar3);
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c111342(ar4,uVar2,ar6_00,ar6); });
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11189a\n.set _FUN_8c11189a, _FUN_8c11189a_def\n");
