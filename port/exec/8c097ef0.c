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
undefined4 FUN_8c097ef0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c097ef0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 in_PR = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 300) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
  *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b58(ar4 + 0xb0,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c032204(ar4 + 0xb0,ar5,ar6,ar7); });
  ar5_00 = 1;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c0321fc(ar4 + 0xb0,1,ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x138) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1e8) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030eb8(ar4 + 0x1fc,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
  if ((-1 < *(int *)(unsigned)(ar4 + 0x2f4)) && (-1 < *(int *)(unsigned)(ar4 + 0x2f8))) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c06b1d8(*(undefined4 *)(unsigned)(ar4 + 0x2f4),*(undefined4 *)(unsigned)(ar4 + 0x2f8),ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x2f4) = 0xffffffff;
    *(undefined4 *)(unsigned)(ar4 + 0x2f8) = 0xffffffff;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x240) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x244) = 0;
  return 0x244;
}

__asm__(".globl _FUN_8c097ef0\n.set _FUN_8c097ef0, _FUN_8c097ef0_def\n");
