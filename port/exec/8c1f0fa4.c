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
undefined4 FUN_8c1f0fa4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f0fa4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *unaff_r14 = 0;
  
  iVar2 = *unaff_r14;
  if (iVar2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(unsigned)(iVar2 + 0x1c);
  if (iVar1 == 0) goto LAB_8c1f1016;
  if (iVar1 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f0cdc(iVar2,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(*unaff_r14 + 0x1c) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(*unaff_r14 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(unsigned)(*unaff_r14 + 0x20) = 3;
    }
  }
  else {
    if (iVar1 != 2) {
      *(undefined4 *)(unsigned)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(unsigned)(*unaff_r14 + 0x20) = 0;
      goto LAB_8c1f1016;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f0d34(iVar2,ar5,ar6,ar7));
    if (iVar2 == 1) goto LAB_8c1f1016;
    *(undefined4 *)(unsigned)(*unaff_r14 + 0x1c) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(*unaff_r14 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(unsigned)(*unaff_r14 + 0x20) = 3;
    }
  }
  *(int *)(unsigned)(*unaff_r14 + 0x2c) = iVar2;
LAB_8c1f1016:
  return *(undefined4 *)(unsigned)(*unaff_r14 + 0x20);
}

__asm__(".globl _FUN_8c1f0fa4\n.set _FUN_8c1f0fa4, _FUN_8c1f0fa4_def\n");
