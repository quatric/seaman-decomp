#include "../decls.h"
undefined4 FUN_8c021d4c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    FUN_8c0229a8(ar4 + 1,ar5,ar6,ar7);
    for (ar5_00 = 0; uVar1 = 3, ar5_00 < 3; ar5_00 = ar5_00 + 1) {
      FUN_8c02296c(ar4 + 1,ar5_00,ar6,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021d4c\n.set _FUN_8c021d4c, _FUN_8c021d4c_def\n");
