#include "../decls.h"
undefined4 * Class_12bce0_m0_0d9a98_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12bce0;
    free_if_nonnull_wrap_10270c(ar4 + 0x23,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_102790(ar4 + 0x20,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 0xc,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 10,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 3,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4 + 1,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12bce0_m0_0d9a98\n.set _Class_12bce0_m0_0d9a98, _Class_12bce0_m0_0d9a98_def\n");
