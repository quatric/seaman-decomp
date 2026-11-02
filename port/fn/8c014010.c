#include "../decls.h"
undefined4 free_if_nonnull_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (ar4 != 0) {
    in_r0 = FUN_8c1fb586(ar4,ar5,ar6,ar7);
  }
  return in_r0;
}

__asm__(".globl _free_if_nonnull\n.set _free_if_nonnull, _free_if_nonnull_def\n");
