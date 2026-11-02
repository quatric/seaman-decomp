#include "../decls.h"
undefined4 FUN_8c265e88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0x7000103;
  if (ar4 != 0) {
    *(undefined4 *)(ar4 + 0x10) = ar5;
    *(undefined4 *)(ar4 + 0x14) = ar6;
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c265e88\n.set _FUN_8c265e88, _FUN_8c265e88_def\n");
