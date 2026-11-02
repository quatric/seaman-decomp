#include "../decls.h"
undefined4 FUN_8c12169e_def(undefined4 ar4,uint ar5,uint ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  uint in_r2;
  uint a5;
  uint unaff_r13;
  int unaff_r14;
  
  a5 = ar5;
  if (in_r2 < *(uint *)(in_r0 + unaff_r14)) {
    do {
      a5 = unaff_r13;
      ar6 = ar5;
      FUN_8c120e12(unaff_r14,unaff_r13,ar5,ar7);
      unaff_r13 = unaff_r13 + 1;
    } while (unaff_r13 < *(uint *)(0x240 + unaff_r14));
  }
  if (*(int *)(0x28c + unaff_r14) != 0) {
    FUN_8c120b48(unaff_r14,a5,ar6,ar7);
  }
  FUN_8c120c7c(unaff_r14,ar5,ar6,ar7);
  FUN_8c1213d0(unaff_r14,ar5,ar6,ar7);
  uVar1 = FUN_8c121124(unaff_r14,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c12169e\n.set _FUN_8c12169e, _FUN_8c12169e_def\n");
