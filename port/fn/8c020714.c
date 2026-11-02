#include "../decls.h"
undefined4 FUN_8c020714_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (0x1f < iVar1) {
LAB_8c02074c:
      iVar1 = 0;
      while( true ) {
        if (0x1f < iVar1) {
          return 0;
        }
        if (*(int *)(ar5 + iVar1 * 4 + 0x58) != 0) break;
        iVar1 = iVar1 + 1;
      }
      return 1;
    }
    if (*(int *)(ar5 + iVar1 * 4 + 0x58) == ar6) {
      *(undefined4 *)(ar5 + iVar1 * 4 + 0x58) = 0;
      goto LAB_8c02074c;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c020714\n.set _FUN_8c020714, _FUN_8c020714_def\n");
