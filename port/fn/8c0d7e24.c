#include "../decls.h"
uint FUN_8c0d7e24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(uint *)(ar4 + 0x10); uVar1 = uVar1 + 1) {
    FUN_8c0149dc(uVar1 * 0x38 + *(int *)(ar4 + 0xc),ar5,ar6,ar7);
  }
  return *(uint *)(ar4 + 0x10);
}

__asm__(".globl _FUN_8c0d7e24\n.set _FUN_8c0d7e24, _FUN_8c0d7e24_def\n");
