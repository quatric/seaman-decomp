#include "../decls.h"
int FUN_8c0ddbc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 7;
    ar6_00 = 4;
    vec_delete_array(ar4 + 0x2c,free_if_nonnull_wrap_0247b0,4,7,ain0);
    free_if_nonnull_wrap_016bfc(ar4 + 0x28,0xffffffff,ar6_00,ar7_00);
    free_if_nonnull_wrap_0153e4(ar4 + 0x20,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ddbc8\n.set _FUN_8c0ddbc8, _FUN_8c0ddbc8_def\n");
