#include "../decls.h"
undefined4 FUN_8c0cb220_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *a4;
  undefined4 ar4_00;
  undefined4 in_PR;
  
  a4 = *(int **)(ar4 + 8);
  (**(code **)(*a4 + 0x44))(a4,ar5,ar6,ar7);
  FUN_8c219070(a4,ar5,ar6,ar7);
  ar4_00 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(ar4_00,ar5,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x28))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
  FUN_8c256210(1,ar5,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0cb220\n.set _FUN_8c0cb220, _FUN_8c0cb220_def\n");
