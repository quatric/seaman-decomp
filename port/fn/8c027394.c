#include "../decls.h"
undefined4 FUN_8c027394_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0f4c0c(ar4,ar5,ar6,ar7);
  (**(code **)(**(int **)(0x30c + ar4) + 0x24))(*(int **)(0x30c + ar4),ar5,ar6,ar7);
  uVar1 = (**(code **)(0xa8 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c027394\n.set _FUN_8c027394, _FUN_8c027394_def\n");
