#include "../decls.h"
undefined4 FUN_8c020c98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,8,*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7,ar4 + 8,0,0,in_stack_00000000);
  return uVar1;
}

__asm__(".globl _FUN_8c020c98\n.set _FUN_8c020c98, _FUN_8c020c98_def\n");
