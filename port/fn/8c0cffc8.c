#include "../decls.h"
int free_if_nonnull_wrap_0cffc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0cffc8\n.set _free_if_nonnull_wrap_0cffc8, _free_if_nonnull_wrap_0cffc8_def\n");
