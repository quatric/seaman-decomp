#include "../decls.h"
undefined4 FUN_8c0637c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x44) = (undefined1)ar5;
  return 0x44;
}

__asm__(".globl _FUN_8c0637c0\n.set _FUN_8c0637c0, _FUN_8c0637c0_def\n");
