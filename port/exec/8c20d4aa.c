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
uint FUN_8c20d4aa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20d4aa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint *unaff_r14 = 0;
  
  if ((*unaff_r14 & 0xffff) == 3) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d63c(unaff_r14,ar5,ar6,ar7));
  }
  else if ((unaff_r14[6] & 8) == 0) {
    if ((unaff_r14[6] & 0x20) == 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d500(unaff_r14,ar5,ar6,ar7));
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d5b2(unaff_r14,ar5,ar6,ar7));
    }
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d554(unaff_r14,ar5,ar6,ar7));
  }
  unaff_r14[5] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c20d4aa\n.set _FUN_8c20d4aa, _FUN_8c20d4aa_def\n");
