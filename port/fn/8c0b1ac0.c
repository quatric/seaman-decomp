#include "../decls.h"
undefined4 FUN_8c0b1ac0_def(double *ar4,double *ar5,code *ar6,double *ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar4_00;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  code *ar5_01;
  code *ar6_00;
  undefined4 uVar9;
  int iVar10;
  float fVar11;
  double in_dr0;
  double dVar12;
  int iVar14;
  float fVar15;
  double dVar13;
  undefined4 in_fr3;
  double dVar16;
  float in_fr15;
  double in_xd0;
  bool bVar17;
  char cVar18;
  char cVar19;
  double *in_stack_00000000;
  double *ain0;
  undefined8 uStack_3c0;
  int iStack_368;
  int iStack_360;
  int iStack_328;
  int iStack_324;
  int iStack_320;
  int iStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  double *pdStack_310;
  int iStack_30c;
  undefined8 uStack_308;
  double adStack_2f4 [2];
  undefined1 auStack_2e4 [16];
  undefined1 auStack_2d4 [16];
  undefined1 auStack_2c4 [16];
  undefined1 auStack_2b4 [16];
  undefined1 auStack_2a4 [16];
  undefined1 auStack_294 [16];
  undefined1 auStack_284 [16];
  undefined1 auStack_274 [16];
  undefined1 auStack_264 [16];
  undefined1 auStack_254 [16];
  undefined1 auStack_244 [16];
  undefined1 auStack_234 [16];
  undefined1 auStack_224 [12];
  double adStack_218 [2];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  double adStack_168 [2];
  undefined1 auStack_158 [12];
  undefined1 auStack_14c [16];
  undefined1 auStack_13c [12];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [16];
  double adStack_d4 [2];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [8];
  double dStack_4c;
  double adStack_44 [2];
  double adStack_34 [2];
  
  cVar19 = '\0';
  cVar18 = '\0';
  uVar5 = 1;
  uVar9 = 1;
  pcVar8 = (code *)ar7;
  ain0 = (double *)ar6;
  Vec3_ctor_zero(adStack_34,1,ar6,ar7);
  Vec3_ctor_zero(adStack_44,uVar5,ar6,pcVar8);
  Vec3_ctor_zero(auStack_54,uVar5,ar6,pcVar8);
  if (*(int *)((int)ar4 + 0x314) < 2) {
    puVar6 = (undefined *)0xc;
    iVar10 = 0xc;
  }
  else {
    if (cVar19 == '\0') {
      dVar12 = (double)CONCAT44(0x43020000,(float)_DAT_8c286dec);
    }
    else {
      dVar12 = 52776566916096.0;
    }
    if (cVar18 == '\0') {
      fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar12 / dVar12,0);
    }
    if (cVar19 == '\0') {
      in_dr0 = (double)CONCAT44(0x42c80000,fVar11);
    }
    else {
      in_dr0 = 3.91000778394702e-312;
    }
    if (cVar18 == '\0') {
      fVar15 = (float)((ulonglong)in_dr0 >> 0x20);
      fVar11 = SUB84(in_dr0,0) * fVar15;
      in_dr0 = (double)CONCAT44(fVar15,fVar11);
      iVar10 = (int)fVar11;
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
      iVar10 = (int)in_dr0;
    }
    pdStack_310 = (double *)(100 - iVar10);
    if ((int)pdStack_310 < 0) {
      pdStack_310 = (double *)0x0;
    }
    ar6 = (code *)0x6;
    puVar6 = (undefined *)0x0;
    pcVar8 = (code *)pdStack_310;
    iStack_30c = FUN_8c032af8(ar4,0,6,pdStack_310);
    if (iStack_30c == 0) {
      iVar10 = 0x13;
    }
    else if ((iStack_30c == 1) || (iStack_30c == 2)) {
      iVar10 = 0x14;
    }
    else if (iStack_30c == 3) {
      iVar10 = 0xf;
    }
    else {
      puVar6 = (undefined *)0xe;
      iVar10 = 0xe;
    }
  }
  iVar2 = *(int *)((int)ar4 + 300);
  if (iVar2 == 0) {
    iVar2 = FUN_8c034148(ar4 + 0x16,iVar10,ar6,pcVar8);
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_8c0b30ba;
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,iVar10,ar6,pcVar8);
    }
    if (cVar19 == '\0') {
      *(int *)(ar4 + 0x14) = 0x3d4ccccd;
    }
    else {
      ar4[0x14] = -8.625516725343968e-251;
    }
    FUN_8c03c314(ar4,iVar10,ar6,pcVar8);
    vec3_clear((code *)((int)ar4 + 0x54),(code *)((int)ar4 + 0x54),ar6,pcVar8);
    *(int *)((int)ar4 + 300) = *(int *)((int)ar4 + 300) + 1;
    goto LAB_8c0b30ba;
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      Vec3_assign((code *)((int)ar4 + 0x14),ar4 + 0x10,ar6,pcVar8);
      iVar10 = FUN_8c034148(ar4 + 0x16,9,ar6,pcVar8);
      if ((iVar10 != 1) && (iVar10 != 2)) {
        uStack_314 = 1;
        Vec3_dtor(auStack_54,0xffffffff,ar6,pcVar8);
        Vec3_dtor(adStack_44,0xffffffff,ar6,pcVar8);
        Vec3_dtor(adStack_34,0xffffffff,ar6,pcVar8);
        return uStack_314;
      }
      if (cVar19 == '\0') {
        *(int *)((int)ar4 + 0x24) = 0x41700000;
      }
      else {
        *(undefined8 *)((int)ar4 + 0x24) = 0x8c13babc41700000;
      }
      FUN_8c023bf4((code *)((int)ar4 + 0x14),&DAT_8c13babc,ar6,pcVar8);
      *(int *)(ar4 + 100) = 0;
      FUN_8c032518(ar4,ar5,ar7,in_stack_00000000);
      Vec3_assign((code *)((int)ar4 + 0x2e4),auStack_244,ar7,in_stack_00000000);
      Vec3_dtor(auStack_244,0xffffffff,ar7,in_stack_00000000);
      if (cVar19 == '\0') {
        dVar12 = (double)CONCAT44(0x43fa0000,*(int *)(ar4 + 0x5d));
      }
      else {
        in_xd0 = ar4[0x5d];
        dVar12 = 1.1709360855895245e+17;
      }
      if (cVar18 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar19 == '\0') {
        *(float *)(ar4 + 0x5d) = fVar11;
      }
      else {
        ar4[0x5d] = in_xd0;
      }
      Vec3_sub((code *)((int)ar4 + 0x2e4),ar5,ar7,in_stack_00000000,auStack_254);
      Vec3_assign((code *)((int)ar4 + 0x2d4),auStack_254,ar7,in_stack_00000000);
      Vec3_dtor(auStack_254,0xffffffff,ar7,in_stack_00000000);
      uVar5 = 0x8c286dd4;
      FUN_8c031b68(ar4,0x8c286dd4,ar7,in_stack_00000000);
      FUN_8c031748(ar4,uVar5,ar7,in_stack_00000000);
      pcVar8 = (code *)((int)ar4 + 0x2c);
      if (cVar19 == '\0') {
        *(int *)pcVar8 = 0;
      }
      else {
        *(ulonglong *)pcVar8 = (ulonglong)(uint)fVar11;
      }
      FUN_8c031c64(ar4,pcVar8,ar7,in_stack_00000000);
      *(int *)(ar4 + 8) = 3;
      *(int *)((int)ar4 + 0x44) = 0;
      *(int *)(ar4 + 99) = 0;
      *(int *)((int)ar4 + 300) = *(int *)((int)ar4 + 300) + 1;
      ar6 = (code *)ar7;
      pcVar8 = (code *)in_stack_00000000;
    }
    else if (iVar2 == 3) {
      if (cVar19 == '\0') {
        iVar2 = SUB84(in_dr0,0);
        iVar14 = 0x3fc00000;
      }
      else {
        iVar2 = 0x3fc00000;
        iVar14 = 0x164;
      }
      Vec3_ctor_xyz(auStack_264,puVar6,ar6,pcVar8);
      puVar7 = auStack_264;
      Vec3_add((code *)((int)ar4 + 0x2d4),puVar7,ar6,pcVar8,auStack_274);
      iVar4 = Vec3_length(auStack_274,puVar7,ar6,pcVar8);
      Vec3_length_sq((code *)((int)ar4 + 0x2d4),(code *)((int)ar4 + 0x2d4),ar6,pcVar8);
      iStack_360 = iVar14;
      iStack_320 = iVar2;
      iVar1 = iVar14;
      if (cVar19 == '\0') {
        iStack_360 = iVar4;
        iStack_320 = iVar14;
        iVar1 = iStack_31c;
      }
      iStack_31c = iVar1;
      dVar12 = (double)CONCAT44(iVar14,iVar2);
      Vec3_scale(iStack_360,&iStack_320,ar6,pcVar8,auStack_284);
      Vec3_assign((code *)((int)ar4 + 0x2d4),auStack_284,ar6,pcVar8);
      Vec3_dtor(auStack_284,0xffffffff,ar6,pcVar8);
      Vec3_dtor(auStack_274,0xffffffff,ar6,pcVar8);
      Vec3_dtor(auStack_264,0xffffffff,ar6,pcVar8);
      Vec3_add((code *)((int)ar4 + 0x2d4),ar5,ar6,pcVar8,auStack_294);
      pcVar8 = (code *)adStack_34;
      ar6_00 = Vec3_assign;
      Vec3_assign(pcVar8,auStack_294,Vec3_assign,pcVar8);
      Vec3_dtor(auStack_294,0xffffffff,ar6_00,pcVar8);
      Vec3_assign((code *)((int)ar4 + 0x2e4),adStack_34,ar6_00,pcVar8);
      Vec3_scale((code *)((int)ar4 + 0x14),&DAT_8c13bac0,ar6_00,pcVar8,auStack_2a4);
      Vec3_assign(ar4 + 0x10,auStack_2a4,ar6_00,pcVar8);
      Vec3_dtor(auStack_2a4,0xffffffff,ar6_00,pcVar8);
      iVar2 = *(int *)(ar4 + 100);
      if (iVar2 == 0) {
        Vec3_length_sq((code *)((int)ar4 + 0x2d4),Vec3_length_sq,ar6_00,pcVar8);
        iVar10 = (int)((ulonglong)dVar12 >> 0x20);
        iStack_324 = iVar10;
        if (cVar19 != '\0') {
          iStack_368 = SUB84(dVar12,0);
          iStack_324 = iStack_368;
          iStack_320 = iVar10;
        }
        Vec3_scale((code *)((int)ar4 + 0x14),&iStack_324,ar6_00,pcVar8,auStack_2b4);
        Vec3_add(ar5,auStack_2b4,ar6_00,pcVar8,auStack_2c4);
        Vec3_assign(adStack_34,auStack_2c4,ar6_00,pcVar8);
        Vec3_dtor(auStack_2c4,0xffffffff,ar6_00,pcVar8);
        uVar5 = 0xffffffff;
        Vec3_dtor(auStack_2b4,0xffffffff,ar6_00,pcVar8);
        ar6_00 = (code *)(ar4 + 5);
        if (cVar19 == '\0') {
          dVar13 = (double)CONCAT44(0x3f7d70a4,*(int *)(ar4 + 5));
        }
        else {
          in_xd0 = ar4[5];
          dVar13 = 3.73997530744218e-312;
        }
        if (cVar18 == '\0') {
          fVar11 = (float)((ulonglong)dVar13 >> 0x20);
          dVar13 = (double)CONCAT44(fVar11,SUB84(dVar13,0) * fVar11);
        }
        else {
          dVar13 = dVar13 * dVar13;
        }
        if (cVar19 == '\0') {
          *(int *)ar6_00 = SUB84(dVar13,0);
        }
        else {
          *(double *)ar6_00 = in_xd0;
        }
        pcVar8 = (code *)ar4;
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,uVar5,ar6_00,ar4);
        CAnimBody_GetCurFrame(ar4 + 0x16,uVar5,ar6_00,pcVar8,ain0);
        if (cVar19 == '\0') {
          dVar12 = (double)CONCAT44(0x41a00000,SUB84(dVar13,0));
          in_fr15 = (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          dVar12 = 1.6981406014198e-311;
        }
        if (in_fr15 == (float)((ulonglong)dVar12 >> 0x20)) {
          *(int *)((int)ar4 + 0x44) = 1;
          ar6_00 = (code *)0x320;
          *(int *)(ar4 + 100) = *(int *)(ar4 + 100) + 1;
          if (cVar19 == '\0') {
            dVar12 = (double)CONCAT44(0x3eb33333,SUB84(dVar12,0));
            *(int *)(ar4 + 0x14) = 0x3eb33333;
          }
          else {
            dVar12 = -8.625516761765798e-251;
            ar4[0x14] = -8.625516761765798e-251;
          }
          *(int *)((int)ar4 + 0xa4) = 1;
          FUN_8c03c314(ar4,FUN_8c03c314,800,pcVar8);
          if (*(int *)((int)ar4 + 0x314) == 0) {
            *(int *)(ar4 + 0x48) = 1;
            ar6_00 = (code *)ar5;
            FUN_8c033474(ar4,0xb,ar5,in_stack_00000000);
            pcVar8 = (code *)in_stack_00000000;
          }
        }
      }
      else if (iVar2 == 1) {
        if (cVar19 == '\0') {
          dVar12 = (double)CONCAT44(0x3e19999a,*(int *)(ar4 + 5));
        }
        else {
          in_xd0 = ar4[5];
          dVar12 = 32.000007402896884;
        }
        if (cVar18 == '\0') {
          fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar12 - dVar12,0);
        }
        if (cVar19 == '\0') {
          *(float *)(ar4 + 5) = fVar11;
          dVar12 = (double)CONCAT44(0x40400000,*(int *)(ar4 + 5));
        }
        else {
          ar4[5] = in_xd0;
          in_xd0 = ar4[5];
          dVar12 = 3.74003830419144e-312;
        }
        if (cVar18 == '\0' && SUB84(dVar12,0) < (float)((ulonglong)dVar12 >> 0x20)) {
          if (cVar19 == '\0') {
            dVar12 = (double)CONCAT44(0x40400000,SUB84(dVar12,0));
            *(int *)(ar4 + 5) = 0x40400000;
          }
          else {
            dVar12 = 3.74003830419144e-312;
            ar4[5] = 3.74003830419144e-312;
          }
        }
        iVar2 = CAnimBody_AdvanceFrame_wrapper
                          (ar4 + 0x16,CAnimBody_AdvanceFrame_wrapper,ar6_00,pcVar8);
        if (iVar2 == 1) {
          *(int *)(ar4 + 100) = *(int *)(ar4 + 100) + 1;
          pcVar8 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,iVar10,0xffffffff,0);
        }
      }
      else if (iVar2 == 2) {
        if (cVar19 == '\0') {
          dVar12 = (double)CONCAT44(0x3e19999a,*(int *)(ar4 + 5));
        }
        else {
          in_xd0 = ar4[5];
          dVar12 = 32.000007402896884;
        }
        if (cVar18 == '\0') {
          fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar12 - dVar12,0);
        }
        if (cVar19 == '\0') {
          *(float *)(ar4 + 5) = fVar11;
          dVar13 = (double)CONCAT44(0x40400000,*(int *)(ar4 + 5));
        }
        else {
          ar4[5] = in_xd0;
          in_xd0 = ar4[5];
          dVar13 = 1099511890944.0;
        }
        if (cVar18 == '\0' && SUB84(dVar13,0) < (float)((ulonglong)dVar13 >> 0x20)) {
          if (cVar19 == '\0') {
            dVar13 = (double)CONCAT44(0x40400000,SUB84(dVar13,0));
            *(int *)(ar4 + 5) = 0x40400000;
          }
          else {
            dVar13 = 1099511890944.0;
            ar4[5] = 1099511890944.0;
          }
        }
        if (iVar10 == 0xc) {
          s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,0xb0,ar6_00,pcVar8);
        }
        else {
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,0xb0,ar6_00,pcVar8);
          ar6_00 = (code *)0x1e;
          iVar10 = rand_range(ar4,0,0x1e,pcVar8);
          if (iVar10 == 0) {
            *(int *)(ar4 + 0x48) = 1;
            ar6_00 = (code *)ar5;
            pcVar8 = (code *)in_stack_00000000;
            FUN_8c033474(ar4,0xb,ar5,in_stack_00000000);
          }
        }
        (**(code **)(*(int *)in_stack_00000000 + 0x128))(in_stack_00000000,ar5,ar6_00,pcVar8);
        if (cVar19 == '\0') {
          dVar16 = (double)CONCAT44(*(int *)((int)ar5 + 4),in_fr3);
          dVar12 = (double)CONCAT44(0x42100000,(int)((ulonglong)dVar13 >> 0x20));
        }
        else {
          dVar16 = *(double *)((int)ar5 + 4);
          dVar12 = 1.52838456460023e-311;
          in_xd0 = dVar13;
        }
        if (cVar18 == '\0') {
          fVar15 = (float)((ulonglong)dVar12 >> 0x20);
          fVar11 = SUB84(dVar12,0) + fVar15;
          dVar12 = (double)CONCAT44(fVar15,fVar11);
          bVar17 = fVar11 < (float)((ulonglong)dVar16 >> 0x20);
        }
        else {
          dVar12 = dVar12 + dVar12;
          fVar11 = SUB84(dVar12,0);
          bVar17 = dVar12 < dVar16;
        }
        if (!bVar17) {
          if (cVar19 == '\0') {
            *(int *)(ar4 + 0x5a) = 0x3f800000;
            dVar12 = (double)CONCAT44(0x42f00000,fVar11);
            *(int *)((int)ar4 + 0x2cc) = 0x42f00000;
          }
          else {
            ar4[0x5a] = (double)CONCAT44(0x3f800000,fVar11);
            dVar12 = 5.18321821016064e-312;
            *(undefined8 *)((int)ar4 + 0x2cc) = 0xf442f00000;
          }
          ar5_01 = FUN_8c0230f0;
          FUN_8c0230f0(ar4 + 0x10,FUN_8c0230f0,ar6_00,pcVar8,auStack_2d4);
          uVar5 = Vec3_length(auStack_2d4,ar5_01,ar6_00,pcVar8);
          Vec3_assign((code *)((int)ar4 + 700),uVar5,ar6_00,pcVar8);
          Vec3_dtor(auStack_2d4,0xffffffff,ar6_00,pcVar8);
          *(int *)(ar4 + 100) = *(int *)(ar4 + 100) + 1;
        }
      }
      else if (iVar2 == 3) {
        if (cVar19 == '\0') {
          dVar12 = (double)CONCAT44(0x3e19999a,*(int *)(ar4 + 5));
        }
        else {
          in_xd0 = ar4[5];
          dVar12 = 21990236625305.6;
        }
        if (cVar18 == '\0') {
          fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar12 - dVar12,0);
        }
        if (cVar19 == '\0') {
          *(float *)(ar4 + 5) = fVar11;
          fVar11 = *(float *)(ar4 + 5);
        }
        else {
          ar4[5] = in_xd0;
          in_xd0 = ar4[5];
        }
        if (cVar18 != '\0' || fVar11 <= 0.0) {
          if (cVar19 == '\0') {
            *(int *)(ar4 + 5) = 0;
          }
          else {
            ar4[5] = (double)(ulonglong)(uint)fVar11;
          }
        }
        s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,0xb0,ar6_00,pcVar8);
        if (cVar19 == '\0') {
          fVar11 = *(float *)(ar4 + 0x5a);
        }
        else {
          in_xd0 = ar4[0x5a];
        }
        if (cVar18 == '\0') {
          fVar11 = fVar11 + 1.0;
        }
        else {
          fVar11 = SUB84((double)CONCAT44(0x3f800000,fVar11) + (double)CONCAT44(0x3f800000,fVar11),0
                        );
        }
        uStack_3c0 = in_xd0;
        if (cVar19 == '\0') {
          uStack_3c0 = (double)CONCAT44(ar4,fVar11);
        }
        if (cVar19 == '\0') {
          *(undefined4 *)((*(uint*)((uchar*)&uStack_3c0+4)) + 0x2d0) = (undefined4)uStack_3c0;
          dVar12 = (double)CONCAT44(*(int *)((int)ar4 + 0x2cc),(undefined4)uStack_3c0);
          uStack_3c0 = in_xd0;
        }
        else {
          *(double *)((*(uint*)((uchar*)&uStack_3c0+4)) + 0x2d0) = uStack_3c0;
          dVar12 = *(double *)((int)ar4 + 0x2cc);
        }
        if (cVar18 == '\0') {
          fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar12 / dVar12,0);
        }
        dVar12 = uStack_3c0;
        if (cVar19 == '\0') {
          uStack_308 = (double)CONCAT44((*(uint*)((uchar*)&uStack_308+4)),fVar11);
          dVar12 = uStack_308;
        }
        uStack_308 = dVar12;
        if (cVar18 == '\0') {
          dVar13 = (double)CONCAT44(1.0 - fVar11,fVar11);
        }
        else {
          dVar13 = (double)CONCAT44(0x3f800000,fVar11) - (double)CONCAT44(0x3f800000,fVar11);
        }
        iVar10 = (int)((ulonglong)dVar13 >> 0x20);
        iStack_328 = iVar10;
        if (cVar19 != '\0') {
          iStack_328 = SUB84(dVar13,0);
          iStack_324 = iVar10;
        }
        Vec3_scale(ar4 + 0x10,&iStack_328,ar6_00,pcVar8,auStack_2e4);
        ar6_00 = (code *)adStack_2f4;
        Vec3_scale((code *)((int)ar4 + 700),&uStack_308,ar6_00,pcVar8,ar6_00);
        Vec3_add(auStack_2e4,adStack_2f4,ar6_00,pcVar8,(int)&uStack_308 + 4);
        Vec3_assign(ar4 + 0x10,(int)&uStack_308 + 4,ar6_00,pcVar8);
        Vec3_dtor((int)&uStack_308 + 4,0xffffffff,ar6_00,pcVar8);
        Vec3_dtor(adStack_2f4,0xffffffff,ar6_00,pcVar8);
        Vec3_dtor(auStack_2e4,0xffffffff,ar6_00,pcVar8);
        FUN_8c022dac(ar4 + 0x10,(code *)((int)ar4 + 700),ar6_00,pcVar8);
        in_xd0 = dVar13;
        if (cVar19 == '\0') {
          dVar13 = (double)((ulonglong)dVar13 >> 0x20);
          in_xd0 = uStack_3c0;
        }
        dVar12 = (double)((ulonglong)dVar13 & 0xffffffff);
        if (cVar18 != '\0' || SUB84(dVar13,0) <= 0.0) {
          *(int *)(ar4 + 8) = 5;
          *(int *)((int)ar4 + 300) = 0;
          uVar9 = 0;
          FUN_8c031748(ar4,0,ar6_00,pcVar8);
        }
      }
      FUN_8c022fc0(ar5,adStack_34,ar6_00,pcVar8);
      if (cVar19 == '\0') {
        dVar13 = (double)CONCAT44(*(int *)(ar4 + 5),(int)((ulonglong)dVar12 >> 0x20));
        dVar12 = in_xd0;
      }
      else {
        dVar13 = ar4[5];
      }
      if (cVar18 == '\0') {
        fVar11 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar13 / dVar13,0);
      }
      if (cVar19 == '\0') {
        *(float *)(ar4 + 6) = fVar11;
      }
      else {
        ar4[6] = dVar12;
      }
      FUN_8c031764(ar4,adStack_34,ar5,pcVar8);
      ar6 = (code *)ar5;
    }
    goto LAB_8c0b30ba;
  }
  if (*(int *)((int)ar4 + 0x314) < 2) {
    iVar10 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,puVar6,ar6,pcVar8);
    if (iVar10 == 7) {
      pcVar8 = (code *)0x12c;
      *(int *)((int)ar4 + 300) = *(int *)((int)ar4 + 300) + 1;
      ar6 = (code *)ar4;
    }
    goto LAB_8c0b30ba;
  }
  vec3_clear(auStack_54,puVar6,ar6,pcVar8);
  iVar10 = get_field_1c_026dd8(ar4 + 0x16,puVar6,ar6,pcVar8);
  if (((iVar10 == 0x12) || (iVar10 == 0x13)) || (iVar10 == 0x14)) {
    ar5_00 = FUN_8c026db0(ar4,puVar6,ar6,pcVar8);
    uVar5 = ar5_00;
    ar4_00 = FUN_8c03c0f0(ar4 + 0x16,ar5_00,ar5_00,pcVar8);
    piVar3 = (int *)deref_u32(ar4_00,ar5_00,uVar5,pcVar8);
    iVar2 = piVar3[1];
    *(int *)((int)ar4 + 0xb4) = *piVar3;
    *(int *)(ar4 + 0x17) = iVar2;
    *(int *)((int)ar4 + 0xbc) = piVar3[2];
    *(undefined **)((int)ar4 + 0xb4) = &DAT_8c13ba4c + (iVar10 + -0x12) * 0x18;
    CAnimBody_GetCurFrame(ar4 + 0x16,0xb0,uVar5,pcVar8,ain0);
    pcVar8 = FUN_8c034384;
    FUN_8c034384(ar4 + 0x16,**(undefined4 **)((int)ar4 + 0xb4),uVar5,FUN_8c034384);
    Vec3_assign(adStack_44,auStack_64,uVar5,pcVar8);
    Vec3_dtor(auStack_64,0xffffffff,uVar5,pcVar8);
    Vec3_sub(adStack_44,(code *)((int)ar4 + 0x54),uVar5,pcVar8,auStack_74);
    Vec3_assign(auStack_54,auStack_74,uVar5,pcVar8);
    Vec3_dtor(auStack_74,0xffffffff,uVar5,pcVar8);
    ar6 = (code *)adStack_44;
    Vec3_assign((code *)((int)ar4 + 0x54),ar6,ar6,pcVar8);
    puVar6 = &DAT_8c13ba98;
    FUN_8c023bf4(auStack_54,&DAT_8c13ba98,ar6,pcVar8);
  }
  else {
    if (cVar19 == '\0') {
      in_dr0 = (double)CONCAT44(0x3f666666,*(int *)(ar4 + 5));
    }
    else {
      in_xd0 = ar4[5];
      in_dr0 = 3.73996784729797e-312;
    }
    if (cVar18 == '\0') {
      fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar11,SUB84(in_dr0,0) * fVar11);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar19 == '\0') {
      *(int *)(ar4 + 5) = SUB84(in_dr0,0);
    }
    else {
      ar4[5] = in_xd0;
    }
  }
  CAnimBody_GetCurFrame(ar4 + 0x16,puVar6,ar6,pcVar8,ain0);
  if (cVar18 == '\0') {
    iVar2 = (int)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    iVar2 = (int)in_dr0;
  }
  if (iVar10 == 0x12) {
    if ((iVar2 == 0x1e) || (iVar2 == 0x54)) {
      *(int *)(ar4 + 0x48) = 1;
      FUN_8c033474(ar4,0xb,ar5,in_stack_00000000);
      ar6 = (code *)ar5;
      pcVar8 = (code *)in_stack_00000000;
    }
    fVar11 = (float)iVar2;
    if (cVar19 == '\0') {
      fVar15 = 18.0;
    }
    else {
      fVar11 = 18.0;
      fVar15 = 23.0;
    }
    if (cVar18 == '\0' && fVar15 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 23.0;
      }
      else {
        fVar11 = 23.0;
        fVar15 = 1.24996e-42;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        if (cVar19 == '\0') {
          dVar12 = (double)CONCAT44(0x40c00000,(*(uint*)((uchar*)&dStack_4c+0)));
        }
        else {
          dVar12 = -1.4906861505776066e+237;
          in_xd0 = dStack_4c;
        }
        if (cVar18 == '\0') {
          fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar12 - dVar12,0);
        }
        dVar12 = in_xd0;
        if (cVar19 == '\0') {
          dStack_4c = (double)CONCAT44((*(uint*)((uchar*)&dStack_4c+4)),fVar11);
          dVar12 = dStack_4c;
        }
        goto LAB_8c0b262a;
      }
    }
    fVar11 = (float)iVar2;
    if (cVar19 == '\0') {
      fVar15 = 39.0;
    }
    else {
      fVar11 = 39.0;
      fVar15 = 63.0;
    }
    if (cVar18 == '\0' && fVar15 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 63.0;
      }
      else {
        fVar11 = 63.0;
        fVar15 = 1.24996e-42;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        if (cVar19 == '\0') {
          dVar12 = (double)CONCAT44(0x3f3851ec,(*(uint*)((uchar*)&dStack_4c+0)));
        }
        else {
          dVar12 = 1.0192310304781727e-72;
          in_xd0 = dStack_4c;
        }
        if (cVar18 == '\0') {
          fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar12 + dVar12,0);
        }
        dVar12 = in_xd0;
        if (cVar19 == '\0') {
          dStack_4c = (double)CONCAT44((*(uint*)((uchar*)&dStack_4c+4)),fVar11);
          dVar12 = dStack_4c;
        }
        goto LAB_8c0b262a;
      }
    }
    puVar6 = &DAT_8c13ba9c;
    Vec3_scale((code *)((int)ar4 + 0x14),&DAT_8c13ba9c,ar6,pcVar8,auStack_84);
    FUN_8c0230f0((code *)((int)ar4 + 0x14),puVar6,ar6,pcVar8,auStack_94);
    Vec3_scale(auStack_94,&DAT_8c13baa0,ar6,pcVar8,auStack_a4);
    puVar7 = auStack_a4;
    Vec3_add(auStack_84,puVar7,ar6,pcVar8,auStack_b4);
    Vec3_normalize(auStack_b4,puVar7,ar6,pcVar8);
    Vec3_assign((code *)((int)ar4 + 0x14),auStack_c4,ar6,pcVar8);
    Vec3_dtor(auStack_c4,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_b4,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_a4,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_94,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_84,0xffffffff,ar6,pcVar8);
    dVar12 = dStack_4c;
  }
  else if (iVar10 == 0x13) {
    if ((iVar2 == 0x26) || (iVar2 == 0x3c)) {
      *(int *)(ar4 + 0x48) = 1;
      FUN_8c033474(ar4,0xb,ar5,in_stack_00000000);
      pcVar8 = (code *)in_stack_00000000;
    }
    fVar11 = SUB84(in_dr0,0);
    ar6 = (code *)adStack_d4;
    Vec3_scale((code *)((int)ar4 + 0x14),&DAT_8c13baa4,ar6,pcVar8,ar6);
    FUN_8c0230f0((code *)((int)ar4 + 0x14),FUN_8c0230f0,ar6,pcVar8,auStack_e4);
    Vec3_scale(auStack_e4,&DAT_8c13baa8,ar6,pcVar8,auStack_f4);
    puVar7 = auStack_f4;
    Vec3_add(adStack_d4,puVar7,ar6,pcVar8,auStack_104);
    Vec3_normalize(auStack_104,puVar7,ar6,pcVar8);
    Vec3_assign((code *)((int)ar4 + 0x14),auStack_114,ar6,pcVar8);
    Vec3_dtor(auStack_114,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_104,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_f4,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_e4,0xffffffff,ar6,pcVar8);
    Vec3_dtor(adStack_d4,0xffffffff,ar6,pcVar8);
    dVar12 = dStack_4c;
  }
  else if (iVar10 == 0x14) {
    if ((iVar2 == 0x10) || (iVar2 == 0x47)) {
      *(int *)(ar4 + 0x48) = 1;
      puVar6 = (undefined *)0xb;
      FUN_8c033474(ar4,0xb,ar5,in_stack_00000000);
      ar6 = (code *)ar5;
      pcVar8 = (code *)in_stack_00000000;
    }
    fVar11 = (float)iVar2;
    if (cVar19 == '\0') {
      fVar15 = 35.0;
    }
    else {
      fVar11 = 35.0;
      fVar15 = 60.0;
    }
    if (cVar18 == '\0' && fVar15 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 60.0;
      }
      else {
        fVar11 = 60.0;
        fVar15 = 5.0;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        Vec3_set_xyz(auStack_120,puVar6,ar6,pcVar8);
        FUN_8c023484((code *)((int)ar4 + 0x14),auStack_120,ar6,pcVar8,auStack_130);
        Vec3_assign((code *)((int)ar4 + 0x14),auStack_130,ar6,pcVar8);
        Vec3_dtor(auStack_130,0xffffffff,ar6,pcVar8);
        object_dtor_delete(auStack_120,0xffffffff,ar6,pcVar8);
        dVar12 = dStack_4c;
        goto LAB_8c0b262a;
      }
    }
    fVar11 = (float)iVar2;
    if (cVar19 == '\0') {
      fVar15 = 72.0;
    }
    else {
      fVar11 = 72.0;
      fVar15 = 100.0;
    }
    if (cVar18 == '\0' && fVar15 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 100.0;
      }
      else {
        fVar11 = 100.0;
        fVar15 = 5.0;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        Vec3_set_xyz(auStack_13c,puVar6,ar6,pcVar8);
        FUN_8c023484((code *)((int)ar4 + 0x14),auStack_13c,ar6,pcVar8,auStack_14c);
        Vec3_assign((code *)((int)ar4 + 0x14),auStack_14c,ar6,pcVar8);
        Vec3_dtor(auStack_14c,0xffffffff,ar6,pcVar8);
        object_dtor_delete(auStack_13c,0xffffffff,ar6,pcVar8);
        dVar12 = dStack_4c;
        goto LAB_8c0b262a;
      }
    }
    fVar11 = (float)iVar2;
    if (cVar18 == '\0' && 0.0 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 18.0;
      }
      else {
        fVar11 = 18.0;
        fVar15 = -2.0;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        Vec3_set_xyz(auStack_158,Vec3_set_xyz,ar6,pcVar8);
        FUN_8c023484((code *)((int)ar4 + 0x14),auStack_158,ar6,pcVar8,adStack_168);
        Vec3_assign((code *)((int)ar4 + 0x14),adStack_168,ar6,pcVar8);
        uVar5 = 0xffffffff;
        ar6 = (code *)adStack_168;
        Vec3_dtor(ar6,0xffffffff,ar6,0xffffffff);
        object_dtor_delete(auStack_158,0xffffffff,ar6,uVar5);
        dVar12 = dStack_4c;
        goto LAB_8c0b262a;
      }
    }
    Vec3_scale((code *)((int)ar4 + 0x14),&DAT_8c13baac,ar6,pcVar8,auStack_178);
    FUN_8c0230f0((code *)((int)ar4 + 0x14),auStack_188,ar6,pcVar8,auStack_188);
    Vec3_scale(auStack_188,&DAT_8c13bab0,ar6,pcVar8,auStack_198);
    puVar7 = auStack_198;
    Vec3_add(auStack_178,puVar7,ar6,pcVar8,auStack_1a8);
    Vec3_normalize(auStack_1a8,puVar7,ar6,pcVar8);
    Vec3_assign((code *)((int)ar4 + 0x14),auStack_1b8,ar6,pcVar8);
    Vec3_dtor(auStack_1b8,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_1a8,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_198,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_188,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_178,0xffffffff,ar6,Vec3_dtor);
    dVar12 = dStack_4c;
  }
  else {
    iVar10 = rand_range(ar4,0,0x1e,pcVar8);
    fVar11 = SUB84(in_dr0,0);
    if (iVar10 == 0) {
      *(int *)(ar4 + 0x48) = 1;
      FUN_8c033474(ar4,0xb,ar5,in_stack_00000000);
      pcVar8 = (code *)in_stack_00000000;
    }
    ar6 = Vec3_scale;
    Vec3_scale((code *)((int)ar4 + 0x14),&DAT_8c13bab4,Vec3_scale,pcVar8,auStack_1c8);
    FUN_8c0230f0((code *)((int)ar4 + 0x14),auStack_1d8,ar6,pcVar8,auStack_1d8);
    Vec3_scale(auStack_1d8,&DAT_8c13bab8,ar6,pcVar8,auStack_1e8);
    Vec3_add(auStack_1c8,auStack_1e8,ar6,pcVar8,auStack_1f8);
    Vec3_normalize(auStack_1f8,Vec3_normalize,ar6,pcVar8);
    Vec3_assign((code *)((int)ar4 + 0x14),auStack_208,ar6,pcVar8);
    Vec3_dtor(auStack_208,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_1f8,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_1e8,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_1d8,0xffffffff,ar6,pcVar8);
    Vec3_dtor(auStack_1c8,0xffffffff,ar6,pcVar8);
    dVar12 = dStack_4c;
  }
