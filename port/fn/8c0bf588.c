#include "../decls.h"
undefined4 FUN_8c0bf588_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  
  uVar2 = 2;
  if (*(int *)(ar4 + 4) == 0) {
    ar5_00 = ar5;
    iVar1 = FUN_8c0bf708(ar5,ar5,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(ar4 + 0x24) == 1)) {
      *(undefined4 *)(ar4 + 0x24) = 0;
    }
    else {
      iVar1 = FUN_8c0bf690(ar5,ar5_00,ar6,ar7);
      if ((iVar1 == 1) && (*(int *)(ar4 + 0x24) == 0)) {
        *(undefined4 *)(ar4 + 0x24) = 1;
      }
    }
    iVar1 = FUN_8c0bf618(ar5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      if (*(int *)(ar4 + 0x24) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0bf588\n.set _FUN_8c0bf588, _FUN_8c0bf588_def\n");
