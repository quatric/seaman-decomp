#include "../decls.h"
undefined4 * Class_12b388_m0_0c5928_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b388;
    free_if_nonnull_wrap_0153e4(ar4 + 0xb4fd,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0xb4ec,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0c58f8(ar4 + 0xb46c,0xffffffff,ar6,ar7);
    Class_12b3b8_m0_0e77ec(ar4 + 0xb32b,0xffffffff,ar6,ar7);
    Class_12b580_m0_0e61f4(ar4 + 0x9226,0xffffffff,ar6,ar7);
    Class_12b758_m0_0e46cc(ar4 + 0x8ca8,0xffffffff,ar6,ar7);
    Class_12b930_m0_0dde84(ar4 + 6,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    free_if_nonnull_wrap_0ba8ac(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b388_m0_0c5928\n.set _Class_12b388_m0_0c5928, _Class_12b388_m0_0c5928_def\n");
