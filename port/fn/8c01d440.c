#include "../decls.h"
undefined4 FUN_8c01d440_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(undefined4 *)0x8c2791b8;
  if (iVar1 != 2) {
    if ((iVar1 != 3) && (iVar1 != 4)) goto LAB_8c01d472;
    FUN_8c01d008(ar4,ar5,ar6,ar7);
  }
  FUN_8c01d490(ar4,ar5,ar6,ar7);
  FUN_8c01cfc8(ar4,ar5,ar6,ar7);
LAB_8c01d472:
  *(undefined4 *)0x8c2791b8 = 0;
  return 0;
}

__asm__(".globl _FUN_8c01d440\n.set _FUN_8c01d440, _FUN_8c01d440_def\n");
