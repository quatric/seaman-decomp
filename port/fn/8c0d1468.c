#include "../decls.h"
int FUN_8c0d1468_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(0xeb4c + ar4);
  if (iVar1 != -1) {
    FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(0xeb4c + ar4),ar6,ar7);
    FUN_8c021a8c(0x8c2b59d0,ar4 + 0xeb4c,ar6,ar7);
    iVar1 = 0xeb4c;
    *(undefined4 *)(0xeb4c + ar4) = 0xffffffff;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d1468\n.set _FUN_8c0d1468, _FUN_8c0d1468_def\n");
