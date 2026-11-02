#include "../decls.h"
undefined4 FUN_8c04f034_def(code *ar4,undefined4 ar5,code *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 ar7_00;
  undefined1 *ar4_00;
  undefined4 uVar10;
  float fVar11;
  double in_dr0;
  double dVar12;
  float fVar13;
  undefined8 in_dr14;
  double in_xd0;
  bool bVar14;
  char cVar15;
  char cVar16;
  undefined4 in_stack_00000000;
  code *in_stack_00000004;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [12];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [12];
  undefined1 auStack_ec [16];
  undefined1 auStack_dc [12];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [12];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [12];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  double dStack_64;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  cVar16 = '\0';
  cVar15 = '\0';
  uVar10 = 1;
  pcVar9 = ar6;
  uVar7 = ar7;
  uVar8 = ar7;
  Vec3_ctor_copy(auStack_2c,ar7,ar6,ar7);
  Vec3_ctor_zero(auStack_3c,ar7,pcVar9,uVar7);
  Vec3_ctor_zero(auStack_4c,ar7,pcVar9,uVar7);
  Vec3_ctor_zero(auStack_5c,ar7,pcVar9,uVar7);
  pcVar5 = Vec3_ctor_zero;
  Vec3_ctor_zero(&uStack_6c,Vec3_ctor_zero,pcVar9,uVar7);
  FUN_8c023dac(auStack_78,pcVar5,pcVar9,uVar7);
  FUN_8c023dac(auStack_84,pcVar5,pcVar9,uVar7);
  iVar1 = get_field_6c_028cc4(ar5,pcVar5,pcVar9,uVar7);
  if (iVar1 == 0) {
    uStack_194 = 2;
    free_if_nonnull_wrap_016ac4(auStack_84,0xffffffff,pcVar9,uVar7);
    free_if_nonnull_wrap_016ac4(auStack_78,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(&uStack_6c,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(auStack_5c,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(auStack_4c,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(auStack_3c,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(auStack_2c,0xffffffff,pcVar9,uVar7);
    return uStack_194;
  }
  pcVar5 = get_field_6c_028cc4;
  uVar2 = get_field_6c_028cc4(ar5,get_field_6c_028cc4,pcVar9,uVar7);
  FUN_8c02f670(uVar2,pcVar5,pcVar9,uVar7,auStack_94);
  Vec3_assign(auStack_3c,auStack_94,pcVar9,uVar7);
  Vec3_dtor(auStack_94,0xffffffff,pcVar9,uVar7);
  pcVar5 = get_field_6c_028cc4;
  iVar1 = get_field_6c_028cc4(ar5,get_field_6c_028cc4,pcVar9,uVar7);
  iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,pcVar5,pcVar9,uVar7);
  dVar12 = in_dr0;
  if (iVar1 != 0x13) {
    iVar1 = get_field_6c_028cc4(ar5,pcVar5,pcVar9,uVar7);
    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,pcVar5,pcVar9,uVar7);
    dVar12 = in_dr0;
    if (iVar1 != 0x18) goto LAB_8c04f31c;
  }
  (**(code **)(**(int **)(ar4 + 0x244) + 0x128))(*(int **)(ar4 + 0x244),auStack_3c,pcVar9,uVar7);
  if (cVar16 == '\0') {
    in_dr0 = (double)CONCAT44(0x43340000,(int)((ulonglong)dVar12 >> 0x20));
  }
  else {
    in_dr0 = 4.84372090138479e-312;
    in_xd0 = dVar12;
  }
  if (cVar15 == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
    uStack_198 = 2;
    free_if_nonnull_wrap_016ac4(auStack_84,0xffffffff,pcVar9,uVar7);
    free_if_nonnull_wrap_016ac4(auStack_78,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(&uStack_6c,0xffffffff,pcVar9,uVar7);
    Vec3_dtor(auStack_5c,0xffffffff,pcVar9,uVar7);
    uVar8 = 0xffffffff;
    Vec3_dtor(auStack_4c,0xffffffff,0xffffffff,uVar7);
    Vec3_dtor(auStack_3c,0xffffffff,uVar8,uVar7);
    Vec3_dtor(auStack_2c,0xffffffff,uVar8,uVar7);
    return uStack_198;
  }
LAB_8c04f31c:
  uVar2 = get_field_6c_028cc4(ar5,get_field_6c_028cc4,pcVar9,uVar7);
  FUN_8c02f670(uVar2,FUN_8c02f670,pcVar9,uVar7,auStack_a4);
  pcVar5 = (code *)auStack_4c;
  pcVar9 = Vec3_assign;
  Vec3_assign(pcVar5,auStack_a4,Vec3_assign,pcVar5);
  Vec3_dtor(auStack_a4,0xffffffff,pcVar9,pcVar5);
  iVar1 = (**(code **)(**(int **)(ar4 + 0x244) + 0x104))(*(int **)(ar4 + 0x244),2,pcVar9,pcVar5);
  Vec3_assign(auStack_5c,iVar1 + 4,pcVar9,pcVar5);
  do {
    uVar7 = (undefined4)in_dr14;
    iVar1 = *(int *)(ar4 + 300);
    if ((9 < iVar1) || (iVar1 < 0)) goto switchD_8c04f3ac_default;
    pcVar6 = (code *)(&switchdata_8c04f3ac_8c04f3e4)[iVar1];
                    
    switch(iVar1) {
    case 0:
      *(undefined4 *)(ar4 + 0x178) = 1;
      pcVar9 = ar4 + 0x34c;
      iVar1 = FUN_8c055c38(ar4,ar6,pcVar9,in_stack_00000004);
      pcVar5 = in_stack_00000004;
      if (iVar1 == 0) {
        vec3_clear(ar4 + 0x2a8,ar6,pcVar9,in_stack_00000004);
        *(undefined4 *)(ar4 + 0x178) = 0;
        pcVar9 = (code *)0x12c;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        pcVar5 = in_stack_00000004;
      }
      goto switchD_8c04f3ac_default;
    case 1:
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 2:
      pcVar5 = (code *)(*(int *)(ar4 + 300) + 1);
      *(code **)(ar4 + 300) = pcVar5;
      break;
    case 4:
      goto switchD_8c04f3ac_caseD_4;
    case 5:
      CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar6,pcVar9,pcVar5,uVar8);
      iVar1 = get_field_1c_026dd8(ar4 + 0xb0,pcVar6,pcVar9,pcVar5);
      iVar1 = *(int *)(ar4 + 0x128) + (iVar1 + -0x16) * 2;
      if (iVar1 == 3) {
        uVar8 = 0x5e;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5e,pcVar9,pcVar5);
        puVar3 = (undefined4 *)deref_u32(uVar7,uVar8,pcVar9,pcVar5);
        FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar3,pcVar9,pcVar5);
        Vec3_assign(auStack_3c,auStack_b4,pcVar9,pcVar5);
        Vec3_dtor(auStack_b4,0xffffffff,pcVar9,pcVar5);
        uVar8 = 0x5e;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5e,pcVar9,pcVar5);
        piVar4 = (int *)deref_u32(uVar7,uVar8,pcVar9,pcVar5);
        FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(*piVar4 + 8),pcVar9,pcVar5);
        FUN_8c023e04(auStack_84,auStack_c0,pcVar9,pcVar5);
        free_if_nonnull_wrap_016ac4(auStack_c0,0xffffffff,pcVar9,pcVar5);
      }
      else if (iVar1 == 4) {
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5);
        puVar3 = (undefined4 *)deref_u32(uVar7,uVar7,pcVar9,pcVar5);
        FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar3,pcVar9,pcVar5);
        Vec3_assign(auStack_3c,auStack_d0,pcVar9,pcVar5);
        Vec3_dtor(auStack_d0,0xffffffff,pcVar9,pcVar5);
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5);
        piVar4 = (int *)deref_u32(uVar7,uVar7,pcVar9,pcVar5);
        FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(*piVar4 + 8),pcVar9,pcVar5);
        FUN_8c023e04(auStack_84,auStack_dc,pcVar9,pcVar5);
        free_if_nonnull_wrap_016ac4(auStack_dc,0xffffffff,pcVar9,pcVar5);
      }
      else if (iVar1 == 5) {
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5e,pcVar9,pcVar5);
        puVar3 = (undefined4 *)deref_u32(uVar7,uVar7,pcVar9,pcVar5);
        FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar3,pcVar9,pcVar5);
        Vec3_assign(auStack_3c,auStack_ec,pcVar9,pcVar5);
        Vec3_dtor(auStack_ec,0xffffffff,pcVar9,pcVar5);
        uVar8 = 0xb0;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5e,0xb0,pcVar5);
        piVar4 = (int *)deref_u32(uVar7,uVar7,uVar8,pcVar5);
        FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(*piVar4 + 8),uVar8,pcVar5);
        pcVar5 = FUN_8c023e04;
        FUN_8c023e04(auStack_84,auStack_f8,uVar8,FUN_8c023e04);
        pcVar9 = (code *)0xffffffff;
        free_if_nonnull_wrap_016ac4(auStack_f8,0xffffffff,0xffffffff,pcVar5);
      }
      else if (iVar1 == 6) {
        uVar8 = 0x5f;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5);
        puVar3 = (undefined4 *)deref_u32(uVar7,uVar8,pcVar9,pcVar5);
        FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar3,pcVar9,pcVar5);
        Vec3_assign(auStack_3c,auStack_108,pcVar9,pcVar5);
        Vec3_dtor(auStack_108,0xffffffff,pcVar9,pcVar5);
        uVar8 = 0x5f;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x5f,pcVar9,pcVar5);
        puVar3 = (undefined4 *)deref_u32(uVar7,uVar8,pcVar9,pcVar5);
        pcVar9 = (code *)*puVar3;
        FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(pcVar9 + 8),pcVar9,pcVar5);
        FUN_8c023e04(auStack_84,auStack_114,pcVar9,pcVar5);
        free_if_nonnull_wrap_016ac4(auStack_114,0xffffffff,pcVar9,pcVar5);
      }
      vec3_copy_8c02b5fc(auStack_120,in_stack_00000000,pcVar9,pcVar5);
      ar4_00 = auStack_3c;
      pcVar9 = FUN_8c023484;
      FUN_8c023484(ar4_00,auStack_120,FUN_8c023484,ar4_00,auStack_130);
      Vec3_assign(auStack_3c,auStack_130,pcVar9,ar4_00);
      Vec3_dtor(auStack_130,0xffffffff,pcVar9,ar4_00);
      pcVar5 = object_dtor_delete;
      object_dtor_delete(auStack_120,0xffffffff,pcVar9,object_dtor_delete);
      pcVar9 = (code *)auStack_3c;
      FUN_8c023aa0(pcVar9,ar6,pcVar9,pcVar5);
      uVar7 = get_field_6c_028cc4(ar5,ar6,pcVar9,pcVar5);
      FUN_8c036988(uVar7,ar6,pcVar9,pcVar5);
      uVar7 = get_field_6c_028cc4(ar5,ar6,pcVar9,pcVar5);
      FUN_8c038a10(uVar7,ar6,pcVar9,pcVar5);
      uVar7 = 0xb0;
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,pcVar9,pcVar5);
      if (iVar1 == 1) {
        FUN_8c03f3e8(ar5,uVar7,pcVar9,pcVar5);
        FUN_8c030eb8(ar4 + 0x1fc,0x1fc,pcVar9,pcVar5);
        *(undefined4 *)(ar4 + 0x2b8) = 2;
        uVar10 = 0;
        *(undefined4 *)(ar4 + 300) = 0;
        uVar8 = 0xffffffff;
        uVar7 = 0x1a;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
        pcVar5 = s_CAnimBody_SetFrame_033e6e;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar8,s_CAnimBody_SetFrame_033e6e);
        pcVar9 = (code *)0xa;
        iVar1 = rand_range(ar4,0,10,pcVar5);
        if (iVar1 < 6) {
          pcVar5 = (code *)0x0;
          pcVar9 = (code *)0xffffffff;
          uVar7 = 0x1e;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1e,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,pcVar9,pcVar5);
          *(undefined4 *)(ar4 + 0x2b8) = 3;
        }
      }
      goto switchD_8c04f3ac_default;
    case 6:
      iVar1 = get_field_6c_028cc4(ar5,pcVar6,pcVar9,pcVar5);
      iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,pcVar6,pcVar9,pcVar5);
      if (iVar1 == 0x13) {
        Vec3_assign(&uStack_6c,auStack_5c,pcVar9,pcVar5);
      }
      else {
        Vec3_assign(&uStack_6c,auStack_4c,pcVar9,pcVar5);
      }
      Vec3_assign(ar4 + 0x248,ar6,pcVar9,pcVar5);
      if (cVar16 == '\0') {
        dVar12 = (double)CONCAT44(0x43480000,(*(uint*)((uchar*)&dStack_64+0)));
      }
      else {
        dVar12 = 6.37156434669702e-312;
        in_xd0 = dStack_64;
      }
      if (cVar15 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar16 == '\0') {
        *(float *)(ar4 + 0x250) = fVar11;
        in_dr0 = (double)CONCAT44(0x43480000,uStack_6c);
      }
      else {
        *(double *)(ar4 + 0x250) = in_xd0;
        in_xd0 = (double)CONCAT44(uStack_68,uStack_6c);
        in_dr0 = 6.37156434669702e-312;
      }
      if (cVar15 == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(SUB84(in_dr0,0) - (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr0 = in_dr0 - in_dr0;
      }
      if (cVar16 == '\0') {
        *(int *)(ar4 + 0x248) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(ar4 + 0x248) = in_xd0;
      }
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 700) = 1;
      pcVar6 = ar6;
      Vec3_sub(&uStack_6c,ar6,pcVar9,pcVar5,auStack_140);
      Vec3_normalize(auStack_140,pcVar6,pcVar9,pcVar5);
      Vec3_assign(ar4 + 0x54,auStack_150,pcVar9,pcVar5);
      Vec3_dtor(auStack_150,0xffffffff,pcVar9,pcVar5);
      Vec3_dtor(auStack_140,0xffffffff,pcVar9,pcVar5);
    case 7:
      fVar11 = SUB84(in_dr0,0);
      pcVar9 = ar4 + 0x248;
      pcVar6 = ar6;
      iVar1 = FUN_8c04c314(ar4,ar6,pcVar9,pcVar5);
      if (iVar1 == 0) {
        iVar1 = get_field_6c_028cc4(ar5,pcVar6,pcVar9,pcVar5);
        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,*(int *)(iVar1 + 8),pcVar9,pcVar5);
        if (iVar1 == 0x13) {
          Vec3_assign(&uStack_6c,auStack_5c,pcVar9,pcVar5);
          if (cVar16 == '\0') {
            dVar12 = (double)CONCAT44(0x42a00000,(*(uint*)((uchar*)&dStack_64+0)));
          }
          else {
            dVar12 = 1.881185915789446e-53;
            in_xd0 = dStack_64;
          }
          if (cVar15 == '\0') {
            fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar12 + dVar12,0);
          }
          dVar12 = in_xd0;
          if (cVar16 == '\0') {
            dStack_64 = (double)CONCAT44((*(uint*)((uchar*)&dStack_64+4)),fVar11);
            dVar12 = dStack_64;
          }
        }
        else {
          Vec3_assign(&uStack_6c,auStack_4c,pcVar9,pcVar5);
          dVar12 = dStack_64;
        }
        dStack_64 = dVar12;
        Vec3_sub(&uStack_6c,ar6,pcVar9,pcVar5,auStack_160);
        Vec3_assign(ar4 + 0x54,auStack_160,pcVar9,pcVar5);
        Vec3_dtor(auStack_160,0xffffffff,pcVar9,pcVar5);
        if (cVar16 == '\0') {
          *(undefined4 *)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x58) = (ulonglong)(uint)fVar11;
        }
        Vec3_length(ar4 + 0x54,Vec3_length,pcVar9,pcVar5);
        if (cVar16 == '\0') {
          dVar12 = (double)CONCAT44(0x42480000,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x48);
          dVar12 = 4.67388482346422e-312;
        }
        if (cVar15 == '\0') {
          fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar12 + dVar12,0);
        }
        dVar12 = in_xd0;
        if (cVar16 == '\0') {
          uStack_1a0 = (double)CONCAT44((*(uint*)((uchar*)&uStack_1a0+4)),fVar11);
          dVar12 = uStack_1a0;
        }
        uStack_1a0 = dVar12;
        Vec3_scale(ar4 + 0x54,&uStack_1a0,pcVar9,pcVar5,auStack_170);
        Vec3_sub(&uStack_6c,auStack_170,pcVar9,pcVar5,auStack_180);
        Vec3_assign(ar4 + 0x248,auStack_180,pcVar9,pcVar5);
        Vec3_dtor(auStack_180,0xffffffff,pcVar9,pcVar5);
        Vec3_dtor(auStack_170,0xffffffff,pcVar9,pcVar5);
        if (cVar16 == '\0') {
          *(undefined4 *)(ar4 + 0x24c) = 0x43340000;
        }
        else {
          *(undefined8 *)(ar4 + 0x24c) = 0x12c43340000;
        }
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 700) = 1;
      }
