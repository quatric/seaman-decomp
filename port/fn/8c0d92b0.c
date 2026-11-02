#include "../decls.h"
undefined4 FUN_8c0d92b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 4) = 0;
  FUN_8c0d7dcc(ar4 + 0x78,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x58) = 0;
  *(undefined4 *)(ar4 + 0x54) = 0;
  *(undefined4 *)(ar4 + 0x50) = 0;
  *(undefined4 *)(ar4 + 0x70) = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(0x6e24 + iVar1 * 0x18 + ar4) = 0xffffffff;
  }
  return 2;
}

__asm__(".globl _FUN_8c0d92b0\n.set _FUN_8c0d92b0, _FUN_8c0d92b0_def\n");
