#include "../decls.h"
undefined4 FUN_8c110158_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,4,1,(&DATA_8c11005c),(&DATA_8c10fec4),(&FUN_8c10f8e6),
                     (int)0x94);
  return uVar1;
}

__asm__(".globl _FUN_8c110158\n.set _FUN_8c110158, _FUN_8c110158_def\n");
