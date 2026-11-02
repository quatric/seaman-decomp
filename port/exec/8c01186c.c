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
undefined4 FUN_8c01186c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01186c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar4_00;
  undefined4 *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float ain0;
  ulonglong in_dr4 = 0;
  
  uVar1 = 4;
  ain0 = (float)(in_dr4 >> 0x20);
  ar4_00 = 0;
  if ((longlong)in_dr4 < 0) {
    ar4_00 = 8;
  }
  ar7_00 = 4;
  ar6_00 = 1;
  if (ain0 == 0.0) {
    ar4_00 = ar4_00 | 4;
  }
  else if (ABS(ain0) == INFINITY) {
    uVar1 = 2;
    ar4_00 = ar4_00 | 2;
  }
  ar5_00 = ((undefined4 *)(unsigned)0x8c1257f8);
  if ((in_dr4 & 0x8000000000000000) != 0) {
    ain0 = -ain0;
  }
  if (((ain0 <= 1.0) && (ain0 != 1.0)) && ((ar4_00 & 4) == 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c011960(ar4_00,((undefined4 *)(unsigned)0x8c1257f8),1,4));
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c011d50(1,ar5_00,ar6_00,ar7_00); });
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01186c\n.set _FUN_8c01186c, _FUN_8c01186c_def\n");
