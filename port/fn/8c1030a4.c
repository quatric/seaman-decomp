#include "../decls.h"
undefined4 * Class_12c3c4_m0_1030a4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12c3c4;
    free_if_nonnull_wrap_02eaec(ar4 + 0x207,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12c3c4_m0_1030a4\n.set _Class_12c3c4_m0_1030a4, _Class_12c3c4_m0_1030a4_def\n");
