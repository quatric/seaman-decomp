#include "../decls.h"
undefined4 FUN_8c0d98f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x10) = 8;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 8;
}

__asm__(".globl _FUN_8c0d98f8\n.set _FUN_8c0d98f8, _FUN_8c0d98f8_def\n");
