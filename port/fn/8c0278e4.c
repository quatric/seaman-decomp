#include "../decls.h"
undefined4 FUN_8c0278e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(0x308 + ar4) + 0x1c))
                    (*(int **)(0x308 + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0278e4\n.set _FUN_8c0278e4, _FUN_8c0278e4_def\n");
