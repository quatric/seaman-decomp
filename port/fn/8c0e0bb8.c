#include "../decls.h"
undefined4 FUN_8c0e0bb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(int *)(ar4 + 0x18) == 1) && (*(int *)(ar4 + 0x14) == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0e0bb8\n.set _FUN_8c0e0bb8, _FUN_8c0e0bb8_def\n");
