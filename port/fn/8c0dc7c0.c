#include "../decls.h"
undefined4 FUN_8c0dc7c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c01ed88(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0dc7c0\n.set _FUN_8c0dc7c0, _FUN_8c0dc7c0_def\n");
