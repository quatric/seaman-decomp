#include "../decls.h"
undefined4 FUN_8c11c47c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  undefined2 in_r3;
  byte unaff_r12;
  int unaff_r14;
  
  *(undefined2 *)(in_r0 + unaff_r14) = in_r3;
  *(ushort *)(unaff_r14 + 0x58) = (ushort)(byte)ar6;
  if (unaff_r12 == 0) {
LAB_8c11c4a6:
    if ((byte)ar6 != 0) {
      uVar1 = FUN_8c11c972(ar4,(uint)(byte)ar6,4,ar7);
      *(undefined4 *)(unaff_r14 + 0x5c) = uVar1;
      if (*(int *)(unaff_r14 + 0x5c) == 0) goto LAB_8c11c4ca;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_8c11c972(ar4,(uint)unaff_r12,8,ar7);
    *(undefined4 *)(unaff_r14 + 0x54) = uVar1;
    if (*(int *)(unaff_r14 + 0x54) != 0) goto LAB_8c11c4a6;
LAB_8c11c4ca:
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11c47c\n.set _FUN_8c11c47c, _FUN_8c11c47c_def\n");
