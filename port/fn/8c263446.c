#include "../decls.h"
undefined4 FUN_8c263446_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  if (ar4 != 0) {
    FUN_8c263498(ar4,ar5,ar6,ar7);
    if (*(int *)(ar4 + 8) != 0) {
      FUN_8c1f309c(*(undefined4 *)(ar4 + 8));
    }
    uVar1 = FUN_8c2632e2(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c263446\n.set _FUN_8c263446, _FUN_8c263446_def\n");
