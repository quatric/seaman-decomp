#include "../decls.h"
undefined4 FUN_8c0cbb2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  (**(code **)(0x1b0 + **(int **)(ar4 + 0x10)))(*(int **)(ar4 + 0x10),1,ar6,ar7);
  (**(code **)(0x1b0 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),1,ar6,ar7);
  (**(code **)(0x1b0 + **(int **)(ar4 + 0x14)))(*(int **)(ar4 + 0x14),1,ar6,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 0x10)))(*(int **)(ar4 + 0x10),0x8c3eb334,3,ar7);
  (**(code **)(0x1b4 + **(int **)(ar4 + 0xc)))(*(int **)(ar4 + 0xc),0x8c3eb334,3,ar7);
  ar6_00 = 3;
  ar5_00 = 0x8c3eb334;
  (**(code **)(0x1b4 + **(int **)(ar4 + 0x14)))(*(int **)(ar4 + 0x14),0x8c3eb334,3,ar7);
  FUN_8c0cf144(0x8c436a28,ar5_00,ar6_00,ar7);
  FUN_8c0cf1bc(0x8c436a28,0x8c3eb334,ar6_00,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0cbb2c\n.set _FUN_8c0cbb2c, _FUN_8c0cbb2c_def\n");
