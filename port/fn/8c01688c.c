#include "../decls.h"
undefined4 FUN_8c01688c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c01538c(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = FUN_8c014a94(*(undefined4 *)(ar4 + 4),*(undefined4 *)(ar4 + 8),ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01688c\n.set _FUN_8c01688c, _FUN_8c01688c_def\n");
