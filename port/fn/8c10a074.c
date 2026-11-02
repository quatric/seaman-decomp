#include "../decls.h"
undefined4 Class_12c3c4_m10_10a074_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar6 == 2) {
    *(int *)(ar5 + 4) = (int)*(char *)(0x865 + ar4);
  }
  else {
    *(int *)(ar5 + 4) = (int)*(char *)(0x854 + ar4);
  }
  *ar5 = *(undefined1 *)(0x98 + ar4);
  ar5[1] = *(undefined1 *)(0x99 + ar4);
  uVar1 = FUN_8c030d2c(ar4 + 0x9c,ar5 + 8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_12c3c4_m10_10a074\n.set _Class_12c3c4_m10_10a074, _Class_12c3c4_m10_10a074_def\n");
