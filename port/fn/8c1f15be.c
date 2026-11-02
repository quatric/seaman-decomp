#include "../decls.h"
int FUN_8c1f15be_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_8c1f15a4((int)*ar4,ar5,ar6,ar7);
  iVar2 = FUN_8c1f15a4((int)ar4[1],ar5,ar6,ar7);
  iVar3 = FUN_8c1f15a4((int)ar4[2],ar5,ar6,ar7);
  return (iVar1 * 0x3c + iVar2) * 0x4b + iVar3;
}

__asm__(".globl _FUN_8c1f15be\n.set _FUN_8c1f15be, _FUN_8c1f15be_def\n");
