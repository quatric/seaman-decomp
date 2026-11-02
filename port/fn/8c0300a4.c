#include "../decls.h"
int FUN_8c0300a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  FUN_8c0fdc98(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 0x2d; iVar1 = iVar1 + 1) {
    *(undefined4 *)(0x674 + ar4 + iVar1 * 4) = 0;
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      *(undefined4 *)(0x2f0 + iVar1 * 0x14 + ar4 + iVar2 * 4) = 0;
    }
  }
  for (iVar1 = 0; iVar1 < 0x20; iVar1 = iVar1 + 1) {
    *(undefined1 *)(0x750 + ar4 + iVar1) = 0;
    *(undefined1 *)(0x730 + ar4 + iVar1) = 0;
    *(undefined1 *)(0x2c8 + ar4 + iVar1) = 0;
  }
  *(undefined4 *)(0x2e8 + ar4) = 0xffffffff;
  *(undefined1 *)(0x774 + ar4) = 0;
  *(undefined4 *)(0x72c + ar4) = 0;
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(0x770 + ar4) = 0;
  *(undefined4 *)(0x77c + ar4) = 0;
  *(undefined4 *)(0xb8 + ar4) = 0;
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 0x68) = 3;
  *(undefined4 *)(0x2ec + ar4) = 4;
  *(undefined4 *)(0x778 + ar4) = 0;
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    *(undefined1 *)(0xc8 + ar4 + iVar1 * 0x20) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0300a4\n.set _FUN_8c0300a4, _FUN_8c0300a4_def\n");
