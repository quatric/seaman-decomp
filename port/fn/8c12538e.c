#include "../decls.h"
undefined4 FUN_8c12538e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,1,(&FUN_8c124fe8),(&DATA_8c1251dc),(&FUN_8c12516c),0x48);
  return uVar1;
}

__asm__(".globl _FUN_8c12538e\n.set _FUN_8c12538e, _FUN_8c12538e_def\n");
