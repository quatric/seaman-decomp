#include "../decls.h"
undefined4 FUN_8c204eb6_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  if (*(int *)(ar6 + 8) == 0) {
    *ar4 = ar5;
    *(int *)(ar5 + 4) = ar6;
    uVar1 = 0;
  }
  else {
    *(int *)(*(int *)(ar6 + 8) + 4) = ar5;
    *(int *)(ar5 + 4) = ar6;
    uVar1 = *(undefined4 *)(ar6 + 8);
  }
  *(undefined4 *)(ar5 + 8) = uVar1;
  *(int *)(ar6 + 8) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c204eb6\n.set _FUN_8c204eb6, _FUN_8c204eb6_def\n");
