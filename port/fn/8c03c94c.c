#include "../decls.h"
code * FUN_8c03c94c_def(code *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  double *pdVar6;
  code *pcVar7;
  float *pfVar8;
  code *pcVar9;
  undefined4 *ar6_00;
  undefined4 a6;
  code *pcVar10;
  undefined1 *ar7_00;
  undefined1 *puVar11;
  undefined8 *ar4_00;
  undefined4 uVar12;
  code *pcVar13;
  uint uVar14;
  float fVar15;
  double in_dr0;
  float fVar18;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined4 in_fr3;
  uint in_fr5;
  undefined4 uVar19;
  double dVar20;
  uint in_fr7;
  double dVar21;
  undefined8 in_xd0;
  bool bVar22;
  char cVar23;
  char cVar24;
  int iStack_444;
  int iStack_440;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  uint uStack_378;
  uint uStack_374;
  uint uStack_370;
  code *pcStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined1 auStack_358 [4];
  undefined4 uStack_354;
  undefined1 auStack_350 [16];
  undefined1 auStack_340 [16];
  undefined1 auStack_330 [12];
  undefined1 auStack_324 [16];
  undefined1 auStack_314 [16];
  undefined1 auStack_304 [12];
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [16];
  undefined1 auStack_2c8 [12];
  undefined1 auStack_2bc [16];
  undefined1 auStack_2ac [16];
  undefined1 auStack_29c [16];
  undefined1 auStack_28c [16];
  undefined1 auStack_27c [12];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [12];
  undefined1 auStack_1f4 [16];
  undefined1 auStack_1e4 [16];
  undefined1 auStack_1d4 [16];
  undefined1 auStack_1c4 [16];
  undefined1 auStack_1b4 [16];
  undefined1 auStack_1a4 [16];
  undefined1 auStack_194 [16];
  undefined1 auStack_184 [16];
  undefined1 auStack_174 [16];
  undefined1 auStack_164 [16];
  undefined1 auStack_154 [12];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [12];
  undefined1 auStack_10c [16];
  undefined1 auStack_fc [16];
  undefined1 auStack_ec [16];
  undefined1 auStack_dc [12];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  double dStack_40;
  undefined1 auStack_38 [12];
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar24 = '\0';
  cVar23 = '\0';
  pcVar13 = (code *)0x1;
  uStack_354 = 1;
  FUN_8c03f480(*ar5,FUN_8c03f480,1,ar7,auStack_a0);
  pcVar7 = Vec3_ctor_copy;
  Vec3_ctor_copy(&uStack_2c,auStack_a0,Vec3_ctor_copy,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_a0,0xffffffff,pcVar7,ar7);
  if (cVar24 == '\0') {
    dVar21 = (double)(ulonglong)in_fr7;
  }
  else {
    dVar21 = *(double *)(ar5[7] + 8);
  }
  if (cVar24 == '\0') {
    in_fr5 = *(uint *)(ar5[7] + 0xc);
  }
  if (cVar24 != '\0') {
    in_fr5 = (uint)*(undefined8 *)(uint)ar5[7];
  }
  pcVar10 = FUN_8c10277c;
  FUN_8c10277c(auStack_38,uVar3,pcVar7,FUN_8c10277c);
  pfVar8 = &fStack_48;
  Vec3_ctor_zero(pfVar8,uVar3,pfVar8,pcVar10);
  FUN_8c102748(&fStack_54,uVar3,pfVar8,pcVar10);
  pcVar7 = Vec3_set_zero;
  Vec3_set_zero(auStack_60,uVar3,pfVar8,Vec3_set_zero);
  pcVar10 = (code *)(uint)ar5[4];
  Vec3_ctor_zero(auStack_70,uVar3,pfVar8,pcVar7);
  *(undefined4 *)(ar4 + 0x2fc) = 0;
  *(undefined4 *)(ar4 + 0x300) = 1;
  *(undefined4 *)(ar4 + 0x218) = 0;
  *(undefined4 *)(ar4 + 0x338) = 0;
  if (pcVar10 == (code *)0x1) {
    if (cVar24 == '\0') {
      in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
      dVar20 = (double)(ulonglong)in_fr5;
    }
    else {
      in_dr0 = 0.0;
      dVar20 = 0.0;
    }
    if (cVar23 != '\0') {
      in_dr0 = in_dr0 + dVar20;
    }
    fStack_4c = SUB84(in_dr0,0);
    fVar15 = (float)((ulonglong)in_dr0 >> 0x20);
    if (cVar24 == '\0') {
      dVar21 = (double)((ulonglong)dVar21 & 0xffffffff);
      fStack_4c = fVar15;
    }
    else {
      dVar20 = 0.0;
      dVar21 = 0.0;
      fStack_48 = fVar15;
    }
    if (cVar23 != '\0') {
      dVar20 = dVar20 + dVar21;
    }
    fStack_54 = SUB84(dVar20,0);
    if (cVar24 == '\0') {
      fStack_54 = (float)((ulonglong)dVar20 >> 0x20);
      dVar20 = (double)((ulonglong)dVar20 & 0xffffffff);
      in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    }
    else {
      dVar20 = 0.0;
      in_dr0 = 0.0;
    }
    if (cVar23 != '\0') {
      dVar20 = dVar20 + in_dr0;
    }
    fVar15 = (float)((ulonglong)dVar20 >> 0x20);
    fStack_50 = fVar15;
    if (cVar24 != '\0') {
      fStack_50 = SUB84(dVar20,0);
      fStack_4c = fVar15;
    }
    uVar3 = *(undefined4 *)(uint)ar5[1];
    Vec3_assign(&fStack_48,uVar3,(undefined4 *)(uint)ar5[1],pcVar7);
    uVar19 = SUB84(dVar20,0);
    pcVar10 = (code *)0x0;
    if (cVar24 == '\0') {
      dVar20 = (double)CONCAT44(fStack_48,SUB84(in_dr0,0));
      dVar21 = (double)((ulonglong)dVar21 & 0xffffffff);
    }
    else {
      dVar20 = (double)CONCAT44(fStack_44,fStack_48);
      dVar21 = 0.0;
    }
    if (cVar23 == '\0') {
      bVar22 = (float)((ulonglong)dVar20 >> 0x20) < 0.0;
    }
    else {
      bVar22 = dVar20 < dVar21;
    }
    if (bVar22) {
      pcVar7 = (code *)&DAT_8c125be0;
      if (cVar24 == '\0') {
        uVar19 = 0;
        fStack_48 = 0.0;
      }
      else {
        fStack_48 = 0.0;
        fStack_44 = 0.0;
      }
    }
    if (cVar24 == '\0') {
      dVar20 = (double)((ulonglong)dVar20 & 0xffffffff);
      dVar1 = (double)CONCAT44((*(uint*)((uchar*)&dStack_40+0)),uVar19);
    }
    else {
      dVar20 = 0.0;
      dVar1 = dStack_40;
    }
    if (cVar23 == '\0') {
      bVar22 = (float)((ulonglong)dVar1 >> 0x20) < 0.0;
    }
    else {
      bVar22 = dVar1 < dVar20;
    }
    if (bVar22) {
      if (cVar24 == '\0') {
        dStack_40 = (double)((ulonglong)dStack_40 & 0xffffffff00000000);
      }
      else {
        dStack_40 = 0.0;
      }
    }
    fVar15 = fStack_48;
    fVar18 = fStack_54;
    if (cVar24 != '\0') {
      in_xd0 = CONCAT44(fStack_44,fStack_48);
      fVar15 = fStack_54;
      fVar18 = fStack_50;
    }
    if (cVar23 == '\0' && fVar15 < fVar18) {
      if (cVar24 == '\0') {
        fStack_48 = fStack_54;
        fVar15 = fStack_54;
      }
      else {
        in_xd0 = CONCAT44(fStack_50,fStack_54);
        fStack_48 = fStack_54;
        fStack_44 = fStack_50;
      }
    }
    if (cVar24 == '\0') {
      in_dr0 = (double)CONCAT44(fStack_4c,fVar15);
      dVar20 = (double)CONCAT44((*(uint*)((uchar*)&dStack_40+0)),SUB84(dVar1,0));
    }
    else {
      in_dr0 = (double)CONCAT44(fStack_48,fStack_4c);
      dVar20 = dStack_40;
    }
    if (cVar23 == '\0') {
      bVar22 = (float)((ulonglong)dVar20 >> 0x20) < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar22 = dVar20 < in_dr0;
    }
    if (bVar22) {
      if (cVar24 == '\0') {
        in_dr0 = (double)CONCAT44(fStack_4c,SUB84(in_dr0,0));
        dStack_40 = (double)CONCAT44((*(uint*)((uchar*)&dStack_40+4)),fStack_4c);
      }
      else {
        in_dr0 = (double)CONCAT44(fStack_48,fStack_4c);
        dStack_40 = in_dr0;
      }
    }
  }
  uVar19 = SUB84(dVar21,0);
  pcVar9 = *(code **)(ar4 + 0x2e8);
  if ((pcVar9 == (code *)0x0) && (*(int *)(ar4 + 0x124) != 0x2e)) {
    if ((pcVar10 == (code *)0x3) || (*(int *)(ar4 + 0x68) != 0)) {
      uVar3 = ar5[1];
      FUN_8c0507c0(ar4,*(undefined4 *)(uint)ar5[1],uVar3,pcVar10);
      uStack_35c = 1;
      pcVar13 = Vec3_dtor;
      Vec3_dtor(auStack_70,0xffffffff,uVar3,Vec3_dtor);
      object_dtor_delete(auStack_60,0xffffffff,uVar3,pcVar13);
      free_if_nonnull_wrap_102790(&fStack_54,0xffffffff,uVar3,pcVar13);
      Vec3_dtor(&fStack_48,0xffffffff,uVar3,pcVar13);
      free_if_nonnull_wrap_102790(auStack_38,0xffffffff,uVar3,pcVar13);
      Vec3_dtor(&uStack_2c,0xffffffff,uVar3,pcVar13);
      return (code *)uStack_35c;
    }
    uVar3 = 0;
  }
  iVar2 = *(int *)(ar4 + 0x124);
  if ((iVar2 < 0x2f) && (-1 < iVar2)) {
    pcVar7 = (code *)((code **)&DATA_8c03cce4)[iVar2];
                    
    switch(iVar2) {
    case 0:
      FUN_8c03f430(auStack_b0,ar5[7],pcVar9,pcVar7);
      pcVar9 = (code *)&uStack_2c;
      pcVar13 = (code *)FUN_8c048868(ar4,*(undefined4 *)(uint)ar5[1],pcVar9,pcVar10);
      pcVar7 = FUN_8c026038;
      FUN_8c026038(auStack_b0,0xffffffff,pcVar9,FUN_8c026038);
      break;
    case 1:
      pcVar9 = (code *)&uStack_2c;
      pcVar13 = (code *)pure_virtual_stub(ar4,*(undefined4 *)(uint)ar5[1],pcVar9,pcVar7);
      break;
    case 2:
      *(undefined4 *)(ar4 + 0x214) = 0;
      pcVar13 = (code *)FUN_8c04d62c(ar4,*(undefined4 *)(uint)ar5[1],ar5[6],pcVar7);
      pcVar9 = *(code **)ar5[1];
      FUN_8c031c74(ar4,&uStack_2c,pcVar9,pcVar7);
      break;
    case 3:
      puVar5 = &uStack_2c;
      FUN_8c031c74(ar4,puVar5,*(undefined4 *)(uint)ar5[1],pcVar7);
      pcVar9 = (code *)0x12c;
      if (*(int *)(ar4 + 300) == 0) {
        *(undefined4 *)(ar4 + 0x214) = 0;
        uVar19 = 0;
        uVar3 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0);
        uVar14 = SUB84(in_dr0,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar3,uVar19);
        pcVar7 = *(code **)(ar4 + 300);
        pcVar9 = pcVar7 + 1;
        *(code **)(ar4 + 300) = pcVar9;
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar14;
        }
      }
      else if (*(int *)(ar4 + 300) == 1) {
        FUN_8c05ae54(ar4,puVar5,300,pcVar7);
        fVar15 = (float)((ulonglong)in_dr0 >> 0x20);
        s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,puVar5,pcVar9,pcVar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,puVar5,pcVar9,pcVar7);
        if (cVar24 == '\0') {
          fVar18 = 190.0;
        }
        else {
          fVar15 = 190.0;
          fVar18 = 1.90577e-43;
        }
        if (cVar23 != '\0' || fVar18 <= fVar15) {
          pcVar7 = CAnimBody_GetCurFrame;
          CAnimBody_GetCurFrame(ar4 + 0xb0,puVar5,pcVar9,CAnimBody_GetCurFrame);
          pcVar9 = (code *)0xb0;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,0xb0,pcVar7);
        }
      }
      break;
    case 4:
      pcVar9 = s_CAnimBody_AdvanceFrame_033ba0;
      iVar2 = s_CAnimBody_AdvanceFrame_033ba0
                        (ar4 + 0xb0,uVar3,s_CAnimBody_AdvanceFrame_033ba0,pcVar7);
      if (iVar2 == 1) {
        *(undefined4 *)(ar4 + 0x214) = 1;
        pcVar13 = (code *)0x0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
      break;
    case 5:
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(undefined4 *)(ar4 + 0x178) = 1;
      puVar5 = &uStack_2c;
      FUN_8c031c74(ar4,puVar5,*(undefined4 *)(uint)ar5[1],pcVar7);
      fVar15 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar2 = *(int *)(ar4 + 300);
      if (iVar2 == 0) {
        pcVar7 = Vec3_ctor_copy;
        Vec3_ctor_copy(auStack_220,&DAT_8c125d48,&DAT_8c125d48,Vec3_ctor_copy);
        puVar11 = auStack_220;
        iVar2 = FUN_8c051c14(ar4,*(undefined4 *)(uint)ar5[1],puVar11,pcVar7);
        uStack_370 = (uint)(iVar2 == 0);
        Vec3_dtor(auStack_220,0xffffffff,puVar11,pcVar7);
        if (uStack_370 != 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          pcVar7 = (code *)0x0;
          uVar19 = 0xffffffff;
          uVar3 = 0xe;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xe,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar19,pcVar7);
        }
      }
      else if (iVar2 == 1) {
        pcVar7 = (code *)0xb0;
        pcVar10 = ar4 + 0xb0;
        CAnimBody_AdvanceFrame_wrapper(pcVar10,puVar5,pcVar10,0xb0);
        uVar3 = 0xb0;
        CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar10,pcVar7);
        if (cVar24 == '\0') {
          fVar18 = 34.0;
        }
        else {
          fVar15 = 34.0;
          fVar18 = 1.47977e-42;
        }
        if (cVar23 == '\0' && fVar18 < fVar15) {
          puVar11 = auStack_80;
          Vec3_ctor_zero(puVar11,uVar3,puVar11,pcVar7);
          iVar2 = get_field_24_026024(*(undefined4 *)(ar4 + 0x244),uVar3,puVar11,pcVar7);
          if (iVar2 == 0) {
            if (cVar24 == '\0') {
              dVar21 = (double)CONCAT44(0x44bb8000,*(undefined4 *)(*(int *)(uint)ar5[1] + 8));
            }
            else {
              dVar21 = 6.37168463500213e-312;
            }
            if (cVar23 == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - SUB84(dVar21,0),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            uVar14 = (uint)((ulonglong)dVar21 >> 0x20);
            uStack_374 = uVar14;
            if (cVar24 != '\0') {
              uStack_374 = SUB84(dVar21,0);
              uStack_370 = uVar14;
            }
            Vec3_scale(ar4 + 0x14,&uStack_374,puVar11,pcVar7,auStack_230);
            pcVar10 = Vec3_scale;
            Vec3_scale(auStack_230,&DAT_8c136570,Vec3_scale,pcVar7,auStack_240);
            Vec3_assign(auStack_80,auStack_240,pcVar10,pcVar7);
            Vec3_dtor(auStack_240,0xffffffff,pcVar10,pcVar7);
            puVar11 = (undefined1 *)0xffffffff;
            Vec3_dtor(auStack_230,0xffffffff,pcVar10,0xffffffff);
          }
          else {
            if (cVar24 == '\0') {
              dVar21 = (double)CONCAT44(0x45034000,*(undefined4 *)(*(int *)(uint)ar5[1] + 8));
            }
            else {
              dVar21 = 6.28682803535784e-312;
            }
            if (cVar23 == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - SUB84(dVar21,0),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            uVar14 = (uint)((ulonglong)dVar21 >> 0x20);
            uStack_378 = uVar14;
            if (cVar24 != '\0') {
              uStack_378 = SUB84(dVar21,0);
              uStack_374 = uVar14;
            }
            puVar5 = &uStack_378;
            Vec3_scale(ar4 + 0x14,puVar5,puVar5,auStack_250,auStack_250);
            puVar11 = auStack_260;
            Vec3_scale(auStack_250,&DAT_8c136574,puVar5,puVar11,puVar11);
            Vec3_assign(auStack_80,auStack_260,puVar5,puVar11);
            Vec3_dtor(auStack_260,0xffffffff,puVar5,puVar11);
            Vec3_dtor(auStack_250,0xffffffff,0xffffffff,puVar11);
          }
          puVar4 = auStack_80;
          FUN_8c02374c(puVar4,FUN_8c02374c,puVar4,puVar11);
          Vec3_assign(auStack_80,auStack_270,puVar4,puVar11);
          pcVar10 = Vec3_dtor;
          Vec3_dtor(auStack_270,0xffffffff,Vec3_dtor,puVar11);
          pcVar7 = FUN_8c032ab0;
          FUN_8c032ab0(ar4,FUN_8c032ab0,pcVar10,puVar11);
          Vec3_set_xyz(auStack_27c,pcVar7,pcVar10,puVar11);
          FUN_8c023484(auStack_80,auStack_27c,pcVar10,puVar11,auStack_28c);
          ar4_00 = (undefined8 *)auStack_80;
          pcVar7 = Vec3_assign;
          Vec3_assign(ar4_00,auStack_28c,Vec3_assign,ar4_00);
          Vec3_dtor(auStack_28c,0xffffffff,pcVar7,ar4_00);
          uVar3 = 0xffffffff;
          pcVar7 = object_dtor_delete;
          object_dtor_delete(auStack_27c,0xffffffff,object_dtor_delete,ar4_00);
          Vec3_ctor_zero(auStack_90,uVar3,pcVar7,ar4_00);
          iVar2 = *(int *)(ar4 + 0x128);
          if (iVar2 == 0) {
            Vec3_ctor_xyz(auStack_29c,uVar3,pcVar7,ar4_00);
            Vec3_assign(auStack_90,auStack_29c,pcVar7,ar4_00);
            Vec3_dtor(auStack_29c,0xffffffff,pcVar7,ar4_00);
          }
          else if (iVar2 == 1) {
            Vec3_ctor_xyz(auStack_2ac,uVar3,pcVar7,ar4_00);
            Vec3_assign(auStack_90,auStack_2ac,pcVar7,ar4_00);
            Vec3_dtor(auStack_2ac,0xffffffff,pcVar7,ar4_00);
          }
          else {
            if (iVar2 != 2) {
              uVar3 = 2;
              uStack_368 = 2;
              Vec3_dtor(auStack_90,0xffffffff,2,ar4_00);
              Vec3_dtor(auStack_80,0xffffffff,uVar3,ar4_00);
              uVar3 = 0xffffffff;
              Vec3_dtor(auStack_70,0xffffffff,0xffffffff,ar4_00);
              object_dtor_delete(auStack_60,0xffffffff,uVar3,ar4_00);
              free_if_nonnull_wrap_102790(&fStack_54,0xffffffff,uVar3,ar4_00);
              pfVar8 = &fStack_48;
              pcVar13 = Vec3_dtor;
              Vec3_dtor(pfVar8,0xffffffff,Vec3_dtor,pfVar8);
              free_if_nonnull_wrap_102790(auStack_38,0xffffffff,pcVar13,pfVar8);
              Vec3_dtor(&uStack_2c,0xffffffff,pcVar13,Vec3_dtor);
              return (code *)uStack_368;
            }
            Vec3_ctor_xyz(auStack_2bc,Vec3_ctor_xyz,pcVar7,ar4_00);
            ar4_00 = auStack_90;
            pcVar7 = Vec3_assign;
            Vec3_assign(ar4_00,auStack_2bc,Vec3_assign,ar4_00);
            Vec3_dtor(auStack_2bc,0xffffffff,pcVar7,ar4_00);
          }
          vec3_copy_8c02b5fc(auStack_2c8,*(undefined4 *)(ar5[1] + 4),pcVar7,ar4_00);
          FUN_8c023484(auStack_90,auStack_2c8,pcVar7,ar4_00,auStack_2d8);
          puVar11 = auStack_2e8;
          Vec3_add(*(undefined4 *)(uint)ar5[1],auStack_2d8,puVar11,ar4_00,puVar11);
          Vec3_assign(auStack_90,auStack_2e8,puVar11,ar4_00);
          Vec3_dtor(auStack_2e8,0xffffffff,puVar11,ar4_00);
          puVar11 = auStack_2d8;
          Vec3_dtor(puVar11,0xffffffff,puVar11,ar4_00);
          object_dtor_delete(auStack_2c8,0xffffffff,puVar11,ar4_00);
          pcVar7 = (code *)auStack_80;
          FUN_8c0dba50(ar5[6],auStack_90,pcVar7,pcVar7);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          Vec3_dtor(auStack_90,0xffffffff,ar4,pcVar7);
          Vec3_dtor(auStack_80,0xffffffff,Vec3_dtor,pcVar7);
        }
      }
      else if ((iVar2 == 2) &&
              (iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,0xb0,pcVar7), iVar2 == 1
              )) {
        *(undefined4 *)(ar4 + 300) = 0;
        pcVar13 = (code *)0x0;
        *(undefined4 *)(ar4 + 0x178) = 0;
        pcVar7 = (code *)0x0;
        uVar3 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar3,pcVar7);
        *(undefined4 *)(ar4 + 0x214) = 1;
      }
      pcVar9 = (code *)0x80;
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,0x80,pcVar7);
      break;
    case 6:
      pcVar7 = (code *)&uStack_2c;
      pcVar9 = *(code **)ar5[1];
      pcVar13 = (code *)FUN_8c050300(ar4,*ar5,pcVar9,pcVar7);
      break;
    default:
      goto override_jmp_8c03cc1e_case_7;
    case 0xb:
      Vec3_ctor_copy(auStack_194,&DAT_8c125d48,&DAT_8c125d48,pcVar7);
      pcVar10 = (code *)auStack_194;
      pcVar7 = pcVar10;
      pcVar13 = (code *)FUN_8c051c14(ar4,*(undefined4 *)(uint)ar5[1],pcVar10,pcVar10);
      Vec3_dtor(auStack_194,0xffffffff,pcVar10,pcVar7);
      pcVar9 = *(code **)ar5[1];
      FUN_8c031c74(ar4,&uStack_2c,pcVar9,pcVar7);
      break;
    case 0xc:
      pcVar9 = *(code **)ar5[1];
      pcVar13 = (code *)FUN_8c0530e0(ar4,*ar5,pcVar9,pcVar7);
      break;
    case 0xe:
      iVar2 = *(int *)(ar4 + 300);
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 0x214) = 0;
        ar4[0x1fc] = (code)((byte)ar4[0x1fc] & 0xfb);
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
LAB_8c03d4b8:
        ar6_00 = &DAT_8c125bf0;
        if (cVar24 == '\0') {
          uVar3 = SUB84(in_dr0,0);
          uVar19 = 0x40400000;
        }
        else {
          uVar3 = 0x40400000;
          uVar19 = 0x42c80000;
        }
        FUN_8c032518(ar4,*(undefined4 *)(uint)ar5[1],&DAT_8c125bf0,ar5[6]);
        pcVar7 = Vec3_assign;
        Vec3_assign(ar4 + 0x248,auStack_184,ar6_00,Vec3_assign);
        a6 = 0xffffffff;
        uVar12 = 0xffffffff;
        Vec3_dtor(auStack_184,0xffffffff,0xffffffff,pcVar7);
        (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar12,a6,pcVar7);
        if (cVar24 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),uVar19);
        }
        else {
          in_xd0 = CONCAT44(uVar19,uVar3);
          dVar21 = *(double *)(ar4 + 0x48);
        }
        if (cVar23 == '\0') {
          fVar15 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
        }
        else {
          fVar15 = SUB84(dVar21 - dVar21,0);
        }
        if (cVar24 == '\0') {
          *(float *)(ar4 + 0x24c) = fVar15;
        }
        else {
          *(undefined8 *)(ar4 + 0x24c) = in_xd0;
        }
        pcVar7 = (code *)(uint)ar5[7];
        if (cVar24 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(pcVar7 + 8),in_fr3);
          in_dr0 = (double)CONCAT44(0x40400000,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          dVar21 = *(double *)(pcVar7 + 8);
          in_dr0 = 52776566554624.0;
        }
        if (cVar23 == '\0') {
          fVar18 = (float)((ulonglong)in_dr0 >> 0x20);
          fVar15 = SUB84(in_dr0,0) * fVar18;
          in_dr0 = (double)CONCAT44(fVar18,fVar15);
          dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - fVar15,SUB84(dVar21,0));
        }
        else {
          in_dr0 = in_dr0 * in_dr0;
          dVar21 = dVar21 - in_dr0;
        }
        if (cVar24 == '\0') {
          *(int *)(ar4 + 0x250) = (int)((ulonglong)dVar21 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x250) = dVar21;
        }
        *(undefined4 *)(ar4 + 0x40) = 5;
        pcVar9 = (code *)0x12c;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        pdVar6 = (double *)(ar4 + 0x2c);
        in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (cVar24 == '\0') {
          *(undefined4 *)pdVar6 = 0;
        }
        else {
          *pdVar6 = in_dr0;
        }
