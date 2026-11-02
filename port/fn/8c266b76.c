#include "../decls.h"
int FUN_8c266b76_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *unaff_r14;
  
  FUN_8c2687c8(*(undefined4 *)((int)0x1bc + *unaff_r14),ar5,ar6,ar7);
  for (iVar2 = 0; iVar1 = (int)0x15c, iVar2 < *(int *)(iVar1 + *unaff_r14); iVar2 = iVar2 + 1
      ) {
    *(undefined1 *)(iVar2 * 0x10 + *(int *)((int)0x158 + *unaff_r14)) = 0;
  }
  *(undefined4 *)(iVar1 + *unaff_r14) = 0;
  *(undefined4 *)(iVar1 + 4 + *unaff_r14) = 0;
  return iVar1 + 4;
}

__asm__(".globl _FUN_8c266b76\n.set _FUN_8c266b76, _FUN_8c266b76_def\n");
