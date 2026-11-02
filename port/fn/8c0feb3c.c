#include "../decls.h"
undefined4 FUN_8c0feb3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x22 < iVar1) {
      return 0;
    }
    if (*(int *)(ar4 + iVar1 * 0x10 + 0xc) == 0) break;
    iVar1 = iVar1 + 1;
  }
  *(undefined4 *)(ar4 + iVar1 * 0x10 + 0xc) = 1;
  return ar4 + iVar1 * 0x10;
}

__asm__(".globl _FUN_8c0feb3c\n.set _FUN_8c0feb3c, _FUN_8c0feb3c_def\n");
