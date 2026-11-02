#include "../decls.h"
undefined4 FUN_8c0e5c24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 0x9e8) + 0x28))
                    ((int *)(ar4 + 0x9e8),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e5c24\n.set _FUN_8c0e5c24, _FUN_8c0e5c24_def\n");
