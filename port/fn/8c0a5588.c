#include "../decls.h"
undefined4 FUN_8c0a5588_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  undefined4 uVar1;
  
  a6 = s_Shell_0fef9c(ar5,0xd,0x18,ar7);
  uVar1 = 0;
  if (a6 != 0) {
    uVar1 = (**(code **)(0x100 + *(int *)(ar4 + 8)))(ar4,0,a6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0a5588\n.set _FUN_8c0a5588, _FUN_8c0a5588_def\n");
