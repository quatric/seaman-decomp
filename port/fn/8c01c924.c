#include "../decls.h"
undefined4 FUN_8c01c924_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x18) = 0x1e;
  return 0x1e;
}

__asm__(".globl _FUN_8c01c924\n.set _FUN_8c01c924, _FUN_8c01c924_def\n");
