#include "../decls.h"
undefined4 FUN_8c0226d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c022710(ar4,ar5,*(undefined4 *)(ar4 + ar5 * 0x10 + 8),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0226d8\n.set _FUN_8c0226d8, _FUN_8c0226d8_def\n");
