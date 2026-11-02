#include "../decls.h"
undefined4 FUN_8c05febc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x38) = (undefined1)ar5;
  return 0x38;
}

__asm__(".globl _FUN_8c05febc\n.set _FUN_8c05febc, _FUN_8c05febc_def\n");
