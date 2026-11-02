#include "../decls.h"
undefined4 FUN_8c02c340_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                    (*(int *)(ar4 + 4) * 0x3e8,*(int *)(ar4 + 0xc) * 10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02c340\n.set _FUN_8c02c340, _FUN_8c02c340_def\n");
