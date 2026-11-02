#include "../decls.h"
undefined4 FUN_8c077a38_def(int ar4,float *ar5,float *ar6,code *ar7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  code *ar5_00;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined1 *ar7_00;
  undefined4 uVar11;
  float fVar12;
  uint uVar13;
  double in_dr0;
  double dVar14;
  undefined4 in_fr15;
  double dVar15;
  double in_xd0;
  bool bVar16;
  char cVar17;
  char cVar18;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  undefined1 auStack_2ac [16];
  undefined1 auStack_29c [16];
  undefined1 auStack_28c [16];
  undefined1 auStack_27c [16];
  undefined1 auStack_26c [216];
  undefined1 auStack_194 [16];
  undefined1 auStack_184 [16];
  undefined1 auStack_174 [16];
  undefined1 auStack_164 [12];
  undefined1 auStack_158 [12];
  undefined1 auStack_14c [12];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [12];
  undefined1 auStack_f4 [12];
  undefined1 auStack_e8 [12];
  undefined1 auStack_dc [16];
  undefined1 auStack_cc [16];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [4];
  float fStack_34;
  undefined1 auStack_30 [12];
  
  cVar18 = '\0';
  cVar17 = '\0';
  uVar5 = 1;
  uVar11 = 1;
  pfVar8 = ar6;
  pcVar10 = ar7;
  iVar1 = get_field_6c_028cc4(ar7,1,ar6,ar7);
  if (iVar1 == 0) {
    return 2;
  }
  Vec3_ctor_zero(auStack_38,uVar5,pfVar8,ar7);
  Vec3_set_zero(auStack_44,uVar5,pfVar8,ar7);
  FUN_8c023dac(auStack_50,uVar5,pfVar8,ar7);
  FUN_8c023dac(auStack_5c,uVar5,pfVar8,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,uVar5,pfVar8,ar7,pcVar10);
  if (cVar18 == '\0') {
    in_fr15 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  }
  iVar2 = *(int *)(ar4 + 300);
  if (iVar2 == 0) {
    ar7 = (code *)auStack_30;
    pfVar8 = &fStack_34;
    FUN_8c0507a4(iVar1,auStack_38,pfVar8,ar7);
    if (cVar18 == '\0') {
      fVar12 = 900.0;
    }
    else {
      fStack_34 = 900.0;
      fVar12 = 4.2039e-43;
    }
    if (cVar17 == '\0' && fVar12 < fStack_34) {
      FUN_8c031de8(ar4,0,pfVar8,ar7);
      FUN_8c031c74(ar4,ar6,ar5,ar7);
      pfVar8 = ar5;
    }
    else {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x2d0) = 0;
    }
    goto LAB_8c078ef6;
  }
  if (iVar2 == 1) {
    iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7);
    pfVar8 = ar6;
    if (iVar2 == 0) {
      uVar9 = 0;
      uVar5 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
      pcVar6 = s_CAnimBody_SetFrame_033e6e;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,uVar5,uVar9);
      if ((*(int *)(ar4 + 0x128) < 2) || (pcVar6 = (code *)0x5, 5 < *(int *)(ar4 + 0x128))) {
        if ((*(int *)(ar4 + 0x128) == 6) || (*(int *)(ar4 + 0x128) == 7)) {
          *(undefined4 *)(ar4 + 0x294) = 1;
        }
        else {
          *(undefined4 *)(ar4 + 0x294) = 4;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x294) = 2;
      }
      *(undefined4 *)(ar4 + 0x214) = 0;
      FUN_8c03f3e8(pcVar10,pcVar6,uVar5,uVar9);
      iVar2 = get_field_6c_02f46c(iVar1,pcVar6,uVar5,uVar9);
      if (iVar2 < 0x32) {
        *(undefined4 *)(ar4 + 0x2d0) = 1;
      }
      pfVar8 = (float *)0x12c;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      iVar2 = ar4 + 0x14;
      Vec3_assign(ar4 + 0x54,iVar2,300,uVar9);
      if (cVar18 == '\0') {
        dVar15 = (double)CONCAT44(0xbe99999a,*(undefined4 *)(ar4 + 0x58));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x58);
        dVar15 = 1.63976064280413e-311;
      }
      if (cVar17 == '\0') {
        fVar12 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar15 * dVar15,0);
      }
      if (cVar18 == '\0') {
        *(float *)(ar4 + 0x58) = fVar12;
      }
      else {
        *(double *)(ar4 + 0x58) = in_xd0;
      }
      Vec3_normalize(ar4 + 0x54,iVar2,pfVar8,uVar9);
      ar7 = Vec3_assign;
      Vec3_assign(ar4 + 0x54,auStack_6c,pfVar8,Vec3_assign);
      Vec3_dtor(auStack_6c,0xffffffff,pfVar8,ar7);
    }
    if ((*(int *)(ar4 + 0x128) < 2) && (*(int *)(ar4 + 0x40) == 4)) {
      ar7 = (code *)auStack_30;
      pfVar8 = &fStack_34;
      FUN_8c0507a4(iVar1,auStack_38,pfVar8,ar7);
      Vec3_scale(ar4 + 0x80,ar4 + 0x48,pfVar8,ar7,auStack_7c);
      Vec3_scale(auStack_7c,in_stack_00000004 + 4,pfVar8,ar7,auStack_8c);
      Vec3_add(auStack_8c,ar5,pfVar8,ar7,auStack_9c);
      Vec3_sub(auStack_9c,auStack_38,pfVar8,ar7,auStack_ac);
      Vec3_scale(auStack_ac,&DAT_8c137990,pfVar8,ar7,auStack_bc);
      FUN_8c023aa0(auStack_38,auStack_bc,pfVar8,ar7);
      Vec3_dtor(auStack_bc,0xffffffff,pfVar8,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,pfVar8,ar7);
      Vec3_dtor(auStack_9c,0xffffffff,pfVar8,ar7);
      Vec3_dtor(auStack_8c,0xffffffff,pfVar8,ar7);
      uVar5 = 0xffffffff;
      Vec3_dtor(auStack_7c,0xffffffff,pfVar8,ar7);
      FUN_8c036988(iVar1,uVar5,pfVar8,ar7);
    }
    goto LAB_8c078ef6;
  }
  if (iVar2 != 2) goto LAB_8c078ef6;
  *(undefined4 *)(ar4 + 0x214) = 0;
  Vec3_ctor_copy(auStack_cc,ar4 + 0x54,pfVar8,ar7);
  FUN_8c082378(ar4,auStack_cc,pfVar8,ar7);
  Vec3_dtor(auStack_cc,0xffffffff,pfVar8,ar7);
  pcVar6 = CAnimBody_GetCurFrame;
  CAnimBody_GetCurFrame(ar4 + 0xb0,CAnimBody_GetCurFrame,pfVar8,ar7);
  dVar15 = in_dr0;
  if (cVar18 == '\0') {
    dVar15 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  if (cVar17 == '\0') {
    dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + 1.0,SUB84(dVar15,0));
  }
  else {
    dVar15 = dVar15 + (double)CONCAT44(0x3f800000,SUB84(in_dr0,0));
  }
  uVar5 = get_field_1c_026dd8(ar4 + 0xb0,pcVar6,pfVar8,ar7);
  iVar2 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar5,pfVar8,ar7);
  fVar12 = (float)iVar2;
  dVar14 = (double)(ulonglong)(uint)fVar12;
  if (cVar17 == '\0' && fVar12 < 0.0) {
    if (cVar18 == '\0') {
      dVar14 = (double)CONCAT44(0x4f800000,fVar12);
    }
    else {
      dVar14 = 3.40178305716091e-312;
    }
    if (cVar17 == '\0') {
      fVar12 = (float)((ulonglong)dVar14 >> 0x20);
      dVar14 = (double)CONCAT44(fVar12,SUB84(dVar14,0) + fVar12);
    }
    else {
      dVar14 = dVar14 + dVar14;
    }
  }
  if (cVar17 == '\0') {
    bVar16 = (float)((ulonglong)dVar15 >> 0x20) < SUB84(dVar14,0);
  }
  else {
    bVar16 = dVar15 < dVar14;
  }
  if (!bVar16) {
    uVar5 = get_field_1c_026dd8(ar4 + 0xb0,iVar2,pfVar8,ar7);
    uVar13 = SUB84(dVar14,0);
    uVar9 = SUB84(dVar15,0);
    iVar2 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar5,pfVar8,ar7);
    if (cVar17 == '\0') {
      dVar15 = (double)CONCAT44((float)iVar2,uVar9);
    }
    else {
      dVar15 = (double)iVar2;
    }
    dVar14 = (double)(ulonglong)uVar13;
    if (cVar17 == '\0') {
      bVar16 = (float)((ulonglong)dVar15 >> 0x20) < 0.0;
    }
    else {
      bVar16 = dVar15 < dVar14;
    }
    if (bVar16) {
      if (cVar18 == '\0') {
        dVar14 = (double)CONCAT44(0x4f800000,uVar13);
      }
      else {
        dVar14 = 3.40178305716091e-312;
      }
    }
  }
  FUN_8c0507a4(iVar1,auStack_38,&fStack_34,auStack_30);
  ar7 = (code *)auStack_48;
  pcVar6 = (code *)auStack_4c;
  FUN_8c03f3f8(iVar1,auStack_50,pcVar6,ar7);
  if (*(int *)(ar4 + 0x2d0) == 1) {
LAB_8c078026:
    iVar2 = *(int *)(ar4 + 0x128);
    if ((iVar2 < 8) && (1 < iVar2)) {
                    
      switch(iVar2) {
      case 2:
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,0x19,pcVar6,ar7);
        puVar3 = (undefined4 *)deref_u32(uVar5,deref_u32,pcVar6,ar7);
        FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar3,pcVar6,ar7);
        Vec3_assign(auStack_38,auStack_dc,pcVar6,ar7);
        pcVar10 = Vec3_dtor;
        Vec3_dtor(auStack_dc,0xffffffff,pcVar6,Vec3_dtor);
        uVar7 = 0x19;
        uVar9 = 0x19;
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,0x19,0x19,pcVar10);
        piVar4 = (int *)deref_u32(uVar5,uVar9,uVar7,pcVar10);
        FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*piVar4 + 4),uVar7,pcVar10);
        vec3_copy_8c023d8c(auStack_44,auStack_e8,uVar7,pcVar10);
        object_dtor_delete(auStack_e8,0xffffffff,uVar7,pcVar10);
        uVar9 = 0x19;
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,0x19,uVar7,pcVar10);
        pcVar10 = deref_u32;
        piVar4 = (int *)deref_u32(uVar5,uVar9,uVar7,deref_u32);
        FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(*piVar4 + 8),piVar4,pcVar10);
        FUN_8c023e04(auStack_50,auStack_f4,piVar4,pcVar10);
        free_if_nonnull_wrap_016ac4(auStack_f4,0xffffffff,piVar4,pcVar10);
        vec3_copy_8c02b5fc(auStack_100,in_stack_00000000,piVar4,pcVar10);
        FUN_8c023484(auStack_38,auStack_100,piVar4,pcVar10,auStack_110);
        Vec3_scale(auStack_110,in_stack_00000004 + 4,piVar4,pcVar10,auStack_120);
        Vec3_add(auStack_120,ar5,piVar4,pcVar10,auStack_130);
        Vec3_assign(auStack_38,auStack_130,piVar4,pcVar10);
        ar7 = (code *)auStack_130;
        pcVar6 = Vec3_dtor;
        Vec3_dtor(ar7,0xffffffff,Vec3_dtor,ar7);
        Vec3_dtor(auStack_120,0xffffffff,pcVar6,ar7);
        Vec3_dtor(auStack_110,0xffffffff,pcVar6,ar7);
        ar5_00 = (code *)0xffffffff;
        object_dtor_delete(auStack_100,0xffffffff,pcVar6,ar7);
        FUN_8c078fb8(iVar1,ar5_00,pcVar6,ar7);
        break;
      case 3:
        uVar9 = 0x1a;
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,0x1a,pcVar6,ar7);
        puVar3 = (undefined4 *)deref_u32(uVar5,uVar9,pcVar6,ar7);
        FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar3,pcVar6,ar7);
        Vec3_assign(auStack_38,auStack_140,pcVar6,ar7);
        Vec3_dtor(auStack_140,0xffffffff,pcVar6,ar7);
        uVar9 = 0x1a;
        uVar7 = 0xb0;
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,0x1a,0xb0,ar7);
        piVar4 = (int *)deref_u32(uVar5,uVar9,uVar7,ar7);
        FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*piVar4 + 4),uVar7,ar7);
        vec3_copy_8c023d8c(auStack_44,auStack_14c,uVar7,ar7);
        pcVar10 = object_dtor_delete;
        object_dtor_delete(auStack_14c,0xffffffff,uVar7,object_dtor_delete);
        uVar9 = 0x1a;
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,0x1a,uVar7,pcVar10);
        pcVar6 = (code *)deref_u32(uVar5,uVar9,uVar7,pcVar10);
        ar7 = (code *)auStack_158;
        FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(*(int *)pcVar6 + 8),pcVar6,ar7);
        FUN_8c023e04(auStack_50,auStack_158,pcVar6,ar7);
        free_if_nonnull_wrap_016ac4(auStack_158,0xffffffff,pcVar6,ar7);
        vec3_copy_8c02b5fc(auStack_164,in_stack_00000000,pcVar6,ar7);
        FUN_8c023484(auStack_38,auStack_164,pcVar6,ar7,auStack_174);
        Vec3_scale(auStack_174,in_stack_00000004 + 4,pcVar6,ar7,auStack_184);
        Vec3_add(auStack_184,ar5,pcVar6,ar7,auStack_194);
        Vec3_assign(auStack_38,auStack_194,pcVar6,ar7);
        Vec3_dtor(auStack_194,0xffffffff,pcVar6,ar7);
        Vec3_dtor(auStack_184,0xffffffff,pcVar6,ar7);
        Vec3_dtor(auStack_174,0xffffffff,pcVar6,ar7);
        ar5_00 = (code *)0xffffffff;
        object_dtor_delete(auStack_164,0xffffffff,pcVar6,ar7);
        FUN_8c078fb8(iVar1,ar5_00,pcVar6,ar7);
      }
    }
    else {
      ar7_00 = auStack_30;
      pfVar8 = &fStack_34;
      FUN_8c0507a4(iVar1,auStack_38,pfVar8,ar7_00);
      Vec3_scale(ar4 + 0x80,ar4 + 0x48,pfVar8,ar7_00,auStack_26c);
      ar7 = (code *)auStack_27c;
      pcVar6 = (code *)(in_stack_00000004 + 4);
      Vec3_scale(auStack_26c,pcVar6,pcVar6,ar7,ar7);
      Vec3_add(auStack_27c,ar5,pcVar6,ar7,auStack_28c);
      Vec3_sub(auStack_28c,auStack_38,pcVar6,ar7,auStack_29c);
      Vec3_scale(auStack_29c,&DAT_8c137994,pcVar6,ar7,auStack_2ac);
      FUN_8c023aa0(auStack_38,auStack_2ac,pcVar6,ar7);
      Vec3_dtor(auStack_2ac,0xffffffff,pcVar6,ar7);
      Vec3_dtor(auStack_29c,0xffffffff,pcVar6,ar7);
      Vec3_dtor(auStack_28c,0xffffffff,pcVar6,ar7);
      Vec3_dtor(auStack_27c,0xffffffff,pcVar6,ar7);
      ar5_00 = (code *)0xffffffff;
      Vec3_dtor(auStack_26c,0xffffffff,pcVar6,ar7);
      if (cVar18 == '\0') {
        dVar15 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar15 = 6.28636279645629e-312;
      }
      if (cVar17 == '\0') {
        fVar12 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar15 * dVar15,0);
      }
      if (cVar18 == '\0') {
        *(float *)(ar4 + 0x28) = fVar12;
      }
      else {
        *(double *)(ar4 + 0x28) = in_xd0;
      }
    }
  }
  else {
    ar5_00 = (code *)0xb0;
    CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar6,ar7,pcVar10);
    if (cVar18 == '\0') {
      fVar12 = (float)((ulonglong)dVar14 >> 0x20);
      pcVar10 = (code *)0x42700000;
    }
    else {
      fVar12 = 60.0;
      pcVar10 = get_field_24_05c284;
      in_xd0 = dVar14;
    }
    if ((cVar17 != '\0' || fVar12 <= (float)(uint)pcVar10) ||
       (iVar2 = get_field_24_05c284(iVar1,ar5_00,pcVar6,ar7), iVar2 == 0xf)) goto LAB_8c078026;
  }
  if ((1 < *(int *)(ar4 + 0x128)) &&
     (iVar2 = get_field_24_05c284(iVar1,ar5_00,pcVar6,ar7), iVar2 == 0xf)) {
    ar5_00 = FUN_8c078f84;
    FUN_8c078f84(auStack_50,FUN_8c078f84,pcVar6,ar7);
  }
  FUN_8c036988(iVar1,ar5_00,pcVar6,ar7);
  FUN_8c038a10(iVar1,ar5_00,pcVar6,ar7);
  FUN_8c031c74(ar4,ar6,ar5,ar7);
  if ((*(int *)(ar4 + 0x128) < 2) || (5 < *(int *)(ar4 + 0x128))) {
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,2,ar5,ar7);
    pfVar8 = ar5;
    if (iVar1 == 1) {
      iVar1 = *(int *)(ar4 + 0x294) + -1;
      *(int *)(ar4 + 0x294) = iVar1;
      if (iVar1 < 1) {
        FUN_8c030eb8(ar4 + 0x1fc,iVar1,ar5,ar7);
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(undefined4 *)(ar4 + 300) = 0;
        uVar11 = 0;
        *(undefined4 *)(ar4 + 0x214) = 1;
        *(undefined4 *)(ar4 + 0x294) = 0;
        ar7 = (code *)0x0;
        pfVar8 = (float *)0xffffffff;
        uVar5 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,pfVar8,ar7);
      }
      else {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,ar5,ar7);
        pfVar8 = ar5;
      }
    }
  }
  else {
    iVar1 = *(int *)(ar4 + 0x294);
    if (iVar1 < 1) {
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar5,ar7);
      pfVar8 = ar5;
      if (iVar1 == 1) {
        FUN_8c030eb8(ar4 + 0x1fc,1,ar5,ar7);
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(undefined4 *)(ar4 + 300) = 0;
        uVar11 = 0;
        *(undefined4 *)(ar4 + 0x214) = 1;
        *(undefined4 *)(ar4 + 0x294) = 0;
        ar7 = (code *)0x0;
        pfVar8 = (float *)0xffffffff;
        uVar5 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,pfVar8,ar7);
      }
    }
    else {
      iVar1 = FUN_8c03f3ac(ar4 + 0xb0,iVar1,ar5,ar7);
      pfVar8 = ar5;
      if (iVar1 == 7) {
        *(int *)(ar4 + 0x294) = *(int *)(ar4 + 0x294) + -1;
      }
    }
  }
LAB_8c078ef6:
  free_if_nonnull_wrap_016ac4(auStack_5c,0xffffffff,pfVar8,ar7);
  free_if_nonnull_wrap_016ac4(auStack_50,0xffffffff,pfVar8,ar7);
  object_dtor_delete(auStack_44,0xffffffff,pfVar8,ar7);
  Vec3_dtor(auStack_38,0xffffffff,pfVar8,ar7);
  return uVar11;
}

__asm__(".globl _FUN_8c077a38\n.set _FUN_8c077a38, _FUN_8c077a38_def\n");
