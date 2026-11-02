#include "../decls.h"
undefined4 FUN_8c022894_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)(&FUN_8c022918))
                    (ar4,ar4 + ar5 * 0x208e0 + 0x2d150,ar6,ar7,in_stack_00000000);
  return uVar1;
}

__asm__(".globl _FUN_8c022894\n.set _FUN_8c022894, _FUN_8c022894_def\n");