LAB_8c03d592:
        FUN_8c05ae54(ar4,pdVar6,pcVar9,pcVar7);
        FUN_8c03f3ac(ar4 + 0xb0,pdVar6,pcVar9,pcVar7);
        *(undefined4 *)(ar4 + 0x40) = 3;
        FUN_8c031c74(ar4,ar4 + 0x248,*(undefined4 *)(uint)ar5[1],pcVar7);
      }
      else {
        if (iVar2 == 1) goto LAB_8c03d4b8;
        if (iVar2 == 2) {
          pdVar6 = (double *)0x2;
          goto LAB_8c03d592;
        }
      }
      uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      pcVar10 = ar4 + 0x14;
      pcVar9 = pcVar10;
      Vec3_assign(ar4 + 0x80,pcVar10,pcVar10,pcVar7);
      FUN_8c03c314(ar4,pcVar10,pcVar9,pcVar7);
      pcVar7 = (code *)**(undefined4 **)(ar4 + 0x244);
      (**(code **)(pcVar7 + 0x184))(*(undefined4 **)(ar4 + 0x244),pcVar10,pcVar9,pcVar7);
      if (cVar24 == '\0') {
        dVar21 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),uVar3);
      }
      else {
        dVar21 = *(double *)(ar4 + 0x48);
      }
      if (cVar23 == '\0') {
        fVar15 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
      }
      else {
        fVar15 = SUB84(dVar21 - dVar21,0);
      }
      if (cVar24 == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 4),fVar15);
      }
      else {
        uVar16 = *(undefined8 *)(*(int *)(uint)ar5[1] + 4);
      }
      if (cVar23 == '\0' && (float)uVar16 < (float)((ulonglong)uVar16 >> 0x20)) {
        pcVar7 = FUN_8c031748;
        FUN_8c031748(ar4,pcVar10,pcVar9,FUN_8c031748);
      }
      break;
    case 0xf:
      *(undefined4 *)(ar4 + 0x178) = 1;
      iVar2 = get_field_6c_028cc4(*ar5,1,pcVar9,pcVar7);
      if (iVar2 == 0) {
        uStack_360 = 2;
        Vec3_dtor(auStack_70,0xffffffff,pcVar9,pcVar7);
        object_dtor_delete(auStack_60,0xffffffff,pcVar9,pcVar7);
        uVar3 = 0xffffffff;
        free_if_nonnull_wrap_102790(&fStack_54,0xffffffff,0xffffffff,pcVar7);
        Vec3_dtor(&fStack_48,0xffffffff,uVar3,pcVar7);
        puVar11 = auStack_38;
        free_if_nonnull_wrap_102790(puVar11,0xffffffff,uVar3,puVar11);
        Vec3_dtor(&uStack_2c,0xffffffff,uVar3,puVar11);
        return (code *)uStack_360;
      }
      FUN_8c03f414(iVar2,auStack_60,auStack_5c,auStack_58);
      ar7_00 = auStack_358;
      puVar11 = auStack_358;
      puVar4 = auStack_358;
      FUN_8c03f3f8(iVar2,puVar4,puVar11,ar7_00);
      iVar2 = *(int *)(ar4 + 0x128);
      if (iVar2 == 0) {
        Vec3_ctor_xyz(auStack_d0,puVar4,puVar11,ar7_00);
        vec3_copy_8c02b5fc(auStack_dc,auStack_60,vec3_copy_8c02b5fc,ar7_00);
        pcVar7 = FUN_8c023484;
        FUN_8c023484(auStack_d0,auStack_dc,FUN_8c023484,ar7_00,auStack_ec);
        Vec3_scale(auStack_ec,auStack_358,pcVar7,ar7_00,auStack_fc);
        pcVar10 = FUN_8c023aa0;
        FUN_8c023aa0(&uStack_2c,auStack_fc,FUN_8c023aa0,ar7_00);
        Vec3_dtor(auStack_fc,0xffffffff,pcVar10,ar7_00);
        Vec3_dtor(auStack_ec,0xffffffff,pcVar10,ar7_00);
        pcVar7 = object_dtor_delete;
        object_dtor_delete(auStack_dc,0xffffffff,pcVar10,object_dtor_delete);
        pcVar9 = (code *)0xffffffff;
        Vec3_dtor(auStack_d0,0xffffffff,0xffffffff,pcVar7);
      }
      else if (iVar2 == 1) {
        Vec3_ctor_xyz(auStack_10c,puVar4,puVar11,ar7_00);
        pcVar9 = (code *)auStack_118;
        vec3_copy_8c02b5fc(pcVar9,auStack_60,pcVar9,ar7_00);
        FUN_8c023484(auStack_10c,auStack_118,pcVar9,ar7_00,auStack_128);
        Vec3_scale(auStack_128,auStack_358,pcVar9,ar7_00,auStack_138);
        FUN_8c023aa0(&uStack_2c,auStack_138,pcVar9,ar7_00);
        Vec3_dtor(auStack_138,0xffffffff,pcVar9,ar7_00);
        Vec3_dtor(auStack_128,0xffffffff,pcVar9,ar7_00);
        object_dtor_delete(auStack_118,0xffffffff,pcVar9,ar7_00);
        pcVar7 = Vec3_dtor;
        Vec3_dtor(auStack_10c,0xffffffff,pcVar9,Vec3_dtor);
      }
      else {
        if (iVar2 != 2) {
          uStack_364 = 2;
          uVar3 = 0xffffffff;
          Vec3_dtor(auStack_70,0xffffffff,puVar11,0xffffffff);
          object_dtor_delete(auStack_60,0xffffffff,puVar11,uVar3);
          free_if_nonnull_wrap_102790(&fStack_54,0xffffffff,puVar11,uVar3);
          pfVar8 = &fStack_48;
          Vec3_dtor(pfVar8,0xffffffff,pfVar8,uVar3);
          free_if_nonnull_wrap_102790(auStack_38,0xffffffff,pfVar8,uVar3);
          Vec3_dtor(&uStack_2c,0xffffffff,pfVar8,uVar3);
          return (code *)uStack_364;
        }
        puVar11 = auStack_148;
        Vec3_ctor_xyz(puVar11,Vec3_ctor_xyz,puVar11,ar7_00);
        vec3_copy_8c02b5fc(auStack_154,auStack_60,puVar11,ar7_00);
        FUN_8c023484(auStack_148,auStack_154,auStack_164,ar7_00,auStack_164);
        pcVar7 = Vec3_scale;
        Vec3_scale(auStack_164,auStack_358,Vec3_scale,ar7_00,auStack_174);
        FUN_8c023aa0(&uStack_2c,auStack_174,pcVar7,ar7_00);
        Vec3_dtor(auStack_174,0xffffffff,pcVar7,ar7_00);
        Vec3_dtor(auStack_164,0xffffffff,pcVar7,ar7_00);
        pcVar7 = (code *)0xffffffff;
        pcVar9 = (code *)auStack_154;
        object_dtor_delete(pcVar9,0xffffffff,pcVar9,0xffffffff);
        Vec3_dtor(auStack_148,0xffffffff,pcVar9,pcVar7);
      }
      if (*(int *)(ar4 + 0x134) == 0) {
        *(undefined4 *)(ar4 + 0x214) = 0;
        pcVar9 = (code *)&uStack_2c;
        pcVar7 = pure_virtual_stub;
        iVar2 = pure_virtual_stub(ar4,*(undefined4 *)(uint)ar5[1],pcVar9,pure_virtual_stub);
        if ((iVar2 == 0) || (*(int *)(ar4 + 0x40) == 4)) {
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(ar4 + 0x40) = 5;
          FUN_8c03f3e8(*ar5,FUN_8c03f3e8,2,pcVar7);
          pcVar9 = (code *)(*(int *)(ar4 + 0x134) + 1);
          *(code **)(ar4 + 0x134) = pcVar9;
        }
        Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar9,pcVar7);
      }
      else if (*(int *)(ar4 + 0x134) == 1) {
        pcVar7 = (code *)*ar5;
        pcVar9 = (code *)&uStack_2c;
        iVar2 = FUN_8c04ddd4(ar4,*(undefined4 *)(uint)ar5[1],pcVar9,pcVar7);
        if (iVar2 == 0) {
          *(undefined4 *)(ar4 + 0x134) = 0;
          *(undefined4 *)(ar4 + 0x214) = 1;
          pcVar13 = (code *)0x0;
        }
      }
      break;
    case 0x10:
      pcVar7 = (code *)(uint)ar5[7];
      pcVar13 = (code *)FUN_8c04e7e0(ar4,*(undefined4 *)(uint)ar5[1],pcVar10,pcVar7);
      pcVar9 = pcVar10;
      break;
    case 0x11:
      Vec3_ctor_xyz(auStack_c0,uVar3,pcVar9,pcVar7);
      pcVar7 = (code *)(uint)ar5[3];
      pcVar13 = (code *)FUN_8c055490(ar4,*(undefined4 *)(uint)ar5[1],auStack_c0,pcVar7);
      pcVar9 = pcVar13;
      Vec3_dtor(auStack_c0,0xffffffff,pcVar13,pcVar7);
      break;
    case 0x12:
      if (*(int *)(ar4 + 0x134) == 0) {
        if (cVar24 == '\0') {
          uVar17 = (ulonglong)uStack_2c;
        }
        else {
          uVar17 = 0;
        }
        if (cVar23 == '\0' && (float)uVar17 < 0.0) {
          pcVar13 = (code *)0x2;
          break;
        }
        if (*(int *)(ar4 + 0x21c) != 0) {
          if (cVar24 == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2c) = uVar17;
          }
          *(undefined4 *)(ar4 + 0x28c) = 0;
          *(undefined4 *)(ar4 + 0x134) = 0;
          pcVar13 = (code *)0x0;
          pcVar9 = (code *)0x0;
          break;
        }
        if (cVar24 != '\0') {
          uStack_20 = (undefined4)((ulonglong)*(undefined8 *)(ar5[7] + 8) >> 0x20);
        }
        if (cVar24 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(ar5[3] + 8),in_fr3);
          dVar20 = (double)CONCAT44(0x3fc00000,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          dVar21 = *(double *)(ar5[3] + 8);
          dVar20 = 2.43657959471436e-311;
        }
        if (cVar23 == '\0') {
          fVar15 = SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20);
          dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) - fVar15,SUB84(dVar21,0));
        }
        else {
          fVar15 = SUB84(dVar20 * dVar20,0);
          dVar21 = dVar21 - dVar20 * dVar20;
        }
        uVar3 = (undefined4)((ulonglong)dVar21 >> 0x20);
        uStack_24 = uVar3;
        if (cVar24 != '\0') {
          uStack_24 = SUB84(dVar21,0);
          uStack_20 = uVar3;
        }
        pdVar6 = (double *)(*(int *)(uint)ar5[1] + 4);
        if (cVar24 == '\0') {
          uStack_28 = *(undefined4 *)pdVar6;
          in_dr0 = (double)CONCAT44(uStack_28,fVar15);
        }
        else {
          in_dr0 = *pdVar6;
          uStack_28 = SUB84(in_dr0,0);
          uStack_24 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        }
        Vec3_assign(ar4 + 0x248,&uStack_2c,0x21c,pdVar6);
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      }
      else if (*(int *)(ar4 + 0x134) != 1) break;
      uVar14 = SUB84(in_dr0,0);
      pcVar9 = (code *)FUN_8c054d6c(ar4,*(undefined4 *)(uint)ar5[1],ar4 + 0x248,pcVar10);
      pcVar7 = pcVar10;
      if (pcVar9 == (code *)0x0) {
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar14;
        }
        *(undefined4 *)(ar4 + 0x134) = 0;
        pcVar13 = (code *)0x0;
        pcVar7 = (code *)0x0;
      }
      break;
    case 0x14:
      *(undefined4 *)(ar4 + 0x214) = 0;
      FUN_8c05ae54(ar4,uVar3,pcVar9,pcVar7);
      FUN_8c031c74(ar4,&uStack_2c,*(undefined4 *)(uint)ar5[1],pcVar7);
      pcVar7 = (code *)FUN_8c057280(ar4,*(undefined4 *)(uint)ar5[1],pcVar10,pcVar7);
      pcVar9 = pcVar10;
      if (pcVar7 == (code *)0x0) {
        *(undefined4 *)(ar4 + 0x214) = 1;
        pcVar13 = (code *)0x0;
      }
      break;
    case 0x15:
      uVar3 = *(undefined4 *)(uint)ar5[1];
      puVar5 = &uStack_2c;
      FUN_8c031c74(ar4,puVar5,uVar3,pcVar7);
      uVar14 = SUB84(in_dr0,0);
      FUN_8c031748(ar4,puVar5,uVar3,pcVar7);
      uVar17 = (ulonglong)uVar14;
      if (cVar24 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = uVar17;
      }
      iVar2 = *(int *)(ar4 + 300);
      if (iVar2 == 0) {
        iVar2 = FUN_8c05c28c(ar4,0,uVar3,pcVar7);
        if (iVar2 == 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else if (iVar2 == 1) {
        *(undefined4 *)(ar4 + 0x2b8) = 3;
        FUN_8c032ab0(ar4,1,uVar3,pcVar7);
        uVar14 = (uint)uVar17;
        pcVar7 = (code *)s_CAnimBody_AdvanceFrame_033ba0
                                   (ar4 + 0xb0,s_CAnimBody_AdvanceFrame_033ba0,uVar3,pcVar7);
        if (pcVar7 == (code *)0x1) {
          pcVar7 = (code *)0x0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,0xb0,pcVar7);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          if (cVar24 == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar14;
          }
        }
      }
      else if (iVar2 == 2) {
        FUN_8c05ae54(ar4,2,uVar3,pcVar7);
        FUN_8c032ab0(ar4,iVar2,uVar3,pcVar7);
        iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar2,uVar3,pcVar7);
        if (iVar2 == 1) {
          uVar19 = 0xffffffff;
          uVar3 = 0xc;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xc,0xffffffff,0);
          pcVar7 = ar4 + 0xb0;
          s_CAnimBody_SetFrame_033e6e(pcVar7,uVar3,uVar19,pcVar7);
          *(undefined4 *)(ar4 + 300) = 1;
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          pcVar13 = (code *)0x0;
        }
      }
      pcVar9 = Vec3_assign;
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,Vec3_assign,pcVar7);
      break;
    case 0x16:
      pcVar9 = *(code **)ar5[1];
      puVar5 = &uStack_2c;
      FUN_8c031c74(ar4,puVar5,pcVar9,pcVar7);
      uVar14 = SUB84(in_dr0,0);
      FUN_8c031748(ar4,puVar5,pcVar9,pcVar7);
      uVar17 = (ulonglong)uVar14;
      if (cVar24 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = uVar17;
      }
      iVar2 = *(int *)(ar4 + 300);
      if (iVar2 == 0) {
        pcVar10 = FUN_8c0230f0;
        FUN_8c0230f0(ar4 + 0x14,0,FUN_8c0230f0,pcVar7,auStack_1a4);
        Vec3_ctor_xyz(auStack_1b4,auStack_1b4,pcVar10,pcVar7);
        FUN_8c022dac(auStack_1a4,auStack_1b4,pcVar10,pcVar7);
        uVar3 = (undefined4)(uVar17 >> 0x20);
        uStack_3c8 = (int)uVar17;
        if (cVar24 == '\0') {
          uStack_3c8 = uVar3;
          uVar3 = uStack_3c4;
        }
        uStack_3c4 = uVar3;
        uVar3 = 0x224;
        if (cVar24 == '\0') {
          uVar16 = CONCAT44(uStack_3c8,(int)uVar17);
          *(undefined4 *)(ar4 + 0x224) = uStack_3c8;
        }
        else {
          uVar16 = CONCAT44(uStack_3c4,uStack_3c8);
          *(undefined8 *)(ar4 + 0x224) = uVar16;
        }
        Vec3_dtor(auStack_1b4,0xffffffff,pcVar10,0x224);
        uVar19 = 0xffffffff;
        Vec3_dtor(auStack_1a4,0xffffffff,pcVar10,uVar3);
        Vec3_ctor_xyz(auStack_1c4,uVar19,pcVar10,uVar3);
        FUN_8c0231c8(auStack_1c4,auStack_1c4,pcVar10,uVar3);
        pcVar7 = FUN_8c0231c8;
        FUN_8c0231c8(ar4 + 0x14,FUN_8c0231c8,pcVar10,uVar3);
        FUN_8c010e38(FUN_8c010e38,pcVar7,pcVar10,uVar3);
        if (cVar24 == '\0') {
          *(int *)(ar4 + 0x228) = (int)((ulonglong)uVar16 >> 0x20);
        }
        else {
          *(undefined8 *)(ar4 + 0x228) = uVar16;
        }
        Vec3_dtor(auStack_1c4,0xffffffff,ar4 + 0x228,uVar3);
        *(undefined4 *)(ar4 + 0x40) = 5;
        if (cVar24 == '\0') {
          fVar15 = *(float *)(ar4 + 0x224);
          fVar18 = 5.0;
        }
        else {
          fVar15 = 5.0;
          fVar18 = 4.14784e-43;
        }
        if (cVar23 == '\0' && fVar18 < fVar15) {
          if (*(int *)(ar4 + 0x128) == 0) {
            uVar3 = 5;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
            if (cVar24 == '\0') {
              *(undefined4 *)(ar4 + 0x278) = 0x40c00000;
            }
            else {
              *(undefined8 *)(ar4 + 0x278) = 0x66e3d71d40c00000;
            }
          }
          else {
            uVar3 = 0x278;
            pcVar7 = ar4 + 0x278;
            if (cVar24 == '\0') {
              *(undefined4 *)pcVar7 = 0x3f800000;
            }
            else {
              *(ulonglong *)pcVar7 = CONCAT44(0x3f800000,fVar15);
            }
            Vec3_ctor_xyz(auStack_1d4,ar4 + 0x224,pcVar7,0x278);
            uVar19 = FUN_8c023334(ar4 + 0x14,auStack_1d4,pcVar7,uVar3);
            *(undefined4 *)(ar4 + 0x27c) = uVar19;
            Vec3_dtor(auStack_1d4,0xffffffff,pcVar7,uVar3);
            if (*(int *)(ar4 + 0x27c) == 3) {
              uVar3 = 7;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
            }
            else {
              uVar3 = 8;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
            }
          }
          uVar19 = 0xb0;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar4 + 0xb0,0xb0);
          pcVar9 = (code *)0x12c;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,300,uVar19);
        }
        else {
          *(undefined4 *)(ar4 + 300) = 2;
          uVar19 = 0;
          uVar3 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar4 + 0xb0,uVar19);
          pcVar9 = (code *)0x190;
          uVar3 = rand_range(ar4,0xfa,400,uVar19);
          *(undefined4 *)(ar4 + 0x280) = uVar3;
        }
      }
      else if (iVar2 == 1) {
        Vec3_ctor_xyz(auStack_1e4,1,pcVar9,pcVar7);
        puVar11 = auStack_1e4;
        pcVar7 = Vec3_add;
        Vec3_add(*(undefined4 *)(uint)ar5[1],puVar11,Vec3_add,*(undefined4 *)(uint)ar5[1],auStack_1f4);
        pcVar10 = get_field_1c_026dd8;
        uVar3 = get_field_1c_026dd8(ar4 + 0xb0,puVar11,pcVar7,get_field_1c_026dd8);
        s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar3,pcVar7,pcVar10);
        uVar3 = get_field_1c_026dd8(ar4 + 0xb0,uVar3,pcVar7,pcVar10);
        s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar3,s_Check_This_Motion_Data_0314fc,pcVar10);
        Vec3_set_xyz(auStack_200,ar4 + 0x278,0x228,pcVar10);
        pcVar10 = ar4 + 0x14;
        FUN_8c031eb0(ar4,*(undefined4 *)(uint)ar5[1],auStack_1f4,pcVar10,auStack_210);
        pcVar9 = Vec3_assign;
        Vec3_assign(ar4 + 0x14,auStack_210,Vec3_assign,pcVar10);
        Vec3_dtor(auStack_210,0xffffffff,pcVar9,pcVar10);
        object_dtor_delete(auStack_200,0xffffffff,pcVar9,pcVar10);
        Vec3_dtor(auStack_1f4,0xffffffff,pcVar9,pcVar10);
        Vec3_dtor(auStack_1e4,0xffffffff,pcVar9,pcVar10);
        pcVar7 = ar4 + 0x14;
        Vec3_assign(ar4 + 0x80,pcVar7,pcVar9,pcVar10);
        iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar7,pcVar9,pcVar10);
        if (iVar2 == 1) {
          uVar3 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          pcVar9 = (code *)0xb0;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,0xb0,uVar3);
          *(undefined4 *)(ar4 + 300) = 0;
          if (*(int *)(ar4 + 0x328) == 0) {
            pcVar9 = (code *)0x12c;
            *(undefined4 *)(ar4 + 300) = 0;
            pcVar13 = (code *)0x0;
          }
        }
      }
      else if (iVar2 == 2) {
        *(undefined4 *)(ar4 + 0x2fc) = 1;
        iVar2 = *(int *)(ar4 + 0x280);
        pcVar9 = (code *)(iVar2 + -1);
        *(code **)(ar4 + 0x280) = pcVar9;
        if (iVar2 < 0) {
          FUN_8c03f39c(*ar5,2,pcVar9,iVar2);
          *(undefined4 *)(ar4 + 0x280) = 0;
          uVar12 = 0;
          uVar19 = 0xffffffff;
          uVar3 = 0x10;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar19,uVar12);
          pcVar9 = (code *)0x12c;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        else if (*(int *)(ar4 + 0x328) == 0) {
          *(undefined4 *)(ar4 + 300) = 0;
          pcVar13 = (code *)0x0;
        }
      }
      else if (iVar2 == 3) {
        pcVar9 = s_CAnimBody_AdvanceFrame_033ba0;
        iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,3,s_CAnimBody_AdvanceFrame_033ba0,pcVar7)
        ;
        if (iVar2 == 1) {
          pcVar13 = (code *)0x0;
          *(undefined4 *)(ar4 + 300) = 0;
        }
      }
      *(undefined4 *)(ar4 + 0x328) = 0;
      pcVar7 = (code *)0x328;
      break;
    case 0x18:
      *(undefined4 *)(ar4 + 0x214) = 0;
      Vec3_ctor_xyz(auStack_2f8,uVar3,pcVar9,pcVar7);
      iVar2 = FUN_8c054f7c(ar4,*(undefined4 *)(uint)ar5[1],auStack_2f8,ar5[6]);
      pcVar10 = (code *)(uint)(iVar2 == 0);
      pcVar7 = Vec3_dtor;
      pcVar9 = pcVar10;
      Vec3_dtor(auStack_2f8,0xffffffff,pcVar10,Vec3_dtor);
      if (pcVar10 != (code *)0x0) {
        pcVar13 = (code *)0x0;
        *(undefined4 *)(ar4 + 0x214) = 1;
      }
      break;
    case 0x2c:
      FUN_8c05ae54(ar4,FUN_8c05ae54,pcVar9,pcVar7);
      uVar14 = SUB84(in_dr0,0);
      uVar19 = *(undefined4 *)(uint)ar5[1];
      puVar5 = &uStack_2c;
      FUN_8c031c74(ar4,puVar5,uVar19,pcVar7);
      FUN_8c031748(ar4,puVar5,uVar19,pcVar7);
      uVar3 = 0xa0;
      if (cVar24 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = (ulonglong)uVar14;
      }
      vec3_clear(ar4 + 0x90,0xa0,uVar19,pcVar7);
      pcVar7 = (code *)0xb0;
      pcVar9 = ar4 + 0xb0;
      iVar2 = CAnimBody_AdvanceFrame_wrapper(pcVar9,uVar3,pcVar9,0xb0);
      if (iVar2 == 1) {
        pcVar13 = (code *)0x0;
      }
      break;
    case 0x2e:
      if (*(int *)(ar4 + 0x128) != 0) {
        pcVar13 = (code *)0x2;
        break;
      }
      iVar2 = *(int *)(ar4 + 300);
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 0x214) = 0;
        *(undefined4 *)(ar4 + 0x2e8) = 1;
        uVar3 = 0x2d4;
        vec3_clear(ar4 + 0x2d4,ar4 + 0x2d4,0x2d4,pcVar7);
        uVar14 = SUB84(in_dr0,0);
        vec3_clear(ar4 + 0x2a8,vec3_clear,uVar3,pcVar7);
        vec3_clear(ar4 + 0x90,vec3_clear,ar4 + 0x90,pcVar7);
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0xa0) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0xa0) = (ulonglong)uVar14;
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar14;
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
        }
        else {
          *(ulonglong *)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar14);
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
          in_dr0 = (double)CONCAT44(0x40000000,uVar14);
          *(undefined4 *)(ar4 + 0x2c4) = 0x40000000;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar14;
          in_dr0 = -0.00781250186264515;
          *(undefined8 *)(ar4 + 0x2c4) = 0xbf80000040000000;
        }
        pcVar7 = (code *)0x0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x15,0xffffffff,0);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        pcVar9 = ar4;