switchD_8c04f3ac_default:
      (*(uint*)((uchar*)&uStack_1a0+4)) = uVar10;
      free_if_nonnull_wrap_016ac4(auStack_84,0xffffffff,pcVar9,pcVar5);
      free_if_nonnull_wrap_016ac4(auStack_78,0xffffffff,pcVar9,pcVar5);
      Vec3_dtor(&uStack_6c,0xffffffff,pcVar9,pcVar5);
      Vec3_dtor(auStack_5c,0xffffffff,pcVar9,pcVar5);
      Vec3_dtor(auStack_4c,0xffffffff,pcVar9,pcVar5);
      pcVar5 = Vec3_dtor;
      Vec3_dtor(auStack_3c,0xffffffff,pcVar9,Vec3_dtor);
      Vec3_dtor(auStack_2c,0xffffffff,0xffffffff,pcVar5);
      return (*(uint*)((uchar*)&uStack_1a0+4));
    case 8:
      Vec3_ctor_copy(auStack_190,ar4 + 0x54,pcVar9,pcVar5);
      pcVar5 = (code *)auStack_190;
      pcVar9 = ar4 + 0x248;
      iVar1 = FUN_8c04e0e0(ar4,ar6,pcVar9,pcVar5);
      uVar7 = 0xffffffff;
      Vec3_dtor(auStack_190,0xffffffff,pcVar9,pcVar5);
      if (iVar1 == 0) {
        iVar1 = get_field_6c_028cc4(ar5,uVar7,pcVar9,pcVar5);
        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,iVar1,pcVar9,pcVar5);
        if (iVar1 == 0x13) {
          pcVar5 = (code *)0x0;
          pcVar9 = (code *)0xffffffff;
          uVar7 = 0x1a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,pcVar9,pcVar5);
          *(undefined4 *)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(ar4 + 700) = 0;
          FUN_8c030f2c(ar4 + 0x1fc,0,pcVar9,pcVar5);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        else {
          pcVar5 = (code *)0x0;
          uVar8 = 0xffffffff;
          uVar7 = 0x17;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x17,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar8,pcVar5);
          *(undefined4 *)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(ar4 + 700) = 0;
          pcVar9 = (code *)0x1fc;
          FUN_8c030f2c(ar4 + 0x1fc,ar4 + 0x1fc,0x1fc,pcVar5);
          *(undefined4 *)(ar4 + 300) = 4;
        }
      }
      if (*(int *)(ar4 + 0x298) == 1) {
        FUN_8c030f2c(ar4 + 0x1fc,0x298,pcVar9,pcVar5);
      }
      goto switchD_8c04f3ac_default;
    case 9:
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,pcVar9,pcVar5);
      fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
      pcVar5 = FUN_8c022fc0;
      FUN_8c022fc0(auStack_4c,auStack_5c,pcVar9,FUN_8c022fc0);
      if (cVar16 == '\0') {
        fVar13 = 150.0;
      }
      else {
        fVar11 = 150.0;
        fVar13 = -1.0;
      }
      if (cVar15 == '\0' && fVar11 < fVar13) {
        uVar2 = 0;
        uVar8 = 0xffffffff;
        uVar7 = 0x16;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x16,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar8,uVar2);
        pcVar5 = (code *)0x3;
        *(undefined4 *)(ar4 + 0x2b8) = 3;
        pcVar9 = (code *)0x2bc;
        *(undefined4 *)(ar4 + 700) = 0;
        FUN_8c030f2c(ar4 + 0x1fc,uVar7,700,3);
        *(undefined4 *)(ar4 + 300) = 4;
      }
      goto switchD_8c04f3ac_default;
    }
    pcVar9 = (code *)auStack_78;
    pcVar6 = FUN_8c023df4;
    FUN_8c023df4(pcVar9,FUN_8c023df4,pcVar9,pcVar5);
    iVar1 = get_field_6c_028cc4(ar5,pcVar6,pcVar9,pcVar5);
    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,pcVar6,pcVar9,pcVar5);
    uVar7 = (undefined4)in_dr14;
    if (iVar1 == 0x18) {
      ar7_00 = 0;
      uVar2 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x17,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,3,uVar2,ar7_00);
      FUN_8c030f2c(ar4 + 0x1fc,FUN_8c030f2c,uVar2,ar7_00);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      pcVar6 = ar4;
