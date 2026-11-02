#include "../decls.h"
undefined4 FUN_8c0d0b04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c014f74(ar4,ar5,ar6,ar7);
  if (0x3aaaaaa < *(uint *)(ar4 + 0x40)) {
    uVar1 = 0x40;
    *(int *)(ar4 + 0x40) = *(int *)(ar4 + 0x40) - 0x1000000;
  }
  else {
    uVar1 = FUN_8c014d90(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d0b04\n.set _FUN_8c0d0b04, _FUN_8c0d0b04_def\n");
