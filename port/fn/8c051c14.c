#include "../decls.h"
undefined4 FUN_8c051c14_def(int ar4,undefined4 ar5,undefined *ar6,code *ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  code *ar5_01;
  undefined4 uVar5;
  undefined *ar6_00;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  double in_dr0;
  double dVar9;
  undefined4 uVar10;
  undefined4 in_fr3;
  double dVar11;
  undefined4 in_fr15;
  undefined8 in_xd0;
  bool bVar12;
  char cVar13;
  char cVar14;
  int in_stack_fffffe58;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [12];
  undefined1 auStack_fc [12];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [12];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 auStack_3c [4];
  undefined1 auStack_2c [20];
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar6 = 1;
  uVar5 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_3c,uVar5,ar6_00,ar7);
  FUN_8c0230f0(ar4 + 0x14,uVar5,ar6_00,ar7,auStack_74);
  FUN_8c0230f0(ar6,uVar5,ar6_00,ar7,auStack_84);
  FUN_8c022dac(auStack_74,auStack_84,ar6_00,ar7);
  dVar11 = in_dr0;
  if (cVar14 == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
  puVar3 = (undefined *)0xffffffff;
  Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
  Vec3_set_zero(&fStack_48,puVar3,ar6_00,ar7);
  Vec3_set_zero(&uStack_54,puVar3,ar6_00,ar7);
  Vec3_ctor_zero(auStack_64,puVar3,ar6_00,ar7);
  iVar1 = *(int *)(ar4 + 0x28c);
  if (iVar1 == 0) {
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,puVar3,ar6_00,ar7);
    if (iVar1 == 1) {
      FUN_8c02a1fc(ar4 + 0x2c8,puVar3,ar6_00,ar7);
      *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      FUN_8c0230f0(ar4 + 0x14,puVar3,ar6_00,ar7,auStack_94);
      FUN_8c022dac(auStack_94,ar6,ar6_00,ar7);
      if (cVar14 == '\0') {
        *(int *)(ar4 + 0x224) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x224) = in_dr0;
      }
      uVar5 = 0xffffffff;
      Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7);
      FUN_8c0231c8(ar6,uVar5,ar6_00,ar7);
      iVar1 = ar4 + 0x14;
      FUN_8c0231c8(iVar1,uVar5,ar6_00,ar7);
      FUN_8c010e38(iVar1,FUN_8c010e38,ar6_00,ar7,in_stack_fffffe58);
      if (cVar14 == '\0') {
        *(int *)(ar4 + 0x228) = (int)((ulonglong)in_dr0 >> 0x20);
        fVar7 = *(float *)(ar4 + 0x224);
        fVar8 = 3.0;
      }
      else {
        *(double *)(ar4 + 0x228) = in_dr0;
        in_xd0 = *(undefined8 *)(ar4 + 0x224);
        fVar7 = 3.0;
        fVar8 = 3.64338e-43;
      }
      if (cVar13 == '\0' && fVar7 < fVar8) {
        uVar6 = 0;
        FUN_8c0230f0(ar4 + 0x14,auStack_a4,ar6_00,ar7,auStack_a4);
        FUN_8c022dac(auStack_a4,&DAT_8c125d48,ar6_00,ar7);
        if (cVar14 == '\0') {
          fVar7 = 45.0;
        }
        else {
          fVar8 = 45.0;
          fVar7 = 8.91226e-43;
        }
        Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7);
        if (cVar13 != '\0' || fVar7 <= fVar8) {
          uVar5 = FUN_8c023334(ar4 + 0x14,&DAT_8c125d48,ar6_00,ar7);
          *(undefined4 *)(ar4 + 0x27c) = uVar5;
        }
        else {
          *(undefined4 *)(ar4 + 0x27c) = 0;
        }
        *(undefined4 *)(ar4 + 0x28c) = 0;
        goto LAB_8c0525f2;
      }
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x40400000,*(undefined4 *)(ar4 + 0x224));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x224);
        dVar9 = 6.28643325334977e-312;
      }
      if (cVar13 == '\0') {
        fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar14 == '\0') {
        *(float *)(ar4 + 0x224) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x224) = in_xd0;
      }
      if (*(int *)(ar4 + 0x128) == 0) {
        ar7 = (code *)0x0;
        ar6_00 = (undefined *)0xffffffff;
        puVar3 = (undefined *)0x5;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
      }
      else {
        puVar3 = ar6;
        uVar5 = FUN_8c023334(ar4 + 0x14,ar6,ar6_00,ar7);
        *(undefined4 *)(ar4 + 0x27c) = uVar5;
        if (*(int *)(ar4 + 0x27c) == 3) {
          ar7 = (code *)0x0;
          ar6_00 = (undefined *)0xffffffff;
          uVar5 = 7;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
          uVar5 = FUN_8c026db0(ar4,uVar5,ar6_00,ar7);
          uVar4 = FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6_00,ar7);
          puVar2 = (undefined4 *)deref_u32(uVar4,uVar5,ar6_00,ar7);
          uVar5 = puVar2[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar2;
          *(undefined4 *)(ar4 + 0xb8) = uVar5;
          puVar3 = (undefined *)puVar2[2];
          *(undefined **)(ar4 + 0xbc) = puVar3;
          if (*(int *)(ar4 + 0x128) == 1) {
            *(undefined **)(ar4 + 0xb4) = &DAT_8c13630c;
          }
          else {
            *(undefined **)(ar4 + 0xb4) = &DAT_8c136354;
          }
          if (cVar14 == '\0') {
            dVar9 = (double)CONCAT44(0x42700000,*(undefined4 *)(ar4 + 0x224));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x224);
            dVar9 = -3.102702123153873e+34;
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 / dVar9,0);
          }
          if (cVar14 == '\0') {
            *(float *)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(undefined8 *)(ar4 + 0x2c0) = in_xd0;
          }
        }
        else if (*(int *)(ar4 + 0x27c) == 4) {
          ar7 = (code *)0x0;
          ar6_00 = (undefined *)0xffffffff;
          uVar5 = 8;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
          puVar3 = (undefined *)FUN_8c026db0(ar4,uVar5,ar6_00,ar7);
          uVar5 = FUN_8c03c0f0(ar4 + 0xb0,puVar3,ar6_00,ar7);
          puVar2 = (undefined4 *)deref_u32(uVar5,puVar3,ar6_00,ar7);
          uVar5 = puVar2[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar2;
          *(undefined4 *)(ar4 + 0xb8) = uVar5;
          *(undefined4 *)(ar4 + 0xbc) = puVar2[2];
          if (*(int *)(ar4 + 0x128) == 1) {
            *(undefined **)(ar4 + 0xb4) = &DAT_8c136324;
          }
          else {
            *(undefined **)(ar4 + 0xb4) = &DAT_8c13636c;
          }
          if (cVar14 == '\0') {
            dVar9 = (double)CONCAT44(0x42700000,*(undefined4 *)(ar4 + 0x224));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x224);
            dVar9 = 1.53687565615637e-311;
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 / dVar9,0);
          }
          if (cVar14 == '\0') {
            *(float *)(ar4 + 0x2c0) = fVar7;
          }
          else {
            *(undefined8 *)(ar4 + 0x2c0) = in_xd0;
          }
        }
      }
      vec3_clear(ar4 + 0x2d4,puVar3,ar6_00,ar7);
      vec3_clear(ar4 + 0x2a8,puVar3,ar6_00,ar7);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,puVar3,ar6_00,ar7);
      in_dr0 = (double)(ulonglong)(uint)fVar7;
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(double *)(ar4 + 0x2c) = in_dr0;
      }
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
    }
    else if (iVar1 != 2) goto LAB_8c0525f2;
    uVar5 = SUB84(in_dr0,0);
    FUN_8c05ae54(ar4,puVar3,ar6_00,ar7);
    if (*(int *)(ar4 + 0x128) == 0) {
      Vec3_scale(ar6,&DAT_8c1365a0,ar6_00,ar7,auStack_b4);
      ar5_00 = auStack_b4;
      Vec3_add(ar5,ar5_00,ar6_00,ar7,auStack_c4);
      Vec3_set_xyz(auStack_d0,ar5_00,ar6_00,ar7);
      ar7 = (code *)(ar4 + 0x14);
      ar6_00 = auStack_c4;
      FUN_8c031eb0(ar4,ar5,ar6_00,ar7,auStack_e0);
      Vec3_assign(ar4 + 0x14,auStack_e0,ar6_00,ar7);
      Vec3_dtor(auStack_e0,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_d0,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_c4,0xffffffff,ar6_00,ar7);
      puVar3 = (undefined *)0xffffffff;
      Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7);
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x40400000,uVar5);
      }
      else {
        dVar9 = 4.58883662057755e-312;
      }
      if (cVar13 == '\0') {
        bVar12 = (float)((ulonglong)dVar9 >> 0x20) < (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        bVar12 = dVar9 < dVar11;
      }
      if (!bVar12) {
        *(undefined4 *)(ar4 + 0x28c) = 0;
        uVar6 = 0;
        FUN_8c0230f0(ar4 + 0x14,puVar3,ar6_00,ar7,auStack_f0);
        fVar7 = (float)((ulonglong)dVar9 >> 0x20);
        FUN_8c022dac(auStack_f0,&DAT_8c125d48,ar6_00,ar7);
        if (cVar14 == '\0') {
          fVar8 = 45.0;
        }
        else {
          fVar7 = 45.0;
          fVar8 = 8.91226e-43;
        }
        puVar3 = (undefined *)0xffffffff;
        Vec3_dtor(auStack_f0,0xffffffff,ar6_00,ar7);
        if (cVar13 != '\0' || fVar8 <= fVar7) {
          puVar3 = &DAT_8c125d48;
          uVar5 = FUN_8c023334(ar4 + 0x14,&DAT_8c125d48,ar6_00,ar7);
          *(undefined4 *)(ar4 + 0x27c) = uVar5;
        }
        else {
          *(undefined4 *)(ar4 + 0x27c) = 0;
        }
      }
      s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,puVar3,ar6_00,ar7);
    }
    else {
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x3d4ccccd,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar9 = 5.238690701939511e-11;
      }
      if (cVar13 == '\0') {
        fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 + dVar9,0);
      }
      if (cVar14 == '\0') {
        *(float *)(ar4 + 0x28) = fVar7;
        fVar7 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      dVar9 = (double)CONCAT44(0x3f800000,fVar7);
      if (cVar13 == '\0' && 1.0 < fVar7) {
        if (cVar14 == '\0') {
          dVar9 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar9 = 3.73983522256399e-312;
        }
        if (cVar13 == '\0') {
          fVar7 = (float)((ulonglong)dVar9 >> 0x20);
          dVar9 = (double)CONCAT44(fVar7,SUB84(dVar9,0) - fVar7);
        }
        else {
          dVar9 = dVar9 - dVar9;
        }
        in_stack_fffffe58 = ar4;
        if (cVar14 == '\0') {
          *(int *)(ar4 + 0x28) = SUB84(dVar9,0);
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
      }
      CAnimBody_GetCurFrame(ar4 + 0xb0,puVar3,ar6_00,ar7,in_stack_fffffe58);
      uVar5 = (undefined4)((ulonglong)dVar11 >> 0x20);
      uStack_180 = (undefined4)((ulonglong)dVar9 >> 0x20);
      if (cVar14 != '\0') {
        uStack_180 = SUB84(dVar9,0);
      }
      FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),ar6_00,ar7);
      vec3_copy_8c023d8c(&uStack_54,auStack_fc,ar6_00,ar7);
      uVar4 = 0xffffffff;
      object_dtor_delete(auStack_fc,0xffffffff,ar6_00,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7,in_stack_fffffe58);
      uVar10 = (undefined4)((ulonglong)dVar9 >> 0x20);
      uStack_184 = uVar10;
      if (cVar14 != '\0') {
        uStack_184 = SUB84(dVar9,0);
        uStack_180 = uVar10;
      }
      uVar4 = get_field_1c_026dd8(ar4 + 0xb0,uVar4,ar6_00,ar7);
      iVar1 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar4,ar6_00,ar7);
      if (cVar14 == '\0') {
        dVar11 = (double)CONCAT44(uStack_184,in_fr3);
      }
      else {
        dVar11 = (double)CONCAT44(uStack_180,uStack_184);
      }
      fVar7 = (float)iVar1;
      dVar9 = (double)(ulonglong)(uint)fVar7;
      if (cVar13 == '\0' && fVar7 < 0.0) {
        if (cVar14 == '\0') {
          dVar9 = (double)CONCAT44(0x4f800000,fVar7);
        }
        else {
          dVar9 = 2.0000005923211575;
        }
        if (cVar13 == '\0') {
          fVar7 = (float)((ulonglong)dVar9 >> 0x20);
          dVar9 = (double)CONCAT44(fVar7,SUB84(dVar9,0) + fVar7);
        }
        else {
          dVar9 = dVar9 + dVar9;
        }
      }
      if (cVar13 == '\0') {
        dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) / SUB84(dVar9,0),
                                  SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 / dVar9;
      }
      if (cVar13 == '\0') {
        dVar11 = (double)CONCAT44(uVar5,1.0 - (float)((ulonglong)dVar11 >> 0x20));
      }
      else {
        dVar11 = (double)CONCAT44(uVar5,0x3f800000) - dVar11;
      }
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x40000000,SUB84(dVar9,0));
      }
      else {
        dVar9 = 1.51139150211502e-311;
      }
      if (cVar13 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                  SUB84(dVar11,0) * (float)((ulonglong)dVar9 >> 0x20));
      }
      else {
        dVar11 = dVar11 * dVar9;
      }
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c8),uStack_54);
      }
      else {
        in_xd0 = CONCAT44(uStack_50,uStack_54);
        dVar9 = *(double *)(ar4 + 0x2c8);
      }
      if (cVar13 == '\0') {
        fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar7);
      }
      else {
        dVar9 = *(double *)(ar4 + 0x2c0);
      }
      fVar7 = SUB84(dVar11,0);
      if (cVar13 == '\0') {
        fStack_48 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20) * fVar7;
      }
      else {
        fStack_48 = SUB84(dVar9 * dVar9 * dVar11,0);
      }
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2cc),uStack_50);
      }
      else {
        fStack_48 = (float)in_xd0;
        in_xd0 = CONCAT44(uStack_4c,uStack_50);
        dVar9 = *(double *)(ar4 + 0x2cc);
      }
      if (cVar13 == '\0') {
        fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar8);
      }
      else {
        dVar9 = *(double *)(ar4 + 0x2c0);
      }
      if (cVar13 == '\0') {
        fStack_44 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20) * fVar7;
      }
      else {
        fStack_44 = SUB84(dVar9 * dVar9 * dVar11,0);
      }
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2d0),uStack_4c);
      }
      else {
        fStack_44 = (float)in_xd0;
        in_xd0 = CONCAT44(fStack_48,uStack_4c);
        dVar9 = *(double *)(ar4 + 0x2d0);
      }
      if (cVar13 == '\0') {
        fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar8);
      }
      else {
        dVar9 = *(double *)(ar4 + 0x2c0);
      }
      if (cVar13 == '\0') {
        fVar8 = (float)((ulonglong)dVar9 >> 0x20);
        dVar11 = (double)CONCAT44(fVar8,SUB84(dVar9,0) * fVar8 * fVar7);
      }
      else {
        dVar11 = dVar9 * dVar9 * dVar11;
      }
      if (cVar14 == '\0') {
        uStack_40 = SUB84(dVar11,0);
      }
      else {
        uStack_40 = (undefined4)in_xd0;
        auStack_3c[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      vec3_copy_8c023d8c(ar4 + 0x2c8,&uStack_54,ar6_00,ar7);
      fVar7 = (float)((ulonglong)dVar11 >> 0x20);
      vec3_copy_8c02b5fc(auStack_108,&fStack_48,ar6_00,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_108,ar6_00,ar7,auStack_118);
      Vec3_assign(ar4 + 0x14,auStack_118,ar6_00,ar7);
      Vec3_dtor(auStack_118,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_108,0xffffffff,ar6_00,ar7);
      ar5_01 = Vec3_length;
      Vec3_length(ar4 + 0x14,Vec3_length,ar6_00,ar7);
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_01,ar6_00,ar7);
      if (iVar1 == 1) {
        uVar6 = 0;
        uVar4 = 0xffffffff;
        uVar5 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar4,uVar6);
        *(undefined4 *)(ar4 + 0x28c) = 0;
        uVar6 = 0;
        ar7 = FUN_8c0230f0;
        FUN_8c0230f0(ar4 + 0x14,uVar5,uVar4,FUN_8c0230f0,auStack_128);
        ar6_00 = &DAT_8c125d48;
        FUN_8c022dac(auStack_128,&DAT_8c125d48,&DAT_8c125d48,ar7);
        if (cVar14 == '\0') {
          fVar8 = 45.0;
        }
        else {
          fVar7 = 45.0;
          fVar8 = 8.91226e-43;
        }
        Vec3_dtor(auStack_128,0xffffffff,ar6_00,ar7);
        if (cVar13 != '\0' || fVar8 <= fVar7) {
          ar7 = FUN_8c023334;
          ar6_00 = (undefined *)FUN_8c023334(ar4 + 0x14,&DAT_8c125d48,ar6_00,FUN_8c023334);
          *(undefined **)(ar4 + 0x27c) = ar6_00;
        }
        else {
          *(undefined4 *)(ar4 + 0x27c) = 0;
        }
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(undefined4 *)(ar4 + 0x2b8) = 2;
      }
    }
  }
LAB_8c0525f2:
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
  Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
  object_dtor_delete(&uStack_54,0xffffffff,ar6_00,ar7);
  object_dtor_delete(&fStack_48,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
  return uVar6;
}

__asm__(".globl _FUN_8c051c14\n.set _FUN_8c051c14, _FUN_8c051c14_def\n");
