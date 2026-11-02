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
undefined4 FUN_8c12169e_def(undefined4 ar4,uint ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c12169e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  uint in_r2 = 0;
  uint a5;
  uint unaff_r13 = 0;
  int unaff_r14 = 0;
  
  a5 = ar5;
  if (in_r2 < *(uint *)(unsigned)(in_r0 + unaff_r14)) {
    do {
      a5 = unaff_r13;
      ar6 = ar5;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120e12(unaff_r14,unaff_r13,ar5,ar7));
      unaff_r13 = unaff_r13 + 1;
    } while (unaff_r13 < *(uint *)(unsigned)(0x240 + unaff_r14));
  }
  if (*(int *)(unsigned)(0x28c + unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120b48(unaff_r14,a5,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120c7c(unaff_r14,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1213d0(unaff_r14,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c121124(unaff_r14,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c12169e\n.set _FUN_8c12169e, _FUN_8c12169e_def\n");
