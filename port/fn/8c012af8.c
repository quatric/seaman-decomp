#include "../decls.h"
undefined4 FUN_8c012af8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = memmove(ar5,(&DATA_8c125678) + ar4 * 8,8);
  return uVar1;
}

__asm__(".globl _FUN_8c012af8\n.set _FUN_8c012af8, _FUN_8c012af8_def\n");
