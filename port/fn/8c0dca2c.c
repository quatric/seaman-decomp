#include "../decls.h"
undefined4 FUN_8c0dca2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = ar5;
  FUN_8c0d6aac(ar4 + 0xa68,ar5,ar6,ar7);
  uVar1 = FUN_8c0c51c4(ar5,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0dca2c\n.set _FUN_8c0dca2c, _FUN_8c0dca2c_def\n");
