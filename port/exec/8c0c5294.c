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
undefined * FUN_8c0c5294_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c5294";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  
  *(float *)(unsigned)(ar4 + 0x10) = *(float *)(unsigned)(ar4 + 0x10) + 0.3;
  *(float *)(unsigned)(ar4 + 4) = *(float *)(unsigned)(ar4 + 4) + *(float *)(unsigned)(ar4 + 0x10);
  puVar1 = ((undefined1 *)(unsigned)0x8c0c52f4);
  if (670.0 < *(float *)(unsigned)(ar4 + 4)) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 0x44278000;
    puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c52fc(ar4,ar5,ar6,ar7));
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0c5294\n.set _FUN_8c0c5294, _FUN_8c0c5294_def\n");
