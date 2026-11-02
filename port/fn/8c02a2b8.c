#include "../decls.h"
undefined4 FUN_8c02a2b8_def(int ar4,undefined4 ar5,undefined4 ar6,double *ar7)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  double *ar7_00;
  float *pfVar3;
  float fVar4;
  code *pcVar5;
  ulonglong uVar6;
  double dVar7;
  code *pcVar9;
  double dVar8;
  float fVar10;
  double in_xd0;
  char cVar11;
  char cVar12;
  undefined4 uStack_7c;
  undefined4 auStack_74 [4];
  undefined4 uStack_64;
  code *pcStack_60;
  code *pcStack_5c;
  undefined4 uStack_58;
  code *pcStack_54;
  code *pcStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_2c,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(&uStack_3c,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(&uStack_4c,uVar2,ar6_00,ar7_00);
  Vec3_set_zero(&uStack_58,uVar2,ar6_00,ar7_00);
  Vec3_set_zero(&uStack_64,uVar2,ar6_00,ar7_00);
  FUN_8c02a544(*(undefined4 *)(ar4 + 0x308),uVar2,ar6_00,ar7_00,auStack_74);
  Vec3_assign(&uStack_3c,auStack_74,ar6_00,ar7_00);
  Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7_00);
  if (cVar12 == '\0') {
    uVar6 = CONCAT44(0xc7c35000,uStack_3c);
  }
  else {
    in_xd0 = (double)CONCAT44(uStack_38,uStack_3c);
    uVar6 = 0x8c014a34c7c35000;
  }
  if ((float)uVar6 == (float)(uVar6 >> 0x20)) {
    if (cVar12 == '\0') {
      *(float *)ar7 = 0.0;
    }
    else {
      *ar7 = (double)(uVar6 & 0xffffffff);
    }
    if (cVar12 == '\0') {
      *(float *)((int)ar7 + 4) = 0.0;
    }
    else {
      *(ulonglong *)((int)ar7 + 4) = uVar6 & 0xffffffff;
    }
    if (cVar12 == '\0') {
      *(float *)(ar7 + 1) = 0.0;
    }
    else {
      ar7[1] = (double)(uVar6 & 0xffffffff);
    }
    object_dtor_delete(&uStack_64,0xffffffff,ar6_00,ar7_00);
    object_dtor_delete(&uStack_58,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(&uStack_4c,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(&uStack_3c,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7_00);
    uVar2 = Vec3_dtor(&fStack_1c,0xffffffff,ar6_00,ar7_00);
  }
  else {
    FUN_8c02a568(ar4,ar6,&uStack_4c,ar7_00);
    ar6_01 = auStack_2c;
    FUN_8c02a5d4(ar4,ar5,ar6_01,ar7_00);
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(uStack_4c,uStack_3c);
    }
    else {
      in_xd0 = (double)CONCAT44(uStack_38,uStack_3c);
      dVar7 = (double)CONCAT44(uStack_48,uStack_4c);
    }
    if (cVar11 == '\0') {
      fStack_1c = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fStack_1c = SUB84(dVar7 - dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(uStack_48,uStack_38);
    }
    else {
      fStack_1c = SUB84(in_xd0,0);
      in_xd0 = (double)CONCAT44(uStack_34,uStack_38);
      dVar7 = (double)CONCAT44(uStack_44,uStack_48);
    }
    if (cVar11 == '\0') {
      fStack_18 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fStack_18 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(uStack_44,uStack_34);
    }
    else {
      fStack_18 = SUB84(in_xd0,0);
      in_xd0 = (double)CONCAT44(uStack_30,uStack_34);
      dVar7 = (double)CONCAT44(uStack_40,uStack_44);
    }
    if (cVar11 == '\0') {
      fVar4 = (float)((ulonglong)dVar7 >> 0x20);
      dVar7 = (double)CONCAT44(fVar4,SUB84(dVar7,0) - fVar4);
    }
    else {
      dVar7 = dVar7 - dVar7;
    }
    if (cVar12 == '\0') {
      uStack_14 = SUB84(dVar7,0);
    }
    else {
      uStack_14 = SUB84(in_xd0,0);
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    FUN_8c0231c8(auStack_2c,ar5,ar6_01,ar7_00);
    uStack_58 = SUB84(dVar7,0);
    pcVar5 = (code *)((ulonglong)dVar7 >> 0x20);
    uVar2 = pcVar5;
    if (cVar12 == '\0') {
      uVar2 = auStack_74[0];
      uStack_58 = pcVar5;
      pcVar5 = pcStack_54;
    }
    pcStack_54 = pcVar5;
    auStack_74[0] = uVar2;
    FUN_8c0231c8(&fStack_1c,ar5,ar6_01,ar7_00);
    uStack_64 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (cVar12 == '\0') {
      dVar8 = (double)CONCAT44(uStack_58,uStack_64);
      dVar7 = in_xd0;
    }
    else {
      uStack_7c = SUB84(dVar7,0);
      dVar8 = (double)CONCAT44(pcStack_54,uStack_58);
      uStack_64 = uStack_7c;
      pcStack_60 = (code *)uStack_64;
    }
    if (cVar11 == '\0') {
      fVar4 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar12 == '\0') {
      *(float *)ar7 = fVar4;
      pcVar5 = *(code **)ar7;
      fVar4 = -20.0;
    }
    else {
      *ar7 = dVar7;
      dVar7 = *ar7;
      pcVar5 = (code *)0xc1a00000;
      fVar4 = 20.0;
    }
    if (cVar11 != '\0' || fVar4 <= (float)(uint)pcVar5) {
      if (cVar12 == '\0') {
        pcVar5 = *(code **)ar7;
        pcVar9 = (code *)0x41a00000;
      }
      else {
        dVar7 = *ar7;
        pcVar5 = (code *)0x41a00000;
        pcVar9 = FUN_8c02327c;
      }
      if (cVar11 == '\0' && (float)(uint)pcVar9 < (float)(uint)pcVar5) {
        if (cVar12 == '\0') {
          pcVar9 = (code *)0x41a00000;
          *(float *)ar7 = 20.0;
        }
        else {
          pcVar5 = (code *)0x41a00000;
          pcVar9 = FUN_8c02327c;
          *ar7 = -7.94252136586639e-251;
        }
      }
    }
    else if (cVar12 == '\0') {
      pcVar9 = (code *)0xc1a00000;
      *(float *)ar7 = -20.0;
    }
    else {
      pcVar5 = (code *)0xc1a00000;
      pcVar9 = (code *)0x41a00000;
      *ar7 = 134217824.8125;
    }
    FUN_8c02327c(auStack_2c,ar5,ar6_01,ar7_00);
    pcStack_54 = pcVar5;
    pcVar1 = pcVar9;
    if (cVar12 == '\0') {
      pcStack_54 = pcVar9;
      pcVar1 = pcStack_50;
    }
    pcStack_50 = pcVar1;
    FUN_8c02327c(&fStack_1c,ar5,ar6_01,ar7_00);
    pcStack_60 = pcVar5;
    if (cVar12 == '\0') {
      dVar8 = (double)CONCAT44(pcStack_54,pcVar9);
      pcStack_60 = pcVar9;
    }
    else {
      dVar7 = (double)CONCAT44(pcVar9,pcStack_60);
      dVar8 = (double)CONCAT44(pcStack_50,pcStack_54);
      pcStack_5c = pcVar9;
    }
    if (cVar11 == '\0') {
      fVar4 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar12 == '\0') {
      *(float *)((int)ar7 + 4) = fVar4;
      fVar4 = *(float *)((int)ar7 + 4);
      fVar10 = -40.0;
    }
    else {
      *(double *)((int)ar7 + 4) = dVar7;
      fVar4 = -40.0;
      fVar10 = 40.0;
    }
    if (cVar11 != '\0' || fVar10 <= fVar4) {
      if (cVar12 == '\0') {
        fVar4 = *(float *)((int)ar7 + 4);
        fVar10 = 40.0;
      }
      else {
        fVar4 = 40.0;
        fVar10 = NAN;
      }
      if (cVar11 == '\0' && fVar10 < fVar4) {
        pfVar3 = (float *)((int)ar7 + 4);
        if (cVar12 == '\0') {
          *pfVar3 = 40.0;
        }
        else {
          pfVar3[0] = 40.0;
          pfVar3[1] = NAN;
        }
      }
    }
    else {
      pfVar3 = (float *)((int)ar7 + 4);
      if (cVar12 == '\0') {
        *pfVar3 = -40.0;
      }
      else {
        pfVar3[0] = -40.0;
        pfVar3[1] = 40.0;
      }
    }
    object_dtor_delete(&uStack_64,0xffffffff,ar6_01,ar7_00);
    object_dtor_delete(&uStack_58,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(&uStack_4c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(&uStack_3c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_01,ar7_00);
    uVar2 = Vec3_dtor(&fStack_1c,0xffffffff,ar6_01,ar7_00);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02a2b8\n.set _FUN_8c02a2b8, _FUN_8c02a2b8_def\n");
