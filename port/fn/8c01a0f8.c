#include "../decls.h"
undefined4 * Class_1299ec_m0_01a0f8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c1299ec;
    ar5_00 = 0xffffffff;
    object_dtor_delete(ar4 + 0x57,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_1299ec_m0_01a0f8\n.set _Class_1299ec_m0_01a0f8, _Class_1299ec_m0_01a0f8_def\n");
