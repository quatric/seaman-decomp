#include "../decls.h"
undefined4 FUN_8c058024_def(int ar4,code *ar5,undefined4 ar6,code *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  double *ar5_00;
  int iVar6;
  undefined1 *puVar7;
  code *pcVar8;
  code *ar7_00;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  double in_dr0;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined4 in_fr3;
  float fVar17;
  undefined4 in_fr12;
  double in_dr14;
  double in_xd0;
  undefined8 in_xd14;
  undefined8 uVar18;
  char cVar19;
  char cVar20;
  int in_stack_00000000;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [12];
  undefined1 auStack_134 [16];
  undefined1 auStack_124 [12];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [12];
  undefined1 auStack_fc [16];
  undefined1 auStack_ec [16];
  undefined1 auStack_dc [16];
  undefined1 auStack_cc [16];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [4];
  float fStack_48;
  undefined4 uStack_44;
  undefined1 auStack_3c [4];
  float fStack_38;
  float fStack_34;
  
  cVar20 = '\0';
  cVar19 = '\0';
  uVar11 = 1;
  pcVar8 = ar5;
  ar7_00 = ar7;
  uVar13 = ar6;
  Vec3_ctor_zero(auStack_3c,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_4c,pcVar8,ar6,ar7_00);
  Vec3_ctor_zero(auStack_5c,pcVar8,ar6,ar7_00);
  puVar10 = (undefined *)0x0;
  puVar9 = (undefined *)0x0;
  if (*(int *)(ar4 + 0x29c) == 0) {
    vec3_clear(ar4 + 0x2d4,0x2d4,ar6,ar7_00);
    uVar12 = SUB84(in_dr0,0);
    uVar3 = 0x2a8;
    vec3_clear(ar4 + 0x2a8,0x2a8,ar6,ar7_00);
    vec3_clear(ar4 + 0x90,uVar3,ar6,ar7_00);
    pcVar8 = vec3_clear;
    vec3_clear(ar4 + 0x6c,vec3_clear,ar6,ar7_00);
    FUN_8c0230f0(ar4 + 0x14,pcVar8,ar6,ar7_00,auStack_6c);
    Vec3_normalize(auStack_6c,pcVar8,ar6,ar7_00);
    Vec3_assign(ar4 + 0x14,auStack_7c,ar6,ar7_00);
    Vec3_dtor(auStack_7c,0xffffffff,ar6,ar7_00);
    Vec3_dtor(auStack_6c,0xffffffff,ar6,ar7_00);
    if (cVar20 == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = 0;
      uVar16 = CONCAT44(*(undefined4 *)(ar5 + 4),uVar12);
      *(undefined4 *)(ar4 + 0x2e4) = *(undefined4 *)(ar5 + 4);
    }
    else {
      *(ulonglong *)(ar4 + 0xa0) = (ulonglong)uVar12;
      uVar16 = *(undefined8 *)(ar5 + 4);
      *(undefined8 *)(ar4 + 0x2e4) = uVar16;
    }
    if (in_stack_00000000 == -1) {
      uVar3 = 3;
      iVar6 = 0;
      iVar2 = rand_range(ar4,0,3,ar7_00);
      if (ar7 == (code *)0x1b) {
        ar7_00 = (code *)0x0;
        uVar3 = 0xffffffff;
        iVar6 = iVar2 + 0x50;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar6,0xffffffff,0);
      }
      else if (ar7 == (code *)0x1c) {
        ar7_00 = (code *)0x0;
        uVar3 = 0xffffffff;
        iVar6 = iVar2 + 0x53;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar6,0xffffffff,0);
      }
      else if (ar7 == (code *)0x1d) {
        ar7_00 = (code *)0x0;
        uVar3 = 0xffffffff;
        iVar6 = 0x53;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x53,0xffffffff,0);
      }
      else if (ar7 == (code *)0x1e) {
        ar7_00 = (code *)0x0;
        uVar3 = 0xffffffff;
        iVar6 = 0x58;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x58,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar6,uVar3,ar7_00);
    }
    else if (in_stack_00000000 == -2) {
      ar7_00 = (code *)0x0;
      uVar3 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x55,0xffffffff,0);
    }
    else {
      ar7_00 = (code *)0x0;
      uVar3 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,in_stack_00000000,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,in_stack_00000000,uVar3,ar7_00);
    }
    *(undefined4 *)(ar4 + 0x2e8) = 1;
    FUN_8c0230f0(ar5,1,uVar3,ar7_00,auStack_8c);
    FUN_8c0230f0(uVar13,FUN_8c0230f0,uVar3,ar7_00,auStack_9c);
    FUN_8c022fc0(auStack_8c,auStack_9c,uVar3,ar7_00);
    uVar18 = uVar16;
    if (cVar20 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)uVar16 >> 0x20))
      ;
      uVar18 = in_xd14;
    }
    Vec3_dtor(auStack_9c,0xffffffff,uVar3,ar7_00);
    uVar4 = (undefined4)uVar16;
    Vec3_dtor(auStack_8c,0xffffffff,uVar3,ar7_00);
    if (cVar20 == '\0') {
      *(undefined4 *)(ar4 + 0x2c0) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x2c0) = CONCAT44(0x3f800000,uVar4);
    }
    in_dr0 = (double)CONCAT44(0x3f800000,uVar4);
    if (cVar20 == '\0') {
      *(undefined4 *)(ar4 + 0x2c4) = 0x3f800000;
    }
    else {
      *(double *)(ar4 + 0x2c4) = in_dr0;
    }
    pcVar8 = get_field_1c_026dd8;
    iVar2 = get_field_1c_026dd8(ar4 + 0xb0,get_field_1c_026dd8,uVar3,ar7_00);
    if (iVar2 == 0x50) {
      if (cVar20 == '\0') {
        in_dr0 = (double)CONCAT44(0x43a07481,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 3.5683445164698805e+163;
      }
      if (cVar19 == '\0') {
        fVar17 = SUB84(in_dr14,0) / (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        fVar17 = SUB84(in_dr14 / in_dr0,0);
      }
      if (cVar20 == '\0') {
        *(float *)(ar4 + 0x2c0) = fVar17;
      }
      else {
        *(undefined8 *)(ar4 + 0x2c0) = uVar18;
      }
    }
    else if (iVar2 == 0x52) {
      if (cVar20 == '\0') {
        in_dr0 = (double)CONCAT44(0x43a5a000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = 1.44351786672845e-311;
      }
      if (cVar19 == '\0') {
        fVar17 = SUB84(in_dr14,0) / (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        fVar17 = SUB84(in_dr14 / in_dr0,0);
      }
      if (cVar20 == '\0') {
        *(float *)(ar4 + 0x2c0) = fVar17;
      }
      else {
        *(undefined8 *)(ar4 + 0x2c0) = uVar18;
      }
    }
    else if (iVar2 == 0x58) {
      FUN_8c032ab0(ar4,pcVar8,uVar3,ar7_00);
      if (cVar20 == '\0') {
        *(int *)(ar4 + 0x2c4) = (int)((ulonglong)in_dr0 >> 0x20);
        dVar14 = (double)CONCAT44(0x42080000,SUB84(in_dr0,0));
      }
      else {
        *(double *)(ar4 + 0x2c4) = in_dr0;
        dVar14 = 4.323456351280824e+17;
      }
      pcVar8 = (code *)(ar4 + 0x2c0);
      if (cVar19 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) - (float)((ulonglong)dVar14 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 - dVar14;
      }
      if (cVar20 == '\0') {
        in_dr0 = (double)CONCAT44(0x43980000,SUB84(dVar14,0));
      }
      else {
        in_dr0 = 3.5682127120005427e+163;
      }
      if (cVar19 == '\0') {
        fVar17 = SUB84(in_dr14,0) / (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        fVar17 = SUB84(in_dr14 / in_dr0,0);
      }
      if (cVar20 == '\0') {
        *(float *)pcVar8 = fVar17;
      }
      else {
        *(undefined8 *)pcVar8 = uVar18;
      }
    }
    FUN_8c022d04(ar4 + 0x2a8,pcVar8,uVar3,ar7_00);
    pcVar8 = FUN_8c022d04;
    FUN_8c022d04(ar4 + 0x2d4,FUN_8c022d04,uVar3,ar7_00);
    uVar4 = FUN_8c026db0(ar4,pcVar8,uVar3,ar7_00);
    uVar1 = FUN_8c03c0f0(ar4 + 0xb0,uVar4,uVar3,ar7_00);
    puVar5 = (undefined4 *)deref_u32(uVar1,uVar4,uVar3,ar7_00);
    uVar3 = puVar5[1];
    *(undefined4 *)(ar4 + 0xb4) = *puVar5;
    *(undefined4 *)(ar4 + 0xb8) = uVar3;
    pcVar8 = (code *)puVar5[2];
    *(code **)(ar4 + 0xbc) = pcVar8;
    ar6 = 0x29c;
    *(int *)(ar4 + 0x29c) = *(int *)(ar4 + 0x29c) + 1;
    *(undefined4 *)(ar4 + 800) = 0;
  }
  else if (*(int *)(ar4 + 0x29c) != 1) goto LAB_8c058cde;
  fVar17 = 0.0;
  iVar2 = get_field_1c_026dd8(ar4 + 0xb0,pcVar8,ar6,ar7_00);
  if ((iVar2 < 0x59) && (0x4f < iVar2)) {
                    
    switch(iVar2) {
    case 0x52:
      CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar8,ar6,ar7_00,uVar13);
      if (cVar20 == '\0') {
        dVar14 = (double)CONCAT44(0x42100000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar14 = 1.69814422787745e-311;
        in_xd0 = in_dr0;
      }
      in_dr0 = dVar14;
      if (((cVar19 != '\0' || (float)((ulonglong)in_dr0 >> 0x20) <= SUB84(in_dr0,0)) &&
          (*(int *)(ar4 + 800) == 0)) &&
         (pcVar8 = ar5, Vec3_assign(auStack_3c,ar5,ar6,ar7_00), *(char *)(ar4 + 0x210) == '\x01')) {
        ar7_00 = (code *)0x5;
        ar6 = 1;
        pcVar8 = (code *)auStack_3c;
        (**(code **)(**(int **)(ar4 + 0x244) + 0xd0))(*(int **)(ar4 + 0x244),pcVar8,1,5);
      }
    case 0x50:
    case 0x51:
      iVar2 = get_field_1c_026dd8(ar4 + 0xb0,pcVar8,ar6,ar7_00);
      puVar9 = &DAT_8c13612c + (iVar2 + -0x50) * 0x18;
      puVar10 = &DAT_8c13612c + (iVar2 + -0x50) * 0x18;
      break;
    default:
      pcVar8 = get_field_1c_026dd8;
      iVar2 = get_field_1c_026dd8(ar4 + 0xb0,get_field_1c_026dd8,ar6,ar7_00);
      puVar9 = &DAT_8c13609c + (iVar2 + -0x53) * 0x18;
      puVar10 = &DAT_8c13609c + (iVar2 + -0x53) * 0x18;
      break;
    case 0x56:
    case 0x57:
      break;
    case 0x58:
      CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar8,ar6,ar7_00,uVar13);
      if (cVar20 == '\0') {
        dVar14 = (double)CONCAT44(0x42a20000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar14 = 1.49443735929137e-311;
        in_xd0 = in_dr0;
      }
      in_dr0 = dVar14;
      if (cVar19 == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr0,0)) {
        in_dr0 = (double)CONCAT44(0x3f800000,SUB84(in_dr0,0));
        if (cVar20 == '\0') {
          *(undefined4 *)(ar4 + 0x2c0) = 0x3f800000;
        }
        else {
          *(double *)(ar4 + 0x2c0) = in_dr0;
        }
      }
      puVar9 = &DAT_8c1361d4;
      puVar10 = &DAT_8c1361d4;
      fVar17 = 0.0;
    }
  }
  uVar1 = SUB84(in_dr0,0);
  uVar3 = get_field_1c_026dd8(ar4 + 0xb0,pcVar8,ar6,ar7_00);
  uVar4 = FUN_8c03c0f0(ar4 + 0xb0,uVar3,ar6,ar7_00);
  puVar5 = (undefined4 *)deref_u32(uVar4,uVar3,ar6,ar7_00);
  uVar4 = puVar5[1];
  *(undefined4 *)(ar4 + 0xb4) = *puVar5;
  *(undefined4 *)(ar4 + 0xb8) = uVar4;
  *(undefined4 *)(ar4 + 0xbc) = puVar5[2];
  *(undefined **)(ar4 + 0xb4) = puVar10;
  CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7_00,uVar13);
  FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar6,ar7_00);
  Vec3_assign(auStack_4c,auStack_ac,ar6,ar7_00);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_ac,0xffffffff,ar6,ar7_00);
  if (cVar20 == '\0') {
    dVar14 = (double)CONCAT44(fStack_48,uVar1);
  }
  else {
    dVar14 = (double)CONCAT44(uStack_44,fStack_48);
  }
  if (cVar19 == '\0') {
    fVar17 = (float)((ulonglong)dVar14 >> 0x20) - fVar17;
  }
  else {
    fVar17 = (float)((ulonglong)(dVar14 - (double)CONCAT44(in_fr12,fVar17)) >> 0x20);
  }
  fStack_38 = fVar17;
  if (cVar20 != '\0') {
    fStack_38 = fStack_48;
    fStack_34 = fVar17;
  }
  uVar3 = get_field_1c_026dd8(ar4 + 0xb0,uVar3,ar6,ar7_00);
  uVar4 = FUN_8c03c0f0(ar4 + 0xb0,uVar3,ar6,ar7_00);
  puVar5 = (undefined4 *)deref_u32(uVar4,uVar3,ar6,ar7_00);
  uVar3 = puVar5[1];
  *(undefined4 *)(ar4 + 0xb4) = *puVar5;
  *(undefined4 *)(ar4 + 0xb8) = uVar3;
  uVar3 = puVar5[2];
  *(undefined4 *)(ar4 + 0xbc) = uVar3;
  *(undefined **)(ar4 + 0xb4) = puVar9;
  CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7_00,uVar13);
  uVar3 = **(undefined4 **)(ar4 + 0xb4);
  FUN_8c034384(ar4 + 0xb0,uVar3,uVar3,ar7_00);
  pcVar8 = Vec3_assign;
  Vec3_assign(auStack_4c,auStack_bc,uVar3,Vec3_assign);
  Vec3_dtor(auStack_bc,0xffffffff,0xffffffff,pcVar8);
  puVar7 = auStack_3c;
  Vec3_sub(puVar7,ar4 + 0x2d4,puVar7,ar4 + 0x2d4,auStack_cc);
  pcVar8 = Vec3_assign;
  Vec3_assign(ar4 + 0x2a8,auStack_cc,puVar7,Vec3_assign);
  Vec3_dtor(auStack_cc,0xffffffff,0xffffffff,pcVar8);
  if (cVar20 == '\0') {
    dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),*(undefined4 *)(ar4 + 0x2b0));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x2b0);
    dVar14 = *(double *)(ar4 + 0x2c0);
  }
  if (cVar19 == '\0') {
    fVar17 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
  }
  else {
    fVar17 = SUB84(dVar14 * dVar14,0);
  }
  if (cVar20 == '\0') {
    *(float *)(ar4 + 0x2b0) = fVar17;
    fVar17 = *(float *)(ar4 + 0x2ac);
  }
  else {
    *(double *)(ar4 + 0x2b0) = in_xd0;
    in_xd0 = *(double *)(ar4 + 0x2ac);
  }
  uVar3 = 0x2c4;
  if (cVar20 == '\0') {
    dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c4),fVar17);
  }
  else {
    dVar14 = *(double *)(ar4 + 0x2c4);
  }
  if (cVar19 == '\0') {
    fVar17 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
  }
  else {
    fVar17 = SUB84(dVar14 * dVar14,0);
  }
  if (cVar20 == '\0') {
    *(float *)(ar4 + 0x2ac) = fVar17;
  }
  else {
    *(double *)(ar4 + 0x2ac) = in_xd0;
  }
  ar7_00 = FUN_8c0230f0;
  FUN_8c0230f0(ar4 + 0x14,0x2c4,ar4 + 0x2ac,FUN_8c0230f0,auStack_dc);
  puVar7 = auStack_ec;
  Vec3_ctor_xyz(puVar7,uVar3,puVar7,ar7_00);
  FUN_8c022dac(auStack_dc,auStack_ec,puVar7,ar7_00);
  Vec3_dtor(auStack_ec,0xffffffff,puVar7,ar7_00);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_dc,0xffffffff,puVar7,ar7_00);
  Vec3_ctor_xyz(auStack_fc,uVar3,puVar7,ar7_00);
  iVar2 = FUN_8c023334(ar4 + 0x14,auStack_fc,puVar7,ar7_00);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_fc,0xffffffff,puVar7,ar7_00);
  if (iVar2 == 3) {
    Vec3_set_xyz(auStack_108,uVar3,puVar7,ar7_00);
    FUN_8c023484(ar4 + 0x2a8,auStack_108,puVar7,ar7_00,auStack_118);
    Vec3_assign(ar4 + 0x2a8,auStack_118,puVar7,ar7_00);
    Vec3_dtor(auStack_118,0xffffffff,puVar7,ar7_00);
    object_dtor_delete(auStack_108,0xffffffff,puVar7,ar7_00);
  }
  else if (iVar2 == 4) {
    Vec3_set_xyz(auStack_124,uVar3,puVar7,ar7_00);
    FUN_8c023484(ar4 + 0x2a8,auStack_124,puVar7,ar7_00,auStack_134);
    Vec3_assign(ar4 + 0x2a8,auStack_134,puVar7,ar7_00);
    Vec3_dtor(auStack_134,0xffffffff,puVar7,ar7_00);
    object_dtor_delete(auStack_124,0xffffffff,puVar7,ar7_00);
  }
  Vec3_assign(ar4 + 0x2d4,auStack_3c,puVar7,ar7_00);
  ar5_00 = (double *)(ar4 + 0x2e4);
  uVar3 = 0x2e4;
  if (cVar20 == '\0') {
    dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2ac),*(undefined4 *)(ar4 + 0x2e4));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x2e4);
    dVar14 = *(double *)(ar4 + 0x2ac);
  }
  if (cVar19 == '\0') {
    fVar17 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
  }
  else {
    fVar17 = SUB84(dVar14 + dVar14,0);
  }
  if (cVar20 == '\0') {
    *(float *)ar5_00 = fVar17;
    dVar14 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),in_fr3);
    dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2ac),fVar17);
  }
  else {
    *ar5_00 = in_xd0;
    dVar14 = *(double *)(ar5 + 4);
    dVar15 = *(double *)(ar4 + 0x2ac);
  }
  fVar17 = (float)((ulonglong)dVar15 >> 0x20);
  if (cVar19 == '\0') {
    dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + fVar17,SUB84(dVar14,0));
  }
  else {
    dVar14 = dVar14 + dVar15;
  }
  if (cVar20 == '\0') {
    dVar15 = (double)CONCAT44(fVar17,*(undefined4 *)(ar4 + 0x2e4));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x2e4);
  }
  if (cVar19 == '\0') {
    fVar17 = SUB84(dVar15,0) - (float)((ulonglong)dVar14 >> 0x20);
  }
  else {
    fVar17 = SUB84(dVar15 - dVar14,0);
  }
  if (cVar20 == '\0') {
    dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2ac),fVar17);
  }
  else {
    dVar14 = *(double *)(ar4 + 0x2ac);
  }
  if (cVar19 == '\0') {
    fVar17 = SUB84(dVar14,0) + (float)((ulonglong)dVar14 >> 0x20);
  }
  else {
    fVar17 = SUB84(dVar14 + dVar14,0);
  }
  if (cVar20 == '\0') {
    *(float *)(ar4 + 0x2ac) = fVar17;
  }
  else {
    *(double *)(ar4 + 0x2ac) = in_xd0;
  }
  uVar16 = CONCAT44(0x3f800000,fVar17);
  if (cVar20 == '\0') {
    *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x278) = uVar16;
  }
  iVar2 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,0x2e4,ar7_00);
  if (iVar2 == 0x55) {
    CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,uVar3,ar7_00,uVar13);
    if (cVar20 == '\0') {
      uVar16 = CONCAT44(0x42100000,(int)((ulonglong)uVar16 >> 0x20));
    }
    else {
      uVar16 = 0x3e99999a42100000;
    }
    if (cVar19 == '\0' && (float)((ulonglong)uVar16 >> 0x20) < (float)uVar16) {
      ar7_00 = (code *)(ar4 + 0x278);
      if (cVar20 == '\0') {
        uVar16 = CONCAT44(0x3e99999a,(float)uVar16);
        *(undefined4 *)ar7_00 = 0x3e99999a;
      }
      else {
        uVar16 = 0x8c033b983e99999a;
        *(undefined8 *)ar7_00 = 0x8c033b983e99999a;
      }
    }
  }
  uVar13 = (undefined4)uVar16;
  ar6 = 0x278;
  iVar6 = ar4 + 0x278;
  iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar6,0x278,ar7_00);
  if (iVar2 != 1) goto LAB_8c058cde;
  iVar2 = get_field_1c_026dd8(ar4 + 0xb0,iVar6,ar6,ar7_00);
  if (iVar2 == 0x50) {
    *(undefined4 *)(ar4 + 0x2e8) = 1;
    *(undefined4 *)(ar4 + 0x29c) = 0;
  }
  else {
    if (iVar2 != 0x51) {
      if (iVar2 != 0x52) {
        *(undefined4 *)(ar4 + 0x2e8) = 2;
        *(undefined4 *)(ar4 + 0x29c) = 0;
        goto LAB_8c058cae;
      }
      *(undefined4 *)(ar4 + 0x2e8) = 2;
      Vec3_set_xyz(auStack_140,iVar6,ar6,ar7_00);
      FUN_8c023484(ar4 + 0x14,auStack_140,ar6,ar7_00,auStack_150);
      Vec3_assign(ar4 + 0x14,auStack_150,ar6,ar7_00);
      Vec3_dtor(auStack_150,0xffffffff,ar6,ar7_00);
      uVar11 = 0xffffffff;
      object_dtor_delete(auStack_140,0xffffffff,ar6,ar7_00);
      Vec3_length(ar4 + 0x14,uVar11,ar6,ar7_00);
      iVar6 = ar4 + 0x14;
      Vec3_assign(ar4 + 0x80,iVar6,ar6,ar7_00);
    }
    *(undefined4 *)(ar4 + 0x2e8) = 2;
    *(undefined4 *)(ar4 + 0x29c) = 0;
  }
LAB_8c058cae:
  uVar11 = 0;
  FUN_8c022d04(ar4 + 0x2a8,iVar6,ar6,ar7_00);
  FUN_8c022d04(ar4 + 0x2d4,iVar6,ar6,ar7_00);
  if (cVar20 == '\0') {
    *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar13);
  }
LAB_8c058cde:
  Vec3_dtor(auStack_5c,0xffffffff,ar6,ar7_00);
  Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7_00);
  Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7_00);
  return uVar11;
}

__asm__(".globl _FUN_8c058024\n.set _FUN_8c058024, _FUN_8c058024_def\n");
