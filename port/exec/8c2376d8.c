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
undefined4 FUN_8c2376d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2376d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r2 = 0;
  undefined4 ar6_00;
  int ar5_00;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  int *piVar1;
  undefined4 in_PR = 0;
  
  if (unaff_r13 != 0) {
    piVar1 = (int *)(unsigned)(unaff_r14 * 4 + in_r2);
    do {
      piVar1 = piVar1 + -1;
      ar6_00 = 0x10;
      ar5_00 = *(int *)(unsigned)(*piVar1 * 4 + -0x73b3ee20);
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23c7f4(0x8c4c13a0,0x8c4c0ce0,0x10,ar7));
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c255d6c(0x8c4c13a0,ar5_00,ar6_00,ar7); });
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c212740(0x8c4c13a0,ar5_00 + 0x40,ar5_00 + 0x90,ar7); });
      ain0 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c21279c(0x8c4c13a0,ar5_00 + 0x4c,ar5_00 + 0x9c,ar7); });
      unaff_r13 = unaff_r13 + -1;
    } while (unaff_r13 != 0);
  }
  return ain0;
}

__asm__(".globl _FUN_8c2376d8\n.set _FUN_8c2376d8, _FUN_8c2376d8_def\n");
