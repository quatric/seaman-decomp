#include "../decls.h"
undefined4 FUN_8c085c1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 0x490) + 0x1c))
                    ((int *)(ar4 + 0x490),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c085c1c\n.set _FUN_8c085c1c, _FUN_8c085c1c_def\n");
