#include "../decls.h"
undefined4 FUN_8c0c2020_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 0x17c) + 0xc))((int *)(ar4 + 0x17c),ar5,ar6,ar7)
  ;
  return uVar1;
}

__asm__(".globl _FUN_8c0c2020\n.set _FUN_8c0c2020, _FUN_8c0c2020_def\n");
