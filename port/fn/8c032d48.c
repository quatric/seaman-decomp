#include "../decls.h"
undefined4 FUN_8c032d48_def(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int ar6_00;
  int ar7_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double in_dr0;
  double dVar6;
  float fVar8;
  ulonglong uVar7;
  undefined4 in_fr3;
  double dVar9;
  undefined8 in_xd0;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 auStack_24 [5];
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar3 = 1;
  iVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  Vec3_set_zero(&fStack_30,iVar2,ar6_00,ar7_00);
  iVar1 = *(int *)(ar4 + 0x1e8);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      Vec3_scale(ar7,&DAT_8c132bfc,ar6_00,ar7_00,auStack_40);
      Vec3_assign(auStack_24,auStack_40,ar6_00,ar7_00);
      Vec3_dtor(auStack_40,0xffffffff,ar6_00,ar7_00);
      Vec3_scale(auStack_24,&DAT_8c132c00,ar6_00,ar7_00,auStack_50);
      Vec3_add(ar6,auStack_50,ar6_00,ar7_00,auStack_60);
      Vec3_assign(ar4 + 0x54,auStack_60,ar6_00,ar7_00);
      Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_50,0xffffffff,ar6_00,ar7_00);
      FUN_8c031bb4(ar4,ar5,ar4 + 0x54,ar7_00);
      *(int *)(ar4 + 0x1e8) = *(int *)(ar4 + 0x1e8) + 1;
    case 1:
      iVar2 = FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7_00);
      ar6_00 = ar5;
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(int *)(ar4 + 0x1e8) = *(int *)(ar4 + 0x1e8) + 1;
      }
      break;
    case 2:
      Vec3_set_xyz(auStack_6c,iVar2,ar6_00,ar7_00);
      ar7_00 = ar4 + 0x14;
      FUN_8c0332b4(ar4,ar5,ar6,ar7_00,auStack_78,auStack_6c);
      vec3_copy_8c023d8c(ar4 + 0x1ec,auStack_78,ar6,ar7_00);
      object_dtor_delete(auStack_78,0xffffffff,ar6,ar7_00);
      object_dtor_delete(auStack_6c,0xffffffff,ar6,ar7_00);
      *(int *)(ar4 + 0x1e8) = *(int *)(ar4 + 0x1e8) + 1;
      ar6_00 = ar6;
    case 3:
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x41200000,*(undefined4 *)(ar4 + 0x1ec));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x1ec);
        dVar6 = 4.33426965481473e-312;
      }
      if (cVar11 == '\0') {
        fStack_30 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fStack_30 = SUB84(dVar6 / dVar6,0);
      }
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x41200000,*(undefined4 *)(ar4 + 0x1f0));
      }
      else {
        fStack_30 = (float)in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x1f0);
        dVar6 = 4.33426965481473e-312;
      }
      if (cVar11 == '\0') {
        fStack_2c = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fStack_2c = SUB84(dVar6 / dVar6,0);
      }
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x41200000,*(undefined4 *)(ar4 + 500));
      }
      else {
        fStack_2c = (float)in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 500);
        dVar6 = 4.33426965481473e-312;
      }
      if (cVar11 == '\0') {
        fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      fStack_28 = fVar5;
      if (cVar12 != '\0') {
        fStack_28 = (float)in_xd0;
        auStack_24[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      vec3_copy_8c02b5fc(auStack_84,&fStack_30,ar6_00,ar7_00);
      FUN_8c023484(ar4 + 0x14,auStack_84,ar6_00,ar7_00,auStack_94);
      Vec3_assign(ar4 + 0x14,auStack_94,ar6_00,ar7_00);
      Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7_00);
      object_dtor_delete(auStack_84,0xffffffff,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        fVar5 = *(float *)(ar4 + 0x1f8);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x1f8);
      }
      if (cVar11 == '\0') {
        fVar5 = fVar5 + 1.0;
      }
      else {
        fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) + (double)CONCAT44(0x3f800000,fVar5),0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x1f8) = fVar5;
        uVar7 = CONCAT44(0x41200000,*(undefined4 *)(ar4 + 0x1f8));
      }
      else {
        *(undefined8 *)(ar4 + 0x1f8) = in_xd0;
        uVar7 = 0xcc41200000;
      }
      if (cVar11 != '\0' || (float)(uVar7 >> 0x20) <= (float)uVar7) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x1f8) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x1f8) = uVar7 & 0xffffffff;
        }
        *(int *)(ar4 + 0x1e8) = *(int *)(ar4 + 0x1e8) + 1;
      }
      break;
    case 4:
      Vec3_add(ar5,ar6,ar6_00,ar7_00,auStack_a4);
      FUN_8c023c30(auStack_a4,&DAT_8c132c04,ar6_00,ar7_00,auStack_b4);
      Vec3_assign(ar4 + 0x54,auStack_b4,ar6_00,ar7_00);
      Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7_00);
      ar6_00 = ar4 + 0x54;
      FUN_8c031bb4(ar4,ar5,ar6_00,ar7_00);
      *(int *)(ar4 + 0x1e8) = *(int *)(ar4 + 0x1e8) + 1;
    case 5:
      iVar2 = ar4 + 0x54;
      FUN_8c022fc0(ar5,iVar2,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        dVar6 = (double)CONCAT44(0x42480000,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = -8.341321687789945e-251;
      }
      if (cVar11 == '\0') {
        fVar8 = (float)((ulonglong)dVar6 >> 0x20);
        fVar5 = SUB84(dVar6,0) * fVar8;
        dVar6 = (double)CONCAT44(fVar8,fVar5);
        bVar10 = fVar5 < (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        dVar6 = dVar6 * dVar6;
        bVar10 = dVar6 < in_dr0;
      }
      if (!bVar10) {
        FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(in_dr0,0));
        }
        else {
          dVar9 = *(double *)(ar4 + 0x28);
        }
        fVar5 = (float)((ulonglong)dVar6 >> 0x20);
        if (cVar11 == '\0') {
          dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) / fVar5,SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 / dVar6;
        }
        if (cVar11 == '\0') {
          fVar5 = 1.0 - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84((double)CONCAT44(fVar5,0x3f800000) - dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar5);
        }
        else {
          dVar6 = *(double *)(ar4 + 0x28);
        }
        if (cVar11 == '\0') {
          dVar6 = (double)(ulonglong)(uint)(SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20));
        }
        else {
          dVar6 = dVar6 * dVar6;
        }
        iVar2 = ar6;
        if (cVar12 == '\0') {
          *(int *)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
      }
      uVar4 = SUB84(dVar6,0);
      FUN_8c031c64(ar4,iVar2,ar6_00,ar7_00);
      iVar2 = FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7_00);
      ar6_00 = ar5;
      if (iVar2 == 0) {
        *(int *)(ar4 + 0x1e8) = *(int *)(ar4 + 0x1e8) + 1;
        *(undefined4 *)(ar4 + 0x40) = 3;
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar4);
        }
      }
      break;
    case 6:
      iVar2 = ar6;
      FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        dVar6 = (double)CONCAT44(0x42480000,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 5.2386907559463314e-11;
      }
      if (cVar11 == '\0') {
        fVar8 = (float)((ulonglong)dVar6 >> 0x20);
        fVar5 = SUB84(dVar6,0) * fVar8;
        dVar6 = (double)CONCAT44(fVar8,fVar5);
        bVar10 = fVar5 < (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        dVar6 = dVar6 * dVar6;
        bVar10 = dVar6 < in_dr0;
      }
      if (!bVar10) {
        iVar2 = ar6;
        FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(in_dr0,0));
        }
        else {
          dVar9 = *(double *)(ar4 + 0x28);
        }
        fVar5 = (float)((ulonglong)dVar6 >> 0x20);
        if (cVar11 == '\0') {
          dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) / fVar5,SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 / dVar6;
        }
        if (cVar11 == '\0') {
          fVar5 = 1.0 - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84((double)CONCAT44(fVar5,0x3f800000) - dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar5);
        }
        else {
          dVar6 = *(double *)(ar4 + 0x28);
        }
        if (cVar11 == '\0') {
          fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 * dVar6,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 0x28) = fVar5;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
      }
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        uVar7 = 0x8c031c643dcccccd;
      }
      if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
        if (cVar12 == '\0') {
          uVar7 = CONCAT44(0x3dcccccd,(float)uVar7);
          *(undefined4 *)(ar4 + 0x28) = 0x3dcccccd;
        }
        else {
          uVar7 = 0x8c031c643dcccccd;
          *(undefined8 *)(ar4 + 0x28) = 0x8c031c643dcccccd;
        }
      }
      FUN_8c031c64(ar4,iVar2,ar6_00,ar7_00);
      ar6_00 = ar5;
      FUN_8c031764(ar4,ar6,ar5,ar7_00);
      FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        uVar7 = uVar7 >> 0x20;
      }
      if (cVar11 != '\0' || (float)uVar7 <= 1.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar7 & 0xffffffff;
        }
        uVar3 = 0;
        *(undefined4 *)(ar4 + 0x1e8) = 0;
      }
    }
  }
  object_dtor_delete(&fStack_30,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c032d48\n.set _FUN_8c032d48, _FUN_8c032d48_def\n");
