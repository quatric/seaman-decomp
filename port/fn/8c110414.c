#include "../decls.h"
int FUN_8c110414_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *ar4;
  iVar1 = FUN_8c11033c(ar4,*(undefined4 *)(0x88 + iVar3),ar6,ar7);
  uVar2 = (iVar1 + *(int *)(*(int *)(0xb8 + iVar3) * 4 + iVar1) * 2) - iVar3;
  return iVar3 + uVar2 + ((uVar2 * 2 ^ uVar2) & 3);
}

__asm__(".globl _FUN_8c110414\n.set _FUN_8c110414, _FUN_8c110414_def\n");
