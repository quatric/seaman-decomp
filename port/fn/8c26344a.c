#include "../decls.h"
undefined4 FUN_8c26344a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int unaff_r14;
  undefined4 in_PR;
  
  if (unaff_r14 != 0) {
    FUN_8c263498(ar4,ar5,ar6,ar7);
    if (*(int *)(unaff_r14 + 8) != 0) {
      FUN_8c1f309c(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7,in_PR);
    }
    uVar1 = FUN_8c2632e2(unaff_r14,ar5,ar6,ar7);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26344a\n.set _FUN_8c26344a, _FUN_8c26344a_def\n");
