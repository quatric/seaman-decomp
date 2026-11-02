#include "../decls.h"
int FUN_8c0d7900_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  float *ar5_00;
  undefined4 ar5_01;
  undefined4 *ar6_00;
  undefined4 ar6_01;
  undefined4 ar7_00;
  undefined1 auStack_90 [68];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  
  fStack_3c = *(float *)(ar4 + 4) - 12.0;
  uStack_38 = *(undefined4 *)(ar4 + 8);
  fStack_34 = *(float *)(ar4 + 0xc) - 12.0;
  fStack_30 = *(float *)(ar4 + 4) - 12.0;
  uStack_2c = *(undefined4 *)(ar4 + 8);
  fStack_28 = *(float *)(ar4 + 0xc) + 12.0;
  fStack_24 = *(float *)(ar4 + 4) + 12.0;
  uStack_20 = *(undefined4 *)(ar4 + 8);
  fStack_1c = *(float *)(ar4 + 0xc) + 12.0;
  fStack_18 = *(float *)(ar4 + 4) + 12.0;
  uStack_14 = *(undefined4 *)(ar4 + 8);
  fStack_10 = *(float *)(ar4 + 0xc) - 12.0;
  uStack_4c = DAT_8c13f59c;
  uStack_48 = DAT_8c13f5a0;
  uStack_44 = DAT_8c13f5a4;
  uStack_40 = DAT_8c13f5a8;
  ar7_00 = 4;
  ar6_00 = &uStack_4c;
  ar5_00 = &fStack_3c;
  FUN_8c01642c(auStack_90,ar5_00,ar6_00,4);
  iVar1 = *(int *)(ar4 + 0x30);
  if (iVar1 == 0) {
    iVar1 = Class_129808_m2_0148d8(ar4,ar5_00,ar6_00,ar7_00);
  }
  else if (iVar1 == 1) {
    FUN_8c01538c(ar5,ar5_00,ar6_00,ar7_00);
    FUN_8c014a94(ar5,ar6,ar6_00,ar7_00);
    ar6_01 = 4;
    FUN_8c0164c8(auStack_90,&DAT_8c4377fc + *(int *)(ar4 + 0x34) * 0x10,4,ar7_00);
    ar5_01 = 0x80000060;
    FUN_8c0d1450(auStack_90,0x80000060,ar6_01,ar7_00,ar6);
    iVar1 = FUN_8c016524(auStack_90,ar5_01,ar6_01,ar7_00);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d7900\n.set _FUN_8c0d7900, _FUN_8c0d7900_def\n");
