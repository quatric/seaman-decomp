#include "../decls.h"
undefined4 FUN_8c099850_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x45) = (undefined1)ar5;
  return 0x45;
}

__asm__(".globl _FUN_8c099850\n.set _FUN_8c099850, _FUN_8c099850_def\n");
