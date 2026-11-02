#include "../decls.h"
undefined4 FUN_8c10c8e2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,1,(&FUN_8c10c530),(&DATA_8c10c484),(&FUN_8c10c838),0x5c);
  return uVar1;
}

__asm__(".globl _FUN_8c10c8e2\n.set _FUN_8c10c8e2, _FUN_8c10c8e2_def\n");
