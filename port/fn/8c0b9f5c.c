#include "../decls.h"
undefined1 * FUN_8c0b9f5c_def(undefined1 *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = *ar5;
  for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
    *(undefined4 *)(ar4 + iVar1 * 4 + 4) = *(undefined4 *)(ar5 + iVar1 * 4 + 4);
  }
  for (iVar1 = 0; iVar1 < 0x3e; iVar1 = iVar1 + 1) {
    ar4[iVar1 + 0x18] = ar5[iVar1 + 0x18];
  }
  return ar4;
}

__asm__(".globl _FUN_8c0b9f5c\n.set _FUN_8c0b9f5c, _FUN_8c0b9f5c_def\n");
