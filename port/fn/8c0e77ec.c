#include "../decls.h"
undefined4 * Class_12b3b8_m0_0e77ec_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b3b8;
    FUN_8c015428(ar4 + 0x122,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_015c94(ar4 + 0x105,0xffffffff,ar6,ar7);
    Class_1299ec_m0_01a0f8(ar4 + 0xaa,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_019270(ar4 + 0x8a,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016660(ar4 + 0x89,0xffffffff,ar6,ar7);
    ar7_00 = 0xc;
    ar6_00 = 0x20;
    vec_delete_array(ar4 + 0x29,FUN_8c0d6f68,0x20,0xc,ain0);
    ar5_00 = 0;
    Class_12bce0_m0_0d9a98(ar4,0,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b3b8_m0_0e77ec\n.set _Class_12b3b8_m0_0e77ec, _Class_12b3b8_m0_0e77ec_def\n");
