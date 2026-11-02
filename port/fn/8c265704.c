#include "../decls.h"
int FUN_8c265704_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ain0;
  int *dst;
  int ar6_00;
  int ar5_00;
  
  ar5_00 = 0;
  ain0 = 0x17c;
  dst = *(int **)(DAT_8c2784c0 + 0x17c);
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
    ar6_00 = 0;
  }
  else {
    ar7 = 0x40;
    ar6_00 = 0;
    do {
      if (*dst != 1) {
        FUN_8c010794(0x20,dst,&DAT_8c2784d0);
        ain0 = 0x184;
        *ar4 = dst;
        *(int *)(DAT_8c2784c0 + 0x184) = *(int *)(DAT_8c2784c0 + 0x184) + 1;
        goto LAB_8c26574e;
      }
      ar6_00 = ar6_00 + 1;
      dst = dst + 8;
    } while (ar6_00 < 0x40);
    ar5_00 = 0x7000101;
    *ar4 = 0;
    ain0 = 1;
  }
LAB_8c26574e:
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265704,ar5_00,ar6_00,ar7,ain0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265704\n.set _FUN_8c265704, _FUN_8c265704_def\n");
