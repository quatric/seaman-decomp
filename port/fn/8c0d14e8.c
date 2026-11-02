#include "../decls.h"
int FUN_8c0d14e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(0xeb4c + ar4);
  if (iVar1 != -1) {
    iVar1 = FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(0xeb4c + ar4),ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d14e8\n.set _FUN_8c0d14e8, _FUN_8c0d14e8_def\n");
