#include "../decls.h"
undefined4 FUN_8c02126c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  uVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,0x10,*(undefined4 *)(ar4 + 0x34),ar5,ar6,ar7,ar4 + 8,in_stack_00000000,
                     in_stack_00000004,in_stack_00000008);
  return uVar1;
}

__asm__(".globl _FUN_8c02126c\n.set _FUN_8c02126c, _FUN_8c02126c_def\n");
