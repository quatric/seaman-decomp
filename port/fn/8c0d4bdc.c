#include "../decls.h"
undefined4 FUN_8c0d4bdc_def(float *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(float *)(*(int *)(ar5 + 0xc) + 4) <= *ar4) {
    uStack_10 = 0x3f34fdf4;
  }
  else {
    uStack_10 = 0xbf34fdf4;
  }
  uStack_c = 0xbf34fdf4;
  uStack_14 = 0;
  ar6_00 = auStack_20;
  ar5_00 = &uStack_14;
  uVar1 = 0;
  FUN_8c21279c(0,ar5_00,ar6_00,ar7,ar4);
  FUN_8c219038(uVar1,ar5_00,ar6_00,ar7);
  uVar1 = FUN_8c219070(uVar1,ar5_00,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d4bdc\n.set _FUN_8c0d4bdc, _FUN_8c0d4bdc_def\n");
