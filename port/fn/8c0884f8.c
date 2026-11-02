#include "../decls.h"
undefined4 FUN_8c0884f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(0x330 + ar4) != 0) {
    uVar1 = FUN_8c0ff500(ar5,ar4 + 0x330,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0884f8\n.set _FUN_8c0884f8, _FUN_8c0884f8_def\n");
