#include "../decls.h"
int FUN_8c08fd38_def(code *ar4,code *ar5,code *ar6,code *ar7)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  code *ar5_00;
  code *pcVar4;
  undefined4 uVar5;
  undefined1 *ar6_00;
  code *pcVar6;
  int iVar7;
  float fVar8;
  ulonglong in_dr0;
  double dVar9;
  undefined8 uVar10;
  ulonglong in_xd0;
  undefined4 in_PR;
  char cVar11;
  char cVar12;
  code *in_stack_00000000;
  undefined8 uStack_26c;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 auStack_25c [16];
  undefined1 auStack_24c [16];
  undefined1 auStack_23c [16];
  undefined1 auStack_22c [16];
  undefined1 auStack_21c [4];
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 auStack_20c [16];
  undefined1 auStack_1fc [16];
  undefined1 auStack_1ec [16];
  undefined1 auStack_1dc [16];
  undefined1 auStack_1cc [16];
  undefined1 auStack_1bc [16];
  undefined1 auStack_1ac [12];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [12];
  undefined1 auStack_164 [16];
  undefined1 auStack_154 [16];
  undefined1 auStack_144 [16];
  undefined1 auStack_134 [16];
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [4];
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  cVar12 = '\0';
  cVar11 = '\0';
  pcVar4 = ar6;
  pcVar6 = ar7;
  uStack_1c = in_PR;
  FUN_8c102748(&iStack_28,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_104,Vec3_ctor_xyz,pcVar4,pcVar6);
  Vec3_ctor_copy(auStack_88,auStack_104,pcVar4,pcVar6);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_104,0xffffffff,pcVar4,pcVar6);
  Vec3_ctor_xyz(auStack_114,uVar3,pcVar4,pcVar6);
  Vec3_ctor_copy(auStack_78,auStack_114,pcVar4,pcVar6);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_114,0xffffffff,pcVar4,pcVar6);
  Vec3_ctor_xyz(auStack_124,uVar3,pcVar4,pcVar6);
  Vec3_ctor_copy(auStack_68,auStack_124,pcVar4,pcVar6);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_124,0xffffffff,pcVar4,pcVar6);
  pcVar4 = Vec3_ctor_xyz;
  Vec3_ctor_xyz(auStack_134,uVar3,Vec3_ctor_xyz,pcVar6);
  Vec3_ctor_copy(auStack_58,auStack_134,pcVar4,pcVar6);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_134,0xffffffff,pcVar4,pcVar6);
  Vec3_ctor_xyz(auStack_144,uVar3,pcVar4,pcVar6);
  Vec3_ctor_copy(auStack_48,auStack_144,pcVar4,pcVar6);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_144,0xffffffff,pcVar4,pcVar6);
  Vec3_ctor_xyz(auStack_154,uVar3,pcVar4,pcVar6);
  Vec3_ctor_copy(auStack_38,auStack_154,pcVar4,pcVar6);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_154,0xffffffff,pcVar4,pcVar6);
  FUN_8c08e9b0(auStack_e4,uVar3,pcVar4,pcVar6);
  Vec3_ctor_zero(auStack_f4,uVar3,pcVar4,pcVar6);
  iVar7 = 1;
  if (*(int *)(ar4 + 0x134) == 0) {
    pcVar4 = (code *)0x64;
    uVar3 = rand_range(ar4,0,100,pcVar6);
    iVar2 = libgcc_divide_helper_0101e4(uVar3,10,pcVar4,pcVar6);
    *(int *)(ar4 + 0x134) = iVar2;
    *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    *(int *)(ar4 + 300) = 0;
  }
  iVar2 = *(int *)(ar4 + 0x134);
  uVar3 = 10;
  if ((iVar2 < 0xb) && (4 < iVar2)) {
                    
    switch(iVar2) {
    default:
      if (*(int *)(ar4 + 300) == 0) {
        if (cVar12 == '\0') {
          *(int *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
        }
        iVar2 = rand_range(ar4,0,3,pcVar6);
        if (iVar2 == 0) {
          pcVar6 = (code *)0x0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0);
        }
        else if (iVar2 == 1) {
          pcVar6 = (code *)0x0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0,0);
        }
        else if (iVar2 == 2) {
          uVar3 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0,0);
          iVar2 = rand_range(ar4,0,2,uVar3);
          FUN_8c033474(ar4,iVar2 + 0x1f,ar5,in_stack_00000000);
          pcVar6 = in_stack_00000000;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        pcVar4 = ar4;
      }
      else if (*(int *)(ar4 + 300) != 1) break;
      iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,300,pcVar4,pcVar6);
      if (iVar2 == 1) {
        iVar7 = 0;
      }
      break;
    case 9:
      iVar2 = *(int *)(ar4 + 300);
      if ((iVar2 < 6) && (-1 < iVar2)) {
                    
        switch(iVar2) {
        case 0:
          iVar2 = get_field_24_026024(in_stack_00000000,10,pcVar4,pcVar6);
          if (iVar2 != 1) {
            uStack_264 = 0;
            Vec3_dtor(auStack_f4,0xffffffff,pcVar4,pcVar6);
            FUN_8c08e93c(auStack_e4,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_38,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_48,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_58,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_68,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_78,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_88,0xffffffff,pcVar4,pcVar6);
            free_if_nonnull_wrap_102790(&iStack_28,0xffffffff,pcVar4,pcVar6);
            return uStack_264;
          }
          uVar3 = get_field_24_026024(in_stack_00000000,uVar3,pcVar4,pcVar6);
          uVar5 = 0;
          iVar2 = FUN_8c069c24(auStack_e4,uVar3,0,pcVar6);
          if (iVar2 == 0) {
            uStack_260 = 0;
            Vec3_dtor(auStack_f4,0xffffffff,uVar5,pcVar6);
            FUN_8c08e93c(auStack_e4,0xffffffff,uVar5,pcVar6);
            Vec3_dtor(auStack_38,0xffffffff,uVar5,pcVar6);
            Vec3_dtor(auStack_48,0xffffffff,uVar5,pcVar6);
            Vec3_dtor(auStack_58,0xffffffff,uVar5,pcVar6);
            Vec3_dtor(auStack_68,0xffffffff,uVar5,pcVar6);
            Vec3_dtor(auStack_78,0xffffffff,uVar5,pcVar6);
            Vec3_dtor(auStack_88,0xffffffff,uVar5,pcVar6);
            free_if_nonnull_wrap_102790(&iStack_28,0xffffffff,uVar5,pcVar6);
            return uStack_260;
          }
          Vec3_assign(ar4 + 0x28c,auStack_d4,uVar5,pcVar6);
          Vec3_scale(auStack_c4,&iStack_9c,uVar5,pcVar6,auStack_164);
          pcVar4 = Vec3_assign;
          Vec3_assign(ar4 + 0x2a8,auStack_164,Vec3_assign,pcVar6);
          Vec3_dtor(auStack_164,0xffffffff,pcVar4,pcVar6);
          if (cVar12 == '\0') {
            *(int *)(ar4 + 0x29c) = iStack_b4;
            *(int *)(ar4 + 0x2a0) = iStack_b0;
            *(int *)(ar4 + 0x2a4) = iStack_ac;
            *(int *)(ar4 + 0x2b8) = iStack_a8;
            *(int *)(ar4 + 700) = iStack_a4;
            *(int *)(ar4 + 0x2c0) = iStack_a0;
            *(int *)(ar4 + 0x2c4) = iStack_9c;
          }
          else {
            *(ulonglong *)(ar4 + 0x29c) = CONCAT44(iStack_b0,iStack_b4);
            *(ulonglong *)(ar4 + 0x2a0) = CONCAT44(iStack_ac,iStack_b0);
            *(ulonglong *)(ar4 + 0x2a4) = CONCAT44(iStack_a8,iStack_ac);
            *(ulonglong *)(ar4 + 0x2b8) = CONCAT44(iStack_a4,iStack_a8);
            *(ulonglong *)(ar4 + 700) = CONCAT44(iStack_a0,iStack_a4);
            *(ulonglong *)(ar4 + 0x2c0) = CONCAT44(iStack_9c,iStack_a0);
            *(ulonglong *)(ar4 + 0x2c4) = CONCAT44(uStack_98,iStack_9c);
          }
          pcVar6 = ar4 + 0x2c4;
          *(int *)(ar4 + 0x2c8) = iStack_e0;
          *(int *)(ar4 + 0x2f4) = iStack_dc;
          *(int *)(ar4 + 0x2f8) = iStack_d8;
          pcVar4 = (code *)0x2e0;
          Vec3_assign(ar4 + 0x2e0,auStack_88 + *(int *)(ar4 + 0x2c8) * 0x10,0x2e0,pcVar6);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        case 1:
          Vec3_set_xyz(auStack_170,ar4 + 0x2a0,pcVar4,pcVar6);
          FUN_8c023484(ar4 + 0x2a8,auStack_170,pcVar4,pcVar6,auStack_180);
          ar5_00 = ar4 + 0x28c;
          Vec3_add(auStack_180,ar5_00,pcVar4,pcVar6,auStack_190);
          Vec3_ctor_xyz(auStack_1a0,ar5_00,pcVar4,pcVar6);
          Vec3_set_xyz(auStack_1ac,700,pcVar4,pcVar6);
          FUN_8c023484(auStack_1a0,auStack_1ac,pcVar4,pcVar6,auStack_1bc);
          if (cVar12 == '\0') {
            dVar9 = (double)CONCAT44(0x41a00000,*(int *)(ar4 + 0x2c4));
          }
          else {
            in_xd0 = *(ulonglong *)(ar4 + 0x2c4);
            dVar9 = 5.43774891134696e-312;
          }
          if (cVar11 == '\0') {
            fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar8 = SUB84(dVar9 * dVar9,0);
          }
          uVar1 = in_xd0;
          if (cVar12 == '\0') {
            uStack_26c = CONCAT44((*(uint*)((uchar*)&uStack_26c+4)),fVar8);
            uVar1 = uStack_26c;
          }
          uStack_26c = uVar1;
          ar6_00 = auStack_1cc;
          Vec3_scale(auStack_1bc,&uStack_26c,ar6_00,pcVar6,ar6_00);
          Vec3_sub(auStack_190,auStack_1cc,ar6_00,pcVar6,auStack_1dc);
          Vec3_assign(auStack_f4,auStack_1dc,ar6_00,pcVar6);
          Vec3_dtor(auStack_1dc,0xffffffff,ar6_00,pcVar6);
          Vec3_dtor(auStack_1cc,0xffffffff,ar6_00,pcVar6);
          Vec3_dtor(auStack_1bc,0xffffffff,ar6_00,pcVar6);
          object_dtor_delete(auStack_1ac,0xffffffff,ar6_00,pcVar6);
          Vec3_dtor(auStack_1a0,0xffffffff,ar6_00,pcVar6);
          Vec3_dtor(auStack_190,0xffffffff,ar6_00,pcVar6);
          Vec3_dtor(auStack_180,0xffffffff,ar6_00,pcVar6);
          object_dtor_delete(auStack_170,0xffffffff,ar6_00,pcVar6);
          pcVar4 = (code *)auStack_f4;
          iVar2 = FUN_8c08e9fc(ar4,ar5,pcVar4,ar6);
          pcVar6 = ar6;
          if (iVar2 == 0) {
            if (cVar12 == '\0') {
              *(int *)(ar4 + 0x28) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar8;
            }
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          }
          break;
        case 2:
          iVar2 = FUN_8c08eb8c(ar4,ar6,pcVar4,pcVar6);
          if (iVar2 == 0) {
            if (cVar12 == '\0') {
              *(int *)(ar4 + 0x2cc) = 0;
            }
            else {
              *(ulonglong *)(ar4 + 0x2cc) = in_dr0 & 0xffffffff;
            }
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            *(int *)(ar4 + 0x240) = 1;
          }
          break;
        case 3:
          FUN_8c08eef4(ar4,*(int *)(ar4 + 0x2c8),ar6,pcVar6);
          pcVar4 = ar6;
          break;
        case 4:
          FUN_8c08f354(ar4,*(int *)(ar4 + 0x2c8),ar5,ar6);
          pcVar4 = ar5;
          pcVar6 = ar6;
          break;
        case 5:
          iVar7 = FUN_8c08f9e8(ar4,*(int *)(ar4 + 0x2c8),ar6,pcVar6);
          pcVar4 = ar6;
          if (iVar7 == 0) {
            *(int *)(ar4 + 0x240) = 0;
            if ((-1 < *(int *)(ar4 + 0x2f4)) && (-1 < *(int *)(ar4 + 0x2f8))) {
              FUN_8c06b1d8(*(int *)(ar4 + 0x2f4),*(int *)(ar4 + 0x2f8),ar6,pcVar6);
              *(int *)(ar4 + 0x2f4) = -1;
              *(int *)(ar4 + 0x2f8) = -1;
            }
            Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,pcVar6,auStack_1ec);
            Vec3_add(ar5,auStack_1ec,ar6,pcVar6,auStack_1fc);
            Vec3_add(auStack_1fc,ar4 + 0x90,ar6,pcVar6,auStack_20c);
            pcVar4 = (code *)auStack_20c;
            Vec3_add(pcVar4,ar4 + 0x2d0,pcVar4,pcVar6,auStack_21c);
            (**(code **)(*(int *)in_stack_00000000 + 0x128))(in_stack_00000000,ar5,pcVar4,pcVar6);
            if (cVar12 == '\0') {
              dVar9 = (double)CONCAT44(uStack_218,(int)(in_dr0 >> 0x20));
              in_dr0 = in_xd0;
            }
            else {
              dVar9 = (double)CONCAT44(uStack_214,uStack_218);
            }
            if (cVar11 == '\0') {
              fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
            }
            else {
              fVar8 = SUB84(dVar9 - dVar9,0);
            }
            if (cVar12 == '\0') {
              dVar9 = (double)CONCAT44(0x38d1b717,fVar8);
            }
            else {
              dVar9 = -7.932637709049515e-251;
            }
            if (cVar11 == '\0') {
              fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
            }
            else {
              fVar8 = SUB84(dVar9 + dVar9,0);
            }
            if (cVar12 == '\0') {
              dVar9 = (double)CONCAT44(*(int *)(ar4 + 0x2d4),fVar8);
            }
            else {
              dVar9 = *(double *)(ar4 + 0x2d4);
            }
            if (cVar11 == '\0') {
              fVar8 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
            }
            else {
              fVar8 = SUB84(dVar9 + dVar9,0);
            }
            if (cVar12 == '\0') {
              *(float *)(ar4 + 0x2d4) = fVar8;
            }
            else {
              *(ulonglong *)(ar4 + 0x2d4) = in_dr0;
            }
            Vec3_dtor(auStack_21c,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_20c,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_1fc,0xffffffff,pcVar4,pcVar6);
            Vec3_dtor(auStack_1ec,0xffffffff,pcVar4,pcVar6);
          }
        }
      }
      if (((-1 < *(int *)(ar4 + 0x2f4)) && (-1 < *(int *)(ar4 + 0x2f8))) &&
         (iVar2 = FUN_8c06b054(*(int *)(ar4 + 0x2f4),FUN_8c06b054,pcVar4,pcVar6), iVar2 == 0)) {
        FUN_8c06b1d8(*(int *)(ar4 + 0x2f4),*(int *)(ar4 + 0x2f8),pcVar4,pcVar6);
        iVar7 = 0;
        *(int *)(ar4 + 0x240) = 0;
        *(int *)(ar4 + 0x2f4) = -1;
        *(int *)(ar4 + 0x2f8) = -1;
      }
    }
  }
  else {
    if (*(int *)(ar4 + 300) == 0) {
      FUN_8c0230f0(ar4 + 0x80,ar4 + 0x80,pcVar4,pcVar6,auStack_22c);
      uVar5 = (undefined4)in_dr0;
      Vec3_normalize(auStack_22c,auStack_22c,pcVar4,pcVar6);
      FUN_8c03263c(ar4,auStack_23c,pcVar4,pcVar6);
      Vec3_add(auStack_24c,ar5,pcVar4,pcVar6,auStack_25c);
      Vec3_assign(ar4 + 0x54,auStack_25c,pcVar4,pcVar6);
      Vec3_dtor(auStack_25c,0xffffffff,pcVar4,pcVar6);
      Vec3_dtor(auStack_24c,0xffffffff,pcVar4,pcVar6);
      Vec3_dtor(auStack_23c,0xffffffff,pcVar4,pcVar6);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_22c,0xffffffff,pcVar4,pcVar6);
      iVar7 = get_field_24_026024(in_stack_00000000,uVar3,pcVar4,pcVar6);
      pcVar6 = in_stack_00000000;
      if (iVar7 == 0) {
        if (cVar12 == '\0') {
          iStack_24 = *(int *)(ar7 + 4);
          iStack_20 = *(int *)(ar7 + 8);
          uVar10 = CONCAT44(iStack_20,uVar5);
        }
        else {
          iStack_24 = (int)*(undefined8 *)(ar7 + 4);
          uVar10 = *(undefined8 *)(ar7 + 8);
          iStack_20 = (int)uVar10;
          uStack_1c = (undefined4)((ulonglong)uVar10 >> 0x20);
        }
        iStack_28 = 0x447a0000;
        if (cVar12 == '\0') {
          uVar10 = CONCAT44(0x40000000,(int)uVar10);
        }
        else {
          uVar10 = 0x8c03278840000000;
        }
        ar7 = (code *)&iStack_28;
        FUN_8c032788(ar4,ar4 + 0x54,ar7,in_stack_00000000);
      }
      else {
        if (cVar12 == '\0') {
          uVar10 = CONCAT44(0x40000000,uVar5);
        }
        else {
          uVar10 = 0x8c03278840000000;
        }
        FUN_8c032788(ar4,ar4 + 0x54,ar7,in_stack_00000000);
      }
      (**(code **)(*(int *)in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x54,ar7,pcVar6);
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x58) = (int)((ulonglong)uVar10 >> 0x20);
      }
      else {
        *(undefined8 *)(ar4 + 0x58) = uVar10;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    else if (*(int *)(ar4 + 300) != 1) goto LAB_8c090ada;
    pcVar4 = ar4 + 0x54;
    iVar7 = FUN_8c091924(ar4,ar5,pcVar4,pcVar6);
  }
LAB_8c090ada:
  (*(uint*)((uchar*)&uStack_26c+4)) = iVar7;
  Vec3_dtor(auStack_f4,0xffffffff,pcVar4,pcVar6);
  FUN_8c08e93c(auStack_e4,0xffffffff,pcVar4,pcVar6);
  Vec3_dtor(auStack_38,0xffffffff,pcVar4,pcVar6);
  Vec3_dtor(auStack_48,0xffffffff,pcVar4,pcVar6);
  Vec3_dtor(auStack_58,0xffffffff,pcVar4,pcVar6);
  Vec3_dtor(auStack_68,0xffffffff,pcVar4,pcVar6);
  Vec3_dtor(auStack_78,0xffffffff,pcVar4,pcVar6);
  Vec3_dtor(auStack_88,0xffffffff,pcVar4,pcVar6);
  free_if_nonnull_wrap_102790(&iStack_28,0xffffffff,pcVar4,pcVar6);
  return (*(uint*)((uchar*)&uStack_26c+4));
}

__asm__(".globl _FUN_8c08fd38\n.set _FUN_8c08fd38, _FUN_8c08fd38_def\n");
