#include "../decls.h"
undefined4 FUN_8c26357a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  if (ar5 < 0) {
    iVar1 = *(int *)(ar4 + 0x14) + (int)0x7ff;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x7ff;
    }
    *(int *)(ar4 + 0x30) = iVar1 >> 0xb;
  }
  else {
    *(int *)(ar4 + 0x30) = ar5;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26357a\n.set _FUN_8c26357a, _FUN_8c26357a_def\n");
