#include "../decls.h"
undefined4 FUN_8c0c2044_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 0x2d578) + 0xc))((int *)(ar4 + 0x2d578),ar5,ar6,ar7)
  ;
  return uVar1;
}

__asm__(".globl _FUN_8c0c2044\n.set _FUN_8c0c2044, _FUN_8c0c2044_def\n");
