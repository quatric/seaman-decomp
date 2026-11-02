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
undefined4 FUN_8c262524_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c262524";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ain0;
  undefined4 uVar1;
  char *ar4_00;
  char *a4;
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260ca0(ar4,ar5,ar6,ar7); });
  a4 = ((undefined1 *)(unsigned)0x8c4b3b20);
  do {
    ain0 = (int)*a4;
    ar4_00 = a4;
    if (ain0 == 1) {
      ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2624a0(a4,ar5,ar6,ar7));
    }
    a4 = a4 + 0x30;
  } while (a4 < (char *)(unsigned)0x8c4b3e20);
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260cc8(ar4_00,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c262524\n.set _FUN_8c262524, _FUN_8c262524_def\n");
