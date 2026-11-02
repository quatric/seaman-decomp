#include "../decls.h"
undefined4 FUN_8c1eff58_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f5934(ar4,ar5,ar6,ar7);
  if (*(int *)((int)0x10e8 + *(undefined4 *)0x8c4727b4) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1eff58\n.set _FUN_8c1eff58, _FUN_8c1eff58_def\n");
