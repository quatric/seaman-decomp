#include "../decls.h"
undefined4 FUN_8c11c412_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,2,3,(&FUN_8c11c0e4),(&DATA_8c11c2b0),(&DATA_8c11c204),0x70);
  return uVar1;
}

__asm__(".globl _FUN_8c11c412\n.set _FUN_8c11c412, _FUN_8c11c412_def\n");
