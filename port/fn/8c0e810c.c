#include "../decls.h"
undefined4 FUN_8c0e810c_def(int ar4,undefined4 ar5,short *ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  short *ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  FUN_8c0c4da0(ar4,ar5,ar6,ar7);
  *(undefined4 *)(0xa4 + ar4 + ar6[1] * 0x80 + *ar6 * 0x20) = ar5;
  FUN_8c0d6fb8(ar4 + ar6[1] * 0x80 + *ar6 * 0x20 + 0xa4,ar5_00,ar6_00,ar7);
  *(int *)(0x410 + ar4) = *(int *)(0x410 + ar4) + 1;
  ar6[1] = -1;
  *ar6 = -1;
  return ar5;
}

__asm__(".globl _FUN_8c0e810c\n.set _FUN_8c0e810c, _FUN_8c0e810c_def\n");
