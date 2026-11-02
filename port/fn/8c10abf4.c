#include "../decls.h"
undefined4 FUN_8c10abf4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  
  ar5_00 = *ar4;
  (**(code **)(ar5_00 + 0x18))(ar5_00,ar4[10]);
  (**(code **)(ar5_00 + 0x18))(ar5_00,ar4[0x16]);
  uVar1 = FUN_8c11b884(ar4[0x2c],ar5_00,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10abf4\n.set _FUN_8c10abf4, _FUN_8c10abf4_def\n");
