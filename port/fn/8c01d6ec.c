#include "../decls.h"
undefined4 FUN_8c01d6ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)0x8c279278;
  *(undefined4 *)0x8c279278 = 0;
  return uVar1;
}

__asm__(".globl _FUN_8c01d6ec\n.set _FUN_8c01d6ec, _FUN_8c01d6ec_def\n");
