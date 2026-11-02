#include "../decls.h"
int FUN_8c10c9c8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)0xa8 + *ar4);
  iVar1 = FUN_8c10c99c(ar4,*ar4,ar6,ar7);
  return iVar1 + (uVar2 + (uVar2 & 1)) * 2;
}

__asm__(".globl _FUN_8c10c9c8\n.set _FUN_8c10c9c8, _FUN_8c10c9c8_def\n");
