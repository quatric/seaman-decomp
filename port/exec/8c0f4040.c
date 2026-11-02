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
int FUN_8c0f4040_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f4040";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f402c(ar4,ar5,ar6,ar7));
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12c1f0);
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x30,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x40,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x50,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023dac(ar4 + 0x5c,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102800(ar4 + 0x80,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102800(ar4 + 0x90,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f78d8(ar4 + 0xa0,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f50b4(ar4,ar5_00,ar6_00,ar7_00));
  *(undefined4 *)(unsigned)(ar4 + 0x24) = ar5;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = ar6;
  *(undefined4 *)(unsigned)(ar4 + 0x20) = s0;
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = ar7;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x78) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x7c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x78) = (ulonglong)extraout_fr1;
    *(ulonglong *)(unsigned)(ar4 + 0x7c) = (ulonglong)extraout_fr1;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0f4040\n.set _FUN_8c0f4040, _FUN_8c0f4040_def\n");
