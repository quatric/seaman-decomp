#include "../decls.h"
int FUN_8c0ae2b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c028ccc(ar4,ar5,ar6,ar7);
  iVar1 = *(int *)(0x460 + ar4);
  if (iVar1 == 0) {
    iVar1 = FUN_8c0b58dc(ar4 + 0x53c,3,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0ae2b8\n.set _FUN_8c0ae2b8, _FUN_8c0ae2b8_def\n");
