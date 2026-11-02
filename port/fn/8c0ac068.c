#include "../decls.h"
int FUN_8c0ac068_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  int *a5;
  undefined4 ar5_00;
  
  a5 = ar5;
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
    iVar1 = FUN_8c0ac1f0(ar4,ar5,ar6,ar7);
  }
  else if (iVar1 == 4) {
    ar4_00 = (**(code **)(0x148 + *ar5))(ar5,a5,ar6,ar7);
    ar5_00 = 0;
    FUN_8c0abc1c(ar4_00,0,ar6,ar7);
    iVar1 = FUN_8c02f414(ar4,ar5_00,ar6,ar7);
    if ((iVar1 == 1) && (iVar1 = 0, *(int *)(ar4 + 0x6c) != 0)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5_00,ar6,ar7);
      iVar1 = 0x6c;
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0ac068\n.set _FUN_8c0ac068, _FUN_8c0ac068_def\n");
