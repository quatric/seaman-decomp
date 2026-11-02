#include "../decls.h"
int FUN_8c01d7cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(0x5638 + *(int *)(0x5630 + ar4) * 0x50 + ar4) = 1;
  iVar1 = *(undefined4 *)0x8c2791b8;
  if ((iVar1 == 4) && (iVar1 = *(undefined4 *)0x8c279284, iVar1 == 0)) {
    if (*(undefined4 *)0x8c279288 != 0) {
      FUN_8c1fb57c(*(undefined4 *)0x8c279288,ar5,ar6,ar7);
      *(undefined4 *)0x8c279288 = 0;
      *(undefined4 *)0x8c27928c = 0;
    }
    FUN_8c122630(*(undefined4 *)0x8c27925c,0x8c279288,0x8c27928c,ar7);
    *(undefined4 *)0x8c279298 = 0;
    iVar1 = 1;
    *(undefined4 *)0x8c279284 = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01d7cc\n.set _FUN_8c01d7cc, _FUN_8c01d7cc_def\n");
