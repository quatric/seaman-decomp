#include "../decls.h"
undefined4 FUN_8c0d2c84_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  float *pfStack_8c;
  undefined4 uStack_88;
  undefined2 *puStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float *pfStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fStack_1c = *ar4;
  fStack_18 = ar4[1];
  fStack_14 = ar4[2];
  uStack_2c = DAT_8c13f488;
  uStack_28 = DAT_8c13f48c;
  uStack_24 = DAT_8c13f490;
  uStack_20 = DAT_8c13f494;
  uStack_38 = DAT_8c13f49c;
  uStack_34 = DAT_8c13f4a0;
  uStack_30 = DAT_8c13f4a4;
  pfStack_3c = &fStack_1c;
  fStack_6c = DAT_8c13f4a8;
  fStack_64 = (float)DAT_8c13f4b0;
  fStack_60 = (float)DAT_8c13f4b4;
  fStack_58 = (float)DAT_8c13f4bc;
  fStack_54 = (float)DAT_8c13f4c0;
  fStack_4c = (float)DAT_8c13f4c8;
  fStack_48 = (float)DAT_8c13f4cc;
  fStack_40 = (float)DAT_8c13f4d4;
  fStack_68 = ar4[1] - 1.0;
  fStack_5c = ar4[1] - 1.0;
  fStack_50 = ar4[1] - 1.0;
  fStack_44 = ar4[1] - 1.0;
  uStack_88 = DAT_8c13f4dc;
  uStack_80 = DAT_8c13f4e4;
  pfStack_8c = &fStack_6c;
  puStack_84 = &uStack_7c;
  if (ar4[5] == 0.0) {
    uVar1 = FUN_8c234fd0(&pfStack_3c,1,0,ar7);
  }
  else {
    fVar2 = (ar4[4] / 12.2) * ar4[0x21];
    if (ar4[0x1d] == 2.8026e-45) {
      fStack_6c = *ar4 - fVar2 * 5.0;
      fStack_64 = ar4[2] + fVar2 * 5.0;
      fStack_60 = *ar4 - fVar2 * 5.0;
      fStack_58 = ar4[2] - fVar2 * 5.0;
      fStack_54 = *ar4 + fVar2 * 5.0;
      fStack_4c = ar4[2] - fVar2 * 5.0;
      fStack_48 = *ar4 + fVar2 * 5.0;
      fStack_40 = ar4[2] + fVar2 * 5.0;
      uStack_7c = 0;
      uStack_7a = 0;
      uStack_78 = 0;
      uStack_76 = 0x7f;
      uStack_74 = 0x7f;
      uStack_72 = 0x7f;
      uStack_70 = 0x7f;
      uStack_6e = 0;
      FUN_8c01538c(ar5,ar5,ar6,ar7);
      FUN_8c014a94(ar5,0,ar6,ar7);
      uVar1 = FUN_8c235bfc(&pfStack_8c,4,0x80000060,ar7);
    }
    else {
      FUN_8c0d2f04(ar4 + 0x12,ar5,ar6,ar7);
      uVar1 = (**(code **)((int)ar4[0x12] + 0x1c))(ar4 + 0x12,ar4[0x20],ar6,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d2c84\n.set _FUN_8c0d2c84, _FUN_8c0d2c84_def\n");
