#include "../decls.h"
undefined4 FUN_8c0fda5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c01c964))
                    (*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(0xc4 + ar4),ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fda5c\n.set _FUN_8c0fda5c, _FUN_8c0fda5c_def\n");