switchD_8c04f3ac_caseD_4:
      pcVar5 = ar4 + 0xb0;
      pcVar9 = s_CAnimBody_AdvanceFrame_033ba0;
      s_CAnimBody_AdvanceFrame_033ba0(pcVar5,pcVar6,s_CAnimBody_AdvanceFrame_033ba0,pcVar5);
      CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar6,pcVar9,pcVar5,uVar8);
      uVar8 = SUB84(in_dr0,0);
      if (cVar16 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar7);
        dVar12 = (double)CONCAT44(0x41a00000,uVar8);
      }
      else {
        dVar12 = 1.6981406014198e-311;
      }
      if (cVar15 == '\0') {
        bVar14 = (float)((ulonglong)in_dr0 >> 0x20) < (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        bVar14 = in_dr0 < dVar12;
      }
      if ((!bVar14) && (*(int *)(ar4 + 800) == 0)) {
        pcVar5 = *(code **)(ar4 + 0x244);
        FUN_8c033474(ar4,0x1a,ar6,pcVar5);
        *(undefined4 *)(ar4 + 800) = 1;
        pcVar9 = ar6;
      }
      if (cVar16 == '\0') {
        dVar12 = (double)CONCAT44(0x41b00000,SUB84(dVar12,0));
      }
      else {
        dVar12 = 5.444735897974836e+158;
      }
      if (cVar15 == '\0') {
        bVar14 = (float)((ulonglong)in_dr0 >> 0x20) < (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        bVar14 = in_dr0 < dVar12;
      }
      if (!bVar14) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        pcVar5 = ar4;
      }
      goto switchD_8c04f3ac_default;
    }
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(undefined4 *)(ar4 + 300) = 6;
  } while( true );
}

__asm__(".globl _FUN_8c04f034\n.set _FUN_8c04f034, _FUN_8c04f034_def\n");
