#include "../decls.h"
undefined4 FUN_8c035470_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = (**(code **)(0x180 + *(int *)(*(int *)(ar4 + 4) + 8)))
                    (*(int *)(ar4 + 4),ar5,ar6,ar7);
  if (iVar1 != 2) {
    uVar3 = FUN_8c02602c(*(undefined4 *)(ar4 + 0x20),ar5,ar6,ar7);
    ar5 = 0x3c;
    uVar3 = libgcc_divide_helper_0101e4(uVar3 & 0xffff,0x3c,ar6,ar7);
  }
  iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
  if (iVar1 < 8) {
    iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
    if ((iVar1 < 7) || ((uVar3 & 0xffff) < 10)) {
      iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
      if ((iVar1 < 6) || ((uVar3 & 0xffff) < 0xc)) {
        iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
        if ((iVar1 < 5) || ((uVar3 & 0xffff) < 0xf)) {
          iVar1 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
          if ((iVar1 < 4) || ((uVar3 & 0xffff) < 0x14)) {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c035470\n.set _FUN_8c035470, _FUN_8c035470_def\n");
