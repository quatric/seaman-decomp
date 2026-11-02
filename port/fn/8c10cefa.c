#include "../decls.h"
undefined4 FUN_8c10cefa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,1,(&FUN_8c10cb90),(&FUN_8c10cccc),(&FUN_8c10cc6e),0x3c);
  return uVar1;
}

__asm__(".globl _FUN_8c10cefa\n.set _FUN_8c10cefa, _FUN_8c10cefa_def\n");
