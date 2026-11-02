#include "../decls.h"
int FUN_8c0301f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x2d; iVar2 = iVar2 + 1) {
    uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                      (0x3e8,*(int *)(ar4 + 0x60) + 1,ar6,ar7);
    if (uVar1 < (uint)(*(int *)(0x77c + ar4) - *(int *)(0x674 + ar4 + iVar2 * 4))) {
      *(undefined4 *)(0x674 + ar4 + iVar2 * 4) = 0;
    }
  }
  *(undefined4 *)(0x708 + ar4) = 0;
  *(undefined4 *)(0x724 + ar4) = 0;
  *(undefined4 *)(0x714 + ar4) = 0;
  *(undefined4 *)(0x710 + ar4) = 0;
  if (*(int *)(0x770 + ar4) == 2) {
    *(undefined4 *)(0x770 + ar4) = 2;
  }
  if (*(int *)(0x770 + ar4) == 3) {
    *(undefined4 *)(0x770 + ar4) = 0;
    *(undefined4 *)(0x674 + ar4 + *(int *)(0x72c + ar4) * 4) =
         *(undefined4 *)(0x77c + ar4);
    *(undefined1 *)(0x774 + ar4) = 0;
    *(undefined4 *)(0x72c + ar4) = 0;
    *(undefined4 *)(ar4 + 0x60) = 0;
  }
  if (*(int *)(0x770 + ar4) == 1) {
    *(undefined4 *)(0x770 + ar4) = 1;
  }
  iVar2 = 0x77c;
  *(int *)(0x77c + ar4) = *(int *)(0x77c + ar4) + 1;
  return iVar2;
}

__asm__(".globl _FUN_8c0301f8\n.set _FUN_8c0301f8, _FUN_8c0301f8_def\n");
