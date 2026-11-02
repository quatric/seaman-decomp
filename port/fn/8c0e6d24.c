#include "../decls.h"
undefined4 FUN_8c0e6d24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar5_00;
  undefined4 uVar1;
  
  ar5_00 = (uint)(byte)ar5;
  FUN_8c0db090(ar4,ar5_00,ar6,ar7);
  if (*(int *)(0x83fc + ar4) != -1) {
    ar5_00 = *(uint *)(0x83fc + ar4);
    FUN_8c022104(0x8c2b59d0,ar5_00,ar6,ar7);
  }
  uVar1 = FUN_8c0d8460(ar4 + 0x10dc,ar5_00,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e6d24\n.set _FUN_8c0e6d24, _FUN_8c0e6d24_def\n");
