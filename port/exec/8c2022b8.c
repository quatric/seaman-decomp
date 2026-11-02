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
undefined4 FUN_8c2022b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2022b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  undefined1 *unaff_r14 = 0;
  
  iVar2 = *(int *)(unsigned)(ar4 + 0x28);
  uVar1 = (undefined1)unaff_r13;
  if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) {
    *unaff_r14 = 2;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c202302(ar4,ar5,ar6,ar7));
    *(undefined1 *)(unsigned)(unaff_r12 + 1) = (char)uVar3;
    unaff_r14[2] = uVar1;
    unaff_r14[3] = uVar1;
  }
  else {
    if (iVar2 == 3) {
      uVar4 = 1;
    }
    else {
      if (iVar2 != 4) {
        return iVar2;
      }
      uVar4 = 3;
    }
    *unaff_r14 = uVar4;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c202330(ar4,ar5,ar6,ar7));
    *(undefined1 *)(unsigned)(unaff_r12 + 1) = (char)uVar3;
    unaff_r14[2] = uVar1;
    unaff_r14[3] = uVar1;
  }
  return unaff_r13 = 0;
}

__asm__(".globl _FUN_8c2022b8\n.set _FUN_8c2022b8, _FUN_8c2022b8_def\n");
