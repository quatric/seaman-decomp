#include "../decls.h"
undefined4 FUN_8c01c978_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x28) = ar5;
  *(undefined4 *)(ar4 + 0x1c) = 0x1e;
  return 0x1e;
}

__asm__(".globl _FUN_8c01c978\n.set _FUN_8c01c978, _FUN_8c01c978_def\n");
