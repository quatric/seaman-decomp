#include "../decls.h"
undefined1 * FUN_8c0d1c20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  *(undefined4 *)0x8c43785c = ar4;
  *(undefined4 *)0x8c437860 = ar5;
  puVar1 = 0x8c437864;
  *(undefined4 *)0x8c437864 = (undefined1)ar6;
  return puVar1;
}

__asm__(".globl _FUN_8c0d1c20\n.set _FUN_8c0d1c20, _FUN_8c0d1c20_def\n");
