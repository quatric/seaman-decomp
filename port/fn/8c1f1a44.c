#include "../decls.h"
undefined4 FUN_8c1f1a44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(ar4 + 0x20) == 1) {
    return 1;
  }
  uVar1 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))();
  if (*(int *)(DAT_8c2739e0 + 0x1c) != 0) {
    uVar1 = FUN_8c1f1766(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f1a44\n.set _FUN_8c1f1a44, _FUN_8c1f1a44_def\n");
