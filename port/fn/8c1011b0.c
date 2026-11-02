#include "../decls.h"
undefined4 FUN_8c1011b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                    ((uint)*(ushort *)(0x18e + ar4),0x1e,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1011b0\n.set _FUN_8c1011b0, _FUN_8c1011b0_def\n");
