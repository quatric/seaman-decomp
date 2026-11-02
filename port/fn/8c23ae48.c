#include "../decls.h"
undefined4 FUN_8c23ae48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(0x13c + ar4))(ar5,ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c23ae48\n.set _FUN_8c23ae48, _FUN_8c23ae48_def\n");
