#include "../decls.h"
undefined4 FUN_8c110a5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,3,1,(&DATA_8c110900),(&FUN_8c110a30),(&FUN_8c1109d2),0x2c);
  return uVar1;
}

__asm__(".globl _FUN_8c110a5c\n.set _FUN_8c110a5c, _FUN_8c110a5c_def\n");
