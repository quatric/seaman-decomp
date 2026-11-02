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
undefined4 Class_12b930_m2_0de3d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b930_m2_0de3d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7154(ar4 + iVar1 * 0x16c + 0x22d48,ar5_00,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d02c8(ar4 + 0x13b24,ar5_00,ar6_00,ar7));
  iVar1 = ar4 + 0x22eb4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d3c08(ar4 + 0x10ac,iVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), get_field_a0_035724(ar5,iVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), pure_virtual_stub(ar4,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12bb08_m2_0da5a8(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbd80(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _Class_12b930_m2_0de3d4\n.set _Class_12b930_m2_0de3d4, _Class_12b930_m2_0de3d4_def\n");
