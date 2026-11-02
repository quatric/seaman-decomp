#include "../decls.h"
int FUN_8c2110b2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(*(undefined4 *)0x8c4aa21c + ar4 * 4) - *(int *)(0x8c4aa268 + ar4 * 4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  return iVar1 >> 2;
}

__asm__(".globl _FUN_8c2110b2\n.set _FUN_8c2110b2, _FUN_8c2110b2_def\n");
