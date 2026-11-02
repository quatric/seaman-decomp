#include "../decls.h"
undefined4 FUN_8c0f6ab0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x2c) != 0) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0f6ab0\n.set _FUN_8c0f6ab0, _FUN_8c0f6ab0_def\n");
