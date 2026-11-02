#include "../decls.h"
int FUN_8c0c4dd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int iVar2;
  
  ar5_00 = ar5;
  uVar1 = (**(code **)(0x148 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  iVar2 = (int)(short)uVar1;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    iVar2 = FUN_8c035bc8(ar5,ar5_00,ar6,ar7);
  }
  else if (iVar2 == 3) {
    iVar2 = FUN_8c0996c4(ar5,ar5_00,ar6,ar7);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0c4dd0\n.set _FUN_8c0c4dd0, _FUN_8c0c4dd0_def\n");
