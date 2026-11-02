#include "../decls.h"
undefined4 * Class_1299b0_m0_016af4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c1299b0;
    free_if_nonnull_wrap_016ac4(ar4 + 8,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 5,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 1,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_1299b0_m0_016af4\n.set _Class_1299b0_m0_016af4, _Class_1299b0_m0_016af4_def\n");
