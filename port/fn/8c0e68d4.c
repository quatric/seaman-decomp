#include "../decls.h"
undefined4 FUN_8c0e68d4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(0x1c0 + *ar4))(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e68d4\n.set _FUN_8c0e68d4, _FUN_8c0e68d4_def\n");
