#include "../decls.h"
undefined4 FUN_8c01c964_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x24) = ar5;
  *(undefined4 *)(ar4 + 0x20) = 1;
  return 1;
}

__asm__(".globl _FUN_8c01c964\n.set _FUN_8c01c964, _FUN_8c01c964_def\n");
