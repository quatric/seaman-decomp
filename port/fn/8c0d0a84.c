#include "../decls.h"
undefined4 FUN_8c0d0a84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  uVar1 = FUN_8c0d0aac(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d0a84\n.set _FUN_8c0d0a84, _FUN_8c0d0a84_def\n");
