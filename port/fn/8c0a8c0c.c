#include "../decls.h"
undefined4 FUN_8c0a8c0c_def(int ar4,undefined4 ar5,undefined8 *ar6,float *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar6_00;
  undefined8 *puVar3;
  undefined1 *ar7_00;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 in_dr0;
  double dVar7;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar5 = 1;
  iVar2 = *(int *)(ar4 + 300);
  if ((iVar2 < 5) && (-1 < iVar2)) {
    puVar3 = ar6;
                    
    switch(iVar2) {
    case 0:
      *(undefined4 *)(ar4 + 0x230) = 0;
      Vec3_assign(ar4 + 0x54,ar5,ar6,ar7);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x42480000,*(undefined4 *)((int)ar6 + 4));
      }
      else {
        in_xd0 = *(undefined8 *)((int)ar6 + 4);
        dVar7 = 6.37148145623644e-312;
      }
      if (cVar8 == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x58) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x58) = in_xd0;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 1:
      FUN_8c03f460(auStack_24,ar6,puVar3,ar7);
      ar7_00 = auStack_24;
      ar6_00 = ar4 + 0x54;
      iVar2 = FUN_8c0a8f94(ar4,ar5,ar6_00,ar7_00);
      free_if_nonnull_wrap_102790(auStack_24,0xffffffff,ar6_00,ar7_00);
      if (iVar2 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 2:
      iVar2 = *(int *)(ar4 + 0x2198);
      pfVar4 = ar7;
      if (iVar2 == 1) {
        Vec3_assign(ar4 + 0x54,ar5,ar6,ar7);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x42480000,*(undefined4 *)(ar6 + 1));
        }
        else {
          in_xd0 = ar6[1];
          dVar7 = -7.956827045177258e-251;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(ar4 + 0x5c) = fVar6;
          in_dr0 = CONCAT44(*(undefined4 *)((int)ar6 + 4),fVar6);
          *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)ar6 + 4);
          ar6 = puVar3;
        }
        else {
          *(undefined8 *)(ar4 + 0x5c) = in_xd0;
          in_dr0 = *(undefined8 *)((int)ar6 + 4);
          *(undefined8 *)(ar4 + 0x58) = in_dr0;
          ar6 = puVar3;
        }
      }
      else if (iVar2 == 2) {
        Vec3_assign(ar4 + 0x54,ar5,ar6,ar7);
        if (cVar9 == '\0') {
          *(undefined4 *)(ar4 + 0x5c) = 0x42480000;
          in_dr0 = CONCAT44(*(undefined4 *)((int)ar6 + 4),(int)in_dr0);
          *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)ar6 + 4);
          ar6 = puVar3;
        }
        else {
          *(undefined8 *)(ar4 + 0x5c) = 0x64e365c342480000;
          in_dr0 = *(undefined8 *)((int)ar6 + 4);
          *(undefined8 *)(ar4 + 0x58) = in_dr0;
          ar6 = puVar3;
        }
      }
      else if (iVar2 == 3) {
        Vec3_assign(ar4 + 0x54,ar5,ar6,ar7);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x42480000,*(undefined4 *)ar6);
        }
        else {
          in_xd0 = *ar6;
          dVar7 = 9.825472717289265e+177;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(ar4 + 0x54) = fVar6;
          in_dr0 = CONCAT44(*(undefined4 *)((int)ar6 + 4),fVar6);
          *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)ar6 + 4);
          ar6 = puVar3;
        }
        else {
          *(undefined8 *)(ar4 + 0x54) = in_xd0;
          in_dr0 = *(undefined8 *)((int)ar6 + 4);
          *(undefined8 *)(ar4 + 0x58) = in_dr0;
          ar6 = puVar3;
        }
      }
      else if (iVar2 == 4) {
        Vec3_assign(ar4 + 0x54,ar5,ar6,ar7);
        if (cVar9 == '\0') {
          *(undefined4 *)(ar4 + 0x54) = 0x42480000;
          in_dr0 = CONCAT44(*(undefined4 *)((int)ar6 + 4),(int)in_dr0);
          *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)((int)ar6 + 4);
          ar6 = puVar3;
        }
        else {
          *(undefined8 *)(ar4 + 0x54) = 0x64e365c342480000;
          in_dr0 = *(undefined8 *)((int)ar6 + 4);
          *(undefined8 *)(ar4 + 0x58) = in_dr0;
          ar6 = puVar3;
        }
      }
      uVar1 = ar5;
      Vec3_sub(ar4 + 0x54,ar5,ar6,pfVar4,auStack_34);
      uVar1 = Vec3_length(auStack_34,uVar1,ar6,pfVar4);
      Vec3_assign(ar4 + 0x14,uVar1,ar6,pfVar4);
      Vec3_dtor(auStack_34,0xffffffff,ar6,pfVar4);
      FUN_8c022fc0(ar5,ar4 + 0x54,ar6,pfVar4);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x40a00000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar7 = 6.3713441689111e-312;
        in_xd0 = in_dr0;
      }
      if (cVar8 == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 3:
      iVar2 = *(int *)(ar4 + 0x2198);
      if (iVar2 == 1) {
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x41900000,*ar7);
        }
        else {
          in_xd0 = *(undefined8 *)ar7;
          dVar7 = 1.18886109352276e-311;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          *ar7 = fVar6;
        }
        else {
          *(undefined8 *)ar7 = in_xd0;
        }
      }
      else if (iVar2 == 2) {
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x41900000,*ar7);
        }
        else {
          in_xd0 = *(undefined8 *)ar7;
          dVar7 = 5.633371060283568e+86;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          *ar7 = fVar6;
        }
        else {
          *(undefined8 *)ar7 = in_xd0;
        }
      }
      else if (iVar2 == 3) {
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x41900000,ar7[2]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar7 + 2);
          dVar7 = 5.94420282588366e+86;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 == '\0') {
          ar7[2] = fVar6;
        }
        else {
          *(undefined8 *)(ar7 + 2) = in_xd0;
        }
      }
      else if (iVar2 == 4) {
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x41900000,ar7[2]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar7 + 2);
          dVar7 = 6.255034591483752e+86;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 - dVar7,0);
        }
        if (cVar9 == '\0') {
          ar7[2] = fVar6;
        }
        else {
          *(undefined8 *)(ar7 + 2) = in_xd0;
        }
      }
      *(int *)(ar4 + 0x230) = *(int *)(ar4 + 0x230) + 1;
      if (4 < *(int *)(ar4 + 0x230)) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 4:
      *(undefined4 *)(ar4 + 0x28) = 0;
      *(undefined4 *)(ar4 + 0x18) = 0;
      Vec3_length(ar4 + 0x14,ar5,ar6,ar7);
      FUN_8c023d7c(ar4 + 0x21a8,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x230) = 0;
      *(undefined4 *)(ar4 + 300) = 0;
      uVar5 = 0;
      *(undefined4 *)(ar4 + 0x2198) = 5;
      *(undefined4 *)(ar4 + 0x219c) = 0;
    }
  }
  return uVar5;
}

__asm__(".globl _FUN_8c0a8c0c\n.set _FUN_8c0a8c0c, _FUN_8c0a8c0c_def\n");
