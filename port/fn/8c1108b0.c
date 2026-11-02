#include "../decls.h"
undefined4 FUN_8c1108b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,1,(&FUN_8c110680),(&DATA_8c110810),(&FUN_8c1107b0),0x4c);
  return uVar1;
}

__asm__(".globl _FUN_8c1108b0\n.set _FUN_8c1108b0, _FUN_8c1108b0_def\n");
