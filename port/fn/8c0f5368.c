#include "../decls.h"
undefined4 FUN_8c0f5368_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(0xa4 + ar4) + 0xc))
                    (*(int **)(0xa4 + ar4),ar4 + 0x30,ar4 + 0x50,
                     *(undefined4 *)(0xa0 + ar4));
  return uVar1;
}

__asm__(".globl _FUN_8c0f5368\n.set _FUN_8c0f5368, _FUN_8c0f5368_def\n");
