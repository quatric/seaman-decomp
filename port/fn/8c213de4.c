#include "../decls.h"
int FUN_8c213de4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c213a04(*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(ar4 + 0x10),ar6,ar7);
  iVar1 = iVar1 * 4;
  if ((*(uint *)(ar4 + 0x18) & 1) == 0) {
    iVar1 = *(int *)(&DAT_8c277ce0 + iVar1) + *(int *)(&DAT_8c277d18 + iVar1);
  }
  else {
    iVar1 = *(int *)(&DAT_8c277cfc + iVar1) + *(int *)(&DAT_8c277d34 + iVar1) + 10;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c213de4\n.set _FUN_8c213de4, _FUN_8c213de4_def\n");
