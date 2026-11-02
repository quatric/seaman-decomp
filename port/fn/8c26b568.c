#include "../decls.h"
undefined4 FUN_8c26b568_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  undefined4 *ar4_00;
  undefined4 in_PR;
  
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 * 0x30 + -0x73b40b44) == 0) break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < ain0);
  if (iVar1 == 0x40) {
    return 0;
  }
  iVar1 = iVar1 * 0x30;
  ar4_00 = (undefined4 *)(iVar1 + -0x73b40b48);
  *(undefined4 *)(iVar1 + -0x73b40b44) = 1;
  *ar4_00 = &DAT_8c27869c;
  *(undefined4 *)(iVar1 + -0x73b40b2c) = ar4;
  *(undefined4 *)(iVar1 + -0x73b40b28) = ar5;
  *(undefined4 *)(iVar1 + -0x73b40b24) = ar6;
  *(undefined **)(iVar1 + -0x73b40b40) = &DAT_8c273988;
  *(undefined **)(iVar1 + -0x73b40b20) = &DAT_8c26b522;
  *(undefined4 **)(iVar1 + -0x73b40b1c) = ar4_00;
  FUN_8c26b5ee(ar4_00,ar5,ar6,iVar1,in_PR);
  return ar4_00;
}

__asm__(".globl _FUN_8c26b568\n.set _FUN_8c26b568, _FUN_8c26b568_def\n");
