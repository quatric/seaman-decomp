#include "../decls.h"
undefined4 FUN_8c02cb24_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                    (ar5 * 0x708 * 0x3e8,0x34bc0,ar6,ar7);
  *(undefined4 *)(ar4 + 8) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02cb24\n.set _FUN_8c02cb24, _FUN_8c02cb24_def\n");
