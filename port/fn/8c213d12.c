#include "../decls.h"
int FUN_8c213d12_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r14;
  
  if ((*(uint *)(unaff_r14 + 0x18) & 1) == 0) {
    iVar1 = *(int *)(unaff_r14 + 0xc) * *(int *)(unaff_r14 + 0x10) * 2;
  }
  else {
    iVar1 = FUN_8c213a04(*(int *)(unaff_r14 + 0xc),*(int *)(unaff_r14 + 0x10),ar6,ar7);
    iVar1 = *(int *)(&DAT_8c277d50 + iVar1 * 4) + 4;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c213d12\n.set _FUN_8c213d12, _FUN_8c213d12_def\n");
