#include "../decls.h"
undefined4 FUN_8c021a30_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = FUN_8c022804(ar4 + 1,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021a30\n.set _FUN_8c021a30, _FUN_8c021a30_def\n");
