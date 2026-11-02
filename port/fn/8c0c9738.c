#include "../decls.h"
undefined4 FUN_8c0c9738_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (**(code **)(0x1b0 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),1,ar6,ar7);
  (**(code **)(0x1b0 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),1,ar6,ar7);
  (**(code **)(0x1b0 + **(int **)(ar4 + 0x14)))(*(int **)(ar4 + 0x14),1,ar6,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 8)))(*(int **)(ar4 + 8),0x8c3eb334,1,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),0x8c3eb334,1,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 0x14)))(*(int **)(ar4 + 0x14),0x8c3eb334,1,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0c9738\n.set _FUN_8c0c9738, _FUN_8c0c9738_def\n");
