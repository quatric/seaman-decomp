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
undefined4 FUN_8c262c08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c262c08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  if (unaff_r14 != 0) {
    if (*(int *)(unsigned)(unaff_r14 + 4) != 0) {
      ar4 = *(undefined4 *)(unsigned)(unaff_r14 + 4);
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25fc5c(ar4,ar5,ar6,ar7); });
    }
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260ca0(ar4,ar5,ar6,ar7); });
    ar5_00 = 0;
    ar6_00 = 0x9c;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), memset(unaff_r14,0,0x9c,ar7));
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260cc8(unaff_r14,ar5_00,ar6_00,ar7); });
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c262c08\n.set _FUN_8c262c08, _FUN_8c262c08_def\n");
