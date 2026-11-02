#include "../decls.h"
int FUN_8c2634e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r14;
  
  if (*(int *)(unaff_r14 + 8) != 0) {
    iVar1 = FUN_8c1f316e(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
    return iVar1 - *(int *)(unaff_r14 + 0x10);
  }
  return 0;
}

__asm__(".globl _FUN_8c2634e0\n.set _FUN_8c2634e0, _FUN_8c2634e0_def\n");
