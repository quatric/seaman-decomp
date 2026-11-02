#include "../decls.h"
int FUN_8c0f3f58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0xb0,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xa0,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x8c,0xffffffff,ar6,ar7);
    vec_delete_array(ar4 + 0x6c,free_if_nonnull_wrap_0f3ffc,8,3,ain0);
    ar7_00 = 3;
    ar6_00 = 8;
    vec_delete_array(ar4 + 0x4c,free_if_nonnull_wrap_0f3ffc,8,3,ain0);
    ar5_00 = 0xffffffff;
    Class_129974_m0_016c2c(ar4 + 8,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0f3f58\n.set _FUN_8c0f3f58, _FUN_8c0f3f58_def\n");
