#include "../decls.h"
undefined4 FUN_8c0bf550_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    FUN_8c0bf804(ar4,ar5,ar6,ar7);
    uVar1 = FUN_8c0bfa78(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0bf550\n.set _FUN_8c0bf550, _FUN_8c0bf550_def\n");
