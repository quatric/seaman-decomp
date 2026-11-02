#include "../decls.h"
undefined4 FUN_8c2376d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int in_r2;
  undefined4 ar6_00;
  int ar5_00;
  int unaff_r13;
  int unaff_r14;
  int *piVar1;
  undefined4 in_PR;
  
  if (unaff_r13 != 0) {
    piVar1 = (int *)(unaff_r14 * 4 + in_r2);
    do {
      piVar1 = piVar1 + -1;
      ar6_00 = 0x10;
      ar5_00 = *(int *)(*piVar1 * 4 + -0x73b3ee20);
      FUN_8c23c7f4(0x8c4c13a0,0x8c4c0ce0,0x10,ar7);
      FUN_8c255d6c(0x8c4c13a0,ar5_00,ar6_00,ar7,in_PR);
      FUN_8c212740(0x8c4c13a0,ar5_00 + 0x40,ar5_00 + 0x90,ar7,in_PR);
      ain0 = FUN_8c21279c(0x8c4c13a0,ar5_00 + 0x4c,ar5_00 + 0x9c,ar7,in_PR);
      unaff_r13 = unaff_r13 + -1;
    } while (unaff_r13 != 0);
  }
  return ain0;
}

__asm__(".globl _FUN_8c2376d8\n.set _FUN_8c2376d8, _FUN_8c2376d8_def\n");