LAB_8c03ee06:
        *(undefined4 *)(ar4 + 0x2e8) = 1;
        if (cVar24 == '\0') {
          uVar3 = SUB84(in_dr0,0);
          *(undefined4 *)(ar4 + 0x2e4) = 0x42200000;
        }
        else {
          uVar3 = 0x42200000;
          *(undefined8 *)(ar4 + 0x2e4) = 0x8042200000;
        }
        Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar9,pcVar7);
        if (cVar24 == '\0') {
          uVar17 = CONCAT44(0x3f000000,uVar3);
          *(undefined4 *)(ar4 + 0x278) = 0x3f000000;
        }
        else {
          uVar17 = 0x8c032a643f000000;
          *(undefined8 *)(ar4 + 0x278) = 0x8c032a643f000000;
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = uVar17 & 0xffffffff;
        }
        iVar2 = rand_range(ar4,0,10,pcVar7);
        if (5 < iVar2) {
          uVar3 = rand_range(ar4,0x3c,0x78,pcVar7);
          *(undefined4 *)(ar4 + 0x280) = uVar3;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
          pcVar9 = (code *)0x12c;
          break;
        }
        uVar3 = 300;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else {
        if (iVar2 == 1) goto LAB_8c03ee06;
        if (iVar2 != 2) {
          if (iVar2 == 3) {
            *(undefined4 *)(ar4 + 0x2e8) = 1;
            if (cVar24 == '\0') {
              uVar3 = SUB84(in_dr0,0);
            }
            else {
              uVar3 = (undefined4)*(undefined8 *)(ar4 + 0x278);
            }
            iStack_440 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,pcVar9,pcVar7);
            iVar2 = iStack_440;
            if (iStack_440 == 1) {
              pcVar9 = s_CAnimBody_SetFrame_033e6e;
              s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,1,s_CAnimBody_SetFrame_033e6e,pcVar7);
            }
            if (cVar24 == '\0') {
              uVar19 = *(undefined4 *)(ar4 + 0x2e4);
            }
            else {
              uVar19 = (undefined4)*(undefined8 *)(ar4 + 0x2c4);
            }
            puVar11 = auStack_330;
            Vec3_set_xyz(puVar11,iVar2,pcVar9,puVar11);
            FUN_8c023484(ar4 + 0x14,auStack_330,pcVar9,puVar11,auStack_340);
            Vec3_assign(ar4 + 0x14,auStack_340,pcVar9,puVar11);
            Vec3_dtor(auStack_340,0xffffffff,Vec3_dtor,puVar11);
            puVar11 = auStack_330;
            pcVar7 = object_dtor_delete;
            object_dtor_delete(puVar11,0xffffffff,object_dtor_delete,puVar11);
            Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar7,puVar11);
            pdVar6 = (double *)(ar4 + 0x2e4);
            if (cVar24 == '\0') {
              dVar21 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2e4),uVar3);
              dVar20 = (double)CONCAT44(0x3f4ccccd,uVar19);
            }
            else {
              dVar21 = *(double *)(ar4 + 0x2e4);
              dVar20 = 1.35860200283337e-311;
            }
            if (cVar23 == '\0') {
              dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) *
                                        (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 * dVar20;
            }
            if (cVar24 == '\0') {
              *(int *)pdVar6 = (int)((ulonglong)dVar21 >> 0x20);
            }
            else {
              *pdVar6 = dVar21;
            }
            iVar2 = *(int *)(ar4 + 0x280);
            uVar3 = 0x280;
            *(int *)(ar4 + 0x280) = iVar2 + -1;
            if (iVar2 < 0) {
              *(undefined4 *)(ar4 + 300) = 1;
            }
            pcVar7 = ar4;
            Vec3_ctor_xyz(auStack_350,pdVar6,0x280,ar4);
            FUN_8c0231c8(auStack_350,pdVar6,uVar3,pcVar7);
            iVar2 = (int)((ulonglong)dVar21 >> 0x20);
            iStack_444 = iVar2;
            if (cVar24 != '\0') {
              iStack_444 = SUB84(dVar21,0);
              iStack_440 = iVar2;
            }
            pcVar7 = FUN_8c0231c8;
            FUN_8c0231c8(ar4 + 0x14,pdVar6,uVar3,FUN_8c0231c8);
            uVar3 = (undefined4)((ulonglong)dVar21 >> 0x20);
            if (cVar24 == '\0') {
              dVar21 = (double)CONCAT44(uVar3,iStack_444);
            }
            else {
              in_xd0 = CONCAT44(iStack_440,uVar3);
            }
            if (cVar23 == '\0') {
              fVar15 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
            }
            else {
              fVar15 = SUB84(dVar21 - dVar21,0);
            }
            if (cVar24 == '\0') {
              *(float *)(ar4 + 0x224) = fVar15;
            }
            else {
              *(undefined8 *)(ar4 + 0x224) = in_xd0;
            }
            uVar3 = 0xffffffff;
            Vec3_dtor(auStack_350,0xffffffff,0x224,pcVar7);
            pcVar9 = FUN_8c05ae54;
            FUN_8c05ae54(ar4,uVar3,FUN_8c05ae54,pcVar7);
          }
          break;
        }
      }
      *(undefined4 *)(ar4 + 0x2e8) = 1;
      pcVar10 = ar4 + 0xb0;
      pcVar7 = s_CAnimBody_AdvanceFrame_033ba0;
      iVar2 = s_CAnimBody_AdvanceFrame_033ba0(pcVar10,uVar3,s_CAnimBody_AdvanceFrame_033ba0,pcVar10)
      ;
      if (iVar2 == 1) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,pcVar7,pcVar10);
      }
      uVar12 = 0x2e4;
      Vec3_set_xyz(auStack_304,uVar3,pcVar7,0x2e4);
      FUN_8c023484(ar4 + 0x14,auStack_304,pcVar7,uVar12,auStack_314);
      puVar11 = auStack_314;
      Vec3_assign(ar4 + 0x14,puVar11,puVar11,uVar12);
      Vec3_dtor(auStack_314,0xffffffff,puVar11,uVar12);
      object_dtor_delete(auStack_304,0xffffffff,puVar11,uVar12);
      pcVar10 = ar4 + 0x14;
      pcVar9 = Vec3_assign;
      Vec3_assign(ar4 + 0x80,pcVar10,Vec3_assign,uVar12);
      pcVar7 = ar4 + 0x2e4;
      if (cVar24 == '\0') {
        dVar21 = (double)CONCAT44(0x3f4ccccd,*(undefined4 *)pcVar7);
      }
      else {
        in_xd0 = *(undefined8 *)pcVar7;
        dVar21 = 3.051758532137683e-05;
      }
      if (cVar23 == '\0') {
        fVar15 = (float)((ulonglong)dVar21 >> 0x20);
        dVar21 = (double)CONCAT44(fVar15,SUB84(dVar21,0) * fVar15);
      }
      else {
        dVar21 = dVar21 * dVar21;
      }
      if (cVar24 == '\0') {
        *(int *)(ar4 + 0x2e4) = SUB84(dVar21,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x2e4) = in_xd0;
      }
      FUN_8c032ab0(ar4,pcVar10,pcVar9,pcVar7);
      uStack_434 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (cVar24 == '\0') {
        dVar21 = (double)CONCAT44(uStack_434,*(undefined4 *)(ar4 + 0x2e4));
      }
      else {
        uStack_434 = SUB84(dVar21,0);
        in_xd0 = *(undefined8 *)(ar4 + 0x2e4);
      }
      if (cVar23 == '\0' && SUB84(dVar21,0) < (float)((ulonglong)dVar21 >> 0x20)) {
        *(undefined4 *)(ar4 + 300) = 1;
      }
      dVar20 = 0.0;
      puVar11 = auStack_324;
      Vec3_ctor_xyz(puVar11,pcVar10,puVar11,pcVar7);
      FUN_8c0231c8(auStack_324,pcVar10,puVar11,pcVar7);
      uVar3 = (undefined4)((ulonglong)dVar21 >> 0x20);
      uStack_438 = uVar3;
      if (cVar24 != '\0') {
        uStack_438 = SUB84(dVar21,0);
        uStack_434 = uVar3;
      }
      FUN_8c0231c8(ar4 + 0x14,ar4 + 0x14,puVar11,pcVar7);
      uVar3 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if (cVar24 == '\0') {
        dVar21 = (double)CONCAT44(uVar3,uStack_438);
      }
      else {
        in_xd0 = CONCAT44(uStack_434,uVar3);
      }
      if (cVar23 == '\0') {
        fVar15 = SUB84(dVar21,0) - (float)((ulonglong)dVar21 >> 0x20);
      }
      else {
        fVar15 = SUB84(dVar21 - dVar21,0);
      }
      if (cVar24 == '\0') {
        *(float *)(ar4 + 0x224) = fVar15;
      }
      else {
        *(undefined8 *)(ar4 + 0x224) = in_xd0;
      }
      pcVar9 = Vec3_dtor;
      Vec3_dtor(auStack_324,0xffffffff,Vec3_dtor,pcVar7);
      if (cVar24 == '\0') {
        fVar15 = *(float *)(ar4 + 0x224);
        fVar18 = 80.0;
      }
      else {
        fVar15 = 80.0;
        fVar18 = -80.0;
      }
      if (cVar23 != '\0' || fVar15 <= fVar18) {
        if (cVar24 == '\0') {
          dVar21 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x224),uVar19);
          dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),0xc2a00000);
        }
        else {
          dVar21 = *(double *)(ar4 + 0x224);
        }
        if (cVar23 == '\0') {
          bVar22 = (float)((ulonglong)dVar21 >> 0x20) < SUB84(dVar20,0);
        }
        else {
          bVar22 = dVar21 < dVar20;
        }
        if (!bVar22) break;
      }
      if (cVar24 == '\0') {
        dVar21 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c4),SUB84(dVar20,0));
        dVar20 = (double)CONCAT44(0xbf800000,fVar15);
      }
      else {
        dVar21 = *(double *)(ar4 + 0x2c4);
        dVar20 = -8.410980261839484e+168;
      }
      if (cVar23 == '\0') {
        dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) *
                                  (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar21,0));
      }
      else {
        dVar21 = dVar21 * dVar20;
      }
      pcVar7 = (code *)0x2c4;
      if (cVar24 == '\0') {
        *(int *)(ar4 + 0x2c4) = (int)((ulonglong)dVar21 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x2c4) = dVar21;
      }
    }
  }
  else {
override_jmp_8c03cc1e_case_7:
    pcVar13 = (code *)0x2;
  }
  FUN_8c031ab4(ar4,*(undefined4 *)(ar5[1] + 4),pcVar9,pcVar7);
  pcStack_36c = pcVar13;
  Vec3_dtor(auStack_70,0xffffffff,pcVar9,pcVar7);
  object_dtor_delete(auStack_60,0xffffffff,pcVar9,pcVar7);
  free_if_nonnull_wrap_102790(&fStack_54,0xffffffff,pcVar9,pcVar7);
  Vec3_dtor(&fStack_48,0xffffffff,pcVar9,pcVar7);
  uVar3 = 0xffffffff;
  free_if_nonnull_wrap_102790(auStack_38,0xffffffff,0xffffffff,pcVar7);
  Vec3_dtor(&uStack_2c,0xffffffff,uVar3,pcVar7);
  return pcStack_36c;
}

__asm__(".globl _FUN_8c03c94c\n.set _FUN_8c03c94c, _FUN_8c03c94c_def\n");
