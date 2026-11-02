#include "../decls.h"
undefined4 FUN_8c0206b8_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(ar5 + iVar2 * 4 + 0x58);
    if (iVar1 == ar6) {
      return iVar1;
    }
  }
  iVar2 = 0;
  while( true ) {
    if (0x1f < iVar2) {
      return 0x20;
    }
    if (*(int *)(ar5 + iVar2 * 4 + 0x58) == 0) break;
    iVar2 = iVar2 + 1;
  }
  *(int *)(ar5 + iVar2 * 4 + 0x58) = ar6;
  return 0x58;
}

__asm__(".globl _FUN_8c0206b8\n.set _FUN_8c0206b8, _FUN_8c0206b8_def\n");
