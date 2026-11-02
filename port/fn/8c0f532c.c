#include "../decls.h"
undefined4 FUN_8c0f532c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(0xa0 + ar4) = ar5;
  *(undefined4 *)(0xa4 + ar4) = ar6;
  uVar1 = (**(code **)(**(int **)(0xa4 + ar4) + 0x24))
                    (*(int **)(0xa4 + ar4),*(undefined4 *)(0xa0 + ar4),ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f532c\n.set _FUN_8c0f532c, _FUN_8c0f532c_def\n");
