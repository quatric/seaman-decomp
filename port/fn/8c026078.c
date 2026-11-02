#include "../decls.h"
undefined4 CAnimal_m3_026078_def(int ar4,uint ar5,int ****ar6,int ****ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint ar5_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *a5;
  undefined4 *a5_00;
  undefined4 a5_01;
  int ****ar6_00;
  undefined1 *a6;
  int ****ar7_00;
  undefined1 *a7;
  int ****a6_00;
  float fVar7;
  ulonglong in_dr0;
  double dVar8;
  float fVar9;
  undefined4 in_fr3;
  double dVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [4];
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  int iStack_9c;
  int ***pppiStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int ***pppiStack_68;
  uint uStack_64;
  int ***pppiStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int ***pppiStack_44;
  uint uStack_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined8 uStack_30;
  int iStack_28;
  int iStack_24;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c030e10(auStack_3c,ar5,ar6,ar7);
  FUN_8c030e5c(&uStack_ac,uVar6,ar6_00,ar7_00);
  uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar6,ar6_00,ar7_00);
  a6_00 = (int ****)(int)(short)uVar2;
  uVar3 = FUN_8c02602c(ar5,uVar6,ar6_00,ar7_00);
  ar5_00 = uVar3 & 0xffff;
  iVar4 = get_field_24_026024(ar7,uVar6,ar6_00,ar7_00);
  if ((iVar4 != 2) && (*(int *)(ar4 + 0x48c) == 0)) {
    uVar6 = ar5_00;
    ar6_00 = ar7;
    FUN_8c02c030(ar4 + 0x174,ar5_00,ar7,ar7_00);
  }
  iVar5 = FUN_8c025ff4(ar4 + 0x174,uVar6,ar6_00,ar7_00);
  if (iVar5 == 1) {
    FUN_8c02a6f8(ar4,uVar6,ar6_00,ar7_00);
  }
  uVar2 = FUN_8c025fc4(ar4 + 0x174,uVar6,ar6_00,ar7_00);
  if ((short)uVar2 == 1) {
    uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar6,ar6_00,ar7_00);
    a6_00 = (int ****)(int)(short)uVar2;
    if (a6_00 != (int ****)0x0) {
      (**(code **)(*(int *)(ar4 + 8) + 0xec))(ar4,0x8c3eb334,(int)a6_00 + -1,ar7_00);
      (**(code **)(*(int *)(ar4 + 8) + 0xe0))(ar4,0x8c3eb334,a6_00,ar7_00);
      uVar6 = ar5;
      ar6_00 = a6_00;
      (**(code **)(**(int **)(ar4 + 0x308) + 0x18))(*(int **)(ar4 + 0x308),ar5,a6_00,ar7_00);
      (**(code **)(*(int *)(ar4 + 8) + 0x5c))(ar4,uVar6,ar6_00,ar7_00);
    }
  }
  if ((ar5_00 != *(ushort *)(ar4 + 0x464)) &&
     (*(short *)(*(int *)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4) != 0)) {
    uVar6 = (uint)*(ushort *)(*(int *)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4);
    iVar5 = libgcc_divide_helper_01031c(ar5_00,uVar6,ar6_00,ar7_00);
    if (iVar5 == 0) {
      FUN_8c02ae38(ar4,uVar6,ar6_00,ar7_00);
    }
    *(short *)(ar4 + 0x464) = (short)uVar3;
  }
  if ((((*(int *)(ar4 + 0x358) != 0) || (*(int *)(ar4 + 0x354) != 0)) ||
      (*(int *)(ar4 + 0x360) != 0)) || (*(int *)(ar4 + 0x35c) != 0)) {
    if (cVar12 == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x468),in_fr3);
    }
    else {
      dVar10 = *(double *)(ar4 + 0x468);
    }
    if (cVar12 == '\0') {
      dVar8 = (double)CONCAT44(0x361b5837,(float)(int)*(char *)(ar4 + 0x46c));
    }
    else {
      dVar8 = 512.0001032005592;
    }
    if (cVar11 == '\0') {
      fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 * dVar8,0);
    }
    if (cVar12 == '\0') {
      dVar8 = (double)CONCAT44(0x40800000,fVar7);
    }
    else {
      dVar8 = 5.442117166052762e+158;
    }
    if (cVar11 == '\0') {
      fVar9 = (float)((ulonglong)dVar8 >> 0x20);
      fVar7 = SUB84(dVar8,0) * fVar9;
      dVar8 = (double)CONCAT44(fVar9,fVar7);
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + fVar7,SUB84(dVar10,0));
    }
    else {
      dVar8 = dVar8 * dVar8;
      dVar10 = dVar10 + dVar8;
    }
    fVar7 = SUB84(dVar8,0);
    if (cVar12 == '\0') {
      *(int *)(ar4 + 0x468) = (int)((ulonglong)dVar10 >> 0x20);
      fVar7 = *(float *)(ar4 + 0x468);
    }
    else {
      *(double *)(ar4 + 0x468) = dVar10;
    }
    if (cVar11 != '\0' || fVar7 <= 1.0) {
      if (cVar12 == '\0') {
        fVar7 = *(float *)(ar4 + 0x468);
      }
      in_dr0 = (ulonglong)(uint)fVar7;
      if (cVar11 == '\0' && fVar7 < 0.0) {
        in_dr0 = (ulonglong)(uint)fVar7;
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x468) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x468) = in_dr0;
        }
      }
    }
    else {
      in_dr0 = CONCAT44(0x3f800000,fVar7);
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x468) = 0x3f800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x468) = in_dr0;
      }
    }
  }
  if (iVar4 != 2) {
    iStack_58 = ar4 + 0x174;
    uStack_54 = *(undefined4 *)(ar4 + 0x30c);
    uStack_50 = *(undefined4 *)(ar4 + 0x308);
    iStack_48 = ar4 + 0x2dc;
    pppiStack_60 = (int ***)ar7;
    iStack_5c = ar4;
    pppiStack_44 = (int ***)ar6;
    uStack_40 = ar5;
    uStack_4c = (*(code *)(*ar7)[0x52])(ar7,uVar6,ar6_00,ar7_00);
    uVar2 = 1;
    FUN_8c0266d4(ar4 + 0x2dc,1,ar6_00,ar7_00);
    uVar6 = FUN_8c02602c(ar5,uVar2,ar6_00,ar7_00);
    ar6_00 = &pppiStack_60;
    uVar6 = uVar6 & 0xffff;
    FUN_8c034d48(ar4 + 0x2dc,uVar6,ar6_00,ar7_00);
  }
  iStack_78 = ar4 + 0x174;
  uStack_74 = *(undefined4 *)(ar4 + 0x30c);
  iStack_7c = ar4;
  pppiStack_68 = (int ***)ar6;
  uStack_64 = ar5;
  uStack_70 = (*(code *)(*ar7)[0x52])(ar7,uVar6,ar6_00,ar7_00);
  iStack_6c = ar4 + 0x2dc;
  (**(code **)(**(int **)(ar4 + 0x308) + 0x10))(*(int **)(ar4 + 0x308),ar7,&iStack_7c,ar7_00);
  (*(uint*)((uchar*)&uStack_30+4)) = ar4 + 0x30;
  iStack_28 = ar4 + 0x50;
  iStack_24 = ar4 + 0x5c;
  a7 = auStack_34;
  a6 = auStack_38;
  a5 = auStack_3c;
  (*(code *)(*ar7)[0x48])(ar7,a5,a6,a7);
  (*(code *)(*ar7)[0x61])(ar7,a5,a6,a7);
  uVar1 = in_dr0;
  if (cVar12 == '\0') {
    uStack_30 = CONCAT44((*(uint*)((uchar*)&uStack_30+4)),(int)(in_dr0 >> 0x20));
    uVar1 = uStack_30;
  }
  uStack_30 = uVar1;
  uStack_ac = *(undefined4 *)(ar4 + 0x308);
  iStack_a8 = (int)&uStack_30 + 4;
  uStack_a4 = get_field_140_025f70(ar4 + 0x174,a5,a6,a7);
  puStack_90 = auStack_3c;
  if (cVar12 == '\0') {
    uStack_8c = *(undefined4 *)(ar4 + 0x408);
    uStack_88 = *(undefined4 *)(ar4 + 0x40c);
  }
  else {
    uStack_8c = (undefined4)*(undefined8 *)(ar4 + 0x408);
    uStack_88 = (undefined4)*(undefined8 *)(ar4 + 0x40c);
    uStack_84 = (uint)((ulonglong)*(undefined8 *)(ar4 + 0x40c) >> 0x20);
  }
  uStack_84 = uStack_84 & 0xffffff00;
  iStack_9c = ((*(uint *)(ar4 + 0x74) & 0x70) >> 4) - 1;
  pppiStack_94 = (int ***)ar7;
  FUN_8c10277c(auStack_b8,a5,a6,a7);
  iVar4 = get_field_24_026024(ar7,a5,a6,a7);
  if (iVar4 == 0) {
    if (cVar12 == '\0') {
      uStack_b4 = CONCAT44((*(uint*)((uchar*)&uStack_b4+4)),(int)uStack_30);
    }
    else {
      uStack_b4 = uStack_30;
    }
  }
  puStack_a0 = auStack_b8;
  a5_00 = &uStack_ac;
  (**(code **)(**(int **)(ar4 + 0x30c) + 0xc))(*(int **)(ar4 + 0x30c),a5_00,a6,a7);
  FUN_8c025f44(*(undefined4 *)(ar4 + 0x30c),a5_00,a6,a7,auStack_c8);
  FUN_8c023aa0(ar4 + 0x30,auStack_c8,a6,a7);
  a5_01 = 0xffffffff;
  Vec3_dtor(auStack_c8,0xffffffff,a6,a7);
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,a5_01,a6,a7);
  FUN_8c0f79b8(ar4 + 0xa0,a5_01,a6,a7);
  uVar2 = FUN_8c025f68(ar4 + 0x1ec,a5_01,a6,a7);
  if ((char)uVar2 == '\0') {
    iVar4 = *(int *)(ar4 + 0x45c) + -1;
    *(int *)(ar4 + 0x45c) = iVar4;
    if (iVar4 < 1) {
      *(undefined4 *)(ar4 + 0x45c) = 0;
    }
  }
  else {
    iVar4 = *(int *)(ar4 + 0x45c);
    *(int *)(ar4 + 0x45c) = iVar4 + 1;
    if (0x707 < iVar4 + 1) {
      *(undefined4 *)(ar4 + 0x45c) = 0x708;
    }
  }
  iVar4 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,a5_01,a6,a7);
  if (iVar4 == 0) {
    (**(code **)(*(int *)(ar4 + 8) + 0x4c))(ar4,a5_01,a6,a7);
  }
  *(undefined4 *)(ar4 + 0x48c) = 0;
  free_if_nonnull_wrap_102790(auStack_b8,0xffffffff,a6,a7);
  FUN_8c026038(auStack_3c,0xffffffff,a6,a7);
  return 1;
}

__asm__(".globl _CAnimal_m3_026078\n.set _CAnimal_m3_026078, _CAnimal_m3_026078_def\n");
