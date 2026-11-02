#include "../decls.h"
undefined4 FUN_8c02735c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x40) = (undefined1)ar5;
  return 0x40;
}

__asm__(".globl _FUN_8c02735c\n.set _FUN_8c02735c, _FUN_8c02735c_def\n");
