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
undefined4 FUN_8c20ade0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20ade0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint ar5_00;
  int iVar1;
  uint ar6_00;
  int iVar2;
  uint ar7_00;
  uint ar7_01;
  uint uVar3;
  uint uVar4;
  uint ain0;
  
  uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e6c) & 0xfff003ff;
  ar5_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9eac) & 0xffff;
  iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c0c);
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c08);
  uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bf0);
  if (ar4 == 0) {
    ar5_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9eac) & 0xff00;
  }
  else if ((((ar4 != 1) && (ar4 == 2)) && (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 3) == 0)) &&
          ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x20) != 0 &&
           ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1 || (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) != 0x20)))))) {
    ar5_00 = 0x471;
    iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c0c) + 0xc;
    iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c08) + 0xc;
    uVar3 = 0xd6;
  }
  ain0 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9eac) & 0xffff0000 | ar5_00;
  ar6_00 = (iVar1 + (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c00)) * 0x10000;
  ar7_00 = iVar2 + (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c00) | ar6_00;
  ar7_01 = ar7_00;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c2079fc(ar4,ar5_00,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0x44,(*(undefined4 *)(unsigned)(unsigned)0x8c4a9e74) & 0xfffffffe,ar6_00,ar7_01));
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0xe8,(*(undefined4 *)(unsigned)(unsigned)0x8c4a9eb0) | 8,ar6_00,ar7_01));
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0xf0,ar7_00,ar6_00,ar7_01));
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0x5c,uVar4 | (uVar3 & 0x3ff) << 10,ar6_00,ar7_01));
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0xf4,ain0,ar6_00,ar7_01));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e54) = 1;
  return 0;
}

__asm__(".globl _FUN_8c20ade0\n.set _FUN_8c20ade0, _FUN_8c20ade0_def\n");
