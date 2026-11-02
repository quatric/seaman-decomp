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
undefined4 FUN_8c014e38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c014e38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float in_fr5 = 0;
  float in_fr4 = 0;
  float in_fr6 = 0;
  
  *(float *)(unsigned)(ar4 + 0x54) = *(float *)(unsigned)(ar4 + 0x54) + in_fr4;
  *(float *)(unsigned)(ar4 + 0x58) = *(float *)(unsigned)(ar4 + 0x58) + in_fr5;
  *(float *)(unsigned)(ar4 + 0x5c) = *(float *)(unsigned)(ar4 + 0x5c) + in_fr6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014ea0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c014e38\n.set _FUN_8c014e38, _FUN_8c014e38_def\n");
