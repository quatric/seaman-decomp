#include "../decls.h"
undefined4 FUN_8c021170_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  
  uVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,0xf,*(undefined4 *)(ar4 + 0x30),ar5,ar6,ar7,in_stack_00000000,0,0,
                     in_stack_00000004);
  return uVar1;
}

__asm__(".globl _FUN_8c021170\n.set _FUN_8c021170, _FUN_8c021170_def\n");
