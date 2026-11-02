#include "../decls.h"
undefined4 FUN_8c0b6604_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *a5;
  undefined4 *a6;
  undefined4 *a7;
  float fVar4;
  double in_dr0;
  double dVar5;
  float fVar6;
  undefined4 in_fr3;
  undefined4 uVar7;
  double dVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  undefined8 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  Vec3_ctor_zero(auStack_1c,ar5,ar6,ar7);
  uStack_20 = 0;
  a7 = &uStack_2c;
  a6 = &uStack_28;
  a5 = &uStack_24;
  (**(code **)(*ar5 + 0x120))(ar5,a5,a6,a7);
  iVar9 = ar4;
  iVar1 = get_field_4_05eed8(ar4,a5,a6,a7);
  if ((iVar1 != 1) && (iVar1 == 8)) {
    if (cVar11 == '\0') {
      dVar8 = (double)CONCAT44(uStack_24,in_fr3);
      dVar5 = (double)CONCAT44(0x3dcccccd,uStack_24);
    }
    else {
      dVar8 = (double)CONCAT44(uStack_20,uStack_24);
      dVar5 = 1.3411048210842936e-08;
    }
    if (cVar10 == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                               SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar5 * dVar5;
    }
    uStack_24 = SUB84(dVar8,0);
    uVar3 = (undefined4)((ulonglong)dVar8 >> 0x20);
    if (cVar11 == '\0') {
      dVar8 = (double)CONCAT44(uStack_28,uStack_24);
      dVar5 = (double)CONCAT44(0x3e4ccccd,uStack_28);
      uStack_24 = uVar3;
    }
    else {
      dVar8 = (double)CONCAT44(uStack_24,uStack_28);
      dVar5 = -7.532505548438758e-251;
      uStack_20 = uVar3;
    }
    if (cVar10 == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                               SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar5 * dVar5;
    }
    uStack_28 = SUB84(dVar8,0);
    uVar3 = (undefined4)((ulonglong)dVar8 >> 0x20);
    if (cVar11 == '\0') {
      dVar8 = (double)CONCAT44(uStack_2c,uStack_28);
      dVar5 = (double)CONCAT44(0x3dcccccd,uStack_2c);
      uStack_28 = uVar3;
    }
    else {
      dVar8 = (double)CONCAT44(uStack_28,uStack_2c);
      dVar5 = 1.3411048210842936e-08;
      uStack_24 = uVar3;
    }
    if (cVar10 == '\0') {
      fVar6 = (float)((ulonglong)dVar5 >> 0x20);
      fVar4 = SUB84(dVar5,0) * fVar6;
      dVar5 = (double)CONCAT44(fVar6,fVar4);
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - fVar4,SUB84(dVar8,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
      dVar8 = dVar8 - dVar5;
    }
    uVar3 = SUB84(dVar5,0);
    uVar2 = (undefined4)((ulonglong)dVar8 >> 0x20);
    uStack_2c = uVar2;
    if (cVar11 != '\0') {
      uStack_2c = SUB84(dVar8,0);
      uStack_28 = uVar2;
    }
    uVar2 = rand(iVar9,a5,a6,a7);
    uVar7 = SUB84(dVar8,0);
    if (cVar11 == '\0') {
      dVar8 = (double)CONCAT44(uStack_24,uVar3);
    }
    else {
      dVar8 = (double)CONCAT44(uStack_20,uStack_24);
    }
    if (cVar10 == '\0') {
      iVar9 = (int)(float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      iVar9 = (int)dVar8;
    }
    iVar1 = libgcc_divide_helper_01031c(uVar2,iVar9,a6,a7);
    if (cVar10 == '\0') {
      dVar8 = (double)CONCAT44((float)iVar1,uVar7);
    }
    else {
      dVar8 = (double)iVar1;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x40000000,uStack_24);
    }
    else {
      dVar5 = 8.15376882678406e-312;
    }
    if (cVar10 == '\0') {
      fVar6 = (float)((ulonglong)dVar5 >> 0x20);
      fVar4 = SUB84(dVar5,0) / fVar6;
      dVar5 = (double)CONCAT44(fVar6,fVar4);
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - fVar4,SUB84(dVar8,0));
    }
    else {
      dVar5 = dVar5 / dVar5;
      dVar8 = dVar8 - dVar5;
    }
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x28) = (int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x28) = dVar8;
    }
    uVar3 = rand(uVar2,iVar9,a6,a7);
    uVar2 = SUB84(dVar8,0);
    (**(code **)(*ar5 + 0x180))(ar5,iVar9,a6,a7);
    if (cVar11 == '\0') {
      uStack_3c = (double)CONCAT44(uVar3,(int)((ulonglong)dVar5 >> 0x20));
      dVar8 = (double)CONCAT44(uStack_28,SUB84(dVar5,0));
    }
    else {
      dVar8 = (double)CONCAT44(uStack_24,uStack_28);
      uStack_3c = dVar5;
    }
    if (cVar10 == '\0') {
      iVar9 = (int)(float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      iVar9 = (int)dVar8;
    }
    uVar3 = (*(uint*)((uchar*)&uStack_3c+4));
    iVar1 = libgcc_divide_helper_01031c((*(uint*)((uchar*)&uStack_3c+4)),iVar9,a6,a7);
    if (cVar10 == '\0') {
      dVar8 = (double)CONCAT44((float)iVar1,uVar2);
    }
    else {
      dVar8 = (double)iVar1;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x42c80000,(undefined4)uStack_3c);
    }
    else {
      dVar5 = 6.28664306982812e-312;
    }
    if (cVar10 == '\0') {
      fVar6 = (float)((ulonglong)dVar5 >> 0x20);
      fVar4 = SUB84(dVar5,0) / fVar6;
      dVar5 = (double)CONCAT44(fVar6,fVar4);
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * fVar4,SUB84(dVar8,0));
    }
    else {
      dVar5 = dVar5 / dVar5;
      dVar8 = dVar8 * dVar5;
    }
    uVar2 = SUB84(dVar5,0);
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x2c) = (int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x2c) = dVar8;
    }
    uVar3 = rand(uVar3,iVar9,a6,a7);
    uVar7 = SUB84(dVar8,0);
    if (cVar11 == '\0') {
      dVar8 = (double)CONCAT44(uStack_2c,uVar2);
    }
    else {
      dVar8 = (double)CONCAT44(uStack_28,uStack_2c);
    }
    if (cVar10 == '\0') {
      iVar9 = (int)(float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      iVar9 = (int)dVar8;
    }
    iVar9 = libgcc_divide_helper_01031c(uVar3,iVar9,a6,a7);
    if (cVar10 == '\0') {
      dVar8 = (double)CONCAT44((float)iVar9,uVar7);
    }
    else {
      dVar8 = (double)iVar9;
    }
    if (cVar11 == '\0') {
      in_dr0 = (double)CONCAT44(0x40000000,uStack_2c);
    }
    else {
      in_dr0 = 8.15376882678406e-312;
    }
    if (cVar10 == '\0') {
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      fVar4 = SUB84(in_dr0,0) / fVar6;
      in_dr0 = (double)CONCAT44(fVar6,fVar4);
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - fVar4,SUB84(dVar8,0));
    }
    else {
      in_dr0 = in_dr0 / in_dr0;
      dVar8 = dVar8 - in_dr0;
    }
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x30) = (int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x30) = dVar8;
    }
  }
  (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x28,a6,a7);
  if (cVar11 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x2c));
  }
  if (cVar10 != '\0' || SUB84(in_dr0,0) <= (float)((ulonglong)in_dr0 >> 0x20)) {
    (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x28,a6,a7);
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x2c) = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x2c) = in_dr0;
    }
  }
  uVar3 = Vec3_dtor(auStack_1c,0xffffffff,a6,a7);
  return uVar3;
}

__asm__(".globl _FUN_8c0b6604\n.set _FUN_8c0b6604, _FUN_8c0b6604_def\n");
