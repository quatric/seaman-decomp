#include "../decls.h"
int FUN_8c022778_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(int *)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      iVar1 = FUN_8c2682bc(*(undefined4 *)(ar4 + ar5 * 0x10 + 0xc),ar5,ar6,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022778\n.set _FUN_8c022778, _FUN_8c022778_def\n");
