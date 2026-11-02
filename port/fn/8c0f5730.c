#include "../decls.h"
undefined4 FUN_8c0f5730_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 0x170) + 8))((int *)(ar4 + 0x170),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f5730\n.set _FUN_8c0f5730, _FUN_8c0f5730_def\n");
