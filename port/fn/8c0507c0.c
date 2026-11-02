#include "../decls.h"
undefined4 FUN_8c0507c0_def(int *ar4,float *ar5,code *ar6,code *ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  code *pcVar5;
  undefined4 uVar6;
  code *ar6_00;
  undefined4 ar6_01;
  undefined1 *ar5_00;
  float fVar7;
  uint uVar8;
  ulonglong in_dr0;
  undefined8 uVar9;
  float fVar13;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  undefined4 in_fr3;
  undefined8 in_dr4;
  undefined4 in_fr15;
  float fVar14;
  ulonglong in_xd0;
  char cVar15;
  char cVar16;
  undefined4 in_stack_00000000;
  int *in_stack_00000004;
  int in_stack_00000008;
  code *ain0;
  undefined8 uStack_258;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_234;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 auStack_1dc [4];
  undefined1 auStack_1cc [12];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [20];
  
  cVar16 = '\0';
  cVar15 = '\0';
  dVar11 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),in_fr15);
  pcVar5 = (code *)ar5;
  ar6_00 = ar6;
  ain0 = ar7;
  Vec3_ctor_zero(auStack_34,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_44,pcVar5,ar6_00,ar7);
  FUN_8c031700(ar4,pcVar5,ar6_00,ar7);
  iVar1 = ar4[0x1a];
  if (iVar1 == 0) {
    FUN_8c0230f0(ar4 + 0x20,auStack_54,ar6_00,ar7,auStack_54);
    fStack_1f8 = (float)in_dr0;
    Vec3_assign(ar4 + 0x20,auStack_54,ar6_00,ar7);
    Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
    if (ar4[0x4a] < 3) {
      ar7 = (code *)0x0;
      ar6_00 = (code *)0xffffffff;
      uVar6 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0);
      FUN_8c022d04(ar4 + 5,uVar6,ar6_00,ar7);
      if (ar4[0x49] != 0x2e) {
        if (cVar16 == '\0') {
          fVar7 = ar5[2];
        }
        else {
          in_xd0 = *(ulonglong *)(ar5 + 2);
          fVar7 = 0.0;
        }
        if (cVar15 == '\0' && fVar7 < 0.0) {
          pfVar4 = ar5 + 2;
          if (cVar16 == '\0') {
            *pfVar4 = 0.0;
          }
          else {
            pfVar4[0] = 0.0;
            pfVar4[1] = 0.0;
          }
        }
        if (cVar16 == '\0') {
          fStack_1f8 = *ar5;
        }
        else {
          in_xd0 = *(ulonglong *)ar5;
          fStack_1f8 = 0.0;
        }
        if (cVar15 == '\0' && fStack_1f8 < 0.0) {
          if (cVar16 == '\0') {
            *ar5 = 0.0;
          }
          else {
            fStack_1f8 = 0.0;
            ar5[0] = 0.0;
            ar5[1] = 0.0;
          }
        }
      }
    }
    else {
      if (cVar16 == '\0') {
        fStack_1f8 = *ar5;
      }
      else {
        in_xd0 = *(ulonglong *)ar5;
        fStack_1f8 = 0.0;
      }
      if (cVar15 == '\0' && 0.0 < fStack_1f8) {
        if (cVar16 == '\0') {
          fStack_1f8 = ar5[2];
        }
        else {
          in_xd0 = *(ulonglong *)(ar5 + 2);
          fStack_1f8 = 0.0;
        }
        if (cVar15 == '\0' && fStack_1f8 < 0.0) {
          pfVar4 = ar5 + 2;
          if (cVar16 == '\0') {
            *pfVar4 = 0.0;
          }
          else {
            fStack_1f8 = 0.0;
            pfVar4[0] = 0.0;
            pfVar4[1] = 0.0;
          }
        }
      }
      piVar3 = in_stack_00000004;
      pfVar4 = ar5;
      iVar1 = (**(code **)(*in_stack_00000004 + 0x130))(in_stack_00000004,ar5,ar6_00,ar7);
      if (iVar1 == 0) {
        Vec3_length(ar4 + 0x20,pfVar4,ar6_00,ar7);
        pfVar4 = (float *)(ar4 + 0x22);
        if (cVar16 == '\0') {
          fStack_1f8 = *pfVar4;
        }
        else {
          in_xd0 = *(ulonglong *)pfVar4;
        }
        if (fStack_1f8 == 0.0) {
          if (cVar16 == '\0') {
            fStack_1f8 = (float)ar4[0x20];
          }
          else {
            in_xd0 = *(ulonglong *)(ar4 + 0x20);
          }
          if (fStack_1f8 == 0.0) {
            ar6_00 = FUN_8c022d04;
            FUN_8c022d04(ar4 + 0x20,pfVar4,FUN_8c022d04,ar7);
          }
        }
        FUN_8c02374c(ar4 + 0x20,pfVar4,ar6_00,ar7);
        Vec3_assign(ar4 + 0x20,auStack_64,ar6_00,ar7);
        Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
        if (in_stack_00000008 == 1) {
          iVar1 = 10;
        }
        else {
          iVar1 = 2;
        }
        uVar6 = 100;
        iVar2 = rand_range(ar4,0,100,ar7);
        if ((iVar1 < iVar2) || (ar4[0x4a] != 4)) {
          ar7 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,99,0xffffffff,0);
        }
        else {
          Vec3_set_xyz(auStack_70,Vec3_set_xyz,uVar6,ar7);
          FUN_8c023484(ar4 + 0x20,auStack_70,uVar6,ar7,auStack_80);
          Vec3_assign(ar4 + 0x20,auStack_80,uVar6,ar7);
          Vec3_dtor(auStack_80,0xffffffff,uVar6,ar7);
          object_dtor_delete(auStack_70,0xffffffff,uVar6,ar7);
          ar7 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x49,0xffffffff,0);
        }
      }
      else if (iVar1 == 1) {
        ar7 = (code *)0x0;
        ar6_00 = (code *)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0);
      }
      else if (iVar1 == 2) {
        if (cVar16 == '\0') {
          uVar9 = CONCAT44(*ar5,fStack_1f8);
        }
        else {
          uVar9 = *(undefined8 *)ar5;
        }
        FUN_8c010e38(piVar3,pfVar4,ar6_00,ar7,ain0);
        fVar7 = (float)((ulonglong)uVar9 >> 0x20);
        if (cVar16 == '\0') {
          fVar13 = 1100.0;
          fStack_1f8 = fVar7;
          fVar14 = (float)uVar9;
        }
        else {
          fVar14 = 1100.0;
          fVar13 = -1.0;
          fStack_1f8 = (float)uVar9;
          fStack_1f4 = fVar7;
        }
        FUN_8c010e38(piVar3,pfVar4,ar6_00,ar7,ain0);
        if (cVar16 != '\0') {
          in_xd0 = CONCAT44(fStack_1f4,fVar13);
          fStack_1f8 = fVar14;
        }
        if (cVar15 != '\0' || fVar13 <= fStack_1f8) {
          pcVar5 = Vec3_length;
          Vec3_length(ar4 + 0x20,pfVar4,ar6_00,Vec3_length);
          uVar6 = 0x88;
          if (cVar16 == '\0') {
            fStack_1f8 = (float)ar4[0x22];
          }
          else {
            in_xd0 = *(ulonglong *)(ar4 + 0x22);
          }
          if (fStack_1f8 == 0.0) {
            if (cVar16 == '\0') {
              fStack_1f8 = (float)ar4[0x20];
            }
            else {
              in_xd0 = *(ulonglong *)(ar4 + 0x20);
            }
            if (fStack_1f8 == 0.0) {
              FUN_8c022d04(ar4 + 0x20,pfVar4,0x88,pcVar5);
            }
          }
          FUN_8c02374c(ar4 + 0x20,pfVar4,uVar6,pcVar5);
          Vec3_assign(ar4 + 0x20,auStack_90,uVar6,pcVar5);
          Vec3_dtor(auStack_90,0xffffffff,uVar6,pcVar5);
          if (cVar16 == '\0') {
            *ar5 = 1100.0;
          }
          else {
            fStack_1f8 = 1100.0;
            ar5[0] = 1100.0;
            ar5[1] = -1.0;
          }
          ar7 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,99,0xffffffff,0);
        }
        else {
          if (cVar16 == '\0') {
            *ar5 = 1600.0;
          }
          else {
            fStack_1f8 = 1600.0;
            ar5[0] = 1600.0;
            ar5[1] = -9.942077e-32;
          }
          ar7 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0);
        }
      }
    }
    Vec3_assign(ar4 + 0x15,ar4 + 0x20,ar6_00,ar7);
    Vec3_length(ar4 + 5,Vec3_length,ar6_00,ar7);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,s_CAnimBody_SetFrame_033e6e,ar6_00,ar7);
    ar4[0xae] = 2;
    if (cVar16 == '\0') {
      ar4[10] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 10) = (ulonglong)(uint)fStack_1f8;
    }
    FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,ar6_00,ar7);
    if (cVar16 == '\0') {
      dVar10 = (double)CONCAT44(0x43a00000,(int)*(ulonglong *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(ulonglong *)(ar4 + 0x28);
      dVar10 = -8.625516889892592e-251;
    }
    if (cVar15 == '\0') {
      fVar7 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar10 * dVar10,0);
    }
    if (cVar16 == '\0') {
      ar4[0x28] = (int)fVar7;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_xd0;
    }
    pcVar5 = FUN_8c03c314;
    FUN_8c03c314(ar4,FUN_8c03c314,ar6_00,ar7);
    in_dr0 = (ulonglong)(uint)fVar7;
    if (cVar16 == '\0') {
      ar4[0xb] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0xb) = in_dr0;
    }
    ar4[0x1a] = ar4[0x1a] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (ar4[0x4a] == 0) {
        pcVar5 = FUN_8c0230f0;
        FUN_8c0230f0(ar4 + 0x20,FUN_8c0230f0,ar6_00,ar7,auStack_160);
        fVar7 = (float)in_dr0;
        Vec3_normalize(auStack_160,pcVar5,ar6_00,ar7);
        Vec3_assign(auStack_34,auStack_170,ar6_00,ar7);
        Vec3_dtor(auStack_170,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_160,0xffffffff,ar6_00,ar7);
        if (cVar16 == '\0') {
          fVar7 = (float)ar4[0xb];
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + 0xb);
        }
        if (cVar15 == '\0') {
          fVar7 = fVar7 + 1.0;
        }
        else {
          fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
        }
        uStack_240 = in_xd0;
        if (cVar16 == '\0') {
          uStack_240 = CONCAT44(ar4,fVar7);
        }
        if (cVar16 == '\0') {
          *(undefined4 *)((*(uint*)((uchar*)&uStack_240+4)) + 0x2c) = (undefined4)uStack_240;
          dVar11 = (double)CONCAT44(0x42c80000,(undefined4)uStack_240);
        }
        else {
          *(ulonglong *)((*(uint*)((uchar*)&uStack_240+4)) + 0x2c) = uStack_240;
          dVar11 = 2.89144980428368e-312;
          in_xd0 = uStack_240;
        }
        if (cVar15 == '\0') {
          fStack_1e0 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
        }
        else {
          fStack_1e0 = SUB84(dVar11 / dVar11,0);
        }
        if (cVar16 != '\0') {
          fStack_1e0 = (float)in_xd0;
          auStack_1dc[0] = (undefined4)(in_xd0 >> 0x20);
        }
      }
      else {
        piVar3 = ar4 + 0x20;
        FUN_8c0230f0(piVar3,piVar3,ar6_00,ar7,auStack_180);
        fVar7 = (float)in_dr0;
        Vec3_normalize(auStack_180,piVar3,ar6_00,ar7);
        Vec3_assign(auStack_34,auStack_190,ar6_00,ar7);
        Vec3_dtor(auStack_190,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_180,0xffffffff,ar6_00,ar7);
        if (cVar16 == '\0') {
          fVar7 = (float)ar4[0xb];
        }
        else {
          in_xd0 = *(ulonglong *)(ar4 + 0xb);
        }
        if (cVar15 == '\0') {
          fVar7 = fVar7 + 1.0;
        }
        else {
          fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
        }
        uStack_248 = in_xd0;
        if (cVar16 == '\0') {
          uStack_248 = CONCAT44(ar4,fVar7);
        }
        if (cVar16 == '\0') {
          *(undefined4 *)((*(uint*)((uchar*)&uStack_248+4)) + 0x2c) = (undefined4)uStack_248;
          dVar11 = (double)CONCAT44(0x43fa0000,(undefined4)uStack_248);
        }
        else {
          *(ulonglong *)((*(uint*)((uchar*)&uStack_248+4)) + 0x2c) = uStack_248;
          dVar11 = 2.89154888428735e-312;
          in_xd0 = uStack_248;
        }
        if (cVar15 == '\0') {
          fStack_1e0 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
        }
        else {
          fStack_1e0 = SUB84(dVar11 / dVar11,0);
        }
        if (cVar16 != '\0') {
          fStack_1e0 = (float)in_xd0;
          auStack_1dc[0] = (undefined4)(in_xd0 >> 0x20);
        }
      }
      Vec3_scale(auStack_34,&fStack_1e0,ar6_00,ar7,auStack_1a0);
      FUN_8c023aa0(ar4 + 0x20,auStack_1a0,ar6_00,ar7);
      uVar6 = 0xffffffff;
      Vec3_dtor(auStack_1a0,0xffffffff,ar6_00,ar7);
      Vec3_length(ar4 + 0x20,uVar6,ar6_00,ar7);
      if (cVar16 == '\0') {
        dVar11 = (double)CONCAT44(0x3f70a3d7,(int)*(ulonglong *)(ar4 + 10));
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + 10);
        dVar11 = -9.106528023795323e-251;
      }
      if (cVar15 == '\0') {
        fVar7 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar11 * dVar11,0);
      }
      if (cVar16 == '\0') {
        ar4[10] = (int)fVar7;
      }
      else {
        *(ulonglong *)(ar4 + 10) = in_xd0;
      }
      FUN_8c04dd34(ar4,*(int *)(ar6 + 4),ar6_00,ar7);
      iVar1 = FUN_8c031de8(ar4,0,ar6_00,ar7);
      if (iVar1 == 0) {
        (**(code **)(*ar4 + 0x2c))(ar4,*ar4,ar6_00,ar7);
        FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,ar6_00,ar7);
        ar4[0x1a] = 0;
        Vec3_assign(ar4 + 5,ar4 + 0x20,ar6_00,ar7);
        FUN_8c04dd34(ar4,*(int *)(ar6 + 4),ar6_00,ar7);
      }
    }
    else if (iVar1 == 3) {
      pcVar5 = FUN_8c031748;
      FUN_8c031748(ar4,FUN_8c031748,ar6_00,ar7);
      fVar7 = (float)in_dr0;
      FUN_8c0230f0(ar4 + 0x20,pcVar5,ar6_00,ar7,auStack_1b0);
      Vec3_assign(auStack_34,auStack_1b0,ar6_00,ar7);
      Vec3_dtor(auStack_1b0,0xffffffff,ar6_00,ar7);
      if (cVar16 == '\0') {
        fVar7 = (float)ar4[0xb];
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + 0xb);
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
      }
      uStack_258 = in_xd0;
      if (cVar16 == '\0') {
        uStack_258 = CONCAT44(ar4,fVar7);
      }
      if (cVar16 == '\0') {
        *(undefined4 *)((*(uint*)((uchar*)&uStack_258+4)) + 0x2c) = (undefined4)uStack_258;
        dVar11 = (double)CONCAT44(0x43fa0000,(undefined4)uStack_258);
      }
      else {
        *(ulonglong *)((*(uint*)((uchar*)&uStack_258+4)) + 0x2c) = uStack_258;
        dVar11 = 2.89154888428735e-312;
        in_xd0 = uStack_258;
      }
      if (cVar15 == '\0') {
        fVar7 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar11 / dVar11,0);
      }
      fStack_1e0 = fVar7;
      if (cVar16 != '\0') {
        fStack_1e0 = (float)in_xd0;
        auStack_1dc[0] = (undefined4)(in_xd0 >> 0x20);
      }
      Vec3_scale(auStack_34,&fStack_1e0,ar6_00,ar7,auStack_1c0);
      FUN_8c023aa0(ar4 + 0x20,auStack_1c0,ar6_00,ar7);
      Vec3_dtor(auStack_1c0,0xffffffff,ar6_00,ar7);
      Vec3_length(ar4 + 0x20,ar4 + 0x20,ar6_00,ar7);
      ar7 = (code *)(ar4 + 10);
      uVar12 = (ulonglong)(uint)fVar7;
      if (cVar16 == '\0') {
        *(int *)ar7 = 0;
      }
      else {
        *(ulonglong *)ar7 = uVar12;
      }
      ar6_01 = 0x128;
      FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,0x128,ar7);
      uVar6 = 0xb0;
      iVar1 = get_field_1c_026dd8(ar4 + 0x2c,0xb0,ar6_01,ar7);
      if (iVar1 == 99) {
        iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,uVar6,ar6_01,ar7);
        uVar8 = (uint)uVar12;
        if (iVar1 == 1) {
          ar4[0x1a] = 0;
          FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,ar6_01,ar7);
          Vec3_assign(ar4 + 5,ar4 + 0x20,ar6_01,ar7);
          ar7 = (code *)0x0;
          uVar6 = 0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x1a,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,0xb0,uVar6,ar7);
          ar4[0xae] = 2;
          ar4[0xba] = 2;
          if (cVar16 == '\0') {
            ar4[0xb] = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0xb) = (ulonglong)uVar8;
          }
        }
      }
      else {
        ar4[0x86] = 0x12;
        uVar6 = 0xb0;
        piVar3 = ar4 + 0x2c;
        s_CAnimBody_AdvanceFrame_033ba0(piVar3,piVar3,0xb0,ar7);
        CAnimBody_GetCurFrame(ar4 + 0x2c,piVar3,uVar6,ar7,ain0);
        if (cVar16 == '\0') {
          uVar12 = uVar12 >> 0x20;
        }
        fVar7 = (float)uVar12;
        if (cVar15 != '\0' || fVar7 <= 0.0) {
          ar4[0x1a] = 0;
          FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,uVar6,ar7);
          Vec3_set_xyz(auStack_1cc,auStack_1cc,uVar6,ar7);
          pcVar5 = FUN_8c023484;
          FUN_8c023484(ar4 + 0x20,auStack_1cc,uVar6,FUN_8c023484,auStack_1dc);
          uVar6 = Vec3_assign(ar4 + 0x20,auStack_1dc,auStack_1dc,pcVar5);
          piVar3 = ar4 + 5;
          Vec3_assign(piVar3,uVar6,piVar3,uVar6);
          Vec3_dtor(auStack_1dc,0xffffffff,piVar3,uVar6);
          object_dtor_delete(auStack_1cc,0xffffffff,auStack_1cc,0xffffffff);
          uVar6 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x1a,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ar4 + 0x2c,0xb0,uVar6);
          ar4[0xae] = 2;
          ar4[0xba] = 2;
          ar7 = (code *)(ar4 + 0xb);
          if (cVar16 == '\0') {
            *(int *)ar7 = 0;
          }
          else {
            *(ulonglong *)ar7 = (ulonglong)(uint)fVar7;
          }
        }
      }
    }
    goto LAB_8c0519c6;
  }
  if (ain0 != (code *)0x0) {
    if (ain0 == (code *)0x1) {
      if ((char)ar4[0x84] == '\x01') {
        ar7 = (code *)0x5;
        ar6_00 = (code *)0x1;
        pcVar5 = (code *)ar5;
        (**(code **)(*(int *)(uint)ar4[0x91] + 0xd0))((int *)(uint)ar4[0x91],ar5,1,5);
      }
      uVar8 = (uint)in_dr0;
      vec3_clear(ar4 + 0xaa,pcVar5,ar6_00,ar7);
      vec3_clear(ar4 + 0x24,pcVar5,ar6_00,ar7);
      if (cVar16 == '\0') {
        ar4[0x28] = 0;
        dVar11 = (double)CONCAT44(ar5[1],0x43340000);
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar8;
        dVar11 = *(double *)(ar5 + 1);
        in_xd0 = 0x4120000043340000;
      }
      if (cVar15 == '\0') {
        fVar7 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar16 == '\0') {
        dVar11 = (double)CONCAT44(0x41200000,fVar7);
      }
      else {
        dVar11 = 1.063644295445812e+156;
      }
      if (cVar15 == '\0') {
        fVar7 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar16 == '\0') {
        ar4[0xab] = (int)fVar7;
      }
      else {
        *(ulonglong *)(ar4 + 0xab) = in_xd0;
      }
      if (cVar16 == '\0') {
        ar4[0xb] = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xb) = (ulonglong)(uint)fVar7;
      }
      ar7 = (code *)0x3;
      ar4[0x1a] = 3;
      if (cVar16 == '\0') {
        ar4[0xb] = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xb) = (ulonglong)(uint)fVar7;
      }
      goto LAB_8c0519c6;
    }
    if (ain0 != (code *)0x2) {
      if (ain0 == (code *)0x3) {
        s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,s_CAnimBody_AdvanceFrame_033ba0,ar6_00,ar7);
        fVar7 = (float)in_dr0;
        pcVar5 = get_field_1c_026dd8;
        iVar1 = get_field_1c_026dd8(ar4 + 0x2c,get_field_1c_026dd8,ar6_00,ar7);
        fVar14 = (float)((ulonglong)dVar11 >> 0x20);
        if (iVar1 == 99) {
          if (cVar16 == '\0') {
            dVar10 = (double)CONCAT44(0x43340000,fVar7);
          }
          else {
            dVar10 = 2.80660494205813e-312;
          }
          if (cVar15 == '\0') {
            dVar11 = (double)CONCAT44(fVar14 - (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar10;
          }
          fVar7 = (float)((ulonglong)dVar11 >> 0x20);
          fStack_1e4 = fVar7;
          if (cVar16 != '\0') {
            fStack_1e4 = SUB84(dVar11,0);
            fStack_1e0 = fVar7;
          }
          s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,pcVar5,ar6_00,ar7);
          if (cVar16 == '\0') {
            dVar11 = (double)CONCAT44(fStack_1e4,in_fr3);
            dVar10 = (double)CONCAT44(0x43340000,ar5[1]);
          }
          else {
            dVar11 = (double)CONCAT44(fStack_1e0,fStack_1e4);
            dVar10 = 4294968371.25;
          }
          if (cVar15 == '\0') {
            fVar7 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
            dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - fVar7,SUB84(dVar11,0));
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
            dVar11 = dVar11 - (dVar10 - dVar10);
          }
          if (cVar16 == '\0') {
            dVar10 = (double)CONCAT44(fStack_1e4,fVar7);
          }
          else {
            dVar10 = (double)CONCAT44(fStack_1e0,fStack_1e4);
          }
          if (cVar15 == '\0') {
            dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) /
                                      (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 / dVar10;
          }
          if (cVar16 == '\0') {
            dVar10 = (double)CONCAT44(0x38d1b717,SUB84(dVar10,0));
          }
          else {
            dVar10 = 2.72086438209188e-312;
          }
          if (cVar15 == '\0') {
            dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) -
                                      (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar10;
          }
          fVar7 = (float)((ulonglong)dVar11 >> 0x20);
          if (cVar16 == '\0') {
            dVar10 = (double)(ulonglong)(uint)fVar7;
            fStack_1e4 = fVar7;
          }
          else {
            fStack_1e4 = SUB84(dVar11,0);
            fStack_1e0 = fVar7;
          }
          fVar7 = SUB84(dVar10,0);
          if (cVar15 == '\0') {
            dVar11 = (double)CONCAT44(1.0 - fVar7,fVar7);
          }
          else {
            dVar11 = (double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7);
          }
          fVar7 = (float)((ulonglong)dVar11 >> 0x20);
          fStack_1e8 = fVar7;
          if (cVar16 != '\0') {
            fStack_1e8 = SUB84(dVar11,0);
            fStack_1e4 = fVar7;
          }
          Vec3_scale(ar4 + 0x15,&fStack_1e8,ar6_00,ar7,auStack_a0);
          FUN_8c0230f0(ar4 + 0x20,0x80,ar6_00,ar7,auStack_b0);
          Vec3_scale(auStack_b0,&fStack_1e4,ar6_00,ar7,auStack_c0);
          Vec3_add(auStack_a0,auStack_c0,ar6_00,ar7,auStack_d0);
          Vec3_assign(ar4 + 0x20,auStack_d0,ar6_00,ar7);
          Vec3_dtor(auStack_d0,0xffffffff,ar6_00,ar7);
          Vec3_dtor(auStack_c0,0xffffffff,ar6_00,ar7);
          Vec3_dtor(auStack_b0,0xffffffff,ar6_00,ar7);
          Vec3_dtor(auStack_a0,0xffffffff,ar6_00,ar7);
          Vec3_length(ar4 + 0x20,Vec3_length,ar6_00,ar7);
        }
        else if (iVar1 == 0x49) {
          if (cVar16 == '\0') {
            dVar10 = (double)CONCAT44(0x43340000,fVar7);
          }
          else {
            dVar10 = 2.80660494205813e-312;
          }
          if (cVar15 == '\0') {
            dVar11 = (double)CONCAT44(fVar14 - (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar10;
          }
          fVar7 = (float)((ulonglong)dVar11 >> 0x20);
          fStack_1e4 = fVar7;
          if (cVar16 != '\0') {
            fStack_1e4 = SUB84(dVar11,0);
            fStack_1e0 = fVar7;
          }
          uVar6 = 0x49;
          s_Check_This_Motion_Data_0314fc(ar4 + 0x2c,0x49,ar6_00,ar7);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,uVar6,ar6_00,ar7);
          if (cVar16 == '\0') {
            dVar11 = (double)CONCAT44(fStack_1e4,in_fr3);
            dVar10 = (double)CONCAT44(0x43340000,ar5[1]);
          }
          else {
            dVar11 = (double)CONCAT44(fStack_1e0,fStack_1e4);
            dVar10 = 2.80660494205813e-312;
          }
          if (cVar15 == '\0') {
            fVar7 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
            dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - fVar7,SUB84(dVar11,0));
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
            dVar11 = dVar11 - (dVar10 - dVar10);
          }
          if (cVar16 == '\0') {
            dVar10 = (double)CONCAT44(fStack_1e4,fVar7);
          }
          else {
            dVar10 = (double)CONCAT44(fStack_1e0,fStack_1e4);
          }
          if (cVar15 == '\0') {
            dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) /
                                      (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 / dVar10;
          }
          if (cVar16 == '\0') {
            dVar10 = (double)CONCAT44(0x38d1b717,SUB84(dVar10,0));
          }
          else {
            dVar10 = 8.3229332702402e-312;
          }
          if (cVar15 == '\0') {
            dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) -
                                      (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar11,0));
          }
          else {
            dVar11 = dVar11 - dVar10;
          }
          fVar7 = (float)((ulonglong)dVar11 >> 0x20);
          if (cVar16 == '\0') {
            dVar10 = (double)(ulonglong)(uint)fVar7;
            fStack_1e4 = fVar7;
          }
          else {
            fStack_1e4 = SUB84(dVar11,0);
            fStack_1e0 = fVar7;
          }
          fVar7 = SUB84(dVar10,0);
          if (cVar15 == '\0') {
            dVar11 = (double)CONCAT44(1.0 - fVar7,fVar7);
          }
          else {
            dVar11 = (double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7);
          }
          fVar7 = (float)((ulonglong)dVar11 >> 0x20);
          fStack_1ec = fVar7;
          if (cVar16 != '\0') {
            fStack_1ec = SUB84(dVar11,0);
            fStack_1e8 = fVar7;
          }
          Vec3_scale(ar4 + 0x15,&fStack_1ec,ar6_00,ar7,auStack_e0);
          FUN_8c0230f0(ar4 + 0x20,0x80,ar6_00,ar7,auStack_f0);
          Vec3_scale(auStack_f0,&fStack_1e4,ar6_00,ar7,auStack_100);
          ar7 = Vec3_add;
          Vec3_add(auStack_e0,auStack_100,ar6_00,Vec3_add,auStack_110);
          ar6_00 = (code *)auStack_110;
          Vec3_assign(ar4 + 0x20,ar6_00,ar6_00,ar7);
          Vec3_dtor(auStack_110,0xffffffff,ar6_00,ar7);
          Vec3_dtor(auStack_100,0xffffffff,ar6_00,ar7);
          Vec3_dtor(auStack_f0,0xffffffff,ar6_00,ar7);
          uVar6 = 0xffffffff;
          Vec3_dtor(auStack_e0,0xffffffff,ar6_00,ar7);
          Vec3_length(ar4 + 0x20,uVar6,ar6_00,ar7);
        }
        else {
          Vec3_ctor_xyz(auStack_120,pcVar5,ar6_00,ar7);
          Vec3_assign(auStack_34,auStack_120,ar6_00,ar7);
          Vec3_dtor(auStack_120,0xffffffff,ar6_00,ar7);
          if (cVar16 == '\0') {
            fVar7 = (float)ar4[0xb];
          }
          else {
            in_xd0 = *(ulonglong *)(ar4 + 0xb);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 + 1.0;
          }
          else {
            fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0)
            ;
          }
          uStack_234 = in_xd0;
          if (cVar16 == '\0') {
            uStack_234 = CONCAT44(ar4,fVar7);
          }
          if (cVar16 == '\0') {
            *(undefined4 *)((*(uint*)((uchar*)&uStack_234+4)) + 0x2c) = (undefined4)uStack_234;
            dVar11 = (double)CONCAT44(0x43480000,(undefined4)uStack_234);
          }
          else {
            *(ulonglong *)((*(uint*)((uchar*)&uStack_234+4)) + 0x2c) = uStack_234;
            dVar11 = 2.89149124951398e-312;
            in_xd0 = uStack_234;
          }
          if (cVar15 == '\0') {
            fStack_1e0 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
          }
          else {
            fStack_1e0 = SUB84(dVar11 / dVar11,0);
          }
          if (cVar16 != '\0') {
            fStack_1e0 = (float)in_xd0;
            auStack_1dc[0] = (undefined4)(in_xd0 >> 0x20);
          }
          Vec3_scale(auStack_34,&fStack_1e0,ar6_00,ar7,auStack_130);
          ar6_00 = (code *)(ar4 + 0x20);
          FUN_8c023aa0(ar6_00,auStack_130,ar6_00,ar7);
          Vec3_dtor(auStack_130,0xffffffff,ar6_00,ar7);
          Vec3_length(ar4 + 0x20,0x80,ar6_00,ar7);
        }
        Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
        uVar6 = Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
        return uVar6;
      }
      goto LAB_8c0519c6;
    }
  }
  piVar3 = ar4 + 0x2c;
  pcVar5 = s_CAnimBody_AdvanceFrame_033ba0;
  s_CAnimBody_AdvanceFrame_033ba0(piVar3,s_CAnimBody_AdvanceFrame_033ba0,piVar3,ar7);
  Vec3_length_sq(ar4 + 1,pcVar5,piVar3,ar7);
  if (cVar16 == '\0') {
    dVar11 = (double)CONCAT44(0x3dcccccd,(int)(in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    dVar11 = 6.28623017172232e-312;
  }
  if (cVar15 == '\0') {
    fVar7 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar11 * dVar11,0);
  }
  if (cVar16 == '\0') {
    ar4[10] = (int)fVar7;
  }
  else {
    *(ulonglong *)(ar4 + 10) = in_dr0;
  }
  Vec3_normalize(ar4 + 1,pcVar5,piVar3,ar7);
  Vec3_assign(ar4 + 5,auStack_140,piVar3,ar7);
  Vec3_dtor(auStack_140,0xffffffff,piVar3,ar7);
  FUN_8c031b68(ar4,ar4[0x4a] * 0x18 + -0x73d7fc0c,piVar3,ar7);
  if (cVar16 == '\0') {
    iVar1 = 0x41200000;
  }
  else {
    fVar7 = 10.0;
    iVar1 = 0x270;
  }
  FUN_8c032518(ar4,ar5,in_stack_00000000,in_stack_00000004);
  ar5_00 = auStack_150;
  piVar3 = ar4 + 0x15;
  Vec3_assign(piVar3,ar5_00,piVar3,ar5_00);
  uVar6 = 0xffffffff;
  Vec3_dtor(auStack_150,0xffffffff,piVar3,ar5_00);
  ar7 = (code *)(ar4 + 0x14);
  FUN_8c032ab0(ar4,uVar6,ar4 + 0x13,ar7);
  if (cVar16 == '\0') {
    ar4[9] = iVar1;
  }
  else {
    *(ulonglong *)(ar4 + 9) = CONCAT44(iVar1,fVar7);
  }
  ar4[0x11] = 1;
  if (cVar16 == '\0') {
    ar4[0xb] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xb) = (ulonglong)(uint)fVar7;
  }
  ar4[0x10] = 5;
  ar4[0xa0] = 0;
  ar4[0x1a] = 2;
LAB_8c0519c6:
  uVar6 = 0xffffffff;
  Vec3_dtor(auStack_44,0xffffffff,0xffffffff,ar7);
  uVar6 = Vec3_dtor(auStack_34,0xffffffff,uVar6,ar7);
  return uVar6;
}

__asm__(".globl _FUN_8c0507c0\n.set _FUN_8c0507c0, _FUN_8c0507c0_def\n");
