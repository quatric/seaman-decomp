#include "../decls.h"
undefined4 FUN_8c0d4e7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x40) = 1;
  return 0x40;
}

__asm__(".globl _FUN_8c0d4e7c\n.set _FUN_8c0d4e7c, _FUN_8c0d4e7c_def\n");
