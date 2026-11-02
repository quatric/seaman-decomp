#include "../decls.h"
undefined4 FUN_8c26b564_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ain0;
  int ar7_00;
  undefined4 *ar4_00;
  
  ain0 = 0;
  do {
    if (*(int *)(ain0 * 0x30 + -0x73b40b44) == 0) break;
    ain0 = ain0 + 1;
  } while (ain0 < 0x40);
  if (ain0 == 0x40) {
    return 0;
  }
  ar7_00 = ain0 * 0x30;
  ar4_00 = (undefined4 *)(ar7_00 + -0x73b40b48);
  *(undefined4 *)(ar7_00 + -0x73b40b44) = 1;
  *ar4_00 = &DAT_8c27869c;
  *(undefined4 *)(ar7_00 + -0x73b40b2c) = ar4;
  *(undefined4 *)(ar7_00 + -0x73b40b28) = ar5;
  *(undefined4 *)(ar7_00 + -0x73b40b24) = ar6;
  *(undefined **)(ar7_00 + -0x73b40b40) = &DAT_8c273988;
  *(undefined **)(ar7_00 + -0x73b40b20) = &DAT_8c26b522;
  *(undefined4 **)(ar7_00 + -0x73b40b1c) = ar4_00;
  FUN_8c26b5ee(ar4_00,ar5,ar6,ar7_00,ain0);
  return ar4_00;
}

__asm__(".globl _FUN_8c26b564\n.set _FUN_8c26b564, _FUN_8c26b564_def\n");
