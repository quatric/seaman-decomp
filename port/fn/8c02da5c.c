#include "../decls.h"
int FUN_8c02da5c_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  
  FUN_8c02d9f4(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined2 *)(ar4 + 0x14) = 0;
  *(undefined2 *)(ar4 + 0x16) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x3c) = 0;
  *(undefined1 *)(ar4 + 0x1c) = 1;
  *(undefined1 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x44) = 1;
  *(short *)(ar4 + 0x20) = (short)ar6;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(undefined2 *)(ar4 + iVar1 * 2 + 0x22) = *(undefined2 *)(iVar1 * 2 + ar7);
  }
  *(undefined4 *)(ar4 + 0x34) = s0;
  *(undefined4 *)(ar4 + 0x30) = s4;
  *(undefined4 *)(ar4 + 0x38) = ar5;
  *(undefined4 *)(ar4 + 0x38) = 0x270f;
  *(undefined1 *)(ar4 + 0x4c) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02da5c\n.set _FUN_8c02da5c, _FUN_8c02da5c_def\n");
