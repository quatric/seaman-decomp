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
undefined4
FUN_8c0f528c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f528c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr7 = 0;
  undefined4 in_fr6 = 0;
  undefined4 in_fr9 = 0;
  undefined4 in_fr8 = 0;
  undefined4 in_fr11 = 0;
  undefined4 in_fr10 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x30) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0x34) = in_fr5;
  *(undefined4 *)(unsigned)(ar4 + 0x38) = in_fr6;
  *(undefined4 *)(unsigned)(ar4 + 0x50) = in_fr7;
  *(undefined4 *)(unsigned)(ar4 + 0x54) = in_fr8;
  *(undefined4 *)(unsigned)(ar4 + 0x58) = in_fr9;
  *(undefined4 *)(unsigned)(ar4 + 0x5c) = in_fr10;
  *(undefined4 *)(unsigned)(ar4 + 0x60) = in_fr11;
  *(undefined4 *)(unsigned)(ar4 + 100) = s0;
  return 0;
}

__asm__(".globl _FUN_8c0f528c\n.set _FUN_8c0f528c, _FUN_8c0f528c_def\n");
