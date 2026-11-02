#include "../decls.h"
undefined4 * FUN_8c01e4dc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0;
  for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
    *(undefined1 *)((int)ar4 + iVar1 + 4) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c01e4dc\n.set _FUN_8c01e4dc, _FUN_8c01e4dc_def\n");
