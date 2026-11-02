#include "../decls.h"
int FUN_8c0d55d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c0220d4(0x8c2b59d0,*(undefined4 *)(0x5e4 + ar4),ar6,ar7);
  iVar1 = *(int *)(0x618 + ar4);
  if (iVar1 != -1) {
    iVar1 = FUN_8c021994(0x8c2b59d0,*(undefined4 *)(0x618 + ar4),1,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d55d0\n.set _FUN_8c0d55d0, _FUN_8c0d55d0_def\n");
