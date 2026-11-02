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
undefined4 FUN_8c26ab86_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c26ab86";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *unaff_r14 = 0;
  char in_T = 0;
  
  if (in_T != '\0') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26aa48(ar4,unaff_r14,ar7,ar7));
    return uVar1;
  }
  if (ar5 == 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26aad4(ar4,unaff_r14,ar7,ar7));
    return uVar1;
  }
  if (ar5 == 2) {
    ar5 = (vsp = ((unsigned long)(fr0_ - 0)), ret_const_0_26ab42(ar4,2,ar6,ar7));
    *unaff_r14 = ar5;
  }
  else {
    *unaff_r14 = 0;
  }
  *ar7 = 0;
  return ar5;
}

__asm__(".globl _FUN_8c26ab86\n.set _FUN_8c26ab86, _FUN_8c26ab86_def\n");
