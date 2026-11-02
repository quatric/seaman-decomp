#include "../decls.h"
undefined4 FUN_8c2590bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c210fd2(&DAT_8c4aabdc,ar5,ar6,ar7);
  if (DAT_8c277b30 == 0) {
    uVar1 = FUN_8c1fb57c(_DAT_8c4aace0 & 0x8fffffff,ar5,ar6,ar7);
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c2590bc\n.set _FUN_8c2590bc, _FUN_8c2590bc_def\n");
