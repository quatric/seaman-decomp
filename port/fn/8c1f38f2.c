#include "../decls.h"
undefined4 FUN_8c1f38f2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  if (DAT_8c2739f0 != 0) {
    ain0 = (**(code **)(DAT_8c2739f0 + 0x14))();
    DAT_8c2739f0 = 0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c1f38f2\n.set _FUN_8c1f38f2, _FUN_8c1f38f2_def\n");
