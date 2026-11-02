#include "../decls.h"
int FUN_8c0d06c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x34);
  if (iVar1 != -1) {
    iVar1 = FUN_8c021a60(0x8c2b59d0,*(undefined4 *)(ar4 + 0x34),ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d06c4\n.set _FUN_8c0d06c4, _FUN_8c0d06c4_def\n");
