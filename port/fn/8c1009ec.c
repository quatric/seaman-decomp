#include "../decls.h"
undefined4 FUN_8c1009ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (0.3 <= *(float *)(ar4 + 0x150)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1009ec\n.set _FUN_8c1009ec, _FUN_8c1009ec_def\n");
