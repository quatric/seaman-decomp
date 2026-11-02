#include "../decls.h"
int FUN_8c036adc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined4 *ar6_00;
  float *ar6_01;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined8 in_dr6;
  float in_fr8;
  float in_xf0;
  char cVar6;
  char cVar7;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_88 [3];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [12];
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar7 = '\0';
  cVar6 = '\0';
  fVar5 = (float)in_dr6;
  ar5_00 = 1;
  FUN_8c036d3c(*(undefined4 *)(ar4 + 0x308),1,ar6,ar7);
  FUN_8c036d2c(ar4 + 0xd2c,ar5_00,ar6,ar7);
  iVar1 = get_field_2fc_036d20(ar4 + 0xd2c,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = ar4 + 0x50;
    vec3_copy_8c02b5fc(auStack_40,iVar1,ar6,ar7);
    iVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x144))(ar4,iVar1,ar6,ar7);
    FUN_8c023484(iVar1 + 0xd8,auStack_40,ar6,ar7,auStack_50);
    Vec3_add(ar4 + 0x30,auStack_50,ar6,ar7,auStack_60);
    Vec3_ctor_copy(&uStack_18,auStack_60,ar6,ar7);
    Vec3_dtor(auStack_60,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_50,0xffffffff,ar6,ar7);
    object_dtor_delete(auStack_40,0xffffffff,ar6,ar7);
    if (cVar7 != '\0') {
      uStack_18 = uStack_c;
    }
    ar6_00 = &uStack_90;
    puVar2 = auStack_24;
    FUN_8c256294(0,puVar2,ar6_00,ar7);
    Vec3_ctor_zero(&fStack_34,puVar2,ar6_00,ar7);
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_90,fVar5);
      fStack_30 = in_xf0;
    }
    else {
      dVar4 = (double)CONCAT44(uStack_8c,uStack_90);
      fStack_30 = fVar5;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_18,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(uStack_14,uStack_18);
    }
    if (cVar6 == '\0') {
      fStack_34 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_34 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_8c,in_fr8);
    }
    else {
      dVar4 = (double)CONCAT44(auStack_88[0],uStack_8c);
      fStack_34 = fStack_30;
      fStack_30 = in_fr8;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0xbf800000,fVar3);
    }
    else {
      dVar4 = 1.65674406927311e-311;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_14,fVar3);
    }
    else {
      dVar4 = (double)CONCAT44(uStack_10,uStack_14);
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      fStack_30 = fVar3;
      fVar5 = fStack_28;
    }
    fStack_28 = fVar5;
    uStack_2c = (int)((ulonglong)in_dr6 >> 0x20);
    FUN_8c02ace4(*(undefined4 *)(ar4 + 0x30c),puVar2,ar6_00,ar7,auStack_70);
    Vec3_set_xyz(auStack_7c,puVar2,ar6_00,ar7);
    puVar2 = auStack_70;
    ar6_01 = &fStack_34;
    FUN_8c0332b4(*(undefined4 *)(ar4 + 0x30c),&uStack_18,ar6_01,puVar2,auStack_88,auStack_7c);
    vec3_copy_8c023d8c(ar4 + 0x3fc,auStack_88,ar6_01,puVar2);
    object_dtor_delete(auStack_88,0xffffffff,ar6_01,puVar2);
    object_dtor_delete(auStack_7c,0xffffffff,ar6_01,puVar2);
    Vec3_dtor(auStack_70,0xffffffff,ar6_01,puVar2);
    Vec3_dtor(&fStack_34,0xffffffff,ar6_01,puVar2);
    iVar1 = Vec3_dtor(&uStack_18,0xffffffff,ar6_01,puVar2);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c036adc\n.set _FUN_8c036adc, _FUN_8c036adc_def\n");
