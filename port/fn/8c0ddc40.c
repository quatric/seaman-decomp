#include "../decls.h"
int FUN_8c0ddc40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_0cffc8(ar4 + 0xeb48,0xffffffff,ar6,ar7);
    ar7_00 = 0x15e;
    ar6_00 = 0xac;
    vec_delete_array(ar4 + 0xc,FUN_8c0d0abc,0xac,0x15e,ain0);
    free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ddc40\n.set _FUN_8c0ddc40, _FUN_8c0ddc40_def\n");
