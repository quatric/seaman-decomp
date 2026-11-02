#include "../decls.h"
undefined4 Class_12a078_m8_0671a8_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar5 + 4) = *(undefined4 *)(0x868 + ar4);
  *ar5 = *(undefined1 *)(0x98 + ar4);
  ar5[1] = *(undefined1 *)(0x99 + ar4);
  uVar1 = FUN_8c030d2c(ar4 + 0x9c,ar5 + 8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_12a078_m8_0671a8\n.set _Class_12a078_m8_0671a8, _Class_12a078_m8_0671a8_def\n");
