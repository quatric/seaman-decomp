#include "../decls.h"
undefined4 FUN_8c1f7170_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r1;
  int in_r3;
  undefined4 ar5_00;
  int ar6_00;
  int ar7_00;
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*in_r1 < in_r3) {
    ar6_00 = *(undefined4 *)0x8c4748b4;
    if ((ar6_00 == 0) || (*(undefined4 *)0x8c4748b8 == 0)) {
      uVar1 = 0;
      *(undefined4 *)0x8c4748a8 = 0xb;
    }
    else {
      ar7_00 = *(undefined4 *)0x8c4748b8;
      ar5_00 = *(undefined4 *)0x8c4748b0;
      FUN_8c1f6b14(*(undefined4 *)0x8c4748ac,ar5_00,ar6_00,ar7_00);
      FUN_8c1f6dcc(0xfffffffd,ar5_00,ar6_00,ar7_00);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f7170\n.set _FUN_8c1f7170, _FUN_8c1f7170_def\n");
