#include "../decls.h"
int FUN_8c0ce994_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 uVar1;
  int a6;
  
  uVar1 = *(undefined4 *)(ar5 + 0x54);
  a4 = s_Shell_0fef9c(0x8c3eb324,*(undefined4 *)(ar5 + 0x18),uVar1,ar7);
  (**(code **)(0x104 + *(int *)(a4 + 8)))(a4,ar5,uVar1,ar7);
  (**(code **)(0x94 + *(int *)(a4 + 8)))(a4,ar6,uVar1,ar7);
  uVar1 = (**(code **)(0x148 + *(int *)(a4 + 8)))(a4,ar6,uVar1,ar7);
  a6 = (int)(short)uVar1;
  uVar1 = 0x8c3eb334;
  (**(code **)(0xe0 + *(int *)(a4 + 8)))(a4,0x8c3eb334,a6,ar7);
  (**(code **)(*(int *)(a4 + 8) + 0x5c))(a4,uVar1,a6,ar7);
  return a4;
}

__asm__(".globl _FUN_8c0ce994\n.set _FUN_8c0ce994, _FUN_8c0ce994_def\n");
