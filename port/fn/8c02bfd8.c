#include "../decls.h"
undefined4 FUN_8c02bfd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    if (0x11 < iVar1) {
      return 0xffffffff;
    }
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      if (*(int *)((&DATA_8c13019c) + iVar2 * 4 + iVar1 * 0x10) == *(int *)(0x13c + ar4)) {
        return iVar1;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c02bfd8\n.set _FUN_8c02bfd8, _FUN_8c02bfd8_def\n");
