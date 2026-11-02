#include "../decls.h"
undefined4 FUN_8c0febf0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x96 <= iVar1) {
      return 0;
    }
    if (*(int *)(ar4 + iVar1 * 0x5c + 0x58) == 0) break;
    iVar1 = iVar1 + 1;
  }
  *(undefined4 *)(ar4 + iVar1 * 0x5c + 0x58) = 1;
  return ar4 + iVar1 * 0x5c;
}

__asm__(".globl _FUN_8c0febf0\n.set _FUN_8c0febf0, _FUN_8c0febf0_def\n");
