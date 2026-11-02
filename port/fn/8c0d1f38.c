#include "../decls.h"
undefined4 FUN_8c0d1f38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(0x2790 + ar4) = 0;
  *(undefined4 *)(0x278c + ar4) = 0;
  for (iVar1 = 0; iVar1 < 10; iVar1 = iVar1 + 1) {
    FUN_8c013fb4(iVar1 * 0xf0 + ar4 + 0x2794,0x8c437b48,0xf0,ar7);
  }
  return 10;
}

__asm__(".globl _FUN_8c0d1f38\n.set _FUN_8c0d1f38, _FUN_8c0d1f38_def\n");
