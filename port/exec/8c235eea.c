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
undefined4 FUN_8c235eea_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c235eea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_r2 = 0;
  int *unaff_r14 = 0;
  
  *(undefined4 *)(unsigned)*unaff_r14 = in_r2;
  *(undefined4 *)(unsigned)(*unaff_r14 + 0x3c) = 2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20f640(*unaff_r14,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20fe00(*unaff_r14,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c235eea\n.set _FUN_8c235eea, _FUN_8c235eea_def\n");
