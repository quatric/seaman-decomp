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
undefined4 FUN_8c015e40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c015e40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x64)) = 0x42c80000;
  (*(undefined4 *)(fr0_ - 0x60)) = 0x42c80000;
  (*(undefined4 *)(fr0_ - 0x5c)) = 0x3f000000;
  (*(undefined4 *)(fr0_ - 0x58)) = 0;
  (*(undefined4 *)(fr0_ - 0x54)) = 0;
  (*(undefined4 *)(fr0_ - 0x50)) = 0xffffffff;
  (*(undefined4 *)(fr0_ - 0x4c)) = 0x42c80000;
  (*(undefined4 *)(fr0_ - 0x48)) = 0x43960000;
  (*(undefined4 *)(fr0_ - 0x44)) = 0x3f000000;
  (*(undefined4 *)(fr0_ - 0x40)) = 0;
  (*(undefined4 *)(fr0_ - 0x3c)) = 0x3f800000;
  (*(undefined4 *)(fr0_ - 0x38)) = 0xffffffff;
  (*(undefined4 *)(fr0_ - 0x34)) = 0x43960000;
  (*(undefined4 *)(fr0_ - 0x30)) = 0x42c80000;
  (*(undefined4 *)(fr0_ - 0x2c)) = 0x3f000000;
  (*(undefined4 *)(fr0_ - 0x28)) = 0x3f800000;
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  (*(undefined4 *)(fr0_ - 0x20)) = 0xffffffff;
  (*(undefined4 *)(fr0_ - 0x1c)) = 0x43960000;
  (*(undefined4 *)(fr0_ - 0x18)) = 0x43960000;
  (*(undefined4 *)(fr0_ - 0x14)) = 0x3f000000;
  (*(undefined4 *)(fr0_ - 0x10)) = 0x3f800000;
  (*(undefined4 *)(fr0_ - 0xc)) = 0x3f800000;
  (*(undefined4 *)(fr0_ - 0x8)) = 0xffffffff;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c234bc0(&(*(undefined4 *)(fr0_ - 0x64)),4,10000,0));
  return uVar1;
}

__asm__(".globl _FUN_8c015e40\n.set _FUN_8c015e40, _FUN_8c015e40_def\n");
