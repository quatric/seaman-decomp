#include "../decls.h"
undefined4 FUN_8c0b3604_def(int ar4,double *ar5,double *ar6,int *ar7)

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
        *(undefined4 *)((*(uint*)((uchar*)&uStack_2d4+4)) + 0x2d0) = (undefined4)uStack_2d4;
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2cc),(undefined4)uStack_2d4);
        uStack_2d4 = in_xd0;
      }
      else {
        *(double *)((*(uint*)((uchar*)&uStack_2d4+4)) + 0x2d0) = uStack_2d4;
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
        uStack_1fc = (double)CONCAT44((*(uint*)((uchar*)&uStack_1fc+4)),fVar9);
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

__asm__(".globl _FUN_8c0b3604\n.set _FUN_8c0b3604, _FUN_8c0b3604_def\n");
