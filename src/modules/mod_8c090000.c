/* Seaman (USA) region 0x8c090000-0x8c0a0000 (Ghidra decompiler) */

/* FUN_8c090bc4 @ 8c090bc4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c090bc4(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  uint in_fr1;
  float fVar4;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 *in_stack_00000000;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [16];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar5_00 = ar5;
  ar6_00 = ar6;
  FUN_8c08e9b0(auStack_70,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_80,ar5_00,ar6_00,ar7);
  uVar3 = 1;
  iVar2 = *(int *)(ar4 + 300);
  if ((iVar2 < 7) && (-1 < iVar2)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 0:
      iVar2 = get_field_24_026024(in_stack_00000000,ar5_00,ar6_00,ar7);
      if (iVar2 != 1) {
LAB_8c090c8a:
        if (cVar7 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_fr1;
        }
        *(undefined4 *)(ar4 + 300) = 6;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        ar7_00 = 0;
        uVar3 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        uStack_10c = 1;
        Vec3_dtor(auStack_80,0xffffffff,uVar3,ar7_00);
        FUN_8c08e93c(auStack_70,0xffffffff,uVar3,ar7_00);
        return uStack_10c;
      }
      ar5_00 = (undefined1 *)get_field_24_026024(in_stack_00000000,ar5_00,ar6_00,ar7);
      ar6_00 = (undefined1 *)0x1;
      iVar2 = FUN_8c069c24(auStack_70,ar5_00,1,ar7);
      if ((iVar2 == 0) ||
         (ar5_00 = in_stack_00000000, iVar2 = FUN_8c091854(ar4,in_stack_00000000,ar6_00,ar7),
         iVar2 == 1)) goto LAB_8c090c8a;
      Vec3_assign(ar4 + 0x28c,auStack_60,ar6_00,ar7);
      Vec3_scale(auStack_50,&uStack_28,ar6_00,ar7,auStack_90);
      Vec3_assign(ar4 + 0x2a8,auStack_90,ar6_00,ar7);
      ar5_00 = (undefined1 *)0xffffffff;
      Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7);
      if (cVar7 == '\0') {
        *(undefined4 *)(ar4 + 0x29c) = uStack_40;
        *(undefined4 *)(ar4 + 0x2a0) = uStack_3c;
        *(undefined4 *)(ar4 + 0x2a4) = uStack_38;
        *(undefined4 *)(ar4 + 0x2b8) = uStack_34;
        *(undefined4 *)(ar4 + 700) = uStack_30;
        *(undefined4 *)(ar4 + 0x2c0) = uStack_2c;
        *(undefined4 *)(ar4 + 0x2c4) = uStack_28;
      }
      else {
        *(undefined8 *)(ar4 + 0x29c) = CONCAT44(uStack_3c,uStack_40);
        *(ulonglong *)(ar4 + 0x2a0) = CONCAT44(uStack_38,uStack_3c);
        *(ulonglong *)(ar4 + 0x2a4) = CONCAT44(uStack_34,uStack_38);
        *(ulonglong *)(ar4 + 0x2b8) = CONCAT44(uStack_30,uStack_34);
        *(ulonglong *)(ar4 + 700) = CONCAT44(uStack_2c,uStack_30);
        *(ulonglong *)(ar4 + 0x2c0) = CONCAT44(uStack_28,uStack_2c);
        *(ulonglong *)(ar4 + 0x2c4) = CONCAT44(uStack_24,uStack_28);
      }
      *(undefined4 *)(ar4 + 0x2c8) = uStack_6c;
      *(undefined4 *)(ar4 + 0x2f4) = uStack_68;
      *(undefined4 *)(ar4 + 0x2f8) = uStack_64;
      FUN_8c022d04(ar4 + 0x2e0,ar5_00,ar6_00,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 1:
      Vec3_set_xyz(auStack_9c,ar5_00,ar6_00,ar7);
      FUN_8c023484(ar4 + 0x2a8,auStack_9c,ar6_00,ar7,auStack_ac);
      iVar2 = ar4 + 0x28c;
      Vec3_add(auStack_ac,iVar2,ar6_00,ar7,auStack_bc);
      Vec3_ctor_xyz(auStack_cc,iVar2,ar6_00,ar7);
      Vec3_set_xyz(auStack_d8,iVar2,ar6_00,ar7);
      FUN_8c023484(auStack_cc,auStack_d8,ar6_00,ar7,auStack_e8);
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x42000000,*(undefined4 *)(ar4 + 0x2c4));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x2c4);
        dVar5 = 3.14602454102719e-312;
      }
      if (cVar6 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      uVar1 = in_xd0;
      if (cVar7 == '\0') {
        uStack_114 = CONCAT44(uStack_114._4_4_,fVar4);
        uVar1 = uStack_114;
      }
      uStack_114 = uVar1;
      Vec3_scale(auStack_e8,&uStack_114,ar6_00,ar7,auStack_f8);
      Vec3_sub(auStack_bc,auStack_f8,ar6_00,ar7,auStack_108);
      Vec3_assign(auStack_80,auStack_108,ar6_00,ar7);
      Vec3_dtor(auStack_108,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_f8,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_e8,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_d8,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_cc,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_bc,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_9c,0xffffffff,ar6_00,ar7);
      ar6_00 = auStack_80;
      iVar2 = FUN_8c08e9fc(ar4,ar5,ar6_00,ar6);
      ar5_00 = ar5;
      ar7 = ar6;
      if (iVar2 == 0) {
        if (cVar7 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 2:
      iVar2 = FUN_8c08eb8c(ar4,ar6,ar6_00,ar7);
      ar5_00 = ar6;
      if (iVar2 == 0) {
        if (cVar7 == '\0') {
          *(undefined4 *)(ar4 + 0x2cc) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2cc) = (ulonglong)in_fr1;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x240) = 1;
        *(undefined4 *)(ar4 + 0x244) = 1;
      }
      break;
    case 3:
      ar5_00 = *(undefined1 **)(ar4 + 0x2c8);
      FUN_8c0911f0(ar4,ar5_00,ar6,ar7);
      ar6_00 = ar6;
      break;
    case 4:
      ar5_00 = *(undefined1 **)(ar4 + 0x2c8);
      iVar2 = FUN_8c091570(ar4,ar5_00,ar6,ar7);
      ar6_00 = ar6;
      if (iVar2 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 5:
      uVar3 = 0;
      break;
    case 6:
      s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      uVar3 = 0;
    }
  }
  if (((-1 < *(int *)(ar4 + 0x2f4)) && (-1 < *(int *)(ar4 + 0x2f8))) &&
     ((iVar2 = FUN_8c06b054(*(undefined4 *)(ar4 + 0x2f4),ar5_00,ar6_00,ar7), iVar2 == 0 ||
      (iVar2 = FUN_8c091854(ar4,in_stack_00000000,ar6_00,ar7), iVar2 == 1)))) {
    FUN_8c06b1d8(*(undefined4 *)(ar4 + 0x2f4),*(undefined4 *)(ar4 + 0x2f8),ar6_00,ar7);
    uVar3 = 0;
    *(undefined4 *)(ar4 + 0x240) = 0;
    *(undefined4 *)(ar4 + 0x2f4) = 0xffffffff;
    *(undefined4 *)(ar4 + 0x2f8) = 0xffffffff;
    *(undefined4 *)(ar4 + 0x134) = 0;
    *(undefined4 *)(ar4 + 300) = 0;
  }
  uStack_114._4_4_ = uVar3;
  Vec3_dtor(auStack_80,0xffffffff,ar6_00,ar7);
  FUN_8c08e93c(auStack_70,0xffffffff,ar6_00,ar7);
  return uStack_114._4_4_;
}



/* FUN_8c0911f0 @ 8c0911f0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0912de) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0911f0(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar5_01;
  int iVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  float in_fr1;
  float fVar5;
  float fVar7;
  double dVar6;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = ar5;
  iVar3 = ar6;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  Vec3_set_zero(auStack_3c,uVar4,iVar3,ar7);
  iVar1 = libgcc_divide_helper_01031c(ar5,3,iVar3,ar7);
  iVar1 = iVar1 + 0x11;
  uVar4 = 10;
  iVar2 = FUN_8c034148(ar4 + 0xb0,10,iVar3,ar7);
  if ((iVar2 == 1) || (iVar2 == 2)) {
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,iVar3,ar7);
    if (cVar9 == '\0') {
      in_fr1 = *(float *)(ar4 + 0x2cc);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
    }
    if (cVar8 == '\0') {
      in_fr1 = in_fr1 + 1.0;
    }
    else {
      in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x2cc) = in_fr1;
    }
    else {
      *(undefined8 *)(ar4 + 0x2cc) = in_xd0;
    }
    uVar4 = FUN_8c03c0f0(ar4 + 0xb0,iVar1,iVar3,ar7);
    uVar4 = deref_u32(uVar4,iVar1,iVar3,ar7);
    ar5_00 = FUN_8c0342ac(ar4 + 0xb0,uVar4,0,ar7);
    ar6_00 = 0;
    ar5_01 = FUN_8c034548(ar4 + 0xb0,uVar4,0,ar7);
    if (cVar9 == '\0') {
      fVar5 = *(float *)(ar4 + 0x2cc);
      fVar7 = 319.0;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
      fVar5 = 319.0;
      fVar7 = 4.2039e-43;
    }
    if (fVar5 == fVar7) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7);
      ar7 = 0;
      ar6_00 = 0xffffffff;
      uVar4 = 0;
      iVar3 = ar4 + 0xb0;
      s_CAnimBody_SetAnimation_033a94(iVar3,0,0xffffffff,0);
      uVar4 = rand(iVar3,uVar4,ar6_00,ar7);
      iVar3 = libgcc_divide_helper_01031c(uVar4,0x4c4,ar6_00,ar7);
      *(int *)(ar4 + 0x284) = iVar3 + 0x9c4;
    }
    FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2d0,auStack_4c,ar6_00,ar7);
    Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7);
    FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7);
    FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2e0,auStack_5c,ar6_00,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7);
    Vec3_set_xyz(auStack_68,uVar4,ar6_00,ar7);
    FUN_8c023484(ar4 + 0x2d0,auStack_68,ar6_00,ar7,auStack_78);
    Vec3_assign(ar4 + 0x2d0,auStack_78,ar6_00,ar7);
    Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_68,0xffffffff,ar6_00,ar7);
    FUN_8c034650(ar4 + 0xb0,ar5_01,ar6_00,ar7);
    vec3_copy_8c023d8c(ar6,auStack_84,ar6_00,ar7);
    object_dtor_delete(auStack_84,0xffffffff,ar6_00,ar7);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2a0),*(undefined4 *)(ar6 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(ar6 + 4);
      dVar6 = *(double *)(ar4 + 0x2a0);
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 700),fVar5);
    }
    else {
      dVar6 = *(double *)(ar4 + 700);
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(0x43340000,fVar5);
    }
    else {
      dVar6 = 1.4180502381632e-311;
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar6 + 4) = fVar5;
    }
    else {
      *(undefined8 *)(ar6 + 4) = in_xd0;
    }
    object_dtor_delete(auStack_3c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7);
  }
  else {
    object_dtor_delete(auStack_3c,0xffffffff,iVar3,ar7);
    Vec3_dtor(auStack_30,0xffffffff,iVar3,ar7);
  }
  return 1;
}



/* FUN_8c091570 @ 8c091570 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c091570(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar6_00;
  undefined4 ar6_01;
  float in_fr1;
  float fVar5;
  double dVar6;
  undefined8 in_xd0;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  Vec3_set_zero(auStack_3c,uVar4,ar6_00,ar7);
  uVar4 = 3;
  iVar2 = libgcc_divide_helper_01031c(ar5,3,ar6_00,ar7);
  iVar2 = iVar2 + 0x11;
  FUN_8c03f3ac(ar4 + 0xb0,uVar4,ar6_00,ar7);
  if (cVar9 == '\0') {
    in_fr1 = *(float *)(ar4 + 0x2cc);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
  }
  if (cVar8 == '\0') {
    in_fr1 = in_fr1 + 1.0;
  }
  else {
    in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
  }
  if (cVar9 == '\0') {
    *(float *)(ar4 + 0x2cc) = in_fr1;
  }
  else {
    *(undefined8 *)(ar4 + 0x2cc) = in_xd0;
  }
  uVar4 = FUN_8c03c0f0(ar4 + 0xb0,iVar2,ar6_00,ar7);
  uVar4 = deref_u32(uVar4,iVar2,ar6_00,ar7);
  uVar3 = FUN_8c0342ac(ar4 + 0xb0,uVar4,0,ar7);
  ar6_01 = 0;
  uVar4 = FUN_8c034548(ar4 + 0xb0,uVar4,0,ar7);
  if (cVar9 == '\0') {
    in_fr1 = *(float *)(ar4 + 0x2cc);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
  }
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44((float)*(int *)(ar4 + 0x284),in_fr1);
  }
  else {
    dVar6 = (double)*(int *)(ar4 + 0x284);
  }
  bVar1 = cVar8 == '\0';
  bVar7 = SUB84(dVar6,0) < (float)((ulonglong)dVar6 >> 0x20);
  if (!bVar1 || !bVar7) {
    *(undefined4 *)(ar4 + 0x214) = 0;
  }
  FUN_8c034384(ar4 + 0xb0,uVar3,ar6_01,ar7);
  Vec3_assign(ar4 + 0x2d0,auStack_4c,ar6_01,ar7);
  Vec3_dtor(auStack_4c,0xffffffff,ar6_01,ar7);
  FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_01,ar7);
  FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_01,ar7);
  FUN_8c034384(ar4 + 0xb0,uVar3,ar6_01,ar7);
  Vec3_assign(ar4 + 0x2e0,auStack_5c,ar6_01,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_5c,0xffffffff,ar6_01,ar7);
  Vec3_set_xyz(auStack_68,uVar3,ar6_01,ar7);
  FUN_8c023484(ar4 + 0x2d0,auStack_68,ar6_01,ar7,auStack_78);
  Vec3_assign(ar4 + 0x2d0,auStack_78,ar6_01,ar7);
  Vec3_dtor(auStack_78,0xffffffff,ar6_01,ar7);
  object_dtor_delete(auStack_68,0xffffffff,ar6_01,ar7);
  FUN_8c034650(ar4 + 0xb0,uVar4,ar6_01,ar7);
  vec3_copy_8c023d8c(ar6,auStack_84,ar6_01,ar7);
  object_dtor_delete(auStack_84,0xffffffff,ar6_01,ar7);
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2a0),*(undefined4 *)(ar6 + 4));
  }
  else {
    in_xd0 = *(undefined8 *)(ar6 + 4);
    dVar6 = *(double *)(ar4 + 0x2a0);
  }
  if (cVar8 == '\0') {
    fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 + dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 700),fVar5);
  }
  else {
    dVar6 = *(double *)(ar4 + 700);
  }
  if (cVar8 == '\0') {
    fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 + dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x43340000,fVar5);
  }
  else {
    dVar6 = 1.4180502381632e-311;
  }
  if (cVar8 == '\0') {
    fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 + dVar6,0);
  }
  if (cVar9 == '\0') {
    *(float *)(ar6 + 4) = fVar5;
  }
  else {
    *(undefined8 *)(ar6 + 4) = in_xd0;
  }
  object_dtor_delete(auStack_3c,0xffffffff,ar6_01,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6_01,ar7);
  return (uint)(bVar1 && bVar7);
}



/* FUN_8c091854 @ 8c091854 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c091854(undefined4 ar4,int *ar5,float *ar6,undefined1 *ar7)

{
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  undefined1 *ar5_00;
  int iVar3;
  int a6;
  float fVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  undefined1 auStack_28 [4];
  float fStack_24;
  undefined1 auStack_20 [12];
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar3 = 0;
  a6 = 0;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,10,ar6,ar7);
  while ((a6 < iVar1 && (iVar3 == 0))) {
    ar4_00 = (**(code **)(*ar5 + 0x100))(ar5,10,a6,ar7);
    ar7 = auStack_20;
    ar6 = &fStack_24;
    ar5_00 = auStack_28;
    FUN_8c0507a4(ar4_00,ar5_00,ar6,ar7);
    uVar2 = (**(code **)(*(int *)(ar4_00 + 8) + 0x148))(ar4_00,ar5_00,ar6,ar7);
    if ((short)uVar2 == 2) {
      if (cVar7 == '\0') {
        pcVar5 = (code *)0x42dc0000;
        fVar4 = fStack_24;
      }
      else {
        fVar4 = 110.0;
        pcVar5 = Vec3_dtor;
      }
      if (cVar6 != '\0' || (float)pcVar5 <= fVar4) {
        iVar3 = 1;
      }
    }
    a6 = a6 + 1;
  }
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  return iVar3;
}



/* FUN_8c091924 @ 8c091924 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c091924(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined4 uVar4;
  float fVar5;
  float fVar8;
  double dVar6;
  ulonglong uVar7;
  undefined8 in_xd0;
  char cVar9;
  char cVar10;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [4];
  float fStack_1c;
  undefined4 uStack_18;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  uVar2 = ar5;
  uVar3 = ar6;
  Vec3_set_zero(auStack_20,ar5,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x40);
  if ((5 < iVar1) || (iVar1 < 0)) goto switchD_8c091960_caseD_2;
                    /* WARNING: Switch is manually overridden */
  switch(iVar1) {
  case 0:
    FUN_8c0230f0(ar4 + 0x14,uVar2,uVar3,ar7,auStack_30);
    Vec3_assign(ar4 + 0x14,auStack_30,uVar3,ar7);
    Vec3_dtor(auStack_30,0xffffffff,uVar3,ar7);
    FUN_8c031b68(ar4,0x8c2846d0,uVar3,ar7);
    uVar2 = ar5;
    uVar3 = ar6;
    FUN_8c031bb4(ar4,ar5,ar6,ar7);
    if (cVar10 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0x3d4ccccd;
      *(undefined4 *)(ar4 + 0x24) = 0x3d4ccccd;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = 0xb03d4ccccd;
      *(undefined8 *)(ar4 + 0x24) = 0xb03d4ccccd;
    }
    iVar1 = get_field_1c_026dd8(ar4 + 0xb0,uVar2,uVar3,ar7);
    if (iVar1 != 0) {
      ar7_00 = 0;
      uVar3 = 0xffffffff;
      uVar2 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7_00);
    }
    ar7 = ar4 + 0x14;
    FUN_8c092884(ar4,ar5,ar6,ar7);
    vec3_copy_8c023d8c(auStack_20,auStack_3c,ar6,ar7);
    uVar2 = 0xffffffff;
    object_dtor_delete(auStack_3c,0xffffffff,ar6,ar7);
    if (cVar10 == '\0') {
      fVar8 = 90.0;
      fVar5 = fStack_1c;
    }
    else {
      in_xd0 = CONCAT44(uStack_18,fStack_1c);
      fVar5 = 90.0;
      fVar8 = -90.0;
    }
    if (cVar9 != '\0' || fVar8 <= fVar5) {
LAB_8c091a60:
      if (cVar10 == '\0') {
        fVar5 = 90.0;
      }
      else {
        in_xd0 = CONCAT44(uStack_18,fStack_1c);
        fStack_1c = 90.0;
        fVar5 = -90.0;
      }
      if (cVar9 == '\0' && fStack_1c < fVar5) {
        *(undefined4 *)(ar4 + 0x22c) = 2;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar2 = 9;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
      }
      else {
        *(undefined4 *)(ar4 + 0x22c) = 1;
        ar7 = 0;
        ar6 = 0xffffffff;
        uVar2 = 8;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7);
    }
    else {
      if (cVar10 == '\0') {
        fVar8 = -90.0;
        fVar5 = fStack_1c;
      }
      else {
        in_xd0 = CONCAT44(uStack_18,fStack_1c);
        fVar5 = -90.0;
        fVar8 = 7.79122e-43;
      }
      if (cVar9 != '\0' || fVar5 <= fVar8) goto LAB_8c091a60;
    }
    *(undefined4 *)(ar4 + 0x40) = 1;
    uVar3 = ar6;
  case 1:
    if (*(int *)(ar4 + 0x22c) == 0) {
      *(undefined4 *)(ar4 + 0x40) = 3;
    }
    else {
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x220));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x220);
        dVar6 = 21990236605644.8;
      }
      if (cVar9 == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x220) = fVar5;
        uVar7 = CONCAT44(0x42b40000,*(undefined4 *)(ar4 + 0x220));
      }
      else {
        *(undefined8 *)(ar4 + 0x220) = in_xd0;
        uVar7 = 0x42f0000042b40000;
      }
      if (cVar9 != '\0' || (float)uVar7 <= (float)(uVar7 >> 0x20)) {
        FUN_8c03f3ac(ar4 + 0xb0,uVar2,uVar3,ar7);
        if (*(int *)(ar4 + 0x22c) == 1) {
          Vec3_set_xyz(auStack_48,uVar2,uVar3,ar7);
          FUN_8c023484(ar4 + 0x14,auStack_48,uVar3,ar7,auStack_58);
          Vec3_assign(ar4 + 0x14,auStack_58,uVar3,ar7);
          Vec3_dtor(auStack_58,0xffffffff,uVar3,ar7);
          object_dtor_delete(auStack_48,0xffffffff,uVar3,ar7);
        }
        else if (*(int *)(ar4 + 0x22c) == 2) {
          Vec3_set_xyz(auStack_64,uVar2,uVar3,ar7);
          FUN_8c023484(ar4 + 0x14,auStack_64,uVar3,ar7,auStack_74);
          Vec3_assign(ar4 + 0x14,auStack_74,uVar3,ar7);
          Vec3_dtor(auStack_74,0xffffffff,uVar3,ar7);
          object_dtor_delete(auStack_64,0xffffffff,uVar3,ar7);
        }
      }
      else {
        iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,uVar3,ar7);
        if (iVar1 == 1) {
          *(undefined4 *)(ar4 + 0x40) = 3;
          *(undefined4 *)(ar4 + 0x22c) = 0;
          *(undefined4 *)(ar4 + 0x40) = 3;
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x220) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x220) = uVar7 & 0xffffffff;
          }
          ar7 = 0;
          uVar3 = 0xffffffff;
          uVar2 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7);
        }
      }
    }
    break;
  case 3:
    FUN_8c03f3ac(ar4 + 0xb0,uVar2,uVar3,ar7);
    uVar4 = FUN_8c031764(ar4,ar6,ar5,ar7);
    uVar3 = ar5;
  }
switchD_8c091960_caseD_2:
  object_dtor_delete(auStack_20,0xffffffff,uVar3,ar7);
  return uVar4;
}



/* FUN_8c091d40 @ 8c091d40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c091d40(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(DAT_8c091e38 + ar4);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c091e40)(ar4 + DAT_8c091e3c,ar5,ar6,ar7);
    uVar4 = 0;
    uVar3 = 0xffffffff;
    uVar2 = 5;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c091e4c)(ar4 + DAT_8c091e44._4_4_,5,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c091e50)(ar4 + DAT_8c091e44._4_4_,uVar2,uVar3,uVar4);
    *(int *)(DAT_8c091e38 + ar4) = *(int *)(DAT_8c091e38 + ar4) + 1;
  }
  else if (iVar1 != 1) {
    uVar2 = ar5;
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      return 0;
    }
    goto LAB_8c091dca;
  }
  *(int *)(DAT_8c091e38 + ar4) = *(int *)(DAT_8c091e38 + ar4) + 1;
  uVar2 = 0x21;
  ar7 = ar6;
  (*(code *)PTR_FUN_8c091e54)(ar4,0x21,ar5,ar6);
  ar6 = ar5;
LAB_8c091dca:
  iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c091e58)
                    (ar4 + DAT_8c091e44._4_4_,uVar2,ar6,ar7);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c091e5c)(ar4 + DAT_8c091e3c,uVar2,ar6,ar7);
    uVar4 = 0;
    uVar3 = 0xffffffff;
    uVar2 = 0;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c091e4c)(ar4 + DAT_8c091e44._4_4_,0,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c091e50)(ar4 + DAT_8c091e44._4_4_,uVar2,uVar3,uVar4);
    *(int *)(DAT_8c091e38 + ar4) = *(int *)(DAT_8c091e38 + ar4) + 1;
  }
  return (uint)(iVar1 != 1);
}



/* FUN_8c091e60 @ 8c091e60 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0926fe) */
/* WARNING: Removing unreachable block (ram,0x8c09261e) */
/* WARNING: Removing unreachable block (ram,0x8c092816) */
/* WARNING: Removing unreachable block (ram,0x8c0920e8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c091e60(ulonglong *ar4,ulonglong *ar5,int *ar6,ulonglong *ar7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *ar5_00;
  ulonglong *ar5_01;
  int *ar6_00;
  ulonglong *ar7_00;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0;
  float fVar9;
  ulonglong uVar6;
  double dVar7;
  ulonglong uVar8;
  ulonglong in_xd0;
  char cVar10;
  char cVar11;
  char in_stack_00000000;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined1 auStack_fc [16];
  undefined1 auStack_ec [16];
  undefined1 auStack_dc [16];
  undefined1 auStack_cc [16];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  undefined8 uStack_20;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  uVar4 = (uint)in_dr0;
  uStack_100 = 1;
  ar5_01 = ar4 + 0xd;
  iVar1 = (int)*ar5_01;
  if ((4 < iVar1) || (iVar1 < 0)) goto switchD_8c091ea8_default;
                    /* WARNING: Switch is manually overridden */
  switch(iVar1) {
  case 0:
    while( true ) {
      uVar4 = (uint)in_dr0;
      uVar3 = 0x8c2846d0;
      FUN_8c031b68(ar4,0x8c2846d0,ar6_00,ar7_00);
      FUN_8c03c314(ar4,uVar3,ar6_00,ar7_00);
      ar7_00 = (ulonglong *)0x0;
      ar6_00 = (int *)0xffffffff;
      uVar3 = 1;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,1,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar3,ar6_00,ar7_00);
      uVar8 = (ulonglong)uVar4;
      if (cVar11 == '\0') {
        *(int *)((int)ar4 + 0x224) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x224) = uVar8;
      }
      Vec3_assign(ar4 + 0x46,(int *)((int)ar4 + 0x14),ar6_00,ar7_00);
      uVar8 = uVar8 & 0xffffffff;
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x44) = 0;
      }
      else {
        ar4[0x44] = uVar8;
      }
      Vec3_assign((int *)((int)ar4 + 0x54),ar5,ar6_00,ar7_00);
      ar5_01 = ar5;
      (**(code **)((int)*ar7 + 0x128))(ar7,ar5,ar6_00,ar7_00);
      iVar1 = (int)(uVar8 >> 0x20);
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0xb) = iVar1;
        dVar7 = (double)CONCAT44(0x3a83126f,*(int *)((int)ar4 + 0x54));
      }
      else {
        ar4[0xb] = uVar8;
        in_xd0 = *(ulonglong *)((int)ar4 + 0x54);
        dVar7 = 6.577018791706446e+182;
        iStack_11c = iVar1;
      }
      if (cVar10 == '\0') {
        fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar11 == '\0') {
        *(float *)((int)ar4 + 0x54) = fVar5;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x54) = in_xd0;
      }
      if (ar6 != (int *)0x0) {
        if (ar6 == (int *)0x3) {
          if (cVar11 == '\0') {
            uVar8 = CONCAT44(0x3e4ccccd,fVar5);
            *(int *)(ar4 + 0x14) = 0x3e4ccccd;
          }
          else {
            uVar8 = 0xb03e4ccccd;
            ar4[0x14] = 0xb03e4ccccd;
          }
          ar5_01 = ar4 + 5;
          if (cVar11 == '\0') {
            *(int *)ar5_01 = 0;
          }
          else {
            *ar5_01 = uVar8 & 0xffffffff;
          }
          *(int *)(ar4 + 0xd) = (int)ar4[0xd] + 1;
        }
        goto switchD_8c091ea8_caseD_1;
      }
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44(0x3ba3d70a,fVar5);
        *(int *)(ar4 + 0x14) = 0x3ba3d70a;
      }
      else {
        in_dr0 = 0x61e3d41b3ba3d70a;
        ar4[0x14] = 0x61e3d41b3ba3d70a;
      }
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(int *)(ar4 + 5) = 0;
      }
      else {
        ar4[5] = in_dr0;
      }
      ar5_01 = (ulonglong *)0x2;
      *(int *)(ar4 + 0xd) = 2;
switchD_8c091ea8_caseD_2:
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,ar5_01,ar6_00,ar7_00);
      if (iVar1 == 1) {
        iVar1 = rand_range(ar4,0,100,ar7_00);
        if (iVar1 < 0x32) {
          ar7_00 = (ulonglong *)0x0;
          ar6_00 = (int *)0xffffffff;
          ar5_01 = (ulonglong *)0x1;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,1,0xffffffff,0);
        }
        else {
          ar7_00 = (ulonglong *)0x0;
          ar6_00 = (int *)0xffffffff;
          ar5_01 = (ulonglong *)0x7;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,7,0xffffffff,0);
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,ar5_01,ar6_00,ar7_00);
      }
      fVar5 = (float)in_dr0;
      if (ar6 != (int *)0x3) break;
      *(int *)(ar4 + 0xd) = 0;
      *(int *)(ar4 + 0x45) = 0;
      if (cVar11 == '\0') {
        *(int *)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = in_dr0 & 0xffffffff;
      }
      in_dr0 = in_dr0 & 0xffffffff;
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x44) = 0;
      }
      else {
        ar4[0x44] = in_dr0;
      }
    }
    Vec3_set_xyz(auStack_70,ar5_01,ar6_00,ar7_00);
    ar7_00 = (ulonglong *)((int)ar4 + 0x14);
    ar6_00 = (int *)((int)ar4 + 0x54);
    FUN_8c031eb0(ar4,ar5,ar6_00,ar7_00,auStack_80);
    Vec3_assign((int *)((int)ar4 + 0x14),auStack_80,ar6_00,ar7_00);
    Vec3_dtor(auStack_80,0xffffffff,ar6_00,ar7_00);
    uVar3 = 0xffffffff;
    object_dtor_delete(auStack_70,0xffffffff,ar6_00,ar7_00);
    if (cVar11 == '\0') {
      fVar5 = *(float *)((int)ar4 + 0x224);
    }
    else {
      in_xd0 = *(ulonglong *)((int)ar4 + 0x224);
    }
    if (cVar10 != '\0' || fVar5 <= 1.0) {
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x3c23d70a,*(int *)((int)ar4 + 0x224));
      }
      else {
        in_xd0 = *(ulonglong *)((int)ar4 + 0x224);
        dVar7 = 4.1640967825903e-312;
      }
      if (cVar10 == '\0') {
        fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar11 == '\0') {
        *(float *)((int)ar4 + 0x224) = fVar5;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x224) = in_xd0;
      }
    }
    Vec3_set_xyz(auStack_8c,uVar3,ar6_00,ar7_00);
    FUN_8c023484((int *)((int)ar4 + 0x14),auStack_8c,ar6_00,ar7_00,auStack_9c);
    Vec3_assign((int *)((int)ar4 + 0x14),auStack_9c,ar6_00,ar7_00);
    Vec3_dtor(auStack_9c,0xffffffff,ar6_00,ar7_00);
    uVar3 = 0xffffffff;
    object_dtor_delete(auStack_8c,0xffffffff,ar6_00,ar7_00);
    if ((ar6 != (int *)0x1) && (ar6 != (int *)0x2)) {
      FUN_8c0324ac(ar4,uVar3,ar6_00,ar7_00);
      break;
    }
    *(int *)(ar4 + 0xd) = 4;
    *(int *)(ar4 + 0x45) = 0;
    uVar8 = (ulonglong)(uint)fVar5;
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x44) = 0;
    }
    else {
      ar4[0x44] = uVar8;
    }
    ar5_01 = (ulonglong *)((int)ar4 + 0x14);
    Vec3_assign(ar4 + 0x46,ar5_01,ar6_00,ar7_00);
    uVar4 = (uint)uVar8;
    *(int *)((int)ar4 + 0x244) = 0;
  case 4:
    uVar8 = (ulonglong)uVar4;
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x14) = 0;
    }
    else {
      ar4[0x14] = uVar8;
    }
    FUN_8c073c9c(ar4,ar5_01,ar6_00,ar7_00);
    uVar6 = uVar8 & 0xffffffff;
    if (cVar11 == '\0') {
      *(int *)(ar4 + 5) = 0;
    }
    else {
      ar4[5] = uVar6;
    }
    if ((ar6 == (int *)0x1) || (ar6 == (int *)0x2)) {
      ar6_00 = (int *)0xb0;
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,ar4 + 0x16,0xb0,ar7_00);
      fVar5 = (float)uVar6;
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 3);
      }
      else {
        in_xd0 = ar4[3];
      }
      uVar8 = (ulonglong)(uint)fVar5;
      if (fVar5 != 0.0) {
        piVar2 = (int *)((int)ar4 + 0x14);
        Vec3_assign(auStack_24,piVar2,ar6_00,ar7_00);
        uVar8 = uVar8 & 0xffffffff;
        if (cVar11 == '\0') {
          uStack_20 = uStack_20 & 0xffffffff00000000;
          uVar8 = uStack_20;
        }
        uStack_20 = uVar8;
        uVar3 = Vec3_length(auStack_24,piVar2,ar6_00,ar7_00);
        Vec3_assign(auStack_24,uVar3,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          dVar7 = (double)CONCAT44(0x3d4ccccd,(int)ar4[0x44]);
        }
        else {
          in_xd0 = ar4[0x44];
          dVar7 = 1.18882576146403e-311;
        }
        if (cVar10 == '\0') {
          fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 0x44) = fVar5;
          fVar5 = *(float *)(ar4 + 0x44);
        }
        else {
          ar4[0x44] = in_xd0;
        }
        if (cVar10 != '\0' || 1.0 <= fVar5) {
          if (cVar11 == '\0') {
            *(int *)(ar4 + 0x44) = 0x3f800000;
          }
          else {
            ar4[0x44] = CONCAT44(0x3f800000,fVar5);
          }
        }
        if (cVar11 == '\0') {
          fVar5 = *(float *)(ar4 + 0x44);
        }
        if (cVar10 == '\0') {
          dVar7 = (double)CONCAT44(1.0 - fVar5,fVar5);
        }
        else {
          dVar7 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
        }
        iVar1 = (int)((ulonglong)dVar7 >> 0x20);
        iStack_118 = iVar1;
        if (cVar11 != '\0') {
          iStack_118 = SUB84(dVar7,0);
          iStack_114 = iVar1;
        }
        Vec3_scale(ar4 + 0x46,&iStack_118,ar6_00,ar7_00,auStack_dc);
        if (cVar11 == '\0') {
          iStack_11c = (int)ar4[0x44];
          uVar8 = CONCAT44(iStack_11c,SUB84(dVar7,0));
        }
        else {
          uVar8 = ar4[0x44];
          iStack_11c = (int)uVar8;
          iStack_118 = (int)(uVar8 >> 0x20);
        }
        fVar5 = (float)uVar8;
        Vec3_scale(auStack_24,&iStack_11c,ar6_00,ar7_00,auStack_ec);
        Vec3_add(auStack_dc,auStack_ec,ar6_00,ar7_00,auStack_fc);
        Vec3_assign((int *)((int)ar4 + 0x14),auStack_fc,ar6_00,ar7_00);
        Vec3_dtor(auStack_fc,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_ec,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_dc,0xffffffff,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          fVar5 = *(float *)(ar4 + 0x44);
        }
        if (fVar5 == 1.0) {
          if (cVar11 == '\0') {
            *(int *)(ar4 + 0x44) = 0;
          }
          else {
            ar4[0x44] = (ulonglong)(uint)fVar5;
          }
        }
      }
    }
    else {
      ar6_00 = (int *)0x0;
      *(int *)(ar4 + 0xd) = 0;
      *(int *)(ar4 + 0x45) = 0;
      if (cVar11 == '\0') {
        *(int *)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = uVar8 & 0xffffffff;
      }
      ar7_00 = ar4 + 0x44;
      if (cVar11 == '\0') {
        *(int *)ar7_00 = 0;
      }
      else {
        *ar7_00 = uVar8 & 0xffffffff;
      }
    }
    break;
  case 1:
switchD_8c091ea8_caseD_1:
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,ar5_01,ar6_00,ar7_00);
    if (iVar1 == 1) {
      iVar1 = rand_range(ar4,0,100,ar7_00);
      if (iVar1 < 0x32) {
        ar7_00 = (ulonglong *)0x0;
        ar6_00 = (int *)0xffffffff;
        ar5_01 = (ulonglong *)0x1;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,1,0xffffffff,0);
      }
      else {
        ar7_00 = (ulonglong *)0x0;
        ar6_00 = (int *)0xffffffff;
        ar5_01 = (ulonglong *)0x7;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,7,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,ar5_01,ar6_00,ar7_00);
    }
    if (ar6 == (int *)0x0) {
      FUN_8c073c9c(ar4,ar5_01,ar6_00,ar7_00);
      *(int *)(ar4 + 0xd) = 0;
      break;
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x3c4ccccd,(int)ar4[0x44]);
    }
    else {
      in_xd0 = ar4[0x44];
      dVar7 = 0.007750001682143193;
    }
    if (cVar10 == '\0') {
      fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar11 == '\0') {
      *(float *)(ar4 + 0x44) = fVar5;
      fVar5 = *(float *)(ar4 + 0x44);
      fVar9 = 0.999;
    }
    else {
      ar4[0x44] = in_xd0;
      in_xd0 = ar4[0x44];
      fVar5 = 0.999;
      fVar9 = 3.97969e-43;
    }
    if (cVar10 != '\0' || fVar9 <= fVar5) {
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x44) = 0x3f7fbe77;
      }
      else {
        ar4[0x44] = 0x11c3f7fbe77;
      }
    }
    if (cVar11 == '\0') {
      uVar8 = CONCAT44(0x3f7fbe77,(int)ar4[0x44]);
    }
    else {
      in_xd0 = ar4[0x44];
      uVar8 = 0x11c3f7fbe77;
    }
    if ((float)uVar8 != (float)(uVar8 >> 0x20)) {
      if (cVar11 == '\0') {
        uVar8 = (ulonglong)(uint)ar4[0x44];
      }
      else {
        in_xd0 = ar4[0x44];
      }
      fVar5 = (float)uVar8;
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(1.0 - fVar5,fVar5);
      }
      else {
        dVar7 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
      }
      uVar3 = (undefined4)((ulonglong)dVar7 >> 0x20);
      uStack_108 = uVar3;
      if (cVar11 != '\0') {
        uStack_108 = SUB84(dVar7,0);
        uStack_104 = uVar3;
      }
      ar5_00 = &uStack_108;
      Vec3_scale(ar4 + 0x46,ar5_00,ar6_00,ar7_00,auStack_34);
      uVar3 = SUB84(dVar7,0);
      Vec3_ctor_xyz(auStack_44,ar5_00,ar6_00,ar7_00);
      if (cVar11 == '\0') {
        iStack_10c = (int)ar4[0x44];
        uVar8 = CONCAT44(iStack_10c,uVar3);
      }
      else {
        uVar8 = ar4[0x44];
        iStack_10c = (int)uVar8;
        uStack_108 = (undefined4)(uVar8 >> 0x20);
      }
      Vec3_scale(auStack_44,&iStack_10c,ar6_00,ar7_00,auStack_54);
      Vec3_add(auStack_34,auStack_54,ar6_00,ar7_00,auStack_64);
      Vec3_assign((int *)((int)ar4 + 0x14),auStack_64,ar6_00,ar7_00);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
      ar5_01 = (ulonglong *)0xffffffff;
      Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
    }
    if ((ar6 != (int *)0x1) && (ar6 != (int *)0x2)) {
      FUN_8c0324ac(ar4,ar5_01,ar6_00,ar7_00);
      break;
    }
    *(int *)(ar4 + 0xd) = 3;
    uVar8 = uVar8 & 0xffffffff;
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x44) = 0;
    }
    else {
      ar4[0x44] = uVar8;
    }
    ar5_01 = (ulonglong *)((int)ar4 + 0x14);
    Vec3_assign(ar4 + 0x46,ar5_01,ar6_00,ar7_00);
    uVar4 = (uint)uVar8;
    *(int *)((int)ar4 + 0x244) = 0;
    if ((ar6 == (int *)0x1) && (in_stack_00000000 == '\x01')) {
      ar7_00 = (ulonglong *)0xa;
      ar6_00 = (int *)0x1;
      (**(code **)((int)*ar7 + 0xd0))(ar7,ar5,1,10);
      ar5_01 = ar5;
    }
  case 3:
    uVar8 = (ulonglong)uVar4;
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x14) = 0;
    }
    else {
      ar4[0x14] = uVar8;
    }
    FUN_8c073c9c(ar4,ar5_01,ar6_00,ar7_00);
    uVar6 = uVar8 & 0xffffffff;
    if (cVar11 == '\0') {
      *(int *)(ar4 + 5) = 0;
    }
    else {
      ar4[5] = uVar6;
    }
    if ((ar6 == (int *)0x1) || (ar6 == (int *)0x2)) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,ar5_01,ar6_00,ar7_00);
      uVar4 = (uint)uVar6;
      piVar2 = (int *)((int)ar4 + 0x14);
      Vec3_assign(auStack_24,piVar2,ar6_00,ar7_00);
      uVar8 = (ulonglong)uVar4;
      if (cVar11 == '\0') {
        uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
        uVar8 = uStack_20;
      }
      uStack_20 = uVar8;
      uVar3 = Vec3_length(auStack_24,piVar2,ar6_00,ar7_00);
      Vec3_assign(auStack_24,uVar3,ar6_00,ar7_00);
      ar6_00 = (int *)0x220;
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x3e4ccccd,(int)ar4[0x44]);
      }
      else {
        in_xd0 = ar4[0x44];
        dVar7 = 3.48523717287845e-312;
      }
      if (cVar10 == '\0') {
        fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 0x44) = fVar5;
        fVar5 = *(float *)(ar4 + 0x44);
      }
      else {
        ar4[0x44] = in_xd0;
      }
      if (cVar10 != '\0' || 1.0 <= fVar5) {
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x44) = 0x3f800000;
        }
        else {
          ar4[0x44] = CONCAT44(0x3f800000,fVar5);
        }
      }
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 0x44);
      }
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(1.0 - fVar5,fVar5);
      }
      else {
        dVar7 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
      }
      iVar1 = (int)((ulonglong)dVar7 >> 0x20);
      iStack_110 = iVar1;
      if (cVar11 != '\0') {
        iStack_110 = SUB84(dVar7,0);
        iStack_10c = iVar1;
      }
      ar7_00 = ar4;
      Vec3_scale(ar4 + 0x46,&iStack_110,0x220,ar4,auStack_ac);
      if (cVar11 == '\0') {
        iStack_114 = (int)ar4[0x44];
        uVar8 = CONCAT44(iStack_114,SUB84(dVar7,0));
      }
      else {
        uVar8 = ar4[0x44];
        iStack_114 = (int)uVar8;
        iStack_110 = (int)(uVar8 >> 0x20);
      }
      fVar5 = (float)uVar8;
      Vec3_scale(auStack_24,&iStack_114,ar6_00,ar7_00,auStack_bc);
      Vec3_add(auStack_ac,auStack_bc,ar6_00,ar7_00,auStack_cc);
      Vec3_assign((int *)((int)ar4 + 0x14),auStack_cc,ar6_00,ar7_00);
      Vec3_dtor(auStack_cc,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_bc,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_ac,0xffffffff,ar6_00,ar7_00);
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 0x44);
      }
      if (fVar5 == 1.0) {
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x44) = 0;
        }
        else {
          ar4[0x44] = (ulonglong)(uint)fVar5;
        }
        *(int *)(ar4 + 0x45) = 1;
        ar6_00 = (int *)0x40;
        *(int *)(ar4 + 8) = 5;
      }
    }
    else {
      *(int *)(ar4 + 0xd) = 0;
      *(int *)(ar4 + 0x45) = 0;
      if (cVar11 == '\0') {
        *(int *)(ar4 + 3) = 0;
      }
      else {
        ar4[3] = uVar8 & 0xffffffff;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x44) = 0;
      }
      else {
        ar4[0x44] = uVar8 & 0xffffffff;
      }
    }
    break;
  case 2:
    goto switchD_8c091ea8_caseD_2;
  }
switchD_8c091ea8_default:
  uStack_104 = 0;
  Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7_00);
  return uStack_104;
}



/* FUN_8c092884 @ 8c092884 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c092884(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar3;
  double in_dr0;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  undefined4 in_stack_00000000;
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_set_zero(&fStack_14,ar5,ar6,ar7);
  Vec3_sub(ar6,ar5,ar6_00,ar7_00,auStack_34);
  Vec3_normalize(auStack_34,ar5,ar6_00,ar7_00);
  Vec3_ctor_copy(auStack_24,auStack_44,ar6_00,ar7_00);
  Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
  FUN_8c0230f0(ar7,uVar2,ar6_00,ar7_00,auStack_54);
  FUN_8c0230f0(auStack_24,uVar2,ar6_00,ar7_00,(int)&uStack_68 + 4);
  FUN_8c022dac(auStack_54,(int)&uStack_68 + 4,ar6_00,ar7_00);
  uStack_10 = SUB84(in_dr0,0);
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  dVar4 = in_dr0;
  if (cVar6 == '\0') {
    uStack_68 = (double)CONCAT44(uStack_68._4_4_,uVar2);
    dVar4 = uStack_68;
    uStack_10 = uVar2;
    uVar2 = uStack_c;
  }
  uStack_c = uVar2;
  uStack_68 = dVar4;
  Vec3_dtor((int)&uStack_68 + 4,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
  ar5_00 = auStack_24;
  iStack_6c = FUN_8c023334(ar7,ar5_00,ar6_00,ar7_00);
  if (iStack_6c == 4) {
    if (cVar6 == '\0') {
      in_dr0 = (double)CONCAT44(0xbf800000,uStack_10);
    }
    else {
      in_xd0 = CONCAT44(uStack_c,uStack_10);
      in_dr0 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar3,SUB84(in_dr0,0) * fVar3);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar6 == '\0') {
      uStack_10 = SUB84(in_dr0,0);
    }
    else {
      uStack_10 = (undefined4)in_xd0;
      uStack_c = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  FUN_8c0231c8(auStack_24,ar5_00,ar6_00,ar7_00);
  iVar1 = (int)((ulonglong)in_dr0 >> 0x20);
  iStack_70 = iVar1;
  if (cVar6 != '\0') {
    iStack_70 = SUB84(in_dr0,0);
    iStack_6c = iVar1;
  }
  FUN_8c0231c8(ar7,ar5_00,ar6_00,ar7_00);
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    in_dr0 = (double)CONCAT44(uVar2,iStack_70);
  }
  else {
    in_xd0 = CONCAT44(iStack_6c,uVar2);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(in_dr0,0) - (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    fVar3 = SUB84(in_dr0 - in_dr0,0);
  }
  fStack_14 = fVar3;
  if (cVar6 != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar5 == '\0' && fVar3 < 0.0) {
    if (cVar6 == '\0') {
      dVar4 = (double)CONCAT44(0xbf800000,fStack_14);
    }
    else {
      in_xd0 = CONCAT44(uStack_10,fStack_14);
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      fStack_14 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_14 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar6 != '\0') {
      fStack_14 = (float)in_xd0;
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  iVar1 = FUN_8c0232e8(ar7,auStack_24,ar6_00,ar7_00);
  if (iVar1 == 1) {
    if (cVar6 == '\0') {
      dVar4 = (double)CONCAT44(0xbf800000,fStack_14);
    }
    else {
      in_xd0 = CONCAT44(uStack_10,fStack_14);
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      fStack_14 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_14 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar6 != '\0') {
      fStack_14 = (float)in_xd0;
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  vec3_copy_8c02b5fc(in_stack_00000000,&fStack_14,ar6_00,ar7_00);
  Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7_00);
  object_dtor_delete(&fStack_14,0xffffffff,ar6_00,ar7_00);
  return 0;
}



/* FUN_8c092a28 @ 8c092a28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c092a28(code *ar4,undefined4 ar5,code *ar6,code *ar7)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *ar6_00;
  code *ar7_00;
  undefined4 uVar4;
  float fVar5;
  double in_dr0;
  undefined8 uVar6;
  double dVar7;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  code *in_stack_00000000;
  code *in_stack_fffffedc;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c03f480(ar5,ar5,ar6,ar7,auStack_48);
  Vec3_ctor_copy(auStack_28,auStack_48,ar6_00,ar7_00);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
  Vec3_ctor_zero(&uStack_38,uVar2,ar6_00,ar7_00);
  iVar1 = *(int *)(ar4 + 0x124);
  if ((iVar1 < 0xc) && (-1 < iVar1)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar1) {
    case 0:
      uVar4 = 0;
      break;
    default:
      goto switchD_8c092a98_caseD_1;
    case 2:
    case 7:
      uVar4 = FUN_8c09344c(ar4,auStack_28,ar6,ar7);
      ar6_00 = ar6;
      ar7_00 = ar7;
      break;
    case 4:
      iVar1 = get_field_24_026024(ar7,0xb,ar6_00,ar7_00);
      if (iVar1 != 0) {
        ar6_00 = (code *)auStack_28;
        uVar4 = FUN_8c093e80(ar4,in_stack_00000000,ar6_00,ar6);
        ar7_00 = ar6;
        break;
      }
      iVar1 = *(int *)(ar4 + 300);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          *(int *)(ar4 + 0x2e0) = *(int *)(iVar1 + 4);
        }
        else {
          *(undefined8 *)(ar4 + 0x2e0) = *(undefined8 *)(iVar1 + 4);
        }
        iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          *(int *)(ar4 + 0x2e4) = *(int *)(iVar1 + 8);
        }
        else {
          *(undefined8 *)(ar4 + 0x2e4) = *(undefined8 *)(iVar1 + 8);
        }
        iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          *(int *)(ar4 + 0x2e8) = *(int *)(iVar1 + 0xc);
        }
        else {
          *(undefined8 *)(ar4 + 0x2e8) = *(undefined8 *)(iVar1 + 0xc);
        }
        ar7_00 = (code *)0x5;
        *(int *)(ar4 + 0x40) = 5;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        ar6_00 = ar4;
LAB_8c092c4e:
        iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          uStack_38 = *(undefined4 *)(iVar1 + 4);
        }
        else {
          uVar6 = *(undefined8 *)(iVar1 + 4);
          uStack_38 = (undefined4)uVar6;
          fStack_34 = (float)((ulonglong)uVar6 >> 0x20);
        }
        iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x42a00000,*(undefined4 *)(iVar1 + 8));
        }
        else {
          in_xd0 = *(undefined8 *)(iVar1 + 8);
          dVar7 = 5.0983124752531e-312;
        }
        if (cVar8 == '\0') {
          fStack_34 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fStack_34 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 != '\0') {
          fStack_34 = (float)in_xd0;
          fStack_30 = (float)((ulonglong)in_xd0 >> 0x20);
        }
        iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x41f00000,*(undefined4 *)(iVar1 + 0xc));
        }
        else {
          in_xd0 = *(undefined8 *)(iVar1 + 0xc);
          dVar7 = 262144.06439208984;
        }
        if (cVar8 == '\0') {
          fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x41100000,fVar5);
        }
        else {
          dVar7 = 5.18306279054705e-312;
        }
        if (cVar8 == '\0') {
          fStack_30 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fStack_30 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 != '\0') {
          fStack_30 = (float)in_xd0;
          uStack_2c = (undefined4)((ulonglong)in_xd0 >> 0x20);
        }
        if (0 < *(int *)(ar4 + 0x260)) {
          Vec3_assign(ar4 + 0x264,&uStack_38,ar6_00,ar7_00);
        }
        pcVar3 = Vec3_ctor_xyz;
        Vec3_ctor_xyz(auStack_68,Vec3_ctor_xyz,ar6_00,ar7_00);
        Vec3_normalize(auStack_68,pcVar3,ar6_00,ar7_00);
        ar7_00 = (code *)auStack_78;
        iVar1 = FUN_8c095548(ar4,in_stack_00000000,&uStack_38,ar7_00);
        Vec3_dtor(auStack_78,0xffffffff,Vec3_dtor,ar7_00);
        ar6_00 = Vec3_dtor;
        Vec3_dtor(auStack_68,0xffffffff,Vec3_dtor,ar7_00);
        if (iVar1 == 0) {
          *(int *)(ar4 + 0x40) = 5;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else {
        if (iVar1 == 1) goto LAB_8c092c4e;
        if (iVar1 == 2) {
          if (cVar9 == '\0') {
            *(int *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
          }
          iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
          if (cVar9 == '\0') {
            uStack_38 = *(undefined4 *)(iVar1 + 4);
          }
          else {
            uVar6 = *(undefined8 *)(iVar1 + 4);
            uStack_38 = (undefined4)uVar6;
            fStack_34 = (float)((ulonglong)uVar6 >> 0x20);
          }
          iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
          if (cVar9 == '\0') {
            dVar7 = (double)CONCAT44(0x42a00000,*(undefined4 *)(iVar1 + 8));
          }
          else {
            in_xd0 = *(undefined8 *)(iVar1 + 8);
            dVar7 = 5.0983124752531e-312;
          }
          if (cVar8 == '\0') {
            fStack_34 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fStack_34 = SUB84(dVar7 + dVar7,0);
          }
          if (cVar9 != '\0') {
            fStack_34 = (float)in_xd0;
            fStack_30 = (float)((ulonglong)in_xd0 >> 0x20);
          }
          iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
          if (cVar9 == '\0') {
            dVar7 = (double)CONCAT44(0x41f00000,*(undefined4 *)(iVar1 + 0xc));
          }
          else {
            in_xd0 = *(undefined8 *)(iVar1 + 0xc);
            dVar7 = 262144.06439208984;
          }
          if (cVar8 == '\0') {
            fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar7 + dVar7,0);
          }
          if (cVar9 == '\0') {
            dVar7 = (double)CONCAT44(0x41100000,fVar5);
          }
          else {
            dVar7 = 5.18306279054705e-312;
          }
          if (cVar8 == '\0') {
            fStack_30 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fStack_30 = SUB84(dVar7 + dVar7,0);
          }
          if (cVar9 != '\0') {
            fStack_30 = (float)in_xd0;
            uStack_2c = (undefined4)((ulonglong)in_xd0 >> 0x20);
          }
          FUN_8c031de8(ar4,1,ar6_00,ar7_00);
          uVar4 = 0;
        }
        else {
          *(int *)(ar4 + 300) = 0;
        }
      }
      iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(*(int *)(ar4 + 0x2e0),*(undefined4 *)(iVar1 + 4));
      }
      else {
        in_xd0 = *(undefined8 *)(iVar1 + 4);
        dVar7 = *(double *)(ar4 + 0x2e0);
      }
      if (cVar8 == '\0') {
        fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x2d0) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 0x2d0) = in_xd0;
      }
      iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(*(int *)(ar4 + 0x2e4),*(undefined4 *)(iVar1 + 8));
      }
      else {
        in_xd0 = *(undefined8 *)(iVar1 + 8);
        dVar7 = *(double *)(ar4 + 0x2e4);
      }
      if (cVar8 == '\0') {
        fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x2d4) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 0x2d4) = in_xd0;
      }
      iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(*(int *)(ar4 + 0x2e8),*(undefined4 *)(iVar1 + 0xc));
      }
      else {
        in_xd0 = *(undefined8 *)(iVar1 + 0xc);
        dVar7 = *(double *)(ar4 + 0x2e8);
      }
      if (cVar8 == '\0') {
        fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x2d8) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 0x2d8) = in_xd0;
      }
      iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x2e0) = *(int *)(iVar1 + 4);
      }
      else {
        *(undefined8 *)(ar4 + 0x2e0) = *(undefined8 *)(iVar1 + 4);
      }
      iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x2e4) = *(int *)(iVar1 + 8);
      }
      else {
        *(undefined8 *)(ar4 + 0x2e4) = *(undefined8 *)(iVar1 + 8);
      }
      iVar1 = (**(code **)(*(int *)ar7 + 0x104))(ar7,2,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x2e8) = *(int *)(iVar1 + 0xc);
      }
      else {
        *(undefined8 *)(ar4 + 0x2e8) = *(undefined8 *)(iVar1 + 0xc);
      }
      break;
    case 6:
      ar6_00 = (code *)auStack_28;
      uVar4 = FUN_8c093e80(ar4,in_stack_00000000,ar6_00,ar6);
      ar7_00 = ar6;
      break;
    case 8:
      FUN_8c0988a4(ar4,in_stack_00000000,ar7,ar7_00);
      ar6_00 = ar7;
      break;
    case 9:
      *(int *)(ar4 + 0x214) = 0;
      if (*(int *)(ar4 + 300) == 0) {
        ar7_00 = (code *)0x0;
        ar6_00 = (code *)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
        pcVar3 = ar4 + 0xb0;
        s_CAnimBody_SetFrame_033e6e(pcVar3,pcVar3,ar6_00,ar7_00);
        FUN_8c032204(ar4 + 0xb0,pcVar3,ar6_00,ar7_00,in_stack_fffffedc);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        in_stack_fffffedc = ar4;
      }
      uVar2 = 5;
      iVar1 = FUN_8c031de8(ar4,5,ar6_00,ar7_00);
      if (iVar1 == 0) {
        *(int *)(ar4 + 300) = 0;
        FUN_8c032204(ar4 + 0xb0,uVar2,ar6_00,ar7_00,in_stack_fffffedc);
        uVar4 = 0;
        if ((-1 < *(int *)(ar4 + 0x2f4)) && (-1 < *(int *)(ar4 + 0x2f8))) {
          FUN_8c06b1d8(*(int *)(ar4 + 0x2f4),*(int *)(ar4 + 0x2f8),ar6_00,ar7_00);
          ar7_00 = (code *)0x2f4;
          *(int *)(ar4 + 0x2f4) = -1;
          *(int *)(ar4 + 0x2f8) = -1;
        }
      }
      else {
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6_00,ar7_00,in_stack_fffffedc);
        if (cVar9 == '\0') {
          *(int *)(ar4 + 0x2fc) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x2fc) = in_dr0;
        }
      }
      FUN_8c031c74(ar4,auStack_28,in_stack_00000000,ar7_00);
      ar6_00 = in_stack_00000000;
      break;
    case 10:
      *(int *)(ar4 + 0x214) = 0;
      *(int *)(ar4 + 0x25c) = -1;
      iVar1 = *(int *)(ar4 + 300);
      if (iVar1 == 0) {
        iVar1 = FUN_8c093aec(ar4,in_stack_00000000,ar6,ar7);
        ar6_00 = ar6;
        ar7_00 = ar7;
        if (iVar1 == 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          ar7_00 = ar7;
        }
      }
      else if (iVar1 == 1) {
        ar6_00 = (code *)auStack_28;
        iVar1 = FUN_8c0967d8(ar4,in_stack_00000000,ar6_00,ar6);
        ar7_00 = ar6;
        if (iVar1 == 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else if (iVar1 == 2) {
        iVar1 = FUN_8c034148(ar4 + 0xb0,6,ar6_00,ar7_00);
        if (0 < iVar1) {
          uVar2 = 300;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          FUN_8c0230f0(ar4 + 0x14,300,ar6_00,ar7_00,auStack_88);
          uVar2 = Vec3_length(auStack_88,uVar2,ar6_00,ar7_00);
          Vec3_assign(ar4 + 0x14,uVar2,ar6_00,ar7_00);
          uVar2 = 0xffffffff;
          Vec3_dtor(auStack_88,0xffffffff,ar6_00,ar7_00);
          FUN_8c031748(ar4,uVar2,ar6_00,ar7_00);
          *(int *)(ar4 + 0x284) = 0;
          ar6_00 = FUN_8c032204;
          FUN_8c032204(ar4 + 0xb0,0,FUN_8c032204,ar7_00);
        }
      }
      else if (iVar1 == 3) {
        iVar1 = FUN_8c031de8(ar4,6,ar6_00,ar7_00);
        if (iVar1 == 0) {
          iVar1 = *(int *)(ar4 + 0x284);
          *(int *)(ar4 + 0x284) = iVar1 + 1;
          if (1 < iVar1 + 1) {
            *(int *)(ar4 + 0x284) = 0;
            *(int *)(ar4 + 300) = 0;
            uVar4 = 0;
            *(int *)(ar4 + 0x248) = 0;
            *(int *)(ar4 + 0x40) = 5;
          }
        }
        else {
          CAnimBody_GetCurFrame(ar4 + 0xb0,CAnimBody_GetCurFrame,ar6_00,ar7_00,in_stack_fffffedc);
          if (cVar8 == '\0') {
            iVar1 = (int)(float)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            iVar1 = (int)in_dr0;
          }
          if (iVar1 == 0x38) {
            *(int *)(ar4 + 0x25c) = *(int *)(ar4 + 0x284);
          }
        }
      }
      break;
    case 0xb:
      Vec3_ctor_xyz(auStack_58,0xb,ar6_00,ar7_00);
      Vec3_assign(auStack_28,auStack_58,ar6_00,ar7_00);
      Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7_00);
      ar6_00 = (code *)auStack_28;
      uVar4 = FUN_8c097fcc(ar4,in_stack_00000000,ar6_00,ar6);
      ar7_00 = ar6;
    }
  }
  else {
switchD_8c092a98_caseD_1:
    uVar4 = 0;
  }
  Vec3_dtor(&uStack_38,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  return uVar4;
}



/* FUN_8c09344c @ 8c09344c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c093450) */
/* WARNING: Removing unreachable block (ram,0x8c09344c) */
/* WARNING: Removing unreachable block (ram,0x8c09344e) */
/* WARNING: Removing unreachable block (ram,0x8c093452) */
/* WARNING: Unknown calling convention */

int FUN_8c09344c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 in_stack_00000000;
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
  undefined1 auStack_38 [20];
  
  iVar6 = 1;
  iVar1 = *(int *)(ar4 + 0x248);
  if (iVar1 == 0) {
    iVar1 = ar4;
    iVar6 = FUN_8c093aec(ar4,in_stack_00000000,ar6,ar7);
    if (iVar6 == 0) {
      uVar3 = rand(iVar1,in_stack_00000000,ar6,ar7);
      uVar2 = 100;
      iVar1 = libgcc_divide_helper_01031c(uVar3,100,ar6,ar7);
      if (iVar1 < 0xf) {
        *(undefined4 *)(ar4 + 0x248) = 2;
        *(undefined4 *)(ar4 + 0x40) = 5;
        uVar3 = rand(uVar3,uVar2,ar6,ar7);
        uVar3 = libgcc_divide_helper_01031c(uVar3,10,ar6,ar7);
        *(undefined4 *)(ar4 + 0x2f0) = uVar3;
      }
    }
  }
  else if (iVar1 == 2) {
    if (*(char *)(ar4 + 0x280) == '\x01') {
      *(undefined4 *)(ar4 + 0x288) = 1;
      FUN_8c0230f0(ar4 + 0x80,ar5,ar6,ar7,auStack_f8);
      Vec3_assign(ar4 + 0x14,auStack_f8,ar6,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_f8,0xffffffff,ar6,ar7);
      *(undefined4 *)(ar4 + 0x248) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
    }
    else {
      uVar3 = ar5;
      uVar2 = ar6;
      iVar1 = get_field_24_026024(ar7,ar5,ar6,ar7);
      if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 == 2)) {
        *(undefined4 *)(ar4 + 0x2f0) = 10;
      }
      iVar1 = *(int *)(ar4 + 0x2f0);
      if (iVar1 == 0) {
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_38,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_48,uVar3,uVar2,ar7);
        Vec3_normalize(auStack_48,uVar3,uVar2,ar7);
        puVar5 = auStack_58;
        puVar4 = auStack_38;
        iVar6 = FUN_8c095548(ar4,in_stack_00000000,puVar4,puVar5);
        Vec3_dtor(auStack_58,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_48,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_38,0xffffffff,puVar4,puVar5);
      }
      else if (iVar1 == 1) {
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_68,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_78,uVar3,uVar2,ar7);
        Vec3_normalize(auStack_78,uVar3,uVar2,ar7);
        puVar5 = auStack_88;
        puVar4 = auStack_68;
        iVar6 = FUN_8c095548(ar4,in_stack_00000000,puVar4,puVar5);
        Vec3_dtor(auStack_88,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_78,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_68,0xffffffff,puVar4,puVar5);
      }
      else if (iVar1 == 2) {
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_98,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_a8,uVar3,uVar2,ar7);
        Vec3_normalize(auStack_a8,uVar3,uVar2,ar7);
        puVar5 = auStack_b8;
        puVar4 = auStack_98;
        iVar6 = FUN_8c095548(ar4,in_stack_00000000,puVar4,puVar5);
        Vec3_dtor(auStack_b8,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_a8,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_98,0xffffffff,puVar4,puVar5);
      }
      else if (iVar1 == 3) {
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        FUN_8c032ab0(ar4,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_c8,uVar3,uVar2,ar7);
        Vec3_ctor_xyz(auStack_d8,uVar3,uVar2,ar7);
        Vec3_normalize(auStack_d8,uVar3,uVar2,ar7);
        puVar5 = auStack_e8;
        puVar4 = auStack_c8;
        iVar6 = FUN_8c095548(ar4,in_stack_00000000,puVar4,puVar5);
        Vec3_dtor(auStack_e8,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_d8,0xffffffff,puVar4,puVar5);
        Vec3_dtor(auStack_c8,0xffffffff,puVar4,puVar5);
      }
      else {
        iVar6 = FUN_8c094514(ar4,in_stack_00000000,ar5,ar6);
      }
    }
  }
  else if (iVar1 == 3) {
    if (*(char *)(ar4 + 0x280) == '\x01') {
      FUN_8c0230f0(ar4 + 0x80,ar5,ar6,ar7,auStack_108);
      Vec3_assign(ar4 + 0x14,auStack_108,ar6,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_108,0xffffffff,ar6,ar7);
      *(undefined4 *)(ar4 + 0x248) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
    }
    else {
      FUN_8c097888(ar4,in_stack_00000000,ar5,ar6);
    }
  }
  return iVar6;
}



/* FUN_8c093aec @ 8c093aec callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c093aec) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c093aec(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double in_dr0;
  double dVar6;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd0;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined8 uStack_a0;
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar2 = ar6;
  uVar4 = ar7;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  ar5_00 = ar4 + 0x24c;
  Vec3_assign(auStack_2c,ar5_00,uVar2,uVar4);
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c093b3c:
    if (*(char *)(ar4 + 0x280) == '\x01') {
      uVar4 = 0;
      uVar2 = 0xffffffff;
      uVar3 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,uVar4);
      *(undefined1 *)(ar4 + 0x280) = 0;
    }
    else {
      iVar1 = FUN_8c034148(ar4 + 0xb0,0,uVar2,uVar4);
      if ((iVar1 != 1) && (iVar1 != 2)) {
        Vec3_dtor(auStack_2c,0xffffffff,uVar2,uVar4);
        return 1;
      }
    }
    FUN_8c022fc0(ar5,auStack_2c,uVar2,uVar4);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),(int)((ulonglong)in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar6 = *(double *)(ar4 + 0x24);
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x30) = fVar5;
    }
    else {
      *(double *)(ar4 + 0x30) = in_dr0;
      fVar5 = 2.0;
    }
    uVar2 = ar6;
    uVar4 = ar7;
    FUN_8c032518(ar4,ar5,ar6,ar7);
    Vec3_assign(ar4 + 0x24c,auStack_4c,uVar2,uVar4);
    Vec3_dtor(auStack_4c,0xffffffff,uVar2,uVar4);
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44(0x40a00000,fVar5);
    }
    else {
      in_dr0 = -8.360315941118363e-251;
    }
    uVar2 = ar7;
    uVar4 = FUN_8c032788(ar4,ar4 + 0x24c,ar6,ar7);
    Vec3_assign(ar4 + 0x24c,uVar4,ar6,uVar2);
    Vec3_assign(auStack_2c,ar4 + 0x24c,ar6,uVar2);
    uVar4 = 0x8c2846e8;
    FUN_8c031b68(ar4,0x8c2846e8,ar6,uVar2);
    FUN_8c031c64(ar4,uVar4,ar6,uVar2);
    *(undefined4 *)(ar4 + 0x40) = 3;
    ar5_00 = 0x24;
    uVar2 = ar5;
    FUN_8c033474(ar4,0x24,ar5,ar7);
    uVar4 = ar7;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c093cfc;
    goto LAB_8c093b3c;
  }
  s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,uVar2,uVar4);
  FUN_8c0231c8(ar4 + 0x14,ar5_00,uVar2,uVar4);
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0xc1700000,SUB84(in_dr0,0));
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    dVar6 = 16777228.08984375;
  }
  if (cVar8 == '\0') {
    bVar7 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    bVar7 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44(0xc1700000,SUB84(dVar6,0));
    }
    else {
      in_dr0 = 16777228.08984375;
    }
    if (cVar8 == '\0') {
      in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) - in_fr15,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = in_dr0 - (double)CONCAT44(in_fr14,in_fr15);
    }
  }
  else {
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44(0x41700000,SUB84(dVar6,0));
    }
    else {
      in_dr0 = -7.950726470801028e-251;
    }
    if (cVar8 == '\0') {
      bVar7 = (float)((ulonglong)in_dr0 >> 0x20) < in_fr15;
    }
    else {
      bVar7 = in_dr0 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44(0x41700000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = -7.950726470801028e-251;
      }
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) - in_fr15,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 - (double)CONCAT44(in_fr14,in_fr15);
      }
    }
  }
  FUN_8c02374c(ar4 + 0x14,ar5_00,uVar2,uVar4);
  Vec3_assign(ar4 + 0x80,auStack_5c,uVar2,uVar4);
  Vec3_dtor(auStack_5c,0xffffffff,uVar2,uVar4);
LAB_8c093cfc:
  uVar3 = ar5;
  Vec3_sub(auStack_2c,ar5,uVar2,uVar4,auStack_6c);
  Vec3_normalize(auStack_6c,uVar3,uVar2,uVar4);
  Vec3_ctor_copy(auStack_3c,auStack_7c,uVar2,uVar4);
  Vec3_dtor(auStack_7c,0xffffffff,uVar2,uVar4);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_6c,0xffffffff,uVar2,uVar4);
  FUN_8c0230f0(ar4 + 0x14,uVar3,uVar2,uVar4,auStack_8c);
  FUN_8c0230f0(auStack_3c,uVar3,uVar2,uVar4,(int)&uStack_a0 + 4);
  FUN_8c022dac(auStack_8c,(int)&uStack_a0 + 4,uVar2,uVar4);
  dVar6 = in_dr0;
  if (cVar9 == '\0') {
    uStack_a0 = (double)CONCAT44(uStack_a0._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
    dVar6 = uStack_a0;
  }
  uStack_a0 = dVar6;
  Vec3_dtor((int)&uStack_a0 + 4,0xffffffff,uVar2,uVar4);
  Vec3_dtor(auStack_8c,0xffffffff,uVar2,uVar4);
  uVar2 = FUN_8c097ba4(ar4,auStack_2c,ar5,uVar4);
  Vec3_dtor(auStack_3c,0xffffffff,ar5,uVar4);
  Vec3_dtor(auStack_2c,0xffffffff,ar5,uVar4);
  return uVar2;
}



/* FUN_8c093e80 @ 8c093e80 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c093e80) */
/* WARNING: Unknown calling convention */

int FUN_8c093e80(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  double in_dr0;
  double dVar7;
  float fVar9;
  double dVar8;
  undefined4 in_fr3;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd0;
  bool bVar10;
  char cVar11;
  char cVar12;
  int in_stack_00000000;
  float fStack_198;
  float fStack_194;
  undefined4 uStack_184;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 auStack_154 [4];
  undefined1 auStack_144 [16];
  undefined1 auStack_134 [16];
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [16];
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [20];
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar4 = ar5;
  iVar3 = ar6;
  iVar5 = ar7;
  Vec3_ctor_zero(auStack_34,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_44,uVar4,iVar3,iVar5);
  uVar4 = ar5;
  Vec3_sub(ar6,ar5,iVar3,iVar5,auStack_64);
  Vec3_length_sq(auStack_64,uVar4,iVar3,iVar5);
  iVar2 = (int)((ulonglong)in_dr0 >> 0x20);
  if (cVar12 == '\0') {
    in_dr0 = (double)CONCAT44(iVar2,in_fr3);
    dVar7 = (double)CONCAT44(0x41200000,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x48);
    dVar7 = -7.932637925129825e-251;
    iStack_170 = iVar2;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar7 >> 0x20);
    fVar6 = SUB84(dVar7,0) * fVar9;
    dVar7 = (double)CONCAT44(fVar9,fVar6);
    bVar10 = fVar6 < (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    dVar7 = dVar7 * dVar7;
    bVar10 = dVar7 < in_dr0;
  }
  iStack_168 = 1 - (uint)bVar10;
  Vec3_dtor(auStack_64,0xffffffff,iVar3,iVar5);
  uVar4 = SUB84(in_dr0,0);
  if (iStack_168 == 0) {
    iVar2 = ar4 + 0x24c;
    Vec3_assign(auStack_34,iVar2,iVar3,iVar5);
  }
  else {
    iVar2 = ar6;
    Vec3_assign(auStack_34,ar6,iVar3,iVar5);
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c093f74:
    iVar2 = FUN_8c034148(ar4 + 0xb0,0,iVar3,iVar5);
    if ((iVar2 != 1) && (iVar2 != 2)) {
      uStack_160 = 1;
      Vec3_dtor(auStack_44,0xffffffff,iVar3,iVar5);
      Vec3_dtor(auStack_34,0xffffffff,iVar3,iVar5);
      return uStack_160;
    }
    ar5_00 = ar5;
    Vec3_sub(ar6,ar5,iVar3,iVar5,auStack_74);
    Vec3_length_sq(auStack_74,ar5_00,iVar3,iVar5);
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),uVar4);
      dVar8 = (double)CONCAT44(0x41200000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x48);
      dVar8 = -7.932637925129825e-251;
    }
    if (cVar11 == '\0') {
      fVar9 = (float)((ulonglong)dVar8 >> 0x20);
      fVar6 = SUB84(dVar8,0) * fVar9;
      dVar8 = (double)CONCAT44(fVar9,fVar6);
      bVar10 = fVar6 < (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      dVar8 = dVar8 * dVar8;
      bVar10 = dVar8 < dVar7;
    }
    iStack_16c = 1 - (uint)bVar10;
    Vec3_dtor(auStack_74,0xffffffff,iVar3,iVar5);
    if (iStack_16c == 0) {
      Vec3_sub(ar6,ar5,iVar3,iVar5,auStack_84);
      Vec3_assign(auStack_44,auStack_84,iVar3,iVar5);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_84,0xffffffff,iVar3,iVar5);
      Vec3_length_sq(auStack_44,uVar4,iVar3,iVar5);
      uVar4 = (undefined4)((ulonglong)dVar8 >> 0x20);
      uStack_158 = uVar4;
      if (cVar12 != '\0') {
        uStack_184 = SUB84(dVar8,0);
        uStack_158 = uStack_184;
        auStack_154[0] = uVar4;
      }
      Vec3_scale(auStack_44,ar4 + 0x48,iVar3,iVar5,auStack_94);
      Vec3_scale(auStack_94,&DAT_8c13a768,iVar3,iVar5,auStack_a4);
      FUN_8c023c30(auStack_a4,&uStack_158,iVar3,iVar5,auStack_b4);
      iVar3 = ar7;
      iVar5 = in_stack_00000000;
      FUN_8c032518(ar4,ar5,ar7,in_stack_00000000);
      Vec3_sub(auStack_c4,ar5,iVar3,iVar5,auStack_d4);
      if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(uStack_158,0x43480000);
      }
      else {
        dVar7 = (double)CONCAT44(auStack_154[0],uStack_158);
        in_xd0 = 1548112654106624.0;
      }
      if (cVar11 == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(1.0 - fVar6,fVar6);
      }
      else {
        dVar7 = (double)CONCAT44(0x3f800000,fVar6) - (double)CONCAT44(0x3f800000,fVar6);
      }
      iVar2 = (int)((ulonglong)dVar7 >> 0x20);
      iStack_170 = iVar2;
      if (cVar12 != '\0') {
        iStack_170 = SUB84(dVar7,0);
        iStack_16c = iVar2;
      }
      Vec3_scale(auStack_d4,&iStack_170,iVar3,iVar5,auStack_e4);
      uVar4 = SUB84(dVar7,0);
      Vec3_add(auStack_b4,auStack_e4,iVar3,iVar5,auStack_f4);
      FUN_8c023c30(auStack_f4,&DAT_8c13a76c,iVar3,iVar5,auStack_104);
      Vec3_assign(ar4 + 0x24c,auStack_104,iVar3,iVar5);
      Vec3_dtor(auStack_104,0xffffffff,iVar3,iVar5);
      Vec3_dtor(auStack_f4,0xffffffff,iVar3,iVar5);
      Vec3_dtor(auStack_e4,0xffffffff,iVar3,iVar5);
      Vec3_dtor(auStack_d4,0xffffffff,iVar3,iVar5);
      Vec3_dtor(auStack_c4,0xffffffff,iVar3,iVar5);
      Vec3_dtor(auStack_b4,0xffffffff,iVar3,iVar5);
      Vec3_dtor(auStack_a4,0xffffffff,iVar3,iVar5);
      Vec3_dtor(auStack_94,0xffffffff,iVar3,iVar5);
      FUN_8c023aa0(ar4 + 0x24c,ar5,iVar3,iVar5);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(0x40000000,uVar4);
      }
      else {
        dVar8 = 13510801029595136.0;
      }
      FUN_8c032788(ar4,ar4 + 0x24c,ar7,in_stack_00000000);
      Vec3_assign(auStack_34,ar4 + 0x24c,ar7,in_stack_00000000);
    }
    else {
      uVar4 = Vec3_assign(ar4 + 0x24c,ar6,iVar3,iVar5);
      Vec3_assign(auStack_34,uVar4,iVar3,iVar5);
      ar7 = iVar3;
      in_stack_00000000 = iVar5;
    }
    ar5_01 = auStack_34;
    FUN_8c022fc0(ar5,ar5_01,ar7,in_stack_00000000);
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),(int)((ulonglong)dVar8 >> 0x20));
      dVar8 = in_xd0;
    }
    else {
      dVar7 = *(double *)(ar4 + 0x24);
    }
    if (cVar11 == '\0') {
      fVar6 = (float)((ulonglong)dVar7 >> 0x20);
      dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0) / fVar6);
    }
    else {
      dVar7 = dVar7 / dVar7;
    }
    if (cVar12 == '\0') {
      *(int *)(ar4 + 0x30) = SUB84(dVar7,0);
    }
    else {
      *(double *)(ar4 + 0x30) = dVar8;
    }
    FUN_8c031c64(ar4,ar5_01,ar7,in_stack_00000000);
    iVar2 = -0x73d7b918;
    FUN_8c031b68(ar4,0x8c2846e8,ar7,in_stack_00000000);
    *(undefined4 *)(ar4 + 0x40) = 3;
    iVar3 = ar7;
    iVar5 = in_stack_00000000;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c094390;
    goto LAB_8c093f74;
  }
  s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar2,iVar3,iVar5);
  FUN_8c0231c8(ar4 + 0x14,iVar2,iVar3,iVar5);
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0xc1700000,SUB84(dVar7,0));
    in_fr15 = (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    dVar8 = -4.808686934874603e+231;
  }
  if (cVar11 == '\0') {
    bVar10 = in_fr15 < (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    bVar10 = (double)CONCAT44(in_fr14,in_fr15) < dVar8;
  }
  if (bVar10) {
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0xc1700000,SUB84(dVar8,0));
    }
    else {
      dVar7 = -4.808686934874603e+231;
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - in_fr15,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - (double)CONCAT44(in_fr14,in_fr15);
    }
  }
  else {
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x41700000,SUB84(dVar8,0));
    }
    else {
      dVar7 = 2.97621825186588e-312;
    }
    if (cVar11 == '\0') {
      bVar10 = (float)((ulonglong)dVar7 >> 0x20) < in_fr15;
    }
    else {
      bVar10 = dVar7 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar10) {
      if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x41700000,SUB84(dVar7,0));
      }
      else {
        dVar7 = 2.97621825186588e-312;
      }
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - in_fr15,SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 - (double)CONCAT44(in_fr14,in_fr15);
      }
    }
  }
  FUN_8c02374c(ar4 + 0x14,iVar2,iVar3,iVar5);
  Vec3_assign(ar4 + 0x80,auStack_114,iVar3,iVar5);
  Vec3_dtor(auStack_114,0xffffffff,iVar3,iVar5);
LAB_8c094390:
  uVar4 = ar5;
  Vec3_sub(auStack_34,ar5,iVar3,iVar5,auStack_124);
  Vec3_normalize(auStack_124,uVar4,iVar3,iVar5);
  Vec3_ctor_copy(auStack_54,auStack_134,iVar3,iVar5);
  Vec3_dtor(auStack_134,0xffffffff,iVar3,iVar5);
  uVar4 = 0xffffffff;
  Vec3_dtor(auStack_124,0xffffffff,iVar3,iVar5);
  FUN_8c0230f0(ar4 + 0x14,uVar4,iVar3,iVar5,auStack_144);
  FUN_8c0230f0(auStack_54,uVar4,iVar3,iVar5,auStack_154);
  FUN_8c022dac(auStack_144,auStack_154,iVar3,iVar5);
  uVar4 = (undefined4)((ulonglong)dVar7 >> 0x20);
  uStack_15c = uVar4;
  if (cVar12 != '\0') {
    uStack_15c = SUB84(dVar7,0);
    uStack_158 = uVar4;
  }
  Vec3_dtor(auStack_154,0xffffffff,iVar3,iVar5);
  Vec3_dtor(auStack_144,0xffffffff,iVar3,iVar5);
  uVar4 = ar5;
  iVar3 = FUN_8c097ba4(ar4,auStack_34,ar5,iVar5);
  if (iVar3 == 0) {
    FUN_8c022fc0(ar5,ar6,uVar4,iVar5);
    fStack_194 = (float)((ulonglong)dVar7 >> 0x20);
    if (cVar12 == '\0') {
      fStack_198 = fStack_194;
      fStack_194 = 0.0;
    }
    else {
      fStack_198 = SUB84(dVar7,0);
    }
    Vec3_length_sq(ar4 + 4,ar6,uVar4,iVar5);
    fVar6 = (float)((ulonglong)dVar7 >> 0x20);
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(fVar6,*(undefined4 *)(ar4 + 0x48));
      fVar6 = fStack_198;
    }
    fStack_198 = fVar6;
    if (cVar11 == '\0') {
      fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    fVar9 = fStack_198;
    if (cVar12 == '\0') {
      fVar9 = fVar6;
      fStack_194 = fStack_198;
    }
    if (cVar11 == '\0' && fVar9 < fStack_194) {
      iVar3 = 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
    }
  }
  iStack_164 = iVar3;
  Vec3_dtor(auStack_54,0xffffffff,uVar4,iVar5);
  Vec3_dtor(auStack_44,0xffffffff,uVar4,iVar5);
  Vec3_dtor(auStack_34,0xffffffff,uVar4,iVar5);
  return iStack_164;
}



/* FUN_8c094514 @ 8c094514 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c094514) */
/* WARNING: Removing unreachable block (ram,0x8c094516) */
/* WARNING: Unknown calling convention */

int FUN_8c094514(int ar4,code *ar5,code *ar6,code *ar7)

{
  double dVar1;
  int iVar2;
  undefined4 ar5_00;
  code *pcVar3;
  int *ar5_01;
  undefined1 *puVar4;
  undefined4 uVar5;
  code *ar6_00;
  code *pcVar6;
  int ar5_02;
  float fVar7;
  double in_dr0;
  float fVar10;
  double dVar8;
  double dVar9;
  undefined4 in_fr3;
  double in_xd0;
  bool bVar11;
  char cVar12;
  char cVar13;
  code *in_stack_00000000;
  undefined8 uStack_2bc;
  undefined8 uStack_2b4;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined1 auStack_294 [16];
  undefined1 auStack_284 [16];
  undefined1 auStack_274 [16];
  undefined1 auStack_264 [16];
  undefined1 auStack_254 [16];
  undefined1 auStack_244 [16];
  undefined1 auStack_234 [16];
  undefined1 auStack_224 [16];
  undefined1 auStack_214 [16];
  undefined1 auStack_204 [16];
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
  undefined1 auStack_154 [16];
  undefined1 auStack_144 [16];
  undefined1 auStack_134 [16];
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [16];
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [20];
  
  cVar13 = '\0';
  cVar12 = '\0';
  pcVar3 = ar5;
  pcVar6 = ar7;
  Vec3_ctor_zero(auStack_34,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_44,pcVar3,ar6,pcVar6);
  Vec3_ctor_zero(auStack_54,pcVar3,ar6,pcVar6);
  ar5_02 = 1;
  ar5_01 = (int *)(ar4 + 0x40);
  iVar2 = *ar5_01;
  if (iVar2 == 0) {
LAB_8c09458c:
    iVar2 = FUN_8c034148(ar4 + 0xb0,0,ar6,pcVar6);
    if ((iVar2 != 1) && (iVar2 != 2)) {
      uStack_2ac = 1;
      Vec3_dtor(auStack_54,0xffffffff,ar6,pcVar6);
      Vec3_dtor(auStack_44,0xffffffff,ar6,pcVar6);
      Vec3_dtor(auStack_34,0xffffffff,Vec3_dtor,pcVar6);
      return uStack_2ac;
    }
    *(undefined4 *)(ar4 + 0x260) = 0;
    if (cVar13 == '\0') {
      uVar5 = SUB84(in_dr0,0);
      pcVar3 = (code *)0x40000000;
    }
    else {
      uVar5 = 0x40000000;
      pcVar3 = FUN_8c031ce8;
    }
    ar6_00 = in_stack_00000000;
    FUN_8c031ce8(ar4,ar7,in_stack_00000000,pcVar6);
    Vec3_assign(ar4 + 0x264,auStack_64,ar6_00,pcVar6);
    Vec3_dtor(auStack_64,0xffffffff,ar6_00,pcVar6);
    ar6 = ar7;
    pcVar6 = in_stack_00000000;
    ar5_00 = FUN_8c032788(ar4,ar4 + 0x264,ar7,in_stack_00000000);
    Vec3_assign(ar4 + 0x264,ar5_00,ar6,pcVar6);
    (**(code **)(*(int *)in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x264,ar6,pcVar6);
    if (cVar13 == '\0') {
      dVar8 = (double)CONCAT44(0x41100000,pcVar3);
    }
    else {
      in_xd0 = (double)CONCAT44(pcVar3,uVar5);
      dVar8 = 1.46047241024329e-311;
    }
    if (cVar12 == '\0') {
      fVar7 = (float)((ulonglong)dVar8 >> 0x20);
      dVar8 = (double)CONCAT44(fVar7,SUB84(dVar8,0) + fVar7);
    }
    else {
      dVar8 = dVar8 + dVar8;
    }
    if (cVar13 == '\0') {
      *(int *)(ar4 + 0x268) = SUB84(dVar8,0);
    }
    else {
      *(double *)(ar4 + 0x268) = in_xd0;
    }
    Vec3_sub(ar4 + 0x264,ar5,ar6,pcVar6,auStack_74);
    Vec3_assign(auStack_54,auStack_74,ar6,pcVar6);
    uVar5 = 0xffffffff;
    Vec3_dtor(auStack_74,0xffffffff,ar6,pcVar6);
    Vec3_length_sq(auStack_54,uVar5,ar6,pcVar6);
    fVar7 = (float)((ulonglong)dVar8 >> 0x20);
    if (cVar13 == '\0') {
      uStack_2a8 = (double)CONCAT44(uStack_2a8._4_4_,fVar7);
      pcVar3 = (code *)0x43960000;
      dVar8 = in_xd0;
    }
    else {
      fVar7 = 300.0;
      pcVar3 = (code *)0x2a0;
      uStack_2a8 = dVar8;
    }
    if (cVar12 == '\0' && (float)pcVar3 < fVar7) {
      Vec3_scale(auStack_54,ar4 + 0x48,ar6,pcVar6,auStack_84);
      Vec3_scale(auStack_84,&DAT_8c13a770,ar6,pcVar6,auStack_94);
      FUN_8c023c30(auStack_94,&uStack_2a8,ar6,pcVar6,auStack_a4);
      pcVar3 = ar7;
      pcVar6 = in_stack_00000000;
      FUN_8c032518(ar4,ar5,ar7,in_stack_00000000);
      Vec3_sub(auStack_b4,ar5,pcVar3,pcVar6,auStack_c4);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44((undefined4)uStack_2a8,0x43960000);
      }
      else {
        dVar8 = 1.4265413944775e-311;
        dVar9 = uStack_2a8;
      }
      if (cVar12 == '\0') {
        fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 / dVar9,0);
      }
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(1.0 - fVar7,fVar7);
      }
      else {
        dVar9 = (double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7);
      }
      dVar1 = dVar9;
      if (cVar13 == '\0') {
        uStack_2b4 = (double)CONCAT44(uStack_2b4._4_4_,(int)((ulonglong)dVar9 >> 0x20));
        dVar1 = uStack_2b4;
      }
      uStack_2b4 = dVar1;
      Vec3_scale(auStack_c4,&uStack_2b4,pcVar3,pcVar6,auStack_d4);
      fVar7 = SUB84(dVar9,0);
      Vec3_add(auStack_a4,auStack_d4,pcVar3,pcVar6,auStack_e4);
      FUN_8c023c30(auStack_e4,&DAT_8c13a774,pcVar3,pcVar6,auStack_f4);
      Vec3_assign(ar4 + 0x24c,auStack_f4,pcVar3,pcVar6);
      Vec3_dtor(auStack_f4,0xffffffff,pcVar3,pcVar6);
      Vec3_dtor(auStack_e4,0xffffffff,pcVar3,pcVar6);
      Vec3_dtor(auStack_d4,0xffffffff,pcVar3,pcVar6);
      Vec3_dtor(auStack_c4,0xffffffff,pcVar3,pcVar6);
      Vec3_dtor(auStack_b4,0xffffffff,pcVar3,pcVar6);
      Vec3_dtor(auStack_a4,0xffffffff,pcVar3,pcVar6);
      Vec3_dtor(auStack_94,0xffffffff,pcVar3,pcVar6);
      Vec3_dtor(auStack_84,0xffffffff,pcVar3,pcVar6);
      FUN_8c023aa0(ar4 + 0x24c,ar5,FUN_8c023aa0,pcVar6);
      if (cVar13 == '\0') {
        pcVar3 = (code *)0x40000000;
      }
      else {
        fVar7 = 2.0;
        pcVar3 = FUN_8c031ce8;
      }
      ar6 = ar7;
      pcVar6 = in_stack_00000000;
      FUN_8c032788(ar4,ar4 + 0x24c,ar7,in_stack_00000000);
      Vec3_assign(auStack_34,ar4 + 0x24c,ar6,pcVar6);
    }
    else {
      Vec3_assign(auStack_34,ar4 + 0x264,ar6,pcVar6);
    }
    FUN_8c022fc0(ar5,auStack_34,ar6,pcVar6);
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),pcVar3);
      in_xd0 = dVar8;
    }
    else {
      in_xd0 = (double)CONCAT44(pcVar3,fVar7);
      dVar9 = *(double *)(ar4 + 0x24);
    }
    if (cVar12 == '\0') {
      fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar13 == '\0') {
      *(float *)(ar4 + 0x30) = fVar7;
      in_dr0 = (double)CONCAT44(0x40a00000,fVar7);
      *(undefined4 *)(ar4 + 0x30) = 0x40a00000;
    }
    else {
      *(double *)(ar4 + 0x30) = in_xd0;
      in_dr0 = -8.34132164470162e-251;
      *(undefined8 *)(ar4 + 0x30) = 0x8c031c6440a00000;
    }
    FUN_8c031c64(ar4,ar4 + 0x24,ar6,pcVar6);
    ar5_01 = (int *)0x8c2846e8;
    FUN_8c031b68(ar4,0x8c2846e8,ar6,pcVar6);
    *(undefined4 *)(ar4 + 0x40) = 3;
  }
  else if (iVar2 != 3) {
    if (iVar2 != 5) goto LAB_8c0954c6;
    goto LAB_8c09458c;
  }
  iVar2 = *(int *)(ar4 + 0x260);
  if (iVar2 == 0) {
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,s_CAnimBody_AdvanceFrame_033ba0,ar6,pcVar6);
    Vec3_sub(ar4 + 0x264,ar5,ar6,pcVar6,auStack_104);
    Vec3_assign(auStack_54,auStack_104,ar6,pcVar6);
    uVar5 = 0xffffffff;
    Vec3_dtor(auStack_104,0xffffffff,ar6,pcVar6);
    Vec3_length_sq(auStack_54,uVar5,ar6,pcVar6);
    fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
    if (cVar13 == '\0') {
      uStack_2a8 = (double)CONCAT44(uStack_2a8._4_4_,fVar7);
      fVar10 = 300.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar7 = 300.0;
      fVar10 = 8.23963e-43;
      uStack_2a8 = in_dr0;
    }
    if (cVar12 != '\0' || fVar7 <= fVar10) {
      Vec3_assign(auStack_34,ar4 + 0x264,ar6,pcVar6);
    }
    else {
      Vec3_assign(auStack_34,ar4 + 0x24c,ar6,pcVar6);
    }
    FUN_8c022fc0(ar4 + 0x264,ar5,ar6,pcVar6);
    if (cVar13 == '\0') {
      dVar8 = (double)CONCAT44(0x43960000,fVar10);
    }
    else {
      in_dr0 = (double)CONCAT44(fVar10,fVar7);
      dVar8 = 1.12097400057851e-311;
    }
    if (cVar12 != '\0' || SUB84(dVar8,0) <= (float)((ulonglong)dVar8 >> 0x20)) {
      Vec3_sub(ar4 + 0x264,ar5,ar6,pcVar6,auStack_114);
      FUN_8c022dac(ar4 + 0x14,auStack_114,ar6,pcVar6);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(0x41200000,(int)((ulonglong)dVar8 >> 0x20));
      }
      else {
        dVar9 = -7.932637925129825e-251;
        in_dr0 = dVar8;
      }
      dVar8 = dVar9;
      uStack_2bc = (double)(ulonglong)
                           CONCAT14(cVar12 != '\0' ||
                                    SUB84(dVar8,0) <= (float)((ulonglong)dVar8 >> 0x20),
                                    (undefined4)uStack_2bc);
      Vec3_dtor(auStack_114,0xffffffff,ar6,pcVar6);
      if (uStack_2bc._4_4_ != 0) {
        FUN_8c022fc0(auStack_34,ar5,ar6,pcVar6);
        if (cVar13 == '\0') {
          *(int *)(ar4 + 0x274) = (int)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x274));
        }
        else {
          *(double *)(ar4 + 0x274) = dVar8;
          in_dr0 = *(double *)(ar4 + 0x274);
          dVar8 = 1.35011982200165e-311;
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 * dVar8,0);
        }
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar7);
        }
        else {
          dVar8 = *(double *)(ar4 + 0x28);
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4 + 0x278) = fVar7;
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x278),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(double *)(ar4 + 0x278) = in_dr0;
          in_dr0 = *(double *)(ar4 + 0x28);
          dVar8 = *(double *)(ar4 + 0x278);
        }
        if (cVar12 == '\0') {
          fVar7 = (float)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)CONCAT44(fVar7,SUB84(dVar8,0) / fVar7);
        }
        else {
          dVar8 = dVar8 / dVar8;
        }
        if (cVar13 == '\0') {
          *(int *)(ar4 + 0x27c) = SUB84(dVar8,0);
        }
        else {
          *(double *)(ar4 + 0x27c) = in_dr0;
        }
        *(int *)(ar4 + 0x260) = *(int *)(ar4 + 0x260) + 1;
      }
    }
    pcVar3 = ar5;
    Vec3_sub(auStack_34,ar5,ar6,pcVar6,auStack_124);
    Vec3_normalize(auStack_124,pcVar3,ar6,pcVar6);
    Vec3_assign(auStack_44,auStack_134,ar6,pcVar6);
    Vec3_dtor(auStack_134,0xffffffff,ar6,pcVar6);
    uVar5 = 0xffffffff;
    Vec3_dtor(auStack_124,0xffffffff,ar6,pcVar6);
    pcVar6 = FUN_8c0230f0;
    FUN_8c0230f0(ar4 + 0x14,uVar5,ar6,FUN_8c0230f0,auStack_144);
    puVar4 = auStack_154;
    FUN_8c0230f0(auStack_44,uVar5,puVar4,pcVar6,puVar4);
    FUN_8c022dac(auStack_144,auStack_154,puVar4,pcVar6);
    Vec3_dtor(auStack_154,0xffffffff,puVar4,pcVar6);
    Vec3_dtor(auStack_144,0xffffffff,puVar4,pcVar6);
    puVar4 = auStack_34;
    ar6 = ar5;
    iVar2 = FUN_8c097ba4(ar4,puVar4,ar5,pcVar6);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 3;
      Vec3_sub(ar4 + 0x264,ar5,ar6,pcVar6,auStack_164);
      Vec3_assign(auStack_54,auStack_164,ar6,pcVar6);
      uVar5 = 0xffffffff;
      Vec3_dtor(auStack_164,0xffffffff,ar6,pcVar6);
      Vec3_length_sq(auStack_54,uVar5,ar6,pcVar6);
      fVar7 = (float)((ulonglong)dVar8 >> 0x20);
      if (cVar13 == '\0') {
        uStack_2a8 = (double)CONCAT44(uStack_2a8._4_4_,fVar7);
        fVar10 = 300.0;
      }
      else {
        fVar7 = 300.0;
        fVar10 = 7.39886e-43;
        uStack_2a8 = dVar8;
      }
      if (cVar12 == '\0' && fVar10 < fVar7) {
        Vec3_scale(auStack_54,ar4 + 0x48,ar6,pcVar6,auStack_174);
        Vec3_scale(auStack_174,&DAT_8c13a778,ar6,pcVar6,auStack_184);
        FUN_8c023c30(auStack_184,&uStack_2a8,auStack_194,pcVar6,auStack_194);
        pcVar3 = ar7;
        pcVar6 = in_stack_00000000;
        FUN_8c032518(ar4,ar5,ar7,in_stack_00000000);
        Vec3_sub(auStack_1a4,ar5,pcVar3,pcVar6,auStack_1b4);
        dVar8 = uStack_2a8;
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44((undefined4)uStack_2a8,0x43960000);
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar12 == '\0') {
          dVar8 = (double)CONCAT44(1.0 - fVar7,fVar7);
        }
        else {
          dVar8 = (double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7);
        }
        if (cVar13 == '\0') {
          uStack_2bc = (double)CONCAT44(uStack_2bc._4_4_,(int)((ulonglong)dVar8 >> 0x20));
          dVar8 = uStack_2bc;
        }
        uStack_2bc = dVar8;
        Vec3_scale(auStack_1b4,&uStack_2bc,pcVar3,pcVar6,auStack_1c4);
        Vec3_add(auStack_194,auStack_1c4,pcVar3,pcVar6,auStack_1d4);
        FUN_8c023c30(auStack_1d4,&DAT_8c13a77c,pcVar3,pcVar6,auStack_1e4);
        Vec3_assign(ar4 + 0x24c,auStack_1e4,pcVar3,pcVar6);
        Vec3_dtor(auStack_1e4,0xffffffff,pcVar3,pcVar6);
        Vec3_dtor(auStack_1d4,0xffffffff,pcVar3,pcVar6);
        Vec3_dtor(auStack_1c4,0xffffffff,pcVar3,pcVar6);
        Vec3_dtor(auStack_1b4,0xffffffff,pcVar3,pcVar6);
        Vec3_dtor(auStack_1a4,0xffffffff,pcVar3,pcVar6);
        Vec3_dtor(auStack_194,0xffffffff,pcVar3,pcVar6);
        Vec3_dtor(auStack_184,0xffffffff,pcVar3,pcVar6);
        Vec3_dtor(auStack_174,0xffffffff,pcVar3,pcVar6);
        FUN_8c023aa0(ar4 + 0x24c,ar5,pcVar3,pcVar6);
        FUN_8c032788(ar4,ar4 + 0x24c,ar7,in_stack_00000000);
        puVar4 = (undefined1 *)(ar4 + 0x24c);
        Vec3_assign(auStack_34,puVar4,ar7,in_stack_00000000);
        ar6 = ar7;
        pcVar6 = in_stack_00000000;
      }
      else {
        puVar4 = (undefined1 *)(ar4 + 0x264);
        Vec3_assign(auStack_34,puVar4,ar6,pcVar6);
      }
    }
    FUN_8c0231c8(ar4 + 0x14,puVar4,ar6,pcVar6);
    FUN_8c02374c(ar4 + 0x14,auStack_1f4,ar6,pcVar6);
    Vec3_assign(ar4 + 0x80,auStack_1f4,ar6,pcVar6);
    Vec3_dtor(auStack_1f4,0xffffffff,ar6,pcVar6);
  }
  else if (iVar2 == 1) {
    Vec3_assign(auStack_34,ar4 + 0x264,ar6,pcVar6);
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,s_CAnimBody_AdvanceFrame_033ba0,ar6,pcVar6);
    if (cVar13 == '\0') {
      dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x27c),*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x28);
      dVar8 = *(double *)(ar4 + 0x27c);
    }
    if (cVar12 == '\0') {
      fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(ar4 + 0x28) = fVar7;
      dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),in_fr3);
      dVar9 = (double)CONCAT44(0x42700000,*(undefined4 *)(ar4 + 0x27c));
    }
    else {
      *(double *)(ar4 + 0x28) = in_xd0;
      dVar8 = *(double *)(ar4 + 0x28);
      dVar9 = 1.29072414440439e-311;
    }
    if (cVar12 == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(0x40000000,fVar7);
    }
    else {
      dVar9 = 3.74001758157629e-312;
    }
    if (cVar12 == '\0') {
      bVar11 = (float)((ulonglong)dVar8 >> 0x20) <
               SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      bVar11 = dVar8 < dVar9 / dVar9;
    }
    if (bVar11) {
      *(int *)(ar4 + 0x260) = *(int *)(ar4 + 0x260) + 1;
      pcVar6 = (code *)0x0;
      ar6 = (code *)0x0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0,0);
    }
    pcVar3 = ar5;
    Vec3_sub(auStack_34,ar5,ar6,pcVar6,auStack_204);
    Vec3_normalize(auStack_204,pcVar3,ar6,pcVar6);
    Vec3_assign(auStack_44,auStack_214,ar6,pcVar6);
    Vec3_dtor(auStack_214,0xffffffff,ar6,pcVar6);
    Vec3_dtor(auStack_204,0xffffffff,ar6,pcVar6);
    iVar2 = ar4 + 0x14;
    FUN_8c0230f0(iVar2,iVar2,ar6,pcVar6,auStack_224);
    FUN_8c0230f0(auStack_44,iVar2,ar6,pcVar6,auStack_234);
    FUN_8c022dac(auStack_224,auStack_234,ar6,pcVar6);
    Vec3_dtor(auStack_234,0xffffffff,ar6,pcVar6);
    Vec3_dtor(auStack_224,0xffffffff,ar6,pcVar6);
    ar5_02 = FUN_8c097ba4(ar4,auStack_34,ar5,pcVar6);
    FUN_8c0230f0(ar4 + 0x14,ar5_02,ar5,pcVar6,auStack_244);
    Vec3_assign(ar4 + 0x80,auStack_244,ar5,pcVar6);
    Vec3_dtor(auStack_244,0xffffffff,ar5,pcVar6);
    ar6 = ar5;
  }
  else if (iVar2 == 2) {
    iVar2 = ar4 + 0x264;
    Vec3_assign(auStack_34,iVar2,ar6,pcVar6);
    uVar5 = SUB84(in_dr0,0);
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar2,ar6,pcVar6);
    if (cVar13 == '\0') {
      *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
      dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x27c),*(undefined4 *)(ar4 + 0x28));
    }
    else {
      *(undefined8 *)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar5);
      in_xd0 = *(double *)(ar4 + 0x28);
      dVar8 = *(double *)(ar4 + 0x27c);
    }
    if (cVar12 == '\0') {
      fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(ar4 + 0x28) = fVar7;
      fVar7 = *(float *)(ar4 + 0x28);
      fVar10 = 0.5;
    }
    else {
      *(double *)(ar4 + 0x28) = in_xd0;
      fVar7 = 0.5;
      fVar10 = 2.9147e-43;
    }
    if (cVar12 == '\0' && fVar7 < fVar10) {
      if (cVar13 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        fVar7 = 0.5;
        *(undefined8 *)(ar4 + 0x28) = 0xd03f000000;
      }
    }
    pcVar3 = ar5;
    Vec3_sub(auStack_34,ar5,ar6,pcVar6,auStack_254);
    Vec3_normalize(auStack_254,pcVar3,ar6,pcVar6);
    Vec3_assign(auStack_44,auStack_264,ar6,pcVar6);
    Vec3_dtor(auStack_264,0xffffffff,ar6,pcVar6);
    uVar5 = 0xffffffff;
    Vec3_dtor(auStack_254,0xffffffff,ar6,pcVar6);
    FUN_8c0230f0(ar4 + 0x14,uVar5,ar6,pcVar6,auStack_274);
    FUN_8c0230f0(auStack_44,uVar5,ar6,pcVar6,auStack_284);
    FUN_8c022dac(auStack_274,auStack_284,ar6,pcVar6);
    Vec3_dtor(auStack_284,0xffffffff,ar6,pcVar6);
    Vec3_dtor(auStack_274,0xffffffff,ar6,pcVar6);
    ar5_02 = FUN_8c097ba4(ar4,auStack_34,ar5,pcVar6);
    ar6 = ar5;
    if (ar5_02 == 0) {
      ar5_02 = 1;
      *(undefined4 *)(ar4 + 0x40) = 3;
      pcVar6 = (code *)0x0;
      ar6 = (code *)0x0;
      iVar2 = ar4 + 0xb0;
      s_CAnimBody_SetAnimation_033a94(iVar2,1,0,0);
      if (cVar13 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar7;
      }
      uVar5 = rand(iVar2,rand,ar6,pcVar6);
      iVar2 = libgcc_divide_helper_01031c(uVar5,10,ar6,pcVar6);
      *(int *)(ar4 + 0x284) = iVar2 + 0xf;
      *(int *)(ar4 + 0x260) = *(int *)(ar4 + 0x260) + 1;
    }
    FUN_8c0230f0(ar4 + 0x14,ar4 + 0x14,ar6,pcVar6,auStack_294);
    Vec3_assign(ar4 + 0x80,auStack_294,ar6,pcVar6);
    Vec3_dtor(auStack_294,0xffffffff,ar6,pcVar6);
  }
  else if (iVar2 == 3) {
    if (cVar13 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_01,ar6,pcVar6);
    if (iVar2 == 1) {
      ar6 = (code *)0x284;
      *(int *)(ar4 + 0x284) = *(int *)(ar4 + 0x284) + -1;
      if (*(int *)(ar4 + 0x284) < 1) {
        *(undefined4 *)(ar4 + 0x248) = 3;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
    }
    FUN_8c0230f0(ar4 + 0x14,(int)&uStack_2a8 + 4,ar6,pcVar6,(int)&uStack_2a8 + 4);
    Vec3_assign(ar4 + 0x80,(int)&uStack_2a8 + 4,ar6,pcVar6);
    Vec3_dtor((int)&uStack_2a8 + 4,0xffffffff,ar6,pcVar6);
  }
LAB_8c0954c6:
  uStack_2b4._4_4_ = ar5_02;
  Vec3_dtor(auStack_54,0xffffffff,ar6,pcVar6);
  Vec3_dtor(auStack_44,0xffffffff,ar6,pcVar6);
  Vec3_dtor(auStack_34,0xffffffff,ar6,pcVar6);
  return uStack_2b4._4_4_;
}



/* FUN_8c095548 @ 8c095548 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09554a) */
/* WARNING: Removing unreachable block (ram,0x8c095548) */
/* WARNING: Removing unreachable block (ram,0x8c096580) */
/* WARNING: Unknown calling convention */

int FUN_8c095548(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  double in_dr0;
  double dVar9;
  double dVar10;
  float fVar11;
  uint uVar12;
  undefined4 in_fr3;
  double in_xd0;
  bool bVar13;
  char cVar14;
  char cVar15;
  code *in_stack_00000000;
  undefined4 in_stack_00000004;
  uint uStack_32c;
  uint uStack_328;
  uint uStack_324;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined8 uStack_30c;
  undefined1 auStack_2f8 [16];
  undefined1 auStack_2e8 [16];
  undefined1 auStack_2d8 [16];
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [16];
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
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
  undefined1 auStack_38 [20];
  
  cVar15 = '\0';
  cVar14 = '\0';
  pcVar2 = Vec3_ctor_zero;
  uVar6 = ar7;
  Vec3_ctor_zero(auStack_38,Vec3_ctor_zero,ar6,ar7);
  pcVar5 = Vec3_ctor_zero;
  Vec3_ctor_zero(auStack_48,pcVar2,Vec3_ctor_zero,uVar6);
  Vec3_ctor_zero(auStack_58,pcVar2,pcVar5,uVar6);
  iVar7 = 1;
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c0955d0:
    iVar1 = FUN_8c034148(ar4 + 0xb0,0,pcVar5,uVar6);
    if ((iVar1 != 1) && (iVar1 != 2)) {
      uStack_310 = 1;
      Vec3_dtor(auStack_58,0xffffffff,pcVar5,uVar6);
      Vec3_dtor(auStack_48,0xffffffff,pcVar5,uVar6);
      Vec3_dtor(auStack_38,0xffffffff,pcVar5,uVar6);
      return uStack_310;
    }
    *(undefined4 *)(ar4 + 0x260) = 0;
    Vec3_assign(ar4 + 0x264,ar6,pcVar5,uVar6);
    Vec3_sub(ar4 + 0x264,ar5,pcVar5,uVar6,auStack_68);
    Vec3_assign(auStack_58,auStack_68,pcVar5,uVar6);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_68,0xffffffff,pcVar5,uVar6);
    Vec3_length_sq(auStack_58,uVar4,pcVar5,uVar6);
    fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
    if (cVar15 == '\0') {
      uStack_30c = (double)CONCAT44(uStack_30c._4_4_,fVar8);
      fVar11 = 300.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar8 = 300.0;
      fVar11 = 1.13225e-42;
      uStack_30c = in_dr0;
    }
    if (cVar14 == '\0' && fVar11 < fVar8) {
      Vec3_scale(auStack_58,ar4 + 0x48,pcVar5,uVar6,auStack_78);
      Vec3_scale(auStack_78,&DAT_8c13a780,pcVar5,uVar6,auStack_88);
      FUN_8c023c30(auStack_88,&uStack_30c,pcVar5,uVar6,auStack_98);
      pcVar5 = in_stack_00000000;
      uVar6 = in_stack_00000004;
      FUN_8c032518(ar4,ar5,in_stack_00000000,in_stack_00000004);
      Vec3_sub(auStack_a8,ar5,pcVar5,uVar6,auStack_b8);
      if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44((undefined4)uStack_30c,0x43960000);
      }
      else {
        in_dr0 = 1.71513282204878e-311;
        dVar9 = uStack_30c;
      }
      if (cVar14 == '\0') {
        fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 / dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(1.0 - fVar8,fVar8);
      }
      else {
        dVar9 = (double)CONCAT44(0x3f800000,fVar8) - (double)CONCAT44(0x3f800000,fVar8);
      }
      dVar10 = dVar9;
      if (cVar15 == '\0') {
        uStack_318 = (double)CONCAT44(uStack_318._4_4_,(int)((ulonglong)dVar9 >> 0x20));
        dVar10 = uStack_318;
      }
      uStack_318 = dVar10;
      Vec3_scale(auStack_b8,&uStack_318,pcVar5,uVar6,auStack_c8);
      fVar8 = SUB84(dVar9,0);
      Vec3_add(auStack_98,auStack_c8,pcVar5,uVar6,auStack_d8);
      FUN_8c023c30(auStack_d8,&DAT_8c13a784,pcVar5,uVar6,auStack_e8);
      Vec3_assign(ar4 + 0x24c,auStack_e8,pcVar5,uVar6);
      Vec3_dtor(auStack_e8,0xffffffff,pcVar5,uVar6);
      Vec3_dtor(auStack_d8,0xffffffff,pcVar5,uVar6);
      Vec3_dtor(auStack_c8,0xffffffff,pcVar5,uVar6);
      Vec3_dtor(auStack_b8,0xffffffff,pcVar5,uVar6);
      Vec3_dtor(auStack_a8,0xffffffff,pcVar5,uVar6);
      Vec3_dtor(auStack_98,0xffffffff,pcVar5,uVar6);
      Vec3_dtor(auStack_88,0xffffffff,pcVar5,uVar6);
      Vec3_dtor(auStack_78,0xffffffff,pcVar5,uVar6);
      FUN_8c023aa0(ar4 + 0x24c,ar5,pcVar5,uVar6);
      if (cVar15 == '\0') {
        fVar11 = 2.0;
      }
      else {
        fVar8 = 2.0;
        fVar11 = 200.0;
      }
      pcVar5 = in_stack_00000000;
      uVar6 = in_stack_00000004;
      FUN_8c032788(ar4,ar4 + 0x24c,in_stack_00000000,in_stack_00000004);
      Vec3_assign(auStack_38,ar4 + 0x24c,pcVar5,uVar6);
    }
    else {
      Vec3_assign(auStack_38,ar4 + 0x264,pcVar5,uVar6);
    }
    puVar3 = auStack_38;
    FUN_8c022fc0(ar5,puVar3,pcVar5,uVar6);
    if (cVar15 == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),fVar11);
      in_xd0 = in_dr0;
    }
    else {
      in_xd0 = (double)CONCAT44(fVar11,fVar8);
      dVar9 = *(double *)(ar4 + 0x24);
    }
    if (cVar14 == '\0') {
      fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar15 == '\0') {
      *(float *)(ar4 + 0x30) = fVar8;
      in_dr0 = (double)CONCAT44(0x40a00000,fVar8);
      *(undefined4 *)(ar4 + 0x30) = 0x40a00000;
    }
    else {
      *(double *)(ar4 + 0x30) = in_xd0;
      in_dr0 = -8.34132164470162e-251;
      *(undefined8 *)(ar4 + 0x30) = 0x8c031c6440a00000;
    }
    FUN_8c031c64(ar4,puVar3,pcVar5,uVar6);
    pcVar2 = (code *)0x8c2846e8;
    FUN_8c031b68(ar4,0x8c2846e8,pcVar5,uVar6);
    *(undefined4 *)(ar4 + 0x40) = 3;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c096760;
    goto LAB_8c0955d0;
  }
  iVar1 = *(int *)(ar4 + 0x260);
  if (iVar1 == 0) {
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar2,pcVar5,uVar6);
    Vec3_sub(ar4 + 0x264,ar5,pcVar5,uVar6,auStack_f8);
    Vec3_assign(auStack_58,auStack_f8,pcVar5,uVar6);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_f8,0xffffffff,pcVar5,uVar6);
    Vec3_length_sq(auStack_58,uVar4,pcVar5,uVar6);
    fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
    if (cVar15 == '\0') {
      uStack_30c = (double)CONCAT44(uStack_30c._4_4_,fVar8);
      fVar11 = 300.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar8 = 300.0;
      fVar11 = 8.23963e-43;
      uStack_30c = in_dr0;
    }
    if (cVar14 != '\0' || fVar8 <= fVar11) {
      Vec3_assign(auStack_38,ar4 + 0x264,pcVar5,uVar6);
    }
    else {
      Vec3_assign(auStack_38,ar4 + 0x24c,pcVar5,uVar6);
    }
    FUN_8c022fc0(ar4 + 0x264,ar5,pcVar5,uVar6);
    if (cVar15 == '\0') {
      dVar9 = (double)CONCAT44(0x43960000,fVar11);
    }
    else {
      in_dr0 = (double)CONCAT44(fVar11,fVar8);
      dVar9 = 1.40956542814978e-311;
    }
    if (cVar14 != '\0' || SUB84(dVar9,0) <= (float)((ulonglong)dVar9 >> 0x20)) {
      Vec3_sub(ar4 + 0x264,ar5,pcVar5,uVar6,auStack_108);
      FUN_8c022dac(ar4 + 0x14,auStack_108,pcVar5,uVar6);
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(0x41200000,(int)((ulonglong)dVar9 >> 0x20));
      }
      else {
        dVar10 = 2.80643268531973e-312;
        in_dr0 = dVar9;
      }
      dVar9 = dVar10;
      uStack_320 = (double)(ulonglong)
                           CONCAT14(cVar14 != '\0' ||
                                    SUB84(dVar9,0) <= (float)((ulonglong)dVar9 >> 0x20),
                                    (undefined4)uStack_320);
      Vec3_dtor(auStack_108,0xffffffff,pcVar5,uVar6);
      if (uStack_320._4_4_ != 0) {
        FUN_8c022fc0(auStack_38,ar5,pcVar5,uVar6);
        if (cVar15 == '\0') {
          *(int *)(ar4 + 0x274) = (int)((ulonglong)dVar9 >> 0x20);
          dVar9 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x274));
        }
        else {
          *(double *)(ar4 + 0x274) = dVar9;
          in_dr0 = *(double *)(ar4 + 0x274);
          dVar9 = 1.35011982200165e-311;
        }
        if (cVar14 == '\0') {
          fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar15 == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar8);
        }
        else {
          dVar9 = *(double *)(ar4 + 0x28);
        }
        if (cVar14 == '\0') {
          fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 / dVar9,0);
        }
        if (cVar15 == '\0') {
          *(float *)(ar4 + 0x278) = fVar8;
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x278),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(double *)(ar4 + 0x278) = in_dr0;
          in_dr0 = *(double *)(ar4 + 0x28);
          dVar9 = *(double *)(ar4 + 0x278);
        }
        if (cVar14 == '\0') {
          fVar8 = (float)((ulonglong)dVar9 >> 0x20);
          dVar9 = (double)CONCAT44(fVar8,SUB84(dVar9,0) / fVar8);
        }
        else {
          dVar9 = dVar9 / dVar9;
        }
        if (cVar15 == '\0') {
          *(int *)(ar4 + 0x27c) = SUB84(dVar9,0);
        }
        else {
          *(double *)(ar4 + 0x27c) = in_dr0;
        }
        *(int *)(ar4 + 0x260) = *(int *)(ar4 + 0x260) + 1;
      }
    }
    pcVar2 = ar5;
    Vec3_sub(auStack_38,ar5,pcVar5,uVar6,auStack_118);
    Vec3_normalize(auStack_118,pcVar2,pcVar5,uVar6);
    Vec3_assign(auStack_48,auStack_128,pcVar5,uVar6);
    Vec3_dtor(auStack_128,0xffffffff,pcVar5,uVar6);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_118,0xffffffff,pcVar5,uVar6);
    FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar5,uVar6,auStack_138);
    FUN_8c0230f0(auStack_48,uVar4,pcVar5,uVar6,auStack_148);
    FUN_8c022dac(auStack_138,auStack_148,pcVar5,uVar6);
    Vec3_dtor(auStack_148,0xffffffff,pcVar5,uVar6);
    Vec3_dtor(auStack_138,0xffffffff,pcVar5,uVar6);
    pcVar5 = ar5;
    iVar1 = FUN_8c097ba4(ar4,auStack_38,ar5,uVar6);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 3;
      Vec3_sub(ar4 + 0x264,ar5,pcVar5,uVar6,auStack_158);
      Vec3_assign(auStack_58,auStack_158,pcVar5,uVar6);
      Vec3_dtor(auStack_158,0xffffffff,pcVar5,uVar6);
      Vec3_length_sq(auStack_58,Vec3_length_sq,pcVar5,uVar6);
      fVar8 = (float)((ulonglong)dVar9 >> 0x20);
      if (cVar15 == '\0') {
        uStack_30c = (double)CONCAT44(uStack_30c._4_4_,fVar8);
        fVar11 = 300.0;
      }
      else {
        fVar8 = 300.0;
        fVar11 = 9.30462e-43;
        uStack_30c = dVar9;
      }
      if (cVar14 == '\0' && fVar11 < fVar8) {
        Vec3_scale(auStack_58,ar4 + 0x48,pcVar5,uVar6,auStack_168);
        pcVar5 = Vec3_scale;
        Vec3_scale(auStack_168,&DAT_8c13a788,Vec3_scale,uVar6,auStack_178);
        FUN_8c023c30(auStack_178,&uStack_30c,pcVar5,uVar6,auStack_188);
        pcVar5 = in_stack_00000000;
        uVar6 = in_stack_00000004;
        FUN_8c032518(ar4,ar5,in_stack_00000000,in_stack_00000004);
        Vec3_sub(auStack_198,ar5,pcVar5,uVar6,auStack_1a8);
        dVar9 = uStack_30c;
        if (cVar15 == '\0') {
          dVar9 = (double)CONCAT44((undefined4)uStack_30c,0x43960000);
        }
        if (cVar14 == '\0') {
          fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 / dVar9,0);
        }
        if (cVar14 == '\0') {
          dVar9 = (double)CONCAT44(1.0 - fVar8,fVar8);
        }
        else {
          dVar9 = (double)CONCAT44(0x3f800000,fVar8) - (double)CONCAT44(0x3f800000,fVar8);
        }
        if (cVar15 == '\0') {
          uStack_320 = (double)CONCAT44(uStack_320._4_4_,(int)((ulonglong)dVar9 >> 0x20));
          dVar9 = uStack_320;
        }
        uStack_320 = dVar9;
        Vec3_scale(auStack_1a8,&uStack_320,pcVar5,uVar6,auStack_1b8);
        Vec3_add(auStack_188,auStack_1b8,pcVar5,uVar6,auStack_1c8);
        FUN_8c023c30(auStack_1c8,&DAT_8c13a78c,pcVar5,uVar6,auStack_1d8);
        Vec3_assign(ar4 + 0x24c,auStack_1d8,pcVar5,uVar6);
        Vec3_dtor(auStack_1d8,0xffffffff,pcVar5,uVar6);
        Vec3_dtor(auStack_1c8,0xffffffff,pcVar5,uVar6);
        Vec3_dtor(auStack_1b8,0xffffffff,pcVar5,uVar6);
        Vec3_dtor(auStack_1a8,0xffffffff,pcVar5,uVar6);
        Vec3_dtor(auStack_198,0xffffffff,pcVar5,uVar6);
        Vec3_dtor(auStack_188,0xffffffff,pcVar5,uVar6);
        Vec3_dtor(auStack_178,0xffffffff,pcVar5,uVar6);
        Vec3_dtor(auStack_168,0xffffffff,pcVar5,uVar6);
        FUN_8c023aa0(ar4 + 0x24c,ar5,pcVar5,uVar6);
        FUN_8c032788(ar4,ar4 + 0x24c,in_stack_00000000,in_stack_00000004);
        Vec3_assign(auStack_38,ar4 + 0x24c,in_stack_00000000,in_stack_00000004);
        pcVar5 = in_stack_00000000;
        uVar6 = in_stack_00000004;
      }
      else {
        Vec3_assign(auStack_38,ar4 + 0x264,pcVar5,uVar6);
      }
    }
    FUN_8c0231c8(ar4 + 0x14,ar4 + 0x14,pcVar5,uVar6);
    FUN_8c02374c(ar4 + 0x14,ar4 + 0x14,pcVar5,uVar6);
    Vec3_assign(ar4 + 0x80,auStack_1e8,pcVar5,uVar6);
    Vec3_dtor(auStack_1e8,0xffffffff,pcVar5,uVar6);
  }
  else if (iVar1 == 1) {
    Vec3_assign(auStack_38,ar4 + 0x264,pcVar5,uVar6);
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,pcVar5,uVar6);
    if (cVar15 == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x27c),*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x28);
      dVar9 = *(double *)(ar4 + 0x27c);
    }
    if (cVar14 == '\0') {
      fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar15 == '\0') {
      *(float *)(ar4 + 0x28) = fVar8;
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),in_fr3);
      dVar10 = (double)CONCAT44(0x42700000,*(undefined4 *)(ar4 + 0x27c));
    }
    else {
      *(double *)(ar4 + 0x28) = in_xd0;
      dVar9 = *(double *)(ar4 + 0x28);
      dVar10 = 1.29072414440439e-311;
    }
    if (cVar14 == '\0') {
      fVar8 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar10 * dVar10,0);
    }
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44(0x40000000,fVar8);
    }
    else {
      dVar10 = 3.74001758157629e-312;
    }
    if (cVar14 == '\0') {
      fVar11 = (float)((ulonglong)dVar10 >> 0x20);
      fVar8 = SUB84(dVar10,0) / fVar11;
      dVar10 = (double)CONCAT44(fVar11,fVar8);
      bVar13 = (float)((ulonglong)dVar9 >> 0x20) < fVar8;
    }
    else {
      dVar10 = dVar10 / dVar10;
      bVar13 = dVar9 < dVar10;
    }
    fVar8 = (float)((ulonglong)dVar10 >> 0x20);
    if (bVar13) {
      *(int *)(ar4 + 0x260) = *(int *)(ar4 + 0x260) + 1;
      uVar6 = 0;
      pcVar5 = (code *)0x0;
      uVar4 = 3;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0,0);
      *(undefined4 *)(ar4 + 0x288) = 0;
      FUN_8c0230f0(ar7,uVar4,pcVar5,uVar6,auStack_1f8);
      Vec3_normalize(auStack_1f8,uVar4,pcVar5,uVar6);
      FUN_8c0230f0(ar4 + 0x80,uVar4,pcVar5,uVar6,auStack_218);
      Vec3_normalize(auStack_218,uVar4,pcVar5,uVar6);
      FUN_8c022dac(auStack_208,auStack_228,pcVar5,uVar6);
      if (cVar15 == '\0') {
        pcVar2 = (code *)0x42340000;
      }
      else {
        fVar8 = 45.0;
        pcVar2 = Vec3_dtor;
      }
      uStack_324 = (uint)(cVar14 == '\0' && fVar8 < (float)pcVar2);
      Vec3_dtor(auStack_228,0xffffffff,pcVar5,uVar6);
      Vec3_dtor(auStack_218,0xffffffff,pcVar5,uVar6);
      Vec3_dtor(auStack_208,0xffffffff,pcVar5,uVar6);
      Vec3_dtor(auStack_1f8,0xffffffff,pcVar5,uVar6);
      if (uStack_324 == 0) {
        *(undefined4 *)(ar4 + 0x284) = 0;
      }
      else {
        *(undefined4 *)(ar4 + 0x284) = 0x1e;
      }
    }
    Vec3_sub(auStack_38,ar5,pcVar5,uVar6,auStack_238);
    Vec3_normalize(auStack_238,Vec3_normalize,pcVar5,uVar6);
    Vec3_assign(auStack_48,auStack_248,pcVar5,uVar6);
    Vec3_dtor(auStack_248,0xffffffff,pcVar5,uVar6);
    Vec3_dtor(auStack_238,0xffffffff,pcVar5,uVar6);
    FUN_8c0230f0(ar4 + 0x14,auStack_258,pcVar5,uVar6,auStack_258);
    FUN_8c0230f0(auStack_48,auStack_48,pcVar5,uVar6,auStack_268);
    FUN_8c022dac(auStack_258,auStack_268,pcVar5,uVar6);
    Vec3_dtor(auStack_268,0xffffffff,pcVar5,uVar6);
    Vec3_dtor(auStack_258,0xffffffff,pcVar5,uVar6);
    puVar3 = auStack_38;
    iVar7 = FUN_8c097ba4(ar4,puVar3,ar5,uVar6);
    FUN_8c0230f0(ar4 + 0x14,puVar3,ar5,uVar6,auStack_278);
    Vec3_assign(ar4 + 0x80,auStack_278,ar5,uVar6);
    Vec3_dtor(auStack_278,0xffffffff,ar5,uVar6);
    pcVar5 = ar5;
  }
  else if (iVar1 == 2) {
    Vec3_assign(auStack_38,ar4 + 0x264,pcVar5,uVar6);
    uVar4 = SUB84(in_dr0,0);
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,pcVar5,uVar6);
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x27c),*(undefined4 *)(ar4 + 0x28));
    }
    else {
      *(undefined8 *)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar4);
      in_xd0 = *(double *)(ar4 + 0x28);
      dVar9 = *(double *)(ar4 + 0x27c);
    }
    if (cVar14 == '\0') {
      fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar15 == '\0') {
      *(float *)(ar4 + 0x28) = fVar8;
      fVar8 = *(float *)(ar4 + 0x28);
      fVar11 = 0.5;
    }
    else {
      *(double *)(ar4 + 0x28) = in_xd0;
      fVar8 = 0.5;
      fVar11 = 3.92364e-43;
    }
    if (cVar14 == '\0' && fVar8 < fVar11) {
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        fVar8 = 0.5;
        *(undefined8 *)(ar4 + 0x28) = 0x1183f000000;
      }
    }
    Vec3_sub(auStack_38,ar5,pcVar5,uVar6,auStack_288);
    Vec3_normalize(auStack_288,auStack_288,pcVar5,uVar6);
    Vec3_assign(auStack_48,auStack_298,pcVar5,uVar6);
    Vec3_dtor(auStack_298,0xffffffff,pcVar5,uVar6);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_288,0xffffffff,pcVar5,uVar6);
    FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar5,uVar6,auStack_2a8);
    FUN_8c0230f0(auStack_48,uVar4,pcVar5,uVar6,auStack_2b8);
    FUN_8c022dac(auStack_2a8,auStack_2b8,pcVar5,uVar6);
    Vec3_dtor(auStack_2b8,0xffffffff,pcVar5,uVar6);
    Vec3_dtor(auStack_2a8,0xffffffff,pcVar5,uVar6);
    iVar7 = FUN_8c097ba4(ar4,auStack_38,ar5,uVar6);
    if (iVar7 == 0) {
      iVar7 = 1;
      *(undefined4 *)(ar4 + 0x40) = 3;
      uVar6 = 0;
      pcVar5 = (code *)0x0;
      iVar1 = ar4 + 0xb0;
      s_CAnimBody_SetAnimation_033a94(iVar1,1,0,0);
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar8;
      }
      uVar4 = rand(iVar1,rand,pcVar5,uVar6);
      iVar1 = libgcc_divide_helper_01031c(uVar4,10,pcVar5,uVar6);
      *(int *)(ar4 + 0x284) = iVar1 + 0xf;
      *(int *)(ar4 + 0x260) = *(int *)(ar4 + 0x260) + 1;
      Vec3_assign(ar4 + 0x80,ar7,pcVar5,uVar6);
    }
    else {
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44((float)*(int *)(ar4 + 0x284),fVar8);
      }
      else {
        dVar9 = (double)*(int *)(ar4 + 0x284);
      }
      uVar12 = (uint)((ulonglong)dVar9 >> 0x20);
      uStack_328 = uVar12;
      if (cVar15 != '\0') {
        uStack_328 = SUB84(dVar9,0);
        uStack_324 = uVar12;
      }
      Vec3_scale(ar4 + 0x80,&uStack_328,ar5,uVar6,auStack_2c8);
      FUN_8c023c30(auStack_2c8,&DAT_8c13a790,ar5,uVar6,auStack_2d8);
      if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44(0x41f00000,(float)*(int *)(ar4 + 0x284));
      }
      else {
        dVar9 = 3.9099378451209e-312;
      }
      if (cVar14 == '\0') {
        fVar8 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 / dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(1.0 - fVar8,fVar8);
      }
      else {
        dVar9 = (double)CONCAT44(0x3f800000,fVar8) - (double)CONCAT44(0x3f800000,fVar8);
      }
      uVar12 = (uint)((ulonglong)dVar9 >> 0x20);
      uStack_32c = uVar12;
      if (cVar15 != '\0') {
        uStack_32c = SUB84(dVar9,0);
        uStack_328 = uVar12;
      }
      Vec3_scale(ar7,&uStack_32c,ar5,uVar6,auStack_2e8);
      puVar3 = auStack_2e8;
      Vec3_add(auStack_2d8,puVar3,ar5,uVar6,auStack_2f8);
      Vec3_normalize(auStack_2f8,puVar3,ar5,uVar6);
      Vec3_assign(ar4 + 0x80,(int)&uStack_30c + 4,ar5,uVar6);
      Vec3_dtor((int)&uStack_30c + 4,0xffffffff,ar5,uVar6);
      Vec3_dtor(auStack_2f8,0xffffffff,ar5,uVar6);
      Vec3_dtor(auStack_2e8,0xffffffff,ar5,uVar6);
      Vec3_dtor(auStack_2d8,0xffffffff,ar5,uVar6);
      Vec3_dtor(auStack_2c8,0xffffffff,ar5,uVar6);
      *(int *)(ar4 + 0x284) = *(int *)(ar4 + 0x284) + -1;
      pcVar5 = ar5;
      if (*(int *)(ar4 + 0x284) < 0) {
        *(undefined4 *)(ar4 + 0x284) = 0;
      }
    }
  }
  else if (iVar1 == 3) {
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar2,pcVar5,uVar6);
    if (iVar1 == 1) {
      *(int *)(ar4 + 0x284) = *(int *)(ar4 + 0x284) + -1;
      if (*(int *)(ar4 + 0x284) < 1) {
        iVar7 = 0;
        *(undefined4 *)(ar4 + 0x40) = 5;
        iVar1 = ar4 + 0x80;
        Vec3_assign(ar4 + 0x14,iVar1,pcVar5,uVar6);
        *(undefined4 *)(ar4 + 0x288) = 1;
        uVar6 = rand(0x288,iVar1,pcVar5,uVar6);
        pcVar5 = libgcc_divide_helper_01031c;
        uVar4 = libgcc_divide_helper_01031c(uVar6,10,libgcc_divide_helper_01031c,uVar6);
        *(undefined4 *)(ar4 + 0x2f0) = uVar4;
      }
      else {
        Vec3_assign(ar4 + 0x80,ar7,pcVar5,uVar6);
      }
    }
  }
LAB_8c096760:
  uStack_318._4_4_ = iVar7;
  Vec3_dtor(auStack_58,0xffffffff,pcVar5,uVar6);
  Vec3_dtor(auStack_48,0xffffffff,pcVar5,uVar6);
  Vec3_dtor(auStack_38,0xffffffff,pcVar5,uVar6);
  return uStack_318._4_4_;
}



/* FUN_8c0967d8 @ 8c0967d8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0967d8) */
/* WARNING: Removing unreachable block (ram,0x8c0967da) */
/* WARNING: Unknown calling convention */

int FUN_8c0967d8(int ar4,int *ar5,int *ar6,int *ar7)

{
  int iVar1;
  ulonglong *ar4_00;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *ar5_00;
  int ar5_01;
  int *piVar5;
  int iVar6;
  float fVar7;
  double in_dr0;
  float fVar10;
  double dVar8;
  double dVar9;
  undefined4 in_fr3;
  double in_xd0;
  bool bVar11;
  char cVar12;
  char cVar13;
  int *in_stack_00000000;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_2b4;
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  int aiStack_150 [4];
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
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 auStack_54 [4];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [20];
  
  cVar13 = '\0';
  cVar12 = '\0';
  piVar5 = ar7;
  Vec3_ctor_zero(auStack_34,ar5,ar6,ar7);
  pcVar2 = Vec3_ctor_zero;
  Vec3_ctor_zero(auStack_44,Vec3_ctor_zero,ar6,piVar5);
  Vec3_ctor_zero(auStack_54,pcVar2,ar6,piVar5);
  FUN_8c102748(&uStack_60,pcVar2,ar6,piVar5);
  iVar6 = 1;
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c096864:
    iVar1 = FUN_8c034148(ar4 + 0xb0,0,ar6,piVar5);
    if ((iVar1 != 1) && (iVar1 != 2)) {
      uStack_2b8 = 1;
      free_if_nonnull_wrap_102790(&uStack_60,0xffffffff,ar6,piVar5);
      Vec3_dtor(auStack_54,0xffffffff,ar6,piVar5);
      Vec3_dtor(auStack_44,0xffffffff,ar6,piVar5);
      Vec3_dtor(auStack_34,0xffffffff,ar6,piVar5);
      return uStack_2b8;
    }
    *(undefined4 *)(ar4 + 0x260) = 0;
    if (cVar13 != '\0') {
      auStack_54[0] = 0x2dc;
    }
    uStack_58 = 0x43480000;
    uStack_5c = 0x44098000;
    uStack_60 = 0x443b8000;
    piVar3 = in_stack_00000000;
    FUN_8c031ce8(ar4,&uStack_60,in_stack_00000000,piVar5);
    Vec3_assign(ar4 + 0x264,auStack_70,piVar3,piVar5);
    Vec3_dtor(auStack_70,0xffffffff,piVar3,piVar5);
    ar6 = ar7;
    piVar5 = in_stack_00000000;
    uVar4 = FUN_8c032788(ar4,ar4 + 0x264,ar7,in_stack_00000000);
    Vec3_assign(ar4 + 0x264,uVar4,ar6,piVar5);
    if (cVar13 == '\0') {
      dVar8 = (double)CONCAT44(0x442f0000,*(undefined4 *)(ar4 + 0x26c));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x26c);
      dVar8 = 6.28675931074746e-312;
    }
    if (cVar12 == '\0') {
      fVar7 = (float)((ulonglong)dVar8 >> 0x20);
      dVar8 = (double)CONCAT44(fVar7,SUB84(dVar8,0) + fVar7);
    }
    else {
      dVar8 = dVar8 + dVar8;
    }
    if (cVar13 == '\0') {
      *(int *)(ar4 + 0x26c) = SUB84(dVar8,0);
    }
    else {
      *(double *)(ar4 + 0x26c) = in_xd0;
    }
    (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x264,ar6,piVar5);
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(0x41100000,(int)((ulonglong)dVar8 >> 0x20));
      dVar8 = in_xd0;
    }
    else {
      dVar9 = 1.46896039340715e-311;
    }
    if (cVar12 == '\0') {
      fVar7 = (float)((ulonglong)dVar9 >> 0x20);
      in_xd0 = (double)CONCAT44(fVar7,SUB84(dVar9,0) + fVar7);
    }
    else {
      in_xd0 = dVar9 + dVar9;
    }
    if (cVar13 == '\0') {
      *(int *)(ar4 + 0x268) = SUB84(in_xd0,0);
    }
    else {
      *(double *)(ar4 + 0x268) = dVar8;
    }
    Vec3_sub(ar4 + 0x264,ar5,ar6,piVar5,auStack_80);
    Vec3_assign(auStack_54,auStack_80,ar6,piVar5);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_80,0xffffffff,ar6,piVar5);
    Vec3_length_sq(auStack_54,uVar4,ar6,piVar5);
    fVar7 = (float)((ulonglong)in_xd0 >> 0x20);
    if (cVar13 == '\0') {
      uStack_2b4 = (double)CONCAT44(uStack_2b4._4_4_,fVar7);
      pcVar2 = (code *)0x43960000;
      in_xd0 = dVar8;
    }
    else {
      fVar7 = 300.0;
      pcVar2 = (code *)0x2a4;
      uStack_2b4 = in_xd0;
    }
    if (cVar12 == '\0' && (float)pcVar2 < fVar7) {
      Vec3_scale(auStack_54,ar4 + 0x48,ar6,piVar5,auStack_90);
      Vec3_scale(auStack_90,&DAT_8c13a794,ar6,piVar5,auStack_a0);
      FUN_8c023c30(auStack_a0,&uStack_2b4,ar6,piVar5,auStack_b0);
      piVar5 = ar7;
      piVar3 = in_stack_00000000;
      FUN_8c032518(ar4,ar5,ar7,in_stack_00000000);
      Vec3_sub(auStack_c0,ar5,piVar5,piVar3,auStack_d0);
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44((undefined4)uStack_2b4,0x43960000);
      }
      else {
        in_xd0 = 1.43502937764137e-311;
        dVar8 = uStack_2b4;
      }
      if (cVar12 == '\0') {
        fVar7 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 / dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(1.0 - fVar7,fVar7);
      }
      else {
        dVar8 = (double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7);
      }
      dVar9 = dVar8;
      if (cVar13 == '\0') {
        uStack_2c0 = (double)CONCAT44(uStack_2c0._4_4_,(int)((ulonglong)dVar8 >> 0x20));
        dVar9 = uStack_2c0;
      }
      uStack_2c0 = dVar9;
      Vec3_scale(auStack_d0,&uStack_2c0,piVar5,piVar3,auStack_e0);
      fVar7 = SUB84(dVar8,0);
      Vec3_add(auStack_b0,auStack_e0,piVar5,piVar3,auStack_f0);
      FUN_8c023c30(auStack_f0,&DAT_8c13a798,piVar5,piVar3,auStack_100);
      Vec3_assign(ar4 + 0x24c,auStack_100,piVar5,piVar3);
      Vec3_dtor(auStack_100,0xffffffff,piVar5,piVar3);
      Vec3_dtor(auStack_f0,0xffffffff,piVar5,piVar3);
      Vec3_dtor(auStack_e0,0xffffffff,piVar5,piVar3);
      Vec3_dtor(auStack_d0,0xffffffff,piVar5,piVar3);
      Vec3_dtor(auStack_c0,0xffffffff,piVar5,piVar3);
      Vec3_dtor(auStack_b0,0xffffffff,piVar5,piVar3);
      Vec3_dtor(auStack_a0,0xffffffff,piVar5,piVar3);
      Vec3_dtor(auStack_90,0xffffffff,piVar5,piVar3);
      FUN_8c023aa0(ar4 + 0x24c,ar5,FUN_8c023aa0,piVar3);
      if (cVar13 == '\0') {
        pcVar2 = (code *)0x40000000;
      }
      else {
        fVar7 = 2.0;
        pcVar2 = FUN_8c031ce8;
      }
      ar6 = ar7;
      piVar5 = in_stack_00000000;
      FUN_8c032788(ar4,ar4 + 0x24c,ar7,in_stack_00000000);
      Vec3_assign(auStack_34,ar4 + 0x24c,ar6,piVar5);
    }
    else {
      Vec3_assign(auStack_34,ar4 + 0x264,ar6,piVar5);
    }
    FUN_8c022fc0(ar5,auStack_34,ar6,piVar5);
    if (cVar13 == '\0') {
      dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),pcVar2);
    }
    else {
      in_xd0 = (double)CONCAT44(pcVar2,fVar7);
      dVar8 = *(double *)(ar4 + 0x24);
    }
    if (cVar12 == '\0') {
      fVar7 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 / dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(ar4 + 0x30) = fVar7;
      in_dr0 = (double)CONCAT44(0x40a00000,fVar7);
      *(undefined4 *)(ar4 + 0x30) = 0x40a00000;
    }
    else {
      *(double *)(ar4 + 0x30) = in_xd0;
      in_dr0 = -8.34132164470162e-251;
      *(undefined8 *)(ar4 + 0x30) = 0x8c031c6440a00000;
    }
    FUN_8c031c64(ar4,ar4 + 0x24,ar6,piVar5);
    FUN_8c031b68(ar4,0x8c2846e8,ar6,piVar5);
    *(undefined4 *)(ar4 + 0x40) = 3;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c0977f2;
    goto LAB_8c096864;
  }
  iVar1 = *(int *)(ar4 + 0x260);
  if (iVar1 == 0) {
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,s_CAnimBody_AdvanceFrame_033ba0,ar6,piVar5);
    Vec3_sub(ar4 + 0x264,ar5,ar6,piVar5,auStack_110);
    Vec3_assign(auStack_54,auStack_110,ar6,piVar5);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_110,0xffffffff,ar6,piVar5);
    Vec3_length_sq(auStack_54,uVar4,ar6,piVar5);
    fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
    if (cVar13 == '\0') {
      uStack_2b4 = (double)CONCAT44(uStack_2b4._4_4_,fVar7);
      fVar10 = 300.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar7 = 300.0;
      fVar10 = 8.23963e-43;
      uStack_2b4 = in_dr0;
    }
    if (cVar12 != '\0' || fVar7 <= fVar10) {
      Vec3_assign(auStack_34,ar4 + 0x264,ar6,piVar5);
    }
    else {
      Vec3_assign(auStack_34,ar4 + 0x24c,ar6,piVar5);
    }
    FUN_8c022fc0(ar4 + 0x264,ar5,ar6,piVar5);
    if (cVar13 == '\0') {
      dVar8 = (double)CONCAT44(0x43960000,fVar10);
    }
    else {
      in_dr0 = (double)CONCAT44(fVar10,fVar7);
      dVar8 = 1.12946198374237e-311;
    }
    if (cVar12 != '\0' || SUB84(dVar8,0) <= (float)((ulonglong)dVar8 >> 0x20)) {
      Vec3_sub(ar4 + 0x264,ar5,ar6,piVar5,auStack_120);
      FUN_8c022dac(ar4 + 0x14,auStack_120,ar6,piVar5);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(0x41200000,(int)((ulonglong)dVar8 >> 0x20));
      }
      else {
        dVar9 = -7.932637925129825e-251;
        in_dr0 = dVar8;
      }
      dVar8 = dVar9;
      uStack_2c8 = (double)(ulonglong)
                           CONCAT14(cVar12 != '\0' ||
                                    SUB84(dVar8,0) <= (float)((ulonglong)dVar8 >> 0x20),
                                    (undefined4)uStack_2c8);
      Vec3_dtor(auStack_120,0xffffffff,ar6,piVar5);
      if (uStack_2c8._4_4_ != 0) {
        FUN_8c022fc0(auStack_34,ar5,ar6,piVar5);
        if (cVar13 == '\0') {
          *(int *)(ar4 + 0x274) = (int)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x274));
        }
        else {
          *(double *)(ar4 + 0x274) = dVar8;
          in_dr0 = *(double *)(ar4 + 0x274);
          dVar8 = 1.35011982200165e-311;
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 * dVar8,0);
        }
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),fVar7);
        }
        else {
          dVar8 = *(double *)(ar4 + 0x28);
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4 + 0x278) = fVar7;
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x278),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(double *)(ar4 + 0x278) = in_dr0;
          in_dr0 = *(double *)(ar4 + 0x28);
          dVar8 = *(double *)(ar4 + 0x278);
        }
        if (cVar12 == '\0') {
          fVar7 = (float)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)CONCAT44(fVar7,SUB84(dVar8,0) / fVar7);
        }
        else {
          dVar8 = dVar8 / dVar8;
        }
        if (cVar13 == '\0') {
          *(int *)(ar4 + 0x27c) = SUB84(dVar8,0);
        }
        else {
          *(double *)(ar4 + 0x27c) = in_dr0;
        }
        *(int *)(ar4 + 0x260) = *(int *)(ar4 + 0x260) + 1;
      }
    }
    Vec3_sub(auStack_34,ar5,ar6,piVar5,auStack_130);
    Vec3_normalize(auStack_130,Vec3_normalize,ar6,piVar5);
    Vec3_assign(auStack_44,auStack_140,ar6,piVar5);
    Vec3_dtor(auStack_140,0xffffffff,ar6,piVar5);
    Vec3_dtor(auStack_130,0xffffffff,ar6,piVar5);
    piVar5 = aiStack_150;
    pcVar2 = FUN_8c0230f0;
    FUN_8c0230f0(ar4 + 0x14,FUN_8c0230f0,ar6,piVar5,piVar5);
    FUN_8c0230f0(auStack_44,pcVar2,ar6,piVar5,auStack_160);
    FUN_8c022dac(aiStack_150,auStack_160,ar6,piVar5);
    Vec3_dtor(auStack_160,0xffffffff,ar6,piVar5);
    Vec3_dtor(aiStack_150,0xffffffff,ar6,piVar5);
    ar6 = ar5;
    iVar1 = FUN_8c097ba4(ar4,auStack_34,ar5,piVar5);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 3;
      Vec3_sub(ar4 + 0x264,ar5,ar6,piVar5,auStack_170);
      Vec3_assign(auStack_54,auStack_170,ar6,piVar5);
      Vec3_dtor(auStack_170,0xffffffff,ar6,piVar5);
      Vec3_length_sq(auStack_54,Vec3_length_sq,ar6,piVar5);
      fVar7 = (float)((ulonglong)dVar8 >> 0x20);
      if (cVar13 == '\0') {
        uStack_2b4 = (double)CONCAT44(uStack_2b4._4_4_,fVar7);
        fVar10 = 300.0;
      }
      else {
        fVar7 = 300.0;
        fVar10 = 7.45491e-43;
        uStack_2b4 = dVar8;
      }
      if (cVar12 == '\0' && fVar10 < fVar7) {
        Vec3_scale(auStack_54,ar4 + 0x48,ar6,piVar5,auStack_180);
        Vec3_scale(auStack_180,&DAT_8c13a79c,ar6,piVar5,auStack_190);
        FUN_8c023c30(auStack_190,&uStack_2b4,ar6,piVar5,auStack_1a0);
        piVar5 = ar7;
        piVar3 = in_stack_00000000;
        FUN_8c032518(ar4,ar5,ar7,in_stack_00000000);
        Vec3_sub(auStack_1b0,ar5,piVar5,piVar3,auStack_1c0);
        dVar8 = uStack_2b4;
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44((undefined4)uStack_2b4,0x43960000);
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar12 == '\0') {
          dVar8 = (double)CONCAT44(1.0 - fVar7,fVar7);
        }
        else {
          dVar8 = (double)CONCAT44(0x3f800000,fVar7) - (double)CONCAT44(0x3f800000,fVar7);
        }
        if (cVar13 == '\0') {
          uStack_2c8 = (double)CONCAT44(uStack_2c8._4_4_,(int)((ulonglong)dVar8 >> 0x20));
          dVar8 = uStack_2c8;
        }
        uStack_2c8 = dVar8;
        Vec3_scale(auStack_1c0,&uStack_2c8,piVar5,piVar3,auStack_1d0);
        Vec3_add(auStack_1a0,auStack_1d0,piVar5,piVar3,auStack_1e0);
        FUN_8c023c30(auStack_1e0,&DAT_8c13a7a0,piVar5,piVar3,auStack_1f0);
        Vec3_assign(ar4 + 0x24c,auStack_1f0,piVar5,piVar3);
        Vec3_dtor(auStack_1f0,0xffffffff,piVar5,piVar3);
        Vec3_dtor(auStack_1e0,0xffffffff,piVar5,piVar3);
        Vec3_dtor(auStack_1d0,0xffffffff,piVar5,piVar3);
        Vec3_dtor(auStack_1c0,0xffffffff,piVar5,piVar3);
        Vec3_dtor(auStack_1b0,0xffffffff,piVar5,piVar3);
        Vec3_dtor(auStack_1a0,0xffffffff,piVar5,piVar3);
        Vec3_dtor(auStack_190,0xffffffff,piVar5,piVar3);
        Vec3_dtor(auStack_180,0xffffffff,piVar5,piVar3);
        FUN_8c023aa0(ar4 + 0x24c,ar5,piVar5,piVar3);
        FUN_8c032788(ar4,ar4 + 0x24c,ar7,in_stack_00000000);
        iVar1 = ar4 + 0x24c;
        Vec3_assign(auStack_34,iVar1,ar7,in_stack_00000000);
        ar6 = ar7;
        piVar5 = in_stack_00000000;
      }
      else {
        iVar1 = ar4 + 0x264;
        Vec3_assign(auStack_34,iVar1,ar6,piVar5);
      }
    }
    FUN_8c0231c8(ar4 + 0x14,iVar1,ar6,piVar5);
    FUN_8c02374c(ar4 + 0x14,auStack_200,ar6,piVar5);
    Vec3_assign(ar4 + 0x80,auStack_200,ar6,piVar5);
    Vec3_dtor(auStack_200,0xffffffff,ar6,piVar5);
  }
  else if (iVar1 == 1) {
    Vec3_assign(auStack_34,ar4 + 0x264,ar6,piVar5);
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,s_CAnimBody_AdvanceFrame_033ba0,ar6,piVar5);
    if (cVar13 == '\0') {
      dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x27c),*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x28);
      dVar8 = *(double *)(ar4 + 0x27c);
    }
    if (cVar12 == '\0') {
      fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(ar4 + 0x28) = fVar7;
      dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),in_fr3);
      dVar9 = (double)CONCAT44(0x42700000,*(undefined4 *)(ar4 + 0x27c));
    }
    else {
      *(double *)(ar4 + 0x28) = in_xd0;
      dVar8 = *(double *)(ar4 + 0x28);
      dVar9 = 1.29072414440439e-311;
    }
    if (cVar12 == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(0x40000000,fVar7);
    }
    else {
      dVar9 = 3.74001758157629e-312;
    }
    if (cVar12 == '\0') {
      bVar11 = (float)((ulonglong)dVar8 >> 0x20) <
               SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      bVar11 = dVar8 < dVar9 / dVar9;
    }
    if (bVar11) {
      *(int *)(ar4 + 0x260) = *(int *)(ar4 + 0x260) + 1;
      piVar5 = (int *)0x0;
      ar6 = (int *)0x0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0,0);
    }
    piVar3 = ar5;
    Vec3_sub(auStack_34,ar5,ar6,piVar5,auStack_210);
    Vec3_normalize(auStack_210,piVar3,ar6,piVar5);
    Vec3_assign(auStack_44,auStack_220,ar6,piVar5);
    Vec3_dtor(auStack_220,0xffffffff,ar6,piVar5);
    Vec3_dtor(auStack_210,0xffffffff,ar6,piVar5);
    iVar6 = ar4 + 0x14;
    FUN_8c0230f0(iVar6,iVar6,ar6,piVar5,auStack_230);
    FUN_8c0230f0(auStack_44,iVar6,ar6,piVar5,auStack_240);
    FUN_8c022dac(auStack_230,auStack_240,ar6,piVar5);
    Vec3_dtor(auStack_240,0xffffffff,ar6,piVar5);
    Vec3_dtor(auStack_230,0xffffffff,ar6,piVar5);
    iVar6 = FUN_8c097ba4(ar4,auStack_34,ar5,piVar5);
    FUN_8c0230f0(ar4 + 0x14,iVar6,ar5,piVar5,auStack_250);
    Vec3_assign(ar4 + 0x80,auStack_250,ar5,piVar5);
    Vec3_dtor(auStack_250,0xffffffff,ar5,piVar5);
    ar6 = ar5;
  }
  else if (iVar1 == 2) {
    iVar6 = ar4 + 0x264;
    Vec3_assign(auStack_34,iVar6,ar6,piVar5);
    uVar4 = SUB84(in_dr0,0);
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar6,ar6,piVar5);
    if (cVar13 == '\0') {
      *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
      dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x27c),*(undefined4 *)(ar4 + 0x28));
    }
    else {
      *(undefined8 *)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar4);
      in_xd0 = *(double *)(ar4 + 0x28);
      dVar8 = *(double *)(ar4 + 0x27c);
    }
    if (cVar12 == '\0') {
      fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(ar4 + 0x28) = fVar7;
    }
    else {
      *(double *)(ar4 + 0x28) = in_xd0;
    }
    piVar3 = ar5;
    Vec3_sub(auStack_34,ar5,ar6,piVar5,auStack_260);
    Vec3_normalize(auStack_260,piVar3,ar6,piVar5);
    Vec3_assign(auStack_44,auStack_270,ar6,piVar5);
    Vec3_dtor(auStack_270,0xffffffff,ar6,piVar5);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_260,0xffffffff,ar6,piVar5);
    FUN_8c0230f0(ar4 + 0x14,uVar4,ar6,piVar5,auStack_280);
    FUN_8c0230f0(auStack_44,FUN_8c0230f0,ar6,piVar5,auStack_290);
    FUN_8c022dac(auStack_280,auStack_290,ar6,piVar5);
    Vec3_dtor(auStack_290,0xffffffff,ar6,piVar5);
    Vec3_dtor(auStack_280,0xffffffff,ar6,piVar5);
    ar5_00 = auStack_34;
    iVar6 = FUN_8c097ba4(ar4,ar5_00,ar5,piVar5);
    ar6 = ar5;
    if (iVar6 == 0) {
      iVar6 = 1;
      *(undefined4 *)(ar4 + 0x40) = 3;
      piVar5 = (int *)0x0;
      ar6 = (int *)0x0;
      uVar4 = 1;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0);
      ar4_00 = (ulonglong *)(ar4 + 0x28);
      if (cVar13 == '\0') {
        *(undefined4 *)ar4_00 = 0;
      }
      else {
        *ar4_00 = (ulonglong)(uint)fVar7;
      }
      uVar4 = rand(ar4_00,uVar4,ar6,piVar5);
      iVar1 = libgcc_divide_helper_01031c(uVar4,10,ar6,piVar5);
      *(int *)(ar4 + 0x284) = iVar1 + 0xf;
      ar5_00 = (undefined1 *)0x260;
      *(int *)(ar4 + 0x260) = *(int *)(ar4 + 0x260) + 1;
    }
    FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,piVar5,auStack_2a0);
    Vec3_assign(ar4 + 0x80,auStack_2a0,ar6,piVar5);
    Vec3_dtor(auStack_2a0,0xffffffff,ar6,piVar5);
  }
  else if (iVar1 == 3) {
    ar5_01 = 0xb0;
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6,piVar5);
    if (iVar1 == 1) {
      ar5_01 = *(int *)(ar4 + 0x284) + -1;
      *(int *)(ar4 + 0x284) = ar5_01;
      if (*(int *)(ar4 + 0x284) < 1) {
        iVar6 = 0;
        ar5_01 = 0x40;
        *(undefined4 *)(ar4 + 0x40) = 0;
      }
    }
    FUN_8c0230f0(ar4 + 0x14,ar5_01,ar6,piVar5,(int)&uStack_2b4 + 4);
    Vec3_assign(ar4 + 0x80,(int)&uStack_2b4 + 4,ar6,piVar5);
    Vec3_dtor((int)&uStack_2b4 + 4,0xffffffff,ar6,piVar5);
  }
LAB_8c0977f2:
  uStack_2c0._4_4_ = iVar6;
  free_if_nonnull_wrap_102790(&uStack_60,0xffffffff,ar6,piVar5);
  Vec3_dtor(auStack_54,0xffffffff,ar6,piVar5);
  Vec3_dtor(auStack_44,0xffffffff,ar6,piVar5);
  Vec3_dtor(auStack_34,0xffffffff,ar6,piVar5);
  return uStack_2c0._4_4_;
}



/* FUN_8c097888 @ 8c097888 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c097888) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c097888(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  code *pcVar7;
  double dVar6;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined4 in_stack_00000000;
  undefined4 ain0;
  undefined8 uStack_98;
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar2 = ar5;
  ain0 = ar7;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_34,uVar2,ar6,ar7);
  uVar3 = 1;
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c0978d0:
    iVar1 = FUN_8c034148(ar4 + 0xb0,4,ar6,ar7);
    uVar4 = (undefined4)in_dr0;
    if ((iVar1 != 1) && (iVar1 != 2)) {
      Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
      return 1;
    }
    uVar2 = 0x8c2846e8;
    FUN_8c031b68(ar4,0x8c2846e8,ar6,ar7);
    in_dr0 = CONCAT44(0x3f800000,uVar4);
    if (cVar10 == '\0') {
      *(undefined4 *)(ar4 + 0x48) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x48) = in_dr0;
    }
    *(undefined4 *)(ar4 + 0x40) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 3) {
      iVar1 = ar4 + 0x24c;
      Vec3_assign(auStack_24,iVar1,ar6,ar7);
      s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar1,ar6,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,iVar1,ar6,ar7,ain0);
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x42920000,(int)in_dr0);
        in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        dVar6 = 1.23979734631016e-311;
      }
      if (cVar9 == '\0') {
        bVar8 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar8 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
      }
      if (!bVar8) {
        *(undefined4 *)(ar4 + 0x248) = 0;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
      FUN_8c0230f0(ar4 + 0x14,iVar1,ar6,ar7,auStack_54);
      Vec3_assign(ar4 + 0x80,auStack_54,ar6,ar7);
      Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
      uVar2 = ar5;
      Vec3_sub(auStack_24,ar5,ar6,ar7,auStack_64);
      Vec3_normalize(auStack_64,uVar2,ar6,ar7);
      Vec3_assign(auStack_34,auStack_74,ar6,ar7);
      Vec3_dtor(auStack_74,0xffffffff,ar6,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_64,0xffffffff,ar6,ar7);
      FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7,auStack_84);
      FUN_8c0230f0(auStack_34,uVar2,ar6,ar7,(int)&uStack_98 + 4);
      FUN_8c022dac(auStack_84,(int)&uStack_98 + 4,ar6,ar7);
      if (cVar10 == '\0') {
        uStack_98 = (double)CONCAT44(uStack_98._4_4_,(int)((ulonglong)dVar6 >> 0x20));
        dVar6 = uStack_98;
      }
      uStack_98 = dVar6;
      Vec3_dtor((int)&uStack_98 + 4,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_84,0xffffffff,ar6,ar7);
      uVar3 = FUN_8c097ba4(ar4,auStack_24,ar5,ar7);
      ar6 = ar5;
      goto LAB_8c097b04;
    }
    if (iVar1 != 5) goto LAB_8c097b04;
    goto LAB_8c0978d0;
  }
  s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7,ain0);
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x42200000,(int)in_dr0);
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    dVar6 = 2.7216357441417e-312;
  }
  if (cVar9 == '\0') {
    bVar8 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
  }
  else {
    bVar8 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar8) {
    Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,ar7);
    if (cVar10 == '\0') {
      uVar2 = SUB84(dVar6,0);
      pcVar7 = (code *)0x40000000;
    }
    else {
      uVar2 = 0x40000000;
      pcVar7 = s_CAnimBody_AdvanceFrame_033ba0;
    }
    FUN_8c031ce8(ar4,ain0,in_stack_00000000,ar7);
    Vec3_assign(ar4 + 0x24c,auStack_44,in_stack_00000000,ar7);
    Vec3_dtor(auStack_44,0xffffffff,in_stack_00000000,ar7);
    ar5_00 = auStack_24;
    FUN_8c022fc0(ar5,ar5_00,in_stack_00000000,ar7);
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),pcVar7);
    }
    else {
      in_xd0 = CONCAT44(pcVar7,uVar2);
      dVar6 = *(double *)(ar4 + 0x24);
    }
    if (cVar9 == '\0') {
      fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar10 == '\0') {
      *(float *)(ar4 + 0x30) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd0;
    }
    FUN_8c031c64(ar4,ar5_00,in_stack_00000000,ar7);
    *(undefined4 *)(ar4 + 0x40) = 3;
    ar6 = in_stack_00000000;
  }
LAB_8c097b04:
  Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
  return uVar3;
}



/* FUN_8c097ba4 @ 8c097ba4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c097ce4) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c097ba4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double in_xd0;
  char cVar8;
  char cVar9;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar3 = ar6;
  ar6_00 = ar6;
  Vec3_sub(ar5,ar6,ar6,ar7,auStack_34);
  Vec3_normalize(auStack_34,uVar3,ar6_00,ar7);
  Vec3_ctor_copy(auStack_24,auStack_44,ar6_00,ar7);
  Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
  uVar3 = 1;
  if (*(int *)(ar4 + 0x40) == 0) {
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
    uVar3 = 0;
  }
  else {
    if ((*(int *)(ar4 + 0x40) == 1) || (*(int *)(ar4 + 0x40) == 3)) {
      if (*(int *)(ar4 + 0x44) == 1) {
        FUN_8c031fc4(ar4,uVar2,ar6_00,ar7);
      }
      pdVar1 = (double *)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar1;
        pdVar1 = (double *)(ar4 + 0x30);
      }
      dVar5 = *pdVar1;
      if (cVar8 == '\0') {
        fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      dVar5 = in_xd0;
      if (cVar9 == '\0') {
        uStack_88 = (double)CONCAT44(uStack_88._4_4_,fVar4);
        dVar5 = uStack_88;
      }
      uStack_88 = dVar5;
      Vec3_scale(auStack_24,&uStack_88,ar6_00,ar7,auStack_54);
      Vec3_add(ar4 + 0x14,auStack_54,ar6_00,ar7,auStack_64);
      FUN_8c023aa0(ar4 + 0x14,auStack_64,ar6_00,ar7);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
      Vec3_normalize(ar4 + 0x14,uVar2,ar6_00,ar7);
      Vec3_assign(ar4 + 0x14,auStack_74,ar6_00,ar7);
      Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
      pdVar1 = (double *)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar1;
        pdVar1 = (double *)(ar4 + 0x30);
      }
      dVar5 = *pdVar1;
      if (SUB84(dVar5,0) != (float)((ulonglong)dVar5 >> 0x20)) {
        if (cVar9 == '\0') {
          dVar5 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
        }
        if (cVar8 == '\0' && 0.0 < SUB84(dVar5,0)) {
          if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x28);
            dVar5 = *(double *)(ar4 + 0x24);
          }
          if (cVar8 == '\0') {
            fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar5 / dVar5,0);
          }
          if (cVar9 == '\0') {
            dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c),fVar4);
          }
          else {
            dVar5 = *(double *)(ar4 + 0x2c);
          }
          if (cVar8 == '\0') {
            fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar9 == '\0') {
            *(float *)(ar4 + 0x2c) = fVar4;
          }
          else {
            *(double *)(ar4 + 0x2c) = in_xd0;
          }
        }
        pdVar1 = (double *)(ar4 + 0x2c);
        if (cVar9 != '\0') {
          in_xd0 = *pdVar1;
          pdVar1 = (double *)(ar4 + 0x30);
        }
        dVar5 = *pdVar1;
        if (cVar8 == '\0' && (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar5,0)) {
          if (cVar9 == '\0') {
            uVar2 = *(undefined4 *)(ar4 + 0x30);
            dVar5 = (double)CONCAT44(uVar2,SUB84(dVar5,0));
            *(undefined4 *)(ar4 + 0x2c) = uVar2;
          }
          else {
            dVar5 = *(double *)(ar4 + 0x30);
            *(double *)(ar4 + 0x2c) = dVar5;
          }
        }
      }
      FUN_8c022fc0(ar6,ar5,ar6_00,ar7);
      uVar2 = (undefined4)((ulonglong)dVar5 >> 0x20);
      if (cVar9 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x28));
        uStack_94 = uVar2;
      }
      else {
        uStack_94 = SUB84(dVar5,0);
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar5 = *(double *)(ar4 + 0x48);
        uStack_90 = uVar2;
      }
      if (cVar8 == '\0') {
        fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar9 == '\0') {
        uVar6 = CONCAT44(uStack_94,fVar4);
      }
      else {
        uVar6 = CONCAT44(uStack_90,uStack_94);
      }
      if (cVar8 != '\0' || (float)(uVar6 >> 0x20) <= (float)uVar6) {
        dVar5 = (double)(uVar6 & 0xffffffff);
        if (cVar9 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(double *)(ar4 + 0x2c) = dVar5;
        }
        FUN_8c0230f0(ar4 + 0x14,ar5,ar6_00,ar7,(int)&uStack_88 + 4);
        FUN_8c022dac(ar4 + 0x14,(int)&uStack_88 + 4,ar6_00,ar7);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x42340000,(int)((ulonglong)dVar5 >> 0x20));
          dVar5 = in_xd0;
        }
        else {
          dVar7 = 2.993931213754161e-78;
        }
        if (cVar8 == '\0') {
          fVar4 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar7 + dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(ar4 + 0x38) = fVar4;
        }
        else {
          *(double *)(ar4 + 0x38) = dVar5;
        }
        Vec3_dtor((int)&uStack_88 + 4,0xffffffff,ar6_00,ar7);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          dVar5 = *(double *)(ar4 + 0x28);
          dVar7 = *(double *)(ar4 + 0x38);
        }
        if (cVar8 == '\0') {
          fVar4 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar7 / dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(ar4 + 0x3c) = fVar4;
        }
        else {
          *(double *)(ar4 + 0x3c) = dVar5;
        }
        *(undefined4 *)(ar4 + 0x40) = 0;
        uVar3 = 0;
      }
    }
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  }
  return uVar3;
}



/* FUN_8c097e0c @ 8c097e0c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c097e0c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(DAT_8c097ed0 + ar4);
  if (iVar1 == 0) {
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 2;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c097edc)(ar4 + DAT_8c097ed4._4_4_,2,0xffffffff,0)
    ;
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c097ee0)(ar4 + DAT_8c097ed4._4_4_,ar5,ar6,ar7);
    *(int *)(DAT_8c097ed0 + ar4) = *(int *)(DAT_8c097ed0 + ar4) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    return 0;
  }
  iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c097ee4)
                    (ar4 + DAT_8c097ed4._4_4_,ar5,ar6,ar7);
  if (iVar1 == 1) {
    ar5_00 = 2;
    (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c097ee8)(ar4 + DAT_8c097ed4._4_4_,2,ar6,ar7);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c097ee0)(ar4 + DAT_8c097ed4._4_4_,ar5_00,ar6,ar7);
    *(int *)(DAT_8c097ed0 + ar4) = *(int *)(DAT_8c097ed0 + ar4) + 1;
  }
  return (uint)(iVar1 != 1);
}



/* FUN_8c097ef0 @ 8c097ef0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c097ef0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_PR;
  
  *(undefined4 *)(ar4 + 300) = 0;
  *(undefined4 *)(ar4 + 0x40) = 5;
  *(undefined4 *)(ar4 + 0x134) = 0;
  FUN_8c031b58(ar4 + 0xb0,ar5,ar6,ar7);
  FUN_8c032204(ar4 + 0xb0,ar5,ar6,ar7,in_PR);
  ar5_00 = 1;
  FUN_8c0321fc(ar4 + 0xb0,1,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x138) = 0;
  *(undefined4 *)(ar4 + 0x1e8) = 0;
  FUN_8c030eb8(ar4 + 0x1fc,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x214) = 1;
  if ((-1 < *(int *)(ar4 + 0x2f4)) && (-1 < *(int *)(ar4 + 0x2f8))) {
    FUN_8c06b1d8(*(undefined4 *)(ar4 + 0x2f4),*(undefined4 *)(ar4 + 0x2f8),ar6,ar7);
    *(undefined4 *)(ar4 + 0x2f4) = 0xffffffff;
    *(undefined4 *)(ar4 + 0x2f8) = 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x240) = 0;
  *(undefined4 *)(ar4 + 0x244) = 0;
  return 0x244;
}



/* FUN_8c097fcc @ 8c097fcc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c097fcc(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  double dVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  ulonglong in_dr0;
  double dVar8;
  float fVar10;
  ulonglong uVar9;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined4 in_stack_00000004;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar4 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_1c,ar5,ar6,ar7);
  uVar5 = (undefined4)in_dr0;
  if (*(int *)(ar4 + 300) == 0) {
    FUN_8c022d04(auStack_1c,uVar4,ar6_00,ar7_00);
    Vec3_set_xyz(auStack_28,uVar4,ar6_00,ar7_00);
    FUN_8c023484(auStack_1c,auStack_28,ar6_00,ar7_00,auStack_38);
    Vec3_assign(auStack_1c,auStack_38,ar6_00,ar7_00);
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
    uVar4 = 0xffffffff;
    puVar3 = auStack_28;
    object_dtor_delete(puVar3,0xffffffff,ar6_00,ar7_00);
    uVar4 = rand(puVar3,uVar4,ar6_00,ar7_00);
    ar5_00 = 0x168;
    libgcc_divide_helper_01031c(uVar4,0x168,ar6_00,ar7_00);
    FUN_8c0238b4(auStack_1c,ar5_00,ar6_00,ar7_00);
    Vec3_assign(auStack_1c,auStack_48,ar6_00,ar7_00);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
    Vec3_normalize(auStack_1c,uVar4,ar6_00,ar7_00);
    Vec3_assign(auStack_1c,auStack_58,ar6_00,ar7_00);
    uVar4 = 0xffffffff;
    puVar3 = auStack_58;
    Vec3_dtor(puVar3,0xffffffff,ar6_00,ar7_00);
    uVar4 = rand(puVar3,uVar4,ar6_00,ar7_00);
    iVar2 = libgcc_divide_helper_01031c(uVar4,0x50,ar6_00,ar7_00);
    if (cVar11 == '\0') {
      dVar8 = (double)CONCAT44((float)iVar2,uVar5);
    }
    else {
      dVar8 = (double)iVar2;
    }
    dVar1 = dVar8;
    if (cVar12 == '\0') {
      uStack_70 = (double)CONCAT44(uStack_70._4_4_,(int)((ulonglong)dVar8 >> 0x20));
      dVar1 = uStack_70;
    }
    uStack_70 = dVar1;
    FUN_8c023bf4(auStack_1c,&uStack_70,ar6_00,ar7_00);
    uVar6 = SUB84(dVar8,0);
    Vec3_add(ar6,auStack_1c,ar6_00,ar7_00,auStack_68);
    ar6_00 = auStack_68;
    iVar2 = FUN_8c093e80(ar4,ar5,ar6_00,ar7);
    Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
    ar7_00 = ar7;
    if (iVar2 == 0) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      ar7_00 = 0;
      ar6_00 = (undefined1 *)0x0;
      uVar4 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0,0);
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x220) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x220) = (ulonglong)uVar6;
      }
      FUN_8c030f2c(ar4 + 0x1fc,uVar4,ar6_00,ar7_00);
      FUN_8c03f39c(in_stack_00000004,uVar4,ar6_00,ar7_00);
    }
  }
  else if (*(int *)(ar4 + 300) == 1) {
    if (cVar12 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
      fVar7 = *(float *)(ar4 + 0x220);
      fVar10 = 30.0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      in_xd0 = *(undefined8 *)(ar4 + 0x220);
      fVar7 = 30.0;
      fVar10 = 2.0;
    }
    if (cVar11 != '\0' || fVar10 <= fVar7) {
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        fVar7 = *(float *)(ar4 + 0x220);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x220);
      }
      if (cVar11 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x220) = fVar7;
        uVar9 = CONCAT44(0x42f00000,*(undefined4 *)(ar4 + 0x220));
      }
      else {
        *(undefined8 *)(ar4 + 0x220) = in_xd0;
        uVar9 = 0x454d00142f00000;
      }
      if (cVar11 == '\0' && (float)(uVar9 >> 0x20) < (float)uVar9) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x220) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x220) = uVar9 & 0xffffffff;
        }
      }
    }
    else {
      FUN_8c03f3ac(ar4 + 0xb0,uVar4,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        fVar7 = *(float *)(ar4 + 0x220);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x220);
      }
      if (cVar11 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84((double)CONCAT44(0x3f800000,fVar7) + (double)CONCAT44(0x3f800000,fVar7),0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x220) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x220) = in_xd0;
      }
    }
  }
  uStack_70._4_4_ = 1;
  Vec3_dtor(auStack_1c,0xffffffff,ar6_00,ar7_00);
  return uStack_70._4_4_;
}



/* FUN_8c0982b8 @ 8c0982b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c0982b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c0982c0;
  *(undefined1 *)(DAT_8c0982c0 + ar4) = (undefined1)ar5;
  return iVar1;
}



/* FUN_8c0982c4 @ 8c0982c4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c098474) */
/* WARNING: Removing unreachable block (ram,0x8c098322) */
/* WARNING: Removing unreachable block (ram,0x8c098326) */
/* WARNING: Removing unreachable block (ram,0x8c098478) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0982c4(int *ar4,float *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined1 *puVar3;
  int ar6_00;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar4;
  float fVar5;
  double in_dr0;
  undefined4 uVar8;
  ulonglong uVar6;
  double dVar7;
  double in_dr14;
  double dVar9;
  undefined8 in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = (undefined8 *)((int)&uStack_8 + 4);
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
  }
  else {
    puVar4 = &uStack_8;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar4 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar4 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar4 + -0x10) = in_PR;
  *(undefined4 *)((int)puVar4 + -0xf4) = ar7;
  pfVar2 = ar5;
  ar6_00 = ar6;
  (*(code *)PTR_FUN_8c0984c8)((int)ar4 + DAT_8c0984c4,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0984d0)
            ((undefined1 *)((int)puVar4 + DAT_8c0984cc + -0xf4),pfVar2,ar6_00,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0984d0)
            ((undefined1 *)((int)puVar4 + DAT_8c0984d4 + -0xf4),pfVar2,ar6_00,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c0984d0)
            ((undefined1 *)((int)puVar4 + DAT_8c0984d8 + -0xf4),pfVar2,ar6_00,ar7);
  if ((*(int *)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(DAT_8c0984dc + (int)ar4) << 0x1e) < 0))
  {
    (*(code *)PTR_Vec3_assign_8c0984e0)
              ((undefined1 *)((int)puVar4 + DAT_8c0984d4 + -0xf4),ar5,ar6_00,ar7);
    (*(code *)PTR_Vec3_assign_8c0984e0)
              ((undefined1 *)((int)puVar4 + DAT_8c0984d8 + -0xf4),*(int *)(ar6 + 0x68) + 4,ar6_00,
               ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)(ar6 + 0x68) + DAT_8c0984e4));
    }
    *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + DAT_8c0984e8 + -0xf4);
    (*(code *)PTR_Vec3_sub_8c0984f4)
              ((undefined1 *)((int)puVar4 + DAT_8c0984f0 + -0xf8),
               (undefined1 *)((int)puVar4 + DAT_8c0984ec + -0xf8),ar6_00,ar7,
               *(undefined4 *)((int)puVar4 + -0xf8));
    (*(code *)PTR_Vec3_assign_8c0984e0)
              ((undefined1 *)((int)puVar4 + DAT_8c0984cc + -0xf4),
               (undefined1 *)((int)puVar4 + DAT_8c0984e8 + -0xf4),ar6_00,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c0984f8)
              ((undefined1 *)((int)puVar4 + DAT_8c0984e8 + -0xf4),0xffffffff,ar6_00,ar7);
    (*(code *)PTR_Vec3_length_sq_8c0984fc)
              ((undefined1 *)((int)puVar4 + DAT_8c0984cc + -0xf4),uVar1,ar6_00,ar7);
    uVar8 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar4 + -200) = uVar8;
      in_dr0 = (double)CONCAT44(uVar8,ar4[0x12]);
    }
    else {
      *(double *)((int)puVar4 + -200) = in_dr0;
      in_xd0 = *(undefined8 *)(ar4 + 0x12);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(in_dr0,0) + SUB84(in_dr14,0);
    }
    else {
      fVar5 = SUB84(in_dr0 + in_dr14,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -200),fVar5);
    }
    else {
      dVar7 = *(double *)((int)puVar4 + -200);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0xc4) = fVar5;
      fVar5 = *(float *)((int)puVar4 + -0xc4);
    }
    else {
      *(undefined8 *)((int)puVar4 + -0xc4) = in_xd0;
      in_xd0 = *(undefined8 *)((int)puVar4 + -0xc4);
    }
    uVar6 = (ulonglong)(uint)fVar5;
    if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44(DAT_8c098500,fVar5);
        *(undefined4 *)((int)puVar4 + -0xc4) = DAT_8c098500;
      }
      else {
        uVar6 = CONCAT44(PTR_Vec3_length_8c098504,DAT_8c098500);
        *(ulonglong *)((int)puVar4 + -0xc4) = uVar6;
      }
    }
    (*(code *)PTR_Vec3_length_8c098504)
              ((undefined1 *)((int)puVar4 + DAT_8c0984cc + -0xf4),uVar1,ar6_00,ar7);
    (*(code *)PTR_Vec3_length_sq_8c0984fc)(ar4 + 1,uVar1,ar6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0xcc) = (int)(uVar6 >> 0x20);
      uVar6 = (ulonglong)*(uint *)((int)puVar4 + -0xcc);
    }
    else {
      *(ulonglong *)((int)puVar4 + -0xcc) = uVar6;
      in_xd0 = *(undefined8 *)((int)puVar4 + -0xcc);
    }
    fVar5 = (float)uVar6;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
      *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + DAT_8c098508 + -0xf4);
      (*(code *)PTR_Vec3_scale_8c098510)
                (ar4 + 5,PTR_DAT_8c09850c,ar6_00,ar7,*(undefined4 *)((int)puVar4 + -0xf8));
      *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + DAT_8c098514 + -0xf4);
      puVar3 = (undefined1 *)((int)puVar4 + DAT_8c098518 + -0xf8);
      (*(code *)PTR_Vec3_add_8c098520)
                ((undefined1 *)((int)puVar4 + DAT_8c09851c + -0xf8),puVar3,ar6_00,ar7,
                 *(undefined4 *)((int)puVar4 + -0xf8));
      uVar1 = (*(code *)PTR_Vec3_length_8c098504)
                        ((undefined1 *)((int)puVar4 + DAT_8c098514 + -0xf4),puVar3,ar6_00,ar7);
      *(undefined4 *)((int)puVar4 + -0xd0) = uVar1;
      (*(code *)PTR_Vec3_assign_8c0984e0)
                ((undefined1 *)((int)puVar4 + DAT_8c0984cc + -0xf4),
                 *(undefined4 *)((int)puVar4 + -0xd0),ar6_00,ar7);
      (*(code *)PTR_Vec3_dtor_8c0984f8)
                ((undefined1 *)((int)puVar4 + DAT_8c098514 + -0xf4),0xffffffff,ar6_00,ar7);
      (*(code *)PTR_Vec3_dtor_8c0984f8)
                ((undefined1 *)((int)puVar4 + DAT_8c098508 + -0xf4),0xffffffff,ar6_00,ar7);
    }
    (*(code *)PTR_FUN_8c098524)
              ((undefined1 *)((int)puVar4 + DAT_8c0984cc + -0xf4),
               (undefined1 *)((int)puVar4 + -0xc4),ar6_00,ar7);
    in_dr0 = (double)(ulonglong)(uint)fVar5;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar4 + DAT_8c09851c + -0xf4) = 0;
    }
    else {
      *(double *)((int)puVar4 + DAT_8c09851c + -0xf4) = in_dr0;
    }
    pfVar2 = (float *)((int)puVar4 + DAT_8c0984cc + -0xf4);
    (*(code *)PTR_Vec3_assign_8c0984e0)((int)ar4 + DAT_8c0984c4,pfVar2,ar6_00,ar7);
  }
  if ((*(int *)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(DAT_8c0984dc + (int)ar4) << 0x1d) < 0)) {
    if ((-1 < *(int *)(DAT_8c098528 + (int)ar4)) && (-1 < *(int *)(DAT_8c09852c + (int)ar4))) {
      uVar1 = (**(code **)(DAT_8c098530 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                        (*(int *)(ar6 + 0x50),pfVar2,ar6_00,ar7);
      *(undefined4 *)((int)puVar4 + -0xd4) = uVar1;
      if (*(int *)((int)puVar4 + -0xd4) == 0x12) {
        (**(code **)(*ar4 + 0x2c))(ar4,pfVar2,ar6_00,ar7);
      }
      else {
        uVar1 = (**(code **)(DAT_8c098598 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                          (*(int *)(ar6 + 0x50),pfVar2,ar6_00,ar7);
        *(undefined4 *)((int)puVar4 + -0xd8) = uVar1;
        if (*(int *)((int)puVar4 + -0xd8) == 0x13) {
          uVar1 = (**(code **)(DAT_8c09859c + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                            (*(int *)(ar6 + 0x50),pfVar2,ar6_00,ar7);
          *(undefined4 *)((int)puVar4 + -0xdc) = uVar1;
          if (*(int *)((int)puVar4 + -0xdc) == 9) {
            (**(code **)(*ar4 + 0x2c))(ar4,pfVar2,ar6_00,ar7);
          }
        }
      }
      (*(code *)PTR_Vec3_dtor_8c0985a4)
                ((undefined1 *)((int)puVar4 + DAT_8c0985a0 + -0xf4),0xffffffff,ar6_00,ar7);
      (*(code *)PTR_Vec3_dtor_8c0985a4)
                ((undefined1 *)((int)puVar4 + DAT_8c0985a8 + -0xf4),0xffffffff,ar6_00,ar7);
      uVar1 = (*(code *)PTR_Vec3_dtor_8c0985a4)
                        ((undefined1 *)((int)puVar4 + DAT_8c0985ac + -0xf4),0xffffffff,ar6_00,ar7);
      return uVar1;
    }
    (**(code **)(DAT_8c098738 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
              (*(int *)(ar6 + 0x50),pfVar2,ar6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0xe0) = (int)((ulonglong)in_dr0 >> 0x20);
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)((int)puVar4 + -0xe0));
      dVar7 = (double)CONCAT44(DAT_8c09873c,SUB84(in_dr0,0));
    }
    else {
      *(double *)((int)puVar4 + -0xe0) = in_dr0;
      dVar7 = (double)CONCAT44(DAT_8c098740,DAT_8c09873c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      dVar9 = in_dr14 + dVar7;
    }
    pfVar2 = ar5;
    (*(code *)PTR_Vec3_assign_8c098744)
              ((undefined1 *)((int)puVar4 + DAT_8c098740 + -0xf4),ar5,ar6_00,ar7);
    *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0x80);
    (*(code *)PTR_FUN_8c098748)
              (*(undefined4 *)(ar6 + 0x50),pfVar2,ar6_00,ar7,*(undefined4 *)((int)puVar4 + -0xf8));
    (*(code *)PTR_Vec3_assign_8c098744)
              ((undefined1 *)((int)puVar4 + DAT_8c09874c + -0xf4),
               (undefined1 *)((int)puVar4 + -0x80),ar6_00,ar7);
    (*(code *)PTR_Vec3_dtor_8c098750)((undefined1 *)((int)puVar4 + -0x80),0xffffffff,ar6_00,ar7);
    *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0x90);
    (*(code *)PTR_Vec3_sub_8c09875c)
              ((undefined1 *)((int)puVar4 + DAT_8c098758 + -0xf8),
               (undefined1 *)((int)puVar4 + DAT_8c098754 + -0xf8),ar6_00,ar7,
               *(undefined4 *)((int)puVar4 + -0xf8));
    (*(code *)PTR_Vec3_assign_8c098744)
              ((undefined1 *)((int)puVar4 + DAT_8c098760 + -0xf4),
               (undefined1 *)((int)puVar4 + -0x90),ar6_00,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c098750)((undefined1 *)((int)puVar4 + -0x90),0xffffffff,ar6_00,ar7);
    (*(code *)PTR_Vec3_length_sq_8c098764)
              ((undefined1 *)((int)puVar4 + DAT_8c098760 + -0xf4),uVar1,ar6_00,ar7);
    uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)puVar4 + -0xe4) = uVar8;
      dVar7 = (double)CONCAT44(uVar8,ar4[0x12]);
    }
    else {
      *(double *)((int)puVar4 + -0xe4) = dVar7;
      in_xd0 = *(undefined8 *)(ar4 + 0x12);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) + SUB84(dVar9,0);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)((int)puVar4 + -0xe4),fVar5);
    }
    else {
      dVar7 = *(double *)((int)puVar4 + -0xe4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c098768,fVar5);
    }
    else {
      dVar7 = (double)CONCAT44(DAT_8c09876c,DAT_8c098768);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)((int)puVar4 + -0xc4) = fVar5;
      fVar5 = *(float *)((int)puVar4 + -0xc4);
    }
    else {
      *(undefined8 *)((int)puVar4 + -0xc4) = in_xd0;
    }
    uVar6 = (ulonglong)(uint)fVar5;
    if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = CONCAT44(DAT_8c09876c,fVar5);
        *(undefined4 *)((int)puVar4 + -0xc4) = DAT_8c09876c;
      }
      else {
        uVar6 = CONCAT44(PTR_Vec3_length_8c098770,DAT_8c09876c);
        *(ulonglong *)((int)puVar4 + -0xc4) = uVar6;
      }
    }
    (*(code *)PTR_Vec3_length_8c098770)
              ((undefined1 *)((int)puVar4 + DAT_8c098760 + -0xf4),uVar1,ar6_00,ar7);
    (*(code *)PTR_Vec3_length_sq_8c098764)(ar4 + 1,uVar1,ar6_00,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar4 + -0xe8) = (int)(uVar6 >> 0x20);
      uVar6 = (ulonglong)*(uint *)((int)puVar4 + -0xe8);
    }
    else {
      *(ulonglong *)((int)puVar4 + -0xe8) = uVar6;
    }
    fVar5 = (float)uVar6;
    if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
      *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0xa0);
      (*(code *)PTR_Vec3_scale_8c098778)
                (ar4 + 5,PTR_DAT_8c098774,ar6_00,ar7,*(undefined4 *)((int)puVar4 + -0xf8));
      *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0xb0);
      puVar3 = (undefined1 *)((int)puVar4 + -0xa0);
      (*(code *)PTR_Vec3_add_8c098780)
                ((undefined1 *)((int)puVar4 + DAT_8c09877c + -0xf8),puVar3,ar6_00,ar7,
                 *(undefined4 *)((int)puVar4 + -0xf8));
      uVar1 = (*(code *)PTR_Vec3_length_8c098770)
                        ((undefined1 *)((int)puVar4 + -0xb0),puVar3,ar6_00,ar7);
      *(undefined4 *)((int)puVar4 + -0xec) = uVar1;
      (*(code *)PTR_Vec3_assign_8c098744)
                ((undefined1 *)((int)puVar4 + DAT_8c098760 + -0xf4),
                 *(undefined4 *)((int)puVar4 + -0xec),ar6_00,ar7);
      (*(code *)PTR_Vec3_dtor_8c098750)((undefined1 *)((int)puVar4 + -0xb0),0xffffffff,ar6_00,ar7);
      (*(code *)PTR_Vec3_dtor_8c098750)((undefined1 *)((int)puVar4 + -0xa0),0xffffffff,ar6_00,ar7);
    }
    (*(code *)PTR_FUN_8c098784)
              ((undefined1 *)((int)puVar4 + DAT_8c098760 + -0xf4),
               (undefined1 *)((int)puVar4 + -0xc4),ar6_00,ar7);
    puVar3 = (undefined1 *)((int)puVar4 + DAT_8c098760 + -0xf4);
    (*(code *)PTR_FUN_8c09878c)((int)ar4 + DAT_8c098788,puVar3,ar6_00,ar7);
    if (*(int *)(DAT_8c098790 + (int)ar4) == 3) {
      if ((*(int *)(DAT_8c098794 + (int)ar4) == 10) && (*(int *)(DAT_8c098798 + (int)ar4) < 2)) {
        *(undefined4 *)(DAT_8c098798 + (int)ar4) = 0;
        ar4[0x10] = 5;
      }
      else if ((*(int *)(DAT_8c098800 + (int)ar4) == 2) && (*(int *)(DAT_8c098804 + (int)ar4) != 10)
              ) {
        *(undefined4 *)(DAT_8c098808 + (int)ar4) = 1;
        *(undefined1 **)((int)puVar4 + -0xf8) = (undefined1 *)((int)puVar4 + -0xc0);
        (*(code *)PTR_FUN_8c098810)
                  ((int)ar4 + DAT_8c09880c,puVar3,ar6_00,ar7,*(undefined4 *)((int)puVar4 + -0xf8));
        (*(code *)PTR_Vec3_assign_8c098814)(ar4 + 5,(undefined1 *)((int)puVar4 + -0xc0),ar6_00,ar7);
        uVar1 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c098818)((undefined1 *)((int)puVar4 + -0xc0),0xffffffff,ar6_00,ar7)
        ;
        *(undefined4 *)(DAT_8c098800 + (int)ar4) = 0;
        ar4[0x10] = 5;
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c098820)
                  ((int)ar4 + DAT_8c09881c,uVar1,ar6_00,ar7);
      }
    }
    else {
      uVar1 = (*(code *)PTR_get_field_24_026024_8c098888)
                        (*(undefined4 *)((int)puVar4 + -0xf4),puVar3,ar6_00,ar7);
      *(undefined4 *)((int)puVar4 + -0xf0) = uVar1;
      if (*(int *)((int)puVar4 + -0xf0) == 0) {
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *ar5;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(undefined4 *)((int)ar4 + DAT_8c09888c),fVar5);
        }
        else {
          dVar7 = *(double *)((int)ar4 + DAT_8c09888c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44(DAT_8c098890,fVar5);
        }
        else {
          uVar6 = CONCAT44(DAT_8c098894,DAT_8c098890);
        }
        if (in_FPSCR_PR == '\0' && (float)(uVar6 >> 0x20) < (float)uVar6) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)ar4 + DAT_8c09888c) = 0;
          }
          else {
            *(ulonglong *)((int)ar4 + DAT_8c09888c) = uVar6 & 0xffffffff;
          }
        }
      }
    }
  }
  (*(code *)PTR_Vec3_dtor_8c098898)
            ((undefined1 *)((int)puVar4 + DAT_8c098894 + -0xf4),0xffffffff,ar6_00,ar7);
  (*(code *)PTR_Vec3_dtor_8c098898)
            ((undefined1 *)((int)puVar4 + DAT_8c09889c + -0xf4),0xffffffff,ar6_00,ar7);
  uVar1 = (*(code *)PTR_Vec3_dtor_8c098898)
                    ((undefined1 *)((int)puVar4 + DAT_8c0988a0 + -0xf4),0xffffffff,ar6_00,ar7);
  return uVar1;
}



/* FUN_8c0988a4 @ 8c0988a4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c098946) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c0988a4(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int *a6;
  float fVar2;
  ulonglong in_dr0;
  double dVar3;
  undefined8 in_xd0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x214) = 0;
    if (cVar5 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
    }
    *(undefined4 *)(ar4 + 0x300) = 0;
    if (cVar5 == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0xa0) = in_dr0 & 0xffffffff;
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    FUN_8c03c314(ar4,ar5,ar6,ar7);
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    a6 = ar6;
    FUN_8c0324ac(ar4,ar5,ar6,ar7);
    iVar1 = ar5;
    (**(code **)(*ar6 + 0x128))(ar6,ar5,a6,ar7);
    if (cVar5 == '\0') {
      in_dr0 = CONCAT44((int)(in_dr0 >> 0x20),*(undefined4 *)(ar5 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(ar5 + 4);
    }
    if (cVar4 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) {
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x300) = 0;
      if (cVar5 == '\0') {
        *(undefined4 *)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xa0) = in_dr0 & 0xffffffff;
      }
      FUN_8c073c9c(ar4,iVar1,a6,ar7);
      return 0;
    }
    if (cVar5 == '\0') {
      dVar3 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0xa0));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0xa0);
      dVar3 = 1.6066918270171573e+73;
    }
    if (cVar4 == '\0') {
      fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar5 == '\0') {
      *(float *)(ar4 + 0xa0) = fVar2;
      return 1;
    }
    *(undefined8 *)(ar4 + 0xa0) = in_xd0;
    return 1;
  }
  iVar1 = *(int *)(ar4 + 0x300);
  *(int *)(ar4 + 0x300) = iVar1 + 1;
  if (0x95 < iVar1 + 1) {
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  return 1;
}



/* FUN_8c0989f0 @ 8c0989f0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c098a06) */
/* WARNING: Removing unreachable block (ram,0x8c098a80) */
/* WARNING: Unknown calling convention */

int FUN_8c0989f0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined8 in_dr0;
  char cVar4;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  cVar4 = '\0';
  if (*(int *)(ar4 + 0x128) == 3) {
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 1) {
      uVar3 = 100;
      uVar2 = 0;
      iStack_10 = rand_range(ar4,0,100,ar7);
      if (iStack_10 < 0x3c) {
        FUN_8c032ab0(ar4,uVar2,uVar3,ar7);
        iVar1 = (int)((ulonglong)in_dr0 >> 0x20);
        iStack_14 = iVar1;
        if (cVar4 != '\0') {
          iStack_14 = (int)in_dr0;
          iStack_10 = iVar1;
        }
        iVar1 = 0x14;
        if (cVar4 == '\0') {
          *(int *)(ar4 + 0x304) = iStack_14;
        }
        else {
          *(ulonglong *)(ar4 + 0x304) = CONCAT44(iStack_10,iStack_14);
        }
      }
      else {
        FUN_8c032ab0(ar4,uVar2,uVar3,ar7);
        uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        uStack_18 = uVar2;
        if (cVar4 != '\0') {
          uStack_18 = (undefined4)in_dr0;
          iStack_14 = uVar2;
        }
        iVar1 = 0x10;
        if (cVar4 == '\0') {
          *(undefined4 *)(ar4 + 0x304) = uStack_18;
        }
        else {
          *(undefined8 *)(ar4 + 0x304) = CONCAT44(iStack_14,uStack_18);
        }
      }
    }
  }
  else {
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = rand_range(ar4,0,100,ar7);
      if (iVar1 < 0x50) {
        ar7_00 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 1;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
        FUN_8c032ab0(ar4,uVar2,uVar3,ar7_00);
        if (cVar4 == '\0') {
          *(int *)(ar4 + 0x304) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(undefined8 *)(ar4 + 0x304) = in_dr0;
        }
      }
      else {
        ar7_00 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 7;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
        FUN_8c032ab0(ar4,uVar2,uVar3,ar7_00);
        if (cVar4 == '\0') {
          *(int *)(ar4 + 0x304) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(undefined8 *)(ar4 + 0x304) = in_dr0;
        }
      }
      iVar1 = s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7_00);
    }
  }
  return iVar1;
}



/* FUN_8c098b6c @ 8c098b6c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c098b6c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [28];
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125ff0,ar5,ar6,ar7);
  uVar3 = 0x8c2846a0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2846a0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126000,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2846ac;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2846ac,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126010,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2846b8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2846b8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126020,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2846c4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2846c4,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126030 = CONCAT44(_UNK_8c126034,0x800000);
  }
  else {
                    /* WARNING: Read-only address (ram,0x8c126034) is written */
    _DAT_8c126030 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c030e34(auStack_1c,pcVar2,uVar3,ar7);
  FUN_8c05d608(0x8c2846d0,uVar1,uVar3,ar7);
  uVar1 = FUN_8c030e34(auStack_34,uVar1,uVar3,ar7);
  uVar1 = FUN_8c05d608(0x8c2846e8,uVar1,uVar3,ar7);
  return uVar1;
}



/* FUN_8c098ca8 @ 8c098ca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c098ca8(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c098cc4)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c098cc8;
  return ar4;
}



/* Class_12a7a8_m0_098ccc @ 8c098ccc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12a7a8_m0_098ccc(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12a7a8;
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12a7a8_m1_098d14 @ 8c098d14 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c0990c8 */
/* WARNING: Unknown calling convention */

int Class_12a7a8_m1_098d14(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *ar6_00;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar6 = 0;
  DAT_8c13a920 = *(undefined4 *)(ar4 + 0x9c);
  DAT_8c13a924 = *(undefined4 *)(ar4 + 0xa0);
  DAT_8c13a928 = *(undefined4 *)(ar4 + 0xa4);
  piVar5 = ar5;
  ar6_00 = ar6;
  FUN_8c099858(ar4,ar5,ar6,ar7);
  iVar1 = get_field_24_026024(ar5,piVar5,ar6_00,ar7);
  if (iVar1 == 0) {
    iVar4 = ar6[1];
    iVar1 = get_field_13c_028d9c(iVar4,piVar5,ar6_00,ar7);
    if (iVar1 == 0x13) {
      uVar2 = rand(iVar4,piVar5,ar6_00,ar7);
      piVar5 = (int *)0x64;
      iVar1 = libgcc_divide_helper_01031c(uVar2,100,ar6_00,ar7);
      if ((iVar1 < 1) && (*(int *)(ar4 + 4) != 0xb)) {
        *(undefined4 *)(ar4 + 4) = 0xb;
        *(undefined4 *)(ar4 + 8) = 0x55;
        *(undefined4 *)(ar4 + 0xc) = 0;
        FUN_8c099b0c(ar4,ar5,ar6_00,ar7);
        piVar5 = (int *)0x4a6;
        FUN_8c02f298(ar4,0x4a6,ar6_00,ar7);
      }
    }
  }
  iVar1 = get_field_24_026024(ar5,piVar5,ar6_00,ar7);
  if (iVar1 == 1) {
    iVar4 = ar6[1];
    iVar1 = get_field_13c_028d9c(iVar4,piVar5,ar6_00,ar7);
    if (iVar1 == 0x13) {
      uVar2 = rand(iVar4,piVar5,ar6_00,ar7);
      iVar1 = libgcc_divide_helper_01031c(uVar2,10000,ar6_00,ar7);
      if (iVar1 < 1) {
        piVar5 = (int *)0x0;
        while( true ) {
          uVar2 = 10;
          iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,10,ar6_00,ar7);
          if (iVar1 <= (int)piVar5) break;
          uVar2 = 10;
          ar6_00 = piVar5;
          iVar1 = (**(code **)(*ar5 + 0x100))(ar5,10,piVar5,ar7);
          iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,uVar2,ar6_00,ar7);
          if (iVar1 == 0x13) {
            uVar2 = 10;
            ar6_00 = piVar5;
            iVar1 = (**(code **)(*ar5 + 0x100))(ar5,10,piVar5,ar7);
            iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb4))(iVar1,uVar2,ar6_00,ar7);
            if (iVar1 == 1) {
              iVar6 = iVar6 + 1;
              uVar2 = 10;
              ar6_00 = piVar5;
              iVar1 = (**(code **)(*ar5 + 0x100))(ar5,10,piVar5,ar7);
              iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x180))(iVar1,uVar2,ar6_00,ar7);
              if (iVar1 == 0xb) {
                iVar7 = iVar7 + 1;
              }
            }
          }
          piVar5 = (int *)((int)piVar5 + 1);
        }
        if ((((iVar7 == 0) && (3 < iVar6)) && (*(int *)(ar4 + 4) == 0)) &&
           (iVar1 = (**(code **)(*ar5 + 0x1a8))(ar5,uVar2,ar6_00,ar7), iVar1 == 1)) {
          FUN_8c0996e4(ar6[3],*ar6,ar6_00,ar7);
          *(undefined4 *)(ar4 + 4) = 0xd;
          *(undefined4 *)(ar4 + 8) = 0x5f;
          *(undefined4 *)(ar4 + 0xc) = 0;
          *(undefined4 *)(ar4 + 0x40) = 0xb;
          *(undefined4 *)(ar4 + 0x9c) = 0xb;
          DAT_8c13a920 = 0xb;
          *(undefined4 *)(ar4 + 0xa0) = 0xc;
          DAT_8c13a924 = 0xc;
          *(undefined4 *)(ar4 + 0xa4) = 0xc;
          DAT_8c13a928 = 0xc;
        }
      }
    }
  }
  piVar5 = ar6;
  FUN_8c02f20c(ar4,ar6,ar6_00,ar7);
  uVar2 = get_field_4_05eed8(ar4,piVar5,ar6_00,ar7);
  piVar5 = ar6;
  FUN_8c099714(ar4,ar5,ar6,uVar2);
  uVar3 = FUN_8c02bef8(ar6[1],ar5,piVar5,uVar2);
  if ((((short)uVar3 == 1) && (uVar3 = FUN_8c035bf8(ar6[3],ar5,piVar5,uVar2), (char)uVar3 == '\0'))
     && (iVar1 = get_field_13c_028d9c(ar6[1],ar5,piVar5,uVar2), iVar1 == 0x11)) {
    *(undefined1 *)(ar4 + 0x98) = 3;
  }
  iVar1 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,ar5,piVar5,uVar2);
  if ((iVar1 == 1) && (*(char *)(ar4 + 0x98) < '\t')) {
    *(undefined1 *)(ar4 + 0x98) = 8;
  }
  if ((*(char *)(ar4 + 0x98) < '\n') && (-1 < *(char *)(ar4 + 0x98))) {
                    /* WARNING: Switch is manually overridden */
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 0xd;
    *(undefined4 *)(ar4 + 0x9c) = 1;
    *(undefined4 *)(ar4 + 0x40) = 1;
    DAT_8c13a920 = 1;
    *(undefined4 *)(ar4 + 0xa0) = 0xc;
    DAT_8c13a924 = 0xc;
    *(undefined4 *)(ar4 + 0xa4) = 0xc;
    DAT_8c13a928 = 0xc;
    piVar5 = (int *)0x1b;
    ar5 = (int *)0x26;
    FUN_8c0b9ed4(ar6[6],0x26,0x1b,uVar2);
  }
  FUN_8c099ab8(ar4,ar5,piVar5,uVar2);
  FUN_8c05ee90(ar6[2],ar5,piVar5,uVar2);
  iVar1 = get_field_124_027930(ar6[2],ar5,piVar5,uVar2);
  iVar6 = get_field_40_05eea0(ar4,ar5,piVar5,uVar2);
  if (iVar1 != iVar6) {
    uVar3 = get_field_40_05eea0(ar4,ar5,piVar5,uVar2);
    iVar6 = FUN_8c031b08(ar6[2],uVar3,1,uVar2);
  }
  return iVar6;
}



/* FUN_8c0996c4 @ 8c0996c4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0996c4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x50) = *(char *)(ar4 + 0x50) + -1;
  return 0x50;
}



/* FUN_8c0996dc @ 8c0996dc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0996dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x4c) = (undefined1)ar5;
  return 0x4c;
}



/* FUN_8c0996e4 @ 8c0996e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0996e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x48) = ar5;
  return 0x48;
}



/* ret_const_0_0996ec @ 8c0996ec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_0996ec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* Class_12a7a8_m2_0996f4 @ 8c0996f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a7a8_m2_0996f4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*ar4 + 0xc))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c099714 @ 8c099714 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c099714(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  undefined4 a5;
  int *piVar2;
  int in_stack_ffffffd8;
  
  piVar2 = ar6;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13a884 + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    FUN_8c099914(ar4,ar5,ar6,ar7);
    a5 = 1;
    FUN_8c02f404(ar4,1,piVar2,ar7,in_stack_ffffffd8);
  }
  else {
    in_stack_ffffffd8 = *(int *)(ar4 + 0xc);
    *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(&DAT_8c13a884 + in_stack_ffffffd8 * 4 + ar7 * 0xc)
    ;
    a5 = ar5;
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 2) {
    FUN_8c02f404(ar4,3,piVar2,ar7,in_stack_ffffffd8);
  }
  else if (iVar1 == 4) {
    if (*(int *)(ar4 + 0x8c) == 1) {
      *(undefined1 *)(ar4 + 0x98) = 7;
      *(undefined4 *)(ar4 + 0x8c) = 0;
    }
    FUN_8c099b0c(ar4,ar5,piVar2,ar7);
  }
  else if (iVar1 == 8) {
    iVar1 = (**(code **)(*(int *)(*ar6 + 8) + 0xb4))(*ar6,a5,piVar2,ar7);
    if (iVar1 == 1) {
      iVar1 = *ar6;
      FUN_8c027954(iVar1,a5,piVar2,ar7);
      FUN_8c0c4e2c(iVar1,a5,piVar2,ar7);
    }
  }
  else if ((iVar1 == 0xb) && (*(int *)(ar4 + 0x8c) == 1)) {
    FUN_8c099850(ar6[3],1,piVar2,ar7);
    *(undefined4 *)(ar4 + 0x8c) = 0;
  }
  return 1;
}



/* FUN_8c099850 @ 8c099850 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c099850(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x45) = (undefined1)ar5;
  return 0x45;
}



/* FUN_8c099858 @ 8c099858 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c099858(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  int in_stack_ffffffe4;
  
  if (*(int *)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    FUN_8c0999ac(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    in_stack_ffffffe4 = *(int *)(ar4 + 0xc);
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13a884 + in_stack_ffffffe4 * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 0xc) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 2;
      FUN_8c02f404(ar4,0,ar6_00,ar7,in_stack_ffffffe4);
      ar6 = ar6_00;
    }
    else {
      FUN_8c02f404(ar4,3,ar6_00,ar7,in_stack_ffffffe4);
      FUN_8c099914(ar4,ar5,ar6,ar7);
    }
  }
  iVar1 = *(int *)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = FUN_8c02f404(ar4,2,ar6,ar7,in_stack_ffffffe4);
  }
  return iVar1;
}



/* FUN_8c099914 @ 8c099914 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c099914(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a5;
  int *ar6_00;
  
  a5 = ar5;
  ar6_00 = ar6;
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 4) {
    iVar1 = (*(code *)PTR_FUN_8c09999c)(ar4,ar5,ar6_00,ar7);
  }
  else if ((iVar1 == 8) &&
          (iVar1 = (**(code **)(DAT_8c0999a0 + *(int *)(*ar6 + 8)))(*ar6,a5,ar6_00,ar7), iVar1 == 1)
          ) {
    iVar1 = *ar6;
    (*(code *)PTR_FUN_8c0999a4)(iVar1,a5,ar6_00,ar7);
    iVar1 = (*(code *)PTR_FUN_8c0999a8)(iVar1,a5,ar6_00,ar7);
  }
  return iVar1;
}



/* FUN_8c0999ac @ 8c0999ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined * FUN_8c0999ac(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 ar5_00;
  int *ar6_00;
  undefined4 ar6_01;
  
  iVar2 = *(int *)(ar4 + 0x40);
  puVar1 = (undefined *)0xa;
  if ((iVar2 < 0xb) && (puVar1 = (undefined *)0x1, 0 < iVar2)) {
    puVar1 = (&switchD_8c0999d2::switchdataD_8c0999d8)[iVar2 + -1];
                    /* WARNING: Switch is manually overridden */
    switch(iVar2) {
    case 1:
      *(undefined1 *)(ar4 + 0x98) = 2;
      puVar1 = (undefined *)FUN_8c0c4e2c(ar4,ar5,ar6,ar7);
      break;
    case 3:
      puVar1 = (undefined *)get_field_13c_028d9c(ar6[1],ar5,ar6,ar7);
      if (puVar1 == (undefined *)0x12) {
        ar6_01 = 0x1b;
        ar5_00 = 0x27;
        iVar2 = ar6[6];
        FUN_8c0b9ed4(iVar2,0x27,0x1b,ar7);
        *(undefined1 *)(ar4 + 0x98) = 5;
        puVar1 = (undefined *)FUN_8c0c4e2c(iVar2,ar5_00,ar6_01,ar7);
      }
      break;
    case 4:
      puVar1 = (undefined *)FUN_8c0996dc(ar6[3],1,ar6,ar7);
      break;
    case 8:
      ar6_00 = ar6;
      puVar1 = (undefined *)(**(code **)(*(int *)(*ar6 + 8) + 0xb4))(*ar6,ar5,ar6,ar7);
      if (puVar1 == (undefined *)0x1) {
        iVar2 = *ar6;
        FUN_8c027954(iVar2,ar5,ar6_00,ar7);
        puVar1 = (undefined *)FUN_8c0c4e2c(iVar2,ar5,ar6_00,ar7);
      }
      break;
    case 9:
      *(undefined1 *)(ar4 + 0x98) = 5;
      puVar1 = (undefined *)FUN_8c0c4e2c(ar4,ar5,ar6,ar7);
      break;
    case 10:
      FUN_8c0c4e2c(ar4,ar5,ar6,ar7);
      puVar1 = (undefined *)0x98;
      *(undefined1 *)(ar4 + 0x98) = 5;
    }
  }
  return puVar1;
}



/* FUN_8c099ab8 @ 8c099ab8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c099ab8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  if (*(int *)(ar4 + 4) == 2) {
    (*(code *)PTR_get_field_8_066620_8c099b00)(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c099b04;
  }
  else {
    (*(code *)PTR_get_field_8_066620_8c099b00)(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c099b08;
  }
  return puVar1;
}



/* FUN_8c099b0c @ 8c099b0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c099b0c(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined1 *puVar3;
  undefined4 ar5_01;
  undefined1 *ar6_00;
  undefined1 *a7;
  undefined1 *puVar4;
  char cVar5;
  undefined4 in_stack_ffffff3c;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar5 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_20,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_30,ar5_00,ar6,ar7);
  Vec3_ctor_xyz(auStack_40,ar5_00,ar6,ar7);
  a7 = auStack_a4;
  puVar3 = auStack_a0;
  puVar4 = auStack_9c;
  (**(code **)(*ar5 + 0x120))(ar5,puVar4,puVar3,a7);
  iVar1 = get_field_4_05eed8(ar4,puVar4,puVar3,a7);
  if (((iVar1 != 1) && (iVar1 != 8)) && (iVar1 == 0xb)) {
    iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,5,puVar3,a7);
    if (iVar1 == 0) {
      FUN_8c02f404(ar4,2,puVar3,a7,in_stack_ffffff3c);
      if (cVar5 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0x43fa0000;
        *(undefined4 *)(ar4 + 0x2c) = 0x43fa0000;
        *(undefined4 *)(ar4 + 0x30) = 0x43fa0000;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = 0x10043fa0000;
        *(undefined8 *)(ar4 + 0x2c) = 0x10043fa0000;
        *(undefined8 *)(ar4 + 0x30) = 0x10043fa0000;
      }
    }
    else {
      for (puVar4 = (undefined1 *)0x0; iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,5,puVar3,a7),
          (int)puVar4 < iVar1; puVar4 = puVar4 + 1) {
        uVar2 = (**(code **)(*ar5 + 0x100))(ar5,5,puVar4,a7);
        a7 = auStack_b0;
        ar6_00 = auStack_ac;
        puVar3 = auStack_a8;
        FUN_8c03f414(uVar2,puVar3,ar6_00,a7);
        Vec3_set_xyz(auStack_4c,puVar3,ar6_00,a7);
        vec3_copy_8c02b5fc(auStack_68,auStack_4c,ar6_00,a7);
        FUN_8c023484(auStack_30,auStack_68,ar6_00,a7,auStack_78);
        Vec3_ctor_copy(auStack_5c,auStack_78,ar6_00,a7);
        Vec3_dtor(auStack_78,0xffffffff,ar6_00,a7);
        object_dtor_delete(auStack_68,0xffffffff,ar6_00,a7);
        ar5_01 = 5;
        puVar3 = puVar4;
        uVar2 = (**(code **)(*ar5 + 0x100))(ar5,5,puVar4,a7);
        FUN_8c02f670(uVar2,ar5_01,puVar3,a7,auStack_88);
        Vec3_add(auStack_88,auStack_5c,puVar3,a7,auStack_98);
        Vec3_assign(&uStack_20,auStack_98,puVar3,a7);
        Vec3_dtor(auStack_98,0xffffffff,puVar3,a7);
        Vec3_dtor(auStack_88,0xffffffff,puVar3,a7);
        if (cVar5 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = uStack_20;
          *(undefined4 *)(ar4 + 0x2c) = uStack_1c;
          *(undefined4 *)(ar4 + 0x30) = uStack_18;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = CONCAT44(uStack_1c,uStack_20);
          *(ulonglong *)(ar4 + 0x2c) = CONCAT44(uStack_18,uStack_1c);
          *(ulonglong *)(ar4 + 0x30) = CONCAT44(uStack_14,uStack_18);
        }
        Vec3_dtor(auStack_5c,0xffffffff,puVar3,a7);
        object_dtor_delete(auStack_4c,0xffffffff,puVar3,a7);
      }
    }
  }
  Vec3_dtor(auStack_40,0xffffffff,puVar3,a7);
  Vec3_dtor(auStack_30,0xffffffff,puVar3,a7);
  uVar2 = Vec3_dtor(&uStack_20,0xffffffff,puVar3,a7);
  return uVar2;
}



/* FUN_8c099dbc @ 8c099dbc callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c099dbc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126038,ar5,ar6,ar7);
  uVar3 = 0x8c284700;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284700,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126048,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28470c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28470c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126058,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284718;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284718,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126068,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c284724,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126078 = CONCAT44(_UNK_8c12607c,0x800000);
                    /* WARNING: Read-only address (ram,0x8c12607c) is written */
  }
  else {
    _DAT_8c126078 = 0xffffffff00800000;
  }
  return 0x8c125864;
}



/* s_GRAPHICS_MOTHLINE_099e76 @ 8c099e74 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_MOTHLINE_099e76(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 ar7_00;
  uint in_fr1;
  char cVar2;
  
  cVar2 = '\0';
  ar7_00 = 0x17;
  ar6_00 = 1;
  uVar1 = 0xb;
  FUN_8c0254d0(ar4,0xb,1,0x17,1,ar5,0x8c28476c,0x8c28489c,PTR_s_GRAPHICS_MOTHLINE_8c13a9bc);
  *(undefined **)(ar4 + 8) = &DAT_8c12a7f4;
  FUN_8c016fcc(ar4 + 0x490,uVar1,ar6_00,ar7_00);
  FUN_8c02ff6c(ar4 + 0x530,uVar1,ar6_00,ar7_00);
  FUN_8c030fa0(ar4 + 0x5cc,uVar1,ar6_00,ar7_00);
  FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00,s_MothEgg_8c13aa31);
  *(int *)(ar4 + 0x308) = ar4 + 0x530;
  *(int *)(ar4 + 0x30c) = ar4 + 0x5cc;
  *(undefined1 *)(ar4 + 0x524) = 0xff;
  ar6_01 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(*(int *)(ar4 + 0x328) + 0xb4);
  FUN_8c0f532c(ar4,uVar1,ar6_01,ar7_00);
  FUN_8c027224(ar4 + 0x5cc,uVar1,ar6_01,ar7_00,ar5);
  if (cVar2 != '\0') {
    in_fr1 = 0x40000000;
  }
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,ar6_01,ar7_00);
  *(undefined4 *)(ar4 + 0x330) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x528) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x528) = (ulonglong)in_fr1;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x52c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x52c) = (ulonglong)in_fr1;
  }
  return ar4;
}



/* Class_12a7f4_m0_099fd8 @ 8c099fd8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a7f4_m0_099fd8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a7f4;
    Class_129cbc_m0_0312f4(ar4 + 0x5cc,0xffffffff,ar6,ar7);
    Class_129c24_m0_02ff90(ar4 + 0x530,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12a7f4_m2_09a060 @ 8c09a060 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09a0d0) */
/* WARNING: Removing unreachable block (ram,0x8c09a0c2) */
/* WARNING: Removing unreachable block (ram,0x8c09a0bc) */
/* WARNING: Removing unreachable block (ram,0x8c09a0b2) */
/* WARNING: Removing unreachable block (ram,0x8c09a0ac) */
/* WARNING: Removing unreachable block (ram,0x8c09a09a) */
/* WARNING: Removing unreachable block (ram,0x8c09a090) */
/* WARNING: Removing unreachable block (ram,0x8c09a060) */
/* WARNING: Removing unreachable block (ram,0x8c09a062) */
/* WARNING: Removing unreachable block (ram,0x8c09a098) */
/* WARNING: Removing unreachable block (ram,0x8c09a09c) */
/* WARNING: Removing unreachable block (ram,0x8c09a0b0) */
/* WARNING: Removing unreachable block (ram,0x8c09a0b4) */
/* WARNING: Removing unreachable block (ram,0x8c09a0c0) */
/* WARNING: Removing unreachable block (ram,0x8c09a0ce) */
/* WARNING: Removing unreachable block (ram,0x8c09a44a) */
/* WARNING: Unknown calling convention */

undefined4 Class_12a7f4_m2_09a060(int ar4,uint ar5,undefined4 ar6,int *ar7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *a7;
  float fVar6;
  undefined8 in_dr0;
  float fVar8;
  double dVar7;
  undefined4 in_fr3;
  double dVar9;
  undefined8 in_xd0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
    *(float *)(ar4 + 0x34) = *(float *)(ar4 + 0x34) - *(float *)(ar4 + 0x52c);
    *(float *)(ar4 + 0x52c) = *(float *)(ar4 + 0x52c) + 0.5;
    fVar6 = *(float *)(ar4 + 0x52c);
    in_dr0 = CONCAT44(0x41200000,fVar6);
    if (10.0 < fVar6) {
      in_dr0 = CONCAT44(0x41200000,fVar6);
      *(undefined4 *)(ar4 + 0x52c) = 0x41200000;
    }
  }
  iVar4 = (int)*(char *)(ar4 + 0x524);
  a7 = ar7;
  if ((iVar4 < 4) && (-2 < iVar4)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar4) {
    case 0:
      uVar5 = ar5;
      uVar3 = ar6;
      uVar1 = FUN_8c02602c(ar5,ar5,ar6,ar7);
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar4 = get_field_c_02d1b8(ar4 + 0x21c,uVar5,ar6,a7);
      if (*(int *)(ar4 + 0x330) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10c))(*(int *)(ar4 + 0x330),ar5,ar6,a7)
        ;
        uVar5 = 1;
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),1,ar6,a7);
        FUN_8c036988(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,a7);
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x144))
                  (*(int *)(ar4 + 0x330),uVar5,ar6,a7);
        FUN_8c038a10(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,a7);
      }
      (**(code **)(*ar7 + 0x188))(ar7,uVar5,ar6,a7);
      if (cVar12 == '\0') {
        fVar8 = 40.0;
      }
      else {
        fVar6 = 40.0;
        fVar8 = 4.59626e-43;
      }
      if (cVar11 != '\0' || fVar8 <= fVar6) {
        uVar2 = (**(code **)(*ar7 + 0x148))(ar7,uVar5,ar6,a7);
        uVar2 = FUN_8c035b50(uVar2,uVar5,ar6,a7);
        if ((char)uVar2 < '\x04') {
          ar5 = 0x3c;
          iVar4 = libgcc_divide_helper_0101e4((uVar1 & 0xffff) - iVar4,0x3c,ar6,a7);
          if (0 < iVar4) {
            *(undefined1 *)(ar4 + 0x524) = 1;
            uVar3 = (**(code **)(*ar7 + 0x148))(ar7,ar5,ar6,a7);
            FUN_8c09a540(uVar3,ar5,ar6,a7);
          }
          break;
        }
      }
      uVar5 = FUN_8c028ee4(ar5,uVar5,ar6,a7);
      uVar5 = uVar5 & 0xffff;
      FUN_8c028edc(ar4 + 0x21c,uVar5,ar6,a7,uVar3);
      uVar5 = FUN_8c02602c(ar5,uVar5,ar6,a7);
      ar5 = uVar5 & 0xffff;
      FUN_8c028ed4(ar4 + 0x21c,ar5,ar6,a7,uVar3);
      break;
    case 1:
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10))(*(int *)(ar4 + 0x330),ar5,ar6,ar7);
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),0,ar6,a7);
      ar5 = *(uint *)(ar4 + 0x330);
      (**(code **)(*ar7 + 0x4c))(ar7,ar5,ar6,a7);
      FUN_8c027954(ar4,ar5,ar6,a7);
      *(undefined4 *)(ar4 + 0x330) = 0;
      *(undefined1 *)(ar4 + 0x524) = 2;
    case 2:
      fVar6 = (float)in_dr0;
      if (cVar12 == '\0') {
        fVar6 = *(float *)(ar4 + 0x528);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x528);
      }
      if (cVar11 == '\0') {
        fVar6 = fVar6 + 1.0;
      }
      else {
        fVar6 = SUB84((double)CONCAT44(0x3f800000,fVar6) + (double)CONCAT44(0x3f800000,fVar6),0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x528) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x528) = in_xd0;
      }
      iVar4 = FUN_8c031588(*(undefined4 *)(*(int *)(ar4 + 0x328) + 0xa0),ar5,ar6,a7);
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x528),in_fr3);
      }
      else {
        dVar9 = *(double *)(ar4 + 0x528);
      }
      fVar6 = (float)(iVar4 + -1);
      dVar7 = (double)(ulonglong)(uint)fVar6;
      if (cVar11 == '\0' && fVar6 < 0.0) {
        if (cVar12 == '\0') {
          dVar7 = (double)CONCAT44(0x4f800000,fVar6);
        }
        else {
          dVar7 = -8.508938065399998e+77;
        }
        if (cVar11 == '\0') {
          fVar6 = (float)((ulonglong)dVar7 >> 0x20);
          dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0) + fVar6);
        }
        else {
          dVar7 = dVar7 + dVar7;
        }
      }
      if (cVar11 == '\0') {
        bVar10 = (float)((ulonglong)dVar9 >> 0x20) < SUB84(dVar7,0);
      }
      else {
        bVar10 = dVar9 < dVar7;
      }
      if (!bVar10) {
        *(undefined1 *)(ar4 + 0x524) = 3;
      }
      break;
    case -1:
      uVar3 = ar6;
      uVar5 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
      uVar5 = uVar5 & 0xffff;
      FUN_8c028edc(ar4 + 0x21c,uVar5,ar6,ar7,uVar3);
      uVar5 = FUN_8c02602c(ar5,uVar5,ar6,ar7);
      uVar5 = uVar5 & 0xffff;
      FUN_8c028ed4(ar4 + 0x21c,uVar5,ar6,ar7,uVar3);
      if (*(int *)(ar4 + 0x330) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10c))
                  (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
        uVar5 = 1;
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),1,ar6,ar7);
        FUN_8c036988(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,ar7);
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x144))
                  (*(int *)(ar4 + 0x330),uVar5,ar6,ar7);
        FUN_8c038a10(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,ar7);
      }
      uVar3 = FUN_8c02602c(ar5,uVar5,ar6,ar7);
      ar5 = uVar5;
      a7 = ar7;
      if ((ushort)uVar3 < 5) {
        *(undefined1 *)(ar4 + 0x524) = 0;
      }
    }
  }
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,ar5,ar6,a7);
  FUN_8c0f79b8(ar4 + 0xa0,ar5,ar6,a7);
  return 1;
}



/* FUN_8c09a528 @ 8c09a528 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09a528(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x4d) = *(char *)(ar4 + 0x4d) + -1;
  return 0x4d;
}



/* FUN_8c09a540 @ 8c09a540 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09a540(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x4e) = *(char *)(ar4 + 0x4e) + '\x01';
  return 0x4e;
}



/* Class_12a7f4_m3_09a558 @ 8c09a558 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09a5c8) */
/* WARNING: Removing unreachable block (ram,0x8c09a5ba) */
/* WARNING: Removing unreachable block (ram,0x8c09a5b4) */
/* WARNING: Removing unreachable block (ram,0x8c09a5aa) */
/* WARNING: Removing unreachable block (ram,0x8c09a5a4) */
/* WARNING: Removing unreachable block (ram,0x8c09a592) */
/* WARNING: Removing unreachable block (ram,0x8c09a588) */
/* WARNING: Removing unreachable block (ram,0x8c09a558) */
/* WARNING: Removing unreachable block (ram,0x8c09a55a) */
/* WARNING: Removing unreachable block (ram,0x8c09a590) */
/* WARNING: Removing unreachable block (ram,0x8c09a594) */
/* WARNING: Removing unreachable block (ram,0x8c09a5a8) */
/* WARNING: Removing unreachable block (ram,0x8c09a5ac) */
/* WARNING: Removing unreachable block (ram,0x8c09a5b8) */
/* WARNING: Removing unreachable block (ram,0x8c09a5c6) */
/* WARNING: Removing unreachable block (ram,0x8c09a942) */
/* WARNING: Unknown calling convention */

undefined4 Class_12a7f4_m3_09a558(int ar4,uint ar5,undefined4 ar6,int *ar7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *a7;
  float fVar6;
  undefined8 in_dr0;
  float fVar8;
  double dVar7;
  undefined4 in_fr3;
  double dVar9;
  undefined8 in_xd0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
    *(float *)(ar4 + 0x34) = *(float *)(ar4 + 0x34) - *(float *)(ar4 + 0x52c);
    *(float *)(ar4 + 0x52c) = *(float *)(ar4 + 0x52c) + 0.5;
    fVar6 = *(float *)(ar4 + 0x52c);
    in_dr0 = CONCAT44(0x41200000,fVar6);
    if (10.0 < fVar6) {
      in_dr0 = CONCAT44(0x41200000,fVar6);
      *(undefined4 *)(ar4 + 0x52c) = 0x41200000;
    }
  }
  iVar4 = (int)*(char *)(ar4 + 0x524);
  a7 = ar7;
  if ((iVar4 < 4) && (-2 < iVar4)) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar4) {
    case 0:
      uVar5 = ar5;
      uVar3 = ar6;
      uVar1 = FUN_8c02602c(ar5,ar5,ar6,ar7);
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar4 = get_field_c_02d1b8(ar4 + 0x21c,uVar5,ar6,a7);
      if (*(int *)(ar4 + 0x330) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10c))(*(int *)(ar4 + 0x330),ar5,ar6,a7)
        ;
        uVar5 = 1;
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),1,ar6,a7);
        FUN_8c036988(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,a7);
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x144))
                  (*(int *)(ar4 + 0x330),uVar5,ar6,a7);
        FUN_8c038a10(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,a7);
      }
      (**(code **)(*ar7 + 0x188))(ar7,uVar5,ar6,a7);
      if (cVar12 == '\0') {
        fVar8 = 40.0;
      }
      else {
        fVar6 = 40.0;
        fVar8 = 4.59626e-43;
      }
      if (cVar11 != '\0' || fVar8 <= fVar6) {
        uVar2 = (**(code **)(*ar7 + 0x148))(ar7,uVar5,ar6,a7);
        uVar2 = FUN_8c035b50(uVar2,uVar5,ar6,a7);
        if ((char)uVar2 < '\x04') {
          ar5 = 0x3c;
          iVar4 = libgcc_divide_helper_0101e4((uVar1 & 0xffff) - iVar4,0x3c,ar6,a7);
          if (0 < iVar4) {
            *(undefined1 *)(ar4 + 0x524) = 1;
            uVar3 = (**(code **)(*ar7 + 0x148))(ar7,ar5,ar6,a7);
            FUN_8c09a540(uVar3,ar5,ar6,a7);
          }
          break;
        }
      }
      uVar5 = FUN_8c028ee4(ar5,uVar5,ar6,a7);
      uVar5 = uVar5 & 0xffff;
      FUN_8c028edc(ar4 + 0x21c,uVar5,ar6,a7,uVar3);
      uVar5 = FUN_8c02602c(ar5,uVar5,ar6,a7);
      ar5 = uVar5 & 0xffff;
      FUN_8c028ed4(ar4 + 0x21c,ar5,ar6,a7,uVar3);
      break;
    case 1:
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x14))(*(int *)(ar4 + 0x330),ar5,ar6,ar7);
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),0,ar6,a7);
      ar5 = *(uint *)(ar4 + 0x330);
      (**(code **)(*ar7 + 0x4c))(ar7,ar5,ar6,a7);
      FUN_8c027954(ar4,ar5,ar6,a7);
      *(undefined4 *)(ar4 + 0x330) = 0;
      *(undefined1 *)(ar4 + 0x524) = 2;
    case 2:
      fVar6 = (float)in_dr0;
      if (cVar12 == '\0') {
        fVar6 = *(float *)(ar4 + 0x528);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x528);
      }
      if (cVar11 == '\0') {
        fVar6 = fVar6 + 1.0;
      }
      else {
        fVar6 = SUB84((double)CONCAT44(0x3f800000,fVar6) + (double)CONCAT44(0x3f800000,fVar6),0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x528) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x528) = in_xd0;
      }
      iVar4 = FUN_8c031588(*(undefined4 *)(*(int *)(ar4 + 0x328) + 0xa0),ar5,ar6,a7);
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x528),in_fr3);
      }
      else {
        dVar9 = *(double *)(ar4 + 0x528);
      }
      fVar6 = (float)(iVar4 + -1);
      dVar7 = (double)(ulonglong)(uint)fVar6;
      if (cVar11 == '\0' && fVar6 < 0.0) {
        if (cVar12 == '\0') {
          dVar7 = (double)CONCAT44(0x4f800000,fVar6);
        }
        else {
          dVar7 = -8.508938065399998e+77;
        }
        if (cVar11 == '\0') {
          fVar6 = (float)((ulonglong)dVar7 >> 0x20);
          dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0) + fVar6);
        }
        else {
          dVar7 = dVar7 + dVar7;
        }
      }
      if (cVar11 == '\0') {
        bVar10 = (float)((ulonglong)dVar9 >> 0x20) < SUB84(dVar7,0);
      }
      else {
        bVar10 = dVar9 < dVar7;
      }
      if (!bVar10) {
        *(undefined1 *)(ar4 + 0x524) = 3;
      }
      break;
    case -1:
      uVar3 = ar6;
      uVar5 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
      uVar5 = uVar5 & 0xffff;
      FUN_8c028edc(ar4 + 0x21c,uVar5,ar6,ar7,uVar3);
      uVar5 = FUN_8c02602c(ar5,uVar5,ar6,ar7);
      uVar5 = uVar5 & 0xffff;
      FUN_8c028ed4(ar4 + 0x21c,uVar5,ar6,ar7,uVar3);
      if (*(int *)(ar4 + 0x330) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10c))
                  (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
        uVar5 = 1;
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),1,ar6,ar7);
        FUN_8c036988(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,ar7);
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x144))
                  (*(int *)(ar4 + 0x330),uVar5,ar6,ar7);
        FUN_8c038a10(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,ar7);
      }
      uVar3 = FUN_8c02602c(ar5,uVar5,ar6,ar7);
      ar5 = uVar5;
      a7 = ar7;
      if ((ushort)uVar3 < 5) {
        *(undefined1 *)(ar4 + 0x524) = 0;
      }
    }
  }
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,ar5,ar6,a7);
  FUN_8c0f79b8(ar4 + 0xa0,ar5,ar6,a7);
  return 1;
}



/* ret_const_1_09aa20 @ 8c09aa20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_09aa20(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* Class_12a7f4_m6_09aa28 @ 8c09aa28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a7f4_m6_09aa28(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c09aa44)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* Class_12a7f4_m5_09aa48 @ 8c09aa48 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
Class_12a7f4_m5_09aa48(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_4;
  
  iVar1 = -DAT_8c09aa7c;
  *(undefined4 *)((int)&uStack_4 + iVar1) = ar4;
  (*(code *)PTR_FUN_8c09aa80)((int)&s0 + iVar1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09aa84)(*(undefined4 *)((int)&uStack_4 + iVar1),(int)&s0 + iVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c09aa88)((int)&s0 + iVar1,0xffffffff,ar6,ar7);
  return uVar2;
}



/* Class_12a7f4_m4_09aa8c @ 8c09aa8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a7f4_m4_09aa8c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c09aaa8)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09aaac @ 8c09aaac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09aaac(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c09aac4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_09aac8 @ 8c09aac8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_09aac8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_09aacc @ 8c09aacc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_09aacc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c09aad0 @ 8c09aad0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09aad0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_01;
  int ar5_01;
  char cVar4;
  char cVar5;
  undefined4 in_stack_ffffffec;
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffec);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_ffffffec);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_01 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_01 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_01 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(0,ar5_01,ar6_01,ar7_00,in_stack_ffffffec);
  FUN_8c256fec(0,ar5_01,ar6_01,ar7_00,in_stack_ffffffec);
  uVar1 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5_01,ar6_01,ar7_00);
  ar5_00 = deref_u32(*(undefined4 *)(*(int *)(ar4 + 0x328) + 0xa0),ar5_01,ar6_01,ar7_00);
  ar6_00 = FUN_8c026d74(*(undefined4 *)(*(int *)(ar4 + 0x328) + 0xa8),ar5_01,ar6_01,ar7_00);
  FUN_8c21bbb0(uVar1,ar5_00,ar6_00,ar7_00,ar6_00);
  uVar1 = FUN_8c256210(1,ar5_00,ar6_00,ar7_00);
  return uVar1;
}



/* FUN_8c09abfc @ 8c09abfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09abfc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09ac48)(*(int *)(DAT_8c09ac44 + ar4) + 0x78,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09ac4c)(*(int *)(DAT_8c09ac44 + ar4) + 0x70,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ac50)(uVar1,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c09ac54 + ar4) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(DAT_8c09ac54 + ar4) + 8) + 0x3c))
                      (*(int *)(DAT_8c09ac54 + ar4),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c09ac58 @ 8c09ac58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ac58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x3c))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09ac70 @ 8c09ac70 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ac70(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  noop_038c8c(ar4,ar5,ar6,ar7,in_PR);
  uVar1 = 0;
  if (*(int *)(ar4 + 0x330) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x5c))
                      (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c09aca8 @ 8c09aca8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09aca8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  undefined4 uVar1;
  
  a6 = (*(code *)PTR_s_Shell_0fef9c_8c09acec)(ar5,10,0x11,ar7);
  uVar1 = 0;
  if (a6 != 0) {
    uVar1 = (**(code **)(DAT_8c09acf0 + *(int *)(ar4 + 8)))(ar4,0,a6,ar7);
  }
  return uVar1;
}



/* FUN_8c09acf4 @ 8c09acf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09acf4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c09acfc;
  *(undefined4 *)(DAT_8c09acfc + ar4) = ar6;
  return iVar1;
}



/* FUN_8c09ad00 @ 8c09ad00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ad00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(DAT_8c09ad2c + ar4) != 0) {
    uVar1 = (*(code *)PTR_FUN_8c09ad30)(ar5,ar4 + DAT_8c09ad2c,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c09ad34 @ 8c09ad34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ad34(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09ad7c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ad84)(ar4 + DAT_8c09ad80,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09ad90)(ar4 + DAT_8c09ad8c,ar5 + DAT_8c09ad88,ar6,ar7);
  return uVar1;
}



/* FUN_8c09ad94 @ 8c09ad94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ad94(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09add8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ade0)(ar4 + DAT_8c09addc,ar5 + 0x24,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09ade8)(ar4 + DAT_8c09ade4,ar5 + 0x58,ar6,ar7);
  return uVar1;
}



/* FUN_8c09adec @ 8c09adec callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09adec(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09ae34)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ae3c)(ar4 + DAT_8c09ae38,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09ae48)(ar4 + DAT_8c09ae44,ar5 + DAT_8c09ae40,ar6,ar7);
  return uVar1;
}



/* FUN_8c09ae4c @ 8c09ae4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ae4c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09ae90)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09ae98)(ar4 + DAT_8c09ae94,ar5 + 0x24,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09aea0)(ar4 + DAT_8c09ae9c,ar5 + 0x58,ar6,ar7);
  return uVar1;
}



/* s_CMothEgg_LoadGRReq_09aeaa @ 8c09aea4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_CMothEgg_LoadGRReq_09aeaa(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(DAT_8c09af4c + ar4) == 0) {
    iVar1 = (*(code *)PTR_s_Failed_to_load_Pack_CAnimal__027a86_8c09af50)(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(DAT_8c09af4c + ar4) = 1;
    }
  }
  else if (*(int *)(DAT_8c09af4c + ar4) == 1) {
    if (*(int *)(DAT_8c09af54 + ar4) == 0) {
      (*(code *)PTR_report_error_message_8c09af5c)
                (PTR_s_GRAPHICS_COMMON_8c09af58 + 0x69,PTR_s_GRAPHICS_COMMON_8c09af58 + 0x7b,0,2);
      *(undefined4 *)(DAT_8c09af4c + ar4) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)(DAT_8c09af60 + *(int *)(*(int *)(DAT_8c09af54 + ar4) + 8)))
                        (*(int *)(DAT_8c09af54 + ar4),ar5,0,ar7);
      if (iVar1 == 1) {
        *(undefined2 *)(DAT_8c09af64 + ar4) = 0;
        *(undefined4 *)(DAT_8c09af4c + ar4) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



/* FUN_8c09af68 @ 8c09af68 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09af68(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_s_Failed_to_Load_CAnimal_LoadG_0284b8_8c09afac)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c09afb0 + ar4) != 0) {
    uVar1 = (**(code **)(DAT_8c09afb4 + *(int *)(*(int *)(DAT_8c09afb0 + ar4) + 8)))
                      (*(int *)(DAT_8c09afb0 + ar4),ar5,0,ar7);
  }
  return uVar1;
}



/* FUN_8c09afb8 @ 8c09afb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09afb8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09affc)(ar4,ar5,ar6,ar7);
  uVar1 = 0;
  if (*(int *)(DAT_8c09b000 + ar4) != 0) {
    uVar1 = (**(code **)(DAT_8c09b004 + *(int *)(*(int *)(DAT_8c09b000 + ar4) + 8)))
                      (*(int *)(DAT_8c09b000 + ar4),ar5,0,ar7);
  }
  return uVar1;
}



/* s_Cpe_Home_nj_09b008 @ 8c09b008 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09b11e) */
/* WARNING: Removing unreachable block (ram,0x8c09b134) */
/* WARNING: Removing unreachable block (ram,0x8c09b106) */
/* WARNING: Removing unreachable block (ram,0x8c09b14e) */
/* WARNING: Removing unreachable block (ram,0x8c09b11c) */
/* WARNING: Removing unreachable block (ram,0x8c09b136) */
/* WARNING: Removing unreachable block (ram,0x8c09b14c) */
/* WARNING: Unknown calling convention */

undefined4 s_Cpe_Home_nj_09b008(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined ***)(iVar1 * 0x124 + -0x73d7b890) = &PTR_s_Cpe_BeCatapillar_njm_8c13a9c8;
    *(undefined ***)(iVar1 * 0x124 + -0x73d7b88c) = &PTR_s_Cpe_BeCatapillar_njs_8c13a9cc;
    *(undefined **)(iVar1 * 0x124 + -0x73d7b888) = PTR_s_Cpe_Home_nj_8c13a9c0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b884) = 0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7b880) = PTR_s_MOTH_EGG_8c13a9c4;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b87c) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7f4) = 0x8c2848b8;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7b7f0) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7ec) = 0x8c2848c8;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7b7e8) = 1;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7e0) = 0x8c2849b8;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7d8) = 0x3f800000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7c8) = 0x3ca3d70a;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7c4) = 0x3f4ccccd;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b7c0) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(iVar1 * 0x10 + -0x73d7b764) = 0xffff;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7b760) = 0;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7b75c) = 1;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7b758) = 0;
  }
  return 1;
}



/* ret_const_1_09b208 @ 8c09b208 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_09b208(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c09b210 @ 8c09b210 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c09b210(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126080,ar5,ar6,ar7);
  uVar3 = 0x8c284730;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284730,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126090,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28473c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28473c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1260a0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284748;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284748,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1260b0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284754;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284754,ar7);
  if (cVar4 == '\0') {
    _DAT_8c1260c0 = CONCAT44(_UNK_8c1260c4,0x800000);
                    /* WARNING: Read-only address (ram,0x8c1260c4) is written */
  }
  else {
    _DAT_8c1260c0 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c02452c(0x8c28476c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284760;
  pcVar2 = FUN_8c03a4ac;
  global_list_push(uVar1,FUN_8c03a4ac,0x8c284760,ar7);
  uVar1 = FUN_8c024824(0x8c28489c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284890;
  pcVar2 = free_if_nonnull_wrap_03a454;
  global_list_push(uVar1,free_if_nonnull_wrap_03a454,0x8c284890,ar7);
  uVar1 = FUN_8c015b94(0x8c2848b8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2848ac;
  pcVar2 = free_if_nonnull_wrap_0247b0;
  global_list_push(uVar1,free_if_nonnull_wrap_0247b0,0x8c2848ac,ar7);
  uVar1 = FUN_8c015bc8(0x8c2848c8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2848bc;
  pcVar2 = free_if_nonnull_wrap_03a3dc;
  global_list_push(uVar1,free_if_nonnull_wrap_03a3dc,0x8c2848bc,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c2848d8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2848cc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2848cc,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c2848f4,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2848e8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2848e8,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284910,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284904;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284904,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c28492c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284920;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284920,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284948,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28493c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28493c,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284964,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284958;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284958,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284980,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284974;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284974,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c28499c,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c284990,ar7);
  uVar3 = 0x8c284910;
  uVar1 = FUN_8c017010(0x8c2849b8,0x8c2848d8,0x8c2848f4,0x8c284910,0x8c28492c,0x8c284948,0x8c284964,
                       0x8c284980,0x8c28499c);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c2849ac,uVar3);
  return uVar1;
}



/* FUN_8c09b508 @ 8c09b508 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09b508(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c09b53c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09b53c)(ar4 + 0xc,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09b53c)(ar4 + 0x18,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09b540)(ar4,ar5,ar6,ar7);
  return ar4;
}



/* FUN_8c09b544 @ 8c09b544 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09b646) */
/* WARNING: Removing unreachable block (ram,0x8c09b616) */
/* WARNING: Removing unreachable block (ram,0x8c09b5be) */
/* WARNING: Removing unreachable block (ram,0x8c09b58e) */
/* WARNING: Removing unreachable block (ram,0x8c09b56c) */
/* WARNING: Removing unreachable block (ram,0x8c09b59e) */
/* WARNING: Removing unreachable block (ram,0x8c09b5dc) */
/* WARNING: Removing unreachable block (ram,0x8c09b626) */
/* WARNING: Removing unreachable block (ram,0x8c09b664) */
/* WARNING: Unknown calling convention */

float * FUN_8c09b544(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  int iVar2;
  undefined8 *ar4_00;
  float fVar3;
  double dVar4;
  float fVar7;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  pfVar1 = *(float **)((int)ar4 + 0x24);
  if ((int)pfVar1 <= *(int *)((int)ar4 + 0x2c) - *(int *)(ar4 + 5)) {
    *(undefined4 *)(ar4 + 5) = *(undefined4 *)((int)ar4 + 0x2c);
    ar4_00 = ar4;
    iVar2 = rand(ar4,ar5,ar6,ar7);
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
    }
    else {
      dVar4 = 2.0716562097687757e+17;
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(0x43870000,fVar3);
    }
    else {
      dVar4 = 85899363207.0;
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(0x42340000,fVar3);
    }
    else {
      dVar4 = 3.051758565142393e-05;
    }
    if (cVar8 == '\0') {
      fVar7 = (float)((ulonglong)dVar4 >> 0x20);
      fVar3 = SUB84(dVar4,0) + fVar7;
      dVar4 = (double)CONCAT44(fVar7,fVar3);
      iVar2 = (int)fVar3;
    }
    else {
      dVar4 = dVar4 + dVar4;
      iVar2 = (int)dVar4;
    }
    *(int *)((int)ar4 + 0x24) = iVar2;
    if (cVar9 == '\0') {
      dVar4 = (double)(ulonglong)*(uint *)(ar4 + 3);
    }
    else {
      in_xd0 = ar4[3];
    }
    uVar5 = (ulonglong)dVar4 & 0xffffffff;
    if (SUB84(dVar4,0) == 0.0) {
      iVar2 = rand(ar4_00,ar5,ar6,ar7);
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
      }
      else {
        dVar4 = 2.0716562097687757e+17;
      }
      if (cVar8 == '\0') {
        fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar9 == '\0') {
        uVar5 = CONCAT44(0x3f000000,fVar3);
      }
      else {
        uVar5 = 0x3e0f5c293f000000;
      }
      if (cVar8 == '\0' && (float)uVar5 < (float)(uVar5 >> 0x20)) {
        iVar2 = rand(ar4_00,ar5,ar6,ar7);
        if (cVar9 == '\0') {
          dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
        }
        else {
          dVar4 = 2.0716562097687757e+17;
        }
        if (cVar8 == '\0') {
          fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 / dVar4,0);
        }
        if (cVar9 == '\0') {
          dVar4 = (double)CONCAT44(0x3e0f5c29,fVar3);
        }
        else {
          dVar4 = 0.0036718756750633475;
        }
        if (cVar8 == '\0') {
          fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 * dVar4,0);
        }
        if (cVar9 == '\0') {
          dVar4 = (double)CONCAT44(0x3f6e147b,fVar3);
        }
        else {
          dVar4 = 1.971999614954473e-24;
        }
        if (cVar8 == '\0') {
          fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 + dVar4,0);
        }
        if (cVar9 == '\0') {
          *(float *)((int)ar4 + 0xc) = fVar3;
          fVar3 = *(float *)((int)ar4 + 0xc);
        }
        else {
          *(undefined8 *)((int)ar4 + 0xc) = in_xd0;
          in_xd0 = *(undefined8 *)((int)ar4 + 0xc);
        }
        if (fVar3 == 1.0) {
          if (cVar9 == '\0') {
            *(undefined4 *)((int)ar4 + 0xc) = 0x3f6e147b;
          }
          else {
            *(undefined8 *)((int)ar4 + 0xc) = 0x3b03126f3f6e147b;
          }
        }
        if (cVar9 == '\0') {
          uVar6 = CONCAT44(*(undefined4 *)ar4,*(undefined4 *)((int)ar4 + 0xc));
        }
        else {
          in_xd0 = *(undefined8 *)((int)ar4 + 0xc);
          uVar6 = *ar4;
        }
        fVar3 = (float)uVar6;
        if (cVar8 != '\0' || fVar3 <= (float)((ulonglong)uVar6 >> 0x20)) {
          if (cVar9 == '\0') {
            uVar5 = CONCAT44(0xbb03126f,fVar3);
            *(undefined4 *)(ar4 + 3) = 0xbb03126f;
          }
          else {
            uVar5 = 0x4f222fe6bb03126f;
            ar4[3] = 0x4f222fe6bb03126f;
          }
        }
        else if (cVar9 == '\0') {
          uVar5 = CONCAT44(0x3b03126f,fVar3);
          *(undefined4 *)(ar4 + 3) = 0x3b03126f;
        }
        else {
          uVar5 = 0xbb03126f3b03126f;
          ar4[3] = 0xbb03126f3b03126f;
        }
      }
    }
    fVar3 = (float)uVar5;
    pfVar1 = (float *)((int)ar4 + 0x1c);
    if (cVar9 == '\0') {
      fVar3 = *pfVar1;
    }
    else {
      in_xd0 = *(undefined8 *)pfVar1;
    }
    if (fVar3 == 0.0) {
      iVar2 = rand(ar4_00,ar5,ar6,ar7);
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
      }
      else {
        dVar4 = 2.0716562097687757e+17;
      }
      if (cVar8 == '\0') {
        fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      pfVar1 = (float *)&DAT_8c09b6b0;
      if (cVar9 == '\0') {
        fVar7 = 0.5;
      }
      else {
        fVar3 = 0.5;
        fVar7 = 0.14;
      }
      if (cVar8 == '\0' && fVar3 < fVar7) {
        iVar2 = rand(ar4_00,ar5,ar6,ar7);
        if (cVar9 == '\0') {
          dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
        }
        else {
          dVar4 = 2.0716562097687757e+17;
        }
        if (cVar8 == '\0') {
          fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 / dVar4,0);
        }
        if (cVar9 == '\0') {
          dVar4 = (double)CONCAT44(0x3e0f5c29,fVar3);
        }
        else {
          dVar4 = 0.0036718756750633475;
        }
        if (cVar8 == '\0') {
          fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 * dVar4,0);
        }
        if (cVar9 == '\0') {
          dVar4 = (double)CONCAT44(0x3f6e147b,fVar3);
        }
        else {
          dVar4 = 1.971999614954473e-24;
        }
        if (cVar8 == '\0') {
          fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 + dVar4,0);
        }
        if (cVar9 == '\0') {
          *(float *)(ar4 + 2) = fVar3;
          fVar3 = *(float *)(ar4 + 2);
        }
        else {
          ar4[2] = in_xd0;
        }
        if (fVar3 == 1.0) {
          if (cVar9 == '\0') {
            *(undefined4 *)(ar4 + 2) = 0x3f6e147b;
          }
          else {
            ar4[2] = 0x3b03126f3f6e147b;
          }
        }
        if (cVar9 == '\0') {
          uVar6 = CONCAT44(*(undefined4 *)((int)ar4 + 4),*(undefined4 *)(ar4 + 2));
        }
        else {
          uVar6 = *(undefined8 *)((int)ar4 + 4);
        }
        if (cVar8 != '\0' || (float)uVar6 <= (float)((ulonglong)uVar6 >> 0x20)) {
          pfVar1 = (float *)&DAT_8c09b6c0;
          if (cVar9 == '\0') {
            *(undefined4 *)((int)ar4 + 0x1c) = 0xbb03126f;
          }
          else {
            *(undefined8 *)((int)ar4 + 0x1c) = 0x4f222fe6bb03126f;
          }
        }
        else {
          pfVar1 = (float *)&DAT_8c09b6bc;
          if (cVar9 == '\0') {
            *(undefined4 *)((int)ar4 + 0x1c) = 0x3b03126f;
          }
          else {
            *(undefined8 *)((int)ar4 + 0x1c) = 0xbb03126f3b03126f;
          }
        }
      }
    }
  }
  return pfVar1;
}



/* FUN_8c09b6c4 @ 8c09b6c4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09b732) */
/* WARNING: Removing unreachable block (ram,0x8c09b6d0) */
/* WARNING: Removing unreachable block (ram,0x8c09b7e2) */
/* WARNING: Unknown calling convention */

float FUN_8c09b6c4(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *ar4_00;
  float fVar1;
  ulonglong in_dr0;
  ulonglong uVar2;
  double dVar3;
  float fVar4;
  ulonglong in_xd0;
  char cVar5;
  char cVar6;
  undefined4 in_stack_ffffffdc;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar4_00 = ar4;
  FUN_8c010e38(ar4,ar5,ar6,ar7,in_stack_ffffffdc);
  if (cVar6 == '\0') {
    uVar2 = CONCAT44(0x3b03126f,(int)(in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    uVar2 = 0x4f222fe63b03126f;
  }
  if (cVar5 != '\0' || (float)(uVar2 >> 0x20) <= (float)uVar2) {
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44(ar4[6],*ar4);
    }
    else {
      in_dr0 = *(ulonglong *)ar4;
      dVar3 = *(double *)(ar4 + 6);
    }
    if (cVar5 == '\0') {
      fVar1 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar6 == '\0') {
      *ar4 = fVar1;
      fVar1 = ar4[6];
    }
    else {
      *(ulonglong *)ar4 = in_dr0;
      in_dr0 = *(ulonglong *)(ar4 + 6);
    }
    uVar2 = (ulonglong)(uint)fVar1;
    if (cVar5 == '\0' && fVar1 < 0.0) {
LAB_8c09b712:
      fVar1 = (float)uVar2;
      if (cVar6 == '\0') {
        fVar1 = ar4[6];
      }
      else {
        in_dr0 = *(ulonglong *)(ar4 + 6);
      }
      uVar2 = (ulonglong)(uint)fVar1;
      if (cVar5 == '\0' && fVar1 < 0.0) {
        if (cVar6 == '\0') {
          uVar2 = CONCAT44(ar4[3],*ar4);
        }
        else {
          in_dr0 = *(ulonglong *)ar4;
          uVar2 = *(ulonglong *)(ar4 + 3);
        }
        if (cVar5 == '\0' && (float)uVar2 < (float)(uVar2 >> 0x20)) goto LAB_8c09b72a;
      }
    }
    else {
      if (cVar6 == '\0') {
        uVar2 = CONCAT44(ar4[3],*ar4);
      }
      else {
        in_dr0 = *(ulonglong *)ar4;
        uVar2 = *(ulonglong *)(ar4 + 3);
      }
      if (cVar5 == '\0' && (float)uVar2 < (float)(uVar2 >> 0x20)) goto LAB_8c09b712;
LAB_8c09b72a:
      fVar1 = (float)uVar2;
      if (cVar6 == '\0') {
        fVar1 = ar4[3];
      }
      else {
        in_dr0 = *(ulonglong *)(ar4 + 3);
      }
      if (fVar1 == 1.0) {
        if (cVar6 == '\0') {
          ar4[3] = 1.0;
          *ar4 = 1.0;
        }
        else {
          *(ulonglong *)(ar4 + 3) = CONCAT44(0x3f800000,fVar1);
          *(ulonglong *)ar4 = CONCAT44(0x3f800000,fVar1);
        }
        uVar2 = (ulonglong)(uint)fVar1;
        if (cVar6 == '\0') {
          ar4[6] = 0.0;
        }
        else {
          *(ulonglong *)(ar4 + 6) = uVar2;
        }
      }
      else {
        if (cVar6 == '\0') {
          dVar3 = (double)CONCAT44(ar4[6],fVar1);
        }
        else {
          dVar3 = *(double *)(ar4 + 6);
        }
        if (cVar5 == '\0') {
          dVar3 = (double)CONCAT44(-(float)((ulonglong)dVar3 >> 0x20),SUB84(dVar3,0));
        }
        else {
          dVar3 = -dVar3;
        }
        if (cVar6 == '\0') {
          ar4[6] = (float)((ulonglong)dVar3 >> 0x20);
        }
        else {
          *(double *)(ar4 + 6) = dVar3;
        }
        uVar2 = CONCAT44(0x3f800000,SUB84(dVar3,0));
        if (cVar6 == '\0') {
          ar4[3] = 1.0;
        }
        else {
          *(ulonglong *)(ar4 + 3) = uVar2;
        }
      }
    }
  }
  FUN_8c010e38(ar4_00,ar5,ar6,ar7,in_stack_ffffffdc);
  fVar1 = (float)(uVar2 >> 0x20);
  if (cVar6 == '\0') {
    fVar4 = 0.002;
    uVar2 = in_dr0;
  }
  else {
    fVar1 = 0.002;
    fVar4 = 2.721048e+09;
  }
  if (cVar5 == '\0' && fVar1 < fVar4) goto LAB_8c09b826;
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(ar4[7],ar4[1]);
  }
  else {
    uVar2 = *(ulonglong *)(ar4 + 1);
    dVar3 = *(double *)(ar4 + 7);
  }
  if (cVar5 == '\0') {
    fVar1 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar6 == '\0') {
    ar4[1] = fVar1;
    fVar1 = ar4[7];
  }
  else {
    *(ulonglong *)(ar4 + 1) = uVar2;
  }
  uVar2 = (ulonglong)(uint)fVar1;
  if (cVar5 == '\0' && fVar1 < 0.0) {
LAB_8c09b7be:
    fVar1 = (float)uVar2;
    if (cVar6 == '\0') {
      fVar1 = ar4[7];
    }
    if (cVar5 != '\0' || 0.0 <= fVar1) goto LAB_8c09b826;
    if (cVar6 == '\0') {
      uVar2 = CONCAT44(ar4[4],ar4[1]);
    }
    else {
      uVar2 = *(ulonglong *)(ar4 + 4);
    }
    if (cVar5 != '\0' || (float)(uVar2 >> 0x20) <= (float)uVar2) goto LAB_8c09b826;
  }
  else {
    if (cVar6 == '\0') {
      uVar2 = CONCAT44(ar4[4],ar4[1]);
    }
    else {
      uVar2 = *(ulonglong *)(ar4 + 4);
    }
    if (cVar5 == '\0' && (float)uVar2 < (float)(uVar2 >> 0x20)) goto LAB_8c09b7be;
  }
  fVar1 = (float)uVar2;
  if (cVar6 == '\0') {
    fVar1 = ar4[4];
  }
  if (fVar1 == 1.0) {
    if (cVar6 == '\0') {
      ar4[4] = 1.0;
      ar4[1] = 1.0;
    }
    else {
      *(ulonglong *)(ar4 + 4) = CONCAT44(0x3f800000,fVar1);
      *(ulonglong *)(ar4 + 1) = CONCAT44(0x3f800000,fVar1);
    }
    if (cVar6 == '\0') {
      ar4[7] = 0.0;
    }
    else {
      *(ulonglong *)(ar4 + 7) = (ulonglong)(uint)fVar1;
    }
  }
  else {
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44(ar4[7],fVar1);
    }
    else {
      dVar3 = *(double *)(ar4 + 7);
    }
    if (cVar5 == '\0') {
      dVar3 = (double)CONCAT44(-(float)((ulonglong)dVar3 >> 0x20),SUB84(dVar3,0));
    }
    else {
      dVar3 = -dVar3;
    }
    if (cVar6 == '\0') {
      ar4[7] = (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 7) = dVar3;
    }
    if (cVar6 == '\0') {
      ar4[4] = 1.0;
    }
    else {
      *(ulonglong *)(ar4 + 4) = CONCAT44(0x3f800000,SUB84(dVar3,0));
    }
  }
LAB_8c09b826:
  fVar1 = ar4[0xb];
  ar4[0xb] = (float)((int)fVar1 + 1);
  return (float)((int)fVar1 + 1);
}



/* FUN_8c09b844 @ 8c09b844 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09b844(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c09b884)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09b884)(ar4 + 0xc,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09b888)(ar4 + 0x18,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x24) = 0x2d;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  return 0;
}



/* FUN_8c09b88c @ 8c09b88c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09b88c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_016ac4(ar4 + 0x18,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016ac4(ar4 + 0xc,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_016ac4(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* s_GRAPHICS_MUSHROOMERLINE_09b8e8 @ 8c09b8e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_MUSHROOMERLINE_09b8e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *ar5_00;
  undefined4 uVar2;
  code *ar6_00;
  int iVar3;
  undefined4 ar7_00;
  uint in_fr1;
  ulonglong uVar4;
  char cVar5;
  
  cVar5 = '\0';
  ar7_00 = 0;
  uVar2 = 1;
  uVar1 = 0;
  FUN_8c0254d0(ar4,0,1,0,0,ar5,0x8c284a8c,0x8c284bbc,PTR_s_GRAPHICS_MUSHROOMERLINE_8c13aa6c);
  *(undefined **)(ar4 + 8) = &DAT_8c12a990;
  FUN_8c016fcc(ar4 + 0x490,uVar1,uVar2,ar7_00);
  FUN_8c010120(ar4 + 0x544,Vec3_ctor_zero,Vec3_dtor,0x10,8);
  FUN_8c010120(ar4 + 0x5c4,Vec3_ctor_zero,Vec3_dtor,0x10,8);
  uVar2 = 0x10;
  ar6_00 = Vec3_dtor;
  ar5_00 = Vec3_ctor_zero;
  FUN_8c010120(ar4 + 0x644,Vec3_ctor_zero,Vec3_dtor,0x10,8);
  FUN_8c02ff6c(ar4 + 0x6e4,ar5_00,ar6_00,uVar2);
  FUN_8c030fa0(ar4 + 0x780,ar5_00,ar6_00,uVar2);
  FUN_8c09b508(ar4 + 0x9a4,ar5_00,ar6_00,uVar2);
  FUN_8c014334(ar4 + 0xc,ar5_00,ar6_00,uVar2,s_MushroomerEgg_8c13aabd);
  *(undefined1 *)(ar4 + 0x6e0) = 0xff;
  iVar3 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(*(int *)(ar4 + 0x328) + 0xb4);
  FUN_8c0f532c(ar4,uVar1,iVar3,uVar2);
  FUN_8c027224(ar4 + 0x780,uVar1,iVar3,uVar2,ar5);
  if (cVar5 != '\0') {
    in_fr1 = 0x40000000;
  }
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,iVar3,uVar2);
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined4 *)(ar4 + iVar3 * 4 + 0x524) = 0;
  }
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  *(int *)(ar4 + 0x308) = ar4 + 0x6e4;
  *(int *)(ar4 + 0x30c) = ar4 + 0x780;
  if (cVar5 == '\0') {
    *(undefined4 *)(ar4 + 0x6c4) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x6c4) = (ulonglong)in_fr1;
  }
  *(undefined1 *)(ar4 + 0x9a0) = 0;
  if (cVar5 == '\0') {
    *(undefined4 *)(ar4 + 0x6c8) = 0;
    *(undefined4 *)(ar4 + 0x6cc) = 0x3e4ccccd;
    uVar4 = CONCAT44(0x3dcccccd,in_fr1);
    *(undefined4 *)(ar4 + 0x6d0) = 0x3dcccccd;
  }
  else {
    *(ulonglong *)(ar4 + 0x6c8) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x6cc) = 0x6d03e4ccccd;
    uVar4 = 0x6d43dcccccd;
    *(undefined8 *)(ar4 + 0x6d0) = 0x6d43dcccccd;
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(ar4 + 0x6d4) = 0;
    *(undefined4 *)(ar4 + 0x6d8) = 0x3e4ccccd;
    *(undefined4 *)(ar4 + 0x6dc) = 0x3dcccccd;
  }
  else {
    *(ulonglong *)(ar4 + 0x6d4) = uVar4 & 0xffffffff;
    *(undefined8 *)(ar4 + 0x6d8) = 0x6d03e4ccccd;
    *(undefined8 *)(ar4 + 0x6dc) = 0x6d43dcccccd;
  }
  *(undefined4 *)(ar4 + 0x9d4) = 0;
  return ar4;
}



/* Class_12a990_m0_09bb44 @ 8c09bb44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a990_m0_09bb44(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a990;
    FUN_8c09b88c(ar4 + 0x9a4,0xffffffff,ar6,ar7);
    Class_129cbc_m0_0312f4(ar4 + 0x780,0xffffffff,ar6,ar7);
    Class_129c24_m0_02ff90(ar4 + 0x6e4,0xffffffff,ar6,ar7);
    vec_delete_array(ar4 + 0x644,Vec3_dtor,0x10,8,ain0);
    vec_delete_array(ar4 + 0x5c4,Vec3_dtor,0x10,8,ain0);
    ar7_00 = 8;
    ar6_00 = 0x10;
    vec_delete_array(ar4 + 0x544,Vec3_dtor,0x10,8,ain0);
    Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}



/* Class_12a990_m2_09bc2c @ 8c09bc2c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09c104) */
/* WARNING: Removing unreachable block (ram,0x8c09bc2c) */
/* WARNING: Removing unreachable block (ram,0x8c09c442) */
/* WARNING: Unknown calling convention */

undefined4 Class_12a990_m2_09bc2c(int ar4,float *ar5,code *ar6,code *ar7)

{
  char cVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  code *pcVar8;
  code *pcVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  double dVar13;
  float fVar14;
  undefined8 in_dr2;
  double dVar15;
  undefined8 in_xd0;
  bool bVar16;
  char cVar17;
  char cVar18;
  undefined2 uVar19;
  undefined4 in_stack_ffffff20;
  
  cVar18 = '\0';
  cVar17 = '\0';
  pfVar7 = (float *)0x0;
  cVar1 = *(char *)(ar4 + 0x6e0);
  pcVar9 = ar7;
  if (cVar1 == -1) {
    pcVar8 = ar6;
    uVar2 = FUN_8c028ee4(ar5,0,ar6,ar7);
    uVar2 = uVar2 & 0xffff;
    FUN_8c028edc(ar4 + 0x21c,uVar2,pcVar8,pcVar9,in_stack_ffffff20);
    uVar2 = FUN_8c02602c(ar5,uVar2,pcVar8,pcVar9);
    FUN_8c028ed4(ar4 + 0x21c,uVar2 & 0xffff,pcVar8,pcVar9,in_stack_ffffff20);
    pcVar8 = (code *)0x0;
    pfVar7 = (float *)0x4;
    FUN_8c0b9ed4(ar5,4,0,pcVar9);
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
      if (*(int *)(ar4 + iVar5 * 4 + 0x524) != 0) {
        iVar10 = *(int *)(ar4 + iVar5 * 4 + 0x524);
        pfVar7 = ar5;
        (**(code **)(*(int *)(iVar10 + 8) + 0x10c))(iVar10,ar5,pcVar8,pcVar9);
      }
    }
    if (cVar18 == '\0') {
      *(undefined4 *)(ar4 + 0x6cc) = 0x3e4ccccd;
      *(undefined4 *)(ar4 + 0x6d0) = 0x3dcccccd;
    }
    else {
      *(undefined8 *)(ar4 + 0x6cc) = 0x6d03e4ccccd;
      *(undefined8 *)(ar4 + 0x6d0) = 0x6e03dcccccd;
    }
    *(undefined1 *)(ar4 + 0x6e0) = 0;
  }
  else {
    pcVar8 = ar6;
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        uVar4 = FUN_8c02602c(ar5,0,ar6,ar7);
        uVar2 = CONCAT22((short)((uint)in_stack_ffffff20 >> 0x10),(short)uVar4);
        iVar5 = get_field_c_02d1b8(ar4 + 0x21c,pfVar7,pcVar8,pcVar9);
        iVar5 = (uVar2 & 0xffff) - iVar5;
        for (iVar10 = 0; iVar10 < 8; iVar10 = iVar10 + 1) {
          if (*(int *)(ar4 + iVar10 * 4 + 0x524) != 0) {
            iVar6 = *(int *)(ar4 + iVar10 * 4 + 0x524);
            (**(code **)(*(int *)(iVar6 + 8) + 0x110))(iVar6,1,pcVar8,pcVar9);
            iVar6 = *(int *)(ar4 + iVar10 * 4 + 0x524);
            pfVar7 = ar5;
            pcVar8 = ar6;
            pcVar9 = ar7;
            (**(code **)(*(int *)(iVar6 + 8) + 0x10))(iVar6,ar5,ar6,ar7);
          }
        }
        ar6 = *(code **)(*(int *)(ar4 + 8) + 0xb4);
        iVar6 = (*ar6)(ar4,pfVar7,ar6,pcVar9);
        iVar10 = 0;
        if (iVar6 != 0) {
          iVar10 = iVar5;
          FUN_8c02c030(ar4 + 0x174,iVar5,ar7,pcVar9);
          ar6 = ar7;
        }
        if (*(char *)(ar4 + 0x9a0) == '\x01') {
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x6dc),*(undefined4 *)(ar4 + 0x6d4));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x6d4);
            dVar13 = *(double *)(ar4 + 0x6dc);
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (cVar18 == '\0') {
            *(float *)(ar4 + 0x6d4) = fVar11;
            dVar13 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x6d4));
          }
          else {
            *(undefined8 *)(ar4 + 0x6d4) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x6d4);
            dVar13 = 12831.689682006836;
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 * dVar13,0);
          }
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(0x40c90fd8,fVar11);
          }
          else {
            dVar13 = -3.74578248742155e-250;
          }
          if (cVar17 == '\0') {
            fVar14 = (float)((ulonglong)dVar13 >> 0x20);
            fVar11 = SUB84(dVar13,0) / fVar14;
            dVar13 = (double)CONCAT44(fVar14,fVar11);
            iVar6 = (int)fVar11;
          }
          else {
            dVar13 = dVar13 / dVar13;
            iVar6 = (int)dVar13;
          }
          FUN_8c25747c(iVar6,iVar10,ar6,pcVar9,uVar2);
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(ar4 + 0x6d8))
            ;
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x6d8);
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 * dVar13,0);
          }
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),fVar11);
          }
          else {
            dVar13 = *(double *)(ar4 + 0x30);
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (cVar18 == '\0') {
            *(float *)(ar4 + 0x30) = fVar11;
            fVar11 = *(float *)(ar4 + 0x6d4);
            fVar14 = 18.84;
          }
          else {
            *(undefined8 *)(ar4 + 0x30) = in_xd0;
            fVar11 = 18.84;
            fVar14 = 1.3589516e+11;
          }
          if (cVar17 != '\0' || fVar14 <= fVar11) {
            *(undefined1 *)(ar4 + 0x9a0) = 0;
          }
        }
        else {
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x6d0),*(undefined4 *)(ar4 + 0x6c8));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x6c8);
            dVar13 = *(double *)(ar4 + 0x6d0);
          }
          ar6 = (code *)(ar4 + 0x6d0);
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (cVar18 == '\0') {
            *(float *)(ar4 + 0x6c8) = fVar11;
            dVar13 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x6c8));
          }
          else {
            *(undefined8 *)(ar4 + 0x6c8) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x6c8);
            dVar13 = 12831.689682006836;
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 * dVar13,0);
          }
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(0x40c90fd8,fVar11);
          }
          else {
            dVar13 = -3.74578248742155e-250;
          }
          if (cVar17 == '\0') {
            fVar14 = (float)((ulonglong)dVar13 >> 0x20);
            fVar11 = SUB84(dVar13,0) / fVar14;
            dVar13 = (double)CONCAT44(fVar14,fVar11);
            iVar10 = (int)fVar11;
          }
          else {
            dVar13 = dVar13 / dVar13;
            iVar10 = (int)dVar13;
          }
          FUN_8c25747c(iVar10,0x6c8,ar6,pcVar9,uVar2);
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(ar4 + 0x6cc))
            ;
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x6cc);
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 * dVar13,0);
          }
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar11);
          }
          else {
            dVar13 = *(double *)(ar4 + 0x34);
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (cVar18 == '\0') {
            *(float *)(ar4 + 0x34) = fVar11;
          }
          else {
            *(undefined8 *)(ar4 + 0x34) = in_xd0;
          }
        }
        *(int *)(ar4 + 0x9d4) = *(int *)(ar4 + 0x9d4) + 1;
        for (iVar10 = 0; iVar10 < 8; iVar10 = iVar10 + 1) {
          FUN_8c09cdf4(ar4,iVar10,ar6,pcVar9);
          FUN_8c036988(*(undefined4 *)(ar4 + iVar10 * 4 + 0x524),iVar10,ar6,pcVar9);
        }
        pfVar7 = (float *)0x3c;
        iVar5 = libgcc_divide_helper_0101e4(iVar5,0x3c,ar6,pcVar9);
        if (2 < iVar5) {
          *(undefined1 *)(ar4 + 0x6e0) = 2;
        }
        if ((*(char *)(ar4 + 0x9a0) == '\0') &&
           (iVar5 = FUN_8c02c518(ar4 + 0x174,pfVar7,ar6,pcVar9), iVar5 != -1)) {
          *(undefined1 *)(ar4 + 0x6e0) = 0xff;
          *(undefined4 *)(ar4 + 0x9d4) = 0;
        }
      }
      else if (cVar1 == '\x02') {
        ar6 = (code *)0x1b;
        pfVar7 = (float *)0x5;
        FUN_8c0b9ed4(ar5,5,0x1b,ar7);
        for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
          iVar10 = *(int *)(ar4 + iVar5 * 4 + 0x524);
          (**(code **)(*(int *)(iVar10 + 8) + 0x110))(iVar10,0,ar6,pcVar9);
          pfVar7 = *(float **)(ar4 + iVar5 * 4 + 0x524);
          (**(code **)(*(int *)ar7 + 0x4c))(ar7,pfVar7,ar6,pcVar9);
          *(undefined4 *)(ar4 + iVar5 * 4 + 0x524) = 0;
        }
        FUN_8c0f4d84(ar4,pfVar7,ar6,pcVar9);
      }
      goto LAB_8c09c65a;
    }
  }
  uVar2 = FUN_8c028ee4(ar5,pfVar7,pcVar8,pcVar9);
  uVar2 = uVar2 & 0xffff;
  FUN_8c028edc(ar4 + 0x21c,uVar2,pcVar8,pcVar9,in_stack_ffffff20);
  uVar2 = FUN_8c02602c(ar5,uVar2,pcVar8,pcVar9);
  FUN_8c028ed4(ar4 + 0x21c,uVar2 & 0xffff,pcVar8,pcVar9,in_stack_ffffff20);
  pcVar8 = (code *)0x0;
  pfVar7 = (float *)0x4;
  FUN_8c0b9ed4(ar5,4,0,pcVar9);
  for (iVar5 = 0; uVar19 = (undefined2)in_stack_ffffff20, iVar5 < 8; iVar5 = iVar5 + 1) {
    if (*(int *)(ar4 + iVar5 * 4 + 0x524) != 0) {
      iVar10 = *(int *)(ar4 + iVar5 * 4 + 0x524);
      pfVar7 = ar5;
      (**(code **)(*(int *)(iVar10 + 8) + 0x10c))(iVar10,ar5,pcVar8,pcVar9);
    }
  }
  if (cVar18 == '\0') {
    dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x6d0),*(undefined4 *)(ar4 + 0x6c8));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x6c8);
    dVar13 = *(double *)(ar4 + 0x6d0);
  }
  if (cVar17 == '\0') {
    fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
  }
  else {
    fVar11 = SUB84(dVar13 + dVar13,0);
  }
  if (cVar18 == '\0') {
    *(float *)(ar4 + 0x6c8) = fVar11;
  }
  else {
    *(undefined8 *)(ar4 + 0x6c8) = in_xd0;
  }
  uVar4 = FUN_8c02602c(ar5,pfVar7,pcVar8,pcVar9);
  uVar2 = CONCAT22((short)uVar4,uVar19);
  iVar5 = get_field_c_02d1b8(ar4 + 0x21c,pfVar7,pcVar8,pcVar9);
  pfVar3 = (float *)((uVar2 >> 0x10) - iVar5);
  for (iVar5 = 0; uVar4 = (undefined4)in_dr2, iVar5 < 8; iVar5 = iVar5 + 1) {
    if (*(int *)(ar4 + iVar5 * 4 + 0x524) != 0) {
      iVar10 = *(int *)(ar4 + iVar5 * 4 + 0x524);
      (**(code **)(*(int *)(iVar10 + 8) + 0x110))(iVar10,1,pcVar8,pcVar9);
      iVar10 = *(int *)(ar4 + iVar5 * 4 + 0x524);
      pfVar7 = ar5;
      pcVar8 = ar6;
      pcVar9 = ar7;
      (**(code **)(*(int *)(iVar10 + 8) + 0x10))(iVar10,ar5,ar6,ar7);
    }
  }
  iVar5 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,pfVar7,pcVar8,pcVar9);
  ar6 = pcVar8;
  if (iVar5 != 0) {
    ar6 = ar7;
    FUN_8c02c030(ar4 + 0x174,pfVar3,ar7,pcVar9);
    pfVar7 = pfVar3;
  }
  iVar5 = FUN_8c027988(ar4,pfVar7,ar6,pcVar9);
  if (iVar5 == 1) {
    pfVar7 = (float *)(ar4 + 0x34);
    if (cVar18 == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x6c4),*(undefined4 *)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x34);
      dVar13 = *(double *)(ar4 + 0x6c4);
    }
    if (cVar17 == '\0') {
      fVar11 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar13 - dVar13,0);
    }
    if (cVar18 == '\0') {
      *pfVar7 = fVar11;
      dVar13 = (double)CONCAT44(0x3f000000,*(undefined4 *)(ar4 + 0x6c4));
    }
    else {
      *(undefined8 *)pfVar7 = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x6c4);
      dVar13 = 524288.123046875;
    }
    if (cVar17 == '\0') {
      fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar13 + dVar13,0);
    }
    if (cVar18 == '\0') {
      *(float *)(ar4 + 0x6c4) = fVar11;
      fVar11 = *(float *)(ar4 + 0x6c4);
      fVar14 = 10.0;
    }
    else {
      *(undefined8 *)(ar4 + 0x6c4) = in_xd0;
      fVar11 = 10.0;
      fVar14 = 2.1188467e-29;
    }
    if (cVar17 == '\0' && fVar14 < fVar11) {
      if (cVar18 == '\0') {
        *(undefined4 *)(ar4 + 0x6c4) = 0x41200000;
      }
      else {
        *(undefined8 *)(ar4 + 0x6c4) = 0xfd6e06841200000;
      }
    }
  }
  else {
    if (cVar18 == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x6c4),*(undefined4 *)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x34);
      dVar13 = *(double *)(ar4 + 0x6c4);
    }
    if (cVar17 == '\0') {
      fVar11 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar13 - dVar13,0);
    }
    if (cVar18 == '\0') {
      *(float *)(ar4 + 0x34) = fVar11;
      dVar13 = (double)CONCAT44(0x3f6b851f,*(undefined4 *)(ar4 + 0x6c4));
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x6c4);
      dVar13 = 1.3411048255806968e-08;
    }
    if (cVar17 == '\0') {
      fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar13 * dVar13,0);
    }
    if (cVar18 == '\0') {
      *(float *)(ar4 + 0x6c4) = fVar11;
      fVar11 = *(float *)(ar4 + 0x6c4);
      fVar14 = 0.2;
    }
    else {
      *(undefined8 *)(ar4 + 0x6c4) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x6c4);
      fVar11 = 0.2;
      fVar14 = 2.43265e-42;
    }
    if (cVar17 == '\0' && fVar11 < fVar14) {
      if (cVar18 == '\0') {
        *(undefined4 *)(ar4 + 0x6c4) = 0x3e4ccccd;
      }
      else {
        *(undefined8 *)(ar4 + 0x6c4) = 0x6c83e4ccccd;
      }
    }
    if (cVar18 == '\0') {
      dVar13 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x6c8));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x6c8);
      dVar13 = 12831.689682006836;
    }
    if (cVar17 == '\0') {
      fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar13 * dVar13,0);
    }
    if (cVar18 == '\0') {
      dVar13 = (double)CONCAT44(0x40c90fd8,fVar11);
    }
    else {
      dVar13 = -3.74578248742155e-250;
    }
    if (cVar17 == '\0') {
      fVar14 = (float)((ulonglong)dVar13 >> 0x20);
      fVar11 = SUB84(dVar13,0) / fVar14;
      dVar13 = (double)CONCAT44(fVar14,fVar11);
      iVar5 = (int)fVar11;
    }
    else {
      dVar13 = dVar13 / dVar13;
      iVar5 = (int)dVar13;
    }
    FUN_8c25747c(iVar5,pfVar7,ar6,pcVar9,uVar2);
    if (cVar18 == '\0') {
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(ar4 + 0x6cc));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x6cc);
    }
    if (cVar17 == '\0') {
      fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar13 * dVar13,0);
    }
    if (cVar18 == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar11);
    }
    else {
      dVar13 = *(double *)(ar4 + 0x34);
    }
    if (cVar17 == '\0') {
      fVar11 = (float)((ulonglong)dVar13 >> 0x20);
      dVar13 = (double)CONCAT44(fVar11,SUB84(dVar13,0) + fVar11);
    }
    else {
      dVar13 = dVar13 + dVar13;
    }
    if (cVar18 == '\0') {
      *(int *)(ar4 + 0x34) = SUB84(dVar13,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_xd0;
    }
    pfVar7 = (float *)(ar4 + 0x30);
    (**(code **)(*(int *)ar7 + 0x128))(ar7,pfVar7,ar6,pcVar9);
    if (cVar18 == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),uVar4);
      dVar13 = (double)CONCAT44(0x435c0000,(int)((ulonglong)dVar13 >> 0x20));
    }
    else {
      dVar15 = *(double *)(ar4 + 0x34);
      dVar13 = 7.89940779200925e-312;
    }
    if (cVar17 == '\0') {
      fVar14 = (float)((ulonglong)dVar13 >> 0x20);
      fVar11 = SUB84(dVar13,0) + fVar14;
      dVar13 = (double)CONCAT44(fVar14,fVar11);
      bVar16 = fVar11 < (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      dVar13 = dVar13 + dVar13;
      bVar16 = dVar13 < dVar15;
    }
    if (!bVar16) {
      uVar12 = (ulonglong)dVar13 & 0xffffffff;
      if (cVar18 == '\0') {
        *(undefined4 *)(ar4 + 0x6c4) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x6c4) = uVar12;
      }
      iVar5 = FUN_8c02c518(ar4 + 0x174,pfVar7,ar6,pcVar9);
      if (iVar5 == -1) {
        if (cVar18 == '\0') {
          *(undefined4 *)(ar4 + 0x6cc) = 0x3f99999a;
          uVar12 = CONCAT44(0x3d23d70a,(int)uVar12);
          *(undefined4 *)(ar4 + 0x6d0) = 0x3d23d70a;
        }
        else {
          *(undefined8 *)(ar4 + 0x6cc) = 0x6d03f99999a;
          uVar12 = 0x6e03d23d70a;
          *(undefined8 *)(ar4 + 0x6d0) = 0x6e03d23d70a;
        }
        if (cVar18 == '\0') {
          *(undefined4 *)(ar4 + 0x6c8) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x6c8) = uVar12 & 0xffffffff;
        }
        *(undefined1 *)(ar4 + 0x6e0) = 1;
      }
    }
  }
  *(int *)(ar4 + 0x9d4) = *(int *)(ar4 + 0x9d4) + -5;
  if (*(int *)(ar4 + 0x9d4) < 0) {
    *(undefined4 *)(ar4 + 0x9d4) = 0;
  }
  for (pfVar3 = (float *)0x0; (int)pfVar3 < 8; pfVar3 = (float *)((int)pfVar3 + 1)) {
    pfVar7 = pfVar3;
    FUN_8c09cdf4(ar4,pfVar3,ar6,pcVar9);
    FUN_8c036988(*(undefined4 *)(ar4 + (int)pfVar3 * 4 + 0x524),pfVar7,ar6,pcVar9);
  }
LAB_8c09c65a:
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,pfVar7,ar6,pcVar9);
  FUN_8c0f79b8(ar4 + 0xa0,pfVar7,ar6,pcVar9);
  return 1;
}



/* Class_12a990_m6_09c6a4 @ 8c09c6a4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12a990_m6_09c6a4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  (*(code *)PTR_FUN_8c09c720)(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c09c724 + ar4 + iVar1 * 4) != 0) {
      a4 = *(int *)(DAT_8c09c724 + ar4 + iVar1 * 4);
      ar5_00 = ar5;
      (**(code **)(*(int *)(a4 + 8) + 0x20))(a4,ar5,ar6,ar7);
    }
  }
  (*(code *)PTR_FUN_8c09c72c)(ar4 + DAT_8c09c728,ar5_00,ar6,ar7);
  (*(code *)PTR_FUN_8c09c730)(ar4 + DAT_8c09c728,ar5_00,ar6,ar7);
  iVar1 = DAT_8c09c734;
  *(undefined1 *)(DAT_8c09c734 + ar4) = 0xff;
  return iVar1;
}



/* Class_12a990_m5_09c738 @ 8c09c738 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
Class_12a990_m5_09c738(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_4;
  
  iVar1 = -DAT_8c09c770;
  *(undefined4 *)((int)&iStack_4 + iVar1) = ar4;
  (*(code *)PTR_FUN_8c09c774)((int)&s0 + iVar1,ar5,ar6,ar7);
  (**(code **)(*(int *)(*(int *)((int)&iStack_4 + iVar1) + 8) + 0x20))
            (*(int *)((int)&iStack_4 + iVar1),(int)&s0 + iVar1,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c09c778)((int)&s0 + iVar1,0xffffffff,ar6,ar7);
  return uVar2;
}



/* Class_12a990_m4_09c77c @ 8c09c77c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a990_m4_09c77c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c09c798)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09c79c @ 8c09c79c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09c79c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c09c7b4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* noop_09c7b8 @ 8c09c7b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_09c7b8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* noop_09c7bc @ 8c09c7bc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_09c7bc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c09c7c0 @ 8c09c7c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09c7c0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09c808)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09c810)(ar4 + DAT_8c09c80c,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09c81c)(ar4 + DAT_8c09c818,ar5 + DAT_8c09c814,ar6,ar7);
  return uVar1;
}



/* FUN_8c09c820 @ 8c09c820 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09c820(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09c864)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09c86c)(ar4 + DAT_8c09c868,ar5 + 0x24,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09c874)(ar4 + DAT_8c09c870,ar5 + 0x58,ar6,ar7);
  return uVar1;
}



/* FUN_8c09c878 @ 8c09c878 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09c878(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09c8c0)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09c8c8)(ar4 + DAT_8c09c8c4,ar5 + 0x4c,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09c8d4)(ar4 + DAT_8c09c8d0,ar5 + DAT_8c09c8cc,ar6,ar7);
  return uVar1;
}



/* FUN_8c09c8d8 @ 8c09c8d8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09c8d8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09c91c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09c924)(ar4 + DAT_8c09c920,ar5 + 0x24,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09c92c)(ar4 + DAT_8c09c928,ar5 + 0x58,ar6,ar7);
  return uVar1;
}



/* FUN_8c09c930 @ 8c09c930 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09c930(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int a4;
  int iVar1;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_00;
  int ar5_00;
  char cVar4;
  char cVar5;
  undefined4 in_stack_ffffffe4;
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffe4);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_ffffffe4);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(0,ar5_00,ar6_00,ar7_00,in_stack_ffffffe4);
  FUN_8c256fec(0,ar5_00,ar6_00,ar7_00,in_stack_ffffffe4);
  ar4_00 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5_00,ar6_00,ar7_00);
  FUN_8c21a80e(ar4_00,ar5_00,ar6_00,ar7_00);
  FUN_8c256210(1,ar5_00,ar6_00,ar7_00);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(ar4 + iVar1 * 4 + 0x524) != 0) {
      FUN_8c0f4b44(*(undefined4 *)(ar4 + iVar1 * 4 + 0x524),ar5_00,ar6_00,ar7_00);
      a4 = *(int *)(ar4 + iVar1 * 4 + 0x524);
      (**(code **)(*(int *)(a4 + 8) + 0x34))(a4,ar5_00,ar6_00,ar7_00);
    }
  }
  return 8;
}



/* FUN_8c09ca80 @ 8c09ca80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ca80(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a4;
  int iVar2;
  undefined4 in_stack_ffffffe8;
  
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffe8);
  FUN_8c019198(uVar1,ar5,ar6,ar7);
  uVar1 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5,ar6,ar7);
  FUN_8c219a9a(uVar1,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    if (*(int *)(ar4 + iVar2 * 4 + 0x524) != 0) {
      a4 = *(int *)(ar4 + iVar2 * 4 + 0x524);
      (**(code **)(*(int *)(a4 + 8) + 0x3c))(a4,ar5,ar6,ar7);
    }
  }
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09cb40 @ 8c09cb40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09cb40(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x3c))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09cb58 @ 8c09cb58 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09cb58(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 in_stack_ffffffec;
  
  noop_038c8c(ar4,ar5,ar6,ar7,in_stack_ffffffec);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(ar4 + iVar1 * 4 + 0x524) != 0) {
      a4 = *(int *)(ar4 + iVar1 * 4 + 0x524);
      (**(code **)(*(int *)(a4 + 8) + 0x5c))(a4,ar5,ar6,ar7);
    }
  }
  return 8;
}



/* FUN_8c09cbb8 @ 8c09cbb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09cbb8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  int a5;
  
  for (a5 = 0; a5 < 8; a5 = a5 + 1) {
    a6 = (*(code *)PTR_s_Shell_0fef9c_8c09cc24)(ar5,1,1,ar7);
    if (a6 != 0) {
      (**(code **)(DAT_8c09cc28 + *(int *)(ar4 + 8)))(ar4,a5,a6,ar7);
      (*(code *)PTR_FUN_8c09cc30)(ar4,a5,a6,ar7);
    }
  }
  return 8;
}



/* FUN_8c09cc34 @ 8c09cc34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09cc34(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = DAT_8c09cc48;
  *(undefined4 *)(DAT_8c09cc48 + ar4 + ar5 * 4) = ar6;
  return iVar1;
}



/* FUN_8c09cc4c @ 8c09cc4c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09cc4c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c09cca0 + ar4 + iVar1 * 4) != 0) {
      (*(code *)PTR_FUN_8c09cca4)(ar5,ar4 + iVar1 * 4 + DAT_8c09cca0,ar6,ar7);
    }
  }
  return 8;
}



/* FUN_8c09cca8 @ 8c09cca8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09ccb6) */
/* WARNING: Removing unreachable block (ram,0x8c09cca8) */
/* WARNING: Removing unreachable block (ram,0x8c09cd6a) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c09cca8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  float *pfVar4;
  ulonglong *puVar5;
  undefined4 in_fr1;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  float fVar9;
  undefined4 in_fr3;
  undefined4 uVar10;
  double dVar11;
  undefined4 in_fr4;
  undefined8 in_dr14;
  double dVar12;
  undefined8 in_xd0;
  undefined8 in_xd14;
  int iVar13;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
  cVar14 = '\0';
  dVar12 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  uVar1 = rand(ar4,ar5,ar6,ar7);
  if (cVar14 == '\0') {
    iVar13 = (int)SUB84(dVar12,0);
  }
  else {
    iVar13 = (int)dVar12;
  }
  iVar2 = libgcc_divide_helper_01031c(uVar1,iVar13,ar6,ar7);
  pdVar3 = (double *)(ar4 + ar5 * 0x10 + 0x5c4);
  if (cVar14 == '\0') {
    dVar11 = (double)CONCAT44((float)iVar2,in_fr3);
  }
  else {
    dVar11 = (double)iVar2;
  }
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(0x42c80000,in_fr1);
  }
  else {
    dVar8 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) / (float)((ulonglong)dVar8 >> 0x20)
                              ,SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 / dVar8;
  }
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(0x42c80000,SUB84(dVar12,0));
  }
  else {
    dVar8 = 2.0000004975590855;
    in_xd0 = in_xd14;
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 / dVar8,0);
  }
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(0x40000000,fVar6);
  }
  else {
    dVar8 = 3.14108426957634e-311;
  }
  if (cVar14 == '\0') {
    fVar9 = (float)((ulonglong)dVar8 >> 0x20);
    fVar6 = SUB84(dVar8,0) / fVar9;
    dVar8 = (double)CONCAT44(fVar9,fVar6);
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - fVar6,SUB84(dVar11,0));
  }
  else {
    dVar8 = dVar8 / dVar8;
    dVar11 = dVar11 - dVar8;
  }
  uVar7 = SUB84(dVar8,0);
  if (cVar15 == '\0') {
    *(int *)pdVar3 = (int)((ulonglong)dVar11 >> 0x20);
  }
  else {
    *pdVar3 = dVar11;
  }
  uVar1 = rand(uVar1,iVar13,ar6,ar7);
  uVar10 = SUB84(dVar11,0);
  if (cVar14 == '\0') {
    iVar13 = (int)SUB84(dVar12,0);
  }
  else {
    iVar13 = (int)dVar12;
  }
  iVar2 = libgcc_divide_helper_01031c(uVar1,iVar13,ar6,ar7);
  pdVar3 = (double *)(ar4 + ar5 * 0x10 + 0x5c8);
  if (cVar14 == '\0') {
    dVar11 = (double)CONCAT44((float)iVar2,uVar10);
  }
  else {
    dVar11 = (double)iVar2;
  }
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(0x42c80000,uVar7);
  }
  else {
    dVar8 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) / (float)((ulonglong)dVar8 >> 0x20)
                              ,SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 / dVar8;
  }
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(0x42c80000,SUB84(dVar12,0));
    in_xd14 = in_xd0;
  }
  else {
    dVar8 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar8 / dVar8,0);
  }
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(0x40000000,fVar6);
  }
  else {
    dVar8 = 3.14108426957634e-311;
  }
  if (cVar14 == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) -
                              SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 - dVar8 / dVar8;
  }
  if (cVar15 == '\0') {
    *(int *)pdVar3 = (int)((ulonglong)dVar11 >> 0x20);
  }
  else {
    *pdVar3 = dVar11;
  }
  uVar1 = rand(uVar1,iVar13,ar6,ar7);
  if (cVar14 == '\0') {
    iVar13 = (int)SUB84(dVar12,0);
  }
  else {
    iVar13 = (int)dVar12;
  }
  iVar13 = libgcc_divide_helper_01031c(uVar1,iVar13,ar6,ar7);
  pfVar4 = (float *)(ar4 + ar5 * 0x10 + 0x5cc);
  if (cVar15 == '\0') {
    dVar11 = (double)CONCAT44(0x42c80000,(float)iVar13);
  }
  else {
    dVar11 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar11 / dVar11,0);
  }
  if (cVar15 == '\0') {
    dVar11 = (double)CONCAT44(0x42c80000,fVar6);
  }
  else {
    dVar11 = 2.0000004975590855;
  }
  if (cVar14 == '\0') {
    dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                              SUB84(dVar12,0) / (float)((ulonglong)dVar11 >> 0x20));
  }
  else {
    dVar12 = dVar12 / dVar11;
  }
  if (cVar15 == '\0') {
    dVar11 = (double)CONCAT44(0x40000000,SUB84(dVar11,0));
  }
  else {
    dVar11 = 3.14108426957634e-311;
  }
  if (cVar14 == '\0') {
    fVar6 = SUB84(dVar11,0) - SUB84(dVar12,0) / (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar11 - dVar12 / dVar11,0);
  }
  if (cVar15 == '\0') {
    *pfVar4 = fVar6;
  }
  else {
    *(undefined8 *)pfVar4 = in_xd14;
  }
  puVar5 = (ulonglong *)(ar4 + ar5 * 0x10 + 0x644);
  if (cVar15 == '\0') {
    *(undefined4 *)puVar5 = 0;
  }
  else {
    *puVar5 = (ulonglong)(uint)fVar6;
  }
  puVar5 = (ulonglong *)(ar4 + ar5 * 0x10 + 0x648);
  if (cVar15 == '\0') {
    *(undefined4 *)puVar5 = 0;
  }
  else {
    *puVar5 = (ulonglong)(uint)fVar6;
  }
  puVar5 = (ulonglong *)(ar4 + ar5 * 0x10 + 0x64c);
  if (cVar15 == '\0') {
    *(undefined4 *)puVar5 = 0;
  }
  else {
    *puVar5 = (ulonglong)(uint)fVar6;
  }
  return 0x64c;
}



/* FUN_8c09cdf4 @ 8c09cdf4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09d28c) */
/* WARNING: Removing unreachable block (ram,0x8c09d286) */
/* WARNING: Removing unreachable block (ram,0x8c09d266) */
/* WARNING: Removing unreachable block (ram,0x8c09d250) */
/* WARNING: Removing unreachable block (ram,0x8c09d24a) */
/* WARNING: Removing unreachable block (ram,0x8c09d236) */
/* WARNING: Removing unreachable block (ram,0x8c09d230) */
/* WARNING: Removing unreachable block (ram,0x8c09d20e) */
/* WARNING: Removing unreachable block (ram,0x8c09d1f8) */
/* WARNING: Removing unreachable block (ram,0x8c09d1f4) */
/* WARNING: Removing unreachable block (ram,0x8c09d1de) */
/* WARNING: Removing unreachable block (ram,0x8c09d1da) */
/* WARNING: Removing unreachable block (ram,0x8c09d1b8) */
/* WARNING: Removing unreachable block (ram,0x8c09d138) */
/* WARNING: Removing unreachable block (ram,0x8c09d134) */
/* WARNING: Removing unreachable block (ram,0x8c09d12e) */
/* WARNING: Removing unreachable block (ram,0x8c09d11a) */
/* WARNING: Removing unreachable block (ram,0x8c09d114) */
/* WARNING: Removing unreachable block (ram,0x8c09d0f2) */
/* WARNING: Removing unreachable block (ram,0x8c09d0dc) */
/* WARNING: Removing unreachable block (ram,0x8c09d0d8) */
/* WARNING: Removing unreachable block (ram,0x8c09d0c2) */
/* WARNING: Removing unreachable block (ram,0x8c09d0be) */
/* WARNING: Removing unreachable block (ram,0x8c09d090) */
/* WARNING: Removing unreachable block (ram,0x8c09d074) */
/* WARNING: Removing unreachable block (ram,0x8c09d070) */
/* WARNING: Removing unreachable block (ram,0x8c09d06a) */
/* WARNING: Removing unreachable block (ram,0x8c09d052) */
/* WARNING: Removing unreachable block (ram,0x8c09d04c) */
/* WARNING: Removing unreachable block (ram,0x8c09d01e) */
/* WARNING: Removing unreachable block (ram,0x8c09d004) */
/* WARNING: Removing unreachable block (ram,0x8c09d000) */
/* WARNING: Removing unreachable block (ram,0x8c09cfe6) */
/* WARNING: Removing unreachable block (ram,0x8c09cfe2) */
/* WARNING: Removing unreachable block (ram,0x8c09cfa4) */
/* WARNING: Removing unreachable block (ram,0x8c09cfa0) */
/* WARNING: Removing unreachable block (ram,0x8c09cf62) */
/* WARNING: Removing unreachable block (ram,0x8c09cf5e) */
/* WARNING: Removing unreachable block (ram,0x8c09cf20) */
/* WARNING: Removing unreachable block (ram,0x8c09cf1c) */
/* WARNING: Removing unreachable block (ram,0x8c09cf0e) */
/* WARNING: Removing unreachable block (ram,0x8c09cef8) */
/* WARNING: Removing unreachable block (ram,0x8c09cebc) */
/* WARNING: Removing unreachable block (ram,0x8c09ceae) */
/* WARNING: Removing unreachable block (ram,0x8c09ceaa) */
/* WARNING: Removing unreachable block (ram,0x8c09ce5c) */
/* WARNING: Removing unreachable block (ram,0x8c09ce58) */
/* WARNING: Removing unreachable block (ram,0x8c09ce4a) */
/* WARNING: Removing unreachable block (ram,0x8c09ce34) */
/* WARNING: Removing unreachable block (ram,0x8c09ce48) */
/* WARNING: Removing unreachable block (ram,0x8c09ce4c) */
/* WARNING: Removing unreachable block (ram,0x8c09ce5a) */
/* WARNING: Removing unreachable block (ram,0x8c09ce96) */
/* WARNING: Removing unreachable block (ram,0x8c09ceac) */
/* WARNING: Removing unreachable block (ram,0x8c09ceba) */
/* WARNING: Removing unreachable block (ram,0x8c09cebe) */
/* WARNING: Removing unreachable block (ram,0x8c09cf0c) */
/* WARNING: Removing unreachable block (ram,0x8c09cf10) */
/* WARNING: Removing unreachable block (ram,0x8c09cf1e) */
/* WARNING: Removing unreachable block (ram,0x8c09cf54) */
/* WARNING: Removing unreachable block (ram,0x8c09cf60) */
/* WARNING: Removing unreachable block (ram,0x8c09cf96) */
/* WARNING: Removing unreachable block (ram,0x8c09cfa2) */
/* WARNING: Removing unreachable block (ram,0x8c09cfd8) */
/* WARNING: Removing unreachable block (ram,0x8c09cfe4) */
/* WARNING: Removing unreachable block (ram,0x8c09cffc) */
/* WARNING: Removing unreachable block (ram,0x8c09d002) */
/* WARNING: Removing unreachable block (ram,0x8c09d006) */
/* WARNING: Removing unreachable block (ram,0x8c09d022) */
/* WARNING: Removing unreachable block (ram,0x8c09d050) */
/* WARNING: Removing unreachable block (ram,0x8c09d054) */
/* WARNING: Removing unreachable block (ram,0x8c09d06e) */
/* WARNING: Removing unreachable block (ram,0x8c09d072) */
/* WARNING: Removing unreachable block (ram,0x8c09d08c) */
/* WARNING: Removing unreachable block (ram,0x8c09d0ba) */
/* WARNING: Removing unreachable block (ram,0x8c09d0c0) */
/* WARNING: Removing unreachable block (ram,0x8c09d0d4) */
/* WARNING: Removing unreachable block (ram,0x8c09d0da) */
/* WARNING: Removing unreachable block (ram,0x8c09d0de) */
/* WARNING: Removing unreachable block (ram,0x8c09d0f6) */
/* WARNING: Removing unreachable block (ram,0x8c09d118) */
/* WARNING: Removing unreachable block (ram,0x8c09d11c) */
/* WARNING: Removing unreachable block (ram,0x8c09d132) */
/* WARNING: Removing unreachable block (ram,0x8c09d136) */
/* WARNING: Removing unreachable block (ram,0x8c09d1b4) */
/* WARNING: Removing unreachable block (ram,0x8c09d1d6) */
/* WARNING: Removing unreachable block (ram,0x8c09d1dc) */
/* WARNING: Removing unreachable block (ram,0x8c09d1f0) */
/* WARNING: Removing unreachable block (ram,0x8c09d1f6) */
/* WARNING: Removing unreachable block (ram,0x8c09d1fa) */
/* WARNING: Removing unreachable block (ram,0x8c09d212) */
/* WARNING: Removing unreachable block (ram,0x8c09d234) */
/* WARNING: Removing unreachable block (ram,0x8c09d238) */
/* WARNING: Removing unreachable block (ram,0x8c09d24e) */
/* WARNING: Removing unreachable block (ram,0x8c09d252) */
/* WARNING: Removing unreachable block (ram,0x8c09d26a) */
/* WARNING: Removing unreachable block (ram,0x8c09d28a) */
/* WARNING: Removing unreachable block (ram,0x8c09d28e) */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c09cdf4(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 in_dr4;
  float fVar3;
  
  iVar1 = ar4 + ar5 * 0x10;
  fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
  *(float *)(iVar1 + 0x644) =
       (*(float *)(ar4 + ar5 * 0x10 + 0x5c4) - *(float *)(ar4 + ar5 * 0x10 + 0x644)) / fVar3 +
       *(float *)(iVar1 + 0x644);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(iVar1 + 0x648) =
       (*(float *)(ar4 + ar5 * 0x10 + 0x5c8) - *(float *)(ar4 + ar5 * 0x10 + 0x648)) / fVar3 +
       *(float *)(iVar1 + 0x648);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(iVar1 + 0x64c) =
       (*(float *)(ar4 + ar5 * 0x10 + 0x5cc) - *(float *)(ar4 + ar5 * 0x10 + 0x64c)) / fVar3 +
       *(float *)(iVar1 + 0x64c);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(iVar1 + 0x544) = *(float *)(ar4 + ar5 * 0x10 + 0x644) + *(float *)(iVar1 + 0x544);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(iVar1 + 0x548) = *(float *)(ar4 + ar5 * 0x10 + 0x648) + *(float *)(iVar1 + 0x548);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(iVar1 + 0x54c) = *(float *)(ar4 + ar5 * 0x10 + 0x64c) + *(float *)(iVar1 + 0x54c);
  if ((fVar3 / 3.0 < *(float *)(ar4 + ar5 * 0x10 + 0x544)) &&
     (0.0 < *(float *)(ar4 + ar5 * 0x10 + 0x5c4))) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(iVar1 + 0x5c4) = *(float *)(iVar1 + 0x5c4) * -1.0;
  }
  if ((fVar3 / 3.0 < *(float *)(ar4 + ar5 * 0x10 + 0x548)) &&
     (0.0 < *(float *)(ar4 + ar5 * 0x10 + 0x5c8))) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(iVar1 + 0x5c8) = *(float *)(iVar1 + 0x5c8) * -1.0;
  }
  if ((fVar3 / 3.0 < *(float *)(ar4 + ar5 * 0x10 + 0x54c)) &&
     (0.0 < *(float *)(ar4 + ar5 * 0x10 + 0x5cc))) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(iVar1 + 0x5cc) = *(float *)(iVar1 + 0x5cc) * -1.0;
  }
  if ((*(float *)(ar4 + ar5 * 0x10 + 0x544) < fVar3 / -3.0) &&
     (*(float *)(ar4 + ar5 * 0x10 + 0x5c4) < 0.0)) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(iVar1 + 0x5c4) = *(float *)(iVar1 + 0x5c4) * -1.0;
  }
  if ((*(float *)(ar4 + ar5 * 0x10 + 0x548) < fVar3 / -3.0) &&
     (*(float *)(ar4 + ar5 * 0x10 + 0x5c8) < 0.0)) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(iVar1 + 0x5c8) = *(float *)(iVar1 + 0x5c8) * -1.0;
  }
  puVar2 = &DAT_8c09d2a4;
  if ((*(float *)(ar4 + ar5 * 0x10 + 0x54c) < fVar3 / -3.0) &&
     (puVar2 = (undefined4 *)0x5cc, *(float *)(ar4 + ar5 * 0x10 + 0x5cc) < 0.0)) {
    iVar1 = ar4 + ar5 * 0x10;
    puVar2 = &DAT_8c09d29c;
    *(float *)(iVar1 + 0x5cc) = *(float *)(iVar1 + 0x5cc) * -1.0;
  }
  return puVar2;
}



/* FUN_8c09d2b4 @ 8c09d2b4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09d2e4) */
/* WARNING: Removing unreachable block (ram,0x8c09d2d8) */
/* WARNING: Removing unreachable block (ram,0x8c09d2d6) */
/* WARNING: Removing unreachable block (ram,0x8c09d2e2) */
/* WARNING: Removing unreachable block (ram,0x8c09d2ec) */
/* WARNING: Unknown calling convention */

int FUN_8c09d2b4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 1;
  if ((*(char *)(ar4 + 0x9a0) != '\x01') && (iVar1 = (int)*(char *)(ar4 + 0x6e0), iVar1 == 1)) {
    *(undefined1 *)(ar4 + 0x9a0) = 1;
    *(undefined4 *)(ar4 + 0x6d8) = 0x3f8ccccd;
    *(undefined4 *)(ar4 + 0x6dc) = 0x3e2e147b;
    iVar1 = 0x6d4;
    *(undefined4 *)(ar4 + 0x6d4) = 0;
  }
  return iVar1;
}



/* FUN_8c09d310 @ 8c09d310 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09d310(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  
  (*(code *)PTR_s_Failed_to_Load_CAnimal_LoadG_0284b8_8c09d378)(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c09d37c + ar4 + iVar1 * 4) != 0) {
      a4 = *(int *)(DAT_8c09d37c + ar4 + iVar1 * 4);
      (**(code **)(DAT_8c09d380 + *(int *)(a4 + 8)))(a4,ar5,0,ar7);
    }
  }
  return 8;
}



/* FUN_8c09d384 @ 8c09d384 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09d384(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  
  (*(code *)PTR_FUN_8c09d3ec)(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c09d3f0 + ar4 + iVar1 * 4) != 0) {
      a4 = *(int *)(DAT_8c09d3f0 + ar4 + iVar1 * 4);
      (**(code **)(DAT_8c09d3f4 + *(int *)(a4 + 8)))(a4,ar5,0,ar7);
    }
  }
  return 8;
}



/* Class_12a990_m8_09d3f8 @ 8c09d3f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a990_m8_09d3f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  (*(code *)PTR_CAnimal_m8_0f511c_8c09d45c)(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(DAT_8c09d460 + ar4 + iVar1 * 4) != 0) {
      ar5 = (*(code *)PTR_get_field_74_09d474_8c09d464)(ar4,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c09d468)(*(undefined4 *)(DAT_8c09d460 + ar4 + iVar1 * 4),ar5,ar6,ar7);
    }
  }
  return 8;
}



/* FUN_8c09d46c @ 8c09d46c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09d46c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x74) = ar5;
  return 0x74;
}



/* get_field_74_09d474 @ 8c09d474 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_74_09d474(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x74);
}



/* s_MrEgg_Home_nj_09d47c @ 8c09d47c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09d552) */
/* WARNING: Removing unreachable block (ram,0x8c09d568) */
/* WARNING: Removing unreachable block (ram,0x8c09d598) */
/* WARNING: Removing unreachable block (ram,0x8c09d550) */
/* WARNING: Removing unreachable block (ram,0x8c09d522) */
/* WARNING: Removing unreachable block (ram,0x8c09d56a) */
/* WARNING: Removing unreachable block (ram,0x8c09d538) */
/* WARNING: Removing unreachable block (ram,0x8c09d59a) */
/* WARNING: Removing unreachable block (ram,0x8c09d53a) */
/* WARNING: Removing unreachable block (ram,0x8c09d580) */
/* WARNING: Removing unreachable block (ram,0x8c09d582) */
/* WARNING: Unknown calling convention */

undefined4 s_MrEgg_Home_nj_09d47c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b570) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b56c) = 0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7b568) = PTR_s_MrEgg_Home_nj_8c13aa70;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b564) = 0;
    *(undefined **)(iVar1 * 0x124 + -0x73d7b560) = PTR_s_MUSHROOMER_EGG_8c13aa74;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b55c) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b4c0) = 0x8c284cb8;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b4b8) = 0x3f800000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b4a8) = 0x3ca3d70a;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b4a4) = 0x3ecccccd;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b4a0) = 0x43480000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b4ac) = 0x3eb33333;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7b454) = 0x43898000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(iVar1 * 0x10 + -0x73d7b444) = 0xffff;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7b440) = 1;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7b43c) = 0;
    *(undefined4 *)(iVar1 * 0x10 + -0x73d7b438) = 0;
  }
  return 1;
}



/* FUN_8c09d644 @ 8c09d644 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09d644(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0;
  (*(code *)PTR_FUN_8c09d6a8)(ar4 + 1,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c09d6ac)(ar4 + 4,ar5,ar6,ar7);
  ar4[7] = 10;
  ar4[8] = ar4[8] | DAT_8c09d6b0;
  (*(code *)PTR_FUN_8c09d6b4)(ar4 + 9,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)((int)ar4 + iVar1 + 0x58) = 0;
  }
  return 0xf;
}



/* FUN_8c09d6b8 @ 8c09d6b8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09d6b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  *(undefined2 *)(ar4 + 0x1c) = 0;
  *(undefined2 *)(ar4 + 0x1e) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  return 0;
}



/* Class_12a990_m3_09d6e8 @ 8c09d6e8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12a990_m3_09d6e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x10))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* ret_const_1_09d710 @ 8c09d710 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_1_09d710(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}



/* FUN_8c09d718 @ 8c09d718 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c09d718(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1260c8,ar5,ar6,ar7);
  uVar3 = 0x8c284a50;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284a50,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1260d8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284a5c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284a5c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1260e8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284a68;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284a68,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1260f8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284a74;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284a74,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126108 = CONCAT44(_UNK_8c12610c,0x800000);
                    /* WARNING: Read-only address (ram,0x8c12610c) is written */
  }
  else {
    _DAT_8c126108 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c02452c(0x8c284a8c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284a80;
  pcVar2 = FUN_8c03a4ac;
  global_list_push(uVar1,FUN_8c03a4ac,0x8c284a80,ar7);
  uVar1 = FUN_8c024824(0x8c284bbc,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284bb0;
  pcVar2 = free_if_nonnull_wrap_03a454;
  global_list_push(uVar1,free_if_nonnull_wrap_03a454,0x8c284bb0,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284bd8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284bcc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284bcc,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284bf4,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284be8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284be8,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284c10,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284c04;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284c04,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284c2c,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284c20;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284c20,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284c48,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284c3c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284c3c,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284c64,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284c58;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284c58,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284c80,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284c74;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284c74,ar7);
  uVar1 = Vec3_ctor_xyz(0x8c284c9c,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c284c90,ar7);
  uVar3 = 0x8c284c10;
  uVar1 = FUN_8c017010(0x8c284cb8,0x8c284bd8,0x8c284bf4,0x8c284c10,0x8c284c2c,0x8c284c48,0x8c284c64,
                       0x8c284c80,0x8c284c9c);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c284cac,uVar3);
  return uVar1;
}



/* s_GRAPHICS_MUSHROOMERLINE_09d9c2 @ 8c09d9c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int s_GRAPHICS_MUSHROOMERLINE_09d9c2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 1;
  ar6_00 = 1;
  ar5_00 = 1;
  (*(code *)PTR_FUN_8c09da74)
            (ar4,1,1,1,0,ar5,DAT_8c09da70,DAT_8c09da6c,*(undefined4 *)PTR_PTR_8c09da68);
  *(undefined **)(ar4 + 8) = PTR_DAT_8c09da78;
  (*(code *)PTR_FUN_8c09da80)(ar4 + DAT_8c09da7c,ar5_00,ar6_00,ar7_00);
  (*(code *)PTR_FUN_8c09da88)(ar4 + DAT_8c09da84,ar5_00,ar6_00,ar7_00);
  (*(code *)PTR_FUN_8c09da90)(ar4 + DAT_8c09da8c,ar5_00,ar6_00,ar7_00);
  (*(code *)PTR_FUN_8c09da9c)
            (ar4 + 0xc,ar5_00,ar6_00,ar7_00,PTR_s_GRAPHICS_COMMON_8c09da94 + DAT_8c09da98);
  *(int *)(DAT_8c09daa0 + ar4) = ar4 + DAT_8c09da7c;
  *(int *)(DAT_8c09daa4 + ar4) = ar4 + DAT_8c09da84;
  (*(code *)PTR_FUN_8c09dab0)
            (ar4,*(undefined4 *)(DAT_8c09daac + *(int *)(DAT_8c09daa8 + ar4)),ar4 + DAT_8c09da8c,
             ar7_00);
  *(undefined4 *)(DAT_8c09dab4 + ar4) = 0;
  return ar4;
}



/* Class_12ab2c_m0_09dab8 @ 8c09dab8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int Class_12ab2c_m0_09dab8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12ab2c;
    FUN_8c09efb4(ar4,ar5,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0xf3c,0xffffffff,ar6,ar7);
    Class_12ad14_m0_0a0950(ar4 + 0xcc4,0xffffffff,ar6,ar7);
    Class_12acc8_m0_09f428(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12ab2c_m2_09db4c @ 8c09db4c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09dbc6) */
/* WARNING: Removing unreachable block (ram,0x8c09db9a) */
/* WARNING: Removing unreachable block (ram,0x8c09db8a) */
/* WARNING: Removing unreachable block (ram,0x8c09db8e) */
/* WARNING: Removing unreachable block (ram,0x8c09db9e) */
/* WARNING: Removing unreachable block (ram,0x8c09dc28) */
/* WARNING: Unknown calling convention */

undefined4 Class_12ab2c_m2_09db4c(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  int iVar1;
  int *a7;
  float extraout_fr1;
  float fVar2;
  float extraout_fr1_00;
  char cVar3;
  byte bStack_10;
  
  cVar3 = '\0';
  a7 = ar7;
  CAnimal_m2_02573c(ar4,ar5,ar6,ar7);
  (**(code **)(*ar7 + 0x198))(ar7,ar5,ar6,a7);
  if (((bStack_10 & 3) >> 1) - ((int)((uint)bStack_10 << 0x1f) >> 0x1f) == 2) {
    if (0 < *(int *)(ar4 + 0xfd0)) {
      fVar2 = extraout_fr1;
      if (cVar3 == '\0') {
        fVar2 = *(float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
      }
      if (fVar2 != 0.0) {
        FUN_8c09edf0(ar4,ar5,ar6,a7);
      }
    }
  }
  else {
    iVar1 = get_field_124_027930(ar4 + 0xcc4,ar5,ar6,a7);
    if ((iVar1 == 2) || (iVar1 = get_field_124_027930(ar4 + 0xcc4,ar5,ar6,a7), iVar1 == 9)) {
      FUN_8c09ea78(ar4,ar5,ar6,a7);
    }
    else if (0 < *(int *)(ar4 + 0xfd0)) {
      fVar2 = extraout_fr1_00;
      if (cVar3 == '\0') {
        fVar2 = *(float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
      }
      if (fVar2 != 0.0) {
        FUN_8c09edf0(ar4,ar5,ar6,a7);
      }
    }
  }
  return 1;
}



/* FUN_8c09dc64 @ 8c09dc64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09dc64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c09dc88)(*(undefined4 *)(DAT_8c09dc84 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* Class_12ab2c_m4_09dc8c @ 8c09dc8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ab2c_m4_09dc8c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = (**(code **)(**(int **)(DAT_8c09dcf4 + ar4) + 0x14))
                    (*(int **)(DAT_8c09dcf4 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* Class_12ab2c_m5_09dcf8 @ 8c09dcf8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ab2c_m5_09dcf8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = (**(code **)(**(int **)(DAT_8c09dd60 + ar4) + 0x14))
                    (*(int **)(DAT_8c09dd60 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* Class_12ab2c_m6_09dd64 @ 8c09dd64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ab2c_m6_09dd64(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  (*(code *)PTR_FUN_8c09dddc)(ar4 + DAT_8c09ddd8,ar5,ar6,ar7);
  uVar1 = (**(code **)(**(int **)(DAT_8c09dde0 + ar4) + 0x14))
                    (*(int **)(DAT_8c09dde0 + ar4),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09dde4 @ 8c09dde4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09dde4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (*(int *)(ar4 + 0xfd0) != 0) {
    ar5 = 1;
    FUN_8c221916(*(int *)(ar4 + 0xfd0) + 1,1,ar6,ar7);
  }
  FUN_8c2219de(2,ar5,ar6,ar7,in_PR);
  FUN_8c2219de(3,ar5,ar6,ar7,in_PR);
  FUN_8c2219de(4,ar5,ar6,ar7,in_PR);
  FUN_8c21418e(2,ar5,ar6,ar7,in_PR);
  FUN_8c21418e(3,ar5,ar6,ar7,in_PR);
  uVar1 = FUN_8c21418e(4,ar5,ar6,ar7,in_PR);
  return uVar1;
}



/* FUN_8c09de7c @ 8c09de7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09de7c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c09dec0)(2,0,ar6,ar7);
  (*(code *)PTR_FUN_8c09dec0)(3,0,ar6,ar7);
  (*(code *)PTR_FUN_8c09dec0)(4,0,ar6,ar7);
  (*(code *)PTR_FUN_8c09dec4)(2,0,ar6,ar7);
  (*(code *)PTR_FUN_8c09dec4)(3,0,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c09dec4)(4,0,ar6,ar7);
  return uVar1;
}



/* FUN_8c09dec8 @ 8c09dec8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c09dec8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  int iVar10;
  int ar5_00;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff8c;
  undefined4 uStack_4c;
  undefined4 uStack_34;
  
  cVar12 = '\0';
  cVar11 = '\0';
  iVar1 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7);
  }
  _DAT_8c284fb4 = get_field_24c_09e1f8(ar4 + 0xcc4,ar5,ar6,ar7);
  piVar2 = (int *)get_field_4_0253e4(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  uVar6 = *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(_DAT_8c284fb4 * 0xc + *piVar2 + 8);
  *(undefined4 *)(_DAT_8c284fb4 * 0xc + *piVar2 + 8) = uVar6;
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffff8c);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_ffffff8c);
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar8 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x43b40000,fVar7);
  }
  else {
    dVar8 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    iVar1 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20));
  }
  else {
    iVar1 = (int)(dVar8 / dVar8);
  }
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar8 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x43b40000,fVar7);
  }
  else {
    dVar8 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    iVar10 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20));
  }
  else {
    iVar10 = (int)(dVar8 / dVar8);
  }
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar8 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x43b40000,fVar7);
  }
  else {
    dVar8 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar8 >> 0x20);
    fVar7 = SUB84(dVar8,0) / fVar9;
    dVar8 = (double)CONCAT44(fVar9,fVar7);
    ar5_00 = (int)fVar7;
  }
  else {
    dVar8 = dVar8 / dVar8;
    ar5_00 = (int)dVar8;
  }
  uStack_4c = (undefined4)((ulonglong)dVar8 >> 0x20);
  FUN_8c256b0c(0,ar5_00,iVar10,iVar1,in_stack_ffffff8c);
  FUN_8c256fec(0,ar5_00,iVar10,iVar1,in_stack_ffffff8c);
  iVar3 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,ar5_00,iVar10,iVar1);
  if (iVar3 == 0) {
    uStack_34 = uStack_4c;
    uVar4 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5_00,iVar10,iVar1);
    iVar3 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iVar10,iVar1);
    uVar6 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + iVar3 * 4,ar5_00,iVar10,iVar1);
    iVar3 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iVar10,iVar1);
    uVar5 = FUN_8c026d74(*(int *)(*(int *)(ar4 + 0x328) + 0xa8) + iVar3 * 4,ar5_00,iVar10,iVar1);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5_00,iVar10,iVar1);
    if (cVar12 == '\0') {
      uStack_34 = uVar5;
    }
    FUN_8c21bbb0(uVar4,uVar6,uStack_34,iVar1,in_stack_ffffff8c);
  }
  else {
    uVar4 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5_00,iVar10,iVar1);
    iVar3 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iVar10,iVar1);
    uVar6 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + iVar3 * 4,ar5_00,iVar10,iVar1);
    iVar3 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iVar10,iVar1);
    uVar5 = FUN_8c026d74(*(int *)(*(int *)(ar4 + 0x328) + 0xa8) + iVar3 * 4,ar5_00,iVar10,iVar1);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5_00,iVar10,iVar1);
    if (cVar12 == '\0') {
      uStack_4c = uVar5;
    }
    FUN_8c21af26(uVar4,uVar6,uStack_4c,iVar1);
    uStack_34 = uStack_4c;
  }
  FUN_8c256210(1,uVar6,uStack_34,iVar1);
  uVar4 = *(undefined4 *)(_DAT_8c284fb4 * 0xc + *piVar2 + 8);
  *(undefined4 *)(_DAT_8c284fb4 * 0xc + *piVar2 + 8) = *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = uVar4;
  iVar10 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,uVar6,uStack_34,iVar1);
  if (iVar10 == 0) {
    iVar10 = FUN_8c233dac(&DAT_8c13aad4,uVar6,uStack_34,iVar1);
  }
  return iVar10;
}



/* get_field_24c_09e1f8 @ 8c09e1f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_24c_09e1f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c09e200 + ar4);
}



/* FUN_8c09e204 @ 8c09e204 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09e204(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  int ar6_00;
  int ar5_00;
  char cVar5;
  char cVar6;
  undefined4 in_stack_ffffffec;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar2 = ar4 + 0x5c;
  FUN_8c023e24(&stack0xffffffec,iVar2,ar6,ar7);
  FUN_8c08a9b8(ar4 + 0x5c,iVar2,ar6,ar7);
  FUN_8c256328(0,iVar2,ar6,ar7,in_stack_ffffffec);
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar5 == '\0') {
    iVar2 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    iVar2 = (int)(dVar4 / dVar4);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar5 == '\0') {
    ar6_00 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar4 / dVar4);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar5 == '\0') {
    ar5_00 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar4 / dVar4);
  }
  FUN_8c256b0c(0,ar5_00,ar6_00,iVar2,in_stack_ffffffec);
  FUN_8c256fec(0,ar5_00,ar6_00,iVar2,in_stack_ffffffec);
  (**(code **)(*(int *)(ar4 + 8) + 0x3c))(ar4,ar5_00,ar6_00,iVar2);
  FUN_8c256210(1,ar5_00,ar6_00,iVar2);
  FUN_8c023e04(ar4 + 0x5c,&stack0xffffffec,ar6_00,iVar2);
  uVar1 = free_if_nonnull_wrap_016ac4(&stack0xffffffec,0xffffffff,ar6_00,iVar2);
  return uVar1;
}



/* FUN_8c09e2e8 @ 8c09e2e8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c09e2e8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  int iVar8;
  int ar6_00;
  int ar5_01;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffffb8;
  undefined4 uStack_2c;
  
  cVar10 = '\0';
  cVar9 = '\0';
  _DAT_8c284fb8 = get_field_24c_09e1f8(ar4 + 0xcc4,ar5,ar6,ar7);
  piVar1 = (int *)get_field_4_0253e4(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  uVar4 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(_DAT_8c284fb8 * 0xc + *piVar1 + 8);
  *(undefined4 *)(_DAT_8c284fb8 * 0xc + *piVar1 + 8) = uVar4;
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffb8);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_ffffffb8);
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar6 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    iVar8 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    iVar8 = (int)(dVar6 / dVar6);
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar6 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    ar6_00 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar6 / dVar6);
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar6 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    fVar7 = (float)((ulonglong)dVar6 >> 0x20);
    fVar5 = SUB84(dVar6,0) / fVar7;
    dVar6 = (double)CONCAT44(fVar7,fVar5);
    ar5_01 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 / dVar6;
    ar5_01 = (int)dVar6;
  }
  uStack_2c = (undefined4)((ulonglong)dVar6 >> 0x20);
  FUN_8c256b0c(0,ar5_01,ar6_00,iVar8,in_stack_ffffffb8);
  FUN_8c256fec(0,ar5_01,ar6_00,iVar8,in_stack_ffffffb8);
  uVar4 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5_01,ar6_00,iVar8);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_01,ar6_00,iVar8);
  ar5_00 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + iVar2 * 4,ar5_01,ar6_00,iVar8);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_01,ar6_00,iVar8);
  uVar3 = FUN_8c026d74(*(int *)(*(int *)(ar4 + 0x328) + 0xa8) + iVar2 * 4,ar5_01,ar6_00,iVar8);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5_01,ar6_00,iVar8);
  if (cVar10 == '\0') {
    uStack_2c = uVar3;
  }
  FUN_8c21bbb0(uVar4,ar5_00,uStack_2c,iVar8,in_stack_ffffffb8);
  FUN_8c256210(1,ar5_00,uStack_2c,iVar8);
  uVar4 = *(undefined4 *)(_DAT_8c284fb8 * 0xc + *piVar1 + 8);
  *(undefined4 *)(_DAT_8c284fb8 * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  iVar8 = *piVar1;
  *(undefined4 *)(iVar8 + 8) = uVar4;
  return iVar8;
}



/* FUN_8c09e4fc @ 8c09e4fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09e4fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  undefined4 extraout_fr0;
  char cVar4;
  undefined4 uStack_1c;
  
  cVar4 = '\0';
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  uVar1 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5,ar6,ar7);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  ar5_00 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + iVar2 * 4,ar5,ar6,ar7);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uVar3 = FUN_8c026d74(*(int *)(*(int *)(ar4 + 0x328) + 0xa8) + iVar2 * 4,ar5,ar6,ar7);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uStack_1c = extraout_fr0;
  if (cVar4 == '\0') {
    uStack_1c = uVar3;
  }
  uVar1 = FUN_8c21bbb0(uVar1,ar5_00,uStack_1c,ar7,iVar2);
  return uVar1;
}



/* s_Mr3_Home_njd_09e5c2 @ 8c09e5c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_Mr3_Home_njd_09e5c2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  float in_fr1;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  undefined1 auStack_14 [16];
  
  cVar7 = '\0';
  cVar6 = '\0';
  for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b270) = 0;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b1d0) = 0;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b1bc) = 0;
    *(undefined2 *)(iVar4 * 0x124 + -0x73d7b1cc) = 0;
    *(undefined2 *)(iVar4 * 0x124 + -0x73d7b1c4) = 0;
  }
  for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
    *(undefined ***)(iVar4 * 0x124 + -0x73d7b26c) = &PTR_s_Mr3_Breathe_njm_8c13ab18;
    *(undefined ***)(iVar4 * 0x124 + -0x73d7b268) = &PTR_s_Mr3_Breathe_njs_8c13ab54;
    *(undefined **)(iVar4 * 0x124 + -0x73d7b264) = PTR_s_Mr3_Home_njd_8c13ab04;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b260) = 0;
    *(undefined **)(iVar4 * 0x124 + -0x73d7b25c) = PTR_s_MUSHROOMER_LINE_BODY_8c13ab10;
    *(undefined **)(iVar4 * 0x124 + -0x73d7b258) = PTR_s_mr_MotionPack_npd_8c13ab08;
    *(undefined **)(iVar4 * 0x124 + -0x73d7b254) = PTR_s_Hand_for_mr3_njm_8c13ab14;
    *(undefined **)(iVar4 * 0x124 + -0x73d7b250) = PTR_s_Mush_pvm_8c13ab0c;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b24c) = 7;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b240) = 0x8c284ed0;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b1bc) = 0x8c2850a8;
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b1b4);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,in_fr1);
    }
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b1a4);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,in_fr1);
    }
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b1a0);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,in_fr1);
    }
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b19c);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x43340000;
    }
    else {
      *puVar1 = 0xa043340000;
    }
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b1d0) = 0x8c284f30;
    *(undefined2 *)(iVar4 * 0x124 + -0x73d7b1cc) = 0xf;
    *(undefined4 *)(iVar4 * 0x124 + -0x73d7b1c8) = 0x8c284f78;
    *(undefined2 *)(iVar4 * 0x124 + -0x73d7b1c4) = 0xf;
    Vec3_set_xyz(auStack_14,ar5,ar6,ar7);
    vec3_copy_8c023d8c(iVar4 * 0x124 + -0x73d7b178,auStack_14,ar6,ar7);
    uVar3 = 0xffffffff;
    object_dtor_delete(auStack_14,0xffffffff,ar6,ar7);
    Vec3_set_xyz(auStack_20,uVar3,ar6,ar7);
    vec3_copy_8c023d8c(iVar4 * 0x124 + -0x73d7b16c,auStack_20,ar6,ar7);
    uVar3 = 0xffffffff;
    object_dtor_delete(auStack_20,0xffffffff,ar6,ar7);
    Vec3_set_xyz(auStack_2c,uVar3,ar6,ar7);
    vec3_copy_8c023d8c(iVar4 * 0x124 + -0x73d7b160,auStack_2c,ar6,ar7);
    ar5 = 0xffffffff;
    object_dtor_delete(auStack_2c,0xffffffff,ar6,ar7);
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b150);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x43160000;
    }
    else {
      *puVar1 = 0xec43160000;
    }
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b184);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x41100000;
    }
    else {
      *puVar1 = 0xc841100000;
    }
    pfVar2 = (float *)(iVar4 * 0x124 + -0x73d7b1a8);
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b1a8);
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)puVar1);
    }
    else {
      in_xd0 = *puVar1;
      dVar5 = 4.92819431073484e-312;
    }
    if (cVar6 == '\0') {
      in_fr1 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      in_fr1 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar7 == '\0') {
      *pfVar2 = in_fr1;
    }
    else {
      *(undefined8 *)pfVar2 = in_xd0;
    }
    puVar1 = (undefined8 *)(iVar4 * 0x124 + -0x73d7b188);
    if (cVar7 == '\0') {
      *(undefined4 *)puVar1 = 0x41e80000;
    }
    else {
      in_fr1 = 29.0;
      *puVar1 = 0x54f31fe341e80000;
    }
  }
  for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
    *(undefined2 *)(iVar4 * 0x10 + -0x73d7b140) = 0xffff;
    *(undefined4 *)(iVar4 * 0x10 + -0x73d7b13c) = 1;
    *(undefined4 *)(iVar4 * 0x10 + -0x73d7b138) = 0;
    *(undefined4 *)(iVar4 * 0x10 + -0x73d7b134) = 0;
  }
  return 1;
}



/* FUN_8c09ea78 @ 8c09ea78 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09ead6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ea78(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  undefined1 *ar4_00;
  int ar5_00;
  undefined4 ar5_01;
  float fVar5;
  ulonglong in_dr0;
  double dVar6;
  code *pcVar7;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  undefined4 in_stack_ffffff88;
  undefined1 auStack_1c [8];
  undefined8 uStack_14;
  
  cVar9 = '\0';
  cVar8 = '\0';
  ar4_00 = auStack_1c;
  Vec3_ctor_zero(ar4_00,ar5,ar6,ar7);
  if (_DAT_8c284d80 < 3) {
    uVar2 = rand(ar4_00,ar5,ar6,ar7);
    ar5 = 5;
    iVar3 = libgcc_divide_helper_01031c(uVar2,5,ar6,ar7);
    if (iVar3 == 0) {
      for (iVar3 = 0; fVar5 = (float)in_dr0, iVar3 < 3; iVar3 = iVar3 + 1) {
        if (cVar9 == '\0') {
          fVar5 = *(float *)(&DAT_8c13aae4 + iVar3 * 4);
        }
        else {
          in_xd0 = *(undefined8 *)(&DAT_8c13aae4 + iVar3 * 4);
        }
        in_dr0 = (ulonglong)(uint)fVar5;
        if ((fVar5 == 0.0) && (*(int *)(ar4 + 0xfd0) == 0)) {
          FUN_8c22195c(iVar3 + 2,ar5,ar6,ar7,in_stack_ffffff88);
          ar5_00 = ar4 + 0x30;
          Vec3_assign(auStack_1c,ar5_00,ar6,ar7);
          if (cVar9 == '\0') {
            dVar6 = (double)CONCAT44(0x41700000,(undefined4)uStack_14);
          }
          else {
            dVar6 = -3.1600868374053233e-250;
            in_xd0 = uStack_14;
          }
          if (cVar8 == '\0') {
            fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar6 + dVar6,0);
          }
          uVar1 = in_xd0;
          if (cVar9 == '\0') {
            uStack_14 = CONCAT44(uStack_14._4_4_,fVar5);
            uVar1 = uStack_14;
          }
          uStack_14 = uVar1;
          FUN_8c2219ac(iVar3 + 2,ar5_00,ar6,ar7,in_stack_ffffff88);
          if (cVar9 == '\0') {
            *(undefined4 *)(&DAT_8c13aae4 + iVar3 * 4) = 0x3dcccccd;
          }
          else {
            *(undefined8 *)(&DAT_8c13aae4 + iVar3 * 4) = 0x8c22195c3dcccccd;
          }
          *(undefined4 *)(&DAT_8c13aaf0 + iVar3 * 4) = 1;
          _DAT_8c284d80 = _DAT_8c284d80 + 1;
          *(int *)(ar4 + 0xfd0) = iVar3 + 1;
          ar5 = 1;
          FUN_8c221916(*(int *)(ar4 + 0xfd0) + 1,1,ar6,ar7);
          break;
        }
      }
    }
  }
  if (*(int *)(ar4 + 0xfd0) != 0) {
    FUN_8c22195c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffff88);
    FUN_8c21410c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffff88);
    FUN_8c2219ac(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffff88);
    iVar3 = *(int *)(ar4 + 0xfd0) + 1;
    FUN_8c21415c(iVar3,ar5,ar6,ar7,in_stack_ffffff88);
    if (*(int *)(&DAT_8c13aaf0 + (*(int *)(ar4 + 0xfd0) + -1) * 4) == 1) {
      pfVar4 = (float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x3c23d70a,*pfVar4);
      }
      else {
        in_xd0 = *(undefined8 *)pfVar4;
        dVar6 = -3.01216570193662e-250;
      }
      if (cVar8 == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar9 == '\0') {
        *pfVar4 = fVar5;
      }
      else {
        *(undefined8 *)pfVar4 = in_xd0;
      }
      if (cVar9 == '\0') {
        fVar5 = *(float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
      }
      if (cVar8 != '\0' || 1.0 <= fVar5) {
        *(undefined4 *)(&DAT_8c13aaf0 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 0;
      }
    }
    else {
      pfVar4 = (float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x3c23d70a,*pfVar4);
      }
      else {
        in_xd0 = *(undefined8 *)pfVar4;
        dVar6 = -3.01216570193662e-250;
      }
      if (cVar8 == '\0') {
        fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar9 == '\0') {
        *pfVar4 = fVar5;
      }
      else {
        *(undefined8 *)pfVar4 = in_xd0;
      }
      if (cVar9 == '\0') {
        fVar5 = *(float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
        pcVar7 = (code *)0x3dcccccd;
      }
      else {
        fVar5 = 0.1;
        pcVar7 = FUN_8c22195c;
      }
      if (cVar8 != '\0' || fVar5 <= (float)pcVar7) {
        uVar2 = rand(iVar3,ar5,ar6,ar7);
        ar5_01 = 10;
        iVar3 = libgcc_divide_helper_01031c(uVar2,10,ar6,ar7);
        if (iVar3 == 0) {
          if (cVar9 == '\0') {
            *(undefined4 *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 0;
          }
          else {
            *(ulonglong *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4) =
                 (ulonglong)(uint)fVar5;
          }
          FUN_8c22195c(*(int *)(ar4 + 0xfd0) + 1,ar5_01,ar6,ar7,in_stack_ffffff88);
          FUN_8c21410c(*(int *)(ar4 + 0xfd0) + 1,ar5_01,ar6,ar7,in_stack_ffffff88);
          _DAT_8c284d80 = _DAT_8c284d80 + -1;
          FUN_8c221916(*(int *)(ar4 + 0xfd0) + 1,0,ar6,ar7);
          FUN_8c2140c6(*(int *)(ar4 + 0xfd0) + 1,0,ar6,ar7);
          *(undefined4 *)(ar4 + 0xfd0) = 0;
        }
        else {
          *(undefined4 *)(&DAT_8c13aaf0 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 1;
        }
      }
    }
  }
  uVar2 = Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
  return uVar2;
}



/* FUN_8c09edf0 @ 8c09edf0 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09ee08) */
/* WARNING: Removing unreachable block (ram,0x8c09ee00) */
/* WARNING: Removing unreachable block (ram,0x8c09edfc) */
/* WARNING: Removing unreachable block (ram,0x8c09ee02) */
/* WARNING: Removing unreachable block (ram,0x8c09ee0e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 * FUN_8c09edf0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  code *pcVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined4 in_stack_ffffffcc;
  
  cVar7 = '\0';
  cVar6 = '\0';
  FUN_8c2219ac(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffffcc);
  FUN_8c22195c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffffcc);
  FUN_8c21415c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffffcc);
  FUN_8c21410c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffffcc);
  pfVar2 = (float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(0x3c23d70a,*pfVar2);
  }
  else {
    in_xd0 = *(undefined8 *)pfVar2;
    dVar4 = 5.2386906893627653e-11;
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar7 == '\0') {
    *pfVar2 = fVar3;
  }
  else {
    *(undefined8 *)pfVar2 = in_xd0;
  }
  if (cVar7 == '\0') {
    fVar3 = *(float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
  }
  puVar1 = &DAT_8c09efa0;
  if (cVar7 == '\0') {
    pcVar5 = (code *)0x3dcccccd;
  }
  else {
    fVar3 = 0.1;
    pcVar5 = FUN_8c221916;
  }
  if (cVar6 != '\0' || fVar3 <= (float)pcVar5) {
    FUN_8c22195c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffffcc);
    FUN_8c21410c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffffcc);
    FUN_8c221916(*(int *)(ar4 + 0xfd0) + 1,0,ar6,ar7);
    FUN_8c2140c6(*(int *)(ar4 + 0xfd0) + 1,0,ar6,ar7);
    _DAT_8c284d80 = _DAT_8c284d80 + -1;
    *(undefined4 *)(&DAT_8c13aaf0 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 0;
    if (cVar7 == '\0') {
      *(undefined4 *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 0;
    }
    else {
      *(ulonglong *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = (ulonglong)(uint)fVar3;
    }
    puVar1 = (undefined4 *)0xfd0;
    *(undefined4 *)(ar4 + 0xfd0) = 0;
  }
  return puVar1;
}



/* FUN_8c09efb4 @ 8c09efb4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09efe0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c09efb4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(ar4 + 0xfd0) != 0) {
    _DAT_8c284d80 = _DAT_8c284d80 + -1;
    *(undefined4 *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 0;
    *(undefined4 *)(&DAT_8c13aaf0 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 0;
    FUN_8c221916(*(int *)(ar4 + 0xfd0) + 1,1,ar6,ar7);
    FUN_8c2140c6(*(int *)(ar4 + 0xfd0) + 1,1,ar6,ar7);
    uVar1 = 0xfd0;
    *(undefined4 *)(ar4 + 0xfd0) = 0;
  }
  return uVar1;
}



/* Class_12ab2c_m3_09f038 @ 8c09f038 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 Class_12ab2c_m3_09f038(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x10))(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c09f060 @ 8c09f060 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c09f060(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126110,ar5,ar6,ar7);
  uVar3 = 0x8c284d50;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284d50,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126120,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284d5c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284d5c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126130,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284d68;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284d68,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126140,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284d74;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284d74,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126150 = CONCAT44(_UNK_8c126154,0x800000);
                    /* WARNING: Read-only address (ram,0x8c126154) is written */
  }
  else {
    _DAT_8c126150 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c02452c(0x8c284d90,pcVar2,uVar3,ar7);
  uVar3 = 0x8c284d84;
  pcVar2 = FUN_8c03a4ac;
  global_list_push(uVar1,FUN_8c03a4ac,0x8c284d84,ar7);
  uVar1 = FUN_8c024824(0x8c284ec0,pcVar2,uVar3,ar7);
  global_list_push(uVar1,free_if_nonnull_wrap_03a454,0x8c284eb4,ar7);
  uVar1 = 4;
  FUN_8c010120(0x8c284f30,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0xf);
  global_list_push(0,FUN_8c09f390,0x8c284f24,uVar1);
  ar7_00 = 4;
  FUN_8c010120(0x8c284f78,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0xf);
  uVar1 = 0x8c284f6c;
  pcVar2 = FUN_8c09f36c;
  global_list_push(0,FUN_8c09f36c,0x8c284f6c,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c284fc8,pcVar2,uVar1,ar7_00);
  uVar3 = 0x8c284fbc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284fbc,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c284fe4,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c284fd8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284fd8,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c285000,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c284ff4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c284ff4,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c28501c,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c285010;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285010,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c285038,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c28502c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28502c,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c285054,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c285048;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285048,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c285070,pcVar2,uVar3,ar7_00);
  uVar3 = 0x8c285064;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c285064,ar7_00);
  uVar1 = Vec3_ctor_xyz(0x8c28508c,pcVar2,uVar3,ar7_00);
  global_list_push(uVar1,Vec3_dtor,0x8c285080,ar7_00);
  uVar3 = 0x8c285000;
  uVar1 = FUN_8c017010(0x8c2850a8,0x8c284fc8,0x8c284fe4,0x8c285000,0x8c28501c,0x8c285038,0x8c285054,
                       0x8c285070,0x8c28508c);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c28509c,uVar3);
  return uVar1;
}



/* FUN_8c09f36c @ 8c09f36c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09f36c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c284f78,free_if_nonnull_wrap_03a3dc,4,0xf,in_PR);
  return uVar1;
}



/* FUN_8c09f390 @ 8c09f390 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09f390(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c284f30,free_if_nonnull_wrap_0247b0,4,0xf,in_PR);
  return uVar1;
}



/* FUN_8c09f3b4 @ 8c09f3b4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * FUN_8c09f3b4(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c09f400)(ar4,ar5,ar6,ar7);
  *ar4 = PTR_DAT_8c09f404;
  (*(code *)PTR_FUN_8c09f40c)((int)ar4 + DAT_8c09f408,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c09f410 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c09f414 + (int)ar4) = 0xf;
  *(undefined4 *)(DAT_8c09f418 + (int)ar4) = 0xf;
  *(undefined4 *)(DAT_8c09f41c + (int)ar4) = 0xf;
  *(undefined1 *)(DAT_8c09f420 + (int)ar4) = 0;
  *(undefined4 *)(DAT_8c09f424 + (int)ar4) = 0;
  return ar4;
}



/* Class_12acc8_m0_09f428 @ 8c09f428 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 * Class_12acc8_m0_09f428(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12acc8;
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}



/* Class_12acc8_m1_09f470 @ 8c09f470 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09fa58) */
/* WARNING: Removing unreachable block (ram,0x8c09f470) */
/* WARNING: Removing unreachable block (ram,0x8c09fc44) */
/* WARNING: Unknown calling convention */

undefined4 Class_12acc8_m1_09f470(int *ar4,int *ar5,code *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  code *pcVar9;
  int *a5;
  undefined4 uVar10;
  code *pcVar11;
  undefined4 ar6_00;
  undefined4 *ar6_01;
  undefined4 in_fr1;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double in_dr14;
  double in_xd0;
  char cVar17;
  char cVar18;
  undefined4 in_stack_fffffeb8;
  undefined2 uVar19;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 auStack_b0 [4];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [32];
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  uVar19 = (undefined2)((uint)in_stack_fffffeb8 >> 0x10);
  cVar18 = '\0';
  cVar17 = '\0';
  piVar7 = ar5;
  pcVar11 = ar6;
  Vec3_ctor_zero(&iStack_24,ar5,ar6,ar7);
  Vec3_ctor_zero(&fStack_34,piVar7,pcVar11,ar7);
  puVar8 = auStack_54;
  puVar5 = &DAT_8c13aea4;
  iVar4 = 0x10;
  do {
    puVar6 = puVar5 + 1;
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar8[1] = *puVar6;
    puVar8 = puVar8 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (cVar18 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),0xbf800000);
    uStack_b8 = 0;
  }
  else {
    auStack_b0[0] = 0;
    uStack_b8 = in_fr1;
  }
  uStack_b4 = 0;
  DAT_8c13ae98 = ar4[0x20a];
  DAT_8c13ae9c = ar4[0x20b];
  DAT_8c13aea0 = ar4[0x20c];
  uVar1 = FUN_8c1011b0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),0xa0,pcVar11,ar7);
  uVar3 = CONCAT22(uVar19,(ushort)uVar1);
  if (0x78 < (ushort)uVar1) {
    ar4[0x27] = 0;
  }
  iVar4 = (**(code **)(*ar5 + 0x11c))(ar5,2,pcVar11,ar7);
  if (iVar4 == 1) {
    uVar10 = 0;
    uVar1 = (**(code **)(*ar5 + 0x100))(ar5,2,0,ar7);
    FUN_8c02f670(uVar1,FUN_8c02f670,uVar10,ar7,auStack_80);
    Vec3_assign(&iStack_24,auStack_80,uVar10,ar7);
    Vec3_dtor(auStack_80,0xffffffff,uVar10,ar7);
    if (cVar18 == '\0') {
      ar4[0x1c] = iStack_24;
      ar4[0x1d] = iStack_20;
      dVar16 = (double)CONCAT44(iStack_1c,in_fr1);
      ar4[0x1e] = iStack_1c;
    }
    else {
      *(ulonglong *)(ar4 + 0x1c) = CONCAT44(iStack_20,iStack_24);
      *(ulonglong *)(ar4 + 0x1d) = CONCAT44(iStack_1c,iStack_20);
      dVar16 = (double)CONCAT44(uStack_18,iStack_1c);
      *(double *)(ar4 + 0x1e) = dVar16;
    }
    pcVar11 = (code *)(ar4 + 0x1d);
  }
  else if (cVar18 == '\0') {
    ar4[0x1e] = -0x383cb000;
    ar4[0x1d] = -0x383cb000;
    dVar16 = (double)CONCAT44(0xc7c35000,in_fr1);
    ar4[0x1c] = -0x383cb000;
  }
  else {
    ar4[0x1e] = -0x383cb000;
    ar4[0x1f] = 0x11c;
    ar4[0x1d] = -0x383cb000;
    ar4[0x1e] = 0x11c;
    dVar16 = 6.04302648840037e-312;
    ar4[0x1c] = -0x383cb000;
    ar4[0x1d] = 0x11c;
  }
  iVar4 = (**(code **)(*ar5 + 0x11c))(ar5,3,pcVar11,ar7);
  if (0 < iVar4) {
    FUN_8c02cbd4(*(int *)(ar6 + 4) + 0xa8,999,pcVar11,ar7,uVar3);
  }
  pcVar11 = ar6;
  FUN_8c0a0040(ar4,ar5,ar6,ar7);
  iVar4 = (int)*(char *)((int)ar4 + 0x82);
  dVar14 = dVar16;
  if ((*(char *)((int)ar4 + 0x82) == '\x01') && (ar4[1] != 1)) {
    (**(code **)(*ar5 + 0x178))(ar5,1,pcVar11,ar7);
    if (cVar18 == '\0') {
      dVar14 = (double)CONCAT44(0x41200000,(int)((ulonglong)dVar16 >> 0x20));
    }
    else {
      dVar14 = 3.48547133842862e-312;
      in_xd0 = dVar16;
    }
    if (cVar17 == '\0' && (float)((ulonglong)dVar14 >> 0x20) < SUB84(dVar14,0)) {
      if ((char)ar4[0x29] == '\0') {
        *(undefined1 *)(ar4 + 0x29) = 1;
        ar4[1] = 0xc;
        ar4[0x10] = 4;
        ar4[2] = 0x55;
        ar4[3] = 0;
        iVar4 = 0x505;
        FUN_8c02f298(ar4,0x505,pcVar11,ar7);
      }
      else {
        uVar1 = rand((int)(char)ar4[0x29],iVar4,pcVar11,ar7);
        iVar4 = 3000;
        iVar2 = libgcc_divide_helper_01031c(uVar1,3000,pcVar11,ar7);
        if (iVar2 == 1) {
          ar4[1] = 0xc;
          ar4[0x10] = 4;
          ar4[2] = 0x55;
          ar4[3] = 0;
          iVar4 = 0x505;
          FUN_8c02f298(ar4,0x505,pcVar11,ar7);
        }
      }
      *(undefined1 *)((int)ar4 + 0x82) = 0;
      goto LAB_8c09f768;
    }
  }
  *(undefined1 *)(ar4 + 0x29) = 0;
LAB_8c09f768:
  iVar2 = (**(code **)(*(int *)(*(int *)ar6 + 8) + 0xb8))(*(int *)ar6,iVar4,pcVar11,ar7);
  if ((iVar2 == 1) && (ar4[1] != 1)) {
    ar4[1] = 0xb;
    ar4[2] = 99;
    if (ar4[0x1b] != 0) {
      (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],iVar4,pcVar11,ar7);
      ar4[0x1b] = 0;
    }
    pcVar11 = get_field_6c_02f46c;
    iVar2 = get_field_6c_02f46c(*(int *)ar6,iVar4,get_field_6c_02f46c,ar7);
    if ((iVar2 == 0) && (iVar4 = get_field_70_05f490(*(int *)ar6,iVar4,pcVar11,ar7), iVar4 == 0)) {
      FUN_8c0f4d84(*(int *)ar6,FUN_8c0f4d84,pcVar11,ar7);
    }
  }
  pcVar9 = ar6;
  FUN_8c02f20c(ar4,ar6,pcVar11,ar7);
  uVar1 = get_field_4_05eed8(ar4,pcVar9,pcVar11,ar7);
  piVar7 = ar4;
  a5 = ar5;
  pcVar11 = ar6;
  FUN_8c09ff1c(ar4,ar5,ar6,uVar1);
  if (ar4[1] != 1) {
    piVar7 = ar5;
    (**(code **)(*ar5 + 0x178))(ar5,a5,pcVar11,uVar1);
    if (cVar18 == '\0') {
      dVar16 = (double)CONCAT44(0x41200000,(int)((ulonglong)dVar14 >> 0x20));
    }
    else {
      dVar16 = 2.74277281159077e-312;
      in_xd0 = dVar14;
    }
    dVar14 = dVar16;
    if ((cVar17 == '\0' && (float)((ulonglong)dVar14 >> 0x20) < SUB84(dVar14,0)) &&
       (((*(char *)((int)ar4 + 0x81) == '\x01' || (*(char *)((int)ar4 + 0x83) == '\x02')) ||
        (*(char *)((int)ar4 + 0x83) == '\x03')))) {
      pcVar11 = (code *)0x2;
      a5 = (int *)0x0;
      FUN_8c09fef8(*(int *)(ar6 + 0xc),0,2,uVar1);
      iVar4 = ar4[0x27];
      if ((iVar4 < 7) && (-1 < iVar4)) {
                    /* WARNING: Switch is manually overridden */
        switch(iVar4) {
        default:
          ar4[0x20a] = 8;
          ar4[0x10] = 8;
          DAT_8c13ae98 = 8;
          ar4[1] = 0xd;
          ar4[2] = 0x5f;
          ar4[3] = 0;
          break;
        case 4:
        case 5:
          iVar4 = (**(code **)(*ar5 + 0x11c))(ar5,2,pcVar11,uVar1);
          uVar3 = SUB84(dVar14,0);
          if (iVar4 == 1) {
            Vec3_assign(&fStack_34,*(int *)(ar6 + 0x14) + 0x10,pcVar11,uVar1);
            ar6_00 = 0;
            uVar10 = 2;
            uVar3 = (**(code **)(*ar5 + 0x100))(ar5,2,0,uVar1);
            FUN_8c02f670(uVar3,uVar10,ar6_00,uVar1,auStack_90);
            Vec3_assign(&iStack_24,auStack_90,ar6_00,uVar1);
            Vec3_dtor(auStack_90,0xffffffff,ar6_00,uVar1);
            ar6_01 = &uStack_c0;
            puVar5 = auStack_60;
            FUN_8c256294(0,puVar5,ar6_01,uVar1);
            Vec3_ctor_zero(auStack_70,puVar5,ar6_01,uVar1);
            pcVar11 = (code *)&uStack_b8;
            FUN_8c101210(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),&uStack_b4,pcVar11,uVar1);
            if (cVar18 == '\0') {
              dVar16 = (double)CONCAT44(uStack_c0,uStack_b4);
            }
            else {
              in_xd0 = (double)CONCAT44(auStack_b0[0],uStack_b4);
              dVar16 = (double)CONCAT44(uStack_bc,uStack_c0);
            }
            if (cVar17 == '\0') {
              fStack_34 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
            }
            else {
              fStack_34 = SUB84(dVar16 - dVar16,0);
            }
            if (cVar18 == '\0') {
              dVar16 = (double)CONCAT44(uStack_bc,uStack_b8);
            }
            else {
              fStack_34 = SUB84(in_xd0,0);
              in_xd0 = (double)CONCAT44(uStack_b4,uStack_b8);
              dVar16 = (double)CONCAT44(uStack_b8,uStack_bc);
            }
            if (cVar17 == '\0') {
              fVar13 = SUB84(dVar16,0) - (float)((ulonglong)dVar16 >> 0x20);
            }
            else {
              fVar13 = SUB84(dVar16 - dVar16,0);
            }
            fVar12 = fStack_34;
            fStack_30 = fVar13;
            if (cVar18 != '\0') {
              fStack_30 = SUB84(in_xd0,0);
              uStack_2c = (undefined4)((ulonglong)in_xd0 >> 0x20);
              in_xd0 = (double)CONCAT44(fStack_30,fStack_34);
              fVar12 = fVar13;
            }
            if (cVar17 == '\0' && fVar12 < 0.0) {
              if (cVar18 == '\0') {
                dVar16 = (double)CONCAT44(0xbf800000,fStack_34);
              }
              else {
                in_xd0 = (double)CONCAT44(fStack_30,fStack_34);
                dVar16 = 52776583233536.0;
              }
              if (cVar17 == '\0') {
                fVar12 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
              }
              else {
                fVar12 = SUB84(dVar16 * dVar16,0);
              }
              fStack_34 = fVar12;
              if (cVar18 != '\0') {
                fStack_34 = SUB84(in_xd0,0);
                fStack_30 = (float)((ulonglong)in_xd0 >> 0x20);
              }
            }
            fVar13 = fStack_30;
            if (cVar18 != '\0') {
              in_xd0 = (double)CONCAT44(uStack_2c,fStack_30);
              fVar13 = fVar12;
            }
            if (cVar17 == '\0' && fVar13 < 0.0) {
              if (cVar18 == '\0') {
                dVar16 = (double)CONCAT44(0xbf800000,fStack_30);
              }
              else {
                in_xd0 = (double)CONCAT44(uStack_2c,fStack_30);
                dVar16 = 52776583233536.0;
              }
              if (cVar17 == '\0') {
                fStack_30 = SUB84(dVar16,0) * (float)((ulonglong)dVar16 >> 0x20);
              }
              else {
                fStack_30 = SUB84(dVar16 * dVar16,0);
              }
              if (cVar18 != '\0') {
                fStack_30 = SUB84(in_xd0,0);
                uStack_2c = (undefined4)((ulonglong)in_xd0 >> 0x20);
              }
            }
            if (cVar18 == '\0') {
              dVar16 = (double)CONCAT44(0x42c80000,fStack_34);
            }
            else {
              in_xd0 = (double)CONCAT44(fStack_30,fStack_34);
              dVar16 = -1.1352410522239538e-250;
            }
            if (cVar17 == '\0' && SUB84(dVar16,0) < (float)((ulonglong)dVar16 >> 0x20)) {
              if (cVar18 == '\0') {
                dVar16 = (double)CONCAT44(0x42c80000,fStack_30);
              }
              else {
                in_xd0 = (double)CONCAT44(uStack_2c,fStack_30);
                dVar16 = -1.1352410522239538e-250;
              }
              if (cVar17 == '\0' && SUB84(dVar16,0) < (float)((ulonglong)dVar16 >> 0x20)) {
                if (cVar18 == '\0') {
                  in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fStack_34);
                  dVar16 = (double)CONCAT44(fStack_30,SUB84(dVar16,0));
                }
                else {
                  dVar16 = (double)CONCAT44(uStack_2c,fStack_30);
                }
                if (cVar17 == '\0') {
                  in_dr14 = (double)(ulonglong)
                                    (uint)(SUB84(in_dr14,0) + (float)((ulonglong)dVar16 >> 0x20));
                }
                else {
                  in_dr14 = in_dr14 + dVar16;
                }
              }
            }
            uVar3 = SUB84(dVar16,0);
            Vec3_dtor(auStack_70,0xffffffff,pcVar11,uVar1);
          }
          if (cVar18 == '\0') {
            dVar14 = (double)CONCAT44(0xbf800000,uVar3);
          }
          else {
            dVar14 = 52776583233536.0;
          }
          if (SUB84(in_dr14,0) == (float)((ulonglong)dVar14 >> 0x20)) {
            Vec3_ctor_copy(auStack_a0,*(int *)(ar6 + 0x14) + 0x10,pcVar11,uVar1);
            uVar3 = SUB84(dVar14,0);
            Vec3_assign_wrap_063818(ar4,auStack_a0,pcVar11,uVar1);
            Vec3_dtor(auStack_a0,0xffffffff,pcVar11,uVar1);
            Vec3_ctor_copy(auStack_b0,*(int *)(ar6 + 0x14) + 0x10,pcVar11,uVar1);
            Vec3_assign_wrap_05f640(ar4,auStack_b0,pcVar11,uVar1);
            a5 = (int *)0xffffffff;
            Vec3_dtor(auStack_b0,0xffffffff,pcVar11,uVar1);
            piVar7 = ar4 + 0xc;
            if (cVar18 == '\0') {
              *piVar7 = 0x44960000;
              dVar14 = (double)CONCAT44(0x44af0000,uVar3);
              ar4[0x1e] = 0x44af0000;
            }
            else {
              piVar7[0] = 0x44960000;
              piVar7[1] = 0x44af0000;
              dVar14 = 3.1118736849719273e-159;
              ar4[0x1e] = 0x44af0000;
              ar4[0x1f] = 0x1f05e005;
            }
            ar4[1] = 8;
            ar4[0x10] = 3;
            ar4[2] = 0x55;
            ar4[3] = 0;
          }
          else {
            ar4[1] = 0xb;
            ar4[0x10] = 3;
            ar4[2] = 0x55;
            ar4[3] = 0;
            FUN_8c0a0278(ar4,ar5,pcVar11,uVar1);
            a5 = (int *)0x4a6;
            FUN_8c02f298(ar4,0x4a6,pcVar11,uVar1);
          }
          break;
        case 6:
          ar4[0x20a] = 5;
          ar4[0x10] = 5;
          DAT_8c13ae98 = 5;
          ar4[1] = 0xd;
          ar4[2] = 0x5f;
          a5 = (int *)0x0;
          ar4[3] = 0;
        }
      }
      piVar7 = (int *)0x0;
      *(undefined1 *)((int)ar4 + 0x81) = 0;
    }
  }
  if ((ar4[1] == 0) && (ar4[1] != 1)) {
    uVar3 = rand(piVar7,a5,pcVar11,uVar1);
    iVar4 = libgcc_divide_helper_01031c(uVar3,300,pcVar11,uVar1);
    if (iVar4 < 1) {
      ar4[0x20a] = 9;
      ar4[0x10] = 9;
      DAT_8c13ae98 = 9;
      ar4[1] = 0xd;
      ar4[2] = 0x4b;
      ar4[3] = 0;
      uVar3 = 2;
      FUN_8c09fed4(*(int *)(ar6 + 0xc),0,2,uVar1);
      if (cVar18 == '\0') {
        uVar15 = CONCAT44(0x47c35000,(int)((ulonglong)dVar14 >> 0x20));
        dVar14 = in_xd0;
      }
      else {
        uVar15 = 0x8c0a027847c35000;
      }
      if ((float)uVar15 == (float)((ulonglong)uVar15 >> 0x20)) {
        FUN_8c0a0278(ar4,ar5,uVar3,uVar1);
        FUN_8c09fef8(*(int *)(ar6 + 0xc),0,0,uVar1);
        FUN_8c09fef8(*(int *)(ar6 + 0xc),0,1,uVar1);
        pcVar11 = (code *)0x2;
        FUN_8c09fef8(*(int *)(ar6 + 0xc),0,2,uVar1);
      }
      else {
        FUN_8c09fed4(*(int *)(ar6 + 0xc),0,0,uVar1);
        fStack_fc = (float)uVar15;
        fVar13 = (float)((ulonglong)uVar15 >> 0x20);
        if (cVar18 == '\0') {
          ar4[10] = (int)fVar13;
          fStack_fc = fVar13;
        }
        else {
          *(undefined8 *)(ar4 + 10) = uVar15;
        }
        uVar10 = 1;
        uVar3 = 0;
        iVar4 = *(int *)(ar6 + 0xc);
        FUN_8c09fed4(iVar4,0,1,uVar1);
        fVar13 = (float)((ulonglong)uVar15 >> 0x20);
        fStack_100 = fVar13;
        if (cVar18 != '\0') {
          fStack_100 = (float)uVar15;
          fStack_fc = fVar13;
        }
        uVar3 = rand(iVar4,uVar3,uVar10,uVar1);
        fVar13 = (float)uVar15;
        iVar4 = libgcc_divide_helper_01031c(uVar3,400,uVar10,uVar1);
        if (cVar18 != '\0') {
          dVar14 = (double)CONCAT44(fStack_fc,fStack_100);
          fStack_100 = fVar13;
        }
        if (cVar17 == '\0') {
          fStack_100 = fStack_100 + (float)iVar4;
        }
        else {
          fStack_100 = SUB84((double)iVar4 + (double)iVar4,0);
        }
        if (cVar18 == '\0') {
          dVar16 = (double)CONCAT44(0x43480000,fStack_100);
        }
        else {
          dVar16 = 3.23101057606842e-312;
        }
        if (cVar17 == '\0') {
          fVar13 = (float)((ulonglong)dVar16 >> 0x20);
          dVar16 = (double)CONCAT44(fVar13,SUB84(dVar16,0) - fVar13);
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar18 == '\0') {
          ar4[0xb] = SUB84(dVar16,0);
        }
        else {
          *(double *)(ar4 + 0xb) = dVar14;
        }
        pcVar11 = (code *)0x2;
        uVar10 = 0;
        iVar4 = *(int *)(ar6 + 0xc);
        FUN_8c09fed4(iVar4,0,2,uVar1);
        uStack_108 = dVar16;
        if (cVar18 == '\0') {
          uStack_108 = (double)CONCAT44(uVar3,(int)((ulonglong)dVar16 >> 0x20));
        }
        uVar3 = rand(iVar4,uVar10,pcVar11,uVar1);
        fVar13 = SUB84(dVar16,0);
        iVar4 = libgcc_divide_helper_01031c(uVar3,400,pcVar11,uVar1);
        dVar16 = uStack_108;
        if (cVar18 == '\0') {
          dVar16 = dVar14;
          fVar13 = (float)uStack_108;
        }
        if (cVar17 == '\0') {
          fVar13 = fVar13 + (float)iVar4;
        }
        else {
          fVar13 = SUB84((double)iVar4 + (double)iVar4,0);
        }
        if (cVar18 == '\0') {
          dVar14 = (double)CONCAT44(0x43480000,fVar13);
        }
        else {
          dVar14 = 3.23101057606842e-312;
        }
        if (cVar17 == '\0') {
          fVar13 = SUB84(dVar14,0) - (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          fVar13 = SUB84(dVar14 - dVar14,0);
        }
        if (cVar18 == '\0') {
          ar4[0xc] = (int)fVar13;
        }
        else {
          *(double *)(ar4 + 0xc) = dVar16;
        }
      }
    }
  }
  if ((char)ar4[0x26] == '\0') {
    iVar4 = *(int *)(*(int *)ar6 + 8);
    iVar4 = (**(code **)(iVar4 + 0x18c))(*(int *)ar6,iVar4,pcVar11,uVar1);
    if (iVar4 == 1) {
      ar4[0x10] = 0xb;
      DAT_8c13ae98 = 0xb;
      ar4[1] = 0xd;
      ar4[2] = 0x5f;
      ar4[3] = 0;
    }
    else {
      *(undefined1 *)(ar4 + 0x26) = 1;
    }
  }
  else if ((char)ar4[0x26] == '\x01') {
    ar4[0x10] = 0xc;
    DAT_8c13ae98 = 0xc;
    ar4[1] = 0xd;
    ar4[2] = 0x5f;
    ar4[3] = 0;
  }
  pcVar9 = ar6;
  FUN_8c0a0224(ar4,ar6,pcVar11,uVar1);
  FUN_8c05ee90(*(int *)(ar6 + 8),pcVar9,pcVar11,uVar1);
  iVar4 = get_field_124_027930(*(int *)(ar6 + 8),pcVar9,pcVar11,uVar1);
  iVar2 = get_field_40_05eea0(ar4,pcVar9,pcVar11,uVar1);
  if (iVar4 != iVar2) {
    uVar3 = get_field_40_05eea0(ar4,pcVar9,pcVar11,uVar1);
    pcVar11 = (code *)0x1;
    FUN_8c031b08(*(int *)(ar6 + 8),uVar3,1,uVar1);
  }
  *(undefined1 *)((int)ar4 + 0x83) = 4;
  *(undefined1 *)((int)ar4 + 0x81) = 0;
  Vec3_dtor(&fStack_34,0xffffffff,pcVar11,uVar1);
  uVar1 = Vec3_dtor(&iStack_24,0xffffffff,pcVar11,&iStack_24);
  return uVar1;
}



/* FUN_8c09fed4 @ 8c09fed4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c09fed4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)(short)ar6 << 2;
}



/* FUN_8c09fef8 @ 8c09fef8 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c09ff16) */
/* WARNING: Unknown calling convention */

int FUN_8c09fef8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)((short)ar5 * 0xc + ar4 + (short)ar6 * 4 + 0x14) = in_fr4;
  return (short)ar6 * 4;
}



/* FUN_8c09ff1c @ 8c09ff1c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c09ff1c(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a5;
  int *ar6_00;
  
  a5 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13adfc + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    FUN_8c0a00f8(ar4,ar5,ar6,ar7);
    a5 = 1;
    FUN_8c02f404(ar4,1,ar6_00,ar7,iVar2);
  }
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 2) {
    FUN_8c02f404(ar4,3,ar6_00,ar7,iVar2);
  }
  else if (iVar1 == 3) {
    if (*(int *)(ar4 + 4) == 0xb) {
      FUN_8c0a0278(ar4,ar5,ar6_00,ar7);
    }
    else {
      FUN_8c02f404(ar4,3,ar6_00,ar7,iVar2);
      FUN_8c02fdd8(ar4,ar5,ar6_00,ar7);
    }
  }
  else if (iVar1 == 6) {
    iVar2 = (**(code **)(*(int *)(*ar6 + 8) + 0xb4))(*ar6,a5,ar6_00,ar7);
    if (iVar2 == 1) {
      iVar2 = *ar6;
      FUN_8c027954(iVar2,a5,ar6_00,ar7);
      FUN_8c0c4e2c(iVar2,a5,ar6_00,ar7);
    }
  }
  else if (((iVar1 == 10) && (iVar2 = FUN_8c02c518(ar6[1],a5,ar6_00,ar7), iVar2 != 0)) &&
          (iVar2 == 1)) {
    *(undefined4 *)(ar4 + 0x40) = 0xe;
  }
  return 1;
}


