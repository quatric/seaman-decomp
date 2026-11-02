#include "../decls.h"
undefined4 Class_129808_m2_0148d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  undefined4 uVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  ar5_00 = &uStack_20;
  uStack_20 = *(undefined4 *)(ar4 + 4);
  uStack_1c = *(undefined4 *)(ar4 + 8);
  uStack_18 = *(undefined4 *)(ar4 + 0xc);
  fStack_14 = *(float *)(ar4 + 4) - *(float *)(ar4 + 0x14) * 3.0;
  fStack_10 = *(float *)(ar4 + 8) - *(float *)(ar4 + 0x18) * 3.0;
  fStack_c = *(float *)(ar4 + 0xc) - *(float *)(ar4 + 0x1c) * 3.0;
  uVar1 = 2;
  ar6_00 = &DAT_8c27882c;
  FUN_8c016464(*(undefined4 *)(ar4 + 0x28),&uStack_20,&DAT_8c27882c,2);
  uVar1 = FUN_8c016504(*(undefined4 *)(ar4 + 0x28),ar5_00,ar6_00,uVar1);
  return uVar1;
}

__asm__(".globl _Class_129808_m2_0148d8\n.set _Class_129808_m2_0148d8, _Class_129808_m2_0148d8_def\n");
