#include "../decls.h"
undefined4 * Class_12b580_m0_0e61f4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b580;
    vec_delete_array(ar4 + 0x20fe,free_if_nonnull_wrap_0cffc8,0x18,1,ain0);
    ar7_00 = 100;
    ar6_00 = 0xc;
    vec_delete_array(ar4 + 0x1fd2,free_if_nonnull_wrap_0d6ef8,0xc,100,ain0);
    FUN_8c0e6114(ar4 + 0x437,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(ar4 + 0x433,0xffffffff,ar6_00,ar7_00);
    free_if_nonnull_wrap_016bfc(ar4 + 0x432,0xffffffff,ar6_00,ar7_00);
    free_if_nonnull_wrap_0153e4(ar4 + 0x430,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0;
    Class_12bb08_m0_0da208(ar4,0,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b580_m0_0e61f4\n.set _Class_12b580_m0_0e61f4, _Class_12b580_m0_0e61f4_def\n");
