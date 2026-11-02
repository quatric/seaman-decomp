#include "../decls.h"
undefined4 FUN_8c0e02b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(0x1020 + ar4) = 0;
  uVar1 = s_GRAPHICS_ENV_0d5220(ar4 + 0x10ac,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e02b0\n.set _FUN_8c0e02b0, _FUN_8c0e02b0_def\n");
