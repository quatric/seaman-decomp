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
undefined4 FUN_8c1f736c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f736c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ar5_00;
  int iVar1;
  int ar4_00;
  undefined1 *ar5_01;
  undefined4 ar6_00;
  uint ar5_02;
  uint uVar2;
  
  iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4749d8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4749dc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4749e0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c474a04) = (*(undefined4 *)(unsigned)(unsigned)0x8c474a04) + 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8176(0x8c4749f2,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f826c(0x8c4749f2,((undefined1 *)(unsigned)0x8c4749d8),ar6,ar7));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((*(undefined4 *)(unsigned)(unsigned)0x8c4749d8) - iVar1,0x3c,vr6,vr7));
  uVar2 = (uint)(*(undefined1 *)(unsigned)0x8c4749ec);
  ar5_02 = 0x3c - (*(undefined1 *)(unsigned)0x8c4749ed);
  if (ar5_02 < ar5_00) {
    ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f7134(uVar2 * 2 + -0x73b8b6be,ar5_02,ar6,ar7); });
    uVar2 = uVar2 + 1;
    ar5_00 = ar5_00 - ar5_02;
    if (0x17 < uVar2) {
      uVar2 = 0;
    }
    while (0x3c < ar5_00) {
      ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f7134(uVar2 * 2 + -0x73b8b6be,0x3c,ar6,ar7); });
      uVar2 = uVar2 + 1;
      ar5_00 = ar5_00 - 0x3c;
      if (0x17 < (int)uVar2) {
        uVar2 = 0;
      }
    }
  }
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f7134(uVar2 * 2 + -0x73b8b6be,ar5_00,ar6,ar7); });
  iVar1 = ar4 + 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4749b2) = (*(undefined4 *)(unsigned)(unsigned)0x8c474a04);
  ar6_00 = 10;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(0x8c4749e8,0x8c4749f2,10,ar7));
  ar4_00 = iVar1 + 1;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6e5e(iVar1,0x8c47493c,ar6_00,ar7));
  if (iVar1 == 1) {
    ar5_01 = ((undefined1 *)(unsigned)0x8c474978);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6e5e(ar4_00,((undefined1 *)(unsigned)0x8c474978),ar6_00,ar7));
    if (iVar1 == 1) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4748c0) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6f06(ar4_00,ar5_01,ar6_00,ar7));
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f736c\n.set _FUN_8c1f736c, _FUN_8c1f736c_def\n");
