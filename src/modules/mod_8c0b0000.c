/* Seaman (USA) region 0x8c0b0000-0x8c0c0000 (Ghidra decompiler) */

/* FUN_8c0b0784 @ 8c0b0784 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b0784(int ar4,undefined4 ar5,int *ar6,int *ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  int *in_stack_00000000;
  int *in_stack_00000004;
  undefined1 auStack_38 [16];
  int aiStack_28 [5];
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar5 = 1;
  piVar3 = ar6;
  piVar4 = ar7;
  FUN_8c03f480(ar5,ar5,ar6,ar7,auStack_38);
  Vec3_ctor_copy(aiStack_28,auStack_38,piVar3,piVar4);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,piVar3,piVar4);
  iVar1 = *(int *)(ar4 + 0x124);
  if ((iVar1 < 9) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      if (*(int *)(ar4 + 0x348) == 1) {
        piVar3 = aiStack_28;
        iVar5 = FUN_8c0b3604(ar4,in_stack_00000000,piVar3,ar6);
        piVar4 = ar6;
      }
      else if (*(int *)(ar4 + 0x324) == 0) {
        iVar5 = FUN_8c0b0ad4(ar4,uVar2,piVar3,piVar4);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar7 = -8.36519102553774e-251;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 * dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(ar4 + 0x28) = fVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
      }
      else {
        piVar3 = aiStack_28;
        iVar5 = FUN_8c0b3604(ar4,in_stack_00000000,piVar3,ar6);
        piVar4 = ar6;
      }
      if (iVar5 == 0) {
        *(undefined4 *)(ar4 + 0x348) = 0;
        piVar3 = (int *)0x64;
        iVar1 = rand_range(ar4,0,100,piVar4);
        if (iVar1 < 0x50) {
          *(undefined4 *)(ar4 + 0x324) = 0;
        }
        else {
          *(undefined4 *)(ar4 + 0x324) = 1;
        }
      }
      break;
    case 1:
      (**(code **)(*ar7 + 0x128))(ar7,in_stack_00000000,piVar3,piVar4);
      piVar3 = aiStack_28;
      iVar5 = FUN_8c0b3184(ar4,in_stack_00000000,piVar3,ar6);
      piVar4 = ar6;
      break;
    case 2:
      *(undefined4 *)(ar4 + 0x214) = 0;
      iVar5 = FUN_8c0b5098(ar4,in_stack_00000000,ar5,piVar4);
      FUN_8c031c74(ar4,aiStack_28,in_stack_00000000,piVar4);
      piVar3 = in_stack_00000000;
      break;
    case 3:
      if (0 < *(int *)(ar4 + 0x314)) {
        *(undefined4 *)(ar4 + 0x214) = 0;
      }
      iVar5 = FUN_8c0b1ac0(ar4,in_stack_00000000,in_stack_00000004,ar6);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar7 = -8.36519102553774e-251;
      }
      if (cVar8 == '\0') {
        fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      piVar3 = in_stack_00000004;
      piVar4 = ar6;
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      break;
    case 4:
      iVar5 = FUN_8c0b4d14(ar4,ar5,in_stack_00000000,in_stack_00000004);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar7 = -8.36519102553774e-251;
      }
      if (cVar8 == '\0') {
        fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      piVar4 = in_stack_00000004;
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x28) = fVar6;
        piVar3 = in_stack_00000000;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
        piVar3 = in_stack_00000000;
      }
      break;
    case 5:
      *(undefined4 *)(ar4 + 0x214) = 0;
      iVar5 = FUN_8c0b4c7c(ar4,uVar2,piVar3,piVar4);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar7 = -8.36519102553774e-251;
      }
      if (cVar8 == '\0') {
        fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      break;
    case 6:
      *(undefined4 *)(ar4 + 0x214) = 0;
      iVar5 = FUN_8c0b4ba0(ar4,uVar2,piVar3,piVar4);
      break;
    case 7:
      *(undefined4 *)(ar4 + 0x214) = 0;
      if (*(int *)(ar4 + 0x314) < 2) {
        iVar5 = FUN_8c0b0eec(ar4,in_stack_00000000,in_stack_00000004,ar7);
        piVar3 = in_stack_00000004;
        piVar4 = ar7;
      }
      else {
        iVar5 = 0;
      }
      break;
    case 8:
      *(undefined4 *)(ar4 + 0x214) = 0;
      piVar4 = (int *)0x0;
      piVar3 = (int *)0xffffffff;
      uVar2 = 5;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,piVar3,piVar4);
    }
  }
  Vec3_dtor(aiStack_28,0xffffffff,piVar3,piVar4);
  return iVar5;
}



/* FUN_8c0b0ad4 @ 8c0b0ad4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b0ad4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float in_fr1;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  undefined8 uStack_90;
  float fStack_58;
  float fStack_54;
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar2 = 1;
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    ar6 = 100;
    iVar1 = rand_range(ar4,0,100,ar7);
    if (iVar1 < 0x1e) {
      *(undefined4 *)(ar4 + 0x330) = 0;
    }
    else if (iVar1 < 0x3c) {
      *(undefined4 *)(ar4 + 0x330) = 1;
    }
    else if (iVar1 < 0x46) {
      *(undefined4 *)(ar4 + 0x330) = 2;
    }
    else if (iVar1 < 0x5a) {
      *(undefined4 *)(ar4 + 0x330) = 4;
    }
    else {
      *(undefined4 *)(ar4 + 0x330) = 3;
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
LAB_8c0b0b7c:
    uVar2 = *(undefined4 *)(ar4 + 0x330);
    iVar1 = FUN_8c034148(ar4 + 0xb0,uVar2,ar6,ar7);
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 1;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
    }
    if (cVar6 == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = 0x3d4ccccd;
    }
    else {
      in_fr1 = 0.05;
      *(undefined8 *)(ar4 + 0xa0) = 0x8c03c3143d4ccccd;
    }
    FUN_8c03c314(ar4,uVar2,ar6,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    if (cVar6 == '\0') {
      *(undefined4 *)(ar4 + 0x2d0) = 0x3f800000;
      *(undefined4 *)(ar4 + 0x2cc) = 0x45bb8000;
    }
    else {
      *(undefined8 *)(ar4 + 0x2d0) = CONCAT44(0x3f800000,in_fr1);
      *(undefined8 *)(ar4 + 0x2cc) = 0x8045bb8000;
    }
    FUN_8c0230f0(ar4 + 0x80,uVar2,ar6,ar7,auStack_20);
    uVar2 = Vec3_length(auStack_20,uVar2,ar6,ar7);
    Vec3_assign(ar4 + 700,uVar2,ar6,ar7);
    Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
    return 1;
  }
  if (iVar1 == 1) goto LAB_8c0b0b7c;
  if (iVar1 != 2) {
    return 1;
  }
  iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
  if ((iVar1 < 9) && (2 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    default:
      iVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar1 == 7) {
        uVar2 = 0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
      goto LAB_8c0b0dd2;
    case 5:
      break;
    }
  }
  iVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7);
  if (iVar1 == 7) {
    uVar2 = 0;
    *(undefined4 *)(ar4 + 300) = 0;
  }
LAB_8c0b0dd2:
  iVar1 = FUN_8c023d04(ar4 + 0x80,ar4 + 700,ar6,ar7);
  if (iVar1 == 0) {
    return uVar2;
  }
  if (cVar6 == '\0') {
    in_fr1 = *(float *)(ar4 + 0x2d0);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2d0);
  }
  if (cVar5 == '\0') {
    in_fr1 = in_fr1 + 1.0;
  }
  else {
    in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
  }
  uStack_90 = in_xd0;
  if (cVar6 == '\0') {
    uStack_90 = CONCAT44(ar4,in_fr1);
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(uStack_90._4_4_ + 0x2d0) = (undefined4)uStack_90;
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2cc),(undefined4)uStack_90);
  }
  else {
    *(undefined8 *)(uStack_90._4_4_ + 0x2d0) = uStack_90;
    dVar4 = *(double *)(ar4 + 0x2cc);
    in_xd0 = uStack_90;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  fStack_54 = fVar3;
  if (cVar6 != '\0') {
    fStack_54 = (float)in_xd0;
    auStack_50[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar5 == '\0') {
    dVar4 = (double)CONCAT44(1.0 - fVar3,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(0x3f800000,fVar3) - (double)CONCAT44(0x3f800000,fVar3);
  }
  fVar3 = (float)((ulonglong)dVar4 >> 0x20);
  fStack_58 = fVar3;
  if (cVar6 != '\0') {
    fStack_58 = SUB84(dVar4,0);
    fStack_54 = fVar3;
  }
  Vec3_scale(ar4 + 0x80,&fStack_58,ar6,ar7,auStack_30);
  Vec3_scale(ar4 + 700,&fStack_54,ar6,ar7,auStack_40);
  Vec3_add(auStack_30,auStack_40,ar6,ar7,auStack_50);
  Vec3_assign(ar4 + 0x80,auStack_50,ar6,ar7);
  Vec3_dtor(auStack_50,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_40,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  return uVar2;
}



/* FUN_8c0b0eec @ 8c0b0eec callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b0eec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b0eec(int ar4,float *ar5,float *ar6,undefined4 ar7)

{
  double dVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int *ar5_00;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  code *ar5_01;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  ulonglong in_dr0;
  float fVar13;
  double dVar12;
  undefined8 in_xd0;
  char cVar14;
  char cVar15;
  float *ain0;
  undefined8 uStack_204;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_16c [12];
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
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  cVar15 = '\0';
  cVar14 = '\0';
  uVar10 = 1;
  pfVar6 = ar5;
  uVar9 = ar7;
  ain0 = ar6;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_40,pfVar6,ar6,uVar9);
  Vec3_ctor_zero(auStack_50,pfVar6,ar6,uVar9);
  iVar4 = *(int *)(ar4 + 300);
  if ((iVar4 < 9) && (-1 < iVar4)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar4) {
    case 0:
      uVar8 = 0xc;
      iVar4 = FUN_8c034148(ar4 + 0xb0,0xc,ar6,uVar9);
      if (iVar4 != 1) {
        if (iVar4 != 2) break;
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar8,ar6,uVar9);
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,uVar9);
      break;
    case 1:
      if (cVar15 == '\0') {
        fVar11 = *ar5;
        fVar13 = 1500.0;
      }
      else {
        in_xd0 = *(undefined8 *)ar5;
        fVar11 = 1500.0;
        fVar13 = 1000.0;
      }
      if (cVar14 == '\0' && fVar13 < fVar11) {
        Vec3_ctor_xyz(auStack_70,Vec3_ctor_xyz,ar6,uVar9);
        Vec3_assign(ar4 + 0x2e4,auStack_70,ar6,uVar9);
        Vec3_dtor(auStack_70,0xffffffff,ar6,uVar9);
      }
      else {
        Vec3_ctor_xyz(auStack_60,pfVar6,ar6,uVar9);
        Vec3_assign(ar4 + 0x2e4,auStack_60,ar6,uVar9);
        Vec3_dtor(auStack_60,0xffffffff,ar6,uVar9);
      }
      FUN_8c031b68(ar4,0x8c286dbc,ar6,uVar9);
      *(undefined4 *)(ar4 + 0x40) = 3;
      in_dr0 = (ulonglong)(uint)fVar11;
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = in_dr0;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 2:
      if (cVar15 == '\0') {
        uVar8 = (undefined4)in_dr0;
        uVar5 = 0x3f000000;
        *(undefined4 *)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        uVar8 = 0x3f000000;
        uVar5 = 0xb0;
        *(undefined8 *)(ar4 + 0x28) = 0xb03f000000;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,ar6,uVar9);
      pfVar6 = ar5;
      Vec3_sub(ar4 + 0x2e4,ar5,ar6,uVar9,auStack_80);
      uVar3 = Vec3_length(auStack_80,pfVar6,ar6,uVar9);
      Vec3_assign(auStack_50,uVar3,ar6,uVar9);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_80,0xffffffff,ar6,uVar9);
      FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,uVar9,auStack_90);
      FUN_8c0230f0(auStack_50,uVar3,ar6,uVar9,auStack_a0);
      FUN_8c022dac(auStack_90,auStack_a0,ar6,uVar9);
      Vec3_dtor(auStack_a0,0xffffffff,ar6,uVar9);
      Vec3_dtor(auStack_90,0xffffffff,ar6,uVar9);
      FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,uVar9);
      if (cVar15 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),uVar5);
      }
      else {
        in_xd0 = CONCAT44(uVar5,uVar8);
        dVar12 = *(double *)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      if (cVar15 == '\0') {
        *(float *)(ar4 + 0x30) = fVar11;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
      iVar4 = FUN_8c031764(ar4,ar4 + 0x2e4,ar5,uVar9);
      if (iVar4 == 0) {
        uVar9 = 300;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x40) = 0;
      }
      ar6 = (float *)0x1e;
      iVar4 = rand_range(ar4,0,0x1e,uVar9);
      if (iVar4 == 0) {
        *(undefined4 *)(ar4 + 0x240) = 1;
        FUN_8c033474(ar4,0xb,ar5,ar7);
        ar6 = ar5;
        uVar9 = ar7;
      }
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,uVar9);
      break;
    case 3:
      if (cVar15 == '\0') {
        fVar11 = *ar5;
        fVar13 = 1500.0;
      }
      else {
        in_xd0 = *(undefined8 *)ar5;
        fVar11 = 1500.0;
        fVar13 = 1200.0;
      }
      if (cVar14 == '\0' && fVar13 < fVar11) {
        Vec3_ctor_xyz(auStack_c0,pfVar6,ar6,uVar9);
        Vec3_assign(ar4 + 0x2e4,auStack_c0,ar6,uVar9);
        Vec3_dtor(auStack_c0,0xffffffff,ar6,uVar9);
      }
      else {
        Vec3_ctor_xyz(auStack_b0,Vec3_ctor_xyz,ar6,uVar9);
        Vec3_assign(ar4 + 0x2e4,auStack_b0,ar6,uVar9);
        Vec3_dtor(auStack_b0,0xffffffff,ar6,uVar9);
      }
      FUN_8c031b68(ar4,0x8c286dbc,ar6,uVar9);
      *(undefined4 *)(ar4 + 0x40) = 3;
      pfVar6 = (float *)(ar4 + 0x2c);
      in_dr0 = (ulonglong)(uint)fVar11;
      if (cVar15 == '\0') {
        *pfVar6 = 0.0;
      }
      else {
        *(ulonglong *)pfVar6 = in_dr0;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 4:
      if (cVar15 == '\0') {
        uVar8 = (undefined4)in_dr0;
        uVar5 = 0x3f000000;
        *(undefined4 *)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        uVar8 = 0x3f000000;
        uVar5 = 0xb0;
        *(undefined8 *)(ar4 + 0x28) = 0xb03f000000;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pfVar6,ar6,uVar9);
      pfVar6 = ar5;
      Vec3_sub(ar4 + 0x2e4,ar5,ar6,uVar9,auStack_d0);
      uVar3 = Vec3_length(auStack_d0,pfVar6,ar6,uVar9);
      Vec3_assign(auStack_50,uVar3,ar6,uVar9);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_d0,0xffffffff,ar6,uVar9);
      FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,uVar9,auStack_e0);
      FUN_8c0230f0(auStack_50,uVar3,ar6,uVar9,auStack_f0);
      FUN_8c022dac(auStack_e0,auStack_f0,ar6,uVar9);
      Vec3_dtor(auStack_f0,0xffffffff,ar6,uVar9);
      Vec3_dtor(auStack_e0,0xffffffff,ar6,uVar9);
      FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,uVar9);
      if (cVar15 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),uVar5);
      }
      else {
        in_xd0 = CONCAT44(uVar5,uVar8);
        dVar12 = *(double *)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      if (cVar15 == '\0') {
        *(float *)(ar4 + 0x30) = fVar11;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
      iVar4 = FUN_8c031764(ar4,ar4 + 0x2e4,ar5,uVar9);
      if (iVar4 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x40) = 0;
      }
      ar6 = (float *)0x1e;
      iVar4 = rand_range(ar4,0,0x1e,uVar9);
      if (iVar4 == 0) {
        *(undefined4 *)(ar4 + 0x240) = 1;
        FUN_8c033474(ar4,0xb,ar5,ar7);
        ar6 = ar5;
        uVar9 = ar7;
      }
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,uVar9);
      break;
    case 5:
      *(undefined4 *)(ar4 + 0x240) = 1;
      uVar9 = 0xb;
      FUN_8c033474(ar4,0xb,ar5,ar7);
      uVar8 = (undefined4)in_dr0;
      vec3_clear(ar4 + 0x54,uVar9,ar5,ar7);
      ar6 = ar5;
      uVar9 = ar7;
      if (_DAT_8c286db8 == 0) {
        uVar5 = 0xd;
        uVar9 = FUN_8c03c0f0(ar4 + 0xb0,0xd,ar5,ar7);
        ar5_00 = (int *)deref_u32(uVar9,uVar5,ar5,ar7);
        ar6 = (float *)0x1;
        iVar4 = FUN_8c0342ac(ar4 + 0xb0,ar5_00,1,ar7);
        if (iVar4 != 0) {
          _DAT_8c286db8 = iVar4;
        }
        *(undefined4 *)(*ar5_00 + 0x18) = 0;
        uVar9 = ar7;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x2d0) = 0x3f800000;
        in_dr0 = CONCAT44(0x42f00000,uVar8);
        *(undefined4 *)(ar4 + 0x2cc) = 0x42f00000;
      }
      else {
        *(undefined8 *)(ar4 + 0x2d0) = CONCAT44(0x3f800000,uVar8);
        in_dr0 = 0x11042f00000;
        *(undefined8 *)(ar4 + 0x2cc) = 0x11042f00000;
      }
      iVar4 = ar4 + 0x80;
      FUN_8c0230f0(iVar4,iVar4,ar6,uVar9,auStack_100);
      uVar8 = Vec3_length(auStack_100,iVar4,ar6,uVar9);
      Vec3_assign(ar4 + 700,uVar8,ar6,uVar9);
      pfVar6 = (float *)0xffffffff;
      Vec3_dtor(auStack_100,0xffffffff,ar6,uVar9);
    case 6:
      fVar11 = (float)in_dr0;
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pfVar6,ar6,uVar9);
      if (cVar15 == '\0') {
        fVar11 = *(float *)(ar4 + 0x2d0);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x2d0);
      }
      if (cVar14 == '\0') {
        fVar11 = fVar11 + 1.0;
      }
      else {
        fVar11 = SUB84((double)CONCAT44(0x3f800000,fVar11) + (double)CONCAT44(0x3f800000,fVar11),0);
      }
      uStack_204 = in_xd0;
      if (cVar15 == '\0') {
        uStack_204 = CONCAT44(ar4,fVar11);
      }
      if (cVar15 == '\0') {
        *(undefined4 *)(uStack_204._4_4_ + 0x2d0) = (undefined4)uStack_204;
        dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2cc),(undefined4)uStack_204);
      }
      else {
        *(undefined8 *)(uStack_204._4_4_ + 0x2d0) = uStack_204;
        dVar12 = *(double *)(ar4 + 0x2cc);
        in_xd0 = uStack_204;
      }
      if (cVar14 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      uVar2 = in_xd0;
      if (cVar15 == '\0') {
        uStack_180 = CONCAT44(uStack_180._4_4_,fVar11);
        uVar2 = uStack_180;
      }
      uStack_180 = uVar2;
      if (cVar14 == '\0') {
        dVar12 = (double)CONCAT44(1.0 - fVar11,fVar11);
      }
      else {
        dVar12 = (double)CONCAT44(0x3f800000,fVar11) - (double)CONCAT44(0x3f800000,fVar11);
      }
      dVar1 = dVar12;
      if (cVar15 == '\0') {
        uStack_188 = (double)CONCAT44(uStack_188._4_4_,(int)((ulonglong)dVar12 >> 0x20));
        dVar1 = uStack_188;
      }
      uStack_188 = dVar1;
      Vec3_scale(ar4 + 0x80,&uStack_188,ar6,uVar9,auStack_110);
      Vec3_scale(ar4 + 700,&uStack_180,ar6,uVar9,auStack_120);
      Vec3_add(auStack_110,auStack_120,ar6,uVar9,auStack_130);
      Vec3_assign(ar4 + 0x80,auStack_130,ar6,uVar9);
      Vec3_dtor(auStack_130,0xffffffff,ar6,uVar9);
      Vec3_dtor(auStack_120,0xffffffff,ar6,uVar9);
      Vec3_dtor(auStack_110,0xffffffff,ar6,uVar9);
      FUN_8c022dac(ar4 + 0x80,ar4 + 700,ar6,uVar9);
      if (cVar15 == '\0') {
        dVar12 = (double)((ulonglong)dVar12 >> 0x20);
      }
      if (cVar14 != '\0' || SUB84(dVar12,0) <= 0.0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 7:
      uVar8 = 0xd;
      iVar4 = FUN_8c034148(ar4 + 0xb0,0xd,ar6,uVar9);
      if (iVar4 != 1) {
        if (iVar4 != 2) break;
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar8,ar6,uVar9);
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x314) = 1;
      break;
    case 8:
      iVar4 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pfVar6,ar6,uVar9);
      if (iVar4 == 1) {
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0;
        }
        vec3_clear(ar4 + 0x54,1,ar6,uVar9);
        uVar10 = 0;
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x314) = 2;
        uVar9 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xe,0xffffffff,0);
        ar6 = (float *)(ar4 + 0xb0);
        ar5_01 = s_CAnimBody_SetFrame_033e6e;
        s_CAnimBody_SetFrame_033e6e(ar6,s_CAnimBody_SetFrame_033e6e,ar6,uVar9);
        FUN_8c022d04(ar4 + 0x304,ar5_01,ar6,uVar9);
      }
      CAnimBody_GetCurFrame(ar4 + 0xb0,CAnimBody_GetCurFrame,ar6,uVar9,ain0);
      FUN_8c034384(ar4 + 0xb0,_DAT_8c286db8,ar6,uVar9);
      Vec3_assign(auStack_30,auStack_140,ar6,uVar9);
      Vec3_dtor(auStack_140,0xffffffff,ar6,uVar9);
      Vec3_sub(auStack_30,ar4 + 0x54,ar6,uVar9,auStack_150);
      Vec3_assign(auStack_40,auStack_150,ar6,uVar9);
      Vec3_dtor(auStack_150,0xffffffff,ar6,uVar9);
      puVar7 = auStack_30;
      Vec3_assign(ar4 + 0x54,puVar7,ar6,uVar9);
      Vec3_ctor_xyz(auStack_160,puVar7,ar6,uVar9);
      iVar4 = FUN_8c023d04(auStack_40,auStack_160,ar6,uVar9);
      uVar8 = 0xffffffff;
      Vec3_dtor(auStack_160,0xffffffff,ar6,uVar9);
      if (iVar4 != 0) {
        vec3_copy_8c02b5fc(auStack_16c,ain0,ar6,uVar9);
        puVar7 = auStack_16c;
        FUN_8c023484(auStack_40,puVar7,ar6,uVar9,(int)&uStack_180 + 4);
        uVar8 = Vec3_length((int)&uStack_180 + 4,puVar7,ar6,uVar9);
        Vec3_assign(ar4 + 0x14,uVar8,ar6,uVar9);
        Vec3_dtor((int)&uStack_180 + 4,0xffffffff,ar6,uVar9);
        uVar8 = 0xffffffff;
        object_dtor_delete(auStack_16c,0xffffffff,ar6,uVar9);
      }
      Vec3_length_sq(auStack_40,uVar8,ar6,uVar9);
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x28) = (int)(in_dr0 >> 0x20);
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0;
      }
    }
  }
  uStack_188._4_4_ = uVar10;
  Vec3_dtor(auStack_50,0xffffffff,ar6,uVar9);
  Vec3_dtor(auStack_40,0xffffffff,ar6,uVar9);
  Vec3_dtor(auStack_30,0xffffffff,ar6,uVar9);
  return uStack_188._4_4_;
}



/* FUN_8c0b1ac0 @ 8c0b1ac0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b1f92) */
/* WARNING: Removing unreachable block (ram,0x8c0b1f4e) */
/* WARNING: Removing unreachable block (ram,0x8c0b237a) */
/* WARNING: Removing unreachable block (ram,0x8c0b22d6) */
/* WARNING: Removing unreachable block (ram,0x8c0b2236) */
/* WARNING: Removing unreachable block (ram,0x8c0b1b3e) */
/* WARNING: Removing unreachable block (ram,0x8c0b1ac0) */
/* WARNING: Removing unreachable block (ram,0x8c0b2c3e) */
/* WARNING: Removing unreachable block (ram,0x8c0b222a) */
/* WARNING: Removing unreachable block (ram,0x8c0b22e2) */
/* WARNING: Removing unreachable block (ram,0x8c0b2384) */
/* WARNING: Removing unreachable block (ram,0x8c0b1f5a) */
/* WARNING: Removing unreachable block (ram,0x8c0b1f9e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b1ac0(double *ar4,double *ar5,code *ar6,double *ar7)

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
          *(undefined4 *)(uStack_3c0._4_4_ + 0x2d0) = (undefined4)uStack_3c0;
          dVar12 = (double)CONCAT44(*(int *)((int)ar4 + 0x2cc),(undefined4)uStack_3c0);
          uStack_3c0 = in_xd0;
        }
        else {
          *(double *)(uStack_3c0._4_4_ + 0x2d0) = uStack_3c0;
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
          uStack_308 = (double)CONCAT44(uStack_308._4_4_,fVar11);
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
          dVar12 = (double)CONCAT44(0x40c00000,dStack_4c._0_4_);
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
          dStack_4c = (double)CONCAT44(dStack_4c._4_4_,fVar11);
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
          dVar12 = (double)CONCAT44(0x3f3851ec,dStack_4c._0_4_);
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
          dStack_4c = (double)CONCAT44(dStack_4c._4_4_,fVar11);
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



/* FUN_8c0b3184 @ 8c0b3184 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b3184) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b3184(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *ar6_00;
  undefined4 uVar5;
  float in_fr1;
  float fVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double in_xd0;
  char cVar11;
  char cVar12;
  int in_stack_ffffff34;
  undefined8 uStack_8c;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar5 = 1;
  puVar4 = ar5;
  ar6_00 = ar6;
  Vec3_sub(ar6,ar5,ar6,ar7,auStack_38);
  uVar1 = Vec3_length(auStack_38,puVar4,ar6_00,ar7);
  Vec3_ctor_copy(auStack_28,uVar1,ar6_00,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
  FUN_8c0230f0(ar4 + 0x14,uVar1,ar6_00,ar7,auStack_48);
  FUN_8c0230f0(auStack_28,uVar1,ar6_00,ar7,auStack_58);
  FUN_8c022dac(auStack_48,auStack_58,ar6_00,ar7);
  Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
  iVar3 = *(int *)(ar4 + 0x40);
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar3) {
    case 0:
      uVar1 = 0;
      iVar3 = FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7);
      if ((iVar3 != 1) && (iVar3 != 2)) {
        Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
        return 1;
      }
      FUN_8c031748(ar4,uVar1,ar6_00,ar7);
      Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7);
      ar6_00 = (undefined8 *)0x3;
      iVar3 = rand_range(ar4,0,3,ar7);
      if (cVar11 == '\0') {
        dVar9 = (double)CONCAT44((float)(iVar3 + 1),in_fr1);
      }
      else {
        dVar9 = (double)(iVar3 + 1);
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x24) = (int)((ulonglong)dVar9 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x24) = dVar9;
      }
      uVar1 = 0x8c286dbc;
      FUN_8c031b68(ar4,0x8c286dbc,ar6_00,ar7);
      uVar7 = (ulonglong)dVar9 & 0xffffffff;
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uVar7;
      }
      FUN_8c031c64(ar4,uVar1,ar6_00,ar7);
      in_fr1 = (float)uVar7;
      *(undefined4 *)(ar4 + 0x40) = 3;
      *(undefined4 *)(ar4 + 0x44) = 0;
      *(undefined4 *)(ar4 + 0x318) = 0;
    default:
      iVar3 = ar4 + 0x14;
      Vec3_assign(ar4 + 0x80,iVar3,ar6_00,ar7);
      s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar3,ar6_00,ar7);
      if (cVar12 == '\0') {
        in_fr1 = *(float *)(ar4 + 0x28);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
      }
      if (cVar11 == '\0' && 1.0 < in_fr1) {
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x3e19999a,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
          dVar9 = 3.73986008970316e-312;
        }
        if (cVar11 == '\0') {
          fVar6 = (float)((ulonglong)dVar9 >> 0x20);
          dVar9 = (double)CONCAT44(fVar6,SUB84(dVar9,0) - fVar6);
        }
        else {
          dVar9 = dVar9 - dVar9;
        }
        in_stack_ffffff34 = ar4;
        if (cVar12 == '\0') {
          *(int *)(ar4 + 0x28) = SUB84(dVar9,0);
        }
        else {
          *(double *)(ar4 + 0x28) = in_xd0;
        }
      }
      else {
        uVar8 = CONCAT44(0x3f800000,in_fr1);
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = uVar8;
        }
        ar6_00 = (undefined8 *)0x3;
        iVar3 = 0;
        iVar2 = rand_range(ar4,0,3,ar7);
        if (cVar11 == '\0') {
          dVar9 = (double)CONCAT44((float)(iVar2 + 1),(int)uVar8);
        }
        else {
          dVar9 = (double)(iVar2 + 1);
        }
        if (cVar12 == '\0') {
          *(int *)(ar4 + 0x24) = (int)((ulonglong)dVar9 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x24) = dVar9;
        }
      }
      CAnimBody_GetCurFrame(ar4 + 0xb0,iVar3,ar6_00,ar7,in_stack_ffffff34);
      dVar10 = dVar9;
      if (cVar12 == '\0') {
        uStack_8c = (double)CONCAT44(uStack_8c._4_4_,(int)((ulonglong)dVar9 >> 0x20));
        dVar10 = uStack_8c;
      }
      uStack_8c = dVar10;
      *(undefined4 *)(ar4 + 0x44) = 1;
      puVar4 = ar5;
      Vec3_sub(ar6,ar5,ar6_00,ar7,auStack_68);
      uVar1 = Vec3_length(auStack_68,puVar4,ar6_00,ar7);
      Vec3_assign(auStack_28,uVar1,ar6_00,ar7);
      uVar1 = 0xffffffff;
      Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
      FUN_8c0230f0(ar4 + 0x14,uVar1,ar6_00,ar7,auStack_78);
      FUN_8c0230f0(auStack_28,uVar1,ar6_00,ar7,(int)&uStack_8c + 4);
      FUN_8c022dac(auStack_78,(int)&uStack_8c + 4,ar6_00,ar7);
      Vec3_dtor((int)&uStack_8c + 4,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7);
      FUN_8c022fc0(ar5,ar6,ar6_00,ar7);
      if (cVar12 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),(int)((ulonglong)dVar9 >> 0x20));
        dVar9 = in_xd0;
      }
      else {
        dVar10 = *(double *)(ar4 + 0x28);
      }
      if (cVar11 == '\0') {
        fVar6 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar10 / dVar10,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x30) = fVar6;
      }
      else {
        *(double *)(ar4 + 0x30) = dVar9;
      }
      ar6_00 = ar5;
      uVar5 = FUN_8c031764(ar4,ar6,ar5,ar7);
      if (*(int *)(ar4 + 0x1b8) == 1) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x18c) = *(undefined4 *)ar5;
          *(undefined4 *)(ar4 + 400) = *(undefined4 *)((int)ar5 + 4);
          *(undefined4 *)(ar4 + 0x194) = *(undefined4 *)(ar5 + 1);
          *(undefined4 *)(ar4 + 0x198) = *(undefined4 *)ar6;
          *(undefined4 *)(ar4 + 0x19c) = *(undefined4 *)((int)ar6 + 4);
          *(undefined4 *)(ar4 + 0x1a0) = *(undefined4 *)(ar6 + 1);
        }
        else {
          *(undefined8 *)(ar4 + 0x18c) = *ar5;
          *(undefined8 *)(ar4 + 400) = *(undefined8 *)((int)ar5 + 4);
          *(undefined8 *)(ar4 + 0x194) = ar5[1];
          *(undefined8 *)(ar4 + 0x198) = *ar6;
          *(undefined8 *)(ar4 + 0x19c) = *(undefined8 *)((int)ar6 + 4);
          *(undefined8 *)(ar4 + 0x1a0) = ar6[1];
        }
      }
      break;
    case 2:
      break;
    case 4:
      iVar3 = get_field_1c_026dd8(ar4 + 0xb0,uVar1,ar6_00,ar7);
      if (iVar3 == 0) {
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7);
      }
      else {
        iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7);
        if (iVar3 == 1) {
          ar7 = 0;
          uVar5 = 0xffffffff;
          uVar1 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar5,ar7);
        }
      }
      uVar5 = FUN_8c031764(ar4,ar6,ar5,ar7);
      ar6_00 = ar5;
    }
  }
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
  return uVar5;
}



/* FUN_8c0b3604 @ 8c0b3604 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b3604) */
/* WARNING: Removing unreachable block (ram,0x8c0b4592) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b3604(int ar4,double *ar5,double *ar6,int *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  double *pdVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  float fVar9;
  double in_dr0;
  undefined8 uVar10;
  undefined4 uVar12;
  double dVar11;
  float fVar13;
  undefined4 uVar14;
  double in_dr2;
  double dVar15;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd0;
  bool bVar16;
  char cVar17;
  char cVar18;
  int *in_stack_00000000;
  undefined8 uStack_2d4;
  undefined4 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined8 uStack_1fc;
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  double dStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar18 = '\0';
  cVar17 = '\0';
  pdVar5 = ar5;
  Vec3_ctor_zero(&uStack_2c,ar5,ar6,ar7);
  uVar8 = 1;
  FUN_8c10277c(&dStack_38,pdVar5,ar6,ar7);
  uVar14 = SUB84(in_dr2,0);
  iVar4 = *(int *)(ar4 + 0x40);
  if ((5 < iVar4) || (iVar4 < 0)) goto override_jmp_8c0b3676_case_2;
                    /* WARNING: Switch is manually overridden */
  switch(iVar4) {
  case 0:
    if (*(int *)(ar4 + 0x348) == 1) {
      *(undefined4 *)(ar4 + 0x31c) = 2;
    }
    else {
      ar6 = (double *)0x64;
      iVar4 = rand_range(ar4,0,100,ar7);
      uVar8 = SUB84(in_dr2,0);
      if (iVar4 < 0x50) {
        *(undefined4 *)(ar4 + 0x31c) = 0;
        (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000,ar5,ar6,ar7);
        if (cVar18 == '\0') {
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),uVar8);
          dVar11 = (double)CONCAT44(0x42100000,(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          in_dr2 = *(double *)((int)ar5 + 4);
          dVar11 = -2.066327991859925e+159;
          in_xd0 = in_dr0;
        }
        if (cVar17 == '\0') {
          fVar13 = (float)((ulonglong)dVar11 >> 0x20);
          fVar9 = SUB84(dVar11,0) + fVar13;
          in_dr0 = (double)CONCAT44(fVar13,fVar9);
          bVar16 = fVar9 < (float)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          in_dr0 = dVar11 + dVar11;
          bVar16 = in_dr0 < in_dr2;
        }
        if (!bVar16) {
          *(undefined4 *)(ar4 + 0x31c) = 1;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x31c) = 2;
      }
    }
    uVar14 = SUB84(in_dr2,0);
    *(undefined4 *)(ar4 + 0x40) = 1;
    break;
  case 2:
    goto override_jmp_8c0b3676_case_2;
  case 3:
    goto override_jmp_8c0b3676_case_3;
  case 4:
    pcVar7 = get_field_1c_026dd8;
    iVar4 = get_field_1c_026dd8(ar4 + 0xb0,get_field_1c_026dd8,ar6,ar7);
    if (iVar4 == 0) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar7,ar6,ar7);
    }
    else {
      FUN_8c034148(ar4 + 0xb0,0,ar6,ar7);
    }
    uVar8 = FUN_8c031764(ar4,&uStack_2c,ar5,ar7);
    ar6 = ar5;
    goto override_jmp_8c0b3676_case_2;
  }
  fVar9 = SUB84(in_dr0,0);
  Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,ar7);
  iVar4 = *(int *)(ar4 + 0x31c);
  if (iVar4 == 0) {
    iVar4 = FUN_8c034148(ar4 + 0xb0,0,ar6,ar7);
    if ((iVar4 != 1) && (iVar4 != 2)) {
      uStack_200 = 1;
      free_if_nonnull_wrap_102790(&dStack_38,0xffffffff,ar6,ar7);
      Vec3_dtor(&uStack_2c,0xffffffff,ar6,ar7);
      return uStack_200;
    }
    iVar4 = rand_range(ar4,0,3,ar7);
    if (cVar17 == '\0') {
      dVar11 = (double)CONCAT44((float)(iVar4 + 1),fVar9);
    }
    else {
      dVar11 = (double)(iVar4 + 1);
    }
    if (cVar18 == '\0') {
      *(int *)(ar4 + 0x24) = (int)((ulonglong)dVar11 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x24) = dVar11;
    }
    puVar6 = auStack_58;
    uVar8 = 0x80;
    FUN_8c0230f0(ar4 + 0x80,0x80,puVar6,ar7,puVar6);
    uVar8 = Vec3_length(auStack_58,uVar8,puVar6,ar7);
    FUN_8c03263c(ar4,uVar8,puVar6,ar7);
    Vec3_add(auStack_68,ar5,puVar6,ar7,auStack_78);
    Vec3_assign(ar4 + 0x2e4,auStack_78,puVar6,ar7);
    Vec3_dtor(auStack_78,0xffffffff,puVar6,ar7);
    Vec3_dtor(auStack_68,0xffffffff,puVar6,ar7);
    Vec3_dtor(auStack_58,0xffffffff,puVar6,ar7);
    if (cVar18 == '\0') {
      fVar9 = *(float *)ar5;
      fVar13 = 1000.0;
    }
    else {
      in_xd0 = *ar5;
      fVar9 = 1000.0;
      fVar13 = -1.1275111e-31;
    }
    if (cVar17 != '\0' || fVar9 <= fVar13) {
      if (cVar18 != '\0') {
        fVar9 = 2.0;
      }
      ar6 = &dStack_38;
      ar7 = in_stack_00000000;
      FUN_8c032788(ar4,ar4 + 0x2e4,ar6,in_stack_00000000);
    }
    else {
      if (cVar18 != '\0') {
        fVar9 = 2.0;
      }
      ar6 = (double *)&DAT_8c125c0c;
      ar7 = in_stack_00000000;
      FUN_8c032788(ar4,ar4 + 0x2e4,&DAT_8c125c0c,in_stack_00000000);
    }
    iVar4 = -0x73d79244;
    FUN_8c031b68(ar4,0x8c286dbc,ar6,ar7);
  }
  else if (iVar4 == 1) {
    iVar4 = FUN_8c034148(ar4 + 0xb0,10,ar6,ar7);
    if ((iVar4 != 1) && (iVar4 != 2)) {
      uStack_204 = 1;
      pcVar7 = free_if_nonnull_wrap_102790;
      free_if_nonnull_wrap_102790(&dStack_38,0xffffffff,free_if_nonnull_wrap_102790,ar7);
      Vec3_dtor(&uStack_2c,0xffffffff,pcVar7,ar7);
      return uStack_204;
    }
    if (cVar18 == '\0') {
      *(undefined4 *)(ar4 + 0x24) = 0x3e800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x24) = 0x24c3e800000;
    }
    uVar8 = 0x80;
    FUN_8c0230f0(ar4 + 0x80,0x80,ar6,ar7,auStack_88);
    uVar8 = Vec3_length(auStack_88,uVar8,ar6,ar7);
    FUN_8c03263c(ar4,uVar8,ar6,ar7);
    Vec3_add(auStack_98,ar5,ar6,ar7,auStack_a8);
    Vec3_assign(ar4 + 0x2e4,auStack_a8,ar6,ar7);
    Vec3_dtor(auStack_a8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_98,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_88,0xffffffff,ar6,ar7);
    if (cVar18 == '\0') {
      fVar9 = *(float *)ar5;
      fVar13 = 1000.0;
    }
    else {
      in_xd0 = *ar5;
      fVar9 = 1000.0;
      fVar13 = -1.1275111e-31;
    }
    if (cVar17 != '\0' || fVar9 <= fVar13) {
      if (cVar18 == '\0') {
        dVar11 = (double)CONCAT44(0x40000000,fVar9);
      }
      else {
        dVar11 = 1.4265116704764e-311;
      }
      ar6 = &dStack_38;
      ar7 = in_stack_00000000;
      FUN_8c032788(ar4,ar4 + 0x2e4,ar6,in_stack_00000000);
    }
    else {
      if (cVar18 == '\0') {
        dVar11 = (double)CONCAT44(0x40000000,fVar9);
      }
      else {
        dVar11 = -1.6026767271217265e-250;
      }
      ar6 = (double *)&DAT_8c125c0c;
      ar7 = in_stack_00000000;
      FUN_8c032788(ar4,ar4 + 0x2e4,&DAT_8c125c0c,in_stack_00000000);
    }
    (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x2e4,ar6,ar7);
    if (cVar18 == '\0') {
      dVar15 = (double)CONCAT44(0x42100000,(int)((ulonglong)dVar11 >> 0x20));
    }
    else {
      dVar15 = -4.264942176124392e-250;
      in_xd0 = dVar11;
    }
    if (cVar17 == '\0') {
      fVar9 = SUB84(dVar15,0) + (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar15 + dVar15,0);
    }
    if (cVar18 == '\0') {
      *(float *)(ar4 + 0x2e8) = fVar9;
    }
    else {
      *(double *)(ar4 + 0x2e8) = in_xd0;
    }
    iVar4 = -0x73d79244;
    FUN_8c031b68(ar4,0x8c286dbc,ar6,ar7);
  }
  else if (iVar4 == 2) {
    iVar4 = FUN_8c034148(ar4 + 0xb0,9,ar6,ar7);
    if ((iVar4 != 1) && (iVar4 != 2)) {
      uStack_208 = 1;
      free_if_nonnull_wrap_102790(&dStack_38,0xffffffff,ar6,ar7);
      Vec3_dtor(&uStack_2c,0xffffffff,ar6,ar7);
      return uStack_208;
    }
    if (cVar18 == '\0') {
      *(undefined4 *)(ar4 + 0x24) = 0x41700000;
    }
    else {
      *(undefined8 *)(ar4 + 0x24) = 0x8c13bac441700000;
    }
    FUN_8c023bf4(ar4 + 0x14,&DAT_8c13bac4,ar6,ar7);
    *(undefined4 *)(ar4 + 800) = 0;
    FUN_8c03263c(ar4,ar4 + 0x14,ar6,ar7);
    Vec3_add(auStack_b8,ar5,ar6,ar7,auStack_c8);
    Vec3_assign(ar4 + 0x2e4,auStack_c8,ar6,ar7);
    Vec3_dtor(auStack_c8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_b8,0xffffffff,ar6,ar7);
    if (cVar18 == '\0') {
      dVar11 = (double)CONCAT44(0x43fa0000,*(undefined4 *)(ar4 + 0x2e8));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x2e8);
      dVar11 = 1.1709360855895245e+17;
    }
    if (cVar17 == '\0') {
      fVar9 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 + dVar11,0);
    }
    if (cVar18 == '\0') {
      *(float *)(ar4 + 0x2e8) = fVar9;
    }
    else {
      *(double *)(ar4 + 0x2e8) = in_xd0;
    }
    Vec3_sub(ar4 + 0x2e4,ar5,ar6,ar7,auStack_d8);
    Vec3_assign(ar4 + 0x2d4,auStack_d8,ar6,ar7);
    Vec3_dtor(auStack_d8,0xffffffff,ar6,ar7);
    iVar4 = -0x73d7922c;
    FUN_8c031b68(ar4,0x8c286dd4,ar6,ar7);
  }
  FUN_8c031748(ar4,iVar4,ar6,ar7);
  pdVar5 = (double *)(ar4 + 0x2c);
  in_dr0 = (double)(ulonglong)(uint)fVar9;
  if (cVar18 == '\0') {
    *(undefined4 *)pdVar5 = 0;
  }
  else {
    *pdVar5 = in_dr0;
  }
  FUN_8c031c64(ar4,pdVar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x40) = 3;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined4 *)(ar4 + 0x318) = 0;
override_jmp_8c0b3676_case_3:
  if ((0 < *(int *)(ar4 + 0x1d4)) && (*(int *)(ar4 + 0x31c) != 2)) {
    pdVar5 = ar5;
    Vec3_sub(ar4 + 0x2e4,ar5,ar6,ar7,auStack_e8);
    uVar8 = Vec3_length(auStack_e8,pdVar5,ar6,ar7);
    Vec3_ctor_copy(auStack_48,uVar8,ar6,ar7);
    Vec3_dtor(auStack_e8,0xffffffff,ar6,ar7);
    if (*(int *)(ar4 + 0x1d4) == 2) {
      iVar4 = ar4 + 0x14;
      FUN_8c022dac(auStack_48,iVar4,ar6,ar7);
      if (cVar18 == '\0') {
        dVar11 = (double)CONCAT44(0x42b40000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar11 = 1.01062290177484e-311;
        in_xd0 = in_dr0;
      }
      if (cVar17 == '\0' && SUB84(dVar11,0) < (float)((ulonglong)dVar11 >> 0x20)) {
        if (cVar18 == '\0') {
          dVar15 = (double)(ulonglong)*(uint *)(ar4 + 0x14);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x14);
          dVar15 = dVar11;
        }
        dVar11 = (double)((ulonglong)dVar15 & 0xffffffff);
        if (cVar17 == '\0' && SUB84(dVar15,0) < 0.0) {
          FUN_8c0238b4(auStack_48,FUN_8c0238b4,ar6,ar7);
          FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,ar7);
          uStack_218 = SUB84(dVar11,0);
          uVar8 = (undefined4)((ulonglong)dVar11 >> 0x20);
          if (cVar18 == '\0') {
            uStack_218 = uVar8;
            uVar8 = uStack_214;
          }
          uStack_214 = uVar8;
          Vec3_scale(auStack_f8,&uStack_218,ar6,ar7,auStack_108);
          puVar6 = auStack_108;
          Vec3_add(puVar6,ar5,puVar6,ar7,auStack_118);
          Vec3_assign(ar4 + 0x2e4,auStack_118,puVar6,ar7);
          Vec3_dtor(auStack_118,0xffffffff,puVar6,ar7);
          Vec3_dtor(auStack_108,0xffffffff,puVar6,ar7);
          Vec3_dtor(auStack_f8,0xffffffff,puVar6,ar7);
        }
        else {
          FUN_8c0238b4(auStack_48,iVar4,ar6,ar7);
          FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,ar7);
          uStack_21c = SUB84(dVar11,0);
          uVar8 = (undefined4)((ulonglong)dVar11 >> 0x20);
          if (cVar18 == '\0') {
            uStack_21c = uVar8;
            uVar8 = uStack_218;
          }
          uStack_218 = uVar8;
          Vec3_scale(auStack_128,&uStack_21c,ar6,ar7,auStack_138);
          Vec3_add(auStack_138,ar5,ar6,ar7,auStack_148);
          Vec3_assign(ar4 + 0x2e4,auStack_148,ar6,ar7);
          Vec3_dtor(auStack_148,0xffffffff,ar6,ar7);
          puVar6 = auStack_138;
          Vec3_dtor(puVar6,0xffffffff,puVar6,ar7);
          Vec3_dtor(auStack_128,0xffffffff,puVar6,ar7);
        }
        ar6 = &dStack_38;
        ar7 = in_stack_00000000;
        FUN_8c032788(ar4,ar4 + 0x2e4,ar6,in_stack_00000000);
        if (*(int *)(ar4 + 0x31c) == 1) {
          (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x2e4,ar6,ar7);
          if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44(0x42100000,(int)((ulonglong)dVar11 >> 0x20));
          }
          else {
            dVar15 = 7.909484942708294e+231;
            in_xd0 = dVar11;
          }
          if (cVar17 == '\0') {
            fVar9 = (float)((ulonglong)dVar15 >> 0x20);
            dVar11 = (double)CONCAT44(fVar9,SUB84(dVar15,0) + fVar9);
          }
          else {
            dVar11 = dVar15 + dVar15;
          }
          if (cVar18 == '\0') {
            *(int *)(ar4 + 0x2e8) = SUB84(dVar11,0);
          }
          else {
            *(double *)(ar4 + 0x2e8) = in_xd0;
          }
        }
      }
    }
    else {
      FUN_8c022dac(auStack_48,ar4 + 0x14,ar6,ar7);
      if (cVar18 == '\0') {
        dVar11 = (double)CONCAT44(0x42b40000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar11 = 1.68966155488372e-311;
        in_xd0 = in_dr0;
      }
      if (cVar17 == '\0' && SUB84(dVar11,0) < (float)((ulonglong)dVar11 >> 0x20)) {
        *(undefined4 *)(ar4 + 0x31c) = 2;
        *(undefined4 *)(ar4 + 0x40) = 1;
        uStack_20c = 1;
        Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
        free_if_nonnull_wrap_102790(&dStack_38,0xffffffff,ar6,ar7);
        Vec3_dtor(&uStack_2c,0xffffffff,Vec3_dtor,ar7);
        return uStack_20c;
      }
    }
    Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
    in_dr0 = dVar11;
  }
  pcVar7 = *(code **)(ar4 + 0x31c);
  if ((double *)pcVar7 == (double *)0x0) {
    Vec3_assign(&uStack_2c,ar4 + 0x2e4,0,ar7);
    fVar9 = SUB84(in_dr0,0);
    iVar4 = ar4 + 0x14;
    Vec3_assign(ar4 + 0x80,iVar4,pcVar7,ar7);
    s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar4,pcVar7,ar7);
    if (cVar18 == '\0') {
      fVar9 = *(float *)(ar4 + 0x28);
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x28);
    }
    if (cVar17 == '\0' && 1.0 < fVar9) {
      if (cVar18 == '\0') {
        in_dr0 = (double)CONCAT44(0x3e19999a,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        in_dr0 = 3.73986008970316e-312;
      }
      if (cVar17 == '\0') {
        fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = (double)CONCAT44(fVar9,SUB84(in_dr0,0) - fVar9);
      }
      else {
        in_dr0 = in_dr0 - in_dr0;
      }
      iVar4 = ar4;
      if (cVar18 == '\0') {
        *(int *)(ar4 + 0x28) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(ar4 + 0x28) = in_xd0;
      }
    }
    else {
      uVar10 = CONCAT44(0x3f800000,fVar9);
      if (cVar18 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = uVar10;
      }
      pcVar7 = (code *)0x3;
      iVar4 = 0;
      iVar2 = rand_range(ar4,0,3,ar7);
      if (cVar17 == '\0') {
        in_dr0 = (double)CONCAT44((float)(iVar2 + 1),(int)uVar10);
      }
      else {
        in_dr0 = (double)(iVar2 + 1);
      }
      if (cVar18 == '\0') {
        *(int *)(ar4 + 0x24) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x24) = in_dr0;
      }
    }
    CAnimBody_GetCurFrame(ar4 + 0xb0,iVar4,pcVar7,ar7);
    *(undefined4 *)(ar4 + 0x44) = 1;
  }
  else if ((double *)pcVar7 == (double *)0x1) {
    Vec3_assign(&uStack_2c,ar4 + 0x2e4,1,ar7);
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar7,ar7);
    s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,s_CAnimBody_AdvanceFrame_033d90,pcVar7,ar7);
    CAnimBody_GetCurFrame(ar4 + 0xb0,CAnimBody_GetCurFrame,pcVar7,ar7);
    if (cVar18 == '\0') {
      dVar11 = (double)CONCAT44(0x41f00000,SUB84(in_dr0,0));
      in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      dVar11 = 3.74017818184368e-312;
    }
    if (cVar17 == '\0') {
      bVar16 = in_fr15 < (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      bVar16 = (double)CONCAT44(in_fr14,in_fr15) < dVar11;
    }
    if (bVar16) {
LAB_8c0b42c2:
      if (cVar18 == '\0') {
        in_dr0 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        in_dr0 = -1.1562114664300326e+79;
      }
      if (cVar17 == '\0') {
        fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = (double)CONCAT44(fVar9,SUB84(in_dr0,0) * fVar9);
      }
      else {
        in_dr0 = in_dr0 * in_dr0;
      }
      if (cVar18 == '\0') {
        *(int *)(ar4 + 0x28) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(ar4 + 0x28) = in_xd0;
      }
    }
    else {
      if (cVar18 == '\0') {
        in_dr0 = (double)CONCAT44(0x42700000,SUB84(dVar11,0));
      }
      else {
        in_dr0 = 0.007187501562839316;
      }
      if (cVar17 == '\0') {
        bVar16 = (float)((ulonglong)in_dr0 >> 0x20) < in_fr15;
      }
      else {
        bVar16 = in_dr0 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar16) goto LAB_8c0b42c2;
    }
    pcVar7 = (code *)0xb0;
    CAnimBody_GetCurFrame(ar4 + 0xb0,CAnimBody_GetCurFrame,0xb0,ar7);
    *(undefined4 *)(ar4 + 0x44) = 1;
  }
  else if ((double *)pcVar7 == (double *)0x2) {
    pcVar7 = (code *)(ar4 + 0x94);
    if (cVar18 == '\0') {
      uVar8 = SUB84(in_dr0,0);
      uVar12 = 0x3fc00000;
    }
    else {
      uVar8 = 0x3fc00000;
      uVar12 = 0x17c;
    }
    Vec3_ctor_xyz(auStack_158,Vec3_ctor_xyz,pcVar7,ar7);
    puVar6 = auStack_158;
    Vec3_add(ar4 + 0x2d4,puVar6,pcVar7,ar7,auStack_168);
    uVar3 = Vec3_length(auStack_168,puVar6,pcVar7,ar7);
    Vec3_length_sq(ar4 + 0x2d4,ar4 + 0x2d4,pcVar7,ar7);
    uStack_278 = uVar12;
    uStack_220 = uVar8;
    uVar1 = uVar12;
    if (cVar18 == '\0') {
      uStack_278 = uVar3;
      uStack_220 = uVar12;
      uVar1 = uStack_21c;
    }
    uStack_21c = uVar1;
    in_dr0 = (double)CONCAT44(uVar12,uVar8);
    Vec3_scale(uStack_278,&uStack_220,pcVar7,ar7,auStack_178);
    Vec3_assign(ar4 + 0x2d4,auStack_178,pcVar7,ar7);
    Vec3_dtor(auStack_178,0xffffffff,pcVar7,ar7);
    Vec3_dtor(auStack_168,0xffffffff,pcVar7,ar7);
    Vec3_dtor(auStack_158,0xffffffff,pcVar7,ar7);
    Vec3_add(ar4 + 0x2d4,ar5,pcVar7,ar7,auStack_188);
    Vec3_assign(&uStack_2c,auStack_188,pcVar7,ar7);
    Vec3_dtor(auStack_188,0xffffffff,pcVar7,ar7);
    Vec3_assign(ar4 + 0x2e4,&uStack_2c,pcVar7,ar7);
    Vec3_scale(ar4 + 0x14,&DAT_8c13bac8,pcVar7,ar7,auStack_198);
    Vec3_assign(ar4 + 0x80,auStack_198,pcVar7,ar7);
    Vec3_dtor(auStack_198,0xffffffff,pcVar7,ar7);
    iVar4 = *(int *)(ar4 + 800);
    if (iVar4 == 0) {
      Vec3_length_sq(ar4 + 0x2d4,0,pcVar7,ar7);
      uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      uStack_224 = uVar8;
      if (cVar18 != '\0') {
        uStack_280 = SUB84(in_dr0,0);
        uStack_224 = uStack_280;
        uStack_220 = uVar8;
      }
      Vec3_scale(ar4 + 0x14,&uStack_224,pcVar7,ar7,auStack_1a8);
      Vec3_add(ar5,auStack_1a8,pcVar7,ar7,auStack_1b8);
      Vec3_assign(&uStack_2c,auStack_1b8,pcVar7,ar7);
      Vec3_dtor(auStack_1b8,0xffffffff,pcVar7,ar7);
      uVar8 = 0xffffffff;
      Vec3_dtor(auStack_1a8,0xffffffff,pcVar7,ar7);
      if (cVar18 == '\0') {
        dVar11 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar11 = -8.034349276309792e-251;
      }
      if (cVar17 == '\0') {
        fVar9 = (float)((ulonglong)dVar11 >> 0x20);
        dVar11 = (double)CONCAT44(fVar9,SUB84(dVar11,0) * fVar9);
      }
      else {
        dVar11 = dVar11 * dVar11;
      }
      if (cVar18 == '\0') {
        *(int *)(ar4 + 0x28) = SUB84(dVar11,0);
      }
      else {
        *(double *)(ar4 + 0x28) = in_xd0;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar8,pcVar7,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar8,pcVar7,ar7);
      if (cVar18 == '\0') {
        in_dr0 = (double)CONCAT44(0x41a00000,SUB84(dVar11,0));
        in_fr15 = (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        in_dr0 = 1.6981406014198e-311;
      }
      if (in_fr15 == (float)((ulonglong)in_dr0 >> 0x20)) {
        *(undefined4 *)(ar4 + 0x44) = 1;
        *(int *)(ar4 + 800) = *(int *)(ar4 + 800) + 1;
        if (cVar18 == '\0') {
          in_dr0 = (double)CONCAT44(0x3eb33333,SUB84(in_dr0,0));
          *(undefined4 *)(ar4 + 0xa0) = 0x3eb33333;
        }
        else {
          in_dr0 = 3.48527032906071e-312;
          *(undefined8 *)(ar4 + 0xa0) = 0xa43eb33333;
        }
        *(undefined4 *)(ar4 + 0xa4) = 1;
        FUN_8c03c314(ar4,ar4,pcVar7,ar7);
        if (*(int *)(ar4 + 0x348) == 1) {
          *(undefined4 *)(ar4 + 0x240) = 1;
          pcVar7 = (code *)ar5;
          FUN_8c033474(ar4,0xb,ar5,in_stack_00000000);
          ar7 = in_stack_00000000;
        }
      }
    }
    else if (iVar4 == 1) {
      if (cVar18 == '\0') {
        dVar11 = (double)CONCAT44(0x3e19999a,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar11 = 32.000007402896884;
      }
      if (cVar17 == '\0') {
        fVar9 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar18 == '\0') {
        *(float *)(ar4 + 0x28) = fVar9;
        in_dr0 = (double)CONCAT44(0x40400000,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        *(double *)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(double *)(ar4 + 0x28);
        in_dr0 = 3.74003830419144e-312;
      }
      if (cVar17 == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
        if (cVar18 == '\0') {
          in_dr0 = (double)CONCAT44(0x40400000,SUB84(in_dr0,0));
          *(undefined4 *)(ar4 + 0x28) = 0x40400000;
        }
        else {
          in_dr0 = 3.74003830419144e-312;
          *(undefined8 *)(ar4 + 0x28) = 0xb040400000;
        }
      }
      pcVar7 = (code *)0xb0;
      iVar4 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,1,0xb0,ar7);
      if (iVar4 == 1) {
        *(int *)(ar4 + 800) = *(int *)(ar4 + 800) + 1;
        ar7 = (int *)0x0;
        pcVar7 = (code *)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
      }
    }
    else if (iVar4 == 2) {
      if (cVar18 == '\0') {
        dVar11 = (double)CONCAT44(0x3e19999a,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar11 = 32.000007402896884;
      }
      if (cVar17 == '\0') {
        fVar9 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar18 == '\0') {
        *(float *)(ar4 + 0x28) = fVar9;
        dVar11 = (double)CONCAT44(0x40400000,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        *(double *)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar11 = 21990236766208.0;
      }
      if (cVar17 == '\0' && SUB84(dVar11,0) < (float)((ulonglong)dVar11 >> 0x20)) {
        if (cVar18 == '\0') {
          dVar11 = (double)CONCAT44(0x40400000,SUB84(dVar11,0));
          *(undefined4 *)(ar4 + 0x28) = 0x40400000;
        }
        else {
          dVar11 = 21990236766208.0;
          *(undefined8 *)(ar4 + 0x28) = 0x42b4000040400000;
        }
      }
      s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar4 + 0x28,pcVar7,ar7);
      (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000,ar5,pcVar7,ar7);
      if (cVar18 == '\0') {
        dVar15 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),uVar14);
        in_dr0 = (double)CONCAT44(0x42100000,(int)((ulonglong)dVar11 >> 0x20));
      }
      else {
        dVar15 = *(double *)((int)ar5 + 4);
        in_dr0 = 1.52838456460023e-311;
        in_xd0 = dVar11;
      }
      if (cVar17 == '\0') {
        fVar13 = (float)((ulonglong)in_dr0 >> 0x20);
        fVar9 = SUB84(in_dr0,0) + fVar13;
        in_dr0 = (double)CONCAT44(fVar13,fVar9);
        bVar16 = fVar9 < (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
        fVar9 = SUB84(in_dr0,0);
        bVar16 = in_dr0 < dVar15;
      }
      if (!bVar16) {
        if (cVar18 == '\0') {
          *(undefined4 *)(ar4 + 0x2d0) = 0x3f800000;
          in_dr0 = (double)CONCAT44(0x42f00000,fVar9);
          *(undefined4 *)(ar4 + 0x2cc) = 0x42f00000;
        }
        else {
          *(undefined8 *)(ar4 + 0x2d0) = CONCAT44(0x3f800000,fVar9);
          in_dr0 = 5.69249719999231e-312;
          *(undefined8 *)(ar4 + 0x2cc) = 0x10c42f00000;
        }
        iVar4 = ar4 + 0x2cc;
        pcVar7 = FUN_8c0230f0;
        FUN_8c0230f0(ar4 + 0x80,iVar4,FUN_8c0230f0,ar7,auStack_1c8);
        uVar8 = Vec3_length(auStack_1c8,iVar4,pcVar7,ar7);
        pcVar7 = Vec3_assign;
        Vec3_assign(ar4 + 700,uVar8,Vec3_assign,ar7);
        Vec3_dtor(auStack_1c8,0xffffffff,pcVar7,ar7);
        *(int *)(ar4 + 800) = *(int *)(ar4 + 800) + 1;
      }
    }
    else if (iVar4 == 3) {
      if (cVar18 == '\0') {
        dVar11 = (double)CONCAT44(0x3e19999a,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar11 = 21990236625305.6;
      }
      if (cVar17 == '\0') {
        fVar9 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar11 - dVar11,0);
      }
      if (cVar18 == '\0') {
        *(float *)(ar4 + 0x28) = fVar9;
        fVar9 = *(float *)(ar4 + 0x28);
      }
      else {
        *(double *)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(double *)(ar4 + 0x28);
      }
      if (cVar17 != '\0' || fVar9 <= 0.0) {
        if (cVar18 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar9;
        }
      }
      s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar4 + 0xb0,pcVar7,ar7);
      if (cVar18 == '\0') {
        fVar9 = *(float *)(ar4 + 0x2d0);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x2d0);
      }
      if (cVar17 == '\0') {
        fVar9 = fVar9 + 1.0;
      }
      else {
        fVar9 = SUB84((double)CONCAT44(0x3f800000,fVar9) + (double)CONCAT44(0x3f800000,fVar9),0);
      }
      uStack_2d4 = in_xd0;
      if (cVar18 == '\0') {
        uStack_2d4 = (double)CONCAT44(ar4,fVar9);
      }
      if (cVar18 == '\0') {
        *(undefined4 *)(uStack_2d4._4_4_ + 0x2d0) = (undefined4)uStack_2d4;
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2cc),(undefined4)uStack_2d4);
        uStack_2d4 = in_xd0;
      }
      else {
        *(double *)(uStack_2d4._4_4_ + 0x2d0) = uStack_2d4;
        dVar11 = *(double *)(ar4 + 0x2cc);
      }
      if (cVar17 == '\0') {
        fVar9 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar11 / dVar11,0);
      }
      dVar11 = uStack_2d4;
      if (cVar18 == '\0') {
        uStack_1fc = (double)CONCAT44(uStack_1fc._4_4_,fVar9);
        dVar11 = uStack_1fc;
      }
      uStack_1fc = dVar11;
      if (cVar17 == '\0') {
        dVar11 = (double)CONCAT44(1.0 - fVar9,fVar9);
      }
      else {
        dVar11 = (double)CONCAT44(0x3f800000,fVar9) - (double)CONCAT44(0x3f800000,fVar9);
      }
      uVar8 = (undefined4)((ulonglong)dVar11 >> 0x20);
      uStack_228 = uVar8;
      if (cVar18 != '\0') {
        uStack_228 = SUB84(dVar11,0);
        uStack_224 = uVar8;
      }
      Vec3_scale(ar4 + 0x80,&uStack_228,&uStack_228,ar7,auStack_1d8);
      uVar8 = 700;
      Vec3_scale(ar4 + 700,&uStack_1fc,700,ar7,auStack_1e8);
      Vec3_add(auStack_1d8,auStack_1e8,uVar8,ar7,(int)&uStack_1fc + 4);
      Vec3_assign(ar4 + 0x80,(int)&uStack_1fc + 4,uVar8,ar7);
      Vec3_dtor((int)&uStack_1fc + 4,0xffffffff,uVar8,ar7);
      pcVar7 = (code *)0xffffffff;
      Vec3_dtor(auStack_1e8,0xffffffff,0xffffffff,ar7);
      Vec3_dtor(auStack_1d8,0xffffffff,pcVar7,ar7);
      FUN_8c022dac(ar4 + 0x80,ar4 + 700,pcVar7,ar7);
      in_xd0 = dVar11;
      if (cVar18 == '\0') {
        dVar11 = (double)((ulonglong)dVar11 >> 0x20);
        in_xd0 = uStack_2d4;
      }
      in_dr0 = (double)((ulonglong)dVar11 & 0xffffffff);
      if (cVar17 != '\0' || SUB84(dVar11,0) <= 0.0) {
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(undefined4 *)(ar4 + 0x31c) = 0;
        FUN_8c031748(ar4,0,pcVar7,ar7);
        *(undefined4 *)(ar4 + 800) = 0;
        uStack_210 = 0;
        free_if_nonnull_wrap_102790(&dStack_38,0xffffffff,pcVar7,ar7);
        Vec3_dtor(&uStack_2c,0xffffffff,pcVar7,ar7);
        return uStack_210;
      }
    }
  }
  FUN_8c022fc0(ar5,&uStack_2c,pcVar7,ar7);
  if (cVar18 == '\0') {
    dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    dVar11 = *(double *)(ar4 + 0x28);
  }
  if (cVar17 == '\0') {
    fVar9 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar11 / dVar11,0);
  }
  if (cVar18 == '\0') {
    *(float *)(ar4 + 0x30) = fVar9;
  }
  else {
    *(double *)(ar4 + 0x30) = in_dr0;
  }
  uVar8 = FUN_8c031764(ar4,&uStack_2c,ar5,ar7);
  ar6 = (double *)0x1b8;
  if (*(int *)(ar4 + 0x1b8) == 1) {
    if (cVar18 == '\0') {
      *(undefined4 *)(ar4 + 0x18c) = *(undefined4 *)ar5;
      *(undefined4 *)(ar4 + 400) = *(undefined4 *)((int)ar5 + 4);
      *(undefined4 *)(ar4 + 0x194) = *(undefined4 *)(ar5 + 1);
      *(undefined4 *)(ar4 + 0x198) = uStack_2c;
      *(undefined4 *)(ar4 + 0x19c) = uStack_28;
      *(undefined4 *)(ar4 + 0x1a0) = uStack_24;
    }
    else {
      *(double *)(ar4 + 0x18c) = *ar5;
      *(undefined8 *)(ar4 + 400) = *(undefined8 *)((int)ar5 + 4);
      *(double *)(ar4 + 0x194) = ar5[1];
      *(ulonglong *)(ar4 + 0x198) = CONCAT44(uStack_28,uStack_2c);
      *(ulonglong *)(ar4 + 0x19c) = CONCAT44(uStack_24,uStack_28);
      *(ulonglong *)(ar4 + 0x1a0) = CONCAT44(uStack_20,uStack_24);
    }
    ar6 = (double *)((int)ar5 + 4);
  }
override_jmp_8c0b3676_case_2:
  uStack_214 = uVar8;
  free_if_nonnull_wrap_102790(&dStack_38,0xffffffff,ar6,ar7);
  Vec3_dtor(&uStack_2c,0xffffffff,ar6,ar7);
  return uStack_214;
}



/* FUN_8c0b4ba0 @ 8c0b4ba0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b4c02) */
/* WARNING: Removing unreachable block (ram,0x8c0b4c04) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b4ba0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 uVar3;
  undefined4 in_fr1;
  ulonglong uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar3 = 1;
  if (*(int *)(ar4 + 300) == 0) {
    uVar2 = 0x17;
    iVar1 = FUN_8c034148(ar4 + 0xb0,0x17,ar6,ar7);
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 1;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (*(int *)(ar4 + 300) == 1) {
    uVar4 = CONCAT44(0x3f000000,in_fr1);
    *(undefined4 *)(ar4 + 0x28) = 0x3f000000;
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 1) {
      if (cVar5 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = uVar4 & 0xffffffff;
      }
      ar7_00 = 0;
      uVar2 = 0xffffffff;
      uVar3 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,ar7_00);
      uVar3 = 0;
      *(undefined4 *)(ar4 + 300) = 0;
    }
  }
  return uVar3;
}



/* FUN_8c0b4c7c @ 8c0b4c7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b4c7c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(DAT_8c0b4d04 + ar4) == 0) {
    ar5_00 = 5;
    iVar1 = (*(code *)PTR_FUN_8c0b4d0c)(ar4 + DAT_8c0b4d08,5,ar6,ar7);
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 1;
      }
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b4d10)(ar4 + DAT_8c0b4d08,ar5_00,ar6,ar7);
    }
    *(int *)(DAT_8c0b4d04 + ar4) = *(int *)(DAT_8c0b4d04 + ar4) + 1;
  }
  else if ((*(int *)(DAT_8c0b4d04 + ar4) == 1) &&
          (iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0b4d10)
                             (ar4 + DAT_8c0b4d08,ar5,ar6,ar7), iVar1 == 1)) {
    uVar2 = 0;
    *(undefined4 *)(DAT_8c0b4d04 + ar4) = 0;
  }
  return uVar2;
}



/* FUN_8c0b4d14 @ 8c0b4d14 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b4e60) */
/* WARNING: Removing unreachable block (ram,0x8c0b4d14) */
/* WARNING: Removing unreachable block (ram,0x8c0b4e86) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b4d14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 uVar6;
  float fVar7;
  undefined8 in_dr0;
  float fVar9;
  double dVar8;
  undefined4 uVar10;
  double in_dr14;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined4 in_stack_00000000;
  undefined4 ain0;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [8];
  double dStack_24;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar6 = 1;
  uVar4 = ar5;
  ar6_00 = ar6;
  ain0 = ar7;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  Vec3_set_zero(auStack_38,uVar4,ar6_00,ar7);
  iVar2 = get_field_6c_028cc4(ar5,uVar4,ar6_00,ar7);
  if (iVar2 == 0) {
    object_dtor_delete(auStack_38,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
    return 2;
  }
  iVar3 = *(int *)(ar4 + 300);
  if (iVar3 == 0) {
    ar7 = 0;
    ar6_00 = 0xffffffff;
    uVar4 = 0xb;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 == 2) {
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7,ain0);
      if (cVar13 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   (int)((ulonglong)in_dr0 >> 0x20));
      }
      if (cVar12 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr14,0) + 1.0);
      }
      else {
        in_dr14 = in_dr14 + (double)CONCAT44(0x3f800000,(int)in_dr0);
      }
      iVar3 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x16,ar6_00,ar7);
      fVar7 = (float)iVar3;
      dVar8 = (double)(ulonglong)(uint)fVar7;
      if (cVar12 == '\0' && fVar7 < 0.0) {
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x4f800000,fVar7);
        }
        else {
          dVar8 = -8.62186752335918e-251;
        }
        if (cVar12 == '\0') {
          fVar7 = (float)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)CONCAT44(fVar7,SUB84(dVar8,0) + fVar7);
        }
        else {
          dVar8 = dVar8 + dVar8;
        }
      }
      if (cVar12 == '\0') {
        bVar11 = SUB84(in_dr14,0) < SUB84(dVar8,0);
      }
      else {
        bVar11 = in_dr14 < dVar8;
      }
      if (!bVar11) {
        iVar3 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x16,ar6_00,ar7);
        dVar8 = (double)((ulonglong)dVar8 & 0xffffffff);
        if (cVar12 == '\0') {
          bVar11 = (float)iVar3 < 0.0;
        }
        else {
          bVar11 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(float)iVar3) < dVar8;
        }
        if (bVar11) {
          if (cVar13 == '\0') {
            dVar8 = 9.046256971665328e+74;
          }
          else {
            dVar8 = -8.62186752335918e-251;
          }
        }
      }
      uVar10 = (undefined4)((ulonglong)dVar8 >> 0x20);
      ar5_00 = 0x16;
      uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x16,ar6_00,ar7);
      puVar5 = (undefined4 *)deref_u32(uVar4,ar5_00,ar6_00,ar7);
      FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar5,ar6_00,ar7);
      Vec3_assign(auStack_2c,auStack_48,ar6_00,ar7);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7,ain0);
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(0x41a00000,uVar10);
      }
      else {
        dVar8 = 3.14599345710447e-312;
      }
      dVar1 = dStack_24;
      if ((cVar12 != '\0' || (float)((ulonglong)dVar8 >> 0x20) <= SUB84(dVar8,0)) &&
         (dVar8 = (double)((ulonglong)dVar8 & 0xffffffff), dVar1 = dVar8, cVar13 == '\0')) {
        dStack_24 = (double)((ulonglong)dStack_24 & 0xffffffff00000000);
        dVar1 = dStack_24;
      }
      dStack_24 = dVar1;
      vec3_copy_8c02b5fc(auStack_54,ain0,ar6_00,ar7);
      FUN_8c023484(auStack_2c,auStack_54,ar6_00,ar7,auStack_64);
      Vec3_add(auStack_64,ar6,ar6_00,ar7,auStack_74);
      Vec3_assign(auStack_2c,auStack_74,ar6_00,ar7);
      Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
      uVar4 = 0xffffffff;
      object_dtor_delete(auStack_54,0xffffffff,ar6_00,ar7);
      FUN_8c036988(iVar2,uVar4,ar6_00,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7,ain0);
      if (cVar12 == '\0') {
        iVar2 = (int)(float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        iVar2 = (int)dVar8;
      }
      if (iVar2 == 0x28) {
        FUN_8c03f3e8(ar5,uVar4,ar6_00,ar7);
        *(undefined4 *)(ar4 + 0x348) = 1;
      }
      iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6_00,ar7);
      if (iVar2 == 1) {
        uVar6 = 0;
        *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb | 4;
        *(undefined4 *)(ar4 + 300) = 0;
      }
    }
    goto LAB_8c0b4fe2;
  }
  fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
  CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6_00,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6_00,ar7,ain0);
  if (cVar13 == '\0') {
    fVar9 = 15.0;
  }
  else {
    fVar7 = 15.0;
    fVar9 = 2.57839e-43;
  }
  if (cVar12 != '\0' || fVar9 <= fVar7) {
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    FUN_8c033474(ar4,0xc,ar6,in_stack_00000000);
    *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb;
    ar6_00 = ar6;
    ar7 = in_stack_00000000;
  }
LAB_8c0b4fe2:
  object_dtor_delete(auStack_38,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
  return uVar6;
}



/* FUN_8c0b5098 @ 8c0b5098 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b5098(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  double in_dr0;
  double dVar7;
  double dVar8;
  undefined4 in_fr5;
  undefined8 in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined8 uStack_94;
  double dStack_74;
  undefined8 uStack_60;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  uVar3 = ar6;
  Vec3_ctor_zero(auStack_1c,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x328) = 0xffffffff;
  iVar2 = *(int *)(ar4 + 300);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar2 == 1) {
        ar5 = 0x15;
        iVar2 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x15,ar6,ar7);
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44((float)iVar2,in_fr5);
        }
        else {
          dVar8 = (double)iVar2;
        }
        dVar7 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (cVar10 == '\0') {
          bVar9 = (float)((ulonglong)dVar8 >> 0x20) < 0.0;
        }
        else {
          bVar9 = dVar8 < dVar7;
        }
        if (bVar9) {
          if (cVar11 == '\0') {
            dVar7 = (double)((ulonglong)in_dr0 & 0xffffffff);
          }
          else {
            dVar7 = -8.399317239676898e-251;
          }
        }
        in_dr0 = (double)((ulonglong)dVar7 & 0xffffffff);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 300) = 2;
        *(undefined4 *)(ar4 + 0x32c) = 0;
        uVar4 = 0;
        FUN_8c03f39c(uVar3,ar5,ar6,ar7);
      }
      else {
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,uVar3);
        dVar8 = in_dr0;
        if (cVar11 == '\0') {
          dStack_74 = (double)CONCAT44(dStack_74._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
          dVar8 = dStack_74;
        }
        dStack_74 = dVar8;
        iVar2 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x15,ar6,ar7);
        uVar3 = SUB84(in_dr0,0);
        ar5 = libgcc_divide_helper_0101e4(iVar2 + -1,8,ar6,ar7);
        in_dr0 = dStack_74;
        if (cVar11 == '\0') {
          in_dr0 = (double)CONCAT44(dStack_74._0_4_,uVar3);
        }
        if (cVar10 == '\0') {
          iVar2 = (int)(float)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          iVar2 = (int)in_dr0;
        }
        iVar2 = libgcc_divide_helper_01031c(iVar2,ar5,ar6,ar7);
        if (iVar2 == 0) {
          iVar2 = *(int *)(ar4 + 0x32c);
          *(int *)(ar4 + 0x32c) = iVar2 + 1;
          *(int *)(ar4 + 0x328) = iVar2;
        }
      }
    }
    else if (iVar2 == 2) {
      uVar4 = 0;
    }
    goto LAB_8c0b51e6;
  }
  ar5 = 0x15;
  iVar2 = FUN_8c034148(ar4 + 0xb0,0x15,ar6,ar7);
  uVar5 = SUB84(in_dr0,0);
  if (iVar2 == 1) {
LAB_8c0b50fa:
    *(undefined4 *)(ar4 + 0x32c) = 0;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar2 == 2) {
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    goto LAB_8c0b50fa;
  }
  in_dr0 = (double)(ulonglong)uVar5;
  if (cVar11 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0;
  }
  else {
    *(double *)(ar4 + 0x2c) = in_dr0;
  }
LAB_8c0b51e6:
  fVar6 = SUB84(in_dr0,0);
  FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_2c);
  Vec3_normalize(auStack_2c,ar5,ar6,ar7);
  Vec3_assign(auStack_1c,auStack_3c,ar6,ar7);
  Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
  if (cVar11 == '\0') {
    fVar6 = *(float *)(ar4 + 0x2c);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2c);
  }
  if (cVar10 == '\0') {
    fVar6 = fVar6 + 1.0;
  }
  else {
    fVar6 = SUB84((double)CONCAT44(0x3f800000,fVar6) + (double)CONCAT44(0x3f800000,fVar6),0);
  }
  uStack_94 = in_xd0;
  if (cVar11 == '\0') {
    uStack_94 = CONCAT44(ar4,fVar6);
  }
  if (cVar11 == '\0') {
    *(undefined4 *)(uStack_94._4_4_ + 0x2c) = (undefined4)uStack_94;
    dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),(undefined4)uStack_94);
  }
  else {
    *(undefined8 *)(uStack_94._4_4_ + 0x2c) = uStack_94;
    dVar8 = *(double *)(ar4 + 0x38);
    in_xd0 = uStack_94;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 / dVar8,0);
  }
  if (cVar11 == '\0') {
    dVar8 = (double)CONCAT44(0x3dcccccd,fVar6);
  }
  else {
    dVar8 = 2.72127724290066e-312;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 * dVar8,0);
  }
  uVar1 = in_xd0;
  if (cVar11 == '\0') {
    uStack_60 = CONCAT44(uStack_60._4_4_,fVar6);
    uVar1 = uStack_60;
  }
  uStack_60 = uVar1;
  Vec3_scale(auStack_1c,&uStack_60,ar6,ar7,auStack_4c);
  FUN_8c023aa0(ar4 + 0x14,auStack_4c,ar6,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
  Vec3_normalize(ar4 + 0x14,uVar3,ar6,ar7);
  Vec3_assign(ar4 + 0x14,(int)&uStack_60 + 4,ar6,ar7);
  Vec3_dtor((int)&uStack_60 + 4,0xffffffff,ar6,ar7);
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
  Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
  return uVar4;
}



/* FUN_8c0b5344 @ 8c0b5344 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b544c) */
/* WARNING: Removing unreachable block (ram,0x8c0b5448) */
/* WARNING: Removing unreachable block (ram,0x8c0b5368) */
/* WARNING: Unknown calling convention */

int FUN_8c0b5344(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int *piVar3;
  uint uVar4;
  float fVar5;
  double in_dr0;
  double dVar6;
  ulonglong uVar7;
  ulonglong in_xd0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar1 = ar4[0x1a];
  if (iVar1 == 0) {
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5_00 = 0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0);
    uVar4 = SUB84(in_dr0,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ar5_00,ar6,ar7);
    uVar7 = (ulonglong)uVar4;
    if (cVar9 == '\0') {
      ar4[10] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 10) = uVar7;
    }
    FUN_8c022d04(ar4 + 5,ar5_00,ar6,ar7);
    piVar3 = ar4 + 0x28;
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44(0x41100000,(int)uVar7);
      *piVar3 = 0x41100000;
    }
    else {
      in_dr0 = -8.625516823227636e-251;
      piVar3[0] = 0x41100000;
      piVar3[1] = -0x73fc3cec;
    }
    FUN_8c03c314(ar4,ar5_00,ar6,ar7);
    ar4[0x1a] = ar4[0x1a] + 1;
  }
  else {
    ar5_00 = ar5;
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return iVar1;
      }
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),ar4[10]);
      }
      else {
        in_xd0 = *(ulonglong *)(ar4 + 10);
      }
      if (cVar8 == '\0') {
        fVar5 = SUB84(in_dr0,0) * (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        fVar5 = SUB84(in_dr0 * in_dr0,0);
      }
      if (cVar9 == '\0') {
        ar4[10] = (int)fVar5;
        fVar5 = (float)ar4[10];
      }
      else {
        *(ulonglong *)(ar4 + 10) = in_xd0;
      }
      if (cVar9 == '\0') {
        uVar7 = CONCAT44(0x3dcccccd,fVar5);
      }
      else {
        uVar7 = 0x803dcccccd;
      }
      if (cVar8 != '\0' || (float)(uVar7 >> 0x20) <= (float)uVar7) {
        return (int)&DAT_8c0b54e8;
      }
      if (cVar9 == '\0') {
        ar4[10] = 0;
      }
      else {
        *(ulonglong *)(ar4 + 10) = uVar7 & 0xffffffff;
      }
      piVar3 = ar4 + 0x20;
      Vec3_assign(ar4 + 5,piVar3,ar6,ar7);
      ar4[0x1a] = 0;
      uVar2 = (**(code **)(*ar4 + 0x2c))(ar4,piVar3,ar6,ar7);
      return uVar2;
    }
  }
  uVar4 = SUB84(in_dr0,0);
  if (ar5 == 0) {
    FUN_8c031748(ar4,ar5_00,ar6,ar7);
    uVar7 = (ulonglong)uVar4;
    if (cVar9 == '\0') {
      ar4[0x28] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar7;
    }
    Vec3_length_sq(ar4 + 1,ar5_00,ar6,ar7);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(0x3f4ccccd,(int)(uVar7 >> 0x20));
      uVar7 = in_xd0;
    }
    else {
      dVar6 = 0.0046875001760781744;
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar9 == '\0') {
      ar4[10] = (int)fVar5;
    }
    else {
      *(ulonglong *)(ar4 + 10) = uVar7;
    }
    ar5 = 0x68;
    ar4[0x1a] = ar4[0x1a] + 1;
  }
  else if ((ar5 == 1) || (ar5 == 2)) {
    ar4[0x1a] = 0;
    if (cVar9 == '\0') {
      ar4[10] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 10) = (ulonglong)in_dr0 & 0xffffffff;
    }
    if (cVar9 == '\0') {
      ar4[0x28] = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    ar5 = FUN_8c031748(ar4,ar5_00,ar6,ar7);
  }
  return ar5;
}



/* FUN_8c0b54f4 @ 8c0b54f4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b57f8) */
/* WARNING: Removing unreachable block (ram,0x8c0b5562) */
/* WARNING: Removing unreachable block (ram,0x8c0b54f4) */
/* WARNING: Removing unreachable block (ram,0x8c0b5566) */
/* WARNING: Removing unreachable block (ram,0x8c0b57fc) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b54f4(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  double dVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  int ar6_00;
  float in_fr1;
  double dVar3;
  float fVar5;
  ulonglong uVar4;
  float fVar6;
  undefined4 in_fr14;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  float fStack_e0;
  float fStack_dc;
  undefined4 auStack_d8 [4];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [12];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  double dStack_20;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  FUN_8c022d04(ar4 + 0x200,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    fStack_dc = 0.0;
  }
  else {
    auStack_d8[0] = 0;
    fStack_dc = in_fr1;
  }
  fVar6 = 1.0;
  Vec3_ctor_zero(auStack_24,uVar2,ar6_00,ar7);
  Vec3_ctor_zero(auStack_34,uVar2,ar6_00,ar7);
  Vec3_ctor_zero(auStack_44,uVar2,ar6_00,ar7);
  Vec3_ctor_zero(auStack_54,uVar2,ar6_00,ar7);
  if ((*(int *)(ar6 + 0x68) == 0) || (-1 < (int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1e))) {
    if ((*(int *)(ar6 + 0x88) != 0) && ((int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1b) < 0)) {
      *(undefined4 *)(ar4 + 0x1d4) = 2;
    }
    Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
    uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  }
  else {
    *(undefined4 *)(ar4 + 0x1d4) = 1;
    if (cVar8 == '\0') {
      fVar6 = *(float *)(*(int *)(ar6 + 0x68) + 0x158);
    }
    Vec3_assign(auStack_24,*(int *)(ar6 + 0x68) + 4,ar6_00,ar7);
    dVar3 = dStack_20;
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(dStack_20._0_4_,in_fr1);
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) + fVar6,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + (double)CONCAT44(in_fr14,fVar6);
    }
    dVar1 = dVar3;
    if (cVar8 == '\0') {
      dStack_20 = (double)CONCAT44(dStack_20._4_4_,(int)((ulonglong)dVar3 >> 0x20));
      dVar1 = dStack_20;
    }
    dStack_20 = dVar1;
    Vec3_sub(ar5,auStack_24,ar6_00,ar7,auStack_64);
    Vec3_assign(ar4 + 0x200,auStack_64,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(ar4 + 0x200,uVar2,ar6_00,ar7);
    fVar5 = (float)((ulonglong)dVar3 >> 0x20);
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(fVar5,*(undefined4 *)(ar4 + 0x48));
      fStack_e0 = fVar5;
    }
    else {
      fStack_e0 = SUB84(dVar3,0);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      fStack_dc = fVar5;
    }
    if (cVar7 == '\0') {
      fVar6 = SUB84(dVar3,0) + fVar6;
    }
    else {
      fVar6 = SUB84(dVar3 + (double)CONCAT44(in_fr14,fVar6),0);
    }
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(fStack_e0,fVar6);
    }
    else {
      dVar3 = (double)CONCAT44(fStack_dc,fStack_e0);
    }
    if (cVar7 == '\0') {
      fVar6 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar3 - dVar3,0);
    }
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(0x3dcccccd,fVar6);
    }
    else {
      dVar3 = -7.93713999303812e-251;
    }
    if (cVar7 == '\0') {
      fVar6 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar3 * dVar3,0);
    }
    fStack_dc = fVar6;
    if (cVar8 != '\0') {
      fStack_dc = (float)in_xd0;
      auStack_d8[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    if (cVar7 == '\0' && fVar6 < 0.0) {
      if (cVar8 == '\0') {
        fStack_dc = 0.0;
      }
      else {
        auStack_d8[0] = 0;
        fStack_dc = fVar6;
      }
    }
    uVar4 = (ulonglong)(uint)fVar6;
    Vec3_length(ar4 + 0x200,uVar2,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x200,&fStack_dc,ar6_00,ar7);
    Vec3_assign(auStack_34,ar5,ar6_00,ar7);
    Vec3_assign(auStack_44,*(int *)(ar6 + 0x68) + 4,ar6_00,ar7);
    Vec3_sub(auStack_44,auStack_34,ar6_00,ar7,auStack_74);
    Vec3_assign(auStack_54,auStack_74,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
    Vec3_set_xyz(auStack_80,uVar2,ar6_00,ar7);
    FUN_8c023484(auStack_54,auStack_80,ar6_00,ar7,auStack_90);
    Vec3_assign(auStack_54,auStack_90,ar6_00,ar7);
    Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_80,0xffffffff,ar6_00,ar7);
    ar5_00 = auStack_54;
    FUN_8c022d14(ar4 + 0x14,ar5_00,ar6_00,ar7);
    if (cVar8 == '\0') {
      uVar4 = uVar4 >> 0x20;
    }
    if (cVar7 == '\0' && 0.0 < (float)uVar4) {
      Vec3_set_xyz(auStack_b8,ar5_00,ar6_00,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_b8,ar6_00,ar7,auStack_c8);
      Vec3_assign(ar4 + 0x14,auStack_c8,ar6_00,ar7);
      Vec3_dtor(auStack_c8,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_b8,0xffffffff,ar6_00,ar7);
    }
    else {
      Vec3_set_xyz(auStack_9c,ar5_00,ar6_00,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_9c,ar6_00,ar7,auStack_ac);
      Vec3_assign(ar4 + 0x14,auStack_ac,ar6_00,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_9c,0xffffffff,ar6_00,ar7);
      FUN_8c023bf4(auStack_54,&DAT_8c13bacc,ar6_00,ar7);
    }
    Vec3_scale(auStack_54,&DAT_8c13bad0,ar6_00,ar7,auStack_d8);
    FUN_8c023aa0(ar4 + 0x200,auStack_d8,ar6_00,ar7);
    Vec3_dtor(auStack_d8,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
    uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  }
  return uVar2;
}



/* get_field_314_0b58d0 @ 8c0b58d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_314_0b58d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0b58d8 + ar4);
}



/* FUN_8c0b58dc @ 8c0b58dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b58dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0b58e4;
  *(undefined4 *)(DAT_8c0b58e4 + ar4) = ar5;
  return iVar1;
}



/* Class_12b2ac_m7_0b58e8 @ 8c0b58e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12b2ac_m7_0b58e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_FUN_8c0b5904)(ar4,ar5,ar6,ar7);
  iVar1 = DAT_8c0b5908;
  *(undefined4 *)(DAT_8c0b5908 + ar4) = 0;
  return iVar1;
}



/* FUN_8c0b590c @ 8c0b590c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b590c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [28];
  
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0b59e4)(PTR_DAT_8c0b59e0,ar5,ar6,ar7);
  puVar3 = PTR_Vec3_dtor_8c0b59ec;
  uVar2 = DAT_8c0b59e8;
  (*(code *)PTR_global_list_push_8c0b59f0)(uVar1,PTR_Vec3_dtor_8c0b59ec,DAT_8c0b59e8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0b59e4)(PTR_DAT_8c0b59f4,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0b59ec;
  uVar2 = DAT_8c0b59f8;
  (*(code *)PTR_global_list_push_8c0b59f0)(uVar1,PTR_Vec3_dtor_8c0b59ec,DAT_8c0b59f8,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0b59e4)(PTR_DAT_8c0b59fc,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0b59ec;
  uVar2 = DAT_8c0b5a00;
  (*(code *)PTR_global_list_push_8c0b59f0)(uVar1,PTR_Vec3_dtor_8c0b59ec,DAT_8c0b5a00,ar7);
  uVar1 = (*(code *)PTR_Vec3_ctor_xyz_8c0b59e4)(PTR_DAT_8c0b5a04,puVar3,uVar2,ar7);
  puVar3 = PTR_Vec3_dtor_8c0b59ec;
  uVar2 = DAT_8c0b5a08;
  (*(code *)PTR_global_list_push_8c0b59f0)(uVar1,PTR_Vec3_dtor_8c0b59ec,DAT_8c0b5a08,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0b5a1c)(auStack_1c,puVar3,uVar2,ar7);
  (*(code *)PTR_FUN_8c0b5a24)(DAT_8c0b5a20,uVar1,uVar2,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0b5a1c)(auStack_34,uVar1,uVar2,ar7);
  uVar2 = (*(code *)PTR_FUN_8c0b5a24)(DAT_8c0b5a20 + 0x18,uVar1,uVar2,ar7);
  return uVar2;
}



/* FUN_8c0b5a30 @ 8c0b5a30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0b5a30(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0b5a6c)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c0b5a70;
  *(undefined1 *)(DAT_8c0b5a74 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c0b5a78 + (int)ar4) = 0;
  *(undefined1 *)(DAT_8c0b5a7c + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0b5a80 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0b5a84 + (int)ar4) = 0;
  return ar4;
}



/* Class_12b2e8_m0_0b5a88 @ 8c0b5a88 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b2e8_m0_0b5a88(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b2e8;
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12b2e8_m1_0b5ad0 @ 8c0b5ad0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b2e8_m1_0b5ad0(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int *piVar9;
  int *piVar10;
  int *a6;
  int in_stack_ffffff6c;
  undefined2 uVar11;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [20];
  
  Vec3_ctor_zero(auStack_28,Vec3_ctor_zero,ar6,ar7);
  puVar8 = auStack_48;
  puVar5 = &DAT_8c13bbf4;
  iVar7 = 0x10;
  do {
    puVar6 = puVar5 + 1;
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar8[1] = *puVar6;
    puVar8 = puVar8 + 2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 0;
  piVar9 = ar5;
  piVar10 = ar6;
  FUN_8c0b6328(ar4,ar5,ar6,ar7);
  uVar11 = (undefined2)((uint)in_stack_ffffff6c >> 0x10);
  if (*(int *)(ar4 + 0x40) != 2) {
    uVar1 = FUN_8c02602c(ar6[6],piVar9,piVar10,ar7);
    piVar9 = (int *)0xf;
    iVar3 = libgcc_divide_helper_01031c(uVar1 & 0xffff,0xf,piVar10,ar7);
    if ((iVar3 == 0) && (*(int *)(ar4 + 0x40) == 0)) {
      uVar1 = FUN_8c02602c(ar6[6],piVar9,piVar10,ar7);
      in_stack_ffffff6c = uVar1 << 0x10;
      if (*(uint *)(ar4 + 0xa8) != (uVar1 & 0xffff)) {
        *(undefined4 *)(ar4 + 0xa0) = 1;
      }
    }
    if ((((*(int *)(ar4 + 0x6c) == 0) && (*(int *)(ar4 + 0x40) == 0)) &&
        (*(char *)(ar4 + 0x98) == '\x03')) &&
       ((piVar9 = ar6, iVar3 = FUN_8c02fcc4(ar4,ar6,piVar10,ar7), iVar3 == 1 &&
        (*(int *)(ar4 + 0xa0) == 1)))) {
      piVar9 = ar5;
      piVar10 = ar6;
      uVar2 = FUN_8c0b67cc(ar4,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x6c) = uVar2;
    }
    uVar11 = (undefined2)((uint)in_stack_ffffff6c >> 0x10);
    if (*(int *)(ar4 + 0xa0) == 1) {
      a6 = (int *)0x0;
      while( true ) {
        piVar9 = (int *)0x1;
        iVar3 = (**(code **)(*ar5 + 0x11c))(ar5,1,piVar10,ar7);
        uVar11 = (undefined2)((uint)in_stack_ffffff6c >> 0x10);
        if (iVar3 <= (int)a6) break;
        uVar2 = 1;
        piVar10 = a6;
        iVar3 = (**(code **)(*ar5 + 0x100))(ar5,1,a6,ar7);
        iVar3 = (**(code **)(*(int *)(iVar3 + 8) + 0xb4))(iVar3,uVar2,piVar10,ar7);
        if (iVar3 == 1) {
          iVar7 = iVar7 + 1;
        }
        a6 = (int *)((int)a6 + 1);
      }
      if (((iVar7 == 0) && (*(char *)(ar4 + 0x9c) < '\x04')) && ('\x01' < *(char *)(ar4 + 0x98))) {
        *(undefined1 *)(ar4 + 0x98) = 1;
      }
    }
    if ((*(int *)(ar4 + 0x6c) != 0) && (*(int *)(ar4 + 4) != 6)) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x74))
                (*(int *)(ar4 + 0x6c),piVar9,piVar10,ar7);
      *(undefined4 *)(ar4 + 0x40) = 4;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0xc) = 0;
      piVar9 = (int *)0x2bb;
      FUN_8c02f298(ar4,699,piVar10,ar7);
      *(undefined4 *)(ar4 + 0xa0) = 0;
    }
  }
  uVar1 = FUN_8c02602c(ar6[6],piVar9,piVar10,ar7);
  uVar4 = CONCAT22(uVar11,(short)uVar1);
  *(uint *)(ar4 + 0xa8) = uVar1 & 0xffff;
  piVar9 = ar6;
  FUN_8c02f20c(ar4,ar6,piVar10,ar7);
  uVar2 = get_field_4_05eed8(ar4,piVar9,piVar10,ar7);
  piVar9 = ar5;
  piVar10 = ar6;
  FUN_8c0b61bc(ar4,ar5,ar6,uVar2);
  iVar7 = (int)*(char *)(ar4 + 0x98);
  if ((iVar7 < 8) && (-1 < iVar7)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar7) {
    default:
      piVar10 = ar6;
      iVar7 = FUN_8c0b67cc(ar4,ar5,ar6,uVar2);
      piVar9 = ar5;
      if ((iVar7 == 0) || (piVar9 = ar6, iVar7 = FUN_8c02fcc4(ar4,ar6,piVar10,uVar2), iVar7 != 1)) {
        if (*(int *)(ar4 + 0x40) != 5) {
          *(undefined4 *)(ar4 + 8) = 0x5f;
          *(undefined4 *)(ar4 + 0xc) = 0;
          *(undefined4 *)(ar4 + 4) = 0xd;
          *(undefined4 *)(ar4 + 0x40) = 8;
          DAT_8c13bbe8 = 8;
        }
      }
      else {
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 0x40) = 5;
        DAT_8c13bbe8 = 5;
        piVar10 = (int *)0x1b;
        piVar9 = (int *)0x6;
        FUN_8c0b9ed4(ar6[6],6,0x1b,uVar2);
        if ('\0' < *(char *)(ar4 + 0x9d)) {
          *(undefined1 *)(ar4 + 0x98) = 2;
        }
      }
      break;
    case 2:
      if (*(char *)(ar4 + 0x9d) < '\x01') {
        *(undefined1 *)(ar4 + 0x9d) = 1;
      }
      piVar10 = ar6;
      iVar7 = FUN_8c0b67cc(ar4,ar5,ar6,uVar2);
      if (((iVar7 == 0) || (*(int *)(ar4 + 0x40) == 6)) ||
         (ar5 = ar6, iVar7 = FUN_8c02fcc4(ar4,ar6,piVar10,uVar2), iVar7 != 1)) {
        piVar9 = ar5;
        if (*(int *)(ar4 + 0x40) != 6) {
          *(undefined4 *)(ar4 + 8) = 0x5f;
          *(undefined4 *)(ar4 + 0xc) = 0;
          *(undefined4 *)(ar4 + 4) = 0xd;
          *(undefined4 *)(ar4 + 0x40) = 8;
          DAT_8c13bbe8 = 8;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x40) = 6;
        DAT_8c13bbe8 = 6;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(char *)(ar4 + 0x9d) = *(char *)(ar4 + 0x9d) + '\x01';
        piVar9 = ar5;
      }
      break;
    case 3:
      break;
    case 4:
    case 6:
      *(undefined4 *)(ar4 + 0x40) = 3;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 0xd;
      DAT_8c13bbe8 = 3;
      iVar7 = (**(code **)(*ar5 + 0x11c))(ar5,1,piVar10,uVar2);
      if (iVar7 == 0) {
        piVar10 = (int *)0x1b;
        FUN_8c0b9ed4(ar6[6],8,0x1b,uVar2);
      }
      piVar9 = (int *)0x1;
      FUN_8c02cb84(ar6[1] + 0xa8,1,piVar10,uVar2,uVar4);
      break;
    case 5:
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 0x40) = 7;
      DAT_8c13bbe8 = 7;
      piVar9 = (int *)0x1;
      FUN_8c02cb84(ar6[1] + 0xa8,1,piVar10,uVar2,uVar4);
      break;
    case 7:
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 0x40) = 2;
      DAT_8c13bbe8 = 2;
      piVar10 = (int *)0x1b;
      piVar9 = (int *)0x9;
      FUN_8c0b9ed4(ar6[6],9,0x1b,uVar2);
    }
  }
  FUN_8c0b65b0(ar4,piVar9,piVar10,uVar2);
  FUN_8c05ee90(ar6[2],piVar9,piVar10,uVar2);
  iVar7 = get_field_124_027930(ar6[2],piVar9,piVar10,uVar2);
  iVar3 = get_field_40_05eea0(ar4,piVar9,piVar10,uVar2);
  if (iVar7 != iVar3) {
    uVar4 = get_field_40_05eea0(ar4,piVar9,piVar10,uVar2);
    piVar10 = (int *)0x1;
    FUN_8c031b08(ar6[2],uVar4,1,uVar2);
  }
  uVar2 = Vec3_dtor(auStack_28,0xffffffff,piVar10,uVar2);
  return uVar2;
}



/* Class_12b2e8_m2_0b6028 @ 8c0b6028 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b2e8_m2_0b6028(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 auStack_44 [32];
  undefined1 auStack_24 [20];
  
  uVar2 = ar5;
  iVar7 = ar6;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  puVar6 = auStack_44;
  puVar4 = &DAT_8c13bc14;
  iVar3 = 0x10;
  do {
    puVar5 = puVar4 + 1;
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 2;
    puVar6[1] = *puVar5;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),uVar2,iVar7,ar7);
  *(uint *)(ar4 + 0xa8) = uVar1 & 0xffff;
  iVar3 = ar6;
  FUN_8c0b6328(ar4,ar5,ar6,ar7);
  iVar7 = ar6;
  FUN_8c02f20c(ar4,ar6,iVar3,ar7);
  uVar2 = get_field_4_05eed8(ar4,iVar7,iVar3,ar7);
  iVar7 = ar6;
  FUN_8c0b61bc(ar4,ar5,ar6,uVar2);
  iVar3 = (int)*(char *)(ar4 + 0x98);
  if ((iVar3 < 8) && (-1 < iVar3)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar3) {
    case 0:
      *(undefined4 *)(ar4 + 0x40) = 8;
      DAT_8c13bbe8 = 8;
      break;
    case 4:
    case 6:
      *(undefined4 *)(ar4 + 0x40) = 3;
      DAT_8c13bbe8 = 3;
      break;
    case 5:
      *(undefined4 *)(ar4 + 0x40) = 7;
      DAT_8c13bbe8 = 7;
      break;
    case 7:
      *(undefined4 *)(ar4 + 0x40) = 2;
      DAT_8c13bbe8 = 2;
    }
  }
  FUN_8c0b65b0(ar4,ar5,iVar7,uVar2);
  FUN_8c05ee90(*(undefined4 *)(ar6 + 8),ar5,iVar7,uVar2);
  iVar3 = get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,iVar7,uVar2);
  if (*(int *)(ar4 + 0x40) != iVar3) {
    iVar7 = 1;
    FUN_8c031b08(*(undefined4 *)(ar6 + 8),*(undefined4 *)(ar4 + 0x40),1,uVar2);
  }
  uVar2 = Vec3_dtor(auStack_24,0xffffffff,iVar7,uVar2);
  return uVar2;
}



/* FUN_8c0b61bc @ 8c0b61bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b61bc(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *ar6_00;
  undefined4 ar6_01;
  
  uVar3 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13bb4c + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    FUN_8c0b63e0(ar4,ar5,ar6,ar7);
    uVar3 = 1;
    FUN_8c02f404(ar4,1,ar6_00,ar7,iVar2);
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_8c02f404(ar4,3,ar6_00,ar7,iVar2);
      FUN_8c02fdd8(ar4,ar5,ar6_00,ar7);
    }
    else if (iVar1 == 2) {
      iVar2 = (**(code **)(*(int *)(*ar6 + 8) + 0xb4))(*ar6,uVar3,ar6_00,ar7);
      if (iVar2 == 1) {
        FUN_8c027954(*ar6,uVar3,ar6_00,ar7);
      }
    }
    else if (iVar1 == 4) {
      iVar2 = FUN_8c02f414(ar4,uVar3,ar6_00,ar7);
      if (iVar2 == 1) {
        if (*(int *)(ar4 + 0x88) == 1) {
          ar6_01 = 0x1b;
          uVar3 = 7;
          FUN_8c0b9ed4(ar6[6],7,0x1b,ar7);
          uVar3 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),uVar3,ar6_01,ar7);
          FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),uVar3,ar6_01,ar7);
          *(char *)(ar4 + 0x9c) = *(char *)(ar4 + 0x9c) + '\x01';
          if (*(int *)(ar4 + 0x6c) != 0) {
            (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                      (*(int *)(ar4 + 0x6c),uVar3,ar6_01,ar7);
            *(undefined4 *)(ar4 + 0x6c) = 0;
          }
          *(undefined4 *)(ar4 + 0x88) = 0;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
    }
  }
  return 1;
}



/* FUN_8c0b6328 @ 8c0b6328 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b6328(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  int in_stack_ffffffe4;
  
  if (*(int *)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    FUN_8c0b6440(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    in_stack_ffffffe4 = *(int *)(ar4 + 0xc);
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13bb4c + in_stack_ffffffe4 * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 9) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0xc) = 0;
      FUN_8c02f404(ar4,0,ar6_00,ar7,in_stack_ffffffe4);
      ar6 = ar6_00;
    }
    else {
      FUN_8c02f404(ar4,3,ar6_00,ar7,in_stack_ffffffe4);
      FUN_8c0b63e0(ar4,ar5,ar6,ar7);
    }
  }
  iVar1 = *(int *)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = FUN_8c02f404(ar4,2,ar6,ar7,in_stack_ffffffe4);
  }
  return iVar1;
}



/* FUN_8c0b63e0 @ 8c0b63e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b63e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 1) {
    iVar1 = FUN_8c0b6604(ar4,ar5,ar6,ar7);
  }
  else if (((iVar1 != 2) && (iVar1 == 4)) && (iVar1 = *(int *)(ar4 + 0x6c), iVar1 == 0)) {
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
    iVar1 = FUN_8c02f404(ar4,2,ar6,ar7,ar5);
  }
  return iVar1;
}



/* FUN_8c0b6440 @ 8c0b6440 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * FUN_8c0b6440(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  
  iVar2 = *(int *)(ar4 + 0x40);
  puVar1 = (undefined *)0x7;
  if ((iVar2 < 8) && (puVar1 = (undefined *)0x2, 1 < iVar2)) {
    puVar1 = (&switchD_8c0b646e::switchdataD_8c0b6474)[iVar2 + -2];
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 2:
      puVar1 = *(undefined **)(ar4 + 0x8c);
      if (puVar1 == (undefined *)0x1) {
        puVar1 = (undefined *)0x8c;
        *(undefined4 *)(ar4 + 0x8c) = 0;
      }
      break;
    case 4:
      puVar1 = (undefined *)FUN_8c02f414(ar4,ar5,ar6,ar7);
      if ((puVar1 == (undefined *)0x1) &&
         (puVar1 = *(undefined **)(ar4 + 0x88), puVar1 == (undefined *)0x1)) {
        ar6_00 = 0x1b;
        uVar3 = 7;
        FUN_8c0b9ed4(*(undefined4 *)(ar6 + 0x18),7,0x1b,ar7);
        uVar3 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),uVar3,ar6_00,ar7);
        FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),uVar3,ar6_00,ar7);
        *(char *)(ar4 + 0x9c) = *(char *)(ar4 + 0x9c) + '\x01';
        if (*(char *)(ar4 + 0x9c) == '\b') {
          uVar3 = 1;
          FUN_8c02cb84(*(int *)(ar6 + 4) + 0xa8,1,ar6_00,ar7,ar4);
        }
        if (*(int *)(ar4 + 0x6c) != 0) {
          (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                    (*(int *)(ar4 + 0x6c),uVar3,ar6_00,ar7);
          *(undefined4 *)(ar4 + 0x6c) = 0;
        }
        puVar1 = (undefined *)0x88;
        *(undefined4 *)(ar4 + 0x88) = 0;
      }
      break;
    case 5:
      puVar1 = (undefined *)0x9d;
      *(char *)(ar4 + 0x9d) = *(char *)(ar4 + 0x9d) + '\x01';
      break;
    case 6:
      puVar1 = (undefined *)0x2;
      if ('\x01' < *(char *)(ar4 + 0x9d)) {
        *(undefined1 *)(ar4 + 0x98) = 3;
        puVar1 = (undefined *)FUN_8c0c4e2c(ar4,ar5,ar6,ar7);
      }
      break;
    case 7:
      *(undefined1 *)(ar4 + 0x98) = 6;
      puVar1 = (undefined *)FUN_8c0c4e2c(ar4,ar5,ar6,ar7);
    }
  }
  return puVar1;
}



/* FUN_8c0b65b0 @ 8c0b65b0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0b65b0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  if (*(int *)(ar4 + 4) == 2) {
    (*(code *)PTR_get_field_8_066620_8c0b65f8)(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0b65fc;
  }
  else {
    (*(code *)PTR_get_field_8_066620_8c0b65f8)(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0b6600;
  }
  return puVar1;
}



/* FUN_8c0b6604 @ 8c0b6604 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b6604(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

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
    uVar3 = uStack_3c._4_4_;
    iVar1 = libgcc_divide_helper_01031c(uStack_3c._4_4_,iVar9,a6,a7);
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



/* FUN_8c0b67cc @ 8c0b67cc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b67cc) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b67cc(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined1 *ar6_01;
  undefined1 *ar7_00;
  undefined1 *puVar4;
  uint in_fr1;
  double dVar5;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [16];
  uint auStack_2c [5];
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    in_fr15 = 50.0;
  }
  Vec3_ctor_xyz(auStack_3c,ar5_00,ar6_00,ar7);
  if (cVar8 == '\0') {
    auStack_2c[0] = 0;
  }
  else {
    auStack_2c[3] = 0;
    auStack_2c[0] = in_fr1;
  }
  dVar5 = (double)(ulonglong)in_fr1;
  auStack_2c[2] = 0;
  auStack_2c[1] = 0;
  ar7_00 = auStack_c0;
  ar6_01 = auStack_bc;
  puVar4 = auStack_b8;
  FUN_8c03f414(*ar6,puVar4,ar6_01,ar7_00);
  Vec3_set_xyz(auStack_48,puVar4,ar6_01,ar7_00);
  vec3_copy_8c02b5fc(auStack_64,auStack_48,ar6_01,ar7_00);
  FUN_8c023484(auStack_3c,auStack_64,ar6_01,ar7_00,auStack_74);
  Vec3_ctor_copy(auStack_58,auStack_74,ar6_01,ar7_00);
  Vec3_dtor(auStack_74,0xffffffff,ar6_01,ar7_00);
  object_dtor_delete(auStack_64,0xffffffff,ar6_01,ar7_00);
  if (*(int *)(ar4 + 0x6c) == 0) {
    for (puVar4 = (undefined1 *)0x0; iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,1,ar6_01,ar7_00),
        (int)puVar4 < iVar2; puVar4 = puVar4 + 1) {
      uVar3 = 1;
      ar6_01 = puVar4;
      uVar1 = (**(code **)(*ar5 + 0x100))(ar5,1,puVar4,ar7_00);
      iVar2 = get_field_6c_02f46c(uVar1,uVar3,ar6_01,ar7_00);
      if (iVar2 != 0) {
        FUN_8c02f670(*ar6,uVar3,ar6_01,ar7_00,auStack_84);
        Vec3_add(auStack_84,auStack_58,ar6_01,ar7_00,auStack_94);
        uVar3 = 1;
        ar6_01 = puVar4;
        uVar1 = (**(code **)(*ar5 + 0x100))(ar5,1,puVar4,ar7_00);
        FUN_8c02f670(uVar1,uVar3,ar6_01,ar7_00,auStack_a4);
        Vec3_sub(auStack_94,auStack_a4,ar6_01,ar7_00,auStack_b4);
        Vec3_assign(auStack_2c,auStack_b4,ar6_01,ar7_00);
        Vec3_dtor(auStack_b4,0xffffffff,ar6_01,ar7_00);
        Vec3_dtor(auStack_a4,0xffffffff,ar6_01,ar7_00);
        Vec3_dtor(auStack_94,0xffffffff,ar6_01,ar7_00);
        uVar1 = 0xffffffff;
        Vec3_dtor(auStack_84,0xffffffff,ar6_01,ar7_00);
        Vec3_length_sq(auStack_2c,uVar1,ar6_01,ar7_00);
        if (cVar7 == '\0') {
          bVar6 = (float)((ulonglong)dVar5 >> 0x20) < in_fr15;
        }
        else {
          bVar6 = dVar5 < (double)CONCAT44(in_fr14,in_fr15);
        }
        if (bVar6) {
          uVar1 = (**(code **)(*ar5 + 0x100))(ar5,1,puVar4,ar7_00);
          Vec3_dtor(auStack_58,0xffffffff,puVar4,ar7_00);
          object_dtor_delete(auStack_48,0xffffffff,puVar4,ar7_00);
          Vec3_dtor(auStack_3c,0xffffffff,puVar4,ar7_00);
          Vec3_dtor(auStack_2c,0xffffffff,puVar4,ar7_00);
          return uVar1;
        }
      }
    }
    Vec3_dtor(auStack_58,0xffffffff,ar6_01,ar7_00);
    object_dtor_delete(auStack_48,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_3c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_01,ar7_00);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(ar4 + 0x6c);
    Vec3_dtor(auStack_58,0xffffffff,ar6_01,ar7_00);
    object_dtor_delete(auStack_48,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_3c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_01,ar7_00);
  }
  return uVar1;
}



/* FUN_8c0b6af8 @ 8c0b6af8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b6af8(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(DAT_8c0b6b08 + ar4) = *ar5;
  iVar1 = DAT_8c0b6b0c;
  *(char *)(DAT_8c0b6b0c + ar4) = (char)*(undefined4 *)(ar5 + 4);
  return iVar1;
}



/* FUN_8c0b6b10 @ 8c0b6b10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b6b10(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  *ar5 = *(undefined1 *)(DAT_8c0b6b24 + ar4);
  cVar1 = *(char *)(DAT_8c0b6b28 + ar4);
  *(int *)(ar5 + 4) = (int)cVar1;
  return (int)cVar1;
}



/* FUN_8c0b6b2c @ 8c0b6b2c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b6b2c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(DAT_8c0b6b38 + ar4);
}



/* FUN_8c0b6b3c @ 8c0b6b3c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b6b3c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126358,ar5,ar6,ar7);
  uVar3 = 0x8c286df0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286df0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126368,pcVar2,uVar3,ar7);
  uVar3 = 0x8c286dfc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286dfc,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126378,pcVar2,uVar3,ar7);
  uVar3 = 0x8c286e08;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c286e08,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126388,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c286e14,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126398 = CONCAT44(_UNK_8c12639c,0x800000);
                    /* WARNING: Read-only address (ram,0x8c12639c) is written */
  }
  else {
    _DAT_8c126398 = 0xffffffff00800000;
  }
  return 0x8c125864;
}



/* FUN_8c0b6bf4 @ 8c0b6bf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b6bf4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0b6c0c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0b6c10 @ 8c0b6c10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b6c10(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = DAT_8c0b6c2c;
  (*(code *)PTR_FUN_8c0b6c30)(DAT_8c0b6c2c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0b6c34)(uVar1,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_game_shutdown_b_8c0b6c38)(uVar1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0b6c3c @ 8c0b6c3c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b6c3c(undefined4 ar4,undefined *ar5,undefined *ar6,undefined *ar7)

{
  int iVar1;
  undefined *ar6_00;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined1 auStack_30 [24];
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7);
  uVar2 = 1;
  FUN_8c0162f8(auStack_30,ar5_00,ar6_00,ar7);
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      ar7 = &DAT_8c13c025;
      ar6_00 = (undefined *)0x0;
      uVar2 = 0xb;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,0xb,0,&DAT_8c13c025);
      uVar2 = FUN_8c01f520(0x8c3dd7dc,uVar2,ar6_00,ar7);
      iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_USR_8c13c026,ar6_00,ar7);
      if (iVar1 == 0) {
        _DAT_8c431a58 = FUN_8c01ae28(uVar2,ar4,ar5,ar6);
        ar6_00 = ar5;
        ar7 = ar6;
      }
      else {
        iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_INC_8c13c033,ar6_00,ar7);
        if (iVar1 == 0) {
          _DAT_8c431a58 = FUN_8c01b400(uVar2,s_SM2000US__VM_8c13c040,ar5,ar6);
          ar6_00 = ar5;
          ar7 = ar6;
        }
      }
      uVar2 = 0;
      break;
    case 1:
      ar7 = &DAT_8c13c025;
      ar6_00 = (undefined *)0x0;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,1,0,&DAT_8c13c025);
      break;
    case 3:
      ar6_00 = (undefined *)get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7);
      ar7 = &DAT_8c13c025;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,2,ar6_00,&DAT_8c13c025);
      break;
    case 4:
      ar6_00 = (undefined *)get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7);
      ar7 = &DAT_8c13c025;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,4,ar6_00,&DAT_8c13c025);
    }
  }
  FUN_8c0c412c(&DAT_8c2b5628,1,ar6_00,ar7);
  free_if_nonnull_wrap_0151a0(auStack_30,0xffffffff,ar6_00,ar7);
  return uVar2;
}



/* FUN_8c0b6e04 @ 8c0b6e04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b6e04(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  do {
    bVar1 = *ar4;
    if (bVar1 != *ar5) {
      return (uint)bVar1 - (uint)*ar5;
    }
    ar5 = ar5 + 1;
    ar4 = ar4 + 1;
  } while (bVar1 != 0);
  return 0;
}



/* FUN_8c0b6e6c @ 8c0b6e6c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b6e6c(undefined *ar4,undefined *ar5,undefined *ar6,undefined *ar7)

{
  int iVar1;
  undefined *ar6_00;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined1 *ar6_01;
  undefined *ar7_00;
  undefined4 ar7_01;
  undefined4 uVar3;
  undefined *in_stack_00000000;
  int in_stack_00000004;
  undefined4 in_stack_ffffff64;
  undefined auStack_48 [20];
  undefined1 auStack_34 [24];
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  iVar1 = get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7);
  uVar3 = 1;
  FUN_8c0162f8(auStack_34,ar5_00,ar6_00,ar7_00);
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      ar7_00 = &DAT_8c13c025;
      ar6_00 = (undefined *)0x0;
      uVar2 = 0xb;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,0xb,0,&DAT_8c13c025);
      uVar2 = FUN_8c01f520(0x8c3dd7dc,uVar2,ar6_00,ar7_00);
      if (in_stack_00000004 == 1) {
        iVar1 = FUN_8c0b6e04(ar4,s_SM2000US__VM_8c13c040,ar6_00,ar7_00);
        if (iVar1 == 0) {
          ar6_00 = auStack_48;
          iVar1 = FUN_8c01bc2c(uVar2,s_SM2000US__VM_8c13c040,ar6_00,ar7_00);
          if (iVar1 == 1) {
            iVar1 = FUN_8c01b0a8(uVar2,ar4,ar7,in_stack_00000000);
            ar6_00 = ar7;
            ar7_00 = in_stack_00000000;
            if (iVar1 == 1) {
              uVar3 = 0;
            }
            break;
          }
        }
        iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_USR_8c13c026,ar6_00,ar7_00);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_8c01bba0(uVar2,s_SM2000US_USR_8c13c026,ar6_00,ar7_00), iVar1 == 1)) {
          iVar1 = FUN_8c01ae98(uVar2,ar4,ar5,ar6);
          ar6_00 = ar5;
          ar7_00 = ar6;
          if (iVar1 == 1) {
            uVar3 = 0;
            ar6_00 = ar5;
            ar7_00 = ar6;
          }
        }
        else {
          iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_INC_8c13c033,ar6_00,ar7_00);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_8c01bc2c(uVar2,s_SM2000US__VM_8c13c040,auStack_48,ar7_00), iVar1 == 1)) {
            iVar1 = FUN_8c01b47c(uVar2,s_SM2000US__VM_8c13c040,ar5,ar6);
            ar6_00 = ar5;
            ar7_00 = ar6;
            if (iVar1 == 1) {
              uVar3 = 0;
              ar6_00 = ar5;
              ar7_00 = ar6;
            }
          }
          else {
            ar7_01 = 4;
            ar6_01 = &DAT_8c4365bc;
            FUN_8c016318(auStack_34,&DAT_8c43659c,&DAT_8c4365bc,4,in_stack_ffffff64);
            uVar2 = 0x60;
            FUN_8c015198(auStack_34,0x60,ar6_01,ar7_01,in_stack_ffffff64);
            FUN_8c016340(auStack_34,uVar2,ar6_01,ar7_01);
            ar6_00 = (undefined *)0x0;
            s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,3,0,ar4);
            ar7_00 = ar4;
          }
        }
      }
      else {
        iVar1 = FUN_8c0b6e04(ar4,s_SM2000US__VM_8c13c040,ar6_00,ar7_00);
        if (iVar1 == 0) {
          iVar1 = FUN_8c01b0a8(uVar2,ar4,ar7,in_stack_00000000);
          ar6_00 = ar7;
          ar7_00 = in_stack_00000000;
          if (iVar1 == 1) {
            uVar3 = 0;
          }
        }
        else {
          iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_USR_8c13c026,ar6_00,ar7_00);
          if (iVar1 == 0) {
            iVar1 = FUN_8c01ae98(uVar2,ar4,ar5,ar6);
            ar6_00 = ar5;
            ar7_00 = ar6;
            if (iVar1 == 1) {
              uVar3 = 0;
              ar6_00 = ar5;
              ar7_00 = ar6;
            }
          }
          else {
            iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_INC_8c13c033,ar6_00,ar7_00);
            if ((iVar1 == 0) &&
               (iVar1 = FUN_8c01b47c(uVar2,s_SM2000US__VM_8c13c040,ar5,ar6), ar6_00 = ar5,
               ar7_00 = ar6, iVar1 == 1)) {
              uVar3 = 0;
              ar6_00 = ar5;
              ar7_00 = ar6;
            }
          }
        }
      }
      break;
    case 1:
      ar7_00 = &DAT_8c13c025;
      ar6_00 = (undefined *)0x0;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,1,0,&DAT_8c13c025);
      break;
    case 3:
      ar6_00 = (undefined *)get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7_00);
      ar7_00 = &DAT_8c13c025;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,2,ar6_00,&DAT_8c13c025);
      break;
    case 4:
      ar6_00 = (undefined *)get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7_00);
      ar7_00 = &DAT_8c13c025;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,4,ar6_00,&DAT_8c13c025);
    }
  }
  free_if_nonnull_wrap_0151a0(auStack_34,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}



/* FUN_8c0b726c @ 8c0b726c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c0b726c(undefined4 ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7,undefined4 s0,int s4)

{
  undefined4 ar4_00;
  int iVar1;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar2;
  undefined1 auStack_34 [24];
  
  uVar2 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  ar4_00 = (*(code *)PTR_FUN_8c0b7434)(DAT_8c0b7430,ar5,ar6,ar7);
  if (s4 == 1) {
    iVar1 = (*(code *)PTR_FUN_8c0b743c)
                      (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x5c,ar6_00,ar7_00);
    if (iVar1 == 0) {
      ar6_00 = auStack_34;
      iVar1 = (*(code *)PTR_FUN_8c0b7440)
                        (ar4_00,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x5c,ar6_00,ar7_00);
      if (iVar1 == 1) {
        iVar1 = (*(code *)PTR_FUN_8c0b7444)(ar4_00,ar4,ar7,s0);
        if (iVar1 != 1) {
          return 1;
        }
        return 0;
      }
    }
    iVar1 = (*(code *)PTR_FUN_8c0b743c)
                      (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x42,ar6_00,ar7_00);
    if ((iVar1 == 0) &&
       (iVar1 = (*(code *)PTR_FUN_8c0b7448)
                          (ar4_00,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x42,ar6_00,ar7_00),
       iVar1 == 1)) {
      iVar1 = (*(code *)PTR_FUN_8c0b744c)(ar4_00,ar4,ar5,ar6);
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c0b743c)
                        (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x4f,ar6_00,ar7_00);
      if ((iVar1 == 0) &&
         ((iVar1 = (*(code *)PTR_FUN_8c0b7440)
                             (ar4_00,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x5c,auStack_34,
                              ar7_00), iVar1 == 1 &&
          (iVar1 = (*(code *)PTR_FUN_8c0b7450)
                             (ar4_00,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x5c,ar5,ar6),
          iVar1 == 1)))) {
        uVar2 = 0;
      }
    }
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0b743c)
                      (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x5c,ar6_00,ar7_00);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_FUN_8c0b7444)(ar4_00,ar4,ar7,s0);
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c0b743c)
                        (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x42,ar6_00,ar7_00);
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_FUN_8c0b744c)(ar4_00,ar4,ar5,ar6);
        if (iVar1 == 1) {
          uVar2 = 0;
        }
      }
      else {
        iVar1 = (*(code *)PTR_FUN_8c0b743c)
                          (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x4f,ar6_00,ar7_00);
        if ((iVar1 == 0) &&
           (iVar1 = (*(code *)PTR_FUN_8c0b7450)
                              (ar4_00,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7438 + 0x5c,ar5,ar6),
           iVar1 == 1)) {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}



/* FUN_8c0b7454 @ 8c0b7454 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b7454(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *ar6_00;
  undefined *ar7_00;
  undefined4 uVar4;
  undefined1 auStack_30 [24];
  
  uVar2 = ar5;
  uVar3 = ar6;
  iVar1 = get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7);
  uVar4 = 1;
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      ar7_00 = &DAT_8c13c025;
      uVar3 = 0;
      uVar2 = 0xb;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,0xb,0,&DAT_8c13c025);
      uVar2 = FUN_8c01f520(0x8c3dd7dc,uVar2,uVar3,ar7_00);
      iVar1 = FUN_8c01bba0(uVar2,ar4,uVar3,ar7_00);
      if (iVar1 == 1) {
        iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_USR_8c13c026,uVar3,ar7_00);
        if ((iVar1 == 0) && (iVar1 = FUN_8c01b5f8(uVar2,ar4,ar5,ar6), iVar1 == 1)) {
          uVar4 = 0;
        }
      }
      else {
        ar6_00 = auStack_30;
        iVar1 = FUN_8c01bc2c(uVar2,s_SM2000US__VM_8c13c040,ar6_00,ar7_00);
        if (iVar1 == 1) {
          iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_INC_8c13c033,ar6_00,ar7_00);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_8c01b7b0(uVar2,s_SM2000US__VM_8c13c040,ar5,ar6), iVar1 == 1)) {
            uVar4 = 0;
          }
        }
        else {
          s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,3,0,ar4);
        }
      }
      break;
    case 1:
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,1,0,&DAT_8c13c025);
      break;
    case 3:
      uVar2 = get_field_a524_01f514(0x8c3dd7dc,uVar2,uVar3,ar7);
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,2,uVar2,&DAT_8c13c025);
      break;
    case 4:
      uVar2 = get_field_a524_01f514(0x8c3dd7dc,uVar2,uVar3,ar7);
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,4,uVar2,&DAT_8c13c025);
    }
  }
  return uVar4;
}



/* FUN_8c0b7628 @ 8c0b7628 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b7628(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined4 ar6_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  ar6_00 = ar6;
  ar4_00 = (*(code *)PTR_FUN_8c0b76c4)(DAT_8c0b76c0,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c0b76cc)
                    (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b76c8 + 0x42,ar6_00,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c0b76d0)(ar4_00,ar4,ar5,ar6);
    if (iVar1 == 1) {
      uVar2 = 0;
    }
  }
  else {
    iVar1 = (*(code *)PTR_FUN_8c0b76cc)
                      (ar4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b76c8 + 0x4f,ar6_00,ar7);
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_FUN_8c0b76d4)
                        (ar4_00,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b76c8 + 0x5c,ar5,ar6);
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}



/* s_SEAMANDC_USR_0b76dc @ 8c0b76d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint s_SEAMANDC_USR_0b76dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 auStack_20 [24];
  
  ar4_00 = (*(code *)PTR_FUN_8c0b7790)(DAT_8c0b778c,ar5,ar6,ar7);
  uVar3 = 0;
  puVar2 = auStack_20;
  iVar1 = (*(code *)PTR_FUN_8c0b7798)
                    (ar4_00,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7794 + 0x5c,puVar2,ar7);
  if (iVar1 == 5) {
    uVar3 = 4;
  }
  iVar1 = (*(code *)PTR_FUN_8c0b779c)
                    (ar4_00,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7794 + 0x69,puVar2,ar7);
  if (iVar1 == 1) {
    uVar3 = uVar3 | 8;
  }
  puVar2 = auStack_20;
  iVar1 = (*(code *)PTR_FUN_8c0b7798)
                    (ar4_00,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7794 + 0x76,puVar2,ar7);
  if (iVar1 == 1) {
    uVar3 = uVar3 | 0x10;
  }
  iVar1 = (*(code *)PTR_FUN_8c0b779c)
                    (ar4_00,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7794 + 0x42,puVar2,ar7);
  if (iVar1 == 0) {
    uVar3 = uVar3 | 1;
  }
  iVar1 = (*(code *)PTR_FUN_8c0b7798)
                    (ar4_00,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7794 + 0x5c,auStack_20,ar7);
  if (iVar1 == 4) {
    uVar3 = uVar3 | 2;
  }
  return uVar3;
}



/* FUN_8c0b77a0 @ 8c0b77a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0b77a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  int iStack_c;
  int aiStack_8 [2];
  
  aiStack_8[0] = 0;
  iStack_c = 0;
  ar6_00 = DAT_8c0b77f0;
  (*(code *)PTR_FUN_8c0b77fc)
            (PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b77f8 + 0x42,DAT_8c0b77f4,DAT_8c0b77f0,ar7);
  (*(code *)PTR_FUN_8c0b7800)(ar4,aiStack_8,ar6_00,ar7);
  (*(code *)PTR_FUN_8c0b7800)(DAT_8c0b77f4 + 0x1e,&iStack_c,ar6_00,ar7);
  return (uint)(aiStack_8[0] == iStack_c);
}



/* FUN_8c0b7804 @ 8c0b7804 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b7804(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_10;
  int aiStack_c [2];
  
  aiStack_c[0] = 0;
  iStack_10 = 0;
  uVar2 = DAT_8c0b7868;
  iVar1 = (*(code *)PTR_FUN_8c0b7874)
                    (PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7870 + 0x42,DAT_8c0b786c,DAT_8c0b7868,ar7)
  ;
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    (*(code *)PTR_FUN_8c0b7878)(ar4,aiStack_c,uVar2,ar7);
    (*(code *)PTR_FUN_8c0b7878)(DAT_8c0b786c + 0x1e,&iStack_10,uVar2,ar7);
    if (aiStack_c[0] == iStack_10) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* FUN_8c0b787c @ 8c0b787c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b78da) */
/* WARNING: Removing unreachable block (ram,0x8c0b78bc) */
/* WARNING: Removing unreachable block (ram,0x8c0b7886) */
/* WARNING: Removing unreachable block (ram,0x8c0b787e) */
/* WARNING: Removing unreachable block (ram,0x8c0b787c) */
/* WARNING: Removing unreachable block (ram,0x8c0b7884) */
/* WARNING: Removing unreachable block (ram,0x8c0b789c) */
/* WARNING: Removing unreachable block (ram,0x8c0b78ba) */
/* WARNING: Removing unreachable block (ram,0x8c0b78dc) */
/* WARNING: Removing unreachable block (ram,0x8c0b789a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b787c(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 & 1) == 1) {
    s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,3,0,s_SM2000US_USR_8c13c026);
  }
  else if ((ar4 & 2) == 2) {
    s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,3,0,s_SM2000US_INC_8c13c033);
  }
  else {
    if ((ar4 & 4) != 4) {
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,0xb,0,&DAT_8c13c025);
      return 1;
    }
    s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,3,0,s_SM2000US_INC_8c13c033);
  }
  return 0;
}



/* FUN_8c0b7920 @ 8c0b7920 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0b7978) */
/* WARNING: Removing unreachable block (ram,0x8c0b792a) */
/* WARNING: Removing unreachable block (ram,0x8c0b7920) */
/* WARNING: Removing unreachable block (ram,0x8c0b7922) */
/* WARNING: Removing unreachable block (ram,0x8c0b792c) */
/* WARNING: Removing unreachable block (ram,0x8c0b797a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b7920(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 != 2) {
    _DAT_8c4365ec = ar4;
  }
  if (ar4 == 0) {
    s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,0xb,0,&DAT_8c13c025);
    return 1;
  }
  if (_DAT_8c4365ec == 1) {
    s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,1,0,&DAT_8c13c025);
    return 0;
  }
  if (_DAT_8c4365ec != 3) {
    if (_DAT_8c4365ec == 4) {
      uVar1 = get_field_a524_01f514(0x8c3dd7dc,ar5,ar6,ar7);
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,4,uVar1,&DAT_8c13c025);
      return 0;
    }
    if (_DAT_8c4365ec != 5) {
      return 0;
    }
  }
  uVar1 = get_field_a524_01f514(0x8c3dd7dc,ar5,ar6,ar7);
  s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,2,uVar1,&DAT_8c13c025);
  return 0;
}



/* FUN_8c0b79f0 @ 8c0b79f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b79f0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_ffffffe8;
  
  FUN_8c0162f8(&stack0xffffffe8,ar5,ar6,ar7);
  ar7_00 = 4;
  ar6_00 = &DAT_8c4365bc;
  FUN_8c016318(&stack0xffffffe8,&DAT_8c43659c,&DAT_8c4365bc,4,in_stack_ffffffe8);
  uVar1 = 0x60;
  FUN_8c015198(&stack0xffffffe8,0x60,ar6_00,ar7_00,in_stack_ffffffe8);
  FUN_8c016340(&stack0xffffffe8,uVar1,ar6_00,ar7_00);
  uVar1 = free_if_nonnull_wrap_0151a0(&stack0xffffffe8,0xffffffff,ar6_00,ar7_00);
  return uVar1;
}



/* FUN_8c0b7a54 @ 8c0b7a54 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b7a54(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0b7aac)(ar4 + DAT_8c0b7aa8,ar5,ar6,ar7);
  *(undefined1 *)(DAT_8c0b7ab0 + ar4) = *DAT_8c0b7ab4;
  *(undefined2 *)(DAT_8c0b7ab8 + ar4) = 0;
  *(undefined2 *)(DAT_8c0b7aa8 + ar4) = 0;
  *(undefined2 *)(DAT_8c0b7abc + ar4) = 0;
  *(undefined2 *)(DAT_8c0b7ac0 + ar4) = 0;
  *(undefined2 *)(DAT_8c0b7ac4 + ar4) = 0;
  *(undefined1 *)(DAT_8c0b7ac8 + ar4) = 0;
  (*(code *)PTR_FUN_8c0b7acc)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0b7ad0 @ 8c0b7ad0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b7ad0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_sh4_tmu_1f8b34_8c0b7e80)(0,ar5,ar6,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7e8c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7e88,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7e98,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7e94,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ea0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7e9c,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ea8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ea4,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7eb0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7eac,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7eb8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7eb4,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ec0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ebc,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ec8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ec4,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ed0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ecc,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ed8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ed4,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ee0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7edc,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ee8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ee4,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ef0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7eec,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7ef4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ec8,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7efc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7ef8,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f04,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f00,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f0c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f08,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f14,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f10,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f1c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f18,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f24,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f20,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f2c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f28,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f34,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f30,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f3c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f38,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f40,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f1c,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f48,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f44,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f50,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f4c,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f58,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f54,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f60,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f5c,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f68,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f64,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f70,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f6c,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f78,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f74,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f80,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f7c,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f88,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f84,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f8c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f70,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f94,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f90,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7f9c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7f98,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7fa4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7fa0,10,ar7);
  (*(code *)PTR_memmove_8c0b7e90)
            (ar4 + DAT_8c0b7fac,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7fa8,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8368,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b7e84 + DAT_8c0b7fb0,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8378,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8374,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8380,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b837c,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8388,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8384,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8390,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b838c,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8394,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8380,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b839c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8398,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83a0,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83ac,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83a8,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83b4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83b0,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83bc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83b8,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83c4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83c0,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83cc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83c8,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83d4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83d0,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83dc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83d8,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83e0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83d4,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83e8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83e4,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83f0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83ec,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b83f8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83f4,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8400,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b83fc,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8408,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8404,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8410,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b840c,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8418,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8414,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8420,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b841c,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8428,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8424,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b842c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8428,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8434,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8430,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b843c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8438,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8444,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8440,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b844c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8448,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8454,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8450,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b845c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8458,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8464,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8460,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b846c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8468,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8474,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8470,10,ar7);
  (*(code *)PTR_memmove_8c0b836c)
            (ar4 + DAT_8c0b8478,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b8478,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8830,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8370 + DAT_8c0b847c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8840,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b883c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8848,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8844,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8850,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b884c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8858,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8854,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8860,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b885c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8868,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8864,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8870,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b886c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8878,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8874,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8880,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b887c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b887c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8884,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b888c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8888,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8894,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8890,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b889c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8898,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88a0,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88ac,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88a8,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88b4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88b0,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88bc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88b8,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88c4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88c0,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88cc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88c8,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88c8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88d0,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88d8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88d4,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88e0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88dc,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88e8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88e4,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88f0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88ec,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b88f8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88f4,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8900,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b88fc,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8908,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8904,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8910,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b890c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8918,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8914,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8920,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b891c,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8914,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8924,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b892c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8928,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8934,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8930,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b893c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8938,10,ar7);
  (*(code *)PTR_memmove_8c0b8834)
            (ar4 + DAT_8c0b8944,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8940,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8cfc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8838 + DAT_8c0b8948,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d0c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d08,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d14,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d10,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d1c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d18,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d24,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d20,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d2c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d28,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d18,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d30,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d38,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d34,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d40,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d3c,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d48,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d44,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d50,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d4c,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d58,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d54,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d60,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d5c,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d68,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d64,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d70,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d6c,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d78,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d74,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d80,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d7c,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d64,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d84,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d8c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d88,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d94,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d90,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8d9c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8d98,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8da4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8da0,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8dac,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8da8,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8db4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8db0,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8dbc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8db8,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8dc4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8dc0,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8dcc,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8dc8,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8dd4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8dd0,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8db0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8dd8,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8de0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8ddc,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8de8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8de4,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8df0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8dec,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8df8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8df4,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8e00,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8dfc,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8e08,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8e04,10,ar7);
  (*(code *)PTR_memmove_8c0b8d00)
            (ar4 + DAT_8c0b8e10,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8e0c,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b913c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b8d04 + DAT_8c0b8e14,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b914c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9148,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9154,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9150,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b915c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9158,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9164,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9160,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b916c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9168,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9174,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9170,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b917c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9178,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9184,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9180,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b918c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9188,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9194,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9190,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b919c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9198,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91a4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91a0,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91ac,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91a8,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9178,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91b0,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91b8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91b4,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91c0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91bc,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91c8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91c4,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91d0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91cc,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91d8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91d4,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91e0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91dc,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91e8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91e4,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91f0,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91ec,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91f8,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91f4,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9200,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b91fc,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b91c4,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9204,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b920c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9208,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9214,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9210,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b921c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9218,10,ar7);
  (*(code *)PTR_memmove_8c0b9140)
            (ar4 + DAT_8c0b9224,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9220,10,ar7);
  uVar1 = (*(code *)PTR_memmove_8c0b9140)
                    (ar4 + DAT_8c0b922c,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b9144 + DAT_8c0b9228,10,
                     ar7);
  return uVar1;
}



/* FUN_8c0b9230 @ 8c0b9230 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b9230(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_sh4_tmu_1f8a64_8c0b9240)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0b9244 @ 8c0b9244 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b9244(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 ar5_00;
  
  uVar1 = (*(code *)PTR_sh4_tmu_1f8b88_8c0b933c)(ar4,ar5,ar6,ar7);
  ar5_00 = 0;
  uVar2 = (*(code *)PTR_FUN_8c0b9340)(uVar1,0,ar6,ar7);
  if (DAT_8c0b9344 <= uVar2) {
    *(int *)(DAT_8c0b9348 + ar4) = *(int *)(DAT_8c0b9348 + ar4) + 1;
    *(short *)(DAT_8c0b934c + ar4) = *(short *)(DAT_8c0b934c + ar4) + 1;
    (*(code *)PTR_sh4_tmu_1f8b6e_8c0b9350)(0,ar5_00,ar6,ar7);
    *(uint *)(DAT_8c0b9354 + ar4) = *(int *)(DAT_8c0b9354 + ar4) + uVar2 + DAT_8c0b9358;
    if (DAT_8c0b9344 <= *(uint *)(DAT_8c0b9354 + ar4)) {
      *(int *)(DAT_8c0b9348 + ar4) = *(int *)(DAT_8c0b9348 + ar4) + 1;
      *(short *)(DAT_8c0b934c + ar4) = *(short *)(DAT_8c0b934c + ar4) + 1;
      *(undefined4 *)(DAT_8c0b9354 + ar4) = 0;
    }
  }
  if (*(ushort *)(DAT_8c0b934c + ar4) < DAT_8c0b935c) {
    uVar1 = 0;
  }
  else {
    *(short *)(DAT_8c0b9360 + ar4) = *(short *)(DAT_8c0b9360 + ar4) + 1;
    if (DAT_8c0b9364 <= *(ushort *)(DAT_8c0b9360 + ar4)) {
      *(short *)(DAT_8c0b9360 + ar4) = (short)DAT_8c0b9364;
    }
    *(undefined2 *)(DAT_8c0b934c + ar4) = 0;
    (*(code *)PTR_FUN_8c0b9368)(ar4,ar5_00,ar6,ar7);
    uVar1 = 1;
  }
  return uVar1;
}



/* FUN_8c0b936c @ 8c0b936c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b936c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(DAT_8c0b93a4 + (int)ar4) = *DAT_8c0b93a8;
  *(undefined2 *)(DAT_8c0b93ac + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0b93b0 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0b93b4 + (int)ar4) = 0;
  *ar4 = 0;
  *(undefined4 *)(DAT_8c0b93b8 + (int)ar4) = 0;
  iVar1 = DAT_8c0b93bc;
  *(undefined4 *)(DAT_8c0b93bc + (int)ar4) = 0;
  return iVar1;
}



/* FUN_8c0b93c0 @ 8c0b93c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b93c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iStack_2c;
  
  iVar3 = 0;
  iVar4 = 0;
  bVar5 = 0;
  iVar2 = 4;
  for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
    iVar3 = (uint)*(byte *)(ar4 + iVar6 + 4) + iVar3;
  }
  if (iVar3 < 5) {
    iVar2 = 3;
  }
  else {
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
      if (bVar5 < *(byte *)(ar4 + iVar3 + 4)) {
        bVar5 = *(byte *)(ar4 + iVar3 + 4);
        iVar4 = iVar3;
      }
    }
    iVar6 = (*(code *)PTR_FUN_8c0b9510)
                      (ar4,ar5,ar6,ar7,*(undefined4 *)(ar4 + 0x16),*(undefined4 *)(ar4 + 0x1a));
    iVar1 = (*(code *)PTR_FUN_8c0b9510)
                      (ar4,ar5,ar6,ar7,*(undefined4 *)(ar4 + 0x20),*(undefined4 *)(ar4 + 0x24));
    iVar3 = iVar6;
    if (((iVar6 != iVar1) &&
        (((iVar3 = iVar4, iVar6 != iVar4 || (iVar1 != iVar4)) &&
         (iVar2 = 3, *(int *)(DAT_8c0b9514 + ar4) != iVar6)))) &&
       (*(int *)(DAT_8c0b9514 + ar4) != iVar1)) {
      iVar2 = 0;
    }
    iStack_2c = (*(code *)PTR_FUN_8c0b9518)(iVar3 - *(int *)(DAT_8c0b9514 + ar4),ar5,ar6,ar7);
    if (4 < iStack_2c) {
      iStack_2c = 8 - iStack_2c;
    }
    if (iVar2 == 4) {
      if (iStack_2c == 0) {
        iVar2 = 1;
      }
      else if (iStack_2c == 1) {
        iVar2 = 3;
      }
      else {
        iVar2 = 2;
      }
    }
  }
  return iVar2;
}



/* FUN_8c0b951c @ 8c0b951c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b951c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [16];
  
  uVar2 = 10;
  (*(code *)PTR_memmove_8c0b9594)
            (auStack_18,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b958c + DAT_8c0b9590,10,ar7);
  iVar1 = (*(code *)PTR_FUN_8c0b9598)(ar4,auStack_18,uVar2,ar7);
  if (iVar1 < 1) {
    uVar2 = 10;
    (*(code *)PTR_memmove_8c0b9594)
              (auStack_18,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0b958c + DAT_8c0b959c,10,ar7);
    iVar1 = (*(code *)PTR_FUN_8c0b9598)(ar4,auStack_18,uVar2,ar7);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* FUN_8c0b95a0 @ 8c0b95a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0b95a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *ar5_00;
  undefined4 uVar5;
  undefined4 ar7_00;
  undefined1 *ain0;
  undefined1 *puStack_120;
  int iStack_11c;
  undefined1 auStack_118 [2];
  byte bStack_116;
  undefined1 auStack_10c [2];
  undefined1 auStack_10a [106];
  int iStack_a0;
  undefined1 auStack_1c [20];
  
  uVar5 = ar5;
  iStack_11c = FUN_8c10287c(0x10000,ar5,ar6,ar7);
  if (iStack_11c == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined1 *)FUN_8c10287c(0x3c,uVar5,ar6,ar7);
    puStack_120 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      FUN_8c10289c(&iStack_11c,uVar5,ar6,ar7);
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      ar7_00 = 0;
      uVar5 = 0;
      iVar4 = iStack_11c;
      ain0 = puVar2;
      iVar3 = FUN_8c1f6f20(iStack_11c,puVar2,0,0);
      if (iVar3 != 0) {
        memset(auStack_10c,0,0xf0,ar7_00);
        uVar5 = 10;
        memmove(auStack_1c,ar5,10,ar7_00);
        FUN_8c1f7b64(auStack_1c,auStack_10c,uVar5,ar7_00);
        uVar5 = 10;
        ar5_00 = auStack_10a;
        puVar2 = auStack_1c;
        iVar4 = FUN_8c013ec0(puVar2,ar5_00,10,ar7_00);
        if (iVar4 != 0) {
          FUN_8c1f710c(puVar2,ar5_00,uVar5,ar7_00,ain0);
          FUN_8c10289c(&iStack_11c,ar5_00,uVar5,ar7_00);
          FUN_8c10289c(&puStack_120,ar5_00,uVar5,ar7_00);
          return 0;
        }
        puVar2 = auStack_118;
        FUN_8c1f8300(iStack_a0,puVar2,uVar5,ar7_00);
        uVar1 = (uint)bStack_116;
        iVar4 = iStack_a0;
      }
      FUN_8c1f710c(iVar4,puVar2,uVar5,ar7_00,ain0);
      FUN_8c10289c(&iStack_11c,puVar2,uVar5,ar7_00);
      FUN_8c10289c(&puStack_120,puVar2,uVar5,ar7_00);
    }
  }
  return uVar1;
}



/* FUN_8c0b96e4 @ 8c0b96e4 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c0b96e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *ar4_00;
  int iVar2;
  int iVar3;
  char *ar4_01;
  uint *ar5_00;
  char *ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  ushort uVar4;
  uint unaff_r12;
  uint uStack_128;
  uint uStack_124;
  char acStack_120 [2];
  char acStack_11e [102];
  uint uStack_b8;
  uint uStack_a8;
  ushort uStack_a4;
  char acStack_30 [24];
  
  FUN_8c1f8176(acStack_30 + 10,ar5,ar6,ar7);
  FUN_8c1f826c(acStack_30 + 10,&uStack_124,ar6,ar7);
  ar5_00 = &uStack_128;
  FUN_8c1f826c(ar5,ar5_00,ar6,ar7);
  if (uStack_128 < uStack_124) {
    _DAT_8c4365f0 = (char *)malloc_thunk(0x10000,ar5_00,ar6,ar7);
    if (_DAT_8c4365f0 == (char *)0x0) {
      iVar1 = 0xb6;
    }
    else {
      _DAT_8c4365f4 = (char *)malloc_thunk(0x3c,ar5_00,ar6,ar7);
      if (_DAT_8c4365f4 == (char *)0x0) {
        FUN_8c1fb57c(_DAT_8c4365f0,ar5_00,ar6,ar7);
        iVar1 = 0xb6;
      }
      else {
        ar4_00 = (char *)malloc_thunk(0x44c,ar5_00,ar6,ar7);
        if (ar4_00 == (char *)0x0) {
          FUN_8c1fb57c(_DAT_8c4365f0,ar5_00,ar6,ar7);
          FUN_8c1fb57c(_DAT_8c4365f4,ar5_00,ar6,ar7);
          iVar1 = 0xb6;
        }
        else {
          iVar1 = 0xb6;
          ar7_00 = 0;
          ar6_00 = 0;
          ar4_01 = _DAT_8c4365f0;
          ar5_01 = _DAT_8c4365f4;
          iVar2 = FUN_8c1f6f20(_DAT_8c4365f0,_DAT_8c4365f4,0,0);
          if (iVar2 != 0) {
            for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
              acStack_30[iVar2] = ' ';
            }
            uVar4 = 0;
            ar4_01 = ar4_00;
            iVar2 = FUN_8c1f7c40(ar4_00,ar5_01,ar6_00,ar7_00);
            if (iVar2 != 0) {
              for (iVar2 = 0; iVar2 < 100; iVar2 = iVar2 + 1) {
                if (ar4_00[iVar2 * 0xb] != -1) {
                  ar5_01 = acStack_120;
                  ar4_01 = ar4_00 + iVar2 * 0xb;
                  iVar3 = FUN_8c1f7b64(ar4_01,ar5_01,ar6_00,ar7_00);
                  if (iVar3 != 0) {
                    ar6_00 = 10;
                    ar5_01 = acStack_11e;
                    ar4_01 = s_T39401M_8c13c830;
                    iVar3 = FUN_8c013ec0(s_T39401M_8c13c830,ar5_01,10,ar7_00);
                    if (iVar3 != 0) {
                      ar6_00 = 10;
                      ar5_01 = acStack_11e;
                      ar4_01 = s_T30003M_8c13c59a;
                      iVar3 = FUN_8c013ec0(s_T30003M_8c13c59a,ar5_01,10,ar7_00);
                      if (iVar3 != 0) {
                        ar6_00 = 10;
                        ar5_01 = acStack_11e;
                        ar4_01 = s_T30004M_8c13c5a5;
                        iVar3 = FUN_8c013ec0(s_T30004M_8c13c5a5,ar5_01,10,ar7_00);
                        if (iVar3 != 0) {
                          ar6_00 = 10;
                          ar5_01 = acStack_11e;
                          ar4_01 = s_T30005M_8c13c5b0;
                          iVar3 = FUN_8c013ec0(s_T30005M_8c13c5b0,ar5_01,10,ar7_00);
                          if (iVar3 != 0) {
                            ar6_00 = 10;
                            ar5_01 = acStack_11e;
                            ar4_01 = s_T30006M_8c13c5bb;
                            iVar3 = FUN_8c013ec0(s_T30006M_8c13c5bb,ar5_01,10,ar7_00);
                            if ((((iVar3 != 0) && (uStack_a8 < uStack_124)) &&
                                (uStack_128 < uStack_a8)) && (uVar4 < uStack_a4)) {
                              ar6_00 = 10;
                              ar5_01 = acStack_11e;
                              ar4_01 = acStack_30;
                              memmove(ar4_01,ar5_01,10,ar7_00);
                              unaff_r12 = uStack_b8;
                              uVar4 = uStack_a4;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              for (iVar2 = 0; iVar2 < 0xb2; iVar2 = iVar2 + 1) {
                ar6_00 = 10;
                ar5_01 = acStack_30;
                ar4_01 = (char *)(iVar2 * 10 + ar4 + 0xcc);
                iVar3 = FUN_8c013ec0(ar4_01,ar5_01,10,ar7_00);
                if (iVar3 == 0) {
                  iVar1 = iVar2;
                }
              }
              if (iVar1 == 0xb6) {
                if ((unaff_r12 & 0x400) != 0) {
                  iVar1 = 0xb3;
                }
                if ((unaff_r12 & 0x200) != 0) {
                  iVar1 = 0xb4;
                }
                if ((unaff_r12 & 0x100) != 0) {
                  iVar1 = 0xb5;
                }
                if ((unaff_r12 & 0x80) != 0) {
                  iVar1 = 0xb6;
                }
                if ((unaff_r12 & 0x40) != 0) {
                  iVar1 = 0xb7;
                }
                if ((unaff_r12 & 0x20) != 0) {
                  iVar1 = 0xb8;
                }
                if ((unaff_r12 & 0x10) != 0) {
                  iVar1 = 0xb9;
                }
                if ((unaff_r12 & 8) != 0) {
                  iVar1 = 0xba;
                }
                if ((unaff_r12 & 4) != 0) {
                  iVar1 = 0xbb;
                }
                if ((unaff_r12 & 2) != 0) {
                  iVar1 = 0xbc;
                }
                if ((unaff_r12 & 1) != 0) {
                  iVar1 = 0xbd;
                }
              }
            }
          }
          FUN_8c1f710c(ar4_01,ar5_01,ar6_00,ar7_00,ar5);
          FUN_8c1fb57c(_DAT_8c4365f0,ar5_01,ar6_00,ar7_00);
          FUN_8c1fb57c(_DAT_8c4365f4,ar5_01,ar6_00,ar7_00);
          FUN_8c1fb57c(ar4_00,ar5_01,ar6_00,ar7_00);
        }
      }
    }
  }
  else {
    iVar1 = 0xb6;
  }
  return iVar1;
}



/* FUN_8c0b9afc @ 8c0b9afc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c0b9afc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  if (0x17 < (byte)s4) {
    return 8;
  }
                    /* WARNING: Switch is manually overridden */
  switch((byte)s4) {
  case 0:
  case 1:
    return 6;
  default:
    return 7;
  case 5:
  case 6:
  case 7:
    return 0;
  case 8:
  case 9:
  case 10:
    return 1;
  case 0xb:
  case 0xc:
  case 0xd:
    return 2;
  case 0xe:
  case 0xf:
  case 0x10:
    return 3;
  case 0x11:
  case 0x12:
  case 0x13:
    return 4;
  case 0x14:
    return 5;
  }
}



/* FUN_8c0b9bb0 @ 8c0b9bb0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0b9bb0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_1c [16];
  
  (*(code *)PTR_FUN_8c0b9cfc)(ar4,auStack_1c,ar6,ar7);
  *(undefined2 *)(ar4 + 0x20) = *(undefined2 *)(ar4 + 0x16);
  *(undefined2 *)(ar4 + 0x22) = *(undefined2 *)(ar4 + 0x18);
  *(undefined2 *)(ar4 + 0x24) = *(undefined2 *)(ar4 + 0x1a);
  *(undefined2 *)(ar4 + 0x26) = *(undefined2 *)(ar4 + 0x1c);
  *(undefined2 *)(ar4 + 0x28) = *(undefined2 *)(ar4 + 0x1e);
  *(undefined2 *)(ar4 + 0x16) = *(undefined2 *)(ar4 + 0xc);
  *(undefined2 *)(ar4 + 0x18) = *(undefined2 *)(ar4 + 0xe);
  *(undefined2 *)(ar4 + 0x1a) = *(undefined2 *)(ar4 + 0x10);
  *(undefined2 *)(ar4 + 0x1c) = *(undefined2 *)(ar4 + 0x12);
  *(undefined2 *)(ar4 + 0x1e) = *(undefined2 *)(ar4 + 0x14);
  iVar3 = ar4 + 0xc;
  (*(code *)PTR_FUN_8c0b9cfc)(ar4,iVar3,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0b9d00)
                    (ar4,iVar3,ar6,ar7,*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(ar4 + 0x10));
  *(undefined4 *)(DAT_8c0b9d04 + ar4) = uVar1;
  iVar3 = ar4 + *(int *)(DAT_8c0b9d04 + ar4);
  *(char *)(iVar3 + 4) = *(char *)(iVar3 + 4) + '\x01';
  uVar1 = (*(code *)PTR_FUN_8c0b9d0c)(ar4,auStack_1c,DAT_8c0b9d08 + 0x14,ar7);
  *(undefined4 *)(DAT_8c0b9d10 + ar4) = uVar1;
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar3 = (uint)*(byte *)(ar4 + iVar4 + 4) + iVar3;
  }
  if (((*(short *)(ar4 + 0xc) == *(short *)(ar4 + 0x16)) &&
      (*(char *)(ar4 + 0xe) == *(char *)(ar4 + 0x18))) &&
     (*(char *)(ar4 + 0xf) == *(char *)(ar4 + 0x19))) {
    *(char *)(ar4 + 0x2c) = *(char *)(ar4 + 0x2c) + '\x01';
  }
  else {
    *(undefined1 *)(ar4 + 0x2c) = 1;
  }
  uVar2 = *(uint *)(DAT_8c0b9d10 + ar4);
  if (((uVar2 == 0) && (uVar2 = (uint)*(byte *)(ar4 + 0x2c), uVar2 == 1)) && (uVar2 = 1, iVar3 != 1)
     ) {
    uVar2 = 0x2c;
    *(undefined1 *)(ar4 + 0x2c) = 2;
  }
  return uVar2;
}



/* FUN_8c0b9d14 @ 8c0b9d14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b9d14(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0b9d2c)(ar5,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0b9d30 @ 8c0b9d30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b9d30(undefined4 ar4,ushort *ar5,ushort *ar6,undefined4 ar7)

{
  byte bVar1;
  int iVar2;
  ushort *ar6_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar3 = 0;
  ar6_00 = ar6;
  for (iVar7 = 0x79e; iVar7 < (int)(uint)*ar5; iVar7 = iVar7 + 1) {
    iVar2 = libgcc_divide_helper_01031c(iVar7,4,ar6_00,ar7);
    if (iVar2 == 0) {
      iVar5 = iVar5 + 0x16e;
    }
    else {
      iVar5 = iVar5 + 0x16d;
    }
  }
  bVar1 = (byte)ar5[1];
  if ((bVar1 < 0xd) && (1 < bVar1)) {
    iVar7 = iVar5;
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
    case 0xc:
      iVar5 = iVar5 + 0x1e;
    case 0xb:
      iVar5 = iVar5 + 0x1f;
    case 10:
      iVar5 = iVar5 + 0x1e;
    case 9:
      iVar5 = iVar5 + 0x1f;
    case 8:
      iVar5 = iVar5 + 0x1f;
    case 7:
      iVar5 = iVar5 + 0x1e;
    case 6:
      iVar5 = iVar5 + 0x1f;
    case 5:
      iVar5 = iVar5 + 0x1e;
    case 4:
      iVar7 = iVar5 + 0x1f;
    case 3:
      iVar5 = iVar7 + 0x1c;
      iVar2 = libgcc_divide_helper_01031c((uint)*ar5,4,ar6_00,ar7);
      if (iVar2 == 0) {
        iVar5 = iVar7 + 0x1d;
      }
    case 2:
      iVar5 = iVar5 + 0x1f;
    }
  }
  uVar6 = iVar5 + (uint)*(byte *)((int)ar5 + 3);
  for (iVar5 = 0x79e; iVar5 < (int)(uint)*ar6; iVar5 = iVar5 + 1) {
    iVar7 = libgcc_divide_helper_01031c(iVar5,4,ar6_00,ar7);
    if (iVar7 == 0) {
      iVar3 = iVar3 + 0x16e;
    }
    else {
      iVar3 = iVar3 + 0x16d;
    }
  }
  bVar1 = (byte)ar6[1];
  if ((bVar1 < 0xd) && (1 < bVar1)) {
    iVar5 = iVar3;
                    /* WARNING: Switch is manually overridden */
    switch(bVar1) {
    case 0xc:
      iVar3 = iVar3 + 0x1e;
    case 0xb:
      iVar3 = iVar3 + 0x1f;
    case 10:
      iVar3 = iVar3 + 0x1e;
    case 9:
      iVar3 = iVar3 + 0x1f;
    case 8:
      iVar3 = iVar3 + 0x1f;
    case 7:
      iVar3 = iVar3 + 0x1e;
    case 6:
      iVar3 = iVar3 + 0x1f;
    case 5:
      iVar3 = iVar3 + 0x1e;
    case 4:
      iVar5 = iVar3 + 0x1f;
    case 3:
      iVar3 = iVar5 + 0x1c;
      iVar7 = libgcc_divide_helper_01031c((uint)*ar6,4,ar6_00,ar7);
      if (iVar7 == 0) {
        iVar3 = iVar5 + 0x1d;
      }
    case 2:
      iVar3 = iVar3 + 0x1f;
    }
  }
  uVar4 = iVar3 + (uint)*(byte *)((int)ar6 + 3);
  if (uVar6 < uVar4) {
    iVar3 = 0xffff;
  }
  else {
    iVar3 = uVar6 - uVar4;
  }
  return iVar3;
}



/* FUN_8c0b9ed4 @ 8c0b9ed4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0b9ed4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(ar4 + ar5 + 0x44) == '\0') {
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      if (*(int *)(ar4 + iVar2 * 4 + 0x30) == ar5) {
        return 0;
      }
    }
    iVar2 = ar4 + *(int *)(ar4 + 0x40);
    *(char *)(iVar2 + 0x44) = *(char *)(iVar2 + 0x44) + '\x01';
    for (iVar2 = 4; 0 < iVar2; iVar2 = iVar2 + -1) {
      *(undefined4 *)(ar4 + iVar2 * 4 + 0x30) = *(undefined4 *)(ar4 + (iVar2 + -1) * 4 + 0x30);
    }
    *(int *)(ar4 + 0x30) = ar5;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c0b9f5c @ 8c0b9f5c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined1 * FUN_8c0b9f5c(undefined1 *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = *ar5;
  for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
    *(undefined4 *)(ar4 + iVar1 * 4 + 4) = *(undefined4 *)(ar5 + iVar1 * 4 + 4);
  }
  for (iVar1 = 0; iVar1 < 0x3e; iVar1 = iVar1 + 1) {
    ar4[iVar1 + 0x18] = ar5[iVar1 + 0x18];
  }
  return ar4;
}



/* FUN_8c0b9fb4 @ 8c0b9fb4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0b9fb4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint in_fr1;
  char cVar4;
  
  cVar4 = '\0';
  FUN_8c0243b0(ar4 + 0xb0,ar5,ar6,ar7);
  FUN_8c010120(ar4 + 0x1bc,Vec3_ctor_zero,Vec3_dtor,0x10,3);
  uVar3 = 0xf0;
  pcVar2 = FUN_8c0ba180;
  pcVar1 = FUN_8c0243b0;
  FUN_8c010120(ar4 + 0x1ec,FUN_8c0243b0,FUN_8c0ba180,0xf0,0x14);
  FUN_8c0e9910(ar4 + 0x14ac,pcVar1,pcVar2,uVar3);
  uVar3 = 0xf0;
  pcVar2 = FUN_8c0ba180;
  pcVar1 = FUN_8c0243b0;
  FUN_8c010120(ar4 + 0x14c4,FUN_8c0243b0,FUN_8c0ba180,0xf0,0x14);
  FUN_8c0e9910(ar4 + 0x2784,pcVar1,pcVar2,uVar3);
  uVar3 = 0xf0;
  pcVar2 = FUN_8c0ba180;
  pcVar1 = FUN_8c0243b0;
  FUN_8c010120(ar4 + 0x2794,FUN_8c0243b0,FUN_8c0ba180,0xf0,10);
  FUN_8c0fdc20(ar4 + 0x30f4,pcVar1,pcVar2,uVar3);
  FUN_8c01e4dc(ar4 + 0x4104,pcVar1,pcVar2,uVar3);
  FUN_8c014334(ar4,pcVar1,pcVar2,uVar3,s_SM2000US_USR_8c13c026);
  *(undefined2 *)(ar4 + 0x28) = 0;
  *(undefined1 *)(ar4 + 0xa8) = DAT_8c436548;
  *(undefined4 *)(ar4 + 0xac) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x1b0) = 0;
    *(undefined4 *)(ar4 + 0x1a0) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x1b0) = (ulonglong)in_fr1;
    *(ulonglong *)(ar4 + 0x1a0) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x1ac) = 0;
  *(undefined4 *)(ar4 + 0x1a8) = 0;
  *(undefined1 *)(ar4 + 0x1b4) = 0;
  *(undefined4 *)(ar4 + 0x1b8) = 0;
  *(undefined4 *)(ar4 + 0x14b8) = 0;
  *(undefined4 *)(ar4 + 0x14b4) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x14bc) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x14bc) = (ulonglong)in_fr1;
  }
  *(undefined1 *)(ar4 + 0x14c0) = 0;
  *(undefined4 *)(ar4 + 0x278c) = 0;
  *(undefined1 *)(ar4 + 0x2790) = 0;
  return ar4;
}



/* FUN_8c0ba180 @ 8c0ba180 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba180(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    FUN_8c02441c(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ba1c0 @ 8c0ba1c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba1c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0ba1f0)(ar4,PTR_FUN_8c0ba1ec,PTR_FUN_8c0ba1e8,DAT_8c0ba1e4,0xc);
  return ar4;
}



/* FUN_8c0ba1f4 @ 8c0ba1f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba1f4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    FUN_8c0ba234(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ba234 @ 8c0ba234 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba234(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_016ac4(ar4 + 0x10,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    object_dtor_delete(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* FUN_8c0ba284 @ 8c0ba284 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba284(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0ba2bc)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ba2c0)(ar4 + 0x24,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ba2c4)(ar4 + 0x48,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ba2c8)(ar4 + 0x58,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0ba2cc @ 8c0ba2cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba2cc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0ba308)(ar4,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c0ba30c + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba310 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba314 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba318 + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba31c + ar4) = 0;
  *(undefined4 *)(DAT_8c0ba320 + ar4) = 0;
  return ar4;
}



/* FUN_8c0ba324 @ 8c0ba324 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba324(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0ba34c(ar4,ar5,ar6,ar7,ar5);
  return ar4;
}



/* FUN_8c0ba34c @ 8c0ba34c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba34c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  ar4[1] = ar6;
  return in_r0;
}



/* FUN_8c0ba354 @ 8c0ba354 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba354(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_Vec3_ctor_zero_8c0ba374)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0ba378)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0ba37c @ 8c0ba37c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba37c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c0ba3a8)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c0ba3b4)
                    (DAT_8c0ba3b0,DAT_8c0ba3ac,DAT_8c0ba3ac,DAT_8c0ba3ac,DAT_8c0ba3ac);
  return uVar1;
}



/* FUN_8c0ba3b8 @ 8c0ba3b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba3b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  
  *(undefined4 *)(DAT_8c0ba3d0 + ar4) = ar5;
  *(undefined4 *)(DAT_8c0ba3d4 + ar4) = ar6;
  *(undefined4 *)(DAT_8c0ba3d8 + ar4) = ar7;
  iVar1 = DAT_8c0ba3dc;
  *(undefined4 *)(DAT_8c0ba3dc + ar4) = s0;
  return iVar1;
}



/* FUN_8c0ba3e0 @ 8c0ba3e0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ba42e) */
/* WARNING: Removing unreachable block (ram,0x8c0ba426) */
/* WARNING: Removing unreachable block (ram,0x8c0ba41a) */
/* WARNING: Removing unreachable block (ram,0x8c0ba414) */
/* WARNING: Removing unreachable block (ram,0x8c0ba410) */
/* WARNING: Removing unreachable block (ram,0x8c0ba416) */
/* WARNING: Removing unreachable block (ram,0x8c0ba424) */
/* WARNING: Removing unreachable block (ram,0x8c0ba42a) */
/* WARNING: Removing unreachable block (ram,0x8c0ba430) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0ba3e0(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 ar5_00;
  float fVar2;
  
  if (DAT_8c4365fc == '\0') {
    _DAT_8c4365f8 = (undefined4 *)0x1;
    DAT_8c4365fc = '\x01';
  }
  if (*(int *)(ar4 + 0x10) == 0) {
    fVar2 = *(float *)(ar4 + 4) - 0.7;
    *(float *)(ar4 + 4) = fVar2;
    puVar1 = &DAT_8c0ba480;
    if (fVar2 < 339.0) {
      puVar1 = (undefined4 *)FUN_8c0ba870(ar4,ar5,ar6,ar7);
    }
  }
  else {
    ar5_00 = 0x104;
    puVar1 = (undefined4 *)libgcc_divide_helper_0103d0(*ar5,0x104,ar6,ar7);
    if ((puVar1 == (undefined4 *)0x0) &&
       (puVar1 = _DAT_8c4365f8, _DAT_8c4365f8 == (undefined4 *)0x1)) {
      _DAT_8c4365f8 = (undefined4 *)0x0;
      puVar1 = (undefined4 *)FUN_8c0ba844(ar4,ar5_00,ar6,ar7);
    }
  }
  return puVar1;
}



/* FUN_8c0ba494 @ 8c0ba494 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba494(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_1c = *(undefined4 *)PTR_DAT_8c0ba5a0;
  uStack_18 = *(undefined4 *)(PTR_DAT_8c0ba5a0 + 4);
  uStack_14 = *(undefined4 *)(PTR_DAT_8c0ba5a0 + 8);
  uStack_10 = *(undefined4 *)(PTR_DAT_8c0ba5a0 + 0xc);
  uStack_2c = *(undefined4 *)PTR_DAT_8c0ba5a4;
  uStack_28 = *(undefined4 *)(PTR_DAT_8c0ba5a4 + 4);
  uStack_24 = *(undefined4 *)(PTR_DAT_8c0ba5a4 + 8);
  uStack_20 = *(undefined4 *)(PTR_DAT_8c0ba5a4 + 0xc);
  (*(code *)PTR_FUN_8c0ba5a8)(2,&uStack_1c,ar6,ar7);
  if (*(int *)(ar4 + 0x10) == 0) {
    if (*(int *)(ar4 + 0x14) == 1) {
      (*(code *)PTR_FUN_8c0ba5b4)(ar4,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0ba5b8)(ar4,ar5,ar6,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c0ba5b8)(ar4,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0ba5b4)(ar4,ar5,ar6,ar7);
    }
  }
  else if (*(int *)(ar4 + 0x14) == 1) {
    (*(code *)PTR_FUN_8c0ba5b4)(ar4,ar5,ar6,ar7);
  }
  else {
    (*(code *)PTR_FUN_8c0ba5b8)(ar4,ar5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c0ba5a8)(0,&uStack_2c,ar6,ar7);
  return uVar1;
}



/* FUN_8c0ba5bc @ 8c0ba5bc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ba5c8) */
/* WARNING: Removing unreachable block (ram,0x8c0ba5be) */
/* WARNING: Removing unreachable block (ram,0x8c0ba5c0) */
/* WARNING: Removing unreachable block (ram,0x8c0ba5ca) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba5bc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0x43200000;
  ar4[1] = 0x43a98000;
  ar4[4] = 1;
  ar4[5] = 1;
  return 1;
}



/* FUN_8c0ba5e0 @ 8c0ba5e0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ba5ee) */
/* WARNING: Removing unreachable block (ram,0x8c0ba5ea) */
/* WARNING: Removing unreachable block (ram,0x8c0ba5f2) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba5e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined8 in_dr4;
  undefined4 ain0;
  undefined1 auStack_3c [20];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  ain0 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uStack_28 = DAT_8c13bd2c;
  uStack_24 = DAT_8c13bd30;
  uStack_20 = DAT_8c13bd34;
  uStack_1c = DAT_8c13bd38;
  uStack_18 = DAT_8c13bd3c;
  uStack_14 = DAT_8c13bd40;
  uStack_10 = DAT_8c13bd44;
  uStack_c = DAT_8c13bd48;
  uVar1 = ar5;
  FUN_8c0162f8(auStack_3c,ar5,ar6,ar7);
  FUN_8c01538c(ar5,uVar1,ar6,ar7);
  FUN_8c014a94(ar5,0xf,ar6,ar7);
  ar7_00 = 4;
  ar6_00 = 0x8c43654c;
  FUN_8c016318(auStack_3c,&uStack_28,0x8c43654c,4,ain0);
  FUN_8c016324(auStack_3c,&DAT_8c43655c,ar6_00,ar7_00);
  uVar1 = 0x80000060;
  FUN_8c015198(auStack_3c,0x80000060,ar6_00,ar7_00,ain0);
  FUN_8c01636c(auStack_3c,uVar1,ar6_00,ar7_00);
  uVar1 = free_if_nonnull_wrap_0151a0(auStack_3c,0xffffffff,ar6_00,ar7_00);
  return uVar1;
}



/* FUN_8c0ba6bc @ 8c0ba6bc callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ba6da) */
/* WARNING: Removing unreachable block (ram,0x8c0ba6c6) */
/* WARNING: Removing unreachable block (ram,0x8c0ba6c2) */
/* WARNING: Removing unreachable block (ram,0x8c0ba6ca) */
/* WARNING: Removing unreachable block (ram,0x8c0ba6dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba6bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 auStack_24 [20];
  undefined1 auStack_10 [4];
  byte bStack_c;
  
  cVar2 = '\0';
  if (DAT_8c43660c == '\0') {
    _DAT_8c436608 = (undefined **)0x3f866666;
    _DAT_8c43660c = CONCAT31(_DAT_8c43660d,1);
  }
  FUN_8c1f8176(auStack_10,ar5,ar6,ar7);
  if (cVar2 != '\0') {
    _DAT_8c436608 = &PTR_DAT_8c13bd4c;
  }
  _DAT_8c436604 = 0x41980000;
  _DAT_8c436600 = 0x42480000;
  if (bStack_c < 0xc) {
    if (bStack_c == 0) {
      bStack_c = 0xc;
    }
    FUN_8c014334(auStack_24,ar5,ar6,ar7,s__s__2d__2d__02d_AM_8c13c86b);
  }
  else {
    if (bStack_c != 0xc) {
      bStack_c = bStack_c - 0xc;
    }
    FUN_8c014334(auStack_24,ar5,ar6,ar7,s__s__2d__2d__02d_PM_8c13c87e);
  }
  uVar1 = FUN_8c0c4370(&DAT_8c2b5628,auStack_24,0,0xe);
  return uVar1;
}



/* FUN_8c0ba844 @ 8c0ba844 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ba85e) */
/* WARNING: Removing unreachable block (ram,0x8c0ba850) */
/* WARNING: Removing unreachable block (ram,0x8c0ba852) */
/* WARNING: Removing unreachable block (ram,0x8c0ba860) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba844(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x14) == 0) {
    *(undefined4 *)(ar4 + 4) = 0x43ca0000;
  }
  else {
    *(undefined4 *)(ar4 + 4) = 0x43ca0000;
  }
  *(undefined4 *)(ar4 + 0x10) = 0;
  return 0;
}



/* FUN_8c0ba870 @ 8c0ba870 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0ba888) */
/* WARNING: Removing unreachable block (ram,0x8c0ba88a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0ba870(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x14) == 0) {
    *(undefined4 *)(ar4 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x14) = 0;
  }
  *(undefined4 *)(ar4 + 4) = 0x43a98000;
  *(undefined4 *)(ar4 + 0x10) = 1;
  return 1;
}



/* FUN_8c0ba898 @ 8c0ba898 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0ba898(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = PTR_DAT_8c0ba8a8;
  ar4[1] = 0;
  return ar4;
}



/* free_if_nonnull_wrap_0ba8ac @ 8c0ba8ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 *
free_if_nonnull_wrap_0ba8ac(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c12b36c, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}



/* FUN_8c0ba8e4 @ 8c0ba8e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0ba8e4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 extraout_fr1;
  char cVar2;
  
  cVar2 = '\0';
  FUN_8c0ba898(ar4,ar5,ar6,ar7);
  *ar4 = &DAT_8c12b350;
  FUN_8c015224(ar4 + 0x12,ar5,ar6,ar7);
  FUN_8c0162f8(ar4 + 0x14,ar5,ar6,ar7);
  FUN_8c0ba354(ar4 + 0x56,ar5,ar6,ar7);
  ar4[2] = 0;
  ar4[0xc] = 2;
  *(undefined2 *)(ar4 + 0xe) = 0xff;
  ar4[0xf] = 1;
  ar4[0x10] = 0;
  ar4[0x11] = 0;
  if (cVar2 == '\0') {
    ar4[0xd] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0xd) = CONCAT44(0x3f800000,extraout_fr1);
  }
  uVar1 = DAT_8c13bd80;
  ar4[3] = DAT_8c13bd7c;
  ar4[4] = uVar1;
  ar4[5] = PTR_s_GRAPHICS_0baac0_8c13bd84;
  uVar1 = DAT_8c13bd8c;
  ar4[6] = DAT_8c13bd88;
  ar4[7] = uVar1;
  ar4[8] = PTR_FUN_8c13bd90;
  uVar1 = DAT_8c13bd98;
  ar4[9] = DAT_8c13bd94;
  ar4[10] = uVar1;
  ar4[0xb] = PTR_FUN_8c13bd9c;
  ar4[0x53] = 0;
  ar4[0x54] = 1;
  ar4[0x55] = 0xffffff;
  return ar4;
}



/* FUN_8c0ba9c8 @ 8c0ba9c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0ba9c8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12b350_m0_0baa08 @ 8c0baa08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b350_m0_0baa08(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b350;
    FUN_8c0ba9c8(ar4 + 0x56,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0151a0(ar4 + 0x14,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x12,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    free_if_nonnull_wrap_0ba8ac(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12b350_m1_0baa84 @ 8c0baa84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12b350_m1_0baa84(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pure_virtual_stub_8c0baab4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* s_GRAPHICS_0baac0 @ 8c0baab8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_GRAPHICS_0baac0(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  undefined4 uVar3;
  char *ar5_01;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_fr1;
  char cVar6;
  
  cVar6 = '\0';
  *ar5 = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  uVar2 = 0;
  ar5_00 = ar5;
  FUN_8c257104(0,ar5,ar6,ar7);
  FUN_8c235eb4(uVar2,ar5_00,ar6,ar7);
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x34) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x34) = CONCAT44(0x3f800000,extraout_fr1);
  }
  for (iVar5 = 0; iVar5 < 0x12; iVar5 = iVar5 + 1) {
    *(undefined4 *)(iVar5 * 0xc + ar4 + 0x68) = 0;
  }
  uVar4 = 0x12;
  uVar2 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x13c,ar4 + 100,0x8c4312a8,0x12);
  iVar5 = ar4 + 0x13c;
  (**(code **)(*(int *)(ar4 + 0x48) + 8))((int *)(ar4 + 0x48),iVar5,uVar2,uVar4);
  uVar2 = get_field_4_0253e4(ar4 + 0x48,iVar5,uVar2,uVar4);
  iVar5 = FUN_8c02100c(0x8c3eb334,s_TITLE_pvm_8c13c891,s_GRAPHICS_8c13c89b,uVar2);
  if (iVar5 == 0) {
    uVar2 = 2;
    report_error_message(s_Failed_to_load_Title_pvm___8c13c8a4,s_CProlog__Ready_8c13c8bf,0,2);
  }
  *(undefined2 *)(ar4 + 0x38) = 0xff;
  *(undefined4 *)(ar4 + 0x3c) = 1;
  *(undefined4 *)(ar4 + 0x40) = 0;
  uVar4 = 0x4208;
  FUN_8c0b7454(s_SM2000US_USR_8c13c026,0x8c431a68,0x4208,uVar2);
  *(undefined2 *)((int)ar5 + 0x96) = _DAT_8c431a86;
  *(undefined2 *)(ar5 + 0x26) = _DAT_8c431a88;
  *(undefined2 *)((int)ar5 + 0x9a) = _DAT_8c431a8a;
  *(undefined2 *)(ar5 + 0x27) = _DAT_8c431a8c;
  *(undefined2 *)((int)ar5 + 0x9e) = _DAT_8c431a8e;
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    *(undefined1 *)((int)ar5 + iVar5 + 4) = *(undefined1 *)(iVar5 + -0x73bce56e);
  }
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    iVar1 = iVar5 * 10;
    *(undefined2 *)((int)ar5 + iVar5 * 10 + 0xc) = *(undefined2 *)(iVar1 + -0x73bce566);
    *(undefined2 *)((int)ar5 + iVar5 * 10 + 0xe) = *(undefined2 *)(iVar1 + -0x73bce564);
    *(undefined2 *)((int)ar5 + iVar5 * 10 + 0x10) = *(undefined2 *)(iVar1 + -0x73bce562);
    *(undefined2 *)((int)ar5 + iVar5 * 10 + 0x12) = *(undefined2 *)(iVar1 + -0x73bce560);
    *(undefined2 *)((int)ar5 + iVar5 * 10 + 0x14) = *(undefined2 *)(iVar1 + -0x73bce55e);
  }
  uVar3 = 0x8c431ab8;
  FUN_8c0b9f5c(ar5 + 0xb,0x8c431ab8,uVar4,uVar2);
  FUN_8c0b9bb0(ar5,uVar3,uVar4,uVar2);
  uVar3 = FUN_8c0b93c0(ar5,0,uVar4,uVar2);
  ar5[0x30] = uVar3;
  uVar4 = FUN_8c0b96e4(ar5,&DAT_8c431a7c,uVar4,uVar2);
  ar5[0x31] = uVar4;
  *(int *)(ar4 + 0x150) = *(int *)(ar4 + 0x150) + 1;
  uVar4 = 0x4208;
  iVar5 = FUN_8c0b7454(s_SM2000US_USR_8c13c026,0x8c431a68,0x4208,uVar2);
  if (iVar5 == 0) {
    uVar4 = 0x8c431a68;
    FUN_8c0cd3c8(ar5[0x1f6],ar5,0x8c431a68,uVar2);
  }
  uVar3 = pack_acquire_entry_handle(0x8c2b59d0,s_AMB_FOREST_8c13c8ce,uVar4,uVar2);
  *(undefined4 *)(ar4 + 0x144) = uVar3;
  ar5_01 = s_AMB_RAIN_8c13c8d9;
  uVar3 = pack_acquire_entry_handle(0x8c2b59d0,s_AMB_RAIN_8c13c8d9,uVar4,uVar2);
  *(undefined4 *)(ar4 + 0x148) = uVar3;
  FUN_8c0ba37c(ar4 + 0x158,ar5_01,uVar4,uVar2);
  *(undefined4 *)(ar4 + 8) = 1;
  return 1;
}



/* FUN_8c0bad68 @ 8c0bad68 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bad68(int ar4,undefined1 *ar5,undefined4 ar6,undefined *ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined1 *ar4_01;
  undefined4 ar4_02;
  undefined1 *ar5_00;
  int iVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffff78;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [24];
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  ar4_00 = get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7);
  iVar3 = 0;
  ar4_01 = auStack_40;
  FUN_8c0162f8(ar4_01,ar5_00,ar6,ar7);
  iVar2 = 1;
  if (DAT_8c43660e == '\0') {
    DAT_8c43660d = '\0';
    DAT_8c43660e = '\x01';
  }
  if (*(int *)(ar4 + 0x30) == 0) {
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44(0x3ca3d70a,*(undefined4 *)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x34);
      dVar5 = -3.3816247524205755e-250;
    }
    if (cVar7 == '\0') {
      fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x34) = fVar4;
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_xd0;
    }
    FUN_8c235e84(ar4_01,ar5_00,ar6,ar7);
    if (cVar8 == '\0') {
      fVar4 = *(float *)(ar4 + 0x34);
      fVar6 = 0.2;
    }
    else {
      fVar4 = 0.2;
      fVar6 = 2.79699e-42;
    }
    if (cVar7 != '\0' || fVar4 <= fVar6) {
      *(undefined4 *)(ar4 + 0x30) = 2;
    }
  }
  ar4_02 = *(undefined4 *)(ar5 + 0x7cc);
  iVar1 = FUN_8c10003c(ar4_02,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(ar4 + 0x40) = 1;
  }
  if (*(int *)(ar4 + 0x40) == 1) {
    ar4_02 = *(undefined4 *)(ar5 + 0x7cc);
    iVar1 = FUN_8c0ffff4(ar4_02,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6,ar7);
      ar5_00 = *(undefined1 **)(ar4 + 0x148);
      pack_release_entry_handle(0x8c2b59d0,ar5_00,ar6,ar7);
      ar4_02 = 0x8c35468c;
      iVar1 = FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6,ar7);
      if (iVar1 == 1) {
        ar4_02 = 0x8c35468c;
        FUN_8c0f8214(0x8c35468c,ar5_00,ar6,ar7);
      }
      *(undefined4 *)(ar5 + 0x7dc) = 4;
    }
  }
  if (*(int *)(ar4 + 0x30) == 2) {
    iVar2 = FUN_8c0b7920(ar4_00,ar5_00,ar6,ar7);
    iVar3 = s_SEAMANDC_USR_0b76dc(ar4_00,ar5_00,ar6,ar7);
    ar4_02 = ar4_00;
  }
  if (iVar2 == 1) {
    if (DAT_8c43660d == '\0') {
      if (iVar3 == 0) {
        if (*(int *)(ar4 + 0x30) != 1) {
          ar5_00 = ar5;
          FUN_8c0bcedc(ar4,ar5,ar6,ar7);
        }
        if ((*(int *)(ar4 + 0x14c) == 0) || (*(int *)(ar4 + 0x14c) == 1)) {
          ar5_00 = ar5;
          FUN_8c0ba3e0(ar4 + 0x158,ar5,ar6,ar7);
        }
        if (((*(int *)(ar4 + 0x14c) != 0) &&
            (iVar2 = FUN_8c0bb1bc(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7), iVar2 == 1)) &&
           (*(int *)(ar4 + 0x30) == 2)) {
          ar5_00 = auStack_4c;
          FUN_8c0bb158(ar5,ar5_00,ar6,ar7);
          iVar2 = FUN_8c0b77a0(auStack_4c,ar5_00,ar6,ar7);
          if (iVar2 == 0) {
            DAT_8c43660d = '\x01';
          }
          else {
            *(undefined4 *)(ar4 + 0x30) = 1;
            iVar2 = FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6,ar7);
            if (iVar2 == 1) {
              FUN_8c0f8214(0x8c35468c,ar5_00,ar6,ar7);
              strcpy(auStack_2c,&DAT_8c13c8e2,ar6,ar7,in_stack_ffffff78);
              strcpy(0x8c4362a0,auStack_2c,ar6,ar7,in_stack_ffffff78);
              ar5_00 = ar5;
              FUN_8c0bf1c8(ar4,ar5,ar6,ar7,in_stack_ffffff78);
            }
          }
        }
      }
      else {
        FUN_8c0b787c(iVar3,ar5_00,ar6,ar7);
        FUN_8c0b79f0(iVar3,ar5_00,ar6,ar7);
      }
    }
    else {
      FUN_8c0b79f0(ar4_02,ar5_00,ar6,ar7);
      ar7 = &DAT_8c13c025;
      ar6 = 0;
      ar5_00 = (undefined1 *)0x5;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,5,0,&DAT_8c13c025);
    }
  }
  else {
    FUN_8c0b79f0(ar4_02,ar5_00,ar6,ar7);
    DAT_8c43660d = '\0';
  }
  if (*(int *)(ar4 + 0x30) == 1) {
    *(int *)(ar4 + 0x154) = *(int *)(ar4 + 0x154) + 0x5000000;
    if (((*(uint *)(ar4 + 0x154) < 0x20000001) &&
        (iVar2 = ar4, iVar3 = FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6,ar7), iVar3 == 0)) &&
       ((iVar3 = FUN_8c0b6e04(&DAT_8c13c8e2,0x8c4362a0,ar6,ar7), iVar3 == 0 &&
        (*(int *)(ar4 + 0x14c) != 4)))) {
      strcpy(0x8c4362c0,&DAT_8c13c025,ar6,ar7,iVar2);
      ar6 = 0x8c436280;
      _DAT_8c43627c = FUN_8c0f8320(0x8c35468c,6,0x8c436280,ar7);
    }
    if (0xfeffffff < *(uint *)(ar4 + 0x154)) {
      *(undefined4 *)(ar4 + 8) = 2;
    }
  }
  s_AMB_FOREST_0bb1f2(ar4,ar5,ar6,ar7);
  free_if_nonnull_wrap_0151a0(auStack_40,0xffffffff,ar6,ar7);
  return 1;
}



/* FUN_8c0bb158 @ 8c0bb158 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c0bb158(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  *ar5 = *(undefined2 *)(DAT_8c0bb19c + ar4);
  *(undefined1 *)(ar5 + 1) = *(undefined1 *)(DAT_8c0bb1a0 + ar4);
  *(undefined1 *)((int)ar5 + 3) = *(undefined1 *)(DAT_8c0bb1a4 + ar4);
  *(undefined1 *)(ar5 + 2) = *(undefined1 *)(DAT_8c0bb1a8 + ar4);
  *(undefined1 *)((int)ar5 + 5) = *(undefined1 *)(DAT_8c0bb1ac + ar4);
  *(undefined1 *)(ar5 + 3) = *(undefined1 *)(DAT_8c0bb1b0 + ar4);
  *(undefined1 *)((int)ar5 + 7) = *(undefined1 *)(DAT_8c0bb1b4 + ar4);
  bVar1 = *(byte *)(DAT_8c0bb1b8 + ar4);
  *(byte *)(ar5 + 4) = bVar1;
  return (uint)bVar1;
}



/* FUN_8c0bb1bc @ 8c0bb1bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bb1bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0bb1e0)(*(undefined4 *)(DAT_8c0bb1dc + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* s_AMB_FOREST_0bb1f2 @ 8c0bb1e4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0bc1d8) */
/* WARNING: Removing unreachable block (ram,0x8c0bbd9e) */
/* WARNING: Removing unreachable block (ram,0x8c0bbbe4) */
/* WARNING: Removing unreachable block (ram,0x8c0bb224) */
/* WARNING: Removing unreachable block (ram,0x8c0bb60a) */
/* WARNING: Removing unreachable block (ram,0x8c0bbcda) */
/* WARNING: Removing unreachable block (ram,0x8c0bbfac) */
/* WARNING: Removing unreachable block (ram,0x8c0bc212) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_AMB_FOREST_0bb1f2(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *ar4_00;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  char *ar6_00;
  code *ar6_01;
  undefined1 *puVar10;
  float fVar11;
  undefined1 *puVar12;
  int iVar13;
  float fVar14;
  ulonglong in_dr0;
  double dVar15;
  double dVar16;
  float fVar18;
  double dVar17;
  double in_dr2;
  double in_xd0;
  bool bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  char cVar23;
  char cVar24;
  int in_stack_fffffe48;
  int iStack_88;
  undefined1 auStack_84 [4];
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  undefined1 auStack_78 [20];
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [24];
  
  cVar24 = '\0';
  cVar23 = '\0';
  if (DAT_8c436610 == '\0') {
    DAT_8c43660f = '\0';
    DAT_8c436610 = '\x01';
  }
  if (DAT_8c436618 == '\0') {
    ar6 = &DAT_8c436614;
    in_dr0 = in_dr0 & 0xffffffff;
    _DAT_8c436614 = (double)CONCAT35((int3)((ulonglong)_DAT_8c436614 >> 0x28),0x100000000);
  }
  uStack_54 = DAT_8c13be00;
  uStack_50 = DAT_8c13be04;
  uStack_4c = DAT_8c13be08;
  uStack_48 = DAT_8c13be0c;
  uStack_44 = DAT_8c13be10;
  uStack_40 = DAT_8c13be14;
  uStack_3c = DAT_8c13be18;
  uStack_38 = DAT_8c13be1c;
  uVar1 = DAT_8c13be18;
  FUN_8c0162f8(auStack_78,DAT_8c13be18,ar6,ar7);
  if (DAT_8c4366c4 == '\0') {
    uVar1 = rand(&DAT_8c4366c4,uVar1,ar6,ar7);
    _DAT_8c4366c0 = (float)libgcc_divide_helper_01031c(uVar1,0x2e,ar6,ar7);
    uVar1 = 1;
    DAT_8c4366c4 = '\x01';
  }
  if (DAT_8c4366d0 == '\0') {
    _DAT_8c4366cc = 0;
    DAT_8c4366d0 = '\x01';
  }
  if (DAT_8c4366d8 == '\0') {
    _DAT_8c4366d4 = 0;
    ar7 = &DAT_8c4366d8;
    uVar1 = 1;
    DAT_8c4366d8 = '\x01';
  }
  if (DAT_8c4366e0 == '\0') {
    _DAT_8c4366dc = 1;
    DAT_8c4366e0 = '\x01';
  }
  uVar1 = get_field_a510_01f538(0x8c3dd7dc,uVar1,ar6,ar7);
  if (DAT_8c4366ec == '\0') {
    _DAT_8c4366e8 = 0;
    DAT_8c4366ec = '\x01';
  }
  puVar10 = (undefined1 *)0x4;
  uVar8 = 0x8c43661c;
  FUN_8c016318(auStack_78,&uStack_54,0x8c43661c,4,in_stack_fffffe48);
  FUN_8c016324(auStack_78,&uStack_64,uVar8,puVar10);
  FUN_8c015198(auStack_78,0x80000060,uVar8,puVar10,in_stack_fffffe48);
  if (*(int *)(ar4 + 0x150) != _DAT_8c4366d4) {
    DAT_8c43660f = '\0';
    puVar10 = &DAT_8c4366d4;
    uVar8 = 0x150;
    _DAT_8c4366d4 = *(int *)(ar4 + 0x150);
  }
  FUN_8c0b9d14(ar5,auStack_84,uVar8,puVar10);
  pcVar9 = (code *)&DAT_8c43660f;
  if (DAT_8c43660f == '\0') {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(&DAT_8c43663c + iVar2 * 4) = 0xffffff;
      *(undefined4 *)(iVar2 * 4 + -0x73bc99b4) = 0xffffff;
      *(undefined4 *)(iVar2 * 4 + -0x73bc9984) = 0xffffff;
      *(undefined4 *)(&DAT_8c43668c + iVar2 * 4) = 0xffffffff;
      *(undefined4 *)(iVar2 * 4 + -0x73bc9964) = 0xffffff;
    }
    _DAT_8c43662c = 0;
    _DAT_8c43662e = 0xff;
    _DAT_8c436630 = 0;
    _DAT_8c436632 = 0;
    _DAT_8c436634 = 0xff;
    _DAT_8c436636 = 0;
    _DAT_8c436638 = 0xff;
    _DAT_8c43663a = 0xff;
    puVar10 = (undefined1 *)0x4;
    pcVar9 = (code *)0x8c43661c;
    FUN_8c016318(ar4 + 0x50,0,0x8c43661c,4,in_stack_fffffe48);
    FUN_8c015198(ar4 + 0x50,0x80000060,pcVar9,puVar10,in_stack_fffffe48);
    iVar2 = 0;
    for (iVar20 = 0; iVar20 < 8; iVar20 = iVar20 + 1) {
      puVar10 = (undefined1 *)(ar5 + iVar20);
      iVar2 = (uint)(byte)puVar10[4] + iVar2;
    }
    puVar3 = auStack_84;
    FUN_8c0b9d14(ar5,puVar3,pcVar9,puVar10);
    _DAT_8c4366ac = get_field_c8_0bced0(ar5,puVar3,pcVar9,puVar10);
    ar4_00 = &DAT_8c4366ac;
    for (puVar12 = (undefined1 *)0x0; (int)puVar12 < 0x14; puVar12 = puVar12 + 1) {
      puVar3 = puVar12;
    }
    for (iVar20 = 0; iVar20 < (int)(uint)bStack_7e; iVar20 = iVar20 + 1) {
      pcVar9 = rand;
      rand(ar4_00,puVar3,rand,puVar10);
    }
    if (cVar23 == '\0') {
      dVar16 = (double)CONCAT44((float)bStack_80,SUB84(in_dr2,0));
    }
    else {
      dVar16 = (double)bStack_80;
    }
    if (cVar24 == '\0') {
      dVar17 = (double)CONCAT44(0x42700000,(int)in_dr0);
    }
    else {
      dVar17 = 6.64735386069639e-312;
    }
    if (cVar23 == '\0') {
      dVar15 = (double)CONCAT44((float)bStack_7f,SUB84(dVar17,0));
      in_dr2 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) *
                                (float)((ulonglong)dVar17 >> 0x20) + (float)bStack_7f,
                                SUB84(dVar16,0));
    }
    else {
      dVar15 = (double)bStack_7f;
      in_dr2 = dVar16 * dVar17 + dVar15;
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x40200000,SUB84(dVar15,0));
    }
    else {
      dVar16 = 7.63971638255348e-311;
    }
    if (cVar23 == '\0') {
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) *
                                (float)((ulonglong)dVar16 >> 0x20),SUB84(in_dr2,0));
    }
    else {
      in_dr2 = in_dr2 * dVar16;
    }
    fVar11 = (float)bStack_7f;
    if (cVar24 == '\0') {
      fVar14 = 60.0;
    }
    else {
      fVar11 = 60.0;
      fVar14 = 4.38606e-43;
    }
    if (cVar23 == '\0') {
      fVar11 = fVar11 * fVar14 + (float)bStack_7e;
      dVar16 = (double)CONCAT44((float)bStack_7e,fVar11);
      fVar11 = (float)((ulonglong)in_dr2 >> 0x20) - fVar11;
      in_dr2 = (double)CONCAT44(fVar11,SUB84(in_dr2,0));
      _DAT_8c4366b0 = (undefined1 *)(int)fVar11;
    }
    else {
      dVar16 = (double)bStack_7e + (double)bStack_7e;
      in_dr2 = in_dr2 - dVar16;
      _DAT_8c4366b0 = (undefined1 *)(int)in_dr2;
    }
    uVar8 = SUB84(dVar16,0);
    if ((int)_DAT_8c4366b0 < 0) {
      _DAT_8c4366b0 = _DAT_8c4366b0 + 0xe10;
    }
    uVar6 = rand(_DAT_8c4366b0,puVar3,pcVar9,puVar10);
    uVar4 = 0x3c;
    _DAT_8c4366b4 = libgcc_divide_helper_01031c(uVar6,0x3c,pcVar9,puVar10);
    uVar6 = rand(&DAT_8c4366b4,uVar4,pcVar9,puVar10);
    uVar4 = 0x41;
    iVar20 = libgcc_divide_helper_01031c(uVar6,0x41,pcVar9,puVar10);
    if (cVar23 == '\0') {
      dVar16 = (double)CONCAT44((float)iVar20,uVar8);
    }
    else {
      dVar16 = (double)iVar20;
    }
    fVar11 = (float)((ulonglong)dVar16 >> 0x20);
    _DAT_8c4366b8 = fVar11;
    if (cVar24 != '\0') {
      _DAT_8c4366b8 = SUB84(dVar16,0);
      _DAT_8c4366bc = fVar11;
    }
    uVar8 = rand(uVar6,uVar4,pcVar9,puVar10);
    uVar6 = SUB84(dVar16,0);
    iVar20 = libgcc_divide_helper_01031c(uVar8,0x46,pcVar9,puVar10);
    if (cVar23 == '\0') {
      dVar16 = (double)CONCAT44((float)iVar20,uVar6);
    }
    else {
      dVar16 = (double)iVar20;
    }
    fVar11 = (float)((ulonglong)dVar16 >> 0x20);
    _DAT_8c4366bc = SUB84(dVar16,0);
    if (cVar24 == '\0') {
      _DAT_8c4366bc = fVar11;
      fVar11 = _DAT_8c4366c0;
    }
    _DAT_8c4366c0 = fVar11;
    if (iVar2 == 1) {
      if (cVar24 == '\0') {
        _DAT_8c4366b8 = 0.0;
      }
      else {
        _DAT_8c4366c0 = 0.0;
        _DAT_8c4366b8 = SUB84(dVar16,0);
      }
      _DAT_8c4366bc = 0.0;
      dVar16 = (double)((ulonglong)dVar16 & 0xffffffff);
      iVar2 = -((uint)bStack_7f * 0x3c + (uint)bStack_7e);
      _DAT_8c4366b0 = (undefined1 *)(iVar2 + 0x708);
      if ((int)_DAT_8c4366b0 < 0) {
        _DAT_8c4366b0 = (undefined1 *)(iVar2 + 0x1518);
      }
    }
    fVar11 = SUB84(dVar16,0);
    if (4 < _DAT_8c4366ac) {
      pcVar9 = (code *)&DAT_8c4366b8;
      if (cVar24 == '\0') {
        _DAT_8c4366b8 = 60.0;
        _DAT_8c4366bc = 70.0;
      }
      else {
        _DAT_8c4366b8 = 60.0;
        fVar11 = 70.0;
        _DAT_8c4366bc = 70.0;
        _DAT_8c4366c0 = 90.0;
      }
    }
    if (10 < _DAT_8c4366ac) {
      if (cVar24 == '\0') {
        _DAT_8c4366b8 = 60.0;
        _DAT_8c4366bc = 90.0;
      }
      else {
        _DAT_8c4366b8 = 60.0;
        fVar11 = 90.0;
        _DAT_8c4366bc = 90.0;
        _DAT_8c4366c0 = 1.1911e-42;
      }
    }
    if ((((*(int *)(ar5 + 0x30) == 0x25) || (*(int *)(ar5 + 0x34) == 0x25)) ||
        (*(int *)(ar5 + 0x38) == 0x25)) && (*(char *)(ar5 + 0x69) == '\0')) {
      if (cVar24 == '\0') {
        _DAT_8c4366bc = 0.0;
      }
      else {
        _DAT_8c4366c0 = 0.0;
        _DAT_8c4366bc = fVar11;
      }
      iVar2 = -((uint)bStack_7f * 0x3c + (uint)bStack_7e);
      _DAT_8c4366b0 = (undefined1 *)(iVar2 + 0x352);
      if ((int)_DAT_8c4366b0 < 0) {
        puVar10 = (undefined1 *)(iVar2 + 0x1162);
        _DAT_8c4366b0 = puVar10;
      }
    }
    _DAT_8c4366c8 = 0;
    DAT_8c43660f = '\x01';
  }
  ar6_00 = (char *)pcVar9;
  if (_DAT_8c4366e8 != 0) {
    if (cVar24 == '\0') {
      fVar14 = 72.0;
      fVar11 = _DAT_8c4366b8;
    }
    else {
      in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
      fVar11 = 72.0;
      fVar14 = 4.54021e-43;
    }
    if (cVar23 == '\0' && fVar11 < fVar14) {
      pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),pcVar9,puVar10);
      ar6_00 = (char *)pcVar9;
    }
    pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(ar4 + 0x148),ar6_00,puVar10);
  }
  if (cVar24 == '\0') {
    fVar14 = 30.0;
    fVar11 = _DAT_8c4366b8;
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
    fVar11 = 30.0;
    fVar14 = -1.6662342e+14;
  }
  _DAT_8c4366e8 = uVar1;
  if (cVar23 == '\0' && fVar11 < fVar14) {
    puVar10 = (undefined1 *)0x898;
    ar6_00 = (char *)0x0;
    FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),0,0x898);
  }
  iVar2 = FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_00,puVar10);
  if (iVar2 == 2) {
    ar6_00 = (char *)pack_acquire_entry_handle(0x8c2b59d0,s_AMB_FOREST_8c13c8ce,ar6_00,puVar10);
    puVar10 = (undefined1 *)0x144;
    *(char **)(ar4 + 0x144) = ar6_00;
  }
  else {
    if (cVar24 == '\0') {
      fVar14 = 65.0;
      fVar11 = _DAT_8c4366b8;
    }
    else {
      in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
      fVar11 = 65.0;
      fVar14 = 30.0;
    }
    if (cVar23 != '\0' || fVar14 <= fVar11) {
      if (cVar24 == '\0') {
        fVar14 = 72.0;
        fVar11 = _DAT_8c4366b8;
      }
      else {
        in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
        fVar11 = 72.0;
        fVar14 = 4.54021e-43;
      }
      if (cVar23 == '\0' && fVar11 < fVar14) {
        pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_00,puVar10);
      }
    }
    else {
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x41f00000,_DAT_8c4366b8);
      }
      else {
        in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
        dVar16 = 1.7021678581004447e+27;
      }
      if (cVar23 == '\0') {
        fVar11 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar16 - dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x45960000,fVar11);
      }
      else {
        dVar16 = 15032387762.75;
      }
      if (cVar23 == '\0') {
        fVar11 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar16 * dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x420c0000,fVar11);
      }
      else {
        dVar16 = 3.853451644918994e+24;
      }
      if (cVar23 == '\0') {
        fVar11 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x45098000,fVar11);
      }
      else {
        dVar16 = 6.880988880521e-312;
      }
      if (cVar23 == '\0') {
        puVar10 = (undefined1 *)(int)(SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20));
      }
      else {
        puVar10 = (undefined1 *)(int)(dVar16 + dVar16);
      }
      ar6_00 = (char *)0x0;
      FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),0,puVar10);
      iVar2 = FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_00,puVar10);
      if (iVar2 == 2) {
        puVar10 = (undefined1 *)0x8ea;
        ar6_00 = s_AMB_FOREST_8c13c8ce;
        uVar1 = pack_acquire_entry_handle
                          (0x8c2b59d0,s_AMB_FOREST_8c13c8ce,s_AMB_FOREST_8c13c8ce,0x8ea);
        *(undefined4 *)(ar4 + 0x144) = uVar1;
      }
    }
  }
  iVar2 = FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(ar4 + 0x148),ar6_00,puVar10);
  if (iVar2 == 2) {
    uVar1 = pack_acquire_entry_handle(0x8c2b59d0,s_AMB_RAIN_8c13c8d9,ar6_00,puVar10);
    *(undefined4 *)(ar4 + 0x148) = uVar1;
  }
  if (cVar24 == '\0') {
    fVar14 = 50.0;
    fVar11 = _DAT_8c4366b8;
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
    fVar11 = 50.0;
    fVar14 = 9.80909e-42;
  }
  if (cVar23 != '\0' || fVar14 <= fVar11) {
    if (cVar24 == '\0') {
      fVar14 = 75.0;
      fVar11 = _DAT_8c4366b8;
    }
    else {
      in_xd0 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
      fVar11 = 75.0;
      fVar14 = 5300.0;
    }
    if (cVar23 != '\0' || fVar14 <= fVar11) {
      fVar11 = 2.38221e-42;
      iVar2 = 0;
      FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 0x148),0,0x6a4);
    }
    else {
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(_DAT_8c4366b8,0x42960000);
      }
      else {
        dVar16 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
        in_xd0 = 3.3463072828401675e+27;
      }
      if (cVar23 == '\0') {
        fVar11 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar16 - dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x45a5a000,fVar11);
      }
      else {
        dVar16 = 805306507.2939453;
      }
      if (cVar23 == '\0') {
        fVar11 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar16 * dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x41c80000,fVar11);
      }
      else {
        dVar16 = 3.8723412565841415e+23;
      }
      if (cVar23 == '\0') {
        fVar11 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x44d48000,fVar11);
      }
      else {
        dVar16 = 6.96585155124395e-312;
      }
      if (cVar23 == '\0') {
        fVar11 = (float)(int)(SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20));
      }
      else {
        fVar11 = (float)(int)(dVar16 + dVar16);
      }
      iVar2 = 0;
      FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 0x148),0,fVar11);
    }
  }
  else {
    fVar11 = 9.80909e-42;
    iVar2 = 0;
    FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 0x148),0,7000);
  }
  _DAT_8c4366c8 = _DAT_8c4366c8 + 1;
  if (2 < _DAT_8c4366c8) {
    _DAT_8c4366c8 = 0;
  }
  if (cVar24 == '\0') {
    dVar16 = (double)CONCAT44(0x3dcccccd,_DAT_8c436614);
  }
  else {
    dVar16 = 1.4411521461875377e+18;
    in_xd0 = _DAT_8c436614;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    fVar14 = SUB84(dVar16 + dVar16,0);
  }
  if (cVar24 == '\0') {
    _DAT_8c436614 = (double)CONCAT44(_DAT_8c436618,fVar14);
    dVar16 = (double)CONCAT44(0x43b40000,fVar14);
  }
  else {
    dVar16 = 6.64745876893557e-312;
    _DAT_8c436614 = in_xd0;
  }
  dVar17 = _DAT_8c436614;
  if ((cVar23 != '\0' || (float)((ulonglong)dVar16 >> 0x20) <= SUB84(dVar16,0)) &&
     (dVar16 = (double)((ulonglong)dVar16 & 0xffffffff), dVar17 = dVar16, cVar24 == '\0')) {
    _DAT_8c436614 = (double)((ulonglong)_DAT_8c436614 & 0xffffffff00000000);
    dVar17 = _DAT_8c436614;
  }
  _DAT_8c436614 = dVar17;
  puVar10 = _DAT_8c4366b0 + (uint)bStack_7f * 0x3c + (uint)bStack_7e;
  if ((undefined1 *)0xe10 < puVar10) {
    puVar10 = puVar10 + -0xe10;
  }
  if ((puVar10 < (undefined1 *)0x272) || (iVar2 = 0x47e, (undefined1 *)0x47d < puVar10)) {
    if ((puVar10 < (undefined1 *)0xaf1) || ((undefined1 *)0xbe9 < puVar10)) {
      if ((puVar10 < (undefined1 *)0x47e) || ((undefined1 *)0xaf0 < puVar10)) {
        iVar20 = 0;
      }
      else {
        iVar20 = 0xaf;
      }
    }
    else {
      if (cVar23 == '\0') {
        in_dr2 = (double)CONCAT44((float)(int)puVar10,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)(int)puVar10;
      }
      dVar17 = (double)((ulonglong)dVar16 & 0xffffffff);
      fVar14 = (float)((ulonglong)in_dr2 >> 0x20);
      if (cVar23 == '\0') {
        bVar19 = fVar14 < 0.0;
      }
      else {
        bVar19 = in_dr2 < dVar17;
      }
      if (bVar19) {
        if (cVar24 == '\0') {
          dVar17 = (double)CONCAT44(0x4f800000,SUB84(dVar16,0));
        }
        else {
          dVar17 = 3.7023358954276744e+25;
        }
        if (cVar23 == '\0') {
          in_dr2 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar17 >> 0x20),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar17;
        }
      }
      if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),0x453ea000);
      }
      else {
        in_xd0 = 1.1709360889934643e+17;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar17,0) - (float)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar17 - in_dr2,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x437a0000,fVar14);
      }
      else {
        dVar16 = 4.3628627050496e+15;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x432f0000,fVar14);
      }
      else {
        dVar16 = 1.274788992873159e-19;
      }
      if (cVar23 == '\0') {
        fVar18 = (float)((ulonglong)dVar16 >> 0x20);
        fVar14 = SUB84(dVar16,0) * fVar18;
        dVar16 = (double)CONCAT44(fVar18,fVar14);
        iVar20 = (int)fVar14;
      }
      else {
        dVar16 = dVar16 * dVar16;
        iVar20 = (int)dVar16;
      }
    }
  }
  else {
    fVar14 = (float)(int)puVar10;
    if (cVar23 == '\0' && fVar14 < 0.0) {
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x4f800000,fVar14);
      }
      else {
        dVar16 = 1.3028015187336731e+20;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar16 + dVar16,0);
      }
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x441c4000,fVar14);
    }
    else {
      dVar16 = 4.438748728837905e+19;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x44034000,fVar14);
    }
    else {
      dVar16 = 4362862709547008.0;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 / dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x432f0000,fVar14);
    }
    else {
      dVar16 = 1.5458488417764263e-19;
    }
    if (cVar23 == '\0') {
      fVar18 = (float)((ulonglong)dVar16 >> 0x20);
      fVar14 = SUB84(dVar16,0) * fVar18;
      dVar16 = (double)CONCAT44(fVar18,fVar14);
      iVar20 = (int)fVar14;
    }
    else {
      dVar16 = dVar16 * dVar16;
      iVar20 = (int)dVar16;
    }
  }
  if ((puVar10 < (undefined1 *)0x2ef) || ((undefined1 *)0x47d < puVar10)) {
    if ((puVar10 < (undefined1 *)0xa8d) || ((undefined1 *)0xbb7 < puVar10)) {
      if ((puVar10 < (undefined1 *)0x47e) || ((undefined1 *)0xa8c < puVar10)) {
        iVar21 = 0;
      }
      else {
        iVar21 = 0xaf;
      }
    }
    else {
      if (cVar23 == '\0') {
        in_dr2 = (double)CONCAT44((float)(int)puVar10,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)(int)puVar10;
      }
      dVar17 = (double)((ulonglong)dVar16 & 0xffffffff);
      fVar14 = (float)((ulonglong)in_dr2 >> 0x20);
      if (cVar23 == '\0') {
        bVar19 = fVar14 < 0.0;
      }
      else {
        bVar19 = in_dr2 < dVar17;
      }
      if (bVar19) {
        if (cVar24 == '\0') {
          dVar17 = (double)CONCAT44(0x4f800000,SUB84(dVar16,0));
        }
        else {
          dVar17 = 3.324546576798103e+25;
        }
        if (cVar23 == '\0') {
          in_dr2 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar17 >> 0x20),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar17;
        }
      }
      if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),0x453b8000);
      }
      else {
        in_xd0 = 3.963168415463506e+17;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar17,0) - (float)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar17 - in_dr2,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x43960000,fVar14);
      }
      else {
        dVar16 = 4362862705967104.0;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x432f0000,fVar14);
      }
      else {
        dVar16 = 2.041356454491563e-18;
      }
      if (cVar23 == '\0') {
        fVar18 = (float)((ulonglong)dVar16 >> 0x20);
        fVar14 = SUB84(dVar16,0) * fVar18;
        dVar16 = (double)CONCAT44(fVar18,fVar14);
        iVar21 = (int)fVar14;
      }
      else {
        dVar16 = dVar16 * dVar16;
        iVar21 = (int)dVar16;
      }
    }
  }
  else {
    fVar14 = (float)(int)puVar10;
    if (cVar23 == '\0' && fVar14 < 0.0) {
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x4f800000,fVar14);
      }
      else {
        dVar16 = 5.072855494381871e+20;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar16 + dVar16,0);
      }
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x443b8000,fVar14);
    }
    else {
      dVar16 = 3.458765099932582e+18;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x43c80000,fVar14);
    }
    else {
      dVar16 = 4362862707605504.0;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 / dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x432f0000,fVar14);
    }
    else {
      dVar16 = 1.5458488417764263e-19;
    }
    if (cVar23 == '\0') {
      fVar18 = (float)((ulonglong)dVar16 >> 0x20);
      fVar14 = SUB84(dVar16,0) * fVar18;
      dVar16 = (double)CONCAT44(fVar18,fVar14);
      iVar21 = (int)fVar14;
    }
    else {
      dVar16 = dVar16 * dVar16;
      iVar21 = (int)dVar16;
    }
  }
  if ((puVar10 < (undefined1 *)0x272) || ((undefined1 *)0x44b < puVar10)) {
    if ((puVar10 < (undefined1 *)0x9c5) || ((undefined1 *)0xabd < puVar10)) {
      if ((puVar10 < (undefined1 *)0x44c) || ((undefined1 *)0x9c4 < puVar10)) {
        iStack_88 = 0;
      }
      else {
        iStack_88 = 0x87;
      }
    }
    else {
      if (cVar23 == '\0') {
        in_dr2 = (double)CONCAT44((float)(int)puVar10,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = (double)(int)puVar10;
      }
      dVar17 = (double)((ulonglong)dVar16 & 0xffffffff);
      fVar14 = (float)((ulonglong)in_dr2 >> 0x20);
      if (cVar23 == '\0') {
        bVar19 = fVar14 < 0.0;
      }
      else {
        bVar19 = in_dr2 < dVar17;
      }
      if (bVar19) {
        if (cVar24 == '\0') {
          dVar17 = (double)CONCAT44(0x4f800000,SUB84(dVar16,0));
        }
        else {
          dVar17 = 1.6849406475168257e+25;
        }
        if (cVar23 == '\0') {
          in_dr2 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar17 >> 0x20),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar17;
        }
      }
      if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),0x452be000);
      }
      else {
        in_xd0 = 1.1709360887968563e+17;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar17,0) - (float)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar17 - in_dr2,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x437a0000,fVar14);
      }
      else {
        dVar16 = 809240699551744.0;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar16 / dVar16,0);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x43070000,fVar14);
      }
      else {
        dVar16 = 6.45642313192963e-312;
      }
      if (cVar23 == '\0') {
        iStack_88 = (int)(SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20));
      }
      else {
        iStack_88 = (int)(dVar16 * dVar16);
      }
    }
  }
  else {
    fVar14 = (float)(int)puVar10;
    if (cVar23 == '\0' && fVar14 < 0.0) {
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(0x4f800000,fVar14);
      }
      else {
        dVar16 = 1.3028015187336731e+20;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
      }
      else {
        fVar14 = SUB84(dVar16 + dVar16,0);
      }
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x441c4000,fVar14);
    }
    else {
      dVar16 = 1.7005594533204853e+19;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x43ed8000,fVar14);
    }
    else {
      dVar16 = 809240700497920.0;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) / (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 / dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x43070000,fVar14);
    }
    else {
      dVar16 = 6.45642313192963e-312;
    }
    if (cVar23 == '\0') {
      iStack_88 = (int)(SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20));
    }
    else {
      iStack_88 = (int)(dVar16 * dVar16);
    }
  }
  if (cVar23 == '\0') {
    dVar16 = (double)CONCAT44((float)iVar20,SUB84(in_dr2,0));
  }
  else {
    dVar16 = (double)iVar20;
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4366b8,0x42c80000);
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
    in_xd0 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    fVar14 = SUB84(dVar17 - dVar17,0);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x42c80000,fVar14);
  }
  else {
    dVar17 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar17,0) / (float)((ulonglong)dVar17 >> 0x20);
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * fVar14,SUB84(dVar16,0));
  }
  else {
    fVar14 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 * (dVar17 / dVar17);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x42a00000,fVar14);
  }
  else {
    dVar17 = 281475046572032.0;
  }
  if (cVar23 == '\0') {
    iVar20 = (int)((float)((ulonglong)dVar16 >> 0x20) + (float)((ulonglong)dVar17 >> 0x20));
    dVar16 = (double)CONCAT44((float)iVar21,SUB84(dVar16,0));
  }
  else {
    iVar20 = (int)(dVar16 + dVar17);
    dVar16 = (double)iVar21;
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4366b8,0x42c80000);
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
    in_xd0 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    fVar14 = SUB84(dVar17 - dVar17,0);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x42c80000,fVar14);
  }
  else {
    dVar17 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar17,0) / (float)((ulonglong)dVar17 >> 0x20);
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * fVar14,SUB84(dVar16,0));
  }
  else {
    fVar14 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 * (dVar17 / dVar17);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x42a00000,fVar14);
  }
  else {
    dVar17 = 281475046572032.0;
  }
  if (cVar23 == '\0') {
    iVar21 = (int)((float)((ulonglong)dVar16 >> 0x20) + (float)((ulonglong)dVar17 >> 0x20));
    dVar16 = (double)CONCAT44((float)iStack_88,SUB84(dVar16,0));
  }
  else {
    iVar21 = (int)(dVar16 + dVar17);
    dVar16 = (double)iStack_88;
  }
  puVar10 = &DAT_8c4366b8;
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(_DAT_8c4366b8,0x42c80000);
  }
  else {
    dVar17 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
    in_xd0 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
  }
  else {
    fVar14 = SUB84(dVar17 - dVar17,0);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x42c80000,fVar14);
  }
  else {
    dVar17 = 8796095210496.0;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar17,0) / (float)((ulonglong)dVar17 >> 0x20);
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * fVar14,SUB84(dVar16,0));
  }
  else {
    fVar14 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 * (dVar17 / dVar17);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x42f00000,fVar14);
  }
  else {
    dVar17 = -5.48612543682247e+303;
  }
  if (cVar23 == '\0') {
    fVar14 = (float)((ulonglong)dVar16 >> 0x20) + (float)((ulonglong)dVar17 >> 0x20);
    dVar16 = (double)CONCAT44(fVar14,SUB84(dVar16,0));
    iVar22 = (int)fVar14;
  }
  else {
    dVar16 = dVar16 + dVar17;
    iVar22 = (int)dVar16;
  }
  uVar1 = SUB84(dVar16,0);
  for (iVar13 = 0; iVar13 < 4; iVar13 = iVar13 + 1) {
    puVar10 = (undefined1 *)(iVar13 * 4);
    *(int *)(puVar10 + -0x73bc99e4) = iVar20 * 0x10000 + -0x1000000 + iVar21 * 0x100 + iVar22;
  }
  uVar5 = (uint)bStack_7f;
  if (_DAT_8c4366b4 == uVar5) {
    uVar8 = rand(puVar10,uVar5,iVar2,fVar11);
    uVar6 = 0x3c;
    _DAT_8c4366b4 = libgcc_divide_helper_01031c(uVar8,0x3c,iVar2,fVar11);
    uVar8 = rand(&DAT_8c4366b4,uVar6,iVar2,fVar11);
    uVar5 = 0xb;
    iVar2 = libgcc_divide_helper_01031c(uVar8,0xb,iVar2,fVar11);
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x41200000,(float)iVar2);
    }
    else {
      dVar16 = 5.330973659922055e-35;
    }
    if (cVar23 == '\0') {
      _DAT_8c4366bc = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      _DAT_8c4366bc = SUB84(dVar16 * dVar16,0);
    }
    if (cVar24 != '\0') {
      _DAT_8c4366bc = SUB84(in_xd0,0);
      _DAT_8c4366c0 = (float)((ulonglong)in_xd0 >> 0x20);
    }
  }
  if (cVar24 == '\0') {
    dVar16 = (double)CONCAT44(_DAT_8c4366b8,_DAT_8c4366bc);
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4366c0,_DAT_8c4366bc);
    dVar16 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    fVar14 = SUB84(dVar16 - dVar16,0);
  }
  if (cVar24 == '\0') {
    dVar16 = (double)CONCAT44(0x38d1b717,fVar14);
  }
  else {
    dVar16 = 85899360465.7152;
  }
  if (cVar23 == '\0') {
    fVar14 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    fVar14 = SUB84(dVar16 * dVar16,0);
  }
  if (cVar24 == '\0') {
    dVar16 = (double)CONCAT44(_DAT_8c4366b8,fVar14);
  }
  else {
    dVar16 = (double)CONCAT44(_DAT_8c4366bc,_DAT_8c4366b8);
  }
  if (cVar23 == '\0') {
    _DAT_8c4366b8 = SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    _DAT_8c4366b8 = SUB84(dVar16 + dVar16,0);
  }
  if (cVar24 == '\0') {
    fVar18 = 45.0;
    fVar14 = _DAT_8c4366b8;
  }
  else {
    _DAT_8c4366b8 = SUB84(in_xd0,0);
    _DAT_8c4366bc = (float)((ulonglong)in_xd0 >> 0x20);
    fVar14 = 45.0;
    fVar18 = 0.8;
  }
  if (cVar23 != '\0' || fVar14 <= fVar18) {
    uVar8 = rand(&DAT_8c4366bc,uVar5,iVar2,fVar11);
    iVar20 = 0x1e;
    fVar11 = (float)libgcc_divide_helper_01031c(uVar8,0x1e,iVar2,fVar11);
    _DAT_8c4366c0 = fVar11;
  }
  else {
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x42340000,_DAT_8c4366b8);
    }
    else {
      dVar16 = 0.0008789064635550403;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x3f4ccccd,fVar14);
    }
    else {
      dVar16 = 7.2911194025414286e-304;
    }
    if (cVar23 == '\0') {
      iVar20 = (int)(SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20));
    }
    else {
      iVar20 = (int)(dVar16 * dVar16);
    }
    for (iVar21 = 0; iVar21 < 4; iVar21 = iVar21 + 1) {
      *(int *)(iVar21 * 4 + -0x73bc99b4) = iVar20 * 0x1000000 + 0xffffff;
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x42340000,_DAT_8c4366b8);
    }
    else {
      dVar16 = 0.02500000981399353;
    }
    if (cVar23 == '\0') {
      fVar14 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar14 = SUB84(dVar16 - dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x3f99999a,fVar14);
    }
    else {
      dVar16 = 7.291119406615661e-304;
    }
    if (cVar23 == '\0') {
      iVar21 = (int)(SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20));
    }
    else {
      iVar21 = (int)(dVar16 * dVar16);
    }
    uVar8 = 0xffffff;
    iVar20 = 0;
    for (iVar22 = 0; iVar22 < 4; iVar22 = iVar22 + 1) {
      iVar20 = iVar22 * 4;
      *(int *)(iVar20 + -0x73bc9984) = iVar21 * 0x1000000 + 0xffffff;
    }
  }
  uVar8 = rand(uVar8,iVar20,iVar2,fVar11);
  iVar2 = libgcc_divide_helper_01031c(uVar8,100,iVar2,uVar8);
  if (cVar23 == '\0') {
    dVar16 = (double)CONCAT44((float)(iVar2 + 0x69),uVar1);
  }
  else {
    dVar16 = (double)(iVar2 + 0x69);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x40000000,_DAT_8c4366b8);
  }
  else {
    dVar17 = 3.533694972055102e+72;
  }
  if (cVar23 == '\0') {
    fVar11 = SUB84(dVar17,0) / (float)((ulonglong)dVar17 >> 0x20);
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + fVar11,SUB84(dVar16,0));
  }
  else {
    fVar11 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 + dVar17 / dVar17;
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x4f000000,fVar11);
  }
  else {
    dVar17 = -9.046259633960061e+74;
  }
  fVar11 = (float)((ulonglong)dVar16 >> 0x20);
  if (cVar23 == '\0') {
    bVar19 = (float)((ulonglong)dVar17 >> 0x20) < fVar11;
  }
  else {
    bVar19 = dVar17 < dVar16;
  }
  if (bVar19) {
    if (cVar24 == '\0') {
      dVar17 = (double)CONCAT44(0xcf800000,SUB84(dVar17,0));
    }
    else {
      dVar17 = -1.3547902344155491e-249;
    }
    if (cVar23 == '\0') {
      dVar16 = (double)CONCAT44(fVar11 + (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
  }
  if (cVar23 == '\0') {
    iVar20 = (int)(float)((ulonglong)dVar16 >> 0x20);
  }
  else {
    iVar20 = (int)dVar16;
  }
  _DAT_8c436660 = (short)iVar2;
  _DAT_8c43665c = _DAT_8c436660 + SUB42(_DAT_8c4366c0,0);
  _DAT_8c43665e = (undefined2)iVar20;
  iVar20 = iVar20 - (int)_DAT_8c4366c0;
  _DAT_8c436664 = (undefined2)iVar20;
  puVar10 = &DAT_8c43665c;
  _DAT_8c436662 = _DAT_8c436660;
  _DAT_8c436666 = _DAT_8c436660;
  _DAT_8c436668 = _DAT_8c43665e;
  _DAT_8c43666a = _DAT_8c43665e;
  uVar1 = rand(&DAT_8c43665c,&DAT_8c43665c,&DAT_8c43665c,iVar20);
  uVar8 = SUB84(dVar16,0);
  iVar2 = libgcc_divide_helper_01031c(uVar1,0x32,puVar10,iVar20);
  if (cVar23 == '\0') {
    dVar16 = (double)CONCAT44((float)(iVar2 + 0x9b),uVar8);
  }
  else {
    dVar16 = (double)(iVar2 + 0x9b);
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x40000000,_DAT_8c4366b8);
  }
  else {
    dVar17 = 3.533694972055102e+72;
  }
  if (cVar23 == '\0') {
    fVar11 = SUB84(dVar17,0) / (float)((ulonglong)dVar17 >> 0x20);
    dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + fVar11,SUB84(dVar16,0));
  }
  else {
    fVar11 = SUB84(dVar17 / dVar17,0);
    dVar16 = dVar16 + dVar17 / dVar17;
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x4f000000,fVar11);
  }
  else {
    dVar17 = -9.046259633960061e+74;
  }
  fVar11 = (float)((ulonglong)dVar16 >> 0x20);
  if (cVar23 == '\0') {
    bVar19 = (float)((ulonglong)dVar17 >> 0x20) < fVar11;
  }
  else {
    bVar19 = dVar17 < dVar16;
  }
  if (bVar19) {
    if (cVar24 == '\0') {
      dVar17 = (double)CONCAT44(0xcf800000,SUB84(dVar17,0));
    }
    else {
      dVar17 = -1.3547902344155491e-249;
    }
    if (cVar23 == '\0') {
      dVar16 = (double)CONCAT44(fVar11 + (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
  }
  if (cVar23 == '\0') {
    iVar20 = (int)(float)((ulonglong)dVar16 >> 0x20);
    dVar16 = (double)CONCAT44((float)iVar2,SUB84(dVar16,0));
  }
  else {
    iVar20 = (int)dVar16;
    dVar16 = (double)iVar2;
  }
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x3fc00000,(float)(int)_DAT_8c4366c0);
  }
  else {
    dVar17 = 9.046259120036078e+74;
  }
  _DAT_8c436670 = (undefined2)iVar2;
  _DAT_8c43666e = (undefined2)iVar20;
  if (cVar23 == '\0') {
    fVar14 = (float)((ulonglong)dVar17 >> 0x20);
    fVar11 = SUB84(dVar17,0) * fVar14;
    dVar17 = (double)CONCAT44(fVar14,fVar11);
    pcVar9 = (code *)(int)((float)((ulonglong)dVar16 >> 0x20) + fVar11);
    _DAT_8c43666c = SUB42(pcVar9,0);
    dVar16 = (double)CONCAT44((float)iVar20,SUB84(dVar16,0));
  }
  else {
    dVar17 = dVar17 * dVar17;
    fVar11 = SUB84(dVar17,0);
    pcVar9 = (code *)(int)(dVar16 + dVar17);
    _DAT_8c43666c = SUB42(pcVar9,0);
    dVar16 = (double)iVar20;
  }
  fVar14 = (float)((ulonglong)dVar16 >> 0x20);
  if (cVar23 == '\0') {
    bVar19 = fVar14 < 0.0;
  }
  else {
    bVar19 = dVar16 < (double)((ulonglong)dVar17 & 0xffffffff);
  }
  if (bVar19) {
    if (cVar24 == '\0') {
      dVar17 = (double)CONCAT44(0x4f800000,fVar11);
    }
    else {
      dVar17 = -1.354755602458548e-249;
    }
    if (cVar23 == '\0') {
      dVar16 = (double)CONCAT44(fVar14 + (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar16,0));
    }
    else {
      dVar16 = dVar16 + dVar17;
    }
  }
  ar6_01 = (code *)&DAT_8c4366c0;
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(0x3fc00000,(float)(int)_DAT_8c4366c0);
  }
  else {
    dVar17 = 9.046259120036078e+74;
  }
  if (cVar23 == '\0') {
    iVar2 = (int)((float)((ulonglong)dVar16 >> 0x20) -
                 SUB84(dVar17,0) * (float)((ulonglong)dVar17 >> 0x20));
  }
  else {
    iVar2 = (int)(dVar16 - dVar17 * dVar17);
  }
  _DAT_8c436674 = (undefined2)iVar2;
  iVar20 = _DAT_8c43663c;
  _DAT_8c436672 = _DAT_8c436670;
  _DAT_8c436676 = _DAT_8c436670;
  _DAT_8c436678 = _DAT_8c43666e;
  _DAT_8c43667a = _DAT_8c43666e;
  if (_DAT_8c43663c != 0xffffff) {
    for (iVar21 = 0; iVar21 < 4; iVar21 = iVar21 + 1) {
      pcVar9 = (code *)&DAT_8c43663c;
      ar6_01 = (code *)(&DAT_8c43663c + iVar21 * 4);
      iVar20 = *(int *)ar6_01 + -0x11000000;
      *(int *)ar6_01 = iVar20;
    }
  }
  uVar1 = rand(iVar20,iVar2,ar6_01,pcVar9);
  puVar10 = (undefined1 *)0x190;
  iVar2 = libgcc_divide_helper_01031c(uVar1,400,ar6_01,pcVar9);
  if (iVar2 == 0) {
    if (cVar24 == '\0') {
      fVar14 = 75.0;
      fVar11 = _DAT_8c4366b8;
    }
    else {
      fVar11 = 75.0;
      fVar14 = 3.3705384e+10;
    }
    if (cVar23 == '\0' && fVar14 < fVar11) {
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        *(undefined4 *)(&DAT_8c43663c + iVar2 * 4) = 0xffffffff;
      }
      iVar2 = -0x73d4a630;
      pcVar9 = FUN_8c021f18;
      puVar10 = (undefined1 *)
                FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_01,FUN_8c021f18);
      if (puVar10 == (undefined1 *)0x2) {
        uVar1 = rand(iVar2,2,ar6_01,pcVar9);
        uVar1 = libgcc_divide_helper_01031c(uVar1,2,ar6_01,pcVar9);
        pcVar9 = (code *)auStack_34;
        FUN_8c014334(pcVar9,uVar1,ar6_01,pcVar9,s_AMB_THUNDER__d_8c13c8e7);
        uVar8 = 0x8c2b59d0;
        uVar1 = pack_acquire_entry_handle(0x8c2b59d0,auStack_34,ar6_01,pcVar9);
        *(undefined4 *)(ar4 + 0x144) = uVar1;
        iVar2 = rand(uVar8,0x144,ar6_01,pcVar9);
        iVar20 = libgcc_divide_helper_01031c(iVar2,5999,ar6_01,pcVar9);
        puVar10 = &DAT_8c4366e4;
        _DAT_8c4366e4 = (code *)(iVar20 + -2999);
      }
    }
  }
  uVar1 = rand(iVar2,puVar10,ar6_01,pcVar9);
  iVar2 = libgcc_divide_helper_01031c(uVar1,300,ar6_01,pcVar9);
  if (iVar2 == 0) {
    if (cVar24 == '\0') {
      fVar14 = 72.0;
      fVar11 = _DAT_8c4366b8;
    }
    else {
      fVar11 = 72.0;
      fVar14 = 2.69049e-43;
    }
    if (cVar23 == '\0' && fVar14 < fVar11) {
      uVar1 = *(undefined4 *)(ar4 + 0x144);
      uVar8 = 0x8c2b59d0;
      iVar2 = FUN_8c021f18(0x8c2b59d0,uVar1,ar6_01,pcVar9);
      if (iVar2 == 2) {
        uVar1 = rand(uVar8,uVar1,ar6_01,pcVar9);
        uVar8 = 2;
        ar6_01 = libgcc_divide_helper_01031c;
        libgcc_divide_helper_01031c(uVar1,2,libgcc_divide_helper_01031c,pcVar9);
        FUN_8c014334(auStack_34,uVar8,ar6_01,pcVar9,s_AMB_THUNDER__d_8c13c8e7);
        puVar10 = auStack_34;
        uVar1 = pack_acquire_entry_handle(0x8c2b59d0,puVar10,ar6_01,pcVar9);
        *(undefined4 *)(ar4 + 0x144) = uVar1;
        uVar1 = rand(rand,puVar10,ar6_01,pcVar9);
        iVar2 = libgcc_divide_helper_01031c(uVar1,4000,ar6_01,pcVar9);
        _DAT_8c4366e4 = (code *)(iVar2 + -2000);
      }
    }
  }
  iVar2 = FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_01,pcVar9);
  if (iVar2 != 2) {
    if (cVar24 == '\0') {
      fVar14 = 72.0;
      fVar11 = _DAT_8c4366b8;
    }
    else {
      fVar11 = 72.0;
      fVar14 = 2.69049e-43;
    }
    if (cVar23 == '\0' && fVar14 < fVar11) {
      pcVar9 = (code *)0x258;
      ar6_01 = _DAT_8c4366e4;
      FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),_DAT_8c4366e4,600);
    }
  }
  iVar2 = FUN_8c021f18(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_01,pcVar9);
  if (iVar2 == 2) {
    pack_release_entry_handle(0x8c2b59d0,*(undefined4 *)(ar4 + 0x144),ar6_01,pcVar9);
  }
  if (((_DAT_8c4366dc == 0) || (uVar5 = _DAT_8c4366dc, _DAT_8c4366dc == 1)) &&
     (uVar5 = 0x14c, *(int *)(ar4 + 0x14c) == 2)) {
    _DAT_8c4366cc = 1;
  }
  if (*(int *)(ar4 + 0x14c) == 3) {
    for (iVar2 = 0; ar6_01 = (code *)0x4, iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(&DAT_8c43668c + iVar2 * 4) = 0xffffff;
      *(undefined4 *)(iVar2 * 4 + -0x73bc9964) = 0xffffffff;
    }
    _DAT_8c4366cc = 2;
    *(undefined4 *)(ar4 + 0x14c) = 2;
  }
  if (_DAT_8c4366cc == 1) {
    uVar5 = _DAT_8c43668c;
    if (_DAT_8c43668c < 0x1000000) {
      _DAT_8c4366cc = 2;
    }
    else {
      iVar2 = 0;
      while (iVar20 = iVar2, iVar20 < 4) {
        *(int *)(&DAT_8c43668c + iVar20 * 4) = *(int *)(&DAT_8c43668c + iVar20 * 4) + -0x3000000;
        uVar5 = 0x3000000;
        *(int *)(iVar20 * 4 + -0x73bc9964) = *(int *)(iVar20 * 4 + -0x73bc9964) + 0x3000000;
        in_stack_fffffe48 = iVar20;
        iVar2 = iVar20 + 1;
      }
    }
  }
  FUN_8c01538c(ar4 + 0x48,uVar5,ar6_01,pcVar9);
  FUN_8c014a94(ar4 + 0x48,0,ar6_01,pcVar9);
  FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,ar6_01,FUN_8c016324);
  uVar8 = 4;
  uVar1 = 0x8c43661c;
  pcVar9 = (code *)&DAT_8c13bda0;
  FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43661c,4,in_stack_fffffe48);
  FUN_8c016340(ar4 + 0x50,pcVar9,uVar1,uVar8);
  if (cVar24 == '\0') {
    puVar10 = (undefined1 *)0x42340000;
    fVar11 = _DAT_8c4366b8;
  }
  else {
    fVar11 = 45.0;
    puVar10 = &DAT_8c4366c8;
  }
  if (cVar23 == '\0' && (float)puVar10 < fVar11) {
    FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8);
    FUN_8c014a94(ar4 + 0x48,_DAT_8c4366c8 + 10,uVar1,uVar8);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43666c,uVar1,uVar8);
    uVar8 = 4;
    uVar1 = 0x8c43664c;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43664c,4,in_stack_fffffe48);
    pcVar9 = FUN_8c016340;
    FUN_8c016340(ar4 + 0x50,FUN_8c016340,uVar1,uVar8);
  }
  if (_DAT_8c4366ac < 2) {
    FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8);
    FUN_8c014a94(ar4 + 0x48,1,uVar1,uVar8);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,uVar1,uVar8);
    uVar1 = 4;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43661c,4,in_stack_fffffe48);
    iVar21 = ar4 + 0x50;
    FUN_8c016340(iVar21,puVar7,iVar21,uVar1);
    iVar20 = ar4 + 0x48;
    iVar2 = iVar20;
    FUN_8c01538c(iVar20,iVar20,iVar21,uVar1);
    FUN_8c014294(iVar20,iVar2,iVar21,uVar1);
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x3ff33333,puVar10);
    }
    else {
      dVar16 = 32768.00780639648;
    }
    if (cVar23 == '\0') {
      fVar11 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar16 * dVar16,0);
    }
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44(0x40e00000,fVar11);
    }
    else {
      dVar16 = -33554440.109375;
    }
    if (cVar23 == '\0') {
      iVar2 = (int)(SUB84(dVar16,0) + (float)((ulonglong)dVar16 >> 0x20));
    }
    else {
      iVar2 = (int)(dVar16 + dVar16);
    }
    FUN_8c014a94(ar4 + 0x48,iVar2,iVar21,uVar1);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,FUN_8c016324,uVar1);
    uVar1 = 4;
    puVar10 = (undefined1 *)0x8c43661c;
    puVar7 = &DAT_8c13bdc0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bdc0,0x8c43661c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
    uStack_64 = 0;
    uStack_62 = 0x7f;
    uStack_60 = 0;
    uStack_5e = 0;
    uStack_5c = 0x7f;
    uStack_5a = 0;
    uStack_58 = 0x7f;
    uStack_56 = 0x7f;
  }
  else if (_DAT_8c4366ac < 4) {
    FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8);
    FUN_8c014a94(ar4 + 0x48,2,uVar1,uVar8);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,uVar1,uVar8);
    uVar1 = 4;
    puVar10 = (undefined1 *)0x8c43661c;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43661c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
    uStack_64 = 0x80;
    uStack_62 = 0x7f;
    puVar7 = (undefined *)0x80;
    uStack_60 = 0x80;
    uStack_5e = 0;
    uStack_5c = 0xff;
    uStack_5a = 0;
    uStack_58 = 0xff;
    uVar1 = 0x7f;
    uStack_56 = 0x7f;
  }
  else if (_DAT_8c4366ac < 7) {
    FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8);
    FUN_8c014a94(ar4 + 0x48,3,uVar1,uVar8);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,uVar1,uVar8);
    uVar1 = 4;
    puVar10 = (undefined1 *)0x8c43661c;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43661c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
    uStack_64 = 0;
    uStack_62 = 0xff;
    uStack_60 = 0;
    uStack_5e = 0x80;
    uStack_5c = 0x7f;
    uStack_5a = 0x80;
    uStack_58 = 0x7f;
    uStack_56 = 0xff;
  }
  else {
    FUN_8c01538c(ar4 + 0x48,pcVar9,uVar1,uVar8);
    FUN_8c014a94(ar4 + 0x48,4,uVar1,uVar8);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,uVar1,uVar8);
    uVar1 = 4;
    puVar10 = (undefined1 *)0x8c43661c;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43661c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
    uStack_64 = 0x80;
    uStack_62 = 0xff;
    uStack_60 = 0x80;
    uStack_5e = 0x80;
    uStack_5c = 0xff;
    uStack_5a = 0x80;
    uStack_58 = 0xff;
    uStack_56 = 0xff;
  }
  if (cVar24 == '\0') {
    puVar3 = (undefined1 *)0x42340000;
    fVar11 = _DAT_8c4366b8;
  }
  else {
    fVar11 = 45.0;
    puVar3 = &DAT_8c4366c8;
  }
  if (cVar23 == '\0' && (float)puVar3 < fVar11) {
    FUN_8c01538c(ar4 + 0x48,puVar7,puVar10,uVar1);
    FUN_8c014a94(ar4 + 0x48,_DAT_8c4366c8 + 10,puVar10,uVar1);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43665c,puVar10,uVar1);
    uVar8 = 4;
    uVar1 = 0x8c43664c;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43664c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,uVar1,uVar8);
    FUN_8c01538c(ar4 + 0x48,FUN_8c01538c,uVar1,uVar8);
    FUN_8c014a94(ar4 + 0x48,0xd,uVar1,uVar8);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,uVar1,uVar8);
    uVar1 = 4;
    puVar10 = (undefined1 *)0x8c43667c;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,0x8c43667c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
  }
  if (cVar24 == '\0') {
    puVar3 = (undefined1 *)0x42960000;
    fVar11 = _DAT_8c4366b8;
  }
  else {
    fVar11 = 75.0;
    puVar3 = &DAT_8c43663c;
  }
  if (cVar23 == '\0' && (float)puVar3 < fVar11) {
    FUN_8c01538c(ar4 + 0x48,puVar7,puVar10,uVar1);
    FUN_8c014a94(ar4 + 0x48,9,puVar10,uVar1);
    FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,puVar10,uVar1);
    uVar1 = 4;
    puVar10 = &DAT_8c43663c;
    puVar7 = &DAT_8c13bda0;
    FUN_8c016318(ar4 + 0x50,&DAT_8c13bda0,&DAT_8c43663c,4,in_stack_fffffe48);
    FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
  }
  FUN_8c01538c(ar4 + 0x48,puVar7,puVar10,uVar1);
  uVar8 = 0x11;
  FUN_8c014a94(ar4 + 0x48,0x11,puVar10,uVar1);
  FUN_8c016340(auStack_78,uVar8,puVar10,uVar1);
  if (*(int *)(ar4 + 0x30) == 1) {
    puVar10 = (undefined1 *)0x0;
    FUN_8c0c3e78(&DAT_8c2b5628,*(undefined4 *)(ar4 + 0x154),0,uVar1);
  }
  iVar2 = *(int *)(ar4 + 0x14c);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    default:
      FUN_8c0ba494(ar4 + 0x158,ar4 + 0x48,puVar10,uVar1);
      break;
    case 2:
    case 3:
      FUN_8c01538c(ar4 + 0x48,4,puVar10,uVar1);
      FUN_8c014a94(ar4 + 0x48,0xe,puVar10,uVar1);
      FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,puVar10,uVar1);
      uVar1 = 4;
      puVar10 = (undefined1 *)0x8c43669c;
      puVar7 = &DAT_8c13bde0;
      FUN_8c016318(ar4 + 0x50,&DAT_8c13bde0,0x8c43669c,4,in_stack_fffffe48);
      FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
      break;
    case 4:
      FUN_8c01538c(ar4 + 0x48,4,puVar10,uVar1);
      FUN_8c014a94(ar4 + 0x48,0x10,puVar10,uVar1);
      FUN_8c016324(ar4 + 0x50,&DAT_8c43662c,puVar10,ar4 + 0x50);
      uVar1 = 4;
      puVar10 = (undefined1 *)0x8c43661c;
      puVar7 = &DAT_8c13bde0;
      FUN_8c016318(ar4 + 0x50,&DAT_8c13bde0,0x8c43661c,4);
      FUN_8c016340(ar4 + 0x50,puVar7,puVar10,uVar1);
    }
  }
  free_if_nonnull_wrap_0151a0(auStack_78,0xffffffff,puVar10,uVar1);
  return 1;
}



/* get_field_c8_0bced0 @ 8c0bced0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_c8_0bced0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0bced8 + ar4);
}



/* FUN_8c0bcedc @ 8c0bcedc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bcedc(int ar4,int ar5,undefined4 ar6,char *ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint ar4_00;
  undefined1 *puVar3;
  undefined4 a5;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar7;
  double in_dr0;
  double dVar8;
  float in_fr13;
  undefined4 in_fr12;
  undefined8 in_dr14;
  double dVar9;
  float fVar10;
  undefined8 in_xd14;
  bool bVar11;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  char acStack_1e8 [464];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [4];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar7 = auStack_c;
  }
  else {
    puVar7 = auStack_18;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)(puVar7 + -4) = unaff_r14;
  *(undefined4 *)(puVar7 + -8) = unaff_r13;
  *(undefined4 *)(puVar7 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar7 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar7 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar7 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar7 + -0x1c) = unaff_r8;
  *(undefined4 *)(puVar7 + -0x20) = in_PR;
  if (*(int *)(ar4 + 0x44) == 0x12) {
    return 1;
  }
  uVar1 = FUN_8c0fa2b8(0x8c35468c,ar5,ar6,ar7);
  *(undefined4 *)(puVar7 + -0x2c) = uVar1;
  if (*(int *)(puVar7 + -0x2c) == 1) {
    return 1;
  }
  iVar2 = *(int *)(ar4 + 0x44);
  puVar4 = (undefined1 *)0x14;
  if (0x14 < iVar2) {
    return 1;
  }
  if (iVar2 < 0) {
    return 1;
  }
                    /* WARNING: Switch is manually overridden */
  switch(iVar2) {
  case 0:
    _DAT_8c4366f8 = 0;
    _DAT_8c43670c = 0;
    _DAT_8c436734 = 9;
    _DAT_8c436730 = 6;
    puVar4 = &DAT_8c43676c;
    DAT_8c43676c = '\0';
    DAT_8c43676d = '\0';
    DAT_8c43676e = '\0';
    DAT_8c43676f = '\0';
    DAT_8c436770 = '\0';
    DAT_8c436771 = '\0';
    FUN_8c0f803c(0x8c35468c,ar5,&DAT_8c43676c,ar7);
    for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
      puVar4 = &DAT_8c43670c;
      _DAT_8c43670c = (uint)*(byte *)(ar5 + iVar2 + 4) + _DAT_8c43670c;
    }
    _DAT_8c436710 = (uint)*(byte *)(ar5 + 0x2c);
    puVar3 = &DAT_8c436714;
    FUN_8c0b9d14(ar5,&DAT_8c436714,puVar4,ar7);
    uVar1 = get_field_c8_0bced0(ar5,puVar3,puVar4,ar7);
    *(undefined4 *)(puVar7 + -0x30) = uVar1;
    _DAT_8c436720 = *(undefined4 *)(puVar7 + -0x30);
    _DAT_8c436728 = *(undefined4 *)(ar5 + 0xc0);
    _DAT_8c436724 = *(undefined4 *)(ar5 + 0xc4);
    *(ushort *)(puVar7 + -0x1dc) = _DAT_8c436714;
    *(undefined2 *)(puVar7 + -0x1da) = _DAT_8c436716;
    *(undefined2 *)(puVar7 + -0x1d8) = _DAT_8c436718;
    *(undefined2 *)(puVar7 + -0x1d6) = _DAT_8c43671a;
    *(undefined2 *)(puVar7 + -0x1d4) = _DAT_8c43671c;
    uVar1 = FUN_8c0b9afc(ar5,FUN_8c0b9afc,puVar4,ar7,*(undefined4 *)(puVar7 + -0x1dc),
                         *(undefined4 *)(puVar7 + -0x1d8));
    *(undefined4 *)(puVar7 + -0x34) = uVar1;
    _DAT_8c43672c = *(undefined4 *)(puVar7 + -0x34);
    _DAT_8c4366f0 = (int *)(ar5 + 0x30);
    _DAT_8c4366f4 = ar5 + 0x44;
    *(undefined4 *)(ar4 + 0x44) = 1;
  case 1:
    if (*(char *)(_DAT_8c4366f4 + 0x25) < '\x01') {
      if (_DAT_8c43670c == 1) {
        FUN_8c0bf170(ar4,s_INTRO_FIRST_8c13c8f6,&DAT_8c13c025,ar7);
        *(undefined4 *)(ar4 + 0x44) = 0x13;
        *(undefined4 *)(ar4 + 0x14c) = 0;
      }
      else {
        *(undefined4 *)(ar4 + 0x14c) = 1;
        *(undefined4 *)(ar4 + 0x44) = 2;
override_jmp_8c0bcf7a_case_2:
        FUN_8c1f826c(&DAT_8c436714,puVar7 + -0x24,puVar4,ar7);
        puVar4 = (undefined1 *)0x8c431a68;
        FUN_8c1f826c(&DAT_8c431a7c,puVar7 + -0x28,0x8c431a68,ar7);
        uVar1 = libgcc_divide_helper_010284
                          (*(int *)(puVar7 + -0x24) - *(int *)(puVar7 + -0x28),0xe10,puVar4,ar7);
        *(undefined4 *)(puVar7 + -0x8c) = uVar1;
        ar4_00 = *(uint *)(puVar7 + -0x8c) & 0xffff;
        if ((((((_DAT_8c436714 != _DAT_8c431a7c) || (DAT_8c436716 != DAT_8c431a7e)) ||
              (DAT_8c436717 != DAT_8c431a7f)) || (ar4_00 < 8)) &&
            ((puVar4 = (undefined1 *)0x18, 0x17 < ar4_00 ||
             (((puVar4 = &DAT_8c431a7f, DAT_8c436717 <= DAT_8c431a7f &&
               (ar7 = &DAT_8c436714, DAT_8c436716 <= DAT_8c431a7e)) &&
              (_DAT_8c436714 <= _DAT_8c431a7c)))))) && (0x17 < ar4_00)) {
          uVar1 = libgcc_divide_helper_010284(ar4_00,0x18,puVar4,ar7);
          *(undefined4 *)(puVar7 + -0x90) = uVar1;
        }
        for (iVar2 = 0; iVar2 < 0xb; iVar2 = iVar2 + 1) {
          *(int *)(puVar7 + -0x94) = iVar2;
          puVar4 = (undefined1 *)0x0;
          *(undefined4 *)(&DAT_8c436738 + *(int *)(puVar7 + -0x94) * 4) = 0;
        }
        a5 = 0;
        uVar1 = FUN_8c0bf160(*(undefined4 *)(ar5 + 0x7d8),0,puVar4,ar7);
        *(undefined4 *)(puVar7 + -0x38) = uVar1;
        _DAT_8c436704 = *(int **)(puVar7 + -0x38);
        puVar3 = (undefined1 *)(**(code **)(*_DAT_8c436704 + 0x118))(_DAT_8c436704,a5,uVar1,ar7);
        *(undefined1 **)(puVar7 + -0x3c) = puVar3;
        pcVar6 = (code *)&DAT_8c4366f8;
        _DAT_8c4366f8 = *(int *)(puVar7 + -0x3c);
        puVar4 = (undefined1 *)0x0;
        while (uVar1 = (undefined4)in_dr14, (int)puVar4 < _DAT_8c4366f8) {
          pcVar6 = (code *)(**(code **)(*_DAT_8c436704 + 0xfc))(_DAT_8c436704,puVar4,pcVar6,ar7);
          *(code **)(puVar7 + -0x40) = pcVar6;
          _DAT_8c4366fc = *(int *)(puVar7 + -0x40);
          uVar1 = get_field_28_0bf124(_DAT_8c4366fc,&DAT_8c4366fc,pcVar6,ar7);
          *(undefined4 *)(puVar7 + -0x44) = uVar1;
          if (*(int *)(puVar7 + -0x44) == 1) {
            uVar1 = (**(code **)(*(int *)(_DAT_8c4366fc + 8) + 0x164))
                              (_DAT_8c4366fc,uVar1,pcVar6,ar7);
            *(undefined4 *)(puVar7 + -0x48) = uVar1;
            iVar2 = *(int *)(puVar7 + -0x48);
            _DAT_8c436700 = iVar2;
            pcVar6 = (code *)get_field_13c_028d9c(iVar2,iVar2,pcVar6,ar7);
            *(code **)(puVar7 + -0x4c) = pcVar6;
            switch(*(undefined4 *)(puVar7 + -0x4c)) {
            case 1:
              pcVar6 = FUN_8c02c3a8;
              uVar1 = FUN_8c02c3a8(_DAT_8c436700,iVar2,FUN_8c02c3a8,ar7);
              *(undefined4 *)(puVar7 + -0x50) = uVar1;
              if (*(int *)(puVar7 + -0x50) == -1) {
                _DAT_8c436738 = _DAT_8c436738 + 1;
              }
              break;
            case 2:
              uVar1 = FUN_8c02c3a8(_DAT_8c436700,iVar2,pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x54) = uVar1;
              if (*(int *)(puVar7 + -0x54) == -1) {
                *(undefined1 **)(puVar7 + -0x98) = &DAT_8c436738;
                pcVar6 = *(code **)(*(int *)(puVar7 + -0x98) + 4);
                *(code **)(*(int *)(puVar7 + -0x98) + 4) = pcVar6 + 1;
              }
              break;
            case 3:
              uVar1 = FUN_8c02c3a8(_DAT_8c436700,iVar2,pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x58) = uVar1;
              if (*(int *)(puVar7 + -0x58) == -1) {
                *(undefined1 **)(puVar7 + -0x9c) = &DAT_8c436738;
                *(int *)(*(int *)(puVar7 + -0x9c) + 8) = *(int *)(*(int *)(puVar7 + -0x9c) + 8) + 1;
                uVar1 = FUN_8c02d3e8(_DAT_8c436700,iVar2,pcVar6,ar7);
                *(undefined4 *)(puVar7 + -0x5c) = uVar1;
                iVar2 = *(int *)(puVar7 + -0x5c);
                if (iVar2 < 0x5a) {
                  if ((iVar2 < 0x46) || ('\x01' < DAT_8c436771)) {
                    if ((0x31 < iVar2) && (DAT_8c436771 < '\x01')) {
                      DAT_8c436771 = '\x01';
                    }
                  }
                  else {
                    DAT_8c436771 = '\x02';
                  }
                }
                else {
                  DAT_8c436771 = '\x03';
                }
                pcVar6 = (code *)&DAT_8c436700;
                uVar1 = FUN_8c02bef8(_DAT_8c436700,FUN_8c02bef8,&DAT_8c436700,ar7);
                *(short *)(puVar7 + -0x1ca) = (short)uVar1;
                if (*(short *)(puVar7 + -0x1ca) == 3) {
                  DAT_8c43676d = DAT_8c43676d + '\x01';
                }
              }
              break;
            case 4:
              uVar1 = FUN_8c02c3a8(_DAT_8c436700,iVar2,pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x60) = uVar1;
              if (*(int *)(puVar7 + -0x60) == -1) {
                pcVar6 = (code *)&DAT_8c436738;
                *(undefined1 **)(puVar7 + -0xa0) = &DAT_8c436738;
                *(int *)(*(int *)(puVar7 + -0xa0) + 0xc) =
                     *(int *)(*(int *)(puVar7 + -0xa0) + 0xc) + 1;
                uVar1 = FUN_8c02d3e8(_DAT_8c436700,&DAT_8c436700,&DAT_8c436738,ar7);
                *(undefined4 *)(puVar7 + -100) = uVar1;
                iVar2 = *(int *)(puVar7 + -100);
                if (iVar2 < 0x5a) {
                  if ((iVar2 < 0x46) || ('\x01' < DAT_8c436771)) {
                    if ((0x31 < iVar2) && (DAT_8c436771 < '\x01')) {
                      DAT_8c436771 = '\x01';
                    }
                  }
                  else {
                    DAT_8c436771 = '\x02';
                  }
                }
                else {
                  DAT_8c436771 = '\x03';
                }
                uVar1 = FUN_8c02bf8c(_DAT_8c436700,&DAT_8c436700,pcVar6,ar7);
                *(short *)(puVar7 + -0x1cc) = (short)uVar1;
                if (*(short *)(puVar7 + -0x1cc) == 0) {
                  *(undefined1 **)(puVar7 + -0xa4) = &DAT_8c436738;
                  *(int *)(*(int *)(puVar7 + -0xa4) + 0xc) =
                       *(int *)(*(int *)(puVar7 + -0xa4) + 0xc) + -1;
                  *(undefined1 **)(puVar7 + -0xa8) = &DAT_8c436738;
                  *(int *)(*(int *)(puVar7 + -0xa8) + 8) =
                       *(int *)(*(int *)(puVar7 + -0xa8) + 8) + 1;
                  pcVar6 = (code *)(int)DAT_8c43676e;
                  DAT_8c43676e = DAT_8c43676e + '\x01';
                }
              }
              break;
            case 6:
              uVar1 = FUN_8c02c3a8(_DAT_8c436700,iVar2,pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x68) = uVar1;
              if (*(int *)(puVar7 + -0x68) == -1) {
                *(undefined1 **)(puVar7 + -0xac) = &DAT_8c436738;
                *(int *)(*(int *)(puVar7 + -0xac) + 0x10) =
                     *(int *)(*(int *)(puVar7 + -0xac) + 0x10) + 1;
              }
              break;
            case 7:
              uVar1 = FUN_8c02c3a8(_DAT_8c436700,iVar2,pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x6c) = uVar1;
              if (*(int *)(puVar7 + -0x6c) == -1) {
                *(undefined1 **)(puVar7 + -0xb0) = &DAT_8c436738;
                iVar2 = *(int *)(*(int *)(puVar7 + -0xb0) + 0x14);
                pcVar6 = (code *)(iVar2 + 1);
                *(code **)(*(int *)(puVar7 + -0xb0) + 0x14) = pcVar6;
                uVar1 = FUN_8c02d3e8(_DAT_8c436700,iVar2,pcVar6,ar7);
                *(undefined4 *)(puVar7 + -0x70) = uVar1;
                iVar5 = *(int *)(puVar7 + -0x70);
                if (iVar5 < 0x5a) {
                  if ((iVar5 < 0x46) || ('\x01' < DAT_8c436771)) {
                    if ((0x31 < iVar5) && (iVar2 = (int)DAT_8c436771, iVar2 < 1)) {
                      DAT_8c436771 = '\x01';
                    }
                  }
                  else {
                    DAT_8c436771 = '\x02';
                  }
                }
                else {
                  DAT_8c436771 = '\x03';
                }
                uVar1 = FUN_8c02bf8c(_DAT_8c436700,iVar2,pcVar6,ar7);
                *(short *)(puVar7 + -0x1ce) = (short)uVar1;
                if (*(short *)(puVar7 + -0x1ce) == 1) {
                  uVar1 = FUN_8c035000(_DAT_8c436700,iVar2,pcVar6,ar7);
                  *(undefined4 *)(puVar7 + -0x74) = uVar1;
                  pcVar6 = *(code **)(puVar7 + -0x74);
                  if (pcVar6 == (code *)0x3) {
                    pcVar6 = (code *)&DAT_8c43676f;
                    iVar2 = DAT_8c43676f + 1;
                    DAT_8c43676f = (char)iVar2;
                  }
                }
                uVar1 = FUN_8c025f68(_DAT_8c436700 + 0x78,iVar2,pcVar6,ar7);
                puVar7[-0x1d0] = (char)uVar1;
                if (puVar7[-0x1d0] == '\x01') {
                  ar7 = &DAT_8c436770;
                  DAT_8c436770 = DAT_8c436770 + '\x01';
                }
              }
              break;
            case 0xc:
            case 0xd:
              uVar1 = (**(code **)(*(int *)(_DAT_8c4366fc + 8) + 0x168))
                                (_DAT_8c4366fc,*(int *)(_DAT_8c4366fc + 8),pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x78) = uVar1;
              _DAT_8c436708 = *(int **)(puVar7 + -0x78);
              uVar1 = (**(code **)(*_DAT_8c436708 + 0x44))(_DAT_8c436708,_DAT_8c436708,pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x7c) = uVar1;
              DAT_8c43676c = (char)*(undefined4 *)(puVar7 + -0x7c);
            case 0:
            case 5:
              *(undefined1 **)(puVar7 + -0xb4) = &DAT_8c436738;
              pcVar6 = *(code **)(puVar7 + -0xb4);
              *(int *)(*(int *)(puVar7 + -0xb4) + 0x18) = *(int *)(pcVar6 + 0x18) + 1;
            }
          }
          puVar3 = puVar4 + 1;
          puVar4 = puVar3;
        }
        _DAT_8c436754 = 0;
        for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
          *(undefined1 **)(puVar7 + -0xb8) = &DAT_8c436738;
          *(int *)(puVar7 + -0xbc) = iVar2;
          puVar3 = (undefined1 *)(*(int *)(puVar7 + -0xbc) * 4);
          *(int *)(*(int *)(puVar7 + -0xb8) + 0x1c) =
               *(int *)(*(int *)(puVar7 + -0xb8) + 0x1c) + *(int *)(&DAT_8c436738 + (int)puVar3);
        }
        _DAT_8c43675c = 0;
        for (iVar2 = 0; iVar2 < 0x14; iVar2 = iVar2 + 1) {
          *(int *)(puVar7 + -0xc0) = iVar2;
          puVar3 = (undefined1 *)0x8c431a68;
          if (*(int *)((*(int *)(puVar7 + -0xc0) * 0x10 - *(int *)(puVar7 + -0xc0)) * 0x10 +
                      -0x73bcd0bc) != -1) {
            *(undefined1 **)(puVar7 + -0xc4) = &DAT_8c436738;
            puVar3 = (undefined1 *)(*(int *)(*(int *)(puVar7 + -0xc4) + 0x24) + 1);
            *(undefined1 **)(*(int *)(puVar7 + -0xc4) + 0x24) = puVar3;
          }
        }
        _DAT_8c436758 = 0;
        for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
          *(int *)(puVar7 + -200) = iVar2;
          puVar3 = (undefined1 *)0x27ac;
          if (*(int *)((*(int *)(puVar7 + -200) * 0x10 - *(int *)(puVar7 + -200)) * 0x10 +
                      -0x73bcbdec) != -1) {
            puVar3 = &DAT_8c436738;
            *(undefined1 **)(puVar7 + -0xcc) = &DAT_8c436738;
            *(int *)(*(int *)(puVar7 + -0xcc) + 0x20) =
                 *(int *)(*(int *)(puVar7 + -0xcc) + 0x20) + 1;
          }
        }
        iVar2 = _DAT_8c436754 + _DAT_8c436750;
        _DAT_8c436760 = iVar2 + _DAT_8c436758;
        (**(code **)(*_DAT_8c436704 + 0x17c))(_DAT_8c436704,puVar3,iVar2,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + -0x80) = (int)((ulonglong)in_dr0 >> 0x20);
          in_fr13 = *(float *)(puVar7 + -0x80);
        }
        else {
          *(double *)(puVar7 + -0x80) = in_dr0;
        }
        (**(code **)(*_DAT_8c436704 + 0x178))(_DAT_8c436704,puVar3,iVar2,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + -0x84) = (int)((ulonglong)in_dr0 >> 0x20);
          dVar9 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x84),uVar1);
        }
        else {
          *(double *)(puVar7 + -0x84) = in_dr0;
          dVar9 = *(double *)(puVar7 + -0x84);
        }
        (**(code **)(*_DAT_8c436704 + 0x188))(_DAT_8c436704,puVar3,iVar2,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + -0x88) = (int)((ulonglong)in_dr0 >> 0x20);
          dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),*(undefined4 *)(puVar7 + -0x88));
        }
        else {
          *(double *)(puVar7 + -0x88) = in_dr0;
        }
        uVar1 = (undefined4)((ulonglong)dVar9 >> 0x20);
        if (DAT_8c431b10 == '\0') {
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(uVar1,0x42c80000);
          }
        }
        else if (DAT_8c431b10 == '\x01') {
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(uVar1,0x42c80000);
          }
        }
        else if ((DAT_8c431b10 == '\x02') && (in_FPSCR_SZ == '\0')) {
          in_fr13 = 100.0;
        }
        if (((_DAT_8c436754 - _DAT_8c436738) - _DAT_8c43673c != _DAT_8c436748) &&
           ((*_DAT_8c4366f0 < 0x18 || (0x1e < *_DAT_8c4366f0)))) {
          if (DAT_8c436771 == '\x01') {
            _DAT_8c436730 = 4;
            _DAT_8c436734 = 3;
          }
          else if (DAT_8c436771 == '\x02') {
            _DAT_8c436730 = 4;
            _DAT_8c436734 = 2;
          }
          else if (DAT_8c436771 == '\x03') {
            _DAT_8c436730 = 4;
            _DAT_8c436734 = 1;
          }
        }
        for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
          *(int *)(puVar7 + -0xd0) = iVar2;
          if ((0x1f < _DAT_8c4366f0[*(int *)(puVar7 + -0xd0)]) &&
             (*(int *)(puVar7 + -0xd4) = iVar2, _DAT_8c4366f0[*(int *)(puVar7 + -0xd4)] < 0x25)) {
            if (in_FPSCR_SZ == '\0') {
              in_dr0 = (double)CONCAT44(0x42200000,SUB84(in_dr0,0));
            }
            else {
              in_dr0 = -1.3550198152570648e-249;
            }
            if (in_FPSCR_PR == '\0') {
              bVar11 = SUB84(dVar9,0) < (float)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              bVar11 = dVar9 < in_dr0;
            }
            if ((bVar11) && (3 < _DAT_8c436734)) {
              _DAT_8c436730 = 3;
              _DAT_8c436734 = 3;
            }
          }
        }
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(0x42840000,SUB84(in_dr0,0));
        }
        else {
          dVar8 = 4294968360.25;
        }
        if (in_FPSCR_PR == '\0') {
          bVar11 = in_fr13 < (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          bVar11 = (double)CONCAT44(in_fr12,in_fr13) < dVar8;
        }
        if ((bVar11) && (2 < _DAT_8c436734)) {
          _DAT_8c436730 = 2;
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(0x41f00000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -3.3212364735250305e+154;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = in_fr13 < (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            bVar11 = (double)CONCAT44(in_fr12,in_fr13) < dVar8;
          }
          if (bVar11) {
            _DAT_8c436734 = 2;
          }
          else {
            _DAT_8c436734 = 3;
          }
        }
        fVar10 = (float)((ulonglong)dVar9 >> 0x20);
        if ((_DAT_8c436748 < 1) && (_DAT_8c43674c < 1)) {
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(0x41700000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -1.3550198123953496e-249;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((bVar11) && (2 < _DAT_8c436734)) {
            _DAT_8c436734 = 2;
            _DAT_8c436730 = 1;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(0x41a00000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -1.3550837490964348e-249;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((!bVar11) && (2 < _DAT_8c436734)) {
            _DAT_8c436734 = 2;
            _DAT_8c436730 = 0;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(0x41a00000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -1.3550155507811096e-249;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((bVar11) && (2 < _DAT_8c436734)) {
            _DAT_8c436734 = 2;
            _DAT_8c436730 = 1;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(0x41c80000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -4.808587738876579e+231;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((!bVar11) && (2 < _DAT_8c436734)) {
            _DAT_8c436734 = 2;
            _DAT_8c436730 = 0;
          }
        }
        if (in_FPSCR_PR == '\0') {
          bVar11 = fVar10 < 1.0;
        }
        else {
          bVar11 = dVar9 < (double)CONCAT44(0x3f800000,SUB84(dVar8,0));
        }
        if ((bVar11) && (1 < _DAT_8c436734)) {
          _DAT_8c436730 = 1;
          _DAT_8c436734 = 1;
        }
        if ('\0' < DAT_8c436770) {
          _DAT_8c436730 = 5;
          _DAT_8c436734 = 2;
        }
        *(undefined4 *)(ar4 + 0x44) = 3;
override_jmp_8c0bcf7a_case_3:
        if ((((*_DAT_8c4366f0 == 5) || (*_DAT_8c4366f0 == 6)) || (*_DAT_8c4366f0 == 7)) &&
           ((DAT_8c43676c < '\x04' && (_DAT_8c436738 == 0)))) {
          FUN_8c0bf170(ar4,&DAT_8c13c902,&DAT_8c13c907,ar7);
          *(int *)(puVar7 + -0xd8) = _DAT_8c4366f4;
          *(char *)(*(int *)(puVar7 + -0xd8) + 0x25) =
               *(char *)(*(int *)(puVar7 + -0xd8) + 0x25) + '\x01';
          *(undefined4 *)(ar4 + 0x44) = 0x13;
        }
        else if (((*_DAT_8c4366f0 == 0x25) ||
                 ((_DAT_8c4366f0[1] == 0x25 || (_DAT_8c4366f0[2] == 0x25)))) &&
                (*(char *)(_DAT_8c4366f4 + 0x25) == '\0')) {
          FUN_8c0bf170(ar4,s_ENDING_8c13c90c,&DAT_8c13c025,ar7);
          *(int *)(puVar7 + -0xdc) = _DAT_8c4366f4;
          *(char *)(*(int *)(puVar7 + -0xdc) + 0x25) =
               *(char *)(*(int *)(puVar7 + -0xdc) + 0x25) + '\x01';
          *(undefined4 *)(ar4 + 0x44) = 0x13;
        }
        else if ((*_DAT_8c4366f0 < 4) && (_DAT_8c43670c == 2)) {
          FUN_8c0bf170(ar4,s_NOACTION_8c13c913,&DAT_8c13c025,ar7);
          *(undefined4 *)(ar4 + 0x44) = 0x10;
        }
        else if (_DAT_8c436760 == 0) {
          FUN_8c0bf170(ar4,&DAT_8c13c902,&DAT_8c13c91c,ar7);
          *(int *)(puVar7 + -0xe0) = _DAT_8c4366f4;
          *(char *)(*(int *)(puVar7 + -0xe0) + 0x25) =
               *(char *)(*(int *)(puVar7 + -0xe0) + 0x25) + '\x01';
          *(undefined4 *)(ar4 + 0x44) = 0x13;
        }
        else {
          puVar4 = (undefined1 *)0x44;
          *(undefined4 *)(ar4 + 0x44) = 4;
override_jmp_8c0bcf7a_case_4:
          FUN_8c0fa5bc(0x8c35468c,_DAT_8c436720,puVar4,ar7);
          FUN_8c0fa5f0(0x8c35468c,_DAT_8c436710,puVar4,ar7);
          FUN_8c0fa624(0x8c35468c,_DAT_8c43672c,0x8c35468c,ar7);
          FUN_8c0bf170(ar4,s_INTRO_NORMAL_8c13c920,&DAT_8c13c025,ar7);
          *(undefined4 *)(ar4 + 0x44) = 5;
        }
      }
    }
    else {
      *(undefined4 *)(ar4 + 0x44) = 0x13;
      *(undefined4 *)(ar4 + 0x14c) = 3;
    }
    break;
  case 2:
    goto override_jmp_8c0bcf7a_case_2;
  case 3:
    goto override_jmp_8c0bcf7a_case_3;
  case 4:
    goto override_jmp_8c0bcf7a_case_4;
  case 5:
    *(undefined4 *)(ar4 + 0x44) = 6;
    _DAT_8c436764 = 4;
    _DAT_8c436768 = 0;
    for (iVar2 = 4; -1 < iVar2; iVar2 = iVar2 + -1) {
      *(int *)(puVar7 + -0xe4) = iVar2;
      if (0x29 < _DAT_8c4366f0[*(int *)(puVar7 + -0xe4)]) {
        *(int *)(puVar7 + -0xe8) = iVar2;
        if (_DAT_8c4366f0[*(int *)(puVar7 + -0xe8)] < 0x30) {
          *(int *)(puVar7 + -0xec) = iVar2;
          FUN_8c0fa5bc(0x8c35468c,_DAT_8c4366f0[*(int *)(puVar7 + -0xec)],*(int *)(puVar7 + -0xe8),
                       ar7);
          FUN_8c0bf170(ar4,s_REVIEW_8c13c92d,&DAT_8c13c902,ar7);
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            *(int *)(puVar7 + -0xf0) = iVar2;
            if ((_DAT_8c4366f0[*(int *)(puVar7 + -0xf0)] < 0x2a) ||
               (*(int *)(puVar7 + -0xf4) = iVar2, 0x2f < _DAT_8c4366f0[*(int *)(puVar7 + -0xf4)])) {
              *(int *)(puVar7 + -0x100) = iVar2;
              *(int *)(puVar7 + -0xfc) = _DAT_8c4366f0[*(int *)(puVar7 + -0x100)] + _DAT_8c4366f4;
              **(char **)(puVar7 + -0xfc) = **(char **)(puVar7 + -0xfc) + '\x01';
            }
            else {
              *(int *)(puVar7 + -0xf8) = iVar2;
              _DAT_8c4366f0[*(int *)(puVar7 + -0xf8)] = 0;
            }
          }
          *(undefined4 *)(ar4 + 0x44) = 0x10;
          return 1;
        }
      }
    }
    break;
  case 6:
    for (; iVar2 = _DAT_8c436764, -1 < _DAT_8c436764; _DAT_8c436764 = _DAT_8c436764 + -1) {
      *(int *)(puVar7 + -0x104) = _DAT_8c436764;
      if ((4 < _DAT_8c4366f0[*(int *)(puVar7 + -0x104)]) &&
         (*(int *)(puVar7 + -0x108) = _DAT_8c436764,
         *(char *)(_DAT_8c4366f4 + _DAT_8c4366f0[*(int *)(puVar7 + -0x108)]) == '\0')) {
        *(int *)(puVar7 + -0x10c) = _DAT_8c436764;
        if (((_DAT_8c4366f0[*(int *)(puVar7 + -0x10c)] == 6) ||
            ((*(int *)(puVar7 + -0x110) = _DAT_8c436764,
             _DAT_8c4366f0[*(int *)(puVar7 + -0x110)] == 7 ||
             (*(int *)(puVar7 + -0x114) = _DAT_8c436764,
             _DAT_8c4366f0[*(int *)(puVar7 + -0x114)] == 8)))) ||
           (*(int *)(puVar7 + -0x118) = _DAT_8c436764,
           _DAT_8c4366f0[*(int *)(puVar7 + -0x118)] == 10)) {
          iVar5 = 1;
          if (_DAT_8c436764 != 1) {
            if (_DAT_8c436764 != 2) {
              if (_DAT_8c436764 != 3) {
                if (_DAT_8c436764 != 4) goto LAB_8c0be428;
                *(undefined4 *)(puVar7 + -0x11c) = 4;
                *(undefined4 *)(puVar7 + -0x120) = 3;
                if (_DAT_8c4366f0[*(int *)(puVar7 + -0x11c)] + 1 ==
                    _DAT_8c4366f0[*(int *)(puVar7 + -0x120)]) {
                  *(undefined4 *)(puVar7 + -0x128) = 4;
                  *(int *)(puVar7 + -0x124) =
                       _DAT_8c4366f0[*(int *)(puVar7 + -0x128)] + _DAT_8c4366f4;
                  **(char **)(puVar7 + -0x124) = **(char **)(puVar7 + -0x124) + '\x01';
                  goto LAB_8c0be818;
                }
                iVar5 = 2;
              }
              *(int *)(puVar7 + -300) = _DAT_8c436764;
              *(int *)(puVar7 + -0x130) = _DAT_8c436764 - iVar5;
              if (_DAT_8c4366f0[*(int *)(puVar7 + -300)] + 1 ==
                  _DAT_8c4366f0[*(int *)(puVar7 + -0x130)]) {
                *(int *)(puVar7 + -0x138) = _DAT_8c436764;
                *(int *)(puVar7 + -0x134) = _DAT_8c4366f0[*(int *)(puVar7 + -0x138)] + _DAT_8c4366f4
                ;
                ar7 = *(char **)(puVar7 + -0x134);
                **(char **)(puVar7 + -0x134) = *ar7 + '\x01';
                goto LAB_8c0be818;
              }
              iVar5 = iVar5 + 1;
            }
            *(int *)(puVar7 + -0x13c) = _DAT_8c436764;
            *(int *)(puVar7 + -0x140) = _DAT_8c436764 - iVar5;
            if (_DAT_8c4366f0[*(int *)(puVar7 + -0x13c)] + 1 ==
                _DAT_8c4366f0[*(int *)(puVar7 + -0x140)]) {
              *(int *)(puVar7 + -0x148) = _DAT_8c436764;
              *(int *)(puVar7 + -0x144) = _DAT_8c4366f0[*(int *)(puVar7 + -0x148)] + _DAT_8c4366f4;
              **(char **)(puVar7 + -0x144) = **(char **)(puVar7 + -0x144) + '\x01';
              goto LAB_8c0be818;
            }
            iVar5 = iVar5 + 1;
          }
          *(int *)(puVar7 + -0x14c) = _DAT_8c436764;
          *(int *)(puVar7 + -0x150) = _DAT_8c436764 - iVar5;
          if (_DAT_8c4366f0[*(int *)(puVar7 + -0x14c)] + 1 ==
              _DAT_8c4366f0[*(int *)(puVar7 + -0x150)]) {
            *(int *)(puVar7 + -0x158) = _DAT_8c436764;
            *(int *)(puVar7 + -0x154) = _DAT_8c4366f0[*(int *)(puVar7 + -0x158)] + _DAT_8c4366f4;
            **(char **)(puVar7 + -0x154) = **(char **)(puVar7 + -0x154) + '\x01';
            goto LAB_8c0be818;
          }
        }
LAB_8c0be428:
        *(int *)(puVar7 + -0x15c) = _DAT_8c436764;
        if (((_DAT_8c4366f0[*(int *)(puVar7 + -0x15c)] == 5) && (2 < _DAT_8c436764)) &&
           ((*_DAT_8c4366f0 == 8 ||
            (((_DAT_8c4366f0[1] == 8 || (*_DAT_8c4366f0 == 9)) || (_DAT_8c4366f0[1] == 9)))))) {
          *(int *)(puVar7 + -0x164) = _DAT_8c436764;
          *(int *)(puVar7 + -0x160) = _DAT_8c4366f0[*(int *)(puVar7 + -0x164)] + _DAT_8c4366f4;
          **(char **)(puVar7 + -0x160) = **(char **)(puVar7 + -0x160) + '\x01';
        }
        else {
          *(int *)(puVar7 + -0x168) = _DAT_8c436764;
          if (((_DAT_8c4366f0[*(int *)(puVar7 + -0x168)] == 7) && (0 < _DAT_8c436764)) &&
             (*(int *)(puVar7 + -0x16c) = _DAT_8c436764 + -1,
             _DAT_8c4366f0[*(int *)(puVar7 + -0x16c)] == 9)) {
            *(int *)(puVar7 + -0x174) = _DAT_8c436764;
            *(int *)(puVar7 + -0x170) = _DAT_8c4366f0[*(int *)(puVar7 + -0x174)] + _DAT_8c4366f4;
            **(char **)(puVar7 + -0x170) = **(char **)(puVar7 + -0x170) + '\x01';
          }
          else {
            *(int *)(puVar7 + -0x178) = _DAT_8c436764;
            if ((_DAT_8c4366f0[*(int *)(puVar7 + -0x178)] == 0xe) &&
               ('\0' < *(char *)(_DAT_8c4366f4 + 0xf))) {
              *(int *)(puVar7 + -0x180) = _DAT_8c436764;
              *(int *)(puVar7 + -0x17c) = _DAT_8c4366f0[*(int *)(puVar7 + -0x180)] + _DAT_8c4366f4;
              **(char **)(puVar7 + -0x17c) = **(char **)(puVar7 + -0x17c) + '\x01';
            }
            else {
              *(int *)(puVar7 + -0x184) = _DAT_8c436764;
              if ((_DAT_8c4366f0[*(int *)(puVar7 + -0x184)] == 0xd) && (_DAT_8c436740 == 0)) {
                *(int *)(puVar7 + -0x18c) = _DAT_8c436764;
                *(int *)(puVar7 + -0x188) = _DAT_8c4366f0[*(int *)(puVar7 + -0x18c)] + _DAT_8c4366f4
                ;
                **(char **)(puVar7 + -0x188) = **(char **)(puVar7 + -0x188) + '\x01';
              }
              else {
                *(int *)(puVar7 + -400) = _DAT_8c436764;
                if ((_DAT_8c4366f0[*(int *)(puVar7 + -400)] == 0xf) && (2 < _DAT_8c43673c)) {
                  *(int *)(puVar7 + -0x198) = _DAT_8c436764;
                  *(int *)(puVar7 + -0x194) =
                       _DAT_8c4366f0[*(int *)(puVar7 + -0x198)] + _DAT_8c4366f4;
                  **(char **)(puVar7 + -0x194) = **(char **)(puVar7 + -0x194) + '\x01';
                }
                else {
                  *(int *)(puVar7 + -0x19c) = _DAT_8c436764;
                  if ((_DAT_8c4366f0[*(int *)(puVar7 + -0x19c)] == 0x10) &&
                     (*(char *)(_DAT_8c4366f4 + 0xc) == '\0')) {
                    *(int *)(puVar7 + -0x1a4) = _DAT_8c436764;
                    *(int *)(puVar7 + -0x1a0) =
                         _DAT_8c4366f0[*(int *)(puVar7 + -0x1a4)] + _DAT_8c4366f4;
                    **(char **)(puVar7 + -0x1a0) = **(char **)(puVar7 + -0x1a0) + '\x01';
                  }
                  else {
                    *(int *)(puVar7 + -0x1a8) = _DAT_8c436764;
                    if ((_DAT_8c4366f0[*(int *)(puVar7 + -0x1a8)] != 0x12) ||
                       (DAT_8c43676e < '\x01')) {
                      *(int *)(puVar7 + -0x1ac) = _DAT_8c436764;
                      iVar5 = *(int *)(puVar7 + -0x1ac);
                      FUN_8c0fa5bc(0x8c35468c,_DAT_8c4366f0[iVar5],iVar5,ar7);
                      *(int *)(puVar7 + -0x1b0) = iVar2;
                      if (_DAT_8c4366f0[*(int *)(puVar7 + -0x1b0)] == 0x23) {
                        *(int *)(puVar7 + -0x1b4) = iVar2 + -1;
                        if ((_DAT_8c4366f0[*(int *)(puVar7 + -0x1b4)] == 0x22) ||
                           (*(int *)(puVar7 + -0x1b8) = iVar2 + -2,
                           _DAT_8c4366f0[*(int *)(puVar7 + -0x1b8)] == 0x22)) {
                          FUN_8c0fa5bc(0x8c35468c,0x23,iVar5,ar7);
                          *(int *)(puVar7 + -0x1bc) = _DAT_8c4366f4;
                          *(char *)(*(int *)(puVar7 + -0x1bc) + 0x23) =
                               *(char *)(*(int *)(puVar7 + -0x1bc) + 0x23) + '\x01';
                        }
                        else {
                          FUN_8c0fa5bc(0x8c35468c,0x16,0x8c35468c,ar7);
                        }
                      }
                      if (_DAT_8c436768 == 0) {
                        FUN_8c0bf170(ar4,s_REVIEW_8c13c92d,s_GREET_8c13c934,FUN_8c0bf170);
                      }
                      else {
                        FUN_8c0bf170(ar4,s_REVIEW_8c13c92d,s_EVENT_8c13c93a,ar7);
                      }
                      *(int *)(puVar7 + -0x1c4) = iVar2;
                      *(int *)(puVar7 + -0x1c0) =
                           _DAT_8c4366f0[*(int *)(puVar7 + -0x1c4)] + _DAT_8c4366f4;
                      **(char **)(puVar7 + -0x1c0) = **(char **)(puVar7 + -0x1c0) + '\x01';
                      _DAT_8c436764 = _DAT_8c436764 + -1;
                      _DAT_8c436768 = 1;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_8c0be818:
    }
    *(undefined4 *)(ar4 + 0x44) = 7;
    break;
  case 7:
    if (_DAT_8c436754 == 0) {
      *(undefined4 *)(ar4 + 0x44) = 0xf;
    }
    else if (*(char *)(_DAT_8c4366f4 + 5) == '\0') {
      *(undefined4 *)(ar4 + 0x44) = 0xf;
    }
    else {
      if ((((0 < _DAT_8c43674c) && (*(char *)(_DAT_8c4366f4 + 0x1e) == '\0')) &&
          (*(char *)(_DAT_8c4366f4 + 0x1f) == '\0')) && (*(char *)(_DAT_8c4366f4 + 0x20) == '\0')) {
        _DAT_8c436748 = _DAT_8c43674c;
        _DAT_8c43674c = 0;
      }
      FUN_8c0bf170(ar4,s_STATE_INTRO_8c13c940,&DAT_8c13c025,ar7);
      *(undefined4 *)(ar4 + 0x44) = 8;
    }
    break;
  case 8:
    if (0 < _DAT_8c436738) {
      FUN_8c0fa5bc(0x8c35468c,0,0x14,ar7);
      FUN_8c0fa5f0(0x8c35468c,_DAT_8c436738,FUN_8c0fa5f0,ar7);
      FUN_8c0bf170(ar4,s_STATE_CHARA_8c13c94c,&DAT_8c13c025,ar7);
    }
    *(undefined4 *)(ar4 + 0x44) = 9;
    break;
  case 9:
    if (0 < _DAT_8c436740 + _DAT_8c43673c) {
      FUN_8c0fa5bc(0x8c35468c,1,0x14,ar7);
      FUN_8c0fa5f0(0x8c35468c,_DAT_8c436740 + _DAT_8c43673c,puVar4,ar7);
      FUN_8c0bf170(ar4,s_STATE_CHARA_8c13c94c,&DAT_8c13c025,ar7);
    }
    *(undefined4 *)(ar4 + 0x44) = 10;
    break;
  case 10:
    if (0 < _DAT_8c436744) {
      pcVar6 = FUN_8c0fa5bc;
      FUN_8c0fa5bc(0x8c35468c,2,FUN_8c0fa5bc,ar7);
      FUN_8c0fa5f0(0x8c35468c,_DAT_8c436744,pcVar6,ar7);
      FUN_8c0bf170(ar4,s_STATE_CHARA_8c13c94c,&DAT_8c13c025,ar7);
    }
    *(undefined4 *)(ar4 + 0x44) = 0xb;
    break;
  case 0xb:
    if (0 < _DAT_8c436748) {
      puVar4 = &DAT_8c4366f4;
      if (*(char *)(_DAT_8c4366f4 + 0x1e) == '\0') {
        FUN_8c0fa5bc(0x8c35468c,3,&DAT_8c4366f4,ar7);
        FUN_8c0fa5f0(0x8c35468c,_DAT_8c436748,puVar4,ar7);
        FUN_8c0bf170(ar4,s_STATE_CHARA_8c13c94c,&DAT_8c13c025,ar7);
      }
      else {
        _DAT_8c43674c = _DAT_8c436748;
        _DAT_8c436748 = 0;
      }
    }
    *(undefined4 *)(ar4 + 0x44) = 0xc;
    break;
  case 0xc:
    if (0 < _DAT_8c43674c) {
      FUN_8c0fa5bc(0x8c35468c,4,0x14,ar7);
      FUN_8c0fa5f0(0x8c35468c,_DAT_8c43674c,puVar4,ar7);
      FUN_8c0bf170(ar4,s_STATE_CHARA_8c13c94c,&DAT_8c13c025,ar7);
    }
    *(undefined4 *)(ar4 + 0x44) = 0xd;
    break;
  case 0xd:
    if (0 < _DAT_8c436754) {
      FUN_8c0bf170(ar4,s_STATE_ALL_8c13c958,&DAT_8c13c025,ar7);
    }
    *(undefined4 *)(ar4 + 0x44) = 0xe;
    break;
  case 0xe:
    if ((_DAT_8c436734 < 1) || (7 < _DAT_8c436734)) {
      FUN_8c0fa5bc(0x8c35468c,0,0x14,ar7);
      if (in_FPSCR_SZ == '\0') {
        puVar3 = (undefined1 *)0x42840000;
        fVar10 = _DAT_8c431c18;
      }
      else {
        fVar10 = 66.0;
        puVar3 = &DAT_8c4366f0;
      }
      if (((in_FPSCR_PR != '\0' || (float)puVar3 <= fVar10) || (*_DAT_8c4366f0 < 5)) ||
         (0x17 < *_DAT_8c4366f0)) {
        if (((_DAT_8c43675c < 3) && (0xf < *_DAT_8c4366f0)) &&
           ((*_DAT_8c4366f0 < 0x25 &&
            (puVar4 = (undefined1 *)(int)*(char *)(_DAT_8c4366f4 + 0xc),
            '\0' < *(char *)(_DAT_8c4366f4 + 0xc))))) {
          FUN_8c0fa5bc(0x8c35468c,2,puVar4,ar7);
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            puVar3 = (undefined1 *)0x42200000;
            fVar10 = _DAT_8c432f24;
          }
          else {
            fVar10 = 40.0;
            puVar3 = &DAT_8c4366f0;
          }
          if (((in_FPSCR_PR == '\0' && fVar10 < (float)puVar3) &&
              (ar7 = (char *)*_DAT_8c4366f0, 0xf < (int)ar7)) &&
             ((*_DAT_8c4366f0 < 0x25 && ('\0' < *(char *)(_DAT_8c4366f4 + 0xc))))) {
            FUN_8c0fa5bc(0x8c35468c,3,puVar4,ar7);
          }
        }
      }
      else {
        FUN_8c0fa5bc(0x8c35468c,1,puVar4,ar7);
      }
      FUN_8c0bf170(ar4,s_STATE_GOOD_8c13c96f,&DAT_8c13c025,ar7);
    }
    else {
      FUN_8c0fa5bc(0x8c35468c,_DAT_8c436730,0x14,ar7);
      FUN_8c0fa5f0(0x8c35468c,_DAT_8c436734,puVar4,ar7);
      FUN_8c0bf170(ar4,s_STATE_DAMAGE_8c13c962,&DAT_8c13c025,ar7);
    }
    *(undefined4 *)(ar4 + 0x44) = 0xf;
    break;
  case 0xf:
    *(undefined4 *)(ar4 + 0x44) = 0x10;
    pcVar6 = FUN_8c0fa5bc;
    FUN_8c0fa5bc(0x8c35468c,*_DAT_8c4366f0,FUN_8c0fa5bc,ar7);
    switch(*_DAT_8c4366f0) {
    case 4:
    case 5:
    case 6:
    case 7:
      if ('\x03' < DAT_8c43676c) {
        FUN_8c0fa5bc(0x8c35468c,8,&DAT_8c43676c,ar7);
      }
      break;
    case 8:
    case 9:
    case 0xc:
    case 0x14:
    case 0x18:
    case 0x19:
    case 0x21:
      break;
    default:
      if ((DAT_8c43676e < '\x01') || (*(char *)(_DAT_8c4366f4 + 0x12) != '\0')) {
        if (DAT_8c43676f < '\x01') {
          return 1;
        }
        if (DAT_8c436770 != '\0') {
          return 1;
        }
        if (*(char *)(_DAT_8c4366f4 + 0x21) != '\0') {
          return 1;
        }
        if (_DAT_8c43674c == 1) {
          return 1;
        }
        FUN_8c0fa5bc(0x8c35468c,0x33,(char *)(_DAT_8c4366f4 + 0x21),ar7);
      }
      else {
        FUN_8c0fa5bc(0x8c35468c,0x32,pcVar6,ar7);
      }
      break;
    case 0xf:
      if (DAT_8c43676d < '\x01') {
        return 1;
      }
      if (*(char *)(_DAT_8c4366f4 + 0xc) != '\0') {
        return 1;
      }
      break;
    case 0x10:
    case 0x11:
      if ('\x01' < *(char *)(_DAT_8c4366f4 + 0x43)) {
        return 1;
      }
      if (_DAT_8c436740 != 2) {
        return 1;
      }
      if (*(char *)(_DAT_8c4366f4 + 0xd) != '\0') {
        return 1;
      }
      *(int *)(puVar7 + -0x1c8) = _DAT_8c4366f4;
      *(char *)(*(int *)(puVar7 + -0x1c8) + 0x43) =
           *(char *)(*(int *)(puVar7 + -0x1c8) + 0x43) + '\x01';
      break;
    case 0x13:
      if ('\0' < *(char *)(_DAT_8c4366f4 + 0x14)) {
        return 1;
      }
      if (_DAT_8c436744 == 1) {
        return 1;
      }
      break;
    case 0x1f:
      if ('\0' < *(char *)(_DAT_8c4366f4 + 0x20)) {
        return 1;
      }
    }
    FUN_8c0bf170(ar4,s_HIGHLIGHT_8c13c97a,&DAT_8c13c025,ar7);
    break;
  case 0x10:
    FUN_8c0bf170(ar4,s_FINISH_8c13c984,&DAT_8c13c025,ar7);
    *(undefined4 *)(ar4 + 0x44) = 0x13;
    *(undefined4 *)(ar4 + 0x14c) = 2;
    break;
  case 0x13:
    if ((*(int *)(ar4 + 0x14c) == 0) && (_DAT_8c4362f0 != 0xe)) {
      *(undefined4 *)(ar4 + 0x44) = 1;
    }
    else {
      FUN_8c0bf170(ar4,&DAT_8c13c98b,&DAT_8c13c025,ar7);
      *(undefined4 *)(ar4 + 0x44) = 0x14;
      *(undefined4 *)(ar4 + 0x14c) = 2;
    }
    break;
  case 0x14:
    *(undefined4 *)(ar4 + 0x44) = 0x12;
    *(undefined4 *)(ar4 + 0x14c) = 2;
  }
  return 1;
}



/* FUN_8c0bf064 @ 8c0bf064 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined8 * FUN_8c0bf064(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  
  if (*(int *)(DAT_8c0bf09c + ar4) == 0) {
    puVar1 = &DAT_8c0bf0a0;
  }
  else {
    (*(code *)PTR_FUN_8c0bf0a8)(ar4 + DAT_8c0bf0a0._4_4_,ar5,ar6,ar7);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



/* FUN_8c0bf0ac @ 8c0bf0ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf0ac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return DAT_8c0bf0b8;
}



/* FUN_8c0bf0bc @ 8c0bf0bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf0bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7,ar4);
  return 4;
}



/* FUN_8c0bf0e8 @ 8c0bf0e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf0e8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c0bf0f0 @ 8c0bf0f0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf0f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0bf11c(ar4 + 0x13b70,ar5,ar6,ar7,ar4);
  return 4;
}



/* FUN_8c0bf11c @ 8c0bf11c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf11c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* get_field_28_0bf124 @ 8c0bf124 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_28_0bf124(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x28);
}



/* FUN_8c0bf12c @ 8c0bf12c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf12c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_get_field_300_0bf154_8c0bf150)(ar4 + DAT_8c0bf14c,ar5,ar6,ar7);
  return uVar1;
}



/* get_field_300_0bf154 @ 8c0bf154 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_300_0bf154(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c0bf15c + ar4);
}



/* FUN_8c0bf160 @ 8c0bf160 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf160(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + ar5 * 4 + 8);
}



/* FUN_8c0bf170 @ 8c0bf170 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf170(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  _DAT_8c4362f0 = 0;
  ar6_00 = ar6;
  strcpy(0x8c4362a0,ar5,ar6,ar7,ar5);
  strcpy(0x8c4362c0,ar6,ar6_00,ar7,ar5);
  _DAT_8c43627c = FUN_8c0f8320(0x8c35468c,6,0x8c436280,ar7);
  return _DAT_8c43627c;
}



/* FUN_8c0bf1c8 @ 8c0bf1c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0bf1c8(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = ar5 + 0x30;
  for (iVar3 = 4; -1 < iVar3; iVar3 = iVar3 + -1) {
    if ((0x29 < *(int *)(iVar3 * 4 + iVar2)) && (*(int *)(iVar3 * 4 + iVar2) < 0x30)) {
      *(undefined4 *)(iVar3 * 4 + iVar2) = 0;
    }
    pcVar1 = (char *)(*(int *)(iVar3 * 4 + iVar2) + ar5 + 0x44);
    in_r0 = *pcVar1 + 1;
    *pcVar1 = (char)in_r0;
  }
  return in_r0;
}



/* FUN_8c0bf22c @ 8c0bf22c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf22c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *a4;
  undefined4 uVar1;
  undefined4 ar6_00;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    a4 = (int *)(*(code *)PTR_FUN_8c0bf2f0)(*(undefined4 *)(DAT_8c0bf2ec + ar5),iVar2,ar6,ar7);
    (**(code **)(DAT_8c0bf2f4 + *a4))(a4,0,ar6,ar7);
  }
  (*(code *)PTR_pack_release_entry_handle_8c0bf300)
            (DAT_8c0bf2fc,*(undefined4 *)(DAT_8c0bf2f8 + ar4),ar6,ar7);
  uVar1 = *(undefined4 *)(DAT_8c0bf304 + ar4);
  (*(code *)PTR_pack_release_entry_handle_8c0bf300)(DAT_8c0bf2fc,uVar1,ar6,ar7);
  iVar2 = (*(code *)PTR_FUN_8c0bf30c)(DAT_8c0bf308,uVar1,ar6,ar7);
  if (iVar2 == 1) {
    (*(code *)PTR_FUN_8c0bf310)(DAT_8c0bf308,uVar1,ar6,ar7);
  }
  *(undefined4 *)(DAT_8c0bf314 + ar4) = DAT_8c0bf318;
  ar6_00 = 0;
  uVar1 = 0xffffffff;
  (*(code *)PTR_FUN_8c0bf320)(DAT_8c0bf31c,0xffffffff,0,ar7);
  (*(code *)PTR_s_Failed_s_015312_8c0bf324)(ar4 + 0x48,uVar1,ar6_00,ar7);
  *(undefined4 *)(DAT_8c0bf328 + ar4) = 4;
  *(undefined4 *)(ar4 + 0x44) = 0x12;
  (*(code *)PTR_FUN_8c0bf330)(ar4 + DAT_8c0bf32c,uVar1,ar6_00,ar7);
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(DAT_8c0bf334 + ar5) = 1;
  return 1;
}



/* FUN_8c0bf338 @ 8c0bf338 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c0bf338(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_FUN_8c0bf37c)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c0bf380;
  ar4[2] = 0;
  puVar1 = PTR_DAT_8c0bf384;
  uVar2 = *(undefined4 *)(PTR_DAT_8c0bf384 + 4);
  ar4[3] = *(undefined4 *)PTR_DAT_8c0bf384;
  ar4[4] = uVar2;
  ar4[5] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0bf388;
  uVar2 = *(undefined4 *)(PTR_DAT_8c0bf388 + 4);
  ar4[6] = *(undefined4 *)PTR_DAT_8c0bf388;
  ar4[7] = uVar2;
  ar4[8] = *(undefined4 *)(puVar1 + 8);
  return ar4;
}



/* Class_12b334_m0_0bf38c @ 8c0bf38c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12b334_m0_0bf38c(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b334;
    ar5_00 = 0;
    free_if_nonnull_wrap_0ba8ac(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12b334_m1_0bf3d4 @ 8c0bf3d4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12b334_m1_0bf3d4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ar5;
  (*(code *)PTR_pure_virtual_stub_8c0bf424)(ar4,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c0bf42c)(*(undefined4 *)(DAT_8c0bf428 + ar5),iVar1,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(ar4 + 8) = 0;
    iVar1 = DAT_8c0bf430;
    *(undefined4 *)(DAT_8c0bf430 + ar5) = 0;
  }
  return iVar1;
}



/* s_EPILOG_0bf440 @ 8c0bf440 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_EPILOG_0bf440(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  noop_102824(s_EPILOG_____8c13c990,300,0x1d6,0xd,0xffffffff);
  return 1;
}



/* FUN_8c0bf478 @ 8c0bf478 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0bf478(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c0bf49c)(ar4 + 0x28,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0bf4a0)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c0bf4a4 @ 8c0bf4a4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0bf4de) */
/* WARNING: Removing unreachable block (ram,0x8c0bf4d6) */
/* WARNING: Removing unreachable block (ram,0x8c0bf4ca) */
/* WARNING: Removing unreachable block (ram,0x8c0bf4c4) */
/* WARNING: Removing unreachable block (ram,0x8c0bf524) */
/* WARNING: Removing unreachable block (ram,0x8c0bf518) */
/* WARNING: Removing unreachable block (ram,0x8c0bf512) */
/* WARNING: Removing unreachable block (ram,0x8c0bf50c) */
/* WARNING: Removing unreachable block (ram,0x8c0bf4fe) */
/* WARNING: Removing unreachable block (ram,0x8c0bf4f8) */
/* WARNING: Removing unreachable block (ram,0x8c0bf4fc) */
/* WARNING: Removing unreachable block (ram,0x8c0bf502) */
/* WARNING: Removing unreachable block (ram,0x8c0bf50e) */
/* WARNING: Removing unreachable block (ram,0x8c0bf516) */
/* WARNING: Removing unreachable block (ram,0x8c0bf522) */
/* WARNING: Removing unreachable block (ram,0x8c0bf4c0) */
/* WARNING: Removing unreachable block (ram,0x8c0bf4c6) */
/* WARNING: Removing unreachable block (ram,0x8c0bf4d4) */
/* WARNING: Removing unreachable block (ram,0x8c0bf4da) */
/* WARNING: Removing unreachable block (ram,0x8c0bf4e8) */
/* WARNING: Unknown calling convention */

undefined * FUN_8c0bf4a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  float fVar2;
  
  puVar1 = *(undefined **)(ar4 + 4);
  if (puVar1 == (undefined *)0x1) {
    fVar2 = *(float *)(ar4 + 0x2c) - 15.0;
    *(float *)(ar4 + 0x2c) = fVar2;
    puVar1 = (undefined *)0x8;
    if (fVar2 <= 0.0) {
      *(undefined4 *)(ar4 + 0x2c) = 0;
      puVar1 = (undefined *)0x0;
      *(undefined4 *)(ar4 + 4) = 0;
    }
  }
  else if (puVar1 == (undefined *)0x2) {
    fVar2 = *(float *)(ar4 + 0x2c) + 15.0;
    *(float *)(ar4 + 0x2c) = fVar2;
    puVar1 = &DAT_8c0bf540;
    if (660.0 <= fVar2) {
      *(undefined4 *)(ar4 + 0x2c) = 0x44250000;
      *(undefined4 *)(ar4 + 4) = 0;
      puVar1 = (undefined *)FUN_8c0bf548(ar4,ar5,ar6,ar7);
    }
  }
  return puVar1;
}



/* FUN_8c0bf548 @ 8c0bf548 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf548(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  return 0;
}



/* FUN_8c0bf550 @ 8c0bf550 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf550(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    (*(code *)PTR_FUN_8c0bf580)(ar4,ar5,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c0bf584)(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c0bf588 @ 8c0bf588 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf588(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  
  uVar2 = 2;
  if (*(int *)(ar4 + 4) == 0) {
    ar5_00 = ar5;
    iVar1 = (*(code *)PTR_FUN_8c0bf60c)(ar5,ar5,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(ar4 + 0x24) == 1)) {
      *(undefined4 *)(ar4 + 0x24) = 0;
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c0bf610)(ar5,ar5_00,ar6,ar7);
      if ((iVar1 == 1) && (*(int *)(ar4 + 0x24) == 0)) {
        *(undefined4 *)(ar4 + 0x24) = 1;
      }
    }
    iVar1 = (*(code *)PTR_FUN_8c0bf614)(ar5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      if (*(int *)(ar4 + 0x24) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



/* FUN_8c0bf618 @ 8c0bf618 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf618(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_get_field_a510_01f538_8c0bf684)
                    (*(undefined4 *)(DAT_8c0bf680 + ar4),ar5,ar6,ar7);
  if ((iVar1 == 1) ||
     (iVar1 = (*(code *)PTR_get_field_a510_01f538_8c0bf684)
                        (*(undefined4 *)(DAT_8c0bf680 + ar4),ar5,ar6,ar7), iVar1 == 2)) {
    return 0;
  }
  iVar1 = (*(code *)PTR_FUN_8c0bf688)(*(undefined4 *)(DAT_8c0bf680 + ar4),ar5,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = (*(code *)PTR_FUN_8c0bf68c)(*(undefined4 *)(DAT_8c0bf680 + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}



/* FUN_8c0bf690 @ 8c0bf690 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf690(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_get_field_a510_01f538_8c0bf6fc)
                    (*(undefined4 *)(DAT_8c0bf6f8 + ar4),ar5,ar6,ar7);
  if ((iVar1 == 1) ||
     (iVar1 = (*(code *)PTR_get_field_a510_01f538_8c0bf6fc)
                        (*(undefined4 *)(DAT_8c0bf6f8 + ar4),ar5,ar6,ar7), iVar1 == 2)) {
    return 0;
  }
  iVar1 = (*(code *)PTR_FUN_8c0bf700)(*(undefined4 *)(DAT_8c0bf6f8 + ar4),ar5,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = (*(code *)PTR_FUN_8c0bf704)(*(undefined4 *)(DAT_8c0bf6f8 + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}



/* FUN_8c0bf708 @ 8c0bf708 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf708(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_get_field_a510_01f538_8c0bf774)
                    (*(undefined4 *)(DAT_8c0bf770 + ar4),ar5,ar6,ar7);
  if ((iVar1 == 1) ||
     (iVar1 = (*(code *)PTR_get_field_a510_01f538_8c0bf774)
                        (*(undefined4 *)(DAT_8c0bf770 + ar4),ar5,ar6,ar7), iVar1 == 2)) {
    return 0;
  }
  iVar1 = (*(code *)PTR_FUN_8c0bf778)(*(undefined4 *)(DAT_8c0bf770 + ar4),ar5,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = (*(code *)PTR_FUN_8c0bf77c)(*(undefined4 *)(DAT_8c0bf770 + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}



/* FUN_8c0bf780 @ 8c0bf780 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf780(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0bf7a4)(*(undefined4 *)(DAT_8c0bf7a0 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c0bf7a8 @ 8c0bf7a8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0bf7c0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf7a8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 2;
  ar4[3] = 1;
  ar4[9] = 0;
  ar4[0xb] = 0;
  return 0;
}



/* FUN_8c0bf7c8 @ 8c0bf7c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf7c8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 1;
  return 1;
}



/* FUN_8c0bf7d0 @ 8c0bf7d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf7d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c0bf800)
                    (ar4 + 0x10,ar5,ar6,ar7,PTR_s_GRAPHICS_COMMON_8c13bfe3_1_8c0bf7f8 + DAT_8c0bf7fc
                    );
  return uVar1;
}



/* FUN_8c0bf804 @ 8c0bf804 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bf804(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined4 in_stack_ffffff94;
  undefined1 auStack_60 [20];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uStack_2c = DAT_8c13be38;
  uStack_28 = DAT_8c13be3c;
  uStack_24 = DAT_8c13be40;
  uStack_20 = DAT_8c13be44;
  uStack_1c = DAT_8c13be48;
  uStack_18 = DAT_8c13be4c;
  uStack_14 = DAT_8c13be50;
  uStack_10 = DAT_8c13be54;
  uStack_4c = DAT_8c13be58;
  uStack_48 = DAT_8c13be5c;
  uStack_44 = DAT_8c13be60;
  uStack_40 = DAT_8c13be64;
  uStack_3c = DAT_8c13be68;
  uStack_38 = DAT_8c13be6c;
  uStack_34 = DAT_8c13be70;
  uStack_30 = DAT_8c13be74;
  FUN_8c0162f8(auStack_60,ar5,ar6,ar7);
  uVar4 = 4;
  uVar3 = 0x8c43654c;
  FUN_8c016318(auStack_60,&uStack_2c,0x8c43654c,4,in_stack_ffffff94);
  FUN_8c016324(auStack_60,&DAT_8c43655c,uVar3,uVar4);
  uVar2 = 0x80000060;
  FUN_8c015198(auStack_60,0x80000060,uVar3,uVar4,in_stack_ffffff94);
  FUN_8c0c453c(&DAT_8c2b5628,uVar2,uVar3,uVar4);
  FUN_8c01538c(ar5,uVar2,uVar3,uVar4);
  uVar2 = *(undefined4 *)(ar4 + 8);
  FUN_8c014a94(ar5,uVar2,uVar3,uVar4);
  FUN_8c01636c(auStack_60,uVar2,uVar3,uVar4);
  uVar4 = 4;
  uVar3 = 0x8c43654c;
  FUN_8c016318(auStack_60,&uStack_4c,0x8c43654c,4,in_stack_ffffff94);
  uVar2 = 1;
  FUN_8c014a94(ar5,1,uVar3,uVar4);
  FUN_8c01636c(auStack_60,uVar2,uVar3,uVar4);
  iVar1 = *(int *)(ar4 + 8);
  if (iVar1 == 3) {
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(0x42e20000,*(undefined4 *)(ar4 + 0x2c));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x2c);
      dVar5 = -1.3340701484224984e-249;
    }
    _DAT_8c436774 = 0x43360000;
    if (cVar6 == '\0') {
      _DAT_8c436778 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      _DAT_8c436778 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 != '\0') {
      _DAT_8c436778 = (float)in_xd0;
      uRam8c43677c = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    FUN_8c0c3b74(&DAT_8c2b5628,uVar2,uVar3,uVar4);
  }
  else if (iVar1 == 5) {
    FUN_8c1f8176(&stack0xffffff94,uVar2,uVar3,uVar4);
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(0x42c60000,*(undefined4 *)(ar4 + 0x2c));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x2c);
      dVar5 = 9.367488658879283e+17;
    }
    _DAT_8c436774 = 0x43360000;
    if (cVar6 == '\0') {
      _DAT_8c436778 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      _DAT_8c436778 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 != '\0') {
      _DAT_8c436778 = (float)in_xd0;
      uRam8c43677c = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    FUN_8c0c3b74(&DAT_8c2b5628,uVar2,uVar3,uVar4);
  }
  else if (iVar1 == 9) {
    if (cVar7 != '\0') {
      uRam8c43677c = 0x3f19999a;
    }
    _DAT_8c436778 = 145.0;
    _DAT_8c436774 = 0x43aa0000;
    uVar4 = 0x10;
    uVar3 = 0;
    FUN_8c0c4370(&DAT_8c2b5628,ar4 + 0x10,0,0x10);
  }
  uVar2 = free_if_nonnull_wrap_0151a0(auStack_60,0xffffffff,uVar3,uVar4);
  return uVar2;
}



/* FUN_8c0bfa78 @ 8c0bfa78 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0bfa78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined4 in_stack_ffffff60;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uStack_2c = DAT_8c13be78;
  uStack_28 = DAT_8c13be7c;
  uStack_24 = DAT_8c13be80;
  uStack_20 = DAT_8c13be84;
  uStack_1c = DAT_8c13be88;
  uStack_18 = DAT_8c13be8c;
  uStack_14 = DAT_8c13be90;
  uStack_10 = DAT_8c13be94;
  fStack_4c = DAT_8c13be98;
  fStack_48 = DAT_8c13be9c;
  fStack_44 = DAT_8c13bea0;
  fStack_40 = DAT_8c13bea4;
  fStack_3c = DAT_8c13bea8;
  fStack_38 = DAT_8c13beac;
  fStack_34 = DAT_8c13beb0;
  fStack_30 = DAT_8c13beb4;
  fStack_6c = DAT_8c13beb8;
  fStack_68 = DAT_8c13bebc;
  fStack_64 = DAT_8c13bec0;
  fStack_60 = DAT_8c13bec4;
  fStack_5c = DAT_8c13bec8;
  fStack_58 = DAT_8c13becc;
  fStack_54 = DAT_8c13bed0;
  fStack_50 = DAT_8c13bed4;
  uStack_8c = DAT_8c13bed8;
  uStack_88 = DAT_8c13bedc;
  uStack_84 = DAT_8c13bee0;
  uStack_80 = DAT_8c13bee4;
  FUN_8c0162f8(&stack0xffffff60,ar5,ar6,ar7);
  uStack_7c = 0;
  uStack_7a = 0xff;
  uStack_78 = 0;
  uStack_76 = 0x80;
  uStack_74 = 0xff;
  uStack_72 = 0x80;
  uStack_70 = 0xff;
  uStack_6e = 0xff;
  uVar4 = 4;
  puVar3 = (undefined4 *)0x8c43654c;
  FUN_8c016318(&stack0xffffff60,&uStack_2c,0x8c43654c,4,in_stack_ffffff60);
  FUN_8c016324(&stack0xffffff60,&uStack_7c,puVar3,uVar4);
  uVar1 = 0x80000060;
  FUN_8c015198(&stack0xffffff60,0x80000060,puVar3,uVar4,in_stack_ffffff60);
  FUN_8c01538c(ar5,uVar1,puVar3,uVar4);
  uVar1 = 0xc;
  FUN_8c014a94(ar5,0xc,puVar3,uVar4);
  FUN_8c01636c(&stack0xffffff60,uVar1,puVar3,uVar4);
  if (*(int *)(ar4 + 0xc) == 0) {
    FUN_8c014a94(ar5,0xc,puVar3,uVar4);
    if (*(int *)(ar4 + 0x24) == 1) {
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_4c);
      }
      else {
        in_xd0 = CONCAT44(fStack_48,fStack_4c);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_4c = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_4c = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_48);
      }
      else {
        fStack_4c = (float)in_xd0;
        fStack_48 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_44,fStack_48);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_48 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_48 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_44);
      }
      else {
        fStack_48 = (float)in_xd0;
        fStack_44 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_40,fStack_44);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_44 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_44 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_40);
      }
      else {
        fStack_44 = (float)in_xd0;
        fStack_40 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_3c,fStack_40);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_40 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_40 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_3c);
      }
      else {
        fStack_40 = (float)in_xd0;
        fStack_3c = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_38,fStack_3c);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_3c = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_3c = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_38);
      }
      else {
        fStack_3c = (float)in_xd0;
        fStack_38 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_34,fStack_38);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_38 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_38 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_34);
      }
      else {
        fStack_38 = (float)in_xd0;
        fStack_34 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_30,fStack_34);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_34 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_34 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_30);
      }
      else {
        fStack_34 = (float)in_xd0;
        fStack_30 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(uStack_2c,fStack_30);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_30 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_30 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 != '\0') {
        fStack_30 = (float)in_xd0;
        uStack_2c = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      uStack_7c = 0;
      uStack_7a = 0x7f;
      uStack_78 = 0;
      uStack_76 = 0;
      uStack_74 = 0x7f;
      uStack_72 = 0;
      uStack_70 = 0x7f;
      uStack_6e = 0x7f;
      uVar1 = 4;
      puVar3 = &uStack_8c;
      FUN_8c016318(&stack0xffffff60,&fStack_4c,puVar3,4,in_stack_ffffff60);
      puVar2 = &uStack_7c;
      FUN_8c016324(&stack0xffffff60,puVar2,puVar3,uVar1);
      FUN_8c01636c(&stack0xffffff60,puVar2,puVar3,uVar1);
      uStack_7c = 0x80;
      uStack_7a = 0x7f;
      uStack_78 = 0x80;
      uStack_76 = 0;
      uStack_74 = 0xff;
      uStack_72 = 0;
      uStack_70 = 0xff;
      uStack_6e = 0x7f;
      uVar4 = 4;
      puVar3 = (undefined4 *)0x8c43654c;
      FUN_8c016318(&stack0xffffff60,&fStack_6c,0x8c43654c,4,in_stack_ffffff60);
      puVar2 = &uStack_7c;
      FUN_8c016324(&stack0xffffff60,puVar2,puVar3,uVar4);
      FUN_8c01636c(&stack0xffffff60,puVar2,puVar3,uVar4);
    }
    else {
      uStack_7c = 0;
      uStack_7a = 0x7f;
      uStack_78 = 0;
      uStack_76 = 0;
      uStack_74 = 0x7f;
      uStack_72 = 0;
      uStack_70 = 0x7f;
      uStack_6e = 0x7f;
      uVar4 = 4;
      uVar1 = 0x8c43654c;
      FUN_8c016318(&stack0xffffff60,&fStack_4c,0x8c43654c,4,in_stack_ffffff60);
      puVar2 = &uStack_7c;
      FUN_8c016324(&stack0xffffff60,puVar2,uVar1,uVar4);
      FUN_8c01636c(&stack0xffffff60,puVar2,uVar1,uVar4);
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_6c);
      }
      else {
        in_xd0 = CONCAT44(fStack_68,fStack_6c);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_6c = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_6c = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_68);
      }
      else {
        fStack_6c = (float)in_xd0;
        fStack_68 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_64,fStack_68);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_68 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_68 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_64);
      }
      else {
        fStack_68 = (float)in_xd0;
        fStack_64 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_60,fStack_64);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_64 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_64 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_60);
      }
      else {
        fStack_64 = (float)in_xd0;
        fStack_60 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_5c,fStack_60);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_60 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_60 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_5c);
      }
      else {
        fStack_60 = (float)in_xd0;
        fStack_5c = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_58,fStack_5c);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_5c = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_5c = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_58);
      }
      else {
        fStack_5c = (float)in_xd0;
        fStack_58 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_54,fStack_58);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_58 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_58 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_54);
      }
      else {
        fStack_58 = (float)in_xd0;
        fStack_54 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_50,fStack_54);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_54 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_54 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_50);
      }
      else {
        fStack_54 = (float)in_xd0;
        fStack_50 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_4c,fStack_50);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_50 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_50 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 != '\0') {
        fStack_50 = (float)in_xd0;
        fStack_4c = (float)((ulonglong)in_xd0 >> 0x20);
      }
      uStack_7c = 0x80;
      uStack_7a = 0x7f;
      uStack_78 = 0x80;
      uStack_76 = 0;
      uStack_74 = 0xff;
      uStack_72 = 0;
      uStack_70 = 0xff;
      uStack_6e = 0x7f;
      uVar4 = 4;
      puVar3 = &uStack_8c;
      FUN_8c016318(&stack0xffffff60,&fStack_6c,puVar3,4,in_stack_ffffff60);
      puVar2 = &uStack_7c;
      FUN_8c016324(&stack0xffffff60,puVar2,puVar3,uVar4);
      FUN_8c01636c(&stack0xffffff60,puVar2,puVar3,uVar4);
    }
  }
  else if (*(int *)(ar4 + 0xc) == 1) {
    FUN_8c014a94(ar5,0xb,puVar3,uVar4);
    uStack_7c = 0;
    uStack_7a = 0xff;
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0xff;
    uStack_72 = 0;
    uStack_70 = 0xff;
    uStack_6e = 0xff;
    puVar2 = &uStack_7c;
    FUN_8c016324(&stack0xffffff60,puVar2,puVar3,uVar4);
    FUN_8c01636c(&stack0xffffff60,puVar2,puVar3,uVar4);
  }
  uVar1 = free_if_nonnull_wrap_0151a0(&stack0xffffff60,0xffffffff,puVar3,uVar4);
  return uVar1;
}



/* FUN_8c0bff8c @ 8c0bff8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int * FUN_8c0bff8c(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  (*(code *)PTR_FUN_8c0c00bc)(ar4 + 3,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00c4)((int)ar4 + DAT_8c0c00c0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00cc)((int)ar4 + DAT_8c0c00c8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00d4)((int)ar4 + DAT_8c0c00d0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00dc)((int)ar4 + DAT_8c0c00d8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00e4)((int)ar4 + DAT_8c0c00e0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00ec)((int)ar4 + DAT_8c0c00e8,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00f4)((int)ar4 + DAT_8c0c00f0,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0c00fc)((int)ar4 + DAT_8c0c00f8,ar5,ar6,ar7);
  puVar1 = PTR_DAT_8c0c0104;
  puVar3 = (undefined4 *)((int)ar4 + DAT_8c0c0100);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0c0104 + 4);
  *puVar3 = *(undefined4 *)PTR_DAT_8c0c0104;
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0c010c;
  puVar3 = (undefined4 *)((int)ar4 + DAT_8c0c0108);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0c010c + 4);
  *puVar3 = *(undefined4 *)PTR_DAT_8c0c010c;
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0c0114;
  puVar3 = (undefined4 *)((int)ar4 + DAT_8c0c0110);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0c0114 + 4);
  *puVar3 = *(undefined4 *)PTR_DAT_8c0c0114;
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0c011c;
  puVar3 = (undefined4 *)((int)ar4 + DAT_8c0c0118);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0c011c + 4);
  *puVar3 = *(undefined4 *)PTR_DAT_8c0c011c;
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  puVar1 = PTR_DAT_8c0c0124;
  puVar3 = (undefined4 *)((int)ar4 + DAT_8c0c0120);
  uVar2 = *(undefined4 *)(PTR_DAT_8c0c0124 + 4);
  *puVar3 = *(undefined4 *)PTR_DAT_8c0c0124;
  puVar3[1] = uVar2;
  puVar3[2] = *(undefined4 *)(puVar1 + 8);
  *ar4 = (int)(ar4 + 3);
  ar4[1] = (int)ar4 + DAT_8c0c00c0;
  ar4[2] = (int)ar4 + DAT_8c0c00c8;
  *(int *)(DAT_8c0c0128 + (int)ar4) = (int)ar4 + DAT_8c0c00e0;
  *(int *)(DAT_8c0c012c + (int)ar4) = (int)ar4 + DAT_8c0c00e8;
  *(int *)(DAT_8c0c0130 + (int)ar4) = (int)ar4 + DAT_8c0c00c0;
  *(undefined4 *)(DAT_8c0c0134 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0c0138 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0c013c + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0c0140 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c0c0144 + (int)ar4) = 0;
  return ar4;
}


