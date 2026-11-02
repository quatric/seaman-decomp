#include "../decls.h"
undefined4 FUN_8c26b254_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar6_00;
  int unaff_r14;
  undefined4 *ar4_00;
  undefined4 in_PR;
  
  ar6_00 = 0;
  do {
    if (*(int *)(ar6_00 * 0x24 + -0x73b40fc4) == 0) break;
    ar6_00 = ar6_00 + 1;
  } while (ar6_00 < unaff_r14);
  if (ar6_00 == 0x20) {
    return 0;
  }
  iVar1 = ar6_00 * 0x24;
  ar4_00 = (undefined4 *)(iVar1 + -0x73b40fc8);
  *(undefined4 *)(iVar1 + -0x73b40fc4) = 1;
  *ar4_00 = &DAT_8c278660;
  *(undefined4 *)(iVar1 + -0x73b40fb4) = ar4;
  *(undefined4 *)(iVar1 + -0x73b40fb0) = ar5;
  *(undefined **)(iVar1 + -0x73b40fc0) = &DAT_8c273978;
  *(undefined **)(iVar1 + -0x73b40fac) = &DAT_8c26b20e;
  *(undefined4 **)(iVar1 + -0x73b40fa8) = ar4_00;
  FUN_8c26b2da(ar4_00,ar5,ar6_00,0x8c4bf038,in_PR);
  return ar4_00;
}

__asm__(".globl _FUN_8c26b254\n.set _FUN_8c26b254, _FUN_8c26b254_def\n");
