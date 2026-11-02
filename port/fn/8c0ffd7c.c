#include "../decls.h"
undefined4 FUN_8c0ffd7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(0xcc + ar4) = ar5;
  uVar1 = FUN_8c0ff730(ar4 + 0xd8,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0ffd7c\n.set _FUN_8c0ffd7c, _FUN_8c0ffd7c_def\n");
