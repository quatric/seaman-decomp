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
undefined4 FUN_8c237830_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c237830";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *ar5_00;
  undefined4 *unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  if ((unaff_r14[4] & 2) == 0) {
    ar5_00 = unaff_r14 + 5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a914(0,ar5_00,ar6,ar7));
    if (iVar1 < 0) {
      *(short *)(unsigned)((int)unaff_r14 + 0x42) = -(short)iVar1;
      return 0xffffffff;
    }
    *(undefined2 *)(unsigned)((int)unaff_r14 + 0x42) = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a1ee((uint)unaff_r14[6] >> 0x10 & 0xff00,ar5_00,ar6,ar7));
    if (iVar1 == 0) {
      *(short *)(unsigned)(unaff_r14 + 0x10) = *(short *)(unsigned)(unaff_r14 + 0x10) + 1;
      unaff_r14[4] = unaff_r14[4] | 2;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2571fe(unaff_r14,ar5_00,ar6,ar7));
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c25a608(*unaff_r14,2,unaff_r14[5],ar7); });
      unaff_r14[4] = unaff_r14[4] | 8;
    }
  }
  else {
    *(short *)(unsigned)(unaff_r14 + 0x10) = *(short *)(unsigned)(unaff_r14 + 0x10) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c237830\n.set _FUN_8c237830, _FUN_8c237830_def\n");
