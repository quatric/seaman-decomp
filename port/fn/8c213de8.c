#include "../decls.h"
int FUN_8c213de8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r14;
  
  iVar1 = FUN_8c213a04(*(undefined4 *)(unaff_r14 + 0xc),*(undefined4 *)(unaff_r14 + 0x10),ar6,ar7);
  iVar1 = iVar1 * 4;
  if ((*(uint *)(unaff_r14 + 0x18) & 1) == 0) {
    iVar1 = *(int *)(&DAT_8c277ce0 + iVar1) + *(int *)(&DAT_8c277d18 + iVar1);
  }
  else {
    iVar1 = *(int *)(&DAT_8c277cfc + iVar1) + *(int *)(&DAT_8c277d34 + iVar1) + 10;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c213de8\n.set _FUN_8c213de8, _FUN_8c213de8_def\n");
