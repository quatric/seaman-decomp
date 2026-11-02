#include "../decls.h"
undefined4 FUN_8c1111a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,1,(&FUN_8c110aea),(&FUN_8c11116e),(&DATA_8c110be0),0x3c);
  return uVar1;
}

__asm__(".globl _FUN_8c1111a0\n.set _FUN_8c1111a0, _FUN_8c1111a0_def\n");
