#include "../decls.h"
undefined4 FUN_8c0ca458_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *a4;
  uint a5;
  
  *(undefined2 *)(0x2d1ac + ar4) = 0;
  (**(code **)(**(int **)(ar4 + 8) + 0x24))(*(int **)(ar4 + 8),0x8c3eb334,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0xc) + 0x18))(*(int **)(ar4 + 0xc),0x8c3eb334,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x14) + 0x18))(*(int **)(ar4 + 0x14),0x8c3eb334,ar6,ar7);
  a5 = (uint)*(byte *)(0xa0 + ar5);
  a4 = *(int **)(ar4 + 8);
  (**(code **)(0x98 + *a4))(a4,a5,ar6,ar7);
  FUN_8c235ee4(a4,a5,ar6,ar7);
  FUN_8c235ee4(a4,a5,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x70))(*(int **)(ar4 + 8),2,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0ca458\n.set _FUN_8c0ca458, _FUN_8c0ca458_def\n");
