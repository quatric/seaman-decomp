#include "../decls.h"
undefined4 FUN_8c028c9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&get_field_6c_028cc4))
                    (*(undefined4 *)(0x308 + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c028c9c\n.set _FUN_8c028c9c, _FUN_8c028c9c_def\n");
