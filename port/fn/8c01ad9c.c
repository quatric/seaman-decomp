#include "../decls.h"
undefined4 FUN_8c01ad9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c01ade8(ar4,ar5,ar6,ar7);
  if (iVar1 < 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = *(undefined4 *)(0x2450 + iVar1 * 0x28 + ar4);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01ad9c\n.set _FUN_8c01ad9c, _FUN_8c01ad9c_def\n");
