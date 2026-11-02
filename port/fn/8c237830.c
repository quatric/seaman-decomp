#include "../decls.h"
undefined4 FUN_8c237830_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *ar5_00;
  undefined4 *unaff_r14;
  undefined4 in_PR;
  
  if ((unaff_r14[4] & 2) == 0) {
    ar5_00 = unaff_r14 + 5;
    iVar1 = FUN_8c25a914(0,ar5_00,ar6,ar7);
    if (iVar1 < 0) {
      *(short *)((int)unaff_r14 + 0x42) = -(short)iVar1;
      return 0xffffffff;
    }
    *(undefined2 *)((int)unaff_r14 + 0x42) = 0;
    iVar1 = FUN_8c25a1ee((uint)unaff_r14[6] >> 0x10 & 0xff00,ar5_00,ar6,ar7);
    if (iVar1 == 0) {
      *(short *)(unaff_r14 + 0x10) = *(short *)(unaff_r14 + 0x10) + 1;
      unaff_r14[4] = unaff_r14[4] | 2;
      FUN_8c2571fe(unaff_r14,ar5_00,ar6,ar7);
    }
    else {
      FUN_8c25a608(*unaff_r14,2,unaff_r14[5],ar7,in_PR);
      unaff_r14[4] = unaff_r14[4] | 8;
    }
  }
  else {
    *(short *)(unaff_r14 + 0x10) = *(short *)(unaff_r14 + 0x10) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c237830\n.set _FUN_8c237830, _FUN_8c237830_def\n");
