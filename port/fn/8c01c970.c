#include "../decls.h"
undefined4 FUN_8c01c970_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 0x24);
  *ar5 = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c01c970\n.set _FUN_8c01c970, _FUN_8c01c970_def\n");