LAB_8c0b262a:
  dStack_4c = dVar12;
  pcVar8 = (code *)adStack_218;
  Vec3_ctor_xyz(pcVar8,Vec3_ctor_xyz,ar6,pcVar8);
  iStack_31c = FUN_8c023d04(auStack_54,adStack_218,ar6,pcVar8);
  Vec3_dtor(adStack_218,0xffffffff,ar6,pcVar8);
  if (iStack_31c != 0) {
    vec3_copy_8c02b5fc(auStack_224,ain0,ar6,pcVar8);
    ar6 = FUN_8c023484;
    FUN_8c023484(auStack_54,auStack_224,FUN_8c023484,pcVar8,auStack_234);
    Vec3_assign(ar4 + 0x67,auStack_234,ar6,pcVar8);
    Vec3_dtor(auStack_234,0xffffffff,ar6,pcVar8);
    object_dtor_delete(auStack_224,0xffffffff,ar6,pcVar8);
  }
  Vec3_assign(ar4 + 0x10,(code *)((int)ar4 + 0x14),ar6,pcVar8);
  iVar10 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,ar4 + 0x16,ar6,pcVar8);
  if (iVar10 == 1) {
    _DAT_8c286dec = _DAT_8c286dec + 1;
    uVar9 = 0;
    *(int *)((int)ar4 + 300) = 0;
    if (cVar19 == '\0') {
      *(int *)((int)ar4 + 0x334) = 0;
    }
    else {
      *(ulonglong *)((int)ar4 + 0x334) = (ulonglong)(uint)fVar11;
    }
  }
LAB_8c0b30ba:
  uStack_318 = uVar9;
  Vec3_dtor(auStack_54,0xffffffff,ar6,pcVar8);
  Vec3_dtor(adStack_44,0xffffffff,ar6,pcVar8);
  Vec3_dtor(adStack_34,0xffffffff,ar6,pcVar8);
  return uStack_318;
}

__asm__(".globl _FUN_8c0b1ac0\n.set _FUN_8c0b1ac0, _FUN_8c0b1ac0_def\n");
