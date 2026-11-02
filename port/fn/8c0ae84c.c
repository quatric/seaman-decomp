#include "../decls.h"
uint FUN_8c0ae84c_def(int ar4,undefined8 *ar5,code *ar6,int ar7)

{
  undefined8 *puVar1;
  double *pdVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined1 *ar4_00;
  int ar4_01;
  undefined4 uVar5;
  undefined8 *ar5_00;
  code *ar6_00;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  cVar12 = '\0';
  cVar11 = '\0';
  iVar6 = 0;
  ar6_00 = ar6;
  Vec3_ctor_zero(&fStack_30,ar5,ar6,ar7);
  uVar4 = 0;
  for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
    ar6_00 = (code *)0x4c;
    if (*(int *)(iVar8 * 0x4c + -0x73d7a64c) == 0) {
      uVar4 = rand(uVar4,rand,0x4c,ar7);
      uVar5 = 0x1e;
      iVar7 = libgcc_divide_helper_01031c(uVar4,0x1e,ar6_00,ar7);
      if (iVar7 == 0) {
        for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
          uVar5 = 0x8c285974;
          *(undefined1 *)(iVar8 * 0x4c + iVar7 * 4 + -0x73d7a659) = 1;
        }
        *(undefined4 *)(iVar8 * 0x4c + -0x73d7a648) = 10;
        *(undefined4 *)(iVar8 * 0x4c + -0x73d7a64c) = 1;
        FUN_8c023de0(auStack_3c,uVar5,ar6_00,ar7);
        FUN_8c023e04(iVar8 * 0x4c + -0x73d7a668,auStack_3c,ar6_00,ar7);
        ar4_00 = auStack_3c;
        free_if_nonnull_wrap_016ac4(ar4_00,0xffffffff,ar6_00,ar7);
        puVar1 = (undefined8 *)(iVar8 * 0x4c + -0x73d7a68c);
        if (cVar12 == '\0') {
          *(undefined4 *)puVar1 = *(undefined4 *)ar5;
        }
        else {
          *puVar1 = *ar5;
        }
        puVar1 = (undefined8 *)(iVar8 * 0x4c + -0x73d7a688);
        if (cVar12 == '\0') {
          *(undefined4 *)puVar1 = *(undefined4 *)((int)ar5 + 4);
        }
        else {
          *puVar1 = *(undefined8 *)((int)ar5 + 4);
        }
        puVar1 = (undefined8 *)(iVar8 * 0x4c + -0x73d7a684);
        ar5_00 = ar5 + 1;
        if (cVar12 == '\0') {
          *(undefined4 *)puVar1 = *(undefined4 *)ar5_00;
        }
        else {
          *puVar1 = *ar5_00;
        }
        uVar4 = rand(ar4_00,ar5_00,ar6_00,ar7);
        iVar7 = libgcc_divide_helper_01031c(uVar4,0x14,ar6_00,ar7);
        if (cVar12 == '\0') {
          dVar10 = (double)CONCAT44(0x42c80000,(float)iVar7);
        }
        else {
          dVar10 = 7.64472037604589e-312;
        }
        if (cVar11 == '\0') {
          fStack_30 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fStack_30 = SUB84(dVar10 / dVar10,0);
        }
        if (cVar12 != '\0') {
          fStack_30 = (float)in_xd0;
          fStack_2c = (float)((ulonglong)in_xd0 >> 0x20);
        }
        uVar4 = rand(rand,iVar7,ar6_00,ar7);
        uVar5 = 2;
        iVar7 = libgcc_divide_helper_01031c(uVar4,2,ar6_00,ar7);
        if (iVar7 == 0) {
          if (cVar12 == '\0') {
            dVar10 = (double)CONCAT44(0xbf800000,fStack_30);
          }
          else {
            in_xd0 = CONCAT44(fStack_2c,fStack_30);
            dVar10 = 6.04234156954332e-312;
          }
          if (cVar11 == '\0') {
            fStack_30 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fStack_30 = SUB84(dVar10 * dVar10,0);
          }
          if (cVar12 != '\0') {
            fStack_30 = (float)in_xd0;
            fStack_2c = (float)((ulonglong)in_xd0 >> 0x20);
          }
        }
        uVar4 = rand(uVar4,uVar5,ar6_00,ar7);
        uVar5 = 0x14;
        iVar7 = libgcc_divide_helper_01031c(uVar4,0x14,ar6_00,ar7);
        if (cVar12 == '\0') {
          dVar10 = (double)CONCAT44(0x42c80000,(float)iVar7);
        }
        else {
          dVar10 = 7.64472037604589e-312;
        }
        if (cVar11 == '\0') {
          fStack_2c = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fStack_2c = SUB84(dVar10 / dVar10,0);
        }
        if (cVar12 != '\0') {
          fStack_2c = (float)in_xd0;
          fStack_28 = (float)((ulonglong)in_xd0 >> 0x20);
        }
        uVar4 = rand(uVar4,uVar5,ar6_00,ar7);
        uVar5 = 2;
        iVar7 = libgcc_divide_helper_01031c(uVar4,2,ar6_00,ar7);
        if (iVar7 == 0) {
          if (cVar12 == '\0') {
            dVar10 = (double)CONCAT44(0xbf800000,fStack_2c);
          }
          else {
            in_xd0 = CONCAT44(fStack_28,fStack_2c);
            dVar10 = 6.04234156954332e-312;
          }
          if (cVar11 == '\0') {
            fStack_2c = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fStack_2c = SUB84(dVar10 * dVar10,0);
          }
          if (cVar12 != '\0') {
            fStack_2c = (float)in_xd0;
            fStack_28 = (float)((ulonglong)in_xd0 >> 0x20);
          }
        }
        uVar4 = rand(uVar4,uVar5,ar6_00,ar7);
        uVar5 = 100;
        iVar7 = libgcc_divide_helper_01031c(uVar4,100,ar6_00,ar7);
        if (cVar12 == '\0') {
          dVar10 = (double)CONCAT44(0x42c80000,(float)iVar7);
        }
        else {
          dVar10 = 7.64472037604589e-312;
        }
        if (cVar11 == '\0') {
          fVar9 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar10 / dVar10,0);
        }
        fStack_28 = fVar9;
        if (cVar12 != '\0') {
          fStack_28 = (float)in_xd0;
          uStack_24 = (undefined4)((ulonglong)in_xd0 >> 0x20);
        }
        uVar4 = rand(uVar4,uVar5,ar6_00,ar7);
        uVar5 = 2;
        iVar7 = libgcc_divide_helper_01031c(uVar4,2,ar6_00,ar7);
        if (iVar7 == 0) {
          if (cVar12 == '\0') {
            dVar10 = (double)CONCAT44(0xbf800000,fStack_28);
          }
          else {
            in_xd0 = CONCAT44(uStack_24,fStack_28);
            dVar10 = 6.04234156954332e-312;
          }
          if (cVar11 == '\0') {
            fVar9 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar9 = SUB84(dVar10 * dVar10,0);
          }
          fStack_28 = fVar9;
          if (cVar12 != '\0') {
            fStack_28 = (float)in_xd0;
            uStack_24 = (undefined4)((ulonglong)in_xd0 >> 0x20);
          }
        }
        FUN_8c02ace4(ar4 + 0x53c,uVar5,ar6_00,ar7,auStack_4c);
        Vec3_assign(iVar8 * 0x4c + -0x73d7a67c,auStack_4c,ar6_00,ar7);
        Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7);
        pfVar3 = &fStack_30;
        FUN_8c023aa0(iVar8 * 0x4c + -0x73d7a67c,pfVar3,ar6_00,ar7);
        iVar7 = iVar8 * 0x4c + -0x73d7a67c;
        Vec3_length(iVar7,pfVar3,ar6_00,ar7);
        uVar4 = rand(iVar7,pfVar3,ar6_00,ar7);
        uVar5 = 10;
        iVar7 = libgcc_divide_helper_01031c(uVar4,10,ar6_00,ar7);
        pdVar2 = (double *)(iVar8 * 0x4c + -0x73d7a66c);
        if (cVar11 == '\0') {
          dVar10 = (double)CONCAT44((float)iVar7,fVar9);
        }
        else {
          dVar10 = (double)iVar7;
        }
        if (cVar12 == '\0') {
          *(int *)pdVar2 = (int)((ulonglong)dVar10 >> 0x20);
        }
        else {
          *pdVar2 = dVar10;
        }
        ar4_01 = ar4 + 0x53c;
        iVar7 = get_field_314_0b58d0(ar4_01,uVar5,ar6_00,ar7);
        if (iVar7 < 1) {
          ar6_00 = rand;
          uVar4 = rand(ar4_01,iVar7,rand,ar7);
          uVar4 = libgcc_divide_helper_01031c(uVar4,3,ar6_00,ar7);
          *(undefined4 *)(iVar8 * 0x4c + -0x73d7a644) = uVar4;
        }
        else {
          uVar4 = rand(ar4_01,rand,ar6_00,ar7);
          ar6_00 = (code *)libgcc_divide_helper_01031c(uVar4,6,ar6_00,ar7);
          *(code **)(iVar8 * 0x4c + -0x73d7a644) = ar6_00;
          iVar7 = get_field_124_027930(ar4 + 0x53c,0x53c,ar6_00,ar7);
          if ((iVar7 == 2) && (*(int *)(iVar8 * 0x4c + -0x73d7a644) < 3)) {
            iVar7 = iVar8 * 0x4c;
            ar7 = iVar7 + -0x73d7a68c;
            ar6_00 = (code *)(*(int *)(iVar7 + -0x73d7a644) + 3);
            *(code **)(iVar7 + -0x73d7a644) = ar6_00;
          }
        }
      }
    }
    uVar4 = 0x4c;
    if (*(int *)(iVar8 * 0x4c + -0x73d7a64c) == 1) break;
  }
  for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
    if (0 < *(int *)(iVar8 * 0x4c + -0x73d7a64c)) {
      if (*(int *)(ar4 + 0x1710) < (int)ar6) {
        *(int *)(iVar8 * 0x4c + -0x73d7a64c) =
             *(int *)(iVar8 * 0x4c + -0x73d7a64c) + *(int *)(iVar8 * 0x4c + -0x73d7a648);
      }
      else if (1 < *(int *)(iVar8 * 0x4c + -0x73d7a64c)) {
        ar6_00 = (code *)0x40;
        *(int *)(iVar8 * 0x4c + -0x73d7a64c) =
             *(int *)(iVar8 * 0x4c + -0x73d7a64c) + *(int *)(iVar8 * 0x4c + -0x73d7a648);
      }
      pfVar3 = (float *)(iVar8 * 0x4c + -0x73d7a668);
      puVar1 = (undefined8 *)(iVar8 * 0x4c + -0x73d7a668);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)puVar1);
      }
      else {
        in_xd0 = *puVar1;
        dVar10 = 6.71062932991538e-312;
      }
      if (cVar11 == '\0') {
        fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *pfVar3 = fVar9;
      }
      else {
        *(undefined8 *)pfVar3 = in_xd0;
      }
      pfVar3 = (float *)(iVar8 * 0x4c + -0x73d7a664);
      puVar1 = (undefined8 *)(iVar8 * 0x4c + -0x73d7a664);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)puVar1);
      }
      else {
        in_xd0 = *puVar1;
        dVar10 = 6.71062932991538e-312;
      }
      if (cVar11 == '\0') {
        fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *pfVar3 = fVar9;
      }
      else {
        *(undefined8 *)pfVar3 = in_xd0;
      }
      pfVar3 = (float *)(iVar8 * 0x4c + -0x73d7a660);
      puVar1 = (undefined8 *)(iVar8 * 0x4c + -0x73d7a660);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)puVar1);
      }
      else {
        in_xd0 = *puVar1;
        dVar10 = 6.71062932991538e-312;
      }
      if (cVar11 == '\0') {
        fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar12 == '\0') {
        *pfVar3 = fVar9;
      }
      else {
        *(undefined8 *)pfVar3 = in_xd0;
      }
      Vec3_scale(iVar8 * 0x4c + -0x73d7a67c,iVar8 * 0x4c + -0x73d7a66c,ar6_00,ar7,auStack_5c);
      FUN_8c023aa0(iVar8 * 0x4c + -0x73d7a68c,auStack_5c,ar6_00,ar7);
      Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7);
      if (0xfe < *(int *)(iVar8 * 0x4c + -0x73d7a64c)) {
        *(undefined4 *)(iVar8 * 0x4c + -0x73d7a64c) = 0xff;
        *(undefined4 *)(iVar8 * 0x4c + -0x73d7a648) = 0xfffffff6;
      }
      if (*(int *)(iVar8 * 0x4c + -0x73d7a64c) < 1) {
        *(undefined4 *)(iVar8 * 0x4c + -0x73d7a64c) = 0;
        *(undefined4 *)(iVar8 * 0x4c + -0x73d7a648) = 10;
        FUN_8c023de0(auStack_68,0x4c,ar6_00,ar7);
        FUN_8c023e04(iVar8 * 0x4c + -0x73d7a668,auStack_68,ar6_00,ar7);
        free_if_nonnull_wrap_016ac4(auStack_68,0xffffffff,ar6_00,ar7);
      }
      for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
        *(char *)(iVar8 * 0x4c + iVar7 * 4 + -0x73d7a659) =
             (char)*(undefined4 *)(iVar8 * 0x4c + -0x73d7a64c);
      }
    }
  }
  for (iVar8 = 0; iVar8 < 10; iVar8 = iVar8 + 1) {
    if (*(int *)(ar4 + 0x1710) < (int)ar6) {
      ar7 = 4;
      ar6_00 = (code *)(iVar8 * 0x4c + -0x73d7a65c);
      FUN_8c016464(iVar8 * 0x44 + ar4 + 0x9c4,&DAT_8c13b474,ar6_00,4);
    }
    else if (*(int *)(iVar8 * 0x4c + -0x73d7a64c) < 2) {
      iVar6 = iVar6 + 1;
      *(undefined4 *)(iVar8 * 0x4c + -0x73d7a64c) = 0;
    }
    else {
      ar7 = 4;
      ar6_00 = (code *)(iVar8 * 0x4c + -0x73d7a65c);
      FUN_8c016464(iVar8 * 0x44 + ar4 + 0x9c4,&DAT_8c13b474,ar6_00,4);
    }
  }
  *(int *)(ar4 + 0x1710) = *(int *)(ar4 + 0x1710) + 1;
  if (iVar6 == 10) {
    *(undefined4 *)(ar4 + 0x170c) = 0;
    *(undefined4 *)(ar4 + 0x1710) = 0;
  }
  Vec3_dtor(&fStack_30,0xffffffff,ar6_00,ar7);
  return (uint)(iVar6 == 10);
}

__asm__(".globl _FUN_8c0ae84c\n.set _FUN_8c0ae84c, _FUN_8c0ae84c_def\n");
