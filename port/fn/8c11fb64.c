#include "../decls.h"
undefined4 FUN_8c11fb64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,2,1,(&FUN_8c11f8de),(&DATA_8c11fa5e),(&DATA_8c11fa14),0x48);
  return uVar1;
}

__asm__(".globl _FUN_8c11fb64\n.set _FUN_8c11fb64, _FUN_8c11fb64_def\n");
