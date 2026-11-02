#include "../decls.h"
undefined4 FUN_8c0e4d64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    if (*(int *)(0x1090 + iVar1 * 0x24 + ar4) == 1) {
      FUN_8c0d6164(iVar1 * 0x24 + ar4 + 0x1070,ar5,ar6,ar7);
    }
  }
  return 3;
}

__asm__(".globl _FUN_8c0e4d64\n.set _FUN_8c0e4d64, _FUN_8c0e4d64_def\n");
