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
undefined4 FUN_8c0d4bdc_def(float *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4bdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  
  if (*(float *)(unsigned)(*(int *)(unsigned)(ar5 + 0xc) + 4) <= *ar4) {
    (*(undefined4 *)(fr0_ - 0x10)) = 0x3f34fdf4;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x10)) = 0xbf34fdf4;
  }
  (*(undefined4 *)(fr0_ - 0xc)) = 0xbf34fdf4;
  (*(undefined4 *)(fr0_ - 0x14)) = 0;
  ar6_00 = ((undefined1 *)(fr0_ - 0x20));
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x14));
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c21279c(0,ar5_00,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c219038(uVar1,ar5_00,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c219070(uVar1,ar5_00,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d4bdc\n.set _FUN_8c0d4bdc, _FUN_8c0d4bdc_def\n");
