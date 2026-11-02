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
undefined4 FUN_8c0ff730_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ff730";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x43f00000;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44200000;
  *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x44200000;
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = 0x43f00000;
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xff000000;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xff000000;
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0xff000000;
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = 0xff000000;
  uVar1 = 4;
  ar6_00 = ar4 + 0x40;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c016318(ar4 + 0xc,ar4 + 0x20,ar6_00,4); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015198(ar4 + 0xc,0x20,ar6_00,uVar1); });
  return uVar1;
}

__asm__(".globl _FUN_8c0ff730\n.set _FUN_8c0ff730, _FUN_8c0ff730_def\n");
