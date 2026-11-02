#include "../decls.h"
undefined4 FUN_8c0cf144_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined2 *)(0x144 + ar4) = 0;
  *(undefined2 *)(0x146 + ar4) = 0;
  *(undefined2 *)(0x148 + ar4) = 0;
  *(undefined4 *)(0x14c + ar4) = 0;
  *(undefined4 *)(0x150 + ar4) = 0;
  *(undefined4 *)(0x154 + ar4) = 0;
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(undefined4 *)(0x4c8 + ar4 + iVar1 * 4) = 0xffffff;
  }
  return 4;
}

__asm__(".globl _FUN_8c0cf144\n.set _FUN_8c0cf144, _FUN_8c0cf144_def\n");
