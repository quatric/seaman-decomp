#include "../decls.h"
undefined4 FUN_8c10082c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(float *)(ar4 + 0x140) <= 0.5) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c10082c\n.set _FUN_8c10082c, _FUN_8c10082c_def\n");
