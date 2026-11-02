#include "../decls.h"
undefined4 *
free_if_nonnull_wrap_0c0264_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff0;
  
  if (ar4 != (undefined4 *)0x0) {
    ar4[1] = 0;
    *ar4 = 0;
    if (0 < (short)ar5) {
      free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff0 >> 0x10),(short)ar5))
      ;
    }
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0c0264\n.set _free_if_nonnull_wrap_0c0264, _free_if_nonnull_wrap_0c0264_def\n");
