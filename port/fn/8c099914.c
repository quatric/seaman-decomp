#include "../decls.h"
int FUN_8c099914_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  int *ar6_00;
  
  a5 = ar5;
  ar6_00 = ar6;
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 4) {
    iVar1 = FUN_8c099b0c(ar4,ar5,ar6_00,ar7);
  }
  else if ((iVar1 == 8) &&
          (iVar1 = (**(code **)(0xb4 + *(int *)(*ar6 + 8)))(*ar6,a5,ar6_00,ar7), iVar1 == 1)
          ) {
    iVar1 = *ar6;
    FUN_8c027954(iVar1,a5,ar6_00,ar7);
    iVar1 = FUN_8c0c4e2c(iVar1,a5,ar6_00,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c099914\n.set _FUN_8c099914, _FUN_8c099914_def\n");
