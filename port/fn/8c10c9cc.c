#include "../decls.h"
int FUN_8c10c9cc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  uint in_r3;
  uint uVar2;
  
  uVar2 = *(uint *)(in_r0 + *ar4);
  iVar1 = FUN_8c10c99c(ar4,*ar4,ar6,ar7);
  return iVar1 + (uVar2 + (in_r3 & uVar2)) * 2;
}

__asm__(".globl _FUN_8c10c9cc\n.set _FUN_8c10c9cc, _FUN_8c10c9cc_def\n");
