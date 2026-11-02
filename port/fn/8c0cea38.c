#include "../decls.h"
int FUN_8c0cea38_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 ar6_00;
  
  ar6_00 = *(undefined4 *)(ar5 + 0x54);
  a4 = s_Shell_0fef9c(0x8c3eb324,*(undefined4 *)(ar5 + 0x18),ar6_00,ar7);
  (**(code **)(0x104 + *(int *)(a4 + 8)))(a4,ar5,ar6_00,ar7);
  (**(code **)(0x94 + *(int *)(a4 + 8)))(a4,ar6,ar6_00,ar7);
  return a4;
}

__asm__(".globl _FUN_8c0cea38\n.set _FUN_8c0cea38, _FUN_8c0cea38_def\n");
