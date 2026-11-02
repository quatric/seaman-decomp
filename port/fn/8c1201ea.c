#include "../decls.h"
undefined4
FUN_8c1201ea_def(undefined4 ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7,undefined4 s0,
            undefined4 s4,undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20,undefined4 s24)

{
  uint uVar1;
  int unaff_r14;
  
  *(undefined4 *)(unaff_r14 + 0x34) = ar7;
  *(undefined4 *)(unaff_r14 + 0x38) = s16;
  *(undefined4 *)(unaff_r14 + 0x40) = 0;
  *(undefined4 *)(unaff_r14 + 0x1c) = *ar5;
  *(undefined4 *)(unaff_r14 + 0x20) = ar5[1];
  *(undefined4 *)(unaff_r14 + 0x24) = ar5[2];
  *(undefined4 *)(unaff_r14 + 0x28) = ar5[3];
  *(undefined4 *)(unaff_r14 + 0x2c) = ar5[4];
  *(undefined4 *)(unaff_r14 + 0x30) = ar5[5];
  *(undefined2 *)(unaff_r14 + 0x3c) = (undefined2)s20;
  *(undefined2 *)(unaff_r14 + 0x3e) = (undefined2)s24;
  *(undefined4 *)(unaff_r14 + 0x10) = *ar6;
  *(undefined4 *)(unaff_r14 + 0x14) = ar6[1];
  *(undefined4 *)(unaff_r14 + 0x18) = ar6[2];
  uVar1 = FUN_8c11fcc4(unaff_r14,s4,s8,s12);
  if (((uVar1 & 0xff) == 0) && (uVar1 = FUN_8c120078(unaff_r14,s4,s8,s12), (uVar1 & 0xff) == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c1201ea\n.set _FUN_8c1201ea, _FUN_8c1201ea_def\n");
