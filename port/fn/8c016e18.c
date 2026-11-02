#include "../decls.h"
undefined4 FUN_8c016e18_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*ar5 + 0x18))(ar5,ar4,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016e18\n.set _FUN_8c016e18, _FUN_8c016e18_def\n");
