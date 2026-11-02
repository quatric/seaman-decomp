#include "../decls.h"
undefined4 FUN_8c0f4974_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  
  a5 = ar4 + 0xa0;
  (**(code **)(0x194 + *(int *)(ar4 + 8)))(ar4,a5,ar5,ar7);
  FUN_8c0f79b8(ar4 + 0xa0,a5,ar5,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0f4974\n.set _FUN_8c0f4974, _FUN_8c0f4974_def\n");
