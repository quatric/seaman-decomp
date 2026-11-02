#include "../decls.h"
undefined4 FUN_8c0a58a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c028afc(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(0x330 + ar4) != 0) {
    uVar1 = (**(code **)(0xec + *(int *)(*(int *)(0x330 + ar4) + 8)))
                      (*(int *)(0x330 + ar4),ar5,0,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0a58a4\n.set _FUN_8c0a58a4, _FUN_8c0a58a4_def\n");
