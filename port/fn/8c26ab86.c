#include "../decls.h"
undefined4 FUN_8c26ab86_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 *ar7)

{
  undefined4 uVar1;
  int *unaff_r14;
  char in_T;
  
  if (in_T != '\0') {
    uVar1 = FUN_8c26aa48(ar4,unaff_r14,ar7,ar7);
    return uVar1;
  }
  if (ar5 == 1) {
    uVar1 = FUN_8c26aad4(ar4,unaff_r14,ar7,ar7);
    return uVar1;
  }
  if (ar5 == 2) {
    ar5 = ret_const_0_26ab42(ar4,2,ar6,ar7);
    *unaff_r14 = ar5;
  }
  else {
    *unaff_r14 = 0;
  }
  *ar7 = 0;
  return ar5;
}

__asm__(".globl _FUN_8c26ab86\n.set _FUN_8c26ab86, _FUN_8c26ab86_def\n");
