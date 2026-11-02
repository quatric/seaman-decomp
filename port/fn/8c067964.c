#include "../decls.h"
undefined4 FUN_8c067964_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x1c))(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c067964\n.set _FUN_8c067964, _FUN_8c067964_def\n");
