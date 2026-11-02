#include "../decls.h"
undefined4 FUN_8c02d438_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                    (*(int *)(ar4 + 8) * 0x3e8,*(int *)(ar4 + 0x10) * 10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02d438\n.set _FUN_8c02d438, _FUN_8c02d438_def\n");
