#include "../decls.h"
undefined4 FUN_8c262814_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 ar4_00;
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int *unaff_r14;
  undefined4 in_PR;
  
  if (*unaff_r14 == 0) {
    FUN_8c260c98(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c260ca0(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c26b992(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c26b526(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c26b212(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c25eca8(ar4,ar5,ar6,ar7);
    FUN_8c263244(ar4,ar5,ar6,ar7);
    FUN_8c262ac4(ar4,ar5,ar6,ar7);
    FUN_8c2619b4(ar4,ar5,ar6,ar7);
    thunk_FUN_8c2689c8(ar4,ar5,ar6,ar7);
    thunk_FUN_8c26a130(FUN_8c2627f6,0,ar6,ar7);
    memset(&DAT_8c277fd0,0,0x4a0,ar7);
    ar4_00 = 0x900;
    ar7_00 = 0;
    ar5_00 = FUN_8c264010;
    ar6_00 = 0x70;
    DAT_8c278470 = FUN_8c1fa244(0x900,FUN_8c264010,0x70,0);
    ain0 = FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar7_00,in_PR);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return ain0;
}

__asm__(".globl _FUN_8c262814\n.set _FUN_8c262814, _FUN_8c262814_def\n");
