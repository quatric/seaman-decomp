#include "../decls.h"
undefined4 FUN_8c0e0d7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 0x9e8) + 0x28))
                    ((int *)(ar4 + 0x9e8),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e0d7c\n.set _FUN_8c0e0d7c, _FUN_8c0e0d7c_def\n");
