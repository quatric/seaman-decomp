#include "../decls.h"
int FUN_8c0a00f8_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 3) {
    iVar1 = FUN_8c0a0278(ar4,ar5,ar6_00,ar7);
  }
  else if ((((iVar1 != 6) && (iVar1 == 10)) &&
           (iVar1 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5_00,ar6_00,ar7),
           iVar1 != 0)) && (iVar1 == 1)) {
    iVar1 = 0x40;
    *(undefined4 *)(ar4 + 0x40) = 0xe;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0a00f8\n.set _FUN_8c0a00f8, _FUN_8c0a00f8_def\n");
