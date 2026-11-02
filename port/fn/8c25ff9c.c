#include "../decls.h"
undefined4 FUN_8c25ff9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c264fd4(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 4) = 0;
  return uVar1;
}

__asm__(".globl _FUN_8c25ff9c\n.set _FUN_8c25ff9c, _FUN_8c25ff9c_def\n");
