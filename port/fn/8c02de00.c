#include "../decls.h"
undefined4 FUN_8c02de00_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 1;
  if (0 < ar5) {
    *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + 1;
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + ar5;
    if (2 < *(int *)(ar4 + 0x10) - *(int *)((&DATA_8c1304a8) + ar6 * 0x140 + 8)) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    iVar2 = *(int *)(ar4 + 0x10) - *(int *)((&DATA_8c1304a8) + ar6 * 0x140 + 8);
    iVar3 = ar6;
    if (*(int *)(ar4 + 0x10) == *(int *)((&DATA_8c1304a8) + ar6 * 0x140 + 8)) {
      uVar1 = rand(ar4,ar5,ar6,ar7);
      iVar2 = libgcc_divide_helper_01031c(uVar1,100,iVar3,ar7);
      if (iVar2 < 0x32) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar2 == 1) {
      uVar1 = rand(ar4,ar5,ar6,ar7);
      iVar2 = libgcc_divide_helper_01031c(uVar1,100,iVar3,ar7);
      if (iVar2 < 0x4b) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    *(undefined4 *)(ar4 + 0xc) = 0;
    uVar1 = FUN_8c02dc8c(ar4,ar6,iVar3,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c02de00\n.set _FUN_8c02de00, _FUN_8c02de00_def\n");
