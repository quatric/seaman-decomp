#include "../decls.h"
undefined4 FUN_8c0fdd98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0x68) = ar5;
  if (*(int *)(ar4 + 0x68) < 0) {
    *(undefined4 *)(ar4 + 0x68) = 0;
  }
  uVar1 = 4;
  if (4 < *(int *)(ar4 + 0x68)) {
    uVar1 = 0x68;
    *(undefined4 *)(ar4 + 0x68) = 4;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0fdd98\n.set _FUN_8c0fdd98, _FUN_8c0fdd98_def\n");
