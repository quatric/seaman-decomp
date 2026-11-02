#include "../decls.h"
undefined4 FUN_8c0e3050_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&input_is_mask_set_10_01f2b4))
                    (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e3050\n.set _FUN_8c0e3050, _FUN_8c0e3050_def\n");
