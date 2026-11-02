#include "../decls.h"
int FUN_8c0d1518_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(0xeb4c + ar4);
  if (iVar1 != -1) {
    iVar1 = FUN_8c021994(0x8c2b59d0,*(undefined4 *)(0xeb4c + ar4),5,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d1518\n.set _FUN_8c0d1518, _FUN_8c0d1518_def\n");
