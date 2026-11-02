#include "../decls.h"
undefined4 FUN_8c027354_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x28) = (undefined1)ar5;
  return 0x28;
}

__asm__(".globl _FUN_8c027354\n.set _FUN_8c027354, _FUN_8c027354_def\n");
