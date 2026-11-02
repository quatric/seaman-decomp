#include "../decls.h"
int FUN_8c02f298_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 5;
  if (*(int *)(ar4 + 0x10) < 5) {
    *(undefined4 *)(ar4 + *(int *)(ar4 + 0x10) * 4 + 0x14) = ar5;
    iVar1 = *(int *)(ar4 + 0x10) + 1;
    *(int *)(ar4 + 0x10) = iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02f298\n.set _FUN_8c02f298, _FUN_8c02f298_def\n");
