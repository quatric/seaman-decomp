#include "../decls.h"
undefined4 FUN_8c10af3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,5,1,(&FUN_8c10a80c),(&FUN_8c10ad00),(&DATA_8c10ac30),
                     (int)0xb4);
  return uVar1;
}

__asm__(".globl _FUN_8c10af3c\n.set _FUN_8c10af3c, _FUN_8c10af3c_def\n");
