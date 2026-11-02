#include "../decls.h"
undefined4 FUN_8c20e030_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_r3;
  undefined4 uVar2;
  uint unaff_r10;
  int unaff_r12;
  uint *unaff_r13;
  uint a5;
  
  uVar2 = 0;
  if (unaff_r10 < in_r3) {
    *unaff_r13 = 0;
    uVar2 = 2;
  }
  else {
    a5 = 0;
    if (unaff_r10 != 0) {
      while (*(int *)(a5 * 4 + unaff_r12) != 0) {
        iVar1 = FUN_8c20e16a(unaff_r12,a5,unaff_r13,ar7);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_8c20e1e6(unaff_r12,a5,unaff_r13,ar7);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_8c20e272(unaff_r12,a5,unaff_r13,ar7);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (DAT_8c275798 == 1) {
          iVar1 = FUN_8c20e300(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_8c20e328(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_8c20e368(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_8c20e3a0(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_8c20e400(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        if ((DAT_8c275798 == 2) || (DAT_8c275798 == 3)) {
          iVar1 = FUN_8c20e428(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_8c20e480(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_8c20e608(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        iVar1 = FUN_8c20e664(unaff_r12,a5,unaff_r13,ar7);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_8c20e6c0(unaff_r12,a5,unaff_r13,ar7);
        if (iVar1 != 0) {
          return iVar1;
        }
        a5 = a5 + 1;
        if (unaff_r10 <= a5) {
          return 0;
        }
      }
      *unaff_r13 = a5;
      uVar2 = 1;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c20e030\n.set _FUN_8c20e030, _FUN_8c20e030_def\n");
