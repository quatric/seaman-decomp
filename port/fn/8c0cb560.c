#include "../decls.h"
undefined4 FUN_8c0cb560_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0caa3c(ar4,ar5,ar6,ar7);
  (**(code **)(0x9c + **(int **)(ar4 + 0x10)))(*(int **)(ar4 + 0x10),3,ar6,ar7);
  (**(code **)(0x1b0 + **(int **)(ar4 + 0x10)))(*(int **)(ar4 + 0x10),1,ar6,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 0x10)))(*(int **)(ar4 + 0x10),0x8c3eb334,3,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0cb560\n.set _FUN_8c0cb560, _FUN_8c0cb560_def\n");
