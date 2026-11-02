#include "../decls.h"
undefined4 FUN_8c0e89a0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(0x1b0 + *ar4))(ar4,1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e89a0\n.set _FUN_8c0e89a0, _FUN_8c0e89a0_def\n");
