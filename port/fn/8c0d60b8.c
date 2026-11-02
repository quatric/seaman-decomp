#include "../decls.h"
undefined4 FUN_8c0d60b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0x3f800000;
  return 0;
}

__asm__(".globl _FUN_8c0d60b8\n.set _FUN_8c0d60b8, _FUN_8c0d60b8_def\n");
