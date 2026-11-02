#include "../decls.h"
undefined4 FUN_8c065c9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x3d) = (undefined1)ar5;
  return 0x3d;
}

__asm__(".globl _FUN_8c065c9c\n.set _FUN_8c065c9c, _FUN_8c065c9c_def\n");
