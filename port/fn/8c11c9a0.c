#include "../decls.h"
undefined4 FUN_8c11c9a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int unaff_r14;
  
  uVar1 = 0;
  if ((uint)*(ushort *)(in_r0 + unaff_r14) != (uint)(ushort)ar5) {
    *(ushort *)(in_r0 + unaff_r14) = (ushort)ar5;
    if (*(int *)(0xc8 + unaff_r14) != 0) {
      uVar1 = (**(code **)(0xc8 + unaff_r14))
                        ((uint)(ushort)ar5,0xf4 + unaff_r14,ar6,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11c9a0\n.set _FUN_8c11c9a0, _FUN_8c11c9a0_def\n");
