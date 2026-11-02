#include "../decls.h"
undefined4 FUN_8c0d5c88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x44) = 1;
  return 0x44;
}

__asm__(".globl _FUN_8c0d5c88\n.set _FUN_8c0d5c88, _FUN_8c0d5c88_def\n");
