#include "../decls.h"
undefined4 FUN_8c0d98e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0d98e4\n.set _FUN_8c0d98e4, _FUN_8c0d98e4_def\n");
