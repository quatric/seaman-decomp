#include "../decls.h"
undefined4 FUN_8c0a06c0_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined1 *)(0x98 + ar4) = *ar5;
  uVar1 = FUN_8c030d10(ar4 + 0xa8,ar5 + 8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0a06c0\n.set _FUN_8c0a06c0, _FUN_8c0a06c0_def\n");
