#include "../decls.h"
int FUN_8c10ca10_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint in_r2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *ar4;
  uVar2 = *(int *)(in_r0 + -4 + iVar1) + *(int *)(in_r0 + iVar1);
  iVar1 = FUN_8c10c9e4(ar4,iVar1,ar6,ar7);
  return iVar1 + (uVar2 + (in_r2 & uVar2)) * 2;
}

__asm__(".globl _FUN_8c10ca10\n.set _FUN_8c10ca10, _FUN_8c10ca10_def\n");
