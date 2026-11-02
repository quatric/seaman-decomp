#include "../decls.h"
undefined4 FUN_8c0fa9fc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((1 < *ar4) && (uVar1 = 1, *(int *)(0xb0 + (int)ar4) != 1)) {
    FUN_8c0faa40(ar4,ar5,ar6,ar7);
    *ar4 = 1;
    *(undefined4 *)(ar4[4] + 4) = 0;
    uVar1 = FUN_8c0fda5c(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0fa9fc\n.set _FUN_8c0fa9fc, _FUN_8c0fa9fc_def\n");
