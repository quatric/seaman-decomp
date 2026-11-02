#include "../decls.h"
undefined4 FUN_8c25b440_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *in_r3;
  int *ar5_00;
  
  ar5_00 = *(int **)(*(int *)*in_r3 + ar4 + 8);
  if ((*ar5_00 != DAT_8c277b10) || (DAT_8c277b14 != ar5_00[1])) {
    DAT_8c277b10 = *ar5_00;
    DAT_8c277b14 = ar5_00[1];
    *(uint *)(_DAT_8c4aabbc + 0x98) =
         *(uint *)(_DAT_8c4aabbc + 0x98) & 0xffffffc0 | ar5_00[2] & 0x3fU;
    DAT_8c277b1c = (uint)ar5_00[6] >> 0x10;
    *(int *)(_DAT_8c4aabbc + 0x9c) = ar5_00[3];
    FUN_8c20fe00(_DAT_8c4aabbc,ar5_00,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c25b440\n.set _FUN_8c25b440, _FUN_8c25b440_def\n");
