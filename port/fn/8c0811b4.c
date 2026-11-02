#include "../decls.h"
undefined4 FUN_8c0811b4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 ar7_00;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  float fVar13;
  double dVar14;
  double in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  double dVar15;
  double dVar16;
  bool bVar17;
  undefined4 in_PR;
  char cVar18;
  char cVar19;
  undefined1 auStack_fc [16];
  undefined1 auStack_ec [12];
  undefined1 auStack_e0 [12];
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar19 = '\0';
  cVar18 = '\0';
  uStack_10 = 1;
  uVar11 = 1;
  uVar7 = ar5;
  iVar2 = ar6;
  uStack_14 = in_PR;
  Vec3_set_zero(&uStack_20,ar5,ar6,ar7);
  pcVar8 = Vec3_set_zero;
  Vec3_set_zero(&fStack_2c,uVar7,ar6,Vec3_set_zero);
  pcVar4 = Vec3_ctor_zero;
  Vec3_ctor_zero(auStack_3c,Vec3_ctor_zero,ar6,pcVar8);
  Vec3_ctor_zero(auStack_4c,pcVar4,ar6,pcVar8);
  if (cVar19 == '\0') {
    dVar14 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x28);
    dVar14 = 7.98396688937273e-312;
  }
  if (cVar18 == '\0') {
    fVar13 = (float)((ulonglong)dVar14 >> 0x20);
    dVar14 = (double)CONCAT44(fVar13,SUB84(dVar14,0) * fVar13);
  }
  else {
    dVar14 = dVar14 * dVar14;
  }
  if (cVar19 == '\0') {
    *(int *)(ar4 + 0x28) = SUB84(dVar14,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_xd0;
  }
  FUN_8c0230f0(ar4 + 0x14,pcVar4,ar6,pcVar8,auStack_5c);
  pcVar5 = FUN_8c082378;
  FUN_8c082378(ar4,auStack_5c,FUN_8c082378,pcVar8);
  pcVar4 = (code *)0xffffffff;
  Vec3_dtor(auStack_5c,0xffffffff,pcVar5,pcVar8);
  iVar3 = *(int *)(ar4 + 0x2b0);
  if (iVar3 == 0) {
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar4,pcVar5,pcVar8);
    if (iVar2 == 1) {
      *(int *)(ar4 + 0x2b0) = *(int *)(ar4 + 0x2b0) + 1;
    }
  }
  else {
    if (iVar3 == 1) {
      FUN_8c0230f0(ar4 + 0x14,pcVar4,pcVar5,pcVar8,auStack_6c);
      FUN_8c022dac(auStack_6c,ar5,pcVar5,pcVar8);
      dVar15 = dVar14;
      if (cVar19 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   (int)((ulonglong)dVar14 >> 0x20));
        dVar15 = in_xd14;
      }
      Vec3_dtor(auStack_6c,0xffffffff,pcVar5,pcVar8);
      uVar7 = ar5;
      uVar10 = FUN_8c023334(ar4 + 0x14,ar5,pcVar5,pcVar8);
      *(undefined4 *)(ar4 + 0x220) = uVar10;
      Vec3_ctor_xyz(auStack_7c,uVar7,pcVar5,pcVar8);
      Vec3_assign(auStack_4c,auStack_7c,pcVar5,pcVar8);
      Vec3_dtor(auStack_7c,0xffffffff,pcVar5,pcVar8);
      if (iVar2 == 1) {
        pcVar5 = Vec3_assign;
        Vec3_assign(auStack_4c,ar5,Vec3_assign,pcVar8);
      }
      else {
        if (cVar19 == '\0') {
          dVar14 = (double)CONCAT44(0x41200000,SUB84(dVar14,0));
        }
        else {
          dVar14 = 1.29071326503144e-311;
        }
        fVar13 = SUB84(in_dr14,0);
        if (cVar18 == '\0') {
          bVar17 = (float)((ulonglong)dVar14 >> 0x20) < fVar13;
        }
        else {
          bVar17 = dVar14 < in_dr14;
        }
        if (!bVar17) {
          *(undefined4 *)(ar4 + 0x260) = 0;
          *(undefined4 *)(ar4 + 0x2b0) = 0;
          uVar11 = 0;
          uVar7 = 0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          Vec3_dtor(auStack_4c,0xffffffff,uVar7,uVar11);
          Vec3_dtor(auStack_3c,0xffffffff,uVar7,uVar11);
          object_dtor_delete(&fStack_2c,0xffffffff,uVar7,uVar11);
          object_dtor_delete(&uStack_20,0xffffffff,uVar7,object_dtor_delete);
          return 0;
        }
        if (cVar19 == '\0') {
          dVar14 = (double)CONCAT44(0x42960000,SUB84(dVar14,0));
        }
        else {
          dVar14 = 8.3237428396117e-312;
        }
        if (cVar18 == '\0') {
          bVar17 = (float)((ulonglong)dVar14 >> 0x20) < fVar13;
        }
        else {
          bVar17 = dVar14 < in_dr14;
        }
        if (bVar17) {
          if (cVar19 == '\0') {
            dVar14 = (double)CONCAT44(0x42d20000,SUB84(dVar14,0));
          }
          else {
            dVar14 = 1.29072731755484e-311;
          }
          if (cVar18 == '\0') {
            bVar17 = (float)((ulonglong)dVar14 >> 0x20) < fVar13;
          }
          else {
            bVar17 = dVar14 < in_dr14;
          }
          if (!bVar17) {
            *(undefined4 *)(ar4 + 0x260) = *(undefined4 *)(ar4 + 0x220);
            *(undefined4 *)(ar4 + 0x2b0) = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
            if (*(int *)(ar4 + 0x260) == 3) {
              uVar10 = 0;
              uVar11 = 0xffffffff;
              uVar7 = 5;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
            }
            else if (*(int *)(ar4 + 0x260) == 4) {
              uVar10 = 0;
              uVar11 = 0xffffffff;
              uVar7 = 6;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0);
            }
            else {
              uVar10 = 0;
              uVar11 = 0xffffffff;
              uVar7 = 0;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
            }
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar11,uVar10);
            Vec3_dtor(auStack_4c,0xffffffff,uVar11,uVar10);
            Vec3_dtor(auStack_3c,0xffffffff,uVar11,uVar10);
            object_dtor_delete(&fStack_2c,0xffffffff,uVar11,uVar10);
            object_dtor_delete(&uStack_20,0xffffffff,uVar11,uVar10);
            return 0;
          }
          Vec3_assign(auStack_4c,ar5,pcVar5,pcVar8);
          if (*(int *)(ar4 + 0x220) == 3) {
            Vec3_set_xyz(auStack_88,ar5,pcVar5,pcVar8);
            FUN_8c023484(auStack_4c,auStack_88,pcVar5,pcVar8,auStack_98);
            Vec3_assign(auStack_4c,auStack_98,pcVar5,pcVar8);
            Vec3_dtor(auStack_98,0xffffffff,pcVar5,pcVar8);
            uVar7 = 0xffffffff;
            object_dtor_delete(auStack_88,0xffffffff,pcVar5,pcVar8);
          }
          else {
            Vec3_set_xyz(auStack_a4,ar5,pcVar5,pcVar8);
            FUN_8c023484(auStack_4c,auStack_a4,pcVar5,pcVar8,auStack_b4);
            Vec3_assign(auStack_4c,auStack_b4,pcVar5,pcVar8);
            Vec3_dtor(auStack_b4,0xffffffff,pcVar5,pcVar8);
            uVar7 = 0xffffffff;
            pcVar5 = object_dtor_delete;
            object_dtor_delete(auStack_a4,0xffffffff,object_dtor_delete,pcVar8);
          }
          Vec3_normalize(auStack_4c,uVar7,pcVar5,pcVar8);
          Vec3_assign(auStack_4c,auStack_c4,pcVar5,pcVar8);
          ar5 = 0xffffffff;
          Vec3_dtor(auStack_c4,0xffffffff,pcVar5,pcVar8);
          *(undefined4 *)(ar4 + 0x260) = *(undefined4 *)(ar4 + 0x220);
        }
        else {
          pcVar5 = Vec3_assign;
          Vec3_assign(auStack_4c,ar5,Vec3_assign,pcVar8);
          *(undefined4 *)(ar4 + 0x260) = 0;
        }
      }
      FUN_8c0230f0(ar4 + 0x14,ar5,pcVar5,pcVar8,auStack_d4);
      FUN_8c022dac(auStack_d4,auStack_4c,pcVar5,pcVar8);
      dVar16 = dVar14;
      if (cVar19 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   (int)((ulonglong)dVar14 >> 0x20));
        dVar16 = dVar15;
      }
      Vec3_dtor(auStack_d4,0xffffffff,pcVar5,pcVar8);
      uVar10 = SUB84(dVar14,0);
      uVar7 = FUN_8c023334(ar4 + 0x14,auStack_4c,pcVar5,pcVar8);
      *(undefined4 *)(ar4 + 0x220) = uVar7;
      if (cVar19 == '\0') {
        dVar14 = (double)CONCAT44(0x42b40000,uVar10);
      }
      else {
        dVar14 = 6.28663659401089e-312;
      }
      if (cVar18 == '\0') {
        bVar17 = SUB84(in_dr14,0) < (float)((ulonglong)dVar14 >> 0x20);
      }
      else {
        bVar17 = in_dr14 < dVar14;
      }
      if (bVar17) {
        if (*(int *)(ar4 + 0x128) < 2) {
          uVar11 = 0;
          *(undefined4 *)(ar4 + 0x2b0) = 0;
          goto LAB_8c0822ea;
        }
        if (*(int *)(ar4 + 0x128) == 2) {
          if (*(int *)(ar4 + 0x220) == 3) {
            uVar10 = 0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 9;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
            uVar6 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,pcVar8,uVar10);
            uVar10 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,uVar10);
            pcVar5 = deref_u32;
            puVar1 = (undefined4 *)deref_u32(uVar10,uVar7,pcVar8,deref_u32);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c137618;
          }
          else {
            uVar9 = 0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 10;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0);
            uVar6 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,pcVar8,uVar9);
            uVar10 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,uVar9);
            puVar1 = (undefined4 *)deref_u32(uVar10,uVar7,pcVar8,uVar9);
            pcVar5 = (code *)(ar4 + 0xb4);
            uVar7 = puVar1[1];
            *(undefined4 *)pcVar5 = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c137630;
          }
        }
        else if (*(int *)(ar4 + 0x128) < 6) {
          if (*(int *)(ar4 + 0x220) == 3) {
            pcVar5 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 9;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
            uVar6 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,pcVar8,pcVar5);
            uVar7 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,pcVar5);
            puVar1 = (undefined4 *)deref_u32(uVar7,uVar7,pcVar8,pcVar5);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c137678;
          }
          else {
            uVar9 = 0;
            uVar10 = 0xffffffff;
            uVar7 = 10;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0);
            uVar6 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,uVar10,uVar9);
            uVar7 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar10,uVar9);
            puVar1 = (undefined4 *)deref_u32(uVar7,uVar7,uVar10,uVar9);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            pcVar5 = (code *)0xb4;
            pcVar8 = (code *)&DAT_8c137690;
            *(undefined **)(ar4 + 0xb4) = &DAT_8c137690;
          }
        }
        else if (*(int *)(ar4 + 0x220) == 3) {
          uVar9 = 0;
          uVar10 = 0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
          uVar6 = SUB84(dVar14,0);
          uVar7 = FUN_8c026db0(ar4,FUN_8c026db0,uVar10,uVar9);
          uVar7 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar10,uVar9);
          puVar1 = (undefined4 *)deref_u32(uVar7,uVar7,uVar10,deref_u32);
          uVar7 = puVar1[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar1;
          *(undefined4 *)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
          pcVar8 = (code *)(*(int *)(ar4 + 0x128) + -6);
          pcVar5 = (code *)0xb4;
          *(undefined **)(ar4 + 0xb4) = &DAT_8c1376d8 + (int)pcVar8 * 0x18;
        }
        else {
          uVar9 = 0;
          uVar10 = 0xffffffff;
          uVar7 = 10;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0);
          uVar6 = SUB84(dVar14,0);
          uVar7 = FUN_8c026db0(ar4,uVar7,uVar10,uVar9);
          uVar9 = 0xb0;
          uVar10 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,0xb0,uVar7);
          pcVar5 = deref_u32;
          pcVar8 = (code *)deref_u32(uVar10,uVar7,uVar9,deref_u32);
          uVar7 = *(undefined4 *)(pcVar8 + 4);
          *(undefined4 *)(ar4 + 0xb4) = *(undefined4 *)pcVar8;
          *(undefined4 *)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(ar4 + 0xbc) = *(undefined4 *)(pcVar8 + 8);
          *(undefined **)(ar4 + 0xb4) = &DAT_8c137708 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
        }
        if (cVar19 == '\0') {
          dVar14 = (double)CONCAT44(0x42700000,uVar6);
        }
        else {
          dVar14 = 3.510285662012026e-304;
        }
        if (cVar18 == '\0') {
          fVar13 = SUB84(in_dr14,0) / (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(in_dr14 / dVar14,0);
        }
        if (cVar19 == '\0') {
          *(float *)(ar4 + 0x240) = fVar13;
        }
        else {
          *(double *)(ar4 + 0x240) = dVar16;
        }
      }
      else {
        if (*(int *)(ar4 + 0x128) < 2) {
          uVar11 = 0;
          *(undefined4 *)(ar4 + 0x2b0) = 0;
          goto LAB_8c0822ea;
        }
        if (*(int *)(ar4 + 0x128) == 2) {
          if (*(int *)(ar4 + 0x220) == 3) {
            pcVar5 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 2;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
            uVar9 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,pcVar8,pcVar5);
            uVar7 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,pcVar5);
            puVar1 = (undefined4 *)deref_u32(uVar7,deref_u32,pcVar8,pcVar5);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c137648;
          }
          else {
            pcVar5 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 3;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
            uVar9 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,pcVar8,pcVar5);
            uVar10 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,pcVar5);
            puVar1 = (undefined4 *)deref_u32(uVar10,uVar7,pcVar8,pcVar5);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c137660;
          }
        }
        else if (*(int *)(ar4 + 0x128) < 6) {
          if (*(int *)(ar4 + 0x220) == 3) {
            uVar6 = 0;
            uVar10 = 0xffffffff;
            uVar7 = 2;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
            uVar9 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,uVar10,uVar6);
            pcVar5 = (code *)(ar4 + 0xb0);
            pcVar8 = FUN_8c03c0f0;
            uVar7 = FUN_8c03c0f0(pcVar5,uVar7,FUN_8c03c0f0,pcVar5);
            puVar1 = (undefined4 *)deref_u32(uVar7,uVar7,pcVar8,pcVar5);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c1376a8;
          }
          else {
            uVar6 = 0;
            uVar10 = 0xffffffff;
            uVar7 = 3;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
            uVar9 = SUB84(dVar14,0);
            uVar7 = FUN_8c026db0(ar4,uVar7,uVar10,uVar6);
            pcVar5 = (code *)(ar4 + 0xb0);
            pcVar8 = FUN_8c03c0f0;
            uVar7 = FUN_8c03c0f0(pcVar5,uVar7,FUN_8c03c0f0,pcVar5);
            puVar1 = (undefined4 *)deref_u32(uVar7,uVar7,pcVar8,pcVar5);
            uVar7 = puVar1[1];
            *(undefined4 *)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
            *(undefined **)(ar4 + 0xb4) = &DAT_8c1376c0;
          }
        }
        else if (*(int *)(ar4 + 0x220) == 3) {
          pcVar5 = (code *)0x0;
          uVar10 = 0xffffffff;
          uVar7 = 2;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
          uVar9 = SUB84(dVar14,0);
          uVar7 = FUN_8c026db0(ar4,uVar7,uVar10,pcVar5);
          pcVar8 = (code *)FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar10,pcVar5);
          puVar1 = (undefined4 *)deref_u32(pcVar8,deref_u32,pcVar8,pcVar5);
          uVar7 = puVar1[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar1;
          *(undefined4 *)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
          *(undefined **)(ar4 + 0xb4) = &DAT_8c137798 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
        }
        else {
          ar7_00 = 0;
          uVar6 = 0xffffffff;
          uVar7 = 3;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
          uVar9 = SUB84(dVar14,0);
          uVar7 = FUN_8c026db0(ar4,uVar7,uVar6,ar7_00);
          uVar10 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar6,ar7_00);
          puVar1 = (undefined4 *)deref_u32(uVar10,uVar7,uVar6,ar7_00);
          uVar7 = puVar1[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar1;
          *(undefined4 *)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(ar4 + 0xbc) = puVar1[2];
          pcVar8 = (code *)(*(int *)(ar4 + 0x128) + -6);
          pcVar5 = (code *)0xb4;
          *(undefined **)(ar4 + 0xb4) = &DAT_8c1377c8 + (int)pcVar8 * 0x18;
        }
        if (cVar19 == '\0') {
          dVar14 = (double)CONCAT44(0x43340000,uVar9);
        }
        else {
          dVar14 = 1.2652665412137e-311;
        }
        if (cVar18 == '\0') {
          fVar13 = SUB84(in_dr14,0) / (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(in_dr14 / dVar14,0);
        }
        if (cVar19 == '\0') {
          *(float *)(ar4 + 0x240) = fVar13;
        }
        else {
          *(double *)(ar4 + 0x240) = dVar16;
        }
      }
      uVar12 = SUB84(dVar14,0);
      FUN_8c02a1fc(ar4 + 0x254,0x254,pcVar8,pcVar5);
      if (cVar19 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar12;
      }
      pcVar4 = s_CAnimBody_SetFrame_033e6e;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,pcVar8,pcVar5);
      pcVar8 = (code *)0x2b0;
      pcVar5 = *(code **)(ar4 + 0x2b0);
      *(code **)(ar4 + 0x2b0) = pcVar5 + 1;
    }
    else if (iVar3 != 2) goto LAB_8c0822ea;
    CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar4,pcVar5,pcVar8,iVar2);
    uVar10 = *(undefined4 *)(*(int *)(ar4 + 0xb4) + 4);
    uVar7 = 0xb0;
    FUN_8c034650(ar4 + 0xb0,uVar10,0xb0,uVar10);
    vec3_copy_8c023d8c(&uStack_20,auStack_e0,uVar7,uVar10);
    object_dtor_delete(auStack_e0,0xffffffff,object_dtor_delete,auStack_e0);
    if (cVar19 == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x254),uStack_20);
    }
    else {
      in_xd0 = CONCAT44(uStack_1c,uStack_20);
      dVar14 = *(double *)(ar4 + 0x254);
    }
    if (cVar18 == '\0') {
      fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar13);
    }
    else {
      dVar14 = *(double *)(ar4 + 0x240);
    }
    if (cVar18 == '\0') {
      fStack_2c = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fStack_2c = SUB84(dVar14 * dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 600),uStack_1c);
    }
    else {
      fStack_2c = (float)in_xd0;
      in_xd0 = CONCAT44(uStack_18,uStack_1c);
      dVar14 = *(double *)(ar4 + 600);
    }
    if (cVar18 == '\0') {
      fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar13);
    }
    else {
      dVar14 = *(double *)(ar4 + 0x240);
    }
    if (cVar18 == '\0') {
      fStack_28 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fStack_28 = SUB84(dVar14 * dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x25c),uStack_18);
    }
    else {
      fStack_28 = (float)in_xd0;
      in_xd0 = CONCAT44(uStack_14,uStack_18);
      dVar14 = *(double *)(ar4 + 0x25c);
    }
    if (cVar18 == '\0') {
      fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar13);
    }
    else {
      dVar14 = *(double *)(ar4 + 0x240);
    }
    if (cVar18 == '\0') {
      fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar14 * dVar14,0);
    }
    fStack_24 = fVar13;
    if (cVar19 != '\0') {
      fStack_24 = (float)in_xd0;
      uStack_20 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    pcVar8 = (code *)&uStack_20;
    uVar10 = 0x254;
    vec3_copy_8c023d8c(ar4 + 0x254,pcVar8,0x254,pcVar8);
    vec3_copy_8c02b5fc(auStack_ec,&fStack_2c,uVar10,pcVar8);
    FUN_8c023484(ar4 + 0x14,auStack_ec,uVar10,pcVar8,auStack_fc);
    Vec3_assign(ar4 + 0x14,auStack_fc,uVar10,pcVar8);
    Vec3_dtor(auStack_fc,0xffffffff,uVar10,pcVar8);
    uVar7 = 0xffffffff;
    object_dtor_delete(auStack_ec,0xffffffff,uVar10,pcVar8);
    iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar7,uVar10,pcVar8);
    if (iVar2 == 1) {
      uVar11 = 0;
      *(undefined4 *)(ar4 + 0x2b0) = 0;
      if (*(int *)(ar4 + 0x260) == 3) {
        pcVar8 = (code *)0x0;
        uVar7 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
      }
      else if (*(int *)(ar4 + 0x260) == 4) {
        pcVar8 = (code *)0x0;
        uVar7 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0);
      }
      else {
        pcVar8 = (code *)0x0;
        uVar7 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,uVar7,pcVar8);
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      if (cVar19 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)fVar13;
      }
    }
  }
LAB_8c0822ea:
  uVar7 = 0xffffffff;
  Vec3_dtor(auStack_4c,0xffffffff,0xffffffff,pcVar8);
  Vec3_dtor(auStack_3c,0xffffffff,uVar7,pcVar8);
  object_dtor_delete(&fStack_2c,0xffffffff,uVar7,pcVar8);
  object_dtor_delete(&uStack_20,0xffffffff,uVar7,pcVar8);
  return uVar11;
}

__asm__(".globl _FUN_8c0811b4\n.set _FUN_8c0811b4, _FUN_8c0811b4_def\n");
