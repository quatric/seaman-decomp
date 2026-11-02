#include "../decls.h"
undefined4 FUN_8c02d81c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                    (ar5 * 0x3840,*(undefined4 *)(ar4 + 0xc),ar6,ar7);
  *(undefined4 *)(ar4 + 0x14) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02d81c\n.set _FUN_8c02d81c, _FUN_8c02d81c_def\n");
