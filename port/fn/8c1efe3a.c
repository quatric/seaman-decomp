#include "../decls.h"
undefined4 FUN_8c1efe3a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f56c8(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *(undefined4 *)0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1efe3a\n.set _FUN_8c1efe3a, _FUN_8c1efe3a_def\n");
