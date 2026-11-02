#include "../decls.h"
undefined4 FUN_8c0e30f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01f2f8(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if (((iVar1 != 0) &&
      (iVar1 = FUN_8c01f0d0(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7),
      iVar1 != 0)) &&
     (iVar1 = FUN_8c01f1a4(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7),
     iVar1 != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0e30f0\n.set _FUN_8c0e30f0, _FUN_8c0e30f0_def\n");
