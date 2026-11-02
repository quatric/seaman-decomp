#include "../decls.h"
uint FUN_8c26a220_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x8c4beb88;
  for (uVar1 = 0x8c4beb88;
      (uVar3 = 0, uVar1 < 0x8c4beb88 + (int)0x2a0 &&
      (uVar3 = uVar2, *(int *)(uVar1 + 4) != 0)); uVar1 = uVar1 + 0x54) {
    uVar2 = uVar2 + 0x54;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c26a220\n.set _FUN_8c26a220, _FUN_8c26a220_def\n");
