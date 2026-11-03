//@unit 8c0502f8
#include "../decls.h"
undefined4 ret_const_0_0502f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_0502f8\n.set _ret_const_0_0502f8, _ret_const_0_0502f8_def\n");
//@unit 8c050300
#include "../decls.h"
undefined4 FUN_8c050300_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  undefined4 uVar4;
  uint in_fr1;
  float fVar5;
  double dVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [20];
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar4 = 1;
  uVar3 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_copy(auStack_28,ar7,ar6,ar7);
  Vec3_set_xyz(auStack_34,ar7,uVar3,ar7_00);
  iVar1 = get_field_6c_028cc4(ar5,ar7,uVar3,ar7_00);
  Vec3_ctor_zero(&uStack_44,ar7,uVar3,ar7_00);
  if (iVar1 == 0) {
    Vec3_dtor(&uStack_44,0xffffffff,uVar3,ar7_00);
    object_dtor_delete(auStack_34,0xffffffff,uVar3,ar7_00);
    Vec3_dtor(auStack_28,0xffffffff,uVar3,ar7_00);
    uVar4 = 2;
  }
  else {
    ar7_01 = auStack_3c;
    ar6_00 = &uStack_40;
    ar5_00 = &uStack_44;
    FUN_8c0507a4(iVar1,ar5_00,ar6_00,ar7_01);
    iVar2 = *(int *)(ar4 + 300);
    if (iVar2 == 0) {
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,ar6_00,ar7_01);
      if (iVar1 == 1) {
        ar7_01 = (undefined1 *)0x0;
        ar6_00 = (undefined4 *)0xffffffff;
        ar5_00 = (undefined4 *)0x0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7_01);
        *(undefined4 *)(ar4 + 0x2b8) = 3;
      }
      FUN_8c05ae54(ar4,ar5_00,ar6_00,ar7_01);
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 1.23128308427977e-311;
      }
      if (cVar7 == '\0') {
        fVar5 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) * fVar5);
      }
      else {
        dVar6 = dVar6 * dVar6;
      }
      if (cVar8 == '\0') {
        *(int *)(ar4 + 0x28) = SUB84(dVar6,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      (**(code **)(**(int **)(ar4 + 0x244) + 0x184))(*(int **)(ar4 + 0x244),ar5_00,ar6_00,ar7_01);
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),uStack_40);
      }
      if (cVar7 != '\0' || SUB84(dVar6,0) <= (float)((ulonglong)dVar6 >> 0x20)) {
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar6 & 0xffffffff;
        }
      }
    }
    else if (iVar2 == 1) {
      ar6_00 = &uStack_44;
      iVar1 = pure_virtual_stub(ar4,ar6,ar6_00,ar7_01);
      if ((iVar1 == 0) || (*(int *)(ar4 + 0x40) == 4)) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x280) = 0;
        *(undefined4 *)(ar4 + 0x2b8) = 3;
        ar7_01 = (undefined1 *)0x0;
        ar6_00 = (undefined4 *)0xffffffff;
        uVar3 = 0x10;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_01);
        *(undefined4 *)(ar4 + 0x40) = 5;
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)in_fr1;
        }
      }
    }
    else if (iVar2 == 2) {
      FUN_8c05ae54(ar4,ar5_00,ar6_00,ar7_01);
      *(undefined4 *)(ar4 + 0x214) = 0;
      ar7_01 = auStack_3c;
      ar6_00 = &uStack_40;
      FUN_8c0507a4(iVar1,&uStack_44,ar6_00,ar7_01);
      Vec3_scale(ar4 + 0x14,ar4 + 0x48,ar6_00,ar7_01,auStack_54);
      Vec3_scale(auStack_54,&DAT_8c136598,ar6_00,ar7_01,auStack_64);
      Vec3_add(auStack_64,ar6,ar6_00,ar7_01,auStack_74);
      Vec3_sub(auStack_74,&uStack_44,ar6_00,ar7_01,auStack_84);
      Vec3_scale(auStack_84,&DAT_8c13659c,ar6_00,ar7_01,auStack_94);
      FUN_8c023aa0(&uStack_44,auStack_94,ar6_00,ar7_01);
      Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7_01);
      Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7_01);
      Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7_01);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7_01);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_01);
      FUN_8c036988(iVar1,uVar3,ar6_00,ar7_01);
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44(0x3f59999a,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 3.73996370277889e-312;
      }
      if (cVar7 == '\0') {
        fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x28) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6_00,ar7_01);
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 300) = 0;
        uVar4 = 0;
        *(undefined4 *)(ar4 + 0x280) = 0;
        *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb | 4;
        FUN_8c03f3e8(ar5,uVar3,ar6_00,ar7_01);
        ar7_01 = (undefined1 *)0x0;
        ar6_00 = (undefined4 *)0xffffffff;
        uVar3 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_01);
        *(undefined4 *)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(ar4 + 0x214) = 1;
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)fVar5;
        }
      }
    }
    Vec3_dtor(&uStack_44,0xffffffff,ar6_00,ar7_01);
    object_dtor_delete(auStack_34,0xffffffff,ar6_00,ar7_01);
    Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_01);
  }
  return uVar4;
}

__asm__(".globl _FUN_8c050300\n.set _FUN_8c050300, _FUN_8c050300_def\n");
//@unit 8c0507a4
#include "../decls.h"
undefined4 * FUN_8c0507a4_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x30);
  *ar6 = *(undefined4 *)(ar4 + 0x34);
  *ar7 = *(undefined4 *)(ar4 + 0x38);
  return (undefined4 *)(ar4 + 0x34);
}

__asm__(".globl _FUN_8c0507a4\n.set _FUN_8c0507a4, _FUN_8c0507a4_def\n");
//@unit 8c0507c0
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
//@unit 8c051a68
#include "../decls.h"
undefined4 FUN_8c051a68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  double in_xd0;
  char cVar8;
  char cVar9;
  undefined8 uStack_70;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  if (*(int *)(ar4 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ar6;
    Vec3_sub(ar5,ar6,ar6,ar7,auStack_3c);
    Vec3_normalize(auStack_3c,ar6,uVar1,ar7);
    Vec3_ctor_copy(auStack_1c,auStack_4c,uVar1,ar7);
    Vec3_dtor(auStack_4c,0xffffffff,uVar1,ar7);
    uVar5 = 0xffffffff;
    Vec3_dtor(auStack_3c,0xffffffff,uVar1,ar7);
    Vec3_ctor_zero(auStack_2c,uVar5,uVar1,ar7);
    iVar2 = *(int *)(ar4 + 0x40);
    if ((iVar2 == 1) || (iVar2 == 3)) {
      pdVar3 = (double *)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar3;
        pdVar3 = (double *)(ar4 + 0x30);
      }
      dVar7 = *pdVar3;
      if (cVar8 == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      dVar7 = in_xd0;
      if (cVar9 == '\0') {
        uStack_70 = (double)CONCAT44((*(uint*)((uchar*)&uStack_70+4)),fVar6);
        dVar7 = uStack_70;
      }
      uStack_70 = dVar7;
      Vec3_scale(auStack_1c,&uStack_70,uVar1,ar7,auStack_5c);
      FUN_8c023aa0(ar4 + 0x14,auStack_5c,uVar1,ar7);
      uVar5 = 0xffffffff;
      Vec3_dtor(auStack_5c,0xffffffff,uVar1,ar7);
      Vec3_normalize(ar4 + 0x14,uVar5,uVar1,ar7);
      Vec3_assign(ar4 + 0x14,(int)&uStack_70 + 4,uVar1,ar7);
      Vec3_dtor((int)&uStack_70 + 4,0xffffffff,uVar1,ar7);
      pdVar3 = (double *)(ar4 + 0x2c);
      if (cVar9 != '\0') {
        in_xd0 = *pdVar3;
        pdVar3 = (double *)(ar4 + 0x30);
      }
      dVar7 = *pdVar3;
      if (SUB84(dVar7,0) != (float)((ulonglong)dVar7 >> 0x20)) {
        if (cVar9 == '\0') {
          dVar7 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
        }
        if (cVar8 == '\0' && 0.0 < SUB84(dVar7,0)) {
          if (cVar9 == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x28);
            dVar7 = *(double *)(ar4 + 0x24);
          }
          if (cVar8 == '\0') {
            fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 / dVar7,0);
          }
          if (cVar9 == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c),fVar6);
          }
          else {
            dVar7 = *(double *)(ar4 + 0x2c);
          }
          if (cVar8 == '\0') {
            fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 + dVar7,0);
          }
          puVar4 = (undefined8 *)(ar4 + 0x30);
          if (cVar9 == '\0') {
            *(float *)(ar4 + 0x2c) = fVar6;
            puVar4 = (undefined8 *)(ar4 + 0x2c);
          }
          else {
            *(double *)(ar4 + 0x2c) = in_xd0;
          }
          if (cVar8 == '\0' && (float)((ulonglong)*puVar4 >> 0x20) < (float)*puVar4) {
            if (cVar9 == '\0') {
              *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x30);
            }
            else {
              *(undefined8 *)(ar4 + 0x2c) = *(undefined8 *)(ar4 + 0x30);
            }
          }
        }
      }
    }
    else if (iVar2 == 4) {
      FUN_8c05ae54(ar4,uVar5,uVar1,ar7);
    }
    Vec3_dtor(auStack_2c,0xffffffff,uVar1,ar7);
    Vec3_dtor(auStack_1c,0xffffffff,uVar1,ar7);
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c051a68\n.set _FUN_8c051a68, _FUN_8c051a68_def\n");
//@unit 8c051c14
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
//@unit 8c0526a0
#include "../decls.h"
undefined4 FUN_8c0526a0_def(code *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  code *ar6_00;
  code *ar7_00;
  undefined4 ar7_01;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 in_dr0;
  float fVar12;
  double dVar10;
  ulonglong uVar11;
  undefined8 in_xd0;
  char cVar13;
  char cVar14;
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
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar4 = 1;
  uVar8 = 1;
  pcVar3 = ar6;
  Vec3_ctor_zero(auStack_20,1,ar6,ar7);
  Vec3_ctor_zero(auStack_30,uVar4,pcVar3,ar7);
  FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar3,ar7,auStack_40);
  Vec3_ctor_xyz(auStack_50,uVar4,pcVar3,ar7);
  FUN_8c0230f0(auStack_50,uVar4,pcVar3,ar7,auStack_60);
  FUN_8c022dac(auStack_40,auStack_60,pcVar3,ar7);
  uVar1 = in_dr0;
  if (cVar14 == '\0') {
    uStack_180 = CONCAT44((*(uint*)((uchar*)&uStack_180+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = uStack_180;
  }
  uStack_180 = uVar1;
  Vec3_dtor(auStack_60,0xffffffff,pcVar3,ar7);
  ar7_00 = Vec3_dtor;
  Vec3_dtor(auStack_50,0xffffffff,pcVar3,Vec3_dtor);
  Vec3_dtor(auStack_40,0xffffffff,pcVar3,ar7_00);
  if (ar6 != (code *)0x0) {
    if (ar6 == (code *)0x1) {
      pcVar3 = *(code **)(ar4 + 0x28c);
      uVar4 = 5;
      if (((int)pcVar3 < 6) && (-1 < (int)pcVar3)) {
        ar6_00 = (code *)((int)pcVar3 * 4);
                    
        switch(pcVar3) {
        case 0x0:
          if (*(int *)(ar4 + 0x324) == 1) {
            Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7_00);
            Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7_00);
            return 0;
          }
          *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
          ar6_00 = ar4;
        case 0x1:
          pcVar3 = ar6_00;
          iVar5 = FUN_8c057164(ar4,ar5,pcVar3,ar7_00);
          if (iVar5 == 0) {
            *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
          }
          break;
        case 0x2:
          Vec3_ctor_xyz(auStack_70,5,ar6_00,ar7_00);
          uVar4 = FUN_8c023334(ar4 + 0x14,auStack_70,ar6_00,ar7_00);
          *(undefined4 *)(ar4 + 0x27c) = uVar4;
          uVar4 = 0xffffffff;
          Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
          FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7_00,auStack_80);
          ar6_00 = Vec3_ctor_xyz;
          Vec3_ctor_xyz(auStack_90,uVar4,Vec3_ctor_xyz,ar7_00);
          FUN_8c022dac(auStack_80,auStack_90,ar6_00,ar7_00);
          if (cVar14 == '\0') {
            *(int *)(ar4 + 0x224) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)(ar4 + 0x224) = in_dr0;
          }
          Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7_00);
          uVar4 = 0xffffffff;
          Vec3_dtor(auStack_80,0xffffffff,ar6_00,ar7_00);
          if (cVar14 == '\0') {
            fVar9 = *(float *)(ar4 + 0x224);
            fVar12 = 30.0;
          }
          else {
            fVar9 = 30.0;
            fVar12 = -1.0;
          }
          if (cVar13 == '\0' && fVar9 < fVar12) {
            ar7_01 = 0;
            uVar7 = 0xffffffff;
            uVar4 = 0x1a;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar7,ar7_01);
            *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 3;
            *(undefined4 *)(ar4 + 0x27c) = 0;
            pcVar3 = (code *)0x28c;
            ar7_00 = ar4;
            break;
          }
          if (cVar14 == '\0') {
            fVar9 = *(float *)(ar4 + 0x224);
            fVar12 = 70.0;
          }
          else {
            fVar9 = 70.0;
            fVar12 = -1.0;
          }
          if (cVar13 == '\0' && fVar9 < fVar12) {
            ar7_00 = (code *)0x0;
            pcVar3 = (code *)0xffffffff;
            uVar4 = 0x1a;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,pcVar3,ar7_00);
            *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 3;
            break;
          }
          if (*(int *)(ar4 + 0x27c) == 3) {
            FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00);
            FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00);
            Vec3_ctor_xyz(auStack_c0,uVar4,ar6_00,ar7_00);
            Vec3_add(ar5,auStack_c0,ar6_00,ar7_00,auStack_d0);
            ar6_00 = (code *)auStack_d0;
            FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00);
            Vec3_dtor(auStack_d0,0xffffffff,ar6_00,ar7_00);
            uVar4 = 0xffffffff;
            Vec3_dtor(auStack_c0,0xffffffff,ar6_00,ar7_00);
          }
          else if (*(int *)(ar4 + 0x27c) == 4) {
            FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00);
            FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00);
            Vec3_ctor_xyz(auStack_a0,uVar4,ar6_00,ar7_00);
            Vec3_add(ar5,auStack_a0,ar6_00,ar7_00,auStack_b0);
            ar6_00 = (code *)auStack_b0;
            FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00);
            Vec3_dtor(auStack_b0,0xffffffff,ar6_00,ar7_00);
            uVar4 = 0xffffffff;
            Vec3_dtor(auStack_a0,0xffffffff,ar6_00,ar7_00);
          }
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00);
          *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
        case 0x3:
          iVar5 = FUN_8c057e58(ar4,uVar4,ar6_00,ar7_00);
          pcVar3 = ar6_00;
          if (iVar5 == 0) {
            *(undefined4 *)(ar4 + 0x28c) = 1;
          }
          break;
        case 0x4:
          iVar5 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,5,ar6_00,ar7_00);
          pcVar3 = ar6_00;
          if (iVar5 == 1) {
            *(undefined4 *)(ar4 + 0x28c) = 0;
            *(undefined4 *)(ar4 + 0x290) = 0;
            uVar8 = 0;
          }
          break;
        case 0x5:
          *(undefined4 *)(ar4 + 0x28c) = 0;
          *(undefined4 *)(ar4 + 0x290) = 0;
          uVar8 = 0;
          pcVar3 = ar6_00;
        }
      }
      goto switchD_8c0527a4_default;
    }
    if (ar6 != (code *)0x2) goto switchD_8c0527a4_default;
  }
  Vec3_scale(ar4 + 0x14,&DAT_8c1365a4,pcVar3,ar7_00,auStack_e0);
  Vec3_add(ar5,auStack_e0,pcVar3,ar7_00,auStack_f0);
  pcVar3 = ar5;
  FUN_8c031c74(ar4,auStack_f0,ar5,ar7_00);
  Vec3_dtor(auStack_f0,0xffffffff,pcVar3,ar7_00);
  iVar5 = -1;
  Vec3_dtor(auStack_e0,0xffffffff,pcVar3,ar7_00);
  if (cVar14 == '\0') {
    dVar10 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x28);
    dVar10 = 1.38406752724369e-311;
  }
  if (cVar13 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20);
    dVar10 = (double)CONCAT44(fVar9,SUB84(dVar10,0) * fVar9);
  }
  else {
    dVar10 = dVar10 * dVar10;
  }
  if (cVar14 == '\0') {
    *(int *)(ar4 + 0x28) = SUB84(dVar10,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_xd0;
  }
  iVar2 = *(int *)(ar4 + 0x28c);
  if (iVar2 == 0) {
    iVar5 = FUN_8c05c28c(ar4,iVar5,pcVar3,ar7_00);
    if (iVar5 == 0) {
      *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
    }
    goto switchD_8c0527a4_default;
  }
  if (iVar2 == 1) {
    Vec3_ctor_xyz(auStack_100,iVar5,pcVar3,ar7_00);
    uVar4 = FUN_8c023334(ar4 + 0x14,auStack_100,pcVar3,ar7_00);
    *(undefined4 *)(ar4 + 0x27c) = uVar4;
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_100,0xffffffff,pcVar3,ar7_00);
    FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar3,ar7_00,auStack_110);
    Vec3_ctor_xyz(auStack_120,uVar4,pcVar3,ar7_00);
    FUN_8c0230f0(auStack_120,uVar4,pcVar3,ar7_00,auStack_130);
    FUN_8c022dac(auStack_110,auStack_130,pcVar3,ar7_00);
    if (cVar14 == '\0') {
      *(int *)(ar4 + 0x224) = (int)((ulonglong)dVar10 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x224) = dVar10;
    }
    Vec3_dtor(auStack_130,0xffffffff,pcVar3,ar7_00);
    Vec3_dtor(auStack_120,0xffffffff,pcVar3,ar7_00);
    Vec3_dtor(auStack_110,0xffffffff,pcVar3,ar7_00);
    if (cVar14 == '\0') {
      uVar11 = CONCAT44(0x420c0000,*(undefined4 *)(ar4 + 0x224));
    }
    else {
      uVar11 = 0x28c420c0000;
    }
    if (cVar13 == '\0' && (float)uVar11 < (float)(uVar11 >> 0x20)) {
      *(undefined4 *)(ar4 + 0x27c) = 0;
      uVar8 = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uVar11 & 0xffffffff;
      }
      *(undefined4 *)(ar4 + 0x28c) = 0;
      goto switchD_8c0527a4_default;
    }
    if (cVar14 == '\0') {
      uVar11 = CONCAT44(0x425c0000,*(undefined4 *)(ar4 + 0x224));
    }
    else {
      uVar11 = 0x28c425c0000;
    }
    fVar9 = (float)uVar11;
    if (cVar13 == '\0' && fVar9 < (float)(uVar11 >> 0x20)) {
      uVar8 = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = uVar11 & 0xffffffff;
      }
      *(undefined4 *)(ar4 + 0x28c) = 0;
      goto switchD_8c0527a4_default;
    }
    if (cVar14 == '\0') {
      *(undefined4 *)(ar4 + 0x224) = 0x42340000;
    }
    else {
      fVar9 = 45.0;
      *(undefined8 *)(ar4 + 0x224) = 0x27c42340000;
    }
    if (*(int *)(ar4 + 0x27c) == 3) {
      ar7_00 = (code *)0x0;
      pcVar3 = (code *)0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
    }
    else if (*(int *)(ar4 + 0x27c) == 4) {
      ar7_00 = (code *)0x0;
      pcVar3 = (code *)0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
    }
    *(undefined4 *)(ar4 + 0x2b8) = 3;
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,pcVar3,ar7_00);
    if (cVar14 == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)fVar9;
    }
    pcVar3 = (code *)0x28c;
    iVar5 = *(int *)(ar4 + 0x28c);
    *(int *)(ar4 + 0x28c) = iVar5 + 1;
  }
  else if (iVar2 != 2) {
    if (iVar2 == 3) {
      uVar8 = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar10 & 0xffffffff;
      }
      *(undefined4 *)(ar4 + 0x28c) = 0;
      pcVar3 = (code *)0x0;
      ar7_00 = (code *)0x28c;
    }
    goto switchD_8c0527a4_default;
  }
  FUN_8c05ae54(ar4,iVar5,pcVar3,ar7_00);
  Vec3_ctor_xyz(auStack_140,iVar5,pcVar3,ar7_00);
  Vec3_scale(auStack_140,&DAT_8c1365a8,pcVar3,ar7_00,auStack_150);
  puVar6 = auStack_150;
  Vec3_add(ar5,puVar6,pcVar3,ar7_00,auStack_160);
  uVar4 = get_field_1c_026dd8(ar4 + 0xb0,puVar6,pcVar3,ar7_00);
  s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar4,pcVar3,ar7_00);
  Vec3_set_xyz(auStack_16c,ar4 + 0x224,pcVar3,ar7_00);
  pcVar3 = ar4 + 0x14;
  puVar6 = auStack_160;
  FUN_8c031eb0(ar4,ar5,puVar6,pcVar3,(int)&uStack_180 + 4);
  Vec3_assign(ar4 + 0x14,(int)&uStack_180 + 4,puVar6,pcVar3);
  Vec3_dtor((int)&uStack_180 + 4,0xffffffff,puVar6,pcVar3);
  object_dtor_delete(auStack_16c,0xffffffff,puVar6,pcVar3);
  Vec3_dtor(auStack_160,0xffffffff,puVar6,pcVar3);
  uVar7 = 0xffffffff;
  puVar6 = auStack_150;
  Vec3_dtor(puVar6,0xffffffff,puVar6,0xffffffff);
  uVar4 = 0xffffffff;
  Vec3_dtor(auStack_140,0xffffffff,puVar6,uVar7);
  pcVar3 = (code *)CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,puVar6,uVar7);
  ar7_00 = pcVar3;
  if (pcVar3 == (code *)0x1) {
    *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + -1;
  }
switchD_8c0527a4_default:
  Vec3_dtor(auStack_30,0xffffffff,pcVar3,ar7_00);
  Vec3_dtor(auStack_20,0xffffffff,pcVar3,ar7_00);
  return uVar8;
}

__asm__(".globl _FUN_8c0526a0\n.set _FUN_8c0526a0, _FUN_8c0526a0_def\n");
//@unit 8c0530e0
#include "../decls.h"
undefined4 FUN_8c0530e0_def(int ar4,int *ar5,undefined1 *ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *ar5_00;
  int *ar5_01;
  undefined1 *ar6_00;
  undefined4 uVar4;
  double dVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar5_01 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  FUN_8c031748(ar4,ar5_01,ar6_00,ar7);
  if (cVar9 == '\0') {
    dVar5 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x28);
    dVar5 = 4294968310.4;
  }
  if (cVar8 == '\0') {
    fVar6 = (float)((ulonglong)dVar5 >> 0x20);
    dVar5 = (double)CONCAT44(fVar6,SUB84(dVar5,0) * fVar6);
  }
  else {
    dVar5 = dVar5 * dVar5;
  }
  if (cVar9 == '\0') {
    *(int *)(ar4 + 0x28) = SUB84(dVar5,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_xd0;
  }
  FUN_8c05ae54(ar4,ar5_01,ar6_00,ar7);
  uVar2 = FUN_8c053724(ar5,ar5_01,ar6_00,ar7);
  if ((char)uVar2 == '\0') {
    iVar3 = (**(code **)(*ar5 + 0x34))(ar5,ar5_01,ar6_00,ar7);
    if (iVar3 != 0) {
      uVar2 = (**(code **)(*ar5 + 0x34))(ar5,ar5_01,ar6_00,ar7);
      uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
      *(undefined4 *)(ar4 + 0x348) = uVar2;
      ar5_00 = &DAT_8c125d48;
      Vec3_assign(auStack_24,&DAT_8c125d48,ar6_00,ar7);
      if (*(int *)(ar4 + 0x348) == 3) {
        Vec3_ctor_xyz(auStack_34,ar5_00,ar6_00,ar7);
        Vec3_assign(auStack_24,auStack_34,ar6_00,ar7);
        ar5_00 = (undefined *)0xffffffff;
        Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
      }
      else if (*(int *)(ar4 + 0x348) == 4) {
        Vec3_ctor_xyz(auStack_44,ar5_00,ar6_00,ar7);
        Vec3_assign(auStack_24,auStack_44,ar6_00,ar7);
        ar5_00 = (undefined *)0xffffffff;
        Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x348) = 0;
      }
      FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6_00,ar7,auStack_54);
      FUN_8c022dac(auStack_54,auStack_24,ar6_00,ar7);
      if (cVar9 == '\0') {
        dVar5 = (double)CONCAT44(0x40a00000,uVar7);
      }
      else {
        dVar5 = -7.932637912122029e-251;
      }
      fVar6 = SUB84(dVar5,0);
      uVar1 = (ulonglong)dVar5 >> 0x20;
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
      if (cVar8 == '\0' && fVar6 < (float)uVar1) {
        *(undefined4 *)(ar4 + 0x348) = 0;
      }
      ar5_01 = (int *)0x0;
      (**(code **)(*ar5 + 0x38))(ar5,0,ar6_00,ar7);
      if ((*(int *)(ar4 + 0x348) != *(int *)(ar4 + 0x344)) && (*(int *)(ar4 + 0x344) == 0)) {
        *(undefined4 *)(ar4 + 0x344) = *(undefined4 *)(ar4 + 0x348);
        *(undefined4 *)(ar4 + 0x284) = 0;
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x28c) = 0;
      }
    }
    iVar3 = *(int *)(ar4 + 0x344);
    if (iVar3 == 0) {
      iVar3 = *(int *)(ar4 + 300);
      if (iVar3 == 0) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_01,ar6_00,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          if (*(int *)(ar4 + 0x27c) == 0) {
            iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_01,ar6_00,ar7);
          }
          else {
            iVar3 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5_01,ar6_00,ar7);
          }
          if ((iVar3 == 7) || (iVar3 == 1)) {
            *(undefined4 *)(ar4 + 300) = 1;
          }
        }
        goto LAB_8c0536da;
      }
      iVar3 = *(int *)(ar4 + 0x27c);
      if (iVar3 == 0) {
        iVar3 = rand_range(ar4,0,100,ar7);
        if (iVar3 == 0) {
          ar7 = 0;
          ar6_00 = (undefined1 *)0xffffffff;
          ar5_01 = (int *)0x2;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
        }
        else {
          ar5_01 = (int *)FUN_8c032af8(ar4,0,2,10);
          ar7 = 0;
          ar6_00 = (undefined1 *)0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_01,0xffffffff,0);
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_01,ar6_00,ar7);
      }
      else if (iVar3 == 3) {
        ar7 = 0;
        ar6_00 = (undefined1 *)0xffffffff;
        ar5_01 = (int *)0xb;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0);
      }
      else if (iVar3 == 4) {
        ar7 = 0;
        ar6_00 = (undefined1 *)0xffffffff;
        ar5_01 = (int *)0xc;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xc,0xffffffff,0);
      }
      FUN_8c032ab0(ar4,ar5_01,ar6_00,ar7);
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x340) = (int)((ulonglong)dVar5 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x340) = dVar5;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x2b8) = 3;
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      if (*(int *)(ar4 + 300) == 0) {
        if (*(int *)(ar4 + 0x344) == 3) {
          Vec3_ctor_xyz(auStack_64,ar5_01,ar6_00,ar7);
          Vec3_assign(ar4 + 0x54,auStack_64,ar6_00,ar7);
          uVar2 = 0xffffffff;
          Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
        }
        else {
          Vec3_ctor_xyz(auStack_74,ar5_01,ar6_00,ar7);
          Vec3_assign(ar4 + 0x54,auStack_74,ar6_00,ar7);
          uVar2 = 0xffffffff;
          Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
        }
        if (*(int *)(ar4 + 0x128) == 0) {
          if (cVar9 == '\0') {
            *(undefined4 *)(ar4 + 0x5c) = 0x3f000000;
          }
          else {
            *(undefined8 *)(ar4 + 0x5c) = 0x8c022f543f000000;
          }
        }
        Vec3_length(ar4 + 0x54,uVar2,ar6_00,ar7);
        if (*(int *)(ar4 + 0x27c) == 0) {
          *(undefined4 *)(ar4 + 0x28c) = 1;
          FUN_8c02a1fc(ar4 + 0x2c8,uVar2,ar6_00,ar7);
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else if (*(int *)(ar4 + 300) != 1) goto LAB_8c0536da;
      Vec3_ctor_copy(auStack_84,ar4 + 0x54,ar6_00,ar7);
      ar6_00 = auStack_84;
      iVar3 = FUN_8c051c14(ar4,ar6,ar6_00,ar7);
      Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
      if (iVar3 == 0) {
        *(undefined4 *)(ar4 + 300) = 0;
        if (*(int *)(ar4 + 0x344) == 3) {
          *(undefined4 *)(ar4 + 0x27c) = 4;
        }
        else {
          *(undefined4 *)(ar4 + 0x27c) = 3;
        }
        *(undefined4 *)(ar4 + 0x344) = 0;
      }
    }
  }
  else {
    iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_01,ar6_00,ar7);
    if (iVar3 == 1) {
      *(undefined4 *)(ar4 + 300) = 0;
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x340) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x340) = CONCAT44(0x3f800000,SUB84(dVar5,0));
      }
      uVar4 = 0;
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(ar4 + 0x284) = 0;
    }
  }
LAB_8c0536da:
  Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c0530e0\n.set _FUN_8c0530e0, _FUN_8c0530e0_def\n");
//@unit 8c053724
#include "../decls.h"
int FUN_8c053724_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(0x80 + ar4);
}

__asm__(".globl _FUN_8c053724\n.set _FUN_8c053724, _FUN_8c053724_def\n");
//@unit 8c053730
#include "../decls.h"
undefined4 FUN_8c053730_def(int ar4,int *ar5,undefined4 ar6,undefined1 *ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  code *ar5_00;
  undefined4 uVar4;
  undefined *ar5_01;
  undefined1 *puVar5;
  undefined1 *ar7_00;
  undefined4 uVar6;
  double dVar7;
  float fVar9;
  undefined8 uVar8;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined4 in_stack_fffffed4;
  undefined4 ain0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = 1;
  ar5_00 = Vec3_ctor_zero;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_28,Vec3_ctor_zero,ar6,ar7);
  FUN_8c031748(ar4,ar5_00,ar6,ar7_00);
  FUN_8c022d04(ar4 + 0x90,ar5_00,ar6,ar7_00);
  puVar5 = auStack_38;
  Vec3_scale(ar4 + 0x14,&DAT_8c1365ac,puVar5,ar7_00,puVar5);
  Vec3_add(ar7,auStack_38,puVar5,ar7_00,auStack_48);
  puVar5 = ar7;
  FUN_8c031c74(ar4,auStack_48,ar7,ar7_00);
  Vec3_dtor(auStack_48,0xffffffff,puVar5,ar7_00);
  uVar4 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,puVar5,ar7_00);
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x28);
    dVar7 = 52776566443212.8;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(fVar9,SUB84(dVar7,0) * fVar9);
  }
  else {
    dVar7 = dVar7 * dVar7;
  }
  if (cVar12 == '\0') {
    *(int *)(ar4 + 0x28) = SUB84(dVar7,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_xd0;
  }
  FUN_8c05ae54(ar4,uVar4,puVar5,ar7_00);
  uVar2 = FUN_8c053724(ar5,uVar4,puVar5,ar7_00);
  ain0 = CONCAT31((int3)((uint)in_stack_fffffed4 >> 8),(char)uVar2);
  if ((char)uVar2 == '\0') {
    iVar3 = (**(code **)(*ar5 + 0x34))(ar5,uVar4,puVar5,ar7_00);
    if (iVar3 != 0) {
      uVar4 = (**(code **)(*ar5 + 0x34))(ar5,uVar4,puVar5,ar7_00);
      uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
      *(undefined4 *)(ar4 + 0x348) = uVar4;
      ar5_01 = &DAT_8c125d48;
      Vec3_assign(auStack_28,&DAT_8c125d48,puVar5,ar7_00);
      if (*(int *)(ar4 + 0x348) == 3) {
        Vec3_ctor_xyz(auStack_58,ar5_01,puVar5,ar7_00);
        Vec3_assign(auStack_28,auStack_58,puVar5,ar7_00);
        ar5_01 = (undefined *)0xffffffff;
        Vec3_dtor(auStack_58,0xffffffff,puVar5,ar7_00);
      }
      else if (*(int *)(ar4 + 0x348) == 4) {
        Vec3_ctor_xyz(auStack_68,ar5_01,puVar5,ar7_00);
        Vec3_assign(auStack_28,auStack_68,puVar5,ar7_00);
        ar5_01 = (undefined *)0xffffffff;
        Vec3_dtor(auStack_68,0xffffffff,puVar5,ar7_00);
      }
      else {
        *(undefined4 *)(ar4 + 0x348) = 0;
      }
      FUN_8c0230f0(ar4 + 0x14,ar5_01,puVar5,ar7_00,auStack_78);
      FUN_8c022dac(auStack_78,auStack_28,puVar5,ar7_00);
      if (cVar12 == '\0') {
        dVar7 = (double)CONCAT44(0x41200000,uVar2);
      }
      else {
        dVar7 = -7.932637925129825e-251;
      }
      bVar10 = cVar11 == '\0';
      fVar9 = SUB84(dVar7,0);
      uVar1 = (ulonglong)dVar7 >> 0x20;
      Vec3_dtor(auStack_78,0xffffffff,puVar5,ar7_00);
      if (bVar10 && fVar9 < (float)uVar1) {
        *(undefined4 *)(ar4 + 0x348) = 0;
      }
      uVar4 = 0;
      (**(code **)(*ar5 + 0x38))(ar5,0,puVar5,ar7_00);
      if ((*(int *)(ar4 + 0x348) != *(int *)(ar4 + 0x344)) && (*(int *)(ar4 + 0x344) == 0)) {
        *(undefined4 *)(ar4 + 0x344) = *(undefined4 *)(ar4 + 0x348);
        *(undefined4 *)(ar4 + 0x284) = 0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
    }
    iVar3 = *(int *)(ar4 + 0x344);
    if (iVar3 == 0) {
      iVar3 = *(int *)(ar4 + 300);
      if (iVar3 == 0) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,puVar5,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,puVar5,ar7_00,ain0);
          if (cVar12 == '\0') {
            uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x24c),(int)((ulonglong)dVar7 >> 0x20));
          }
          else {
            uVar8 = *(undefined8 *)(ar4 + 0x24c);
          }
          if (cVar11 != '\0' || (float)((ulonglong)uVar8 >> 0x20) <= (float)uVar8) {
            iVar3 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar4,puVar5,ar7_00);
            if (iVar3 == 7) {
              FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00);
              if (cVar12 == '\0') {
                *(int *)(ar4 + 0x248) = (int)((ulonglong)uVar8 >> 0x20);
              }
              else {
                *(undefined8 *)(ar4 + 0x248) = uVar8;
              }
              *(undefined4 *)(ar4 + 300) = 1;
            }
          }
          else {
            s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar4,puVar5,ar7_00);
          }
        }
        goto LAB_8c053eda;
      }
      iVar3 = *(int *)(ar4 + 0x27c);
      if (iVar3 == 0) {
        ar7_00 = (undefined1 *)0x0;
        puVar5 = (undefined1 *)0xffffffff;
        uVar4 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      }
      else if (iVar3 == 3) {
        ar7_00 = (undefined1 *)0x0;
        puVar5 = (undefined1 *)0xffffffff;
        uVar4 = 0xb;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0);
      }
      else if (iVar3 == 4) {
        ar7_00 = (undefined1 *)0x0;
        puVar5 = (undefined1 *)0xffffffff;
        uVar4 = 0xc;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xc,0xffffffff,0);
      }
      FUN_8c022d04(ar4 + 0x248,uVar4,puVar5,ar7_00);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00);
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x248) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x248) = dVar7;
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      iVar3 = *(int *)(ar4 + 300);
      if (iVar3 == 0) {
        iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,puVar5,ar7_00);
        if (iVar3 == 1) {
          if (*(int *)(ar4 + 0x344) == 3) {
            FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00);
            FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00);
            Vec3_ctor_xyz(auStack_88,uVar4,puVar5,ar7_00);
            Vec3_assign(ar4 + 0x54,auStack_88,puVar5,ar7_00);
            Vec3_dtor(auStack_88,0xffffffff,puVar5,ar7_00);
          }
          else {
            FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00);
            FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00);
            Vec3_ctor_xyz(auStack_98,uVar4,puVar5,ar7_00);
            Vec3_assign(ar4 + 0x54,auStack_98,puVar5,ar7_00);
            Vec3_dtor(auStack_98,0xffffffff,puVar5,ar7_00);
          }
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else if (iVar3 == 1) {
        FUN_8c0230f0(ar4 + 0x14,uVar4,puVar5,ar7_00,auStack_a8);
        FUN_8c0230f0(ar4 + 0x54,uVar4,puVar5,ar7_00,auStack_b8);
        FUN_8c022dac(auStack_a8,auStack_b8,puVar5,ar7_00);
        if (cVar12 == '\0') {
          in_fr15 = (float)((ulonglong)dVar7 >> 0x20);
        }
        Vec3_dtor(auStack_b8,0xffffffff,puVar5,ar7_00);
        uVar2 = SUB84(dVar7,0);
        uVar4 = 0xffffffff;
        Vec3_dtor(auStack_a8,0xffffffff,puVar5,ar7_00);
        if (cVar12 == '\0') {
          dVar7 = (double)CONCAT44(0x41200000,uVar2);
        }
        else {
          dVar7 = 6.37138561414139e-312;
        }
        if (cVar11 == '\0') {
          bVar10 = (float)((ulonglong)dVar7 >> 0x20) < in_fr15;
        }
        else {
          bVar10 = dVar7 < (double)CONCAT44(in_fr14,in_fr15);
        }
        if (bVar10) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          *(undefined4 *)(ar4 + 0x298) = 1;
        }
        else {
          *(undefined4 *)(ar4 + 300) = 0;
          if (*(int *)(ar4 + 0x344) == 3) {
            *(undefined4 *)(ar4 + 0x27c) = 4;
          }
          else {
            *(undefined4 *)(ar4 + 0x27c) = 3;
          }
          *(undefined4 *)(ar4 + 0x344) = 0;
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,puVar5,ar7_00);
      }
      else if (iVar3 == 2) {
        Vec3_ctor_copy(auStack_c8,ar4 + 0x54,puVar5,ar7_00);
        ar7_00 = auStack_c8;
        iVar3 = FUN_8c04e2d0(ar4,ar7,ar7,ar7_00);
        Vec3_dtor(auStack_c8,0xffffffff,ar7,ar7_00);
        puVar5 = ar7;
        if (iVar3 == 0) {
          puVar5 = (undefined1 *)0x12c;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + -1;
        }
      }
    }
  }
  else {
    iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,puVar5,ar7_00);
    if (iVar3 == 1) {
      *(undefined4 *)(ar4 + 300) = 0;
      uVar6 = 0;
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(ar4 + 0x284) = 0;
    }
  }
LAB_8c053eda:
  Vec3_dtor(auStack_28,0xffffffff,puVar5,ar7_00);
  return uVar6;
}

__asm__(".globl _FUN_8c053730\n.set _FUN_8c053730, _FUN_8c053730_def\n");
//@unit 8c053f24
#include "../decls.h"
undefined4 FUN_8c053f24_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *ar5_00;
  undefined4 uVar6;
  code *ar5_01;
  code *ar6_00;
  undefined4 *ar7_00;
  undefined4 uVar7;
  float fVar8;
  undefined8 in_dr0;
  undefined8 uVar9;
  double dVar10;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined4 in_stack_fffffe78;
  undefined4 ain0;
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
  undefined4 auStack_44 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar7 = 1;
  ar7_00 = auStack_44;
  ar6_00 = (code *)&DAT_8c1365b0;
  auStack_44[0] = DAT_8c1365b0;
  auStack_44[1] = DAT_8c1365b4;
  auStack_44[2] = DAT_8c1365b8;
  auStack_44[3] = DAT_8c1365bc;
  uStack_34 = DAT_8c1365c0;
  uStack_30 = DAT_8c1365c4;
  uStack_2c = DAT_8c1365c8;
  uStack_28 = DAT_8c1365cc;
  uStack_24 = DAT_8c1365d0;
  uVar6 = DAT_8c1365cc;
  Vec3_ctor_zero(auStack_54,DAT_8c1365cc,&DAT_8c1365b0,ar7_00);
  FUN_8c022d04(ar4 + 0x90,uVar6,ar6_00,ar7_00);
  uVar2 = FUN_8c053724(ar5,uVar6,ar6_00,ar7_00);
  ain0 = CONCAT31((int3)((uint)in_stack_fffffe78 >> 8),(char)uVar2);
  if ((char)uVar2 == '\0') {
    iVar5 = (**(code **)(*ar5 + 0x34))(ar5,uVar6,ar6_00,ar7_00);
    if (iVar5 != 0) {
      uVar6 = (**(code **)(*ar5 + 0x34))(ar5,uVar6,ar6_00,ar7_00);
      uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      *(undefined4 *)(ar4 + 0x348) = uVar6;
      ar5_00 = &DAT_8c125d48;
      Vec3_assign(auStack_54,&DAT_8c125d48,ar6_00,ar7_00);
      if (*(int *)(ar4 + 0x348) == 3) {
        Vec3_ctor_xyz(auStack_64,Vec3_ctor_xyz,ar6_00,ar7_00);
        Vec3_assign(auStack_54,auStack_64,ar6_00,ar7_00);
        Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7_00);
      }
      else if (*(int *)(ar4 + 0x348) == 4) {
        Vec3_ctor_xyz(auStack_74,ar5_00,ar6_00,ar7_00);
        Vec3_assign(auStack_54,auStack_74,ar6_00,ar7_00);
        Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7_00);
      }
      else {
        *(undefined4 *)(ar4 + 0x348) = 0;
      }
      FUN_8c0230f0(ar4 + 0x14,FUN_8c0230f0,ar6_00,ar7_00,auStack_84);
      FUN_8c022dac(auStack_84,auStack_54,ar6_00,ar7_00);
      if (cVar13 == '\0') {
        in_dr0 = CONCAT44(0x41200000,uVar2);
      }
      else {
        in_dr0 = 0x8841200000;
      }
      bVar11 = cVar12 == '\0';
      fVar8 = (float)in_dr0;
      uVar1 = (ulonglong)in_dr0 >> 0x20;
      Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7_00);
      if (bVar11 && fVar8 < (float)uVar1) {
        *(undefined4 *)(ar4 + 0x348) = 0;
      }
      uVar6 = 0;
      (**(code **)(*ar5 + 0x38))(ar5,0,ar6_00,ar7_00);
      if ((*(int *)(ar4 + 0x348) != *(int *)(ar4 + 0x344)) && (*(int *)(ar4 + 0x344) == 0)) {
        *(undefined4 *)(ar4 + 0x344) = *(undefined4 *)(ar4 + 0x348);
        uVar6 = 0;
        *(undefined4 *)(ar4 + 0x284) = 0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
    }
    if (*(int *)(ar4 + 0x324) == 1) {
      uVar6 = 0;
      *(undefined4 *)(ar4 + 0x344) = 0;
      *(undefined4 *)(ar4 + 0x27c) = 3;
    }
    iVar5 = *(int *)(ar4 + 0x344);
    if (iVar5 == 0) {
      iVar5 = *(int *)(ar4 + 300);
      if ((iVar5 < 5) && (-1 < iVar5)) {
                    
        switch(iVar5) {
        case 0:
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar5,ar6_00,ar7_00);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        case 1:
          if (*(int *)(ar4 + 0x324) == 1) {
            *(undefined4 *)(ar4 + 0x27c) = 3;
          }
          ar6_00 = (code *)0x64;
          iVar5 = 0;
          iVar4 = rand_range(ar4,0,100,ar7_00);
          if (iVar4 < 0x33) {
            iVar4 = 0;
          }
          else {
            ar6_00 = (code *)0x9;
            uVar6 = 1;
            iVar4 = rand_range(ar4,1,9,ar7_00);
            uVar6 = get_field_94_02aaa4(ar5,uVar6,ar6_00,ar7_00);
            iVar5 = 5;
            iVar3 = libgcc_divide_helper_0101e4(uVar6,5,ar6_00,ar7_00);
            if (iVar3 == 1) {
              iVar4 = 7;
            }
            else if (iVar3 == 4) {
              iVar4 = 7;
            }
          }
          if (*(int *)(ar4 + 0x128) == 3) {
            FUN_8c022d04(ar4 + 0x248,iVar5,ar6_00,ar7_00);
          }
          else {
            FUN_8c022d04(ar4 + 0x248,iVar5,ar6_00,ar7_00);
          }
          iVar3 = *(int *)(ar4 + 0x27c);
          if (iVar3 == 0) {
            ar7_00 = (undefined4 *)0x0;
            ar6_00 = (code *)0xffffffff;
            iVar5 = iVar4 + 0x38;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar5,0xffffffff,0);
          }
          else if (iVar3 == 3) {
            ar7_00 = (undefined4 *)0x0;
            ar6_00 = (code *)0xffffffff;
            iVar5 = iVar4 + 0x26;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar5,0xffffffff,0);
          }
          else if (iVar3 == 4) {
            ar7_00 = (undefined4 *)0x0;
            ar6_00 = (code *)0xffffffff;
            iVar5 = iVar4 + 0x2f;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar5,0xffffffff,0);
          }
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          *(undefined4 *)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(ar4 + 0x280) = auStack_44[iVar4];
          FUN_8c032ab0(ar4,iVar5,ar6_00,ar7_00);
          if (cVar13 == '\0') {
            *(int *)(ar4 + 0x248) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)(ar4 + 0x248) = in_dr0;
          }
        case 2:
          uVar6 = (undefined4)((ulonglong)in_dr0 >> 0x20);
          CAnimBody_GetCurFrame(ar4 + 0xb0,iVar5,ar6_00,ar7_00,ain0);
          if (cVar13 == '\0') {
            uVar9 = CONCAT44(*(undefined4 *)(ar4 + 0x24c),uVar6);
          }
          else {
            uVar9 = *(undefined8 *)(ar4 + 0x24c);
          }
          if (cVar12 != '\0' || (float)((ulonglong)uVar9 >> 0x20) <= (float)uVar9) {
            if (*(int *)(ar4 + 0x324) == 0) {
              iVar4 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar5,ar6_00,ar7_00);
              if (iVar4 == 7) {
                FUN_8c032ab0(ar4,iVar5,ar6_00,ar7_00);
                if (cVar13 == '\0') {
                  *(int *)(ar4 + 0x248) = (int)((ulonglong)uVar9 >> 0x20);
                }
                else {
                  *(undefined8 *)(ar4 + 0x248) = uVar9;
                }
                iVar5 = *(int *)(ar4 + 0x280) + -1;
                *(int *)(ar4 + 0x280) = iVar5;
                if (iVar5 < 0) {
                  ar6_00 = (code *)0x64;
                  iVar5 = rand_range(ar4,0,100,ar7_00);
                  if (iVar5 < 5) {
                    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
                  }
                  else {
                    *(undefined4 *)(ar4 + 300) = 1;
                  }
                  *(undefined4 *)(ar4 + 0x280) = 0;
                }
              }
            }
            else {
              iVar5 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar5,ar6_00,ar7_00);
              if (iVar5 == 1) {
                *(undefined4 *)(ar4 + 300) = 0;
                Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
                return 0;
              }
            }
          }
          else {
            s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar5,ar6_00,ar7_00);
          }
          break;
        case 3:
          iVar5 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar5,ar6_00,ar7_00);
          if (iVar5 == 1) {
            ar7_00 = (undefined4 *)0x0;
            ar6_00 = (code *)0xffffffff;
            uVar6 = 2;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,ar6_00,ar7_00);
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          }
          break;
        case 4:
          iVar5 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar5,ar6_00,ar7_00);
          if (iVar5 == 1) {
            *(undefined4 *)(ar4 + 300) = 0;
          }
        }
      }
    }
    else if ((iVar5 == 3) || (iVar5 == 4)) {
      iVar5 = *(int *)(ar4 + 300);
      if (iVar5 == 0) {
        iVar5 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,ar6_00,ar7_00);
        if (iVar5 == 1) {
          iVar5 = *(int *)(ar4 + 0x344);
          if (iVar5 == 3) {
            FUN_8c032ab0(ar4,3,ar6_00,ar7_00);
            FUN_8c032ab0(ar4,iVar5,ar6_00,ar7_00);
            Vec3_ctor_xyz(auStack_94,iVar5,ar6_00,ar7_00);
            Vec3_add(ar7,auStack_94,ar6_00,ar7_00,auStack_a4);
            Vec3_assign(ar4 + 0x54,auStack_a4,ar6_00,ar7_00);
            Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7_00);
            Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7_00);
          }
          else {
            ar5_01 = FUN_8c032ab0;
            FUN_8c032ab0(ar4,FUN_8c032ab0,ar6_00,ar7_00);
            FUN_8c032ab0(ar4,ar5_01,ar6_00,ar7_00);
            Vec3_ctor_xyz(auStack_b4,Vec3_ctor_xyz,ar6_00,ar7_00);
            Vec3_add(ar7,auStack_b4,ar6_00,ar7_00,auStack_c4);
            Vec3_assign(ar4 + 0x54,auStack_c4,ar6_00,ar7_00);
            Vec3_dtor(auStack_c4,0xffffffff,ar6_00,ar7_00);
            Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7_00);
          }
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else if (iVar5 == 1) {
        FUN_8c0230f0(ar4 + 0x14,uVar6,ar6_00,ar7_00,auStack_d4);
        uVar6 = ar7;
        Vec3_sub(ar4 + 0x54,ar7,ar6_00,ar7_00,auStack_e4);
        FUN_8c0230f0(auStack_e4,uVar6,ar6_00,ar7_00,auStack_f4);
        FUN_8c022dac(auStack_d4,auStack_f4,ar6_00,ar7_00);
        if (cVar13 == '\0') {
          in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
        }
        Vec3_dtor(auStack_f4,0xffffffff,ar6_00,ar7_00);
        uVar2 = (undefined4)in_dr0;
        Vec3_dtor(auStack_e4,0xffffffff,ar6_00,ar7_00);
        uVar6 = 0xffffffff;
        Vec3_dtor(auStack_d4,0xffffffff,ar6_00,ar7_00);
        if (cVar13 == '\0') {
          dVar10 = (double)CONCAT44(0x41200000,uVar2);
        }
        else {
          dVar10 = -9.376284372703036e-251;
        }
        if (cVar12 == '\0') {
          bVar11 = (float)((ulonglong)dVar10 >> 0x20) < in_fr15;
        }
        else {
          bVar11 = dVar10 < (double)CONCAT44(in_fr14,in_fr15);
        }
        if (bVar11) {
          ar6_00 = (code *)(ar4 + 0x54);
          FUN_8c057b6c(ar4,ar7,ar6_00,ar7_00);
          uVar6 = 300;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        else {
          *(undefined4 *)(ar4 + 300) = 0;
          if (*(int *)(ar4 + 0x344) == 3) {
            *(undefined4 *)(ar4 + 0x27c) = 4;
          }
          else {
            *(undefined4 *)(ar4 + 0x27c) = 3;
          }
          *(undefined4 *)(ar4 + 0x344) = 0;
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,ar6_00,ar7_00);
      }
      else if (iVar5 == 2) {
        ar6_00 = FUN_8c057e58;
        iVar5 = FUN_8c057e58(ar4,uVar6,FUN_8c057e58,ar7_00);
        if (iVar5 == 0) {
          ar6_00 = (code *)0x12c;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + -1;
        }
      }
    }
  }
  else {
    iVar5 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,ar6_00,ar7_00);
    if (iVar5 == 1) {
      *(undefined4 *)(ar4 + 300) = 0;
      uVar7 = 0;
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(ar4 + 0x284) = 0;
    }
  }
  Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
  return uVar7;
}

__asm__(".globl _FUN_8c053f24\n.set _FUN_8c053f24, _FUN_8c053f24_def\n");
//@unit 8c054a14
#include "../decls.h"
undefined4 FUN_8c054a14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double in_dr0;
  char cVar5;
  char cVar6;
  undefined8 uStack_14;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar3 = 1;
  *(undefined4 *)(ar4 + 0x2f0) = 0xffffffff;
  if (*(int *)(ar4 + 300) == 0) {
    ar7 = 0;
    ar6 = 0xffffffff;
    uVar2 = 0x4e;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x4e,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7);
    *(undefined4 *)(ar4 + 0x280) = 0;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else {
    uVar2 = ar5;
    if (*(int *)(ar4 + 300) != 1) {
      return 1;
    }
  }
  iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,ar7);
    uVar3 = 0;
    *(undefined4 *)(ar4 + 300) = 0;
  }
  else {
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7,ar5);
    uStack_14 = in_dr0;
    if (cVar6 == '\0') {
      uStack_14 = (double)CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    iVar1 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x4e,ar6,ar7);
    uVar4 = SUB84(in_dr0,0);
    uVar2 = libgcc_divide_helper_0101e4(iVar1 + -1,6,ar6,ar7);
    if (cVar6 == '\0') {
      uStack_14 = (double)CONCAT44((undefined4)uStack_14,uVar4);
    }
    if (cVar5 == '\0') {
      iVar1 = (int)(float)((ulonglong)uStack_14 >> 0x20);
    }
    else {
      iVar1 = (int)uStack_14;
    }
    iVar1 = libgcc_divide_helper_01031c(iVar1,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      uVar2 = rand_range(ar4,0x19,0x1b,ar7);
      FUN_8c033474(ar4,uVar2,ar5,*(undefined4 *)(ar4 + 0x244));
      iVar1 = *(int *)(ar4 + 0x280);
      *(int *)(ar4 + 0x280) = iVar1 + 1;
      *(int *)(ar4 + 0x2f0) = iVar1;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c054a14\n.set _FUN_8c054a14, _FUN_8c054a14_def\n");
//@unit 8c054b74
#include "../decls.h"
undefined4 FUN_8c054b74_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_fr1;
  double dVar3;
  undefined8 in_dr14;
  double dVar4;
  bool bVar5;
  char cVar6;
  
  cVar6 = '\0';
  dVar3 = (double)CONCAT44(0x40200000,in_fr1);
  dVar4 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(float *)(ar4 + 0x48) * 2.5);
  if (*(int *)(ar4 + 0x31c) != 0) {
    return 0;
  }
  while( true ) {
    iVar1 = *(int *)(ar4 + 300);
    if (4 < iVar1) {
      return 1;
    }
    if (iVar1 < 0) break;
                    
    switch(iVar1) {
    case 0:
      if (ar7 == 1) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
      }
      break;
    case 1:
      iVar1 = FUN_8c057164(ar4,ar5,ar6,ar7);
      if (iVar1 != 0) {
        return 1;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
      *(undefined4 *)(ar4 + 0x40) = 5;
      return 1;
    case 2:
      iVar1 = FUN_8c055c38(ar4,ar5,ar4 + 0x34c,ar7);
      if (iVar1 != 0) {
        return 1;
      }
      *(undefined4 *)(ar4 + 0x178) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      return 1;
    case 3:
      uVar2 = ar6;
      iVar1 = FUN_8c04c314(ar4,ar5,ar6,ar7);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 300) = 4;
      }
      else {
        FUN_8c022fc0(ar5,ar6,uVar2,ar7);
        if (cVar6 == '\0') {
          bVar5 = (float)((ulonglong)dVar3 >> 0x20) < SUB84(dVar4,0);
        }
        else {
          bVar5 = dVar3 < dVar4;
        }
        if ((bVar5) && (*(int *)(ar4 + 0x304) == 1)) {
          *(undefined4 *)(ar4 + 300) = 4;
        }
      }
      if (*(int *)(ar4 + 0x21c) != 1) {
        return 1;
      }
      *(undefined4 *)(ar4 + 300) = 4;
      return 1;
    case 4:
      uVar2 = ar6;
      iVar1 = FUN_8c057164(ar4,ar5,ar6,ar7);
      if (iVar1 != 0) {
        return 1;
      }
      Vec3_assign(ar4 + 600,ar6,uVar2,ar7);
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x290) = 0;
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(ar4 + 0x280) = 0;
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c054b74\n.set _FUN_8c054b74, _FUN_8c054b74_def\n");
//@unit 8c054d6c
#include "../decls.h"
undefined4 FUN_8c054d6c_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int ar6_00;
  int ar7_00;
  undefined4 uVar3;
  undefined4 in_fr1;
  double dVar4;
  double in_dr14;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined1 auStack_2c [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  iVar2 = ar6;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_copy(auStack_2c,ar6,ar6,ar7);
  if (cVar7 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x48));
    dVar4 = (double)CONCAT44(0x40200000,in_fr1);
  }
  else {
    dVar4 = 6.3713027236808e-312;
  }
  if (cVar6 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) * (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    in_dr14 = in_dr14 * dVar4;
  }
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,ar6_00,ar7_00);
    if (*(int *)(ar4 + 0x128) < 3) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
    }
    else if (ar7 == 1) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    else {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
    }
  }
  else if (iVar1 == 1) {
    ar6_00 = ar4 + 0x34c;
    iVar2 = FUN_8c0564c4(ar4,ar5,ar6_00,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x178) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    ar7_00 = ar7;
    if ((*(int *)(ar4 + 0x2b8) == 2) && (*(int *)(ar4 + 0x21c) == 1)) {
      *(undefined4 *)(ar4 + 300) = 3;
    }
  }
  else if (iVar1 == 2) {
    ar6_00 = ar6;
    iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7_00);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 300) = 3;
    }
    else {
      FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
      if (cVar6 == '\0') {
        bVar5 = (float)((ulonglong)dVar4 >> 0x20) < SUB84(in_dr14,0);
      }
      else {
        bVar5 = dVar4 < in_dr14;
      }
      if ((bVar5) && (*(int *)(ar4 + 0x304) == 1)) {
        *(undefined4 *)(ar4 + 300) = 3;
      }
    }
    if (*(int *)(ar4 + 0x21c) == 1) {
      *(undefined4 *)(ar4 + 300) = 3;
    }
  }
  else if (iVar1 == 3) {
    uVar3 = 0;
    *(undefined4 *)(ar4 + 300) = 0;
    Vec3_assign(ar4 + 600,ar6,ar6_00,ar7_00);
    *(undefined4 *)(ar4 + 0x290) = 0;
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(undefined4 *)(ar4 + 0x280) = 0;
  }
  Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c054d6c\n.set _FUN_8c054d6c, _FUN_8c054d6c_def\n");
//@unit 8c054f7c
#include "../decls.h"
undefined4 FUN_8c054f7c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  int ar6_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_dr0;
  ulonglong uVar5;
  double dVar6;
  float in_fr15;
  undefined4 in_fr14;
  char cVar7;
  char cVar8;
  int in_stack_00000000;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_xyz(auStack_28,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    in_fr15 = 1.5;
  }
  Vec3_ctor_zero(auStack_38,uVar2,ar6_00,ar7);
  FUN_8c102748(auStack_44,uVar2,ar6_00,ar7);
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    if ((in_stack_00000000 == 0) || (in_stack_00000000 == 2)) {
      free_if_nonnull_wrap_102790(auStack_44,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
      return 0;
    }
    FUN_8c033474(ar4,7,ar5,*(undefined4 *)(ar4 + 0x244));
    uVar4 = (undefined4)in_dr0;
    ar7 = 0;
    ar6_00 = -1;
    uVar2 = 5;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7);
    Vec3_sub(ar6,ar5,ar6_00,ar7,auStack_54);
    Vec3_normalize(auStack_54,ar5,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2a8,auStack_64,ar6_00,ar7);
    Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
    ar5_00 = &DAT_8c1365d4;
    FUN_8c023bf4(ar4 + 0x2a8,&DAT_8c1365d4,ar6_00,ar7);
    if (cVar8 == '\0') {
      uVar5 = CONCAT44(uStack_24,uVar4);
      *(undefined4 *)(ar4 + 0x2ac) = uStack_24;
    }
    else {
      uVar5 = CONCAT44(uStack_20,uStack_24);
      *(ulonglong *)(ar4 + 0x2ac) = uVar5;
    }
    FUN_8c031748(ar4,ar5_00,ar6_00,ar7);
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0xa0) = uVar5 & 0xffffffff;
    }
    *(undefined4 *)(ar4 + 0x2e8) = 1;
    *(undefined4 *)(ar4 + 0x280) = 0;
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar5 & 0xffffffff;
    }
    Vec3_assign(ar4 + 0x2d4,ar4 + 0x2a8,ar6_00,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 == 1) {
    iVar1 = ar4 + 0x2d4;
    Vec3_assign(ar4 + 0x2a8,iVar1,ar6_00,ar7);
    uVar2 = (undefined4)in_dr0;
    *(undefined4 *)(ar4 + 0x2e8) = 1;
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar1,ar6_00,ar7);
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2ac),uVar2);
    }
    else {
      dVar6 = *(double *)(ar4 + 0x2ac);
    }
    if (cVar7 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - in_fr15,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - (double)CONCAT44(in_fr14,in_fr15);
    }
    if (cVar8 == '\0') {
      *(int *)(ar4 + 0x2ac) = (int)((ulonglong)dVar6 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x2ac) = dVar6;
    }
    Vec3_normalize(ar4 + 0x2a8,iVar1,ar6_00,ar7);
    Vec3_assign(ar4 + 0x14,auStack_74,ar6_00,ar7);
    Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
    Vec3_assign(auStack_38,ar4 + 0x2a8,ar6_00,ar7);
    if ((in_stack_00000000 == 0) || (in_stack_00000000 == 2)) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      FUN_8c023bf4(ar4 + 0x2a8,&DAT_8c1365d8,ar6_00,ar7);
    }
    Vec3_assign(ar4 + 0x2d4,ar4 + 0x2a8,ar6_00,ar7);
  }
  else {
    if (iVar1 == 2) {
      FUN_8c05ae54(ar4,uVar2,ar6_00,ar7);
      Vec3_length_sq(ar4 + 0x2d4,uVar2,ar6_00,ar7);
      if (cVar8 == '\0') {
        *(int *)(ar4 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_dr0;
      }
      Vec3_normalize(ar4 + 0x2d4,uVar2,ar6_00,ar7);
      Vec3_assign(ar4 + 0x14,auStack_84,ar6_00,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
      vec3_clear(ar4 + 0x2d4,uVar2,ar6_00,ar7);
      vec3_clear(ar4 + 0x2a8,uVar2,ar6_00,ar7);
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
      Vec3_scale(auStack_38,ar4 + 0x48,ar6_00,ar7,auStack_94);
      Vec3_scale(auStack_94,&DAT_8c1365dc,ar6_00,ar7,auStack_a4);
      Vec3_add(auStack_a4,ar5,ar6_00,ar7,auStack_b4);
      Vec3_assign(ar4 + 0x54,auStack_b4,ar6_00,ar7);
      Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x40) = 1;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    else if (iVar1 != 3) goto LAB_8c0553ee;
    ar6_00 = ar4 + 0x54;
    iVar1 = pure_virtual_stub(ar4,ar5,ar6_00,ar7);
    if (iVar1 == 0) {
      uVar3 = 0;
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x2e8) = 0;
      *(undefined4 *)(ar4 + 0x40) = 1;
    }
  }
LAB_8c0553ee:
  free_if_nonnull_wrap_102790(auStack_44,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c054f7c\n.set _FUN_8c054f7c, _FUN_8c054f7c_def\n");
//@unit 8c055490
#include "../decls.h"
undefined4 FUN_8c055490_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined4 uVar4;
  uint in_fr1;
  ulonglong uVar5;
  code *pcVar6;
  char cVar7;
  undefined4 in_stack_00000000;
  undefined8 uStack_84;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  cVar7 = '\0';
  uVar4 = 1;
  uVar2 = ar5;
  Vec3_ctor_zero(auStack_20,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_30,uVar2,ar6,ar7);
  if (*(int *)(ar4 + 300) == 0) {
    uVar5 = (ulonglong)in_fr1;
    if (cVar7 == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar5;
    }
    iVar1 = ar4 + 0x14;
    Vec3_assign(auStack_30,iVar1,ar6,ar7);
    uVar2 = (undefined4)uVar5;
    FUN_8c022d04(ar4 + 0x14,iVar1,ar6,ar7);
    ar6_00 = &DAT_8c125bf0;
    if (cVar7 == '\0') {
      uVar5 = CONCAT44(0x40400000,uVar2);
    }
    else {
      uVar5 = 0x41a0000040400000;
    }
    FUN_8c032518(ar4,ar5,&DAT_8c125bf0,in_stack_00000000);
    Vec3_assign(ar4 + 0x54,auStack_40,ar6_00,in_stack_00000000);
    Vec3_dtor(auStack_40,0xffffffff,ar6_00,in_stack_00000000);
    ar5_00 = auStack_30;
    Vec3_assign(ar4 + 0x14,ar5_00,ar6_00,in_stack_00000000);
    FUN_8c032ab0(ar4,ar5_00,ar6_00,in_stack_00000000);
    iVar1 = ar4 + 0x54;
    FUN_8c031bb4(ar4,ar5,iVar1,in_stack_00000000);
    *(undefined4 *)(ar4 + 0x40) = 5;
    if (cVar7 == '\0') {
      *(undefined4 *)(ar4 + 0x90) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x90) = uVar5 & 0xffffffff;
    }
    if (cVar7 == '\0') {
      *(undefined4 *)(ar4 + 0x98) = 0;
      uVar2 = (undefined4)uVar5;
      pcVar6 = (code *)0x3f333333;
      *(undefined4 *)(ar4 + 0x278) = 0x3f333333;
    }
    else {
      *(ulonglong *)(ar4 + 0x98) = uVar5 & 0xffffffff;
      uVar2 = 0x3f333333;
      pcVar6 = Vec3_sub;
      *(undefined8 *)(ar4 + 0x278) = 0x8c023ae03f333333;
    }
    uVar3 = ar5;
    Vec3_sub(ar4 + 0x54,ar5,iVar1,in_stack_00000000,auStack_50);
    Vec3_normalize(auStack_50,uVar3,iVar1,in_stack_00000000);
    Vec3_assign(auStack_20,auStack_60,iVar1,in_stack_00000000);
    Vec3_dtor(auStack_60,0xffffffff,iVar1,in_stack_00000000);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_50,0xffffffff,iVar1,in_stack_00000000);
    FUN_8c0230f0(ar4 + 0x14,uVar3,iVar1,in_stack_00000000,auStack_70);
    FUN_8c0230f0(auStack_20,uVar3,iVar1,in_stack_00000000,(int)&uStack_84 + 4);
    FUN_8c022dac(auStack_70,(int)&uStack_84 + 4,iVar1,in_stack_00000000);
    if (cVar7 == '\0') {
      uStack_84 = CONCAT44((*(uint*)((uchar*)&uStack_84+4)),pcVar6);
    }
    else {
      uStack_84 = CONCAT44(pcVar6,uVar2);
    }
    Vec3_dtor((int)&uStack_84 + 4,0xffffffff,iVar1,in_stack_00000000);
    Vec3_dtor(auStack_70,0xffffffff,iVar1,in_stack_00000000);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    if (*(int *)(ar4 + 0x128) == 0) {
      *(undefined4 *)(ar4 + 0x2b8) = 2;
    }
  }
  else {
    in_stack_00000000 = ar7;
    if (*(int *)(ar4 + 300) != 1) goto LAB_8c0556a8;
  }
  ar6 = ar4 + 0x54;
  iVar1 = pure_virtual_stub(ar4,ar5,ar6,in_stack_00000000);
  if (iVar1 == 0) {
    uVar4 = 0;
    *(undefined4 *)(ar4 + 300) = 0;
    *(undefined4 *)(ar4 + 700) = 0;
  }
LAB_8c0556a8:
  Vec3_dtor(auStack_30,0xffffffff,ar6,in_stack_00000000);
  Vec3_dtor(auStack_20,0xffffffff,ar6,in_stack_00000000);
  return uVar4;
}

__asm__(".globl _FUN_8c055490\n.set _FUN_8c055490, _FUN_8c055490_def\n");
//@unit 8c055750
#include "../decls.h"
undefined4 FUN_8c055750_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  int ar7_00;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0;
  ulonglong uVar6;
  double dVar7;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  int in_stack_00000000;
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
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  FUN_8c10277c(auStack_34,uVar2,ar6_00,ar7_00);
  uVar4 = (uint)in_dr0;
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    iVar1 = FUN_8c057164(ar4,ar5,ar6_00,ar7_00);
    if (iVar1 == 0) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = in_dr0 & 0xffffffff;
        uVar4 = 0x40a00000;
      }
      FUN_8c03263c(ar4,ar6,ar6_00,ar7_00);
      Vec3_add(auStack_44,ar5,ar6_00,ar7_00,auStack_54);
      Vec3_assign(ar4 + 0x54,auStack_54,ar6_00,ar7_00);
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
      if (cVar9 != '\0') {
        uVar4 = 0x40400000;
      }
      FUN_8c032788(ar4,ar4 + 0x54,ar7,in_stack_00000000);
      *(undefined4 *)(ar4 + 0x40) = 0;
      uVar2 = ar5;
      Vec3_sub(ar4 + 0x54,ar5,ar7,in_stack_00000000,auStack_64);
      Vec3_normalize(auStack_64,uVar2,ar7,in_stack_00000000);
      Vec3_assign(auStack_28,auStack_74,ar7,in_stack_00000000);
      Vec3_dtor(auStack_74,0xffffffff,ar7,in_stack_00000000);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_64,0xffffffff,ar7,in_stack_00000000);
      FUN_8c0230f0(ar4 + 0x14,uVar2,ar7,in_stack_00000000,auStack_84);
      FUN_8c0230f0(auStack_28,uVar2,ar7,in_stack_00000000,auStack_94);
      FUN_8c022dac(auStack_84,auStack_94,ar7,in_stack_00000000);
      Vec3_dtor(auStack_94,0xffffffff,ar7,in_stack_00000000);
      Vec3_dtor(auStack_84,0xffffffff,ar7,in_stack_00000000);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      ar6_00 = ar7;
      ar7_00 = in_stack_00000000;
    }
    else if (iVar1 != 2) {
      if (iVar1 == 3) {
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar7 = -8.394521626779552e-251;
        }
        if (cVar8 == '\0') {
          fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 * dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(ar4 + 0x28) = fVar5;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
        iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        if (iVar1 == 1) {
          *(undefined4 *)(ar4 + 700) = 0;
          uVar3 = 0;
          *(undefined4 *)(ar4 + 300) = 0;
        }
      }
      goto LAB_8c055a78;
    }
    uVar2 = ar5;
    Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7_00,auStack_a4);
    Vec3_normalize(auStack_a4,uVar2,ar6_00,ar7_00);
    Vec3_assign(auStack_28,auStack_b4,ar6_00,ar7_00);
    Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7_00);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7_00);
    FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7_00,auStack_c4);
    FUN_8c0230f0(auStack_28,uVar2,ar6_00,ar7_00,auStack_d4);
    FUN_8c022dac(auStack_c4,auStack_d4,ar6_00,ar7_00);
    Vec3_dtor(auStack_d4,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_c4,0xffffffff,ar6_00,ar7_00);
    uVar6 = (ulonglong)uVar4;
    if (cVar9 == '\0') {
      *(undefined4 *)(ar4 + 0x58) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x58) = uVar6;
    }
    ar6_00 = ar4 + 0x54;
    iVar1 = FUN_8c04c314(ar4,ar5,ar6_00,ar7_00);
    if (iVar1 == 0) {
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x278) = CONCAT44(0x3f800000,(int)uVar6);
      }
      ar7_00 = 0;
      ar6_00 = -1;
      uVar2 = 0x1a;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x218) = 0;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
  }
LAB_8c055a78:
  free_if_nonnull_wrap_102790(auStack_34,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c055750\n.set _FUN_8c055750, _FUN_8c055750_def\n");
//@unit 8c055b50
#include "../decls.h"
undefined4 FUN_8c055b50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c032160(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x2a4) = 0;
  *(undefined4 *)(ar4 + 0x298) = 0;
  FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x29c) = 0;
  *(undefined4 *)(ar4 + 0x2a0) = 0;
  *(undefined4 *)(ar4 + 0x294) = 0;
  *(undefined4 *)(ar4 + 0x28c) = 0;
  *(undefined4 *)(ar4 + 0x134) = 0;
  *(undefined4 *)(ar4 + 0x284) = 0;
  *(undefined4 *)(ar4 + 0x288) = 0;
  *(undefined4 *)(ar4 + 0x280) = 0;
  *(undefined4 *)(ar4 + 700) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x2c) = (ulonglong)extraout_fr1;
  }
  FUN_8c030eb8(ar4 + 0x1fc,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x324) == 1) {
    *(undefined4 *)(ar4 + 0x214) = 0;
    *(undefined4 *)(ar4 + 0x2e8) = 1;
  }
  *(undefined4 *)(ar4 + 0x334) = 0;
  return 0x334;
}

__asm__(".globl _FUN_8c055b50\n.set _FUN_8c055b50, _FUN_8c055b50_def\n");
//@unit 8c055c38
#include "../decls.h"
undefined4 FUN_8c055c38_def(int ar4,int ar5,float *ar6,undefined1 *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *ar5_00;
  undefined4 uVar4;
  undefined1 *ar5_01;
  undefined1 *ar7_00;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fVar7;
  uint uVar8;
  double dVar9;
  float fVar10;
  undefined4 in_fr3;
  double dVar11;
  undefined8 in_xd0;
  char cVar12;
  char cVar13;
  float *ain0;
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [12];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [12];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar6 = 1;
  ar7_00 = ar7;
  ar5_00 = ar6;
  Vec3_ctor_zero(auStack_2c,1,ar6,ar7);
  Vec3_ctor_zero(auStack_3c,Vec3_ctor_zero,ar6,ar7_00);
  ain0 = ar5_00;
  Vec3_ctor_copy(&fStack_4c,ar5_00,ar6,ar7_00);
  iVar1 = get_field_24_026024(*(undefined4 *)(ar4 + 0x244),ar5_00,ar6,ar7_00);
  if (iVar1 != 0) {
    *(undefined4 *)(ar4 + 0x2a4) = 0;
    *(undefined4 *)(ar4 + 0x2e8) = 2;
    *(undefined4 *)(ar4 + 0x214) = 1;
    Vec3_dtor(&fStack_4c,0xffffffff,ar6,ar7_00);
    Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7_00);
    return 0;
  }
  FUN_8c031748(ar4,FUN_8c031748,ar6,ar7_00);
  if (*(int *)(ar4 + 0x128) == 3) {
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(0x42e6c234,fStack_48);
    }
    else {
      in_xd0 = CONCAT44(uStack_44,fStack_48);
      dVar9 = 6.20177319754504e-312;
    }
    if (cVar12 == '\0') {
      fStack_48 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fStack_48 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(0x438a051f,fStack_4c);
    }
    else {
      fStack_48 = (float)in_xd0;
      uStack_44 = (undefined4)((ulonglong)in_xd0 >> 0x20);
      in_xd0 = CONCAT44(fStack_48,fStack_4c);
      dVar9 = -9.507220658418769e+240;
    }
    if (cVar12 == '\0') {
      fStack_4c = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fStack_4c = SUB84(dVar9 + dVar9,0);
    }
    if (cVar13 != '\0') {
      fStack_4c = (float)in_xd0;
      fStack_48 = (float)((ulonglong)in_xd0 >> 0x20);
    }
  }
  else {
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(0x42e6c234,fStack_48);
    }
    else {
      in_xd0 = CONCAT44(uStack_44,fStack_48);
      dVar9 = 6.20177319754504e-312;
    }
    if (cVar12 == '\0') {
      fStack_48 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fStack_48 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(0x43938ccd,fStack_4c);
    }
    else {
      fStack_48 = (float)in_xd0;
      uStack_44 = (undefined4)((ulonglong)in_xd0 >> 0x20);
      in_xd0 = CONCAT44(fStack_48,fStack_4c);
      dVar9 = 1.74908467537556e-311;
    }
    if (cVar12 == '\0') {
      fStack_4c = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fStack_4c = SUB84(dVar9 + dVar9,0);
    }
    if (cVar13 != '\0') {
      fStack_4c = (float)in_xd0;
      fStack_48 = (float)((ulonglong)in_xd0 >> 0x20);
    }
  }
  uVar4 = 1;
  *(undefined4 *)(ar4 + 0x338) = 1;
  iVar1 = *(int *)(ar4 + 0x2a4);
  if (iVar1 == 0) {
    if (ar7 == (undefined1 *)0x1) {
      *(undefined4 *)(ar4 + 0x214) = 1;
      uVar6 = 0;
      goto LAB_8c0563fa;
    }
    uVar4 = 0;
    iVar1 = rand_range(ar4,0,0x1e,ar7_00);
    *(int *)(ar4 + 0x2f8) = iVar1 + 0x14;
    ar7_00 = (undefined1 *)0x5;
    *(undefined4 *)(ar4 + 0x40) = 5;
    ar6 = (float *)0x2d4;
    vec3_clear(ar4 + 0x2d4,uVar4,0x2d4,5);
    vec3_clear(ar4 + 0x2a8,uVar4,ar6,ar7_00);
    vec3_clear(ar4 + 0x90,uVar4,ar6,ar7_00);
    vec3_clear(ar4 + 0x6c,uVar4,ar6,ar7_00);
    *(int *)(ar4 + 0x2a4) = *(int *)(ar4 + 0x2a4) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(undefined4 *)(ar4 + 0x334) = 1;
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(undefined4 *)(ar4 + 0x178) = 1;
      uVar4 = FUN_8c026db0(ar4,1,ar6,ar7_00);
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,uVar4,ar6,ar7_00);
      puVar3 = (undefined4 *)deref_u32(uVar2,uVar4,ar6,ar7_00);
      uVar2 = puVar3[1];
      *(undefined4 *)(ar4 + 0xb4) = *puVar3;
      *(undefined4 *)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
      if (*(int *)(ar4 + 0x128) == 3) {
        puVar5 = &DAT_8c135f7c;
        puVar3 = &DAT_8c135f94;
      }
      else {
        puVar5 = (undefined4 *)&DAT_8c13621c;
        puVar3 = (undefined4 *)&DAT_8c136234;
      }
      vec3_clear(auStack_3c,uVar4,ar6,ar7_00);
      *(undefined4 **)(ar4 + 0xb4) = puVar5;
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6,ar7_00,ain0);
      FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar6,ar7_00);
      Vec3_assign(auStack_2c,auStack_6c,ar6,ar7_00);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_6c,0xffffffff,ar6,ar7_00);
      uStack_38 = uStack_28;
      *(undefined4 **)(ar4 + 0xb4) = puVar3;
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6,ar7_00,ain0);
      FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar6,ar7_00);
      Vec3_assign(auStack_2c,auStack_7c,ar6,ar7_00);
      Vec3_dtor(auStack_7c,0xffffffff,ar6,ar7_00);
      uStack_34 = uStack_24;
      Vec3_sub(auStack_3c,ar4 + 0x2d4,ar6,ar7_00,auStack_8c);
      Vec3_assign(ar4 + 0x2a8,auStack_8c,ar6,ar7_00);
      Vec3_dtor(auStack_8c,0xffffffff,ar6,ar7_00);
      ar5_01 = auStack_3c;
      Vec3_assign(ar4 + 0x2d4,ar5_01,ar6,ar7_00);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(uStack_38,fStack_48);
      }
      else {
        in_xd0 = CONCAT44(uStack_44,fStack_48);
        dVar9 = (double)CONCAT44(uStack_34,uStack_38);
      }
      if (cVar12 == '\0') {
        fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 + dVar9,0);
      }
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),fVar7);
      }
      else {
        dVar9 = *(double *)(ar5 + 4);
      }
      if (cVar12 == '\0') {
        fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(0x3dcccccd,fVar7);
      }
      else {
        dVar9 = 4.50375370731149e-312;
      }
      if (cVar12 == '\0') {
        fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 * dVar9,0);
      }
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2ac),fVar7);
      }
      else {
        dVar9 = *(double *)(ar4 + 0x2ac);
      }
      if (cVar12 == '\0') {
        fVar7 = (float)((ulonglong)dVar9 >> 0x20);
        dVar9 = (double)CONCAT44(fVar7,SUB84(dVar9,0) + fVar7);
      }
      else {
        dVar9 = dVar9 + dVar9;
      }
      if (cVar13 == '\0') {
        *(int *)(ar4 + 0x2ac) = SUB84(dVar9,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x2ac) = in_xd0;
      }
      FUN_8c0230f0(ar4 + 0x14,ar5_01,ar6,ar7_00,auStack_9c);
      uVar2 = (undefined4)((ulonglong)dVar9 >> 0x20);
      Vec3_ctor_xyz(auStack_ac,ar5_01,ar6,ar7_00);
      FUN_8c022dac(auStack_9c,auStack_ac,ar6,ar7_00);
      Vec3_dtor(auStack_ac,0xffffffff,ar6,ar7_00);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_9c,0xffffffff,ar6,ar7_00);
      Vec3_ctor_xyz(auStack_bc,uVar4,ar6,ar7_00);
      iVar1 = FUN_8c023334(ar4 + 0x14,auStack_bc,ar6,ar7_00);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_bc,0xffffffff,ar6,ar7_00);
      if (iVar1 == 3) {
        Vec3_set_xyz(auStack_c8,uVar4,ar6,ar7_00);
        FUN_8c023484(ar4 + 0x2a8,auStack_c8,ar6,ar7_00,auStack_d8);
        Vec3_assign(ar4 + 0x2a8,auStack_d8,ar6,ar7_00);
        Vec3_dtor(auStack_d8,0xffffffff,ar6,ar7_00);
        uVar4 = 0xffffffff;
        object_dtor_delete(auStack_c8,0xffffffff,ar6,ar7_00);
      }
      else if (iVar1 == 4) {
        Vec3_set_xyz(auStack_e4,uVar4,ar6,ar7_00);
        FUN_8c023484(ar4 + 0x2a8,auStack_e4,ar6,ar7_00,auStack_f4);
        Vec3_assign(ar4 + 0x2a8,auStack_f4,ar6,ar7_00);
        Vec3_dtor(auStack_f4,0xffffffff,ar6,ar7_00);
        uVar4 = 0xffffffff;
        object_dtor_delete(auStack_e4,0xffffffff,ar6,ar7_00);
      }
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,ar6,ar7_00,ain0);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(0x43660000,uVar2);
      }
      else {
        dVar9 = 1.45200378977295e-311;
      }
      if (cVar12 == '\0' && (float)((ulonglong)dVar9 >> 0x20) < SUB84(dVar9,0)) {
        if (cVar13 == '\0') {
          dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2ac),in_fr3);
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),0x43340000);
        }
        else {
          dVar11 = *(double *)(ar4 + 0x2ac);
          dVar9 = *(double *)(ar5 + 4);
        }
        if (cVar12 == '\0') {
          fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar13 == '\0') {
          dVar9 = (double)CONCAT44(0x3e99999a,fVar7);
        }
        else {
          dVar9 = 1.57928376276162e-311;
        }
        if (cVar12 == '\0') {
          fVar10 = (float)((ulonglong)dVar9 >> 0x20);
          fVar7 = SUB84(dVar9,0) * fVar10;
          dVar9 = (double)CONCAT44(fVar10,fVar7);
          dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) + fVar7,SUB84(dVar11,0));
        }
        else {
          dVar9 = dVar9 * dVar9;
          dVar11 = dVar11 + dVar9;
        }
        if (cVar13 == '\0') {
          *(int *)(ar4 + 0x2ac) = (int)((ulonglong)dVar11 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x2ac) = dVar11;
        }
      }
      uVar8 = SUB84(dVar9,0);
      *(undefined4 *)(ar4 + 0x2e8) = 1;
      FUN_8c0230f0(ar4 + 0x14,auStack_104,ar6,ar7_00,auStack_104);
      Vec3_normalize(auStack_104,auStack_114,ar6,ar7_00);
      uVar4 = Vec3_assign(ar4 + 0x14,auStack_114,ar6,ar7_00);
      Vec3_assign(ar4 + 0x80,uVar4,ar6,ar7_00);
      Vec3_dtor(auStack_114,0xffffffff,ar6,ar7_00);
      Vec3_dtor(auStack_104,0xffffffff,ar6,ar7_00);
      ar6 = (float *)(ar4 + 0xb0);
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar6,s_CAnimBody_AdvanceFrame_033ba0,ar6,ar7_00);
      if (iVar1 == 1) {
        Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7_00);
        uVar2 = 0;
        uVar4 = 0xffffffff;
        uVar6 = 0x1a;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,uVar4,uVar2);
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar8;
        }
        FUN_8c031700(ar4,uVar6,uVar4,uVar2);
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(undefined4 *)(ar4 + 0x2e8) = 2;
        FUN_8c030eb8(ar4 + 0x1fc,uVar6,uVar4,uVar2);
        *(undefined4 *)(ar4 + 0x334) = 0;
        *(undefined4 *)(ar4 + 0x214) = 1;
        ar7_00 = (undefined1 *)0x0;
        uVar6 = 0;
        ar6 = (float *)0x2a4;
        *(undefined4 *)(ar4 + 0x2a4) = 0;
      }
    }
    goto LAB_8c0563fa;
  }
  *(undefined4 *)(ar4 + 0x334) = 1;
  Vec3_ctor_xyz(auStack_5c,uVar4,ar6,ar7_00);
  ar7_00 = auStack_5c;
  ar6 = &fStack_4c;
  iVar1 = FUN_8c04e2d0(ar4,ar5,ar6,ar7_00);
  Vec3_dtor(auStack_5c,0xffffffff,ar6,ar7_00);
  uVar4 = 0;
  if (iVar1 == 0) {
    ar7_00 = (undefined1 *)0x0;
    ar6 = (float *)0xffffffff;
    uVar4 = 0x48;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x48,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6,ar7_00);
    *(int *)(ar4 + 0x2a4) = *(int *)(ar4 + 0x2a4) + 1;
    *(undefined4 *)(ar4 + 0x2e8) = 1;
  }
  if (*(int *)(ar4 + 0x298) == 1) {
    FUN_8c030f2c(ar4 + 0x1fc,uVar4,ar6,ar7_00);
  }
LAB_8c0563fa:
  Vec3_dtor(&fStack_4c,0xffffffff,ar6,ar7_00);
  Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7_00);
  Vec3_dtor(auStack_2c,0xffffffff,Vec3_dtor,auStack_2c);
  return uVar6;
}

__asm__(".globl _FUN_8c055c38\n.set _FUN_8c055c38, _FUN_8c055c38_def\n");
//@unit 8c0564c4
#include "../decls.h"
undefined4 FUN_8c0564c4_def(int ar4,undefined4 ar5,int ar6,undefined1 *ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined *ar5_00;
  code *ar5_01;
  undefined4 uVar4;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 unaff_r13;
  undefined4 uVar7;
  undefined4 unaff_r14;
  undefined8 *puVar8;
  float fVar9;
  undefined8 in_dr0;
  float fVar12;
  double dVar10;
  undefined8 uVar11;
  ulonglong in_dr14;
  double dVar13;
  undefined8 in_xd0;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar8 = &uStack_8;
                    
    (*(uint*)((uchar*)&uStack_8+0)) = (int)(in_dr14 >> 0x20);
  }
  else {
    puVar8 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar8 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar8 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar8 + -0xc) = 1;
  *(undefined4 *)((int)puVar8 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar8 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar8 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar8 + -0x1c) = in_PR;
  uVar7 = 1;
  uVar3 = ar5;
  Vec3_ctor_zero((undefined1 *)((int)puVar8 + -0x2c),ar5,ar6,ar7);
  Vec3_ctor_zero((undefined1 *)((int)puVar8 + -0x3c),uVar3,ar6,ar7);
  Vec3_ctor_zero((undefined1 *)((int)puVar8 + -0x4c),uVar3,ar6,ar7);
  *(undefined4 *)((int)puVar8 + -0x1a8) = 0;
  Vec3_ctor_xyz((undefined1 *)((int)puVar8 + -0x7c),uVar3,ar6,ar7);
  Vec3_ctor_copy((undefined1 *)((int)puVar8 + -0x5c),(undefined1 *)((int)puVar8 + -0x7c),ar6,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor((undefined1 *)((int)puVar8 + -0x7c),0xffffffff,ar6,ar7);
  Vec3_ctor_zero((undefined1 *)((int)puVar8 + -0x6c),uVar3,ar6,ar7);
  uVar3 = get_field_24_026024(*(undefined4 *)(ar4 + 0x244),uVar3,ar6,ar7);
  *(undefined4 *)((int)puVar8 + -0x1c0) = uVar3;
  if (*(int *)((int)puVar8 + -0x1c0) == 0) {
    iVar1 = *(int *)(ar4 + 0x2a4);
    if ((iVar1 < 5) && (-1 < iVar1)) {
      ar5_00 = (&switchdata_8c05663a_8c056644)[iVar1];
                    
      switch(iVar1) {
      case 0:
        ar6 = 0x14;
        uVar3 = rand_range(ar4,0,0x14,ar7);
        *(undefined4 *)((int)puVar8 + -0x1c4) = uVar3;
        *(int *)(ar4 + 0x2f8) = *(int *)((int)puVar8 + -0x1c4) + 5;
        *(int *)((int)puVar8 + -0x1fc) = ar4;
        *(int *)(*(int *)((int)puVar8 + -0x1fc) + 0x2a4) =
             *(int *)(*(int *)((int)puVar8 + -0x1fc) + 0x2a4) + 1;
      case 1:
        uVar3 = FUN_8c057164(ar4,ar5,ar6,ar7);
        *(undefined4 *)((int)puVar8 + -0x1c8) = uVar3;
        iVar1 = *(int *)((int)puVar8 + -0x1c8);
        if (iVar1 == 0) {
          *(undefined4 *)(ar4 + 700) = 1;
          FUN_8c022d04(ar4 + 0x54,0,ar6,ar7);
          FUN_8c022d04(ar4 + 0x2d4,iVar1,ar6,ar7);
          FUN_8c022d04(ar4 + 0x2a8,iVar1,ar6,ar7);
          *(int *)((int)puVar8 + -0x200) = ar4;
          *(int *)(*(int *)((int)puVar8 + -0x200) + 0x2a4) =
               *(int *)(*(int *)((int)puVar8 + -0x200) + 0x2a4) + 1;
          *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x8c);
          puVar2 = (undefined1 *)((int)puVar8 + -0x5c);
          Vec3_sub(ar5,puVar2,ar6,ar7,*(undefined4 *)((int)puVar8 + -0x214));
          *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x9c);
          Vec3_normalize((undefined1 *)((int)puVar8 + -0x8c),puVar2,ar6,ar7);
          Vec3_assign(ar4 + 0x54,(undefined1 *)((int)puVar8 + -0x9c),ar6,ar7);
          Vec3_dtor((undefined1 *)((int)puVar8 + -0x9c),0xffffffff,ar6,ar7);
          Vec3_dtor((undefined1 *)((int)puVar8 + -0x8c),0xffffffff,ar6,ar7);
          FUN_8c022fc0(ar4 + 0x34c,(undefined1 *)((int)puVar8 + -0x5c),ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar8 + -0x1cc) = (int)((ulonglong)in_dr0 >> 0x20);
            *(undefined4 *)((int)puVar8 + -0x1b4) = *(undefined4 *)((int)puVar8 + -0x1cc);
          }
          else {
            *(undefined8 *)((int)puVar8 + -0x1cc) = in_dr0;
            *(undefined8 *)((int)puVar8 + -0x1b4) = *(undefined8 *)((int)puVar8 + -0x1cc);
          }
          *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0xac);
          Vec3_scale(ar4 + 0x54,(undefined1 *)((int)puVar8 + -0x1b4),ar6,ar7,
                     *(undefined4 *)((int)puVar8 + -0x214));
          *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0xbc);
          Vec3_add((undefined1 *)((int)puVar8 + -0xac),(undefined1 *)((int)puVar8 + -0x5c),ar6,ar7,
                   *(undefined4 *)((int)puVar8 + -0x214));
          Vec3_assign(ar4 + 0x268,(undefined1 *)((int)puVar8 + -0xbc),ar6,ar7);
          Vec3_dtor((undefined1 *)((int)puVar8 + -0xbc),0xffffffff,ar6,ar7);
          Vec3_dtor((undefined1 *)((int)puVar8 + -0xac),0xffffffff,ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x26c) = 0x43340000;
            fVar9 = *(float *)(ar4 + 0x270);
            fVar12 = 1200.0;
          }
          else {
            *(undefined8 *)(ar4 + 0x26c) = 0x27043340000;
            fVar9 = 1200.0;
            fVar12 = 4.54021e-43;
          }
          if (in_FPSCR_PR == '\0' && fVar12 < fVar9) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(ar4 + 0x270) = 0x44960000;
            }
            else {
              *(undefined8 *)(ar4 + 0x270) = 0x14444960000;
            }
            *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0xcc);
            puVar2 = (undefined1 *)((int)puVar8 + -0x5c);
            Vec3_sub(ar4 + 0x268,puVar2,ar6,ar7,*(undefined4 *)((int)puVar8 + -0x214));
            *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0xdc);
            Vec3_normalize((undefined1 *)((int)puVar8 + -0xcc),puVar2,ar6,ar7);
            Vec3_assign(ar4 + 0x54,(undefined1 *)((int)puVar8 + -0xdc),ar6,ar7);
            Vec3_dtor((undefined1 *)((int)puVar8 + -0xdc),0xffffffff,ar6,ar7);
            Vec3_dtor((undefined1 *)((int)puVar8 + -0xcc),0xffffffff,ar6,ar7);
          }
          FUN_8c023bf4(ar4 + 0x54,&DAT_8c1365e0,ar6,ar7);
          ar7 = (undefined1 *)0x0;
          ar6 = -1;
          uVar3 = 0x1a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
        }
        break;
      case 2:
        *(int *)((int)puVar8 + -0x204) = ar4;
        *(int *)(*(int *)((int)puVar8 + -0x204) + 0x2a4) =
             *(int *)(*(int *)((int)puVar8 + -0x204) + 0x2a4) + 1;
      case 3:
        Vec3_ctor_copy((undefined1 *)((int)puVar8 + -0xec),ar4 + 0x54,ar6,Vec3_ctor_copy);
        ar7 = (undefined1 *)((int)puVar8 + -0xec);
        ar6 = ar4 + 0x268;
        uVar3 = FUN_8c04e0e0(ar4,ar5,ar6,ar7);
        *(undefined4 *)((int)puVar8 + -0x1d0) = uVar3;
        *(uint *)((int)puVar8 + -0x1b8) = (uint)(*(int *)((int)puVar8 + -0x1d0) == 0);
        Vec3_dtor((undefined1 *)((int)puVar8 + -0xec),0xffffffff,ar6,ar7);
        if (*(int *)((int)puVar8 + -0x1b8) != 0) {
          ar7 = (undefined1 *)0x0;
          ar6 = -1;
          uVar3 = 0x4a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x4a,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
          *(int *)((int)puVar8 + -0x208) = ar4;
          iVar1 = *(int *)((int)puVar8 + -0x208);
          *(int *)(*(int *)((int)puVar8 + -0x208) + 0x2a4) = *(int *)(iVar1 + 0x2a4) + 1;
          FUN_8c022d04(ar4 + 0x2d4,iVar1,ar6,ar7);
          ar5_01 = FUN_8c022d04;
          FUN_8c022d04(ar4 + 0x2a8,FUN_8c022d04,ar6,ar7);
          *(undefined4 *)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(ar4 + 0x2e8) = 1;
          FUN_8c030f2c(ar4 + 0x1fc,ar5_01,ar6,ar7);
          uVar3 = FUN_8c026db0(ar4,ar5_01,ar6,ar7);
          *(undefined4 *)((int)puVar8 + -0x1d4) = uVar3;
          uVar4 = *(undefined4 *)((int)puVar8 + -0x1d4);
          uVar3 = FUN_8c03c0f0(ar4 + 0xb0,uVar4,ar6,ar7);
          *(undefined4 *)((int)puVar8 + -0x1d8) = uVar3;
          uVar3 = deref_u32(*(undefined4 *)((int)puVar8 + -0x1d8),uVar4,ar6,ar7);
          *(undefined4 *)((int)puVar8 + -0x1dc) = uVar3;
          puVar5 = *(undefined4 **)((int)puVar8 + -0x1dc);
          uVar3 = puVar5[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar5;
          *(undefined4 *)(ar4 + 0xb8) = uVar3;
          *(undefined4 *)(ar4 + 0xbc) = puVar5[2];
        }
        break;
      case 4:
        *(undefined4 *)(ar4 + 0x334) = 1;
        *(undefined4 *)(ar4 + 0x214) = 0;
        *(undefined4 *)(ar4 + 0x178) = 1;
        FUN_8c031748(ar4,ar5_00,ar6,ar7);
        FUN_8c022d04(ar4 + 0x90,ar5_00,ar6,ar7);
        Vec3_assign((undefined1 *)((int)puVar8 + -0x6c),ar5,ar6,ar7);
        if (*(int *)(ar4 + 0x128) == 3) {
          puVar6 = &DAT_8c135f64;
          puVar5 = &DAT_8c135f64;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(0xc1100000,(int)in_dr14);
            dVar10 = (double)CONCAT44(0x43fa0000,*(undefined4 *)((int)puVar8 + -0x6c));
          }
          else {
            dVar13 = 2.9975972386932e+19;
            in_xd0 = *(undefined8 *)((int)puVar8 + -0x6c);
            dVar10 = 1.50293648086087e-311;
          }
          if (in_FPSCR_PR == '\0') {
            fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar9 = SUB84(dVar10 + dVar10,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar8 + -0x6c) = fVar9;
          }
          else {
            *(undefined8 *)((int)puVar8 + -0x6c) = in_xd0;
          }
          uVar11 = CONCAT44(0x3f800000,fVar9);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c4) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x2c4) = uVar11;
          }
        }
        else {
          puVar6 = (undefined4 *)&DAT_8c136204;
          puVar5 = (undefined4 *)&DAT_8c136204;
          dVar13 = (double)(in_dr14 & 0xffffffff);
          if (in_FPSCR_SZ == '\0') {
            dVar10 = (double)CONCAT44(0x43fa0000,*(undefined4 *)((int)puVar8 + -0x6c));
          }
          else {
            in_xd0 = *(undefined8 *)((int)puVar8 + -0x6c);
            dVar10 = 1.50293648086087e-311;
          }
          if (in_FPSCR_PR == '\0') {
            fVar9 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar9 = SUB84(dVar10 + dVar10,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)puVar8 + -0x6c) = fVar9;
          }
          else {
            *(undefined8 *)((int)puVar8 + -0x6c) = in_xd0;
          }
          uVar11 = CONCAT44(0x3f800000,fVar9);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(ar4 + 0x2c4) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x2c4) = uVar11;
          }
        }
        FUN_8c022d04((undefined1 *)((int)puVar8 + -0x4c),ar5,ar6,ar7);
        *(undefined4 **)(ar4 + 0xb4) = puVar6;
        CAnimBody_GetCurFrame
                  (ar4 + 0xb0,CAnimBody_GetCurFrame,ar6,ar7,*(undefined4 *)((int)puVar8 + -0x210));
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + -0x1e0) = (int)((ulonglong)uVar11 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar8 + -0x1e0) = uVar11;
        }
        *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0xfc);
        FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar6,ar7);
        uVar4 = (undefined4)uVar11;
        Vec3_assign((undefined1 *)((int)puVar8 + -0x2c),(undefined1 *)((int)puVar8 + -0xfc),ar6,ar7)
        ;
        uVar3 = 0xffffffff;
        Vec3_dtor((undefined1 *)((int)puVar8 + -0xfc),0xffffffff,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          uVar11 = CONCAT44(*(undefined4 *)((int)puVar8 + -0x28),uVar4);
          *(undefined4 *)((int)puVar8 + -0x48) = *(undefined4 *)((int)puVar8 + -0x28);
        }
        else {
          uVar11 = *(undefined8 *)((int)puVar8 + -0x28);
          *(undefined8 *)((int)puVar8 + -0x48) = uVar11;
        }
        *(undefined4 **)(ar4 + 0xb4) = puVar5;
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,*(undefined4 *)((int)puVar8 + -0x210));
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + -0x1e4) = (int)((ulonglong)uVar11 >> 0x20);
        }
        else {
          *(undefined8 *)((int)puVar8 + -0x1e4) = uVar11;
        }
        *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x10c);
        FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar6,ar7);
        uVar3 = (undefined4)uVar11;
        Vec3_assign((undefined1 *)((int)puVar8 + -0x2c),(undefined1 *)((int)puVar8 + -0x10c),ar6,ar7
                   );
        Vec3_dtor((undefined1 *)((int)puVar8 + -0x10c),0xffffffff,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          dVar10 = (double)CONCAT44(*(undefined4 *)((int)puVar8 + -0x24),uVar3);
        }
        else {
          dVar10 = *(double *)((int)puVar8 + -0x24);
        }
        if (in_FPSCR_PR == '\0') {
          dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) -
                                    (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar10,0));
        }
        else {
          dVar10 = dVar10 - dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + -0x44) = (int)((ulonglong)dVar10 >> 0x20);
        }
        else {
          *(double *)((int)puVar8 + -0x44) = dVar10;
        }
        *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x11c);
        Vec3_sub((undefined1 *)((int)puVar8 + -0x4c),ar4 + 0x2d4,ar6,ar7,
                 *(undefined4 *)((int)puVar8 + -0x214));
        uVar3 = SUB84(dVar10,0);
        Vec3_assign(ar4 + 0x2a8,(undefined1 *)((int)puVar8 + -0x11c),ar6,ar7);
        Vec3_dtor((undefined1 *)((int)puVar8 + -0x11c),0xffffffff,ar6,ar7);
        ar6 = ar4 + 0x2d4;
        Vec3_assign(ar6,(undefined1 *)((int)puVar8 + -0x4c),ar6,ar7);
        *(int *)((int)puVar8 + -0x20c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          uVar3 = *(undefined4 *)(*(int *)((int)puVar8 + -0x20c) + 0x2b0);
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)puVar8 + -0x20c) + 0x2b0);
        }
        uVar4 = 0x2c4;
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c4),uVar3);
        }
        else {
          dVar13 = *(double *)(ar4 + 0x2c4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = (float)((ulonglong)dVar13 >> 0x20);
          dVar13 = (double)CONCAT44(fVar9,SUB84(dVar13,0) * fVar9);
        }
        else {
          dVar13 = dVar13 * dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)((int)puVar8 + -0x20c) + 0x2b0) = SUB84(dVar13,0);
        }
        else {
          *(undefined8 *)(*(int *)((int)puVar8 + -0x20c) + 0x2b0) = in_xd0;
        }
        *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -300);
        FUN_8c0230f0(ar4 + 0x14,0x2c4,ar6,ar7,*(undefined4 *)((int)puVar8 + -0x214));
        Vec3_ctor_xyz((undefined1 *)((int)puVar8 + -0x13c),uVar4,ar6,ar7);
        FUN_8c022dac((undefined1 *)((int)puVar8 + -300),(undefined1 *)((int)puVar8 + -0x13c),ar6,ar7
                    );
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)puVar8 + -0x1e8) = (int)((ulonglong)dVar13 >> 0x20);
        }
        else {
          *(double *)((int)puVar8 + -0x1e8) = dVar13;
        }
        Vec3_dtor((undefined1 *)((int)puVar8 + -0x13c),0xffffffff,ar6,ar7);
        uVar3 = 0xffffffff;
        Vec3_dtor((undefined1 *)((int)puVar8 + -300),0xffffffff,ar6,ar7);
        Vec3_ctor_xyz((undefined1 *)((int)puVar8 + -0x14c),uVar3,ar6,ar7);
        uVar3 = FUN_8c023334(ar4 + 0x14,(undefined1 *)((int)puVar8 + -0x14c),ar6,ar7);
        *(undefined4 *)((int)puVar8 + -0x1ec) = uVar3;
        *(undefined4 *)((int)puVar8 + -0x1bc) = *(undefined4 *)((int)puVar8 + -0x1ec);
        uVar3 = 0xffffffff;
        Vec3_dtor((undefined1 *)((int)puVar8 + -0x14c),0xffffffff,ar6,ar7);
        if (*(int *)((int)puVar8 + -0x1bc) == 3) {
          Vec3_set_xyz((undefined1 *)((int)puVar8 + -0x158),uVar3,ar6,ar7);
          *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x168);
          FUN_8c023484(ar4 + 0x2a8,(undefined1 *)((int)puVar8 + -0x158),ar6,ar7,
                       *(undefined4 *)((int)puVar8 + -0x214));
          Vec3_assign(ar4 + 0x2a8,(undefined1 *)((int)puVar8 + -0x168),ar6,ar7);
          Vec3_dtor((undefined1 *)((int)puVar8 + -0x168),0xffffffff,ar6,ar7);
          uVar3 = 0xffffffff;
          object_dtor_delete((undefined1 *)((int)puVar8 + -0x158),0xffffffff,ar6,ar7);
        }
        else if (*(int *)((int)puVar8 + -0x1bc) == 4) {
          Vec3_set_xyz((undefined1 *)((int)puVar8 + -0x174),(undefined1 *)((int)puVar8 + -0x174),ar6
                       ,ar7);
          *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x184);
          FUN_8c023484(ar4 + 0x2a8,(undefined1 *)((int)puVar8 + -0x174),ar6,ar7,
                       *(undefined4 *)((int)puVar8 + -0x214));
          Vec3_assign(ar4 + 0x2a8,(undefined1 *)((int)puVar8 + -0x184),ar6,ar7);
          Vec3_dtor((undefined1 *)((int)puVar8 + -0x184),0xffffffff,ar6,ar7);
          uVar3 = 0xffffffff;
          object_dtor_delete((undefined1 *)((int)puVar8 + -0x174),0xffffffff,ar6,ar7);
        }
        *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x194);
        FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,ar7,*(undefined4 *)((int)puVar8 + -0x214));
        *(undefined1 **)((int)puVar8 + -0x214) = (undefined1 *)((int)puVar8 + -0x1a4);
        Vec3_normalize((undefined1 *)((int)puVar8 + -0x194),uVar3,ar6,ar7);
        uVar3 = Vec3_assign(ar4 + 0x14,(undefined1 *)((int)puVar8 + -0x1a4),ar6,ar7);
        *(undefined4 *)((int)puVar8 + -0x1f0) = uVar3;
        Vec3_assign(ar4 + 0x80,*(undefined4 *)((int)puVar8 + -0x1f0),ar6,ar7);
        Vec3_dtor((undefined1 *)((int)puVar8 + -0x1a4),0xffffffff,ar6,ar7);
        Vec3_dtor((undefined1 *)((int)puVar8 + -0x194),0xffffffff,ar6,ar7);
        *(undefined4 *)(ar4 + 0x2e8) = 1;
        uVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7);
        *(undefined4 *)((int)puVar8 + -500) = uVar3;
        ar7 = *(undefined1 **)((int)puVar8 + -500);
        if (ar7 == (undefined1 *)0x1) {
          *(undefined4 *)(ar4 + 0x40) = 5;
          *(undefined4 *)((int)puVar8 + -0x210) = *(undefined4 *)(ar4 + 0x128);
          FUN_8c031b68(ar4,(*(int *)((int)puVar8 + -0x210) * 2 + *(int *)((int)puVar8 + -0x210)) * 8
                           + -0x73d7fc0c,0x40,1);
          *(undefined4 *)(ar4 + 700) = 0;
          *(undefined4 *)(ar4 + 0x2e8) = 0;
          uVar4 = 0;
          uVar7 = 0xffffffff;
          uVar3 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar7,uVar4);
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(ar4 + 0x2a4) = 0;
          ar7 = (undefined1 *)0x40;
          ar6 = 5;
          *(undefined4 *)(ar4 + 0x40) = 5;
          uVar3 = 0x2a8;
          Vec3_length_sq(ar4 + 0x2a8,0x2a8,5,0x40);
          if (in_FPSCR_SZ == '\0') {
            *(int *)((int)puVar8 + -0x1f8) = (int)((ulonglong)dVar13 >> 0x20);
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)((int)puVar8 + -0x1f8);
          }
          else {
            *(double *)((int)puVar8 + -0x1f8) = dVar13;
            *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)((int)puVar8 + -0x1f8);
          }
          FUN_8c030eb8(ar4 + 0x1fc,uVar3,ar6,ar7);
          *(undefined4 *)(ar4 + 0x334) = 1;
          *(undefined4 *)(ar4 + 0x214) = 0;
          *(undefined4 *)(ar4 + 0x178) = 1;
          uVar7 = 0;
        }
      }
    }
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
    *(undefined4 *)((int)puVar8 + -0x1b0) = uVar7;
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x6c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x5c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x4c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x3c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x2c),0xffffffff,ar6,ar7);
    uVar3 = *(undefined4 *)((int)puVar8 + -0x1b0);
  }
  else {
    *(undefined4 *)(ar4 + 0x2a4) = 0;
    *(undefined4 *)(ar4 + 0x2e8) = 2;
    *(undefined4 *)(ar4 + 0x214) = 1;
    *(undefined4 *)((int)puVar8 + -0x1ac) = 0;
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x6c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x5c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x4c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x3c),0xffffffff,ar6,ar7);
    Vec3_dtor((undefined1 *)((int)puVar8 + -0x2c),0xffffffff,ar6,ar7);
    uVar3 = *(undefined4 *)((int)puVar8 + -0x1ac);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0564c4\n.set _FUN_8c0564c4, _FUN_8c0564c4_def\n");
//@unit 8c0570cc
#include "../decls.h"
uint FUN_8c0570cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(0x2a0 + ar4) == 0) {
    *(int *)(0x2a0 + ar4) = *(int *)(0x2a0 + ar4) + 1;
    ar7 = 0;
    ar6 = 0xffffffff;
    (*(code *)(&s_CAnimBody_SetAnimation_033a94))
              (ar4 + 0xb0,ar5,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
  }
  else if (*(int *)(0x2a0 + ar4) != 1) {
    return 1;
  }
  iVar1 = (*(code *)(&s_CAnimBody_AdvanceFrame_033ba0))
                    (ar4 + 0xb0,ar5,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(0x2a0 + ar4) = 0;
  }
  return (uint)(iVar1 != 1);
}

__asm__(".globl _FUN_8c0570cc\n.set _FUN_8c0570cc, _FUN_8c0570cc_def\n");
//@unit 8c057164
#include "../decls.h"
undefined4 FUN_8c057164_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong in_dr0;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  undefined4 in_stack_ffffffe0;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar3 = 1;
  *(undefined4 *)(ar4 + 700) = 0;
  *(undefined4 *)(ar4 + 0x40) = 3;
  if ((*(int *)(ar4 + 0x128) == 4) && (*(int *)(ar4 + 0x2b8) == 3)) {
    uVar2 = ar5;
    iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 0x22) {
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7,in_stack_ffffffe0);
      if (cVar6 == '\0') {
        in_dr0 = CONCAT44(0x436b0000,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = 0x8c033e68436b0000;
      }
      if (cVar5 == '\0' && (float)in_dr0 < (float)(in_dr0 >> 0x20)) {
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7,in_stack_ffffffe0);
        uVar4 = in_dr0;
        if (cVar6 == '\0') {
          uVar4 = in_dr0 >> 0x20;
        }
        in_dr0 = uVar4 & 0xffffffff;
        if ((float)uVar4 != 0.0) {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7);
        }
      }
    }
    else {
      iVar1 = get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6,ar7);
      if (iVar1 == 0x20) {
        *(undefined4 *)(ar4 + 0x218) = 5;
      }
    }
  }
  if (cVar6 == '\0') {
    uVar2 = (undefined4)in_dr0;
    *(undefined4 *)(ar4 + 0x278) = 0x3fe66666;
  }
  else {
    uVar2 = 0x3fe66666;
    *(undefined8 *)(ar4 + 0x278) = 0x8c04c3143fe66666;
  }
  if (*(int *)(ar4 + 0x2b8) == 2) {
    if (cVar6 == '\0') {
      *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar2);
    }
    uVar3 = 0;
  }
  else {
    FUN_8c04c314(ar4,ar5,ar5,ar7);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c057164\n.set _FUN_8c057164, _FUN_8c057164_def\n");
//@unit 8c057280
#include "../decls.h"
undefined4 FUN_8c057280_def(undefined **ar4,undefined **ar5,undefined **ar6,code *ar7)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint in_fr1;
  char cVar8;
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [16];
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [20];
  
  cVar8 = '\0';
  uVar7 = 1;
  ppuVar5 = ar5;
  ppuVar4 = ar6;
  do {
    puVar2 = ar4[0x4b];
    if ((0xc < (int)puVar2) || ((int)puVar2 < 0)) goto switchD_8c0572ba_caseD_5;
    ppuVar4 = &switchdata_8c0572ba_8c0572c4;
                    
    switch((uint)puVar2) {
    case 0x0:
      ar4[0xb] = (undefined *)0x0;
      if (ar6 == (undefined **)0x1) {
        ar4[0x4b] = ar4[0x4b] + 1;
        ppuVar5 = ar4;
        ppuVar4 = &switchdata_8c0572ba_8c0572c4;
      }
      else {
        ar4[0x4b] = (undefined *)0xa;
      }
      break;
    case 0x1:
      ar4[0xae] = (undefined *)0x2;
      vec3_clear(ar4 + 0xaa,vec3_clear,&switchdata_8c0572ba_8c0572c4,ar7);
      pcVar6 = vec3_clear;
      vec3_clear(ar4 + 0xb5,vec3_clear,ppuVar4,ar7);
      FUN_8c02a1fc(ar4 + 0xb2,pcVar6,ppuVar4,ar7);
      if (cVar8 == '\0') {
        ar4[10] = (undefined *)0x0;
      }
      else {
        *(ulonglong *)(ar4 + 10) = (ulonglong)in_fr1;
      }
      ar4[0x4b] = ar4[0x4b] + 1;
      goto switchD_8c0572ba_caseD_5;
    case 0x2:
      ar7 = (code *)(uint)ar4[0x91];
      uVar3 = 0x1e;
      FUN_8c033474(ar4,0x1e,ar5,ar7);
      Vec3_ctor_xyz(auStack_24,uVar3,ar5,ar7);
      iVar1 = FUN_8c023334(ar4 + 5,auStack_24,ar5,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_24,0xffffffff,ar5,ar7);
      if (iVar1 == 3) {
        Vec3_set_xyz(auStack_30,uVar3,ar5,ar7);
        FUN_8c023484(ar4 + 5,auStack_30,ar5,ar7,auStack_40);
        Vec3_assign(ar4 + 5,auStack_40,ar5,ar7);
        Vec3_dtor(auStack_40,0xffffffff,ar5,ar7);
        object_dtor_delete(auStack_30,0xffffffff,ar5,ar7);
        ar7 = (code *)0x0;
        ar5 = (undefined **)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x2f,0xffffffff,0);
      }
      else if (iVar1 == 4) {
        Vec3_set_xyz(auStack_4c,uVar3,ar5,ar7);
        FUN_8c023484(ar4 + 5,auStack_4c,ar5,ar7,auStack_5c);
        Vec3_assign(ar4 + 5,auStack_5c,ar5,ar7);
        Vec3_dtor(auStack_5c,0xffffffff,ar5,ar7);
        object_dtor_delete(auStack_4c,0xffffffff,ar5,ar7);
        ar7 = (code *)0x0;
        ar5 = (undefined **)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0x26,0xffffffff,0);
      }
      ar4[0xae] = (undefined *)0x3;
      ppuVar5 = ar4 + 5;
      Vec3_assign(ar4 + 0x20,ppuVar5,ar5,ar7);
      if (ar4[0x4a] == (undefined *)0x3) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar5,ar5,ar7);
      }
      else {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar5,ar5,ar7);
      }
      ar4[0x4b] = ar4[0x4b] + 1;
      ppuVar4 = ar5;
    case 0x3:
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,ppuVar5,ppuVar4,ar7);
      if (iVar1 == 1) {
        ppuVar4 = (undefined **)0x64;
        iVar1 = rand_range(ar4,0,100,ar7);
        if (iVar1 < 0x32) {
          ar4[0x4b] = (undefined *)0x0;
          ar4[0xae] = (undefined *)0x2;
          uVar7 = 0;
        }
        else {
          ar7 = (code *)0x0;
          ppuVar4 = (undefined **)0xffffffff;
          uVar3 = 3;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,3,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,uVar3,ppuVar4,ar7);
          ar4[0xae] = (undefined *)0x3;
          ar4[0x4b] = ar4[0x4b] + 1;
        }
      }
      goto switchD_8c0572ba_caseD_5;
    case 0x4:
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0
                        (ar4 + 0x2c,ppuVar5,&switchdata_8c0572ba_8c0572c4,ar7);
      if (iVar1 == 1) {
        ar4[0x4b] = (undefined *)0x0;
        ar4[0xae] = (undefined *)0x2;
        uVar7 = 0;
      }
    default:
      goto switchD_8c0572ba_caseD_5;
    case 0xa:
      Vec3_scale(ar4 + 5,&DAT_8c1365e4,&switchdata_8c0572ba_8c0572c4,ar7,auStack_6c);
      Vec3_add(ar5,auStack_6c,ppuVar4,ar7,auStack_7c);
      ppuVar5 = ar5;
      FUN_8c031c74(ar4,auStack_7c,ar5,ar7);
      Vec3_dtor(auStack_7c,0xffffffff,ppuVar5,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_6c,0xffffffff,ppuVar5,ar7);
      FUN_8c05ae54(ar4,uVar3,ppuVar5,ar7);
      FUN_8c031748(ar4,uVar3,ppuVar5,ar7);
      ar7 = (code *)(uint)ar4[0x91];
      uVar3 = 0x1e;
      ppuVar5 = ar5;
      FUN_8c033474(ar4,0x1e,ar5,ar7);
      FUN_8c032ab0(ar4,uVar3,ppuVar5,ar7);
      Vec3_ctor_xyz(auStack_8c,uVar3,ppuVar5,ar7);
      iVar1 = FUN_8c023334(ar4 + 5,auStack_8c,ppuVar5,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_8c,0xffffffff,ppuVar5,ar7);
      if (iVar1 == 3) {
        Vec3_set_xyz(auStack_98,uVar3,ppuVar5,ar7);
        FUN_8c023484(ar4 + 5,auStack_98,ppuVar5,ar7,auStack_a8);
        Vec3_assign(ar4 + 5,auStack_a8,ppuVar5,ar7);
        Vec3_dtor(auStack_a8,0xffffffff,ppuVar5,ar7);
        object_dtor_delete(auStack_98,0xffffffff,ppuVar5,ar7);
        ppuVar5 = ar4 + 0x9e;
        if (cVar8 == '\0') {
          *ppuVar5 = (undefined *)0x3f333333;
        }
        else {
          ppuVar5[0] = (undefined *)0x3f333333;
          ppuVar5[1] = (undefined *)0xbf800000;
        }
        ar7 = (code *)0x0;
        ppuVar5 = (undefined **)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0xc,0xffffffff,0);
      }
      else if (iVar1 == 4) {
        Vec3_set_xyz(auStack_b4,uVar3,ppuVar5,ar7);
        FUN_8c023484(ar4 + 5,auStack_b4,ppuVar5,ar7,auStack_c4);
        Vec3_assign(ar4 + 5,auStack_c4,ppuVar5,ar7);
        Vec3_dtor(auStack_c4,0xffffffff,ppuVar5,ar7);
        object_dtor_delete(auStack_b4,0xffffffff,ppuVar5,ar7);
        ppuVar5 = ar4 + 0x9e;
        if (cVar8 == '\0') {
          *ppuVar5 = (undefined *)0x3f333333;
        }
        else {
          ppuVar5[0] = (undefined *)0x3f333333;
          ppuVar5[1] = (undefined *)0xbf800000;
        }
        ar7 = (code *)0x0;
        ppuVar5 = (undefined **)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0xb,0xffffffff,0);
      }
      ppuVar4 = ar4 + 5;
      Vec3_assign(ar4 + 0x20,ppuVar4,ppuVar5,ar7);
      if ((int)ar4[0x4a] < 3) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar4,ppuVar5,ar7);
      }
      else {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ppuVar4,ppuVar5,ar7);
      }
      ar4[0x4b] = ar4[0x4b] + 1;
      ppuVar4 = ar4;
    case 0xb:
      Vec3_scale(ar4 + 5,&DAT_8c1365e8,ppuVar4,ar7,auStack_d4);
      Vec3_add(ar5,auStack_d4,ppuVar4,ar7,auStack_e4);
      FUN_8c031c74(ar4,auStack_e4,ar5,ar7);
      Vec3_dtor(auStack_e4,0xffffffff,ar5,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_d4,0xffffffff,ar5,ar7);
      FUN_8c05ae54(ar4,uVar3,ar5,ar7);
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,ar4 + 0x9e,ar5,ar7);
      ppuVar4 = ar5;
      if (iVar1 == 1) {
        ar7 = (code *)0x0;
        ppuVar4 = (undefined **)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0);
        uVar3 = 0xb0;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,0xb0,ppuVar4,ar7);
        FUN_8c03c314(ar4,uVar3,ppuVar4,ar7);
        ar4[0x4b] = ar4[0x4b] + 1;
      }
switchD_8c0572ba_caseD_5:
      Vec3_assign(ar4 + 0x20,ar4 + 5,ppuVar4,ar7);
      return uVar7;
    case 0xc:
      Vec3_scale(ar4 + 5,&DAT_8c1365ec,&switchdata_8c0572ba_8c0572c4,ar7,auStack_f4);
      Vec3_add(ar5,auStack_f4,ppuVar4,ar7,auStack_104);
      FUN_8c031c74(ar4,auStack_104,ar5,ar7);
      Vec3_dtor(auStack_104,0xffffffff,ar5,ar7);
      uVar3 = 0xffffffff;
      ar7 = Vec3_dtor;
      Vec3_dtor(auStack_f4,0xffffffff,ar5,Vec3_dtor);
      pcVar6 = FUN_8c05ae54;
      FUN_8c05ae54(ar4,uVar3,FUN_8c05ae54,ar7);
      iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x2c,0xb0,pcVar6,ar7);
      ppuVar4 = (undefined **)pcVar6;
      if (iVar1 == 1) {
        uVar7 = 0;
        ar4[0x4b] = (undefined *)0x0;
        ppuVar4 = (undefined **)pcVar6;
      }
      goto switchD_8c0572ba_caseD_5;
    }
  } while( true );
}

__asm__(".globl _FUN_8c057280\n.set _FUN_8c057280, _FUN_8c057280_def\n");
//@unit 8c057b6c
#include "../decls.h"
undefined4 FUN_8c057b6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar5;
  uint uVar6;
  undefined8 in_dr0;
  ulonglong uVar7;
  double dVar8;
  float fVar9;
  double in_dr14;
  undefined8 in_xd14;
  undefined8 uVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  undefined4 uStack_10;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uStack_10 = 1;
  Vec3_sub(ar6,ar5,ar6,ar7,auStack_34);
  Vec3_normalize(auStack_34,ar5,ar6,ar7);
  Vec3_ctor_copy(auStack_24,auStack_44,ar6,ar7);
  Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
  FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,ar7,auStack_54);
  FUN_8c0230f0(auStack_24,uVar3,ar6,ar7,auStack_64);
  FUN_8c022dac(auStack_54,auStack_64,ar6,ar7);
  uVar10 = in_dr0;
  if (cVar13 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    uVar10 = in_xd14;
  }
  Vec3_dtor(auStack_64,0xffffffff,ar6,ar7);
  uVar6 = (uint)in_dr0;
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
  FUN_8c02a1fc(ar4 + 0x2c8,uVar3,ar6,ar7);
  uVar7 = (ulonglong)uVar6;
  if (cVar13 == '\0') {
    *(undefined4 *)(ar4 + 0x28) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x28) = uVar7;
  }
  *(undefined4 *)(ar4 + 0x2b8) = 6;
  uVar3 = FUN_8c023334(ar4 + 0x14,auStack_24,ar6,ar7);
  *(undefined4 *)(ar4 + 0x27c) = uVar3;
  if (cVar13 == '\0') {
    dVar8 = (double)CONCAT44(0x420c0000,(int)uVar7);
  }
  else {
    dVar8 = 1.49443250242844e-311;
  }
  fVar9 = SUB84(in_dr14,0);
  if (cVar12 == '\0') {
    bVar11 = (float)((ulonglong)dVar8 >> 0x20) < fVar9;
  }
  else {
    bVar11 = dVar8 < in_dr14;
  }
  if (bVar11) {
    if (cVar13 == '\0') {
      dVar8 = (double)CONCAT44(0x42870000,SUB84(dVar8,0));
    }
    else {
      dVar8 = 85899362951.0;
    }
    if (cVar12 == '\0') {
      bVar11 = (float)((ulonglong)dVar8 >> 0x20) < fVar9;
    }
    else {
      bVar11 = dVar8 < in_dr14;
    }
    if (bVar11) {
      if (cVar13 == '\0') {
        *(undefined4 *)(ar4 + 0x2c0) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x2c0) = CONCAT44(0x3f800000,SUB84(dVar8,0));
      }
      iVar5 = 1;
    }
    else {
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(0x42340000,SUB84(dVar8,0));
      }
      else {
        dVar8 = -0.007812501926764526;
      }
      if (cVar12 == '\0') {
        fVar9 = fVar9 / (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar9 = SUB84(in_dr14 / dVar8,0);
      }
      if (cVar13 == '\0') {
        *(float *)(ar4 + 0x2c0) = fVar9;
      }
      else {
        *(undefined8 *)(ar4 + 0x2c0) = uVar10;
      }
      iVar5 = 1;
    }
  }
  else {
    if (cVar13 == '\0') {
      dVar8 = (double)CONCAT44(0x41a00000,SUB84(dVar8,0));
    }
    else {
      dVar8 = 3161096467456.0;
    }
    if (cVar12 == '\0') {
      fVar9 = fVar9 / (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar9 = SUB84(in_dr14 / dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(ar4 + 0x2c0) = fVar9;
    }
    else {
      *(undefined8 *)(ar4 + 0x2c0) = uVar10;
    }
    iVar5 = 0;
  }
  if (*(int *)(ar4 + 0x27c) == 3) {
    ar7_00 = 0;
    ar6_00 = 0xffffffff;
    iVar4 = iVar5 + 0x41;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar4,0xffffffff,0);
    uVar3 = FUN_8c026db0(ar4,iVar4,ar6_00,ar7_00);
    uVar1 = FUN_8c03c0f0(ar4 + 0xb0,uVar3,ar6_00,ar7_00);
    puVar2 = (undefined4 *)deref_u32(uVar1,uVar3,ar6_00,ar7_00);
    uVar1 = puVar2[1];
    *(undefined4 *)(ar4 + 0xb4) = *puVar2;
    *(undefined4 *)(ar4 + 0xb8) = uVar1;
    *(undefined4 *)(ar4 + 0xbc) = puVar2[2];
    if (*(int *)(ar4 + 0x128) == 3) {
      *(undefined **)(ar4 + 0xb4) = &DAT_8c135ebc + iVar5 * 0x18;
    }
    else {
      *(undefined **)(ar4 + 0xb4) = &DAT_8c13600c + iVar5 * 0x18;
    }
  }
  else {
    ar7_00 = 0;
    ar6_00 = 0xffffffff;
    iVar4 = iVar5 + 0x44;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar4,0xffffffff,0);
    uVar3 = FUN_8c026db0(ar4,iVar4,ar6_00,ar7_00);
    uVar1 = FUN_8c03c0f0(ar4 + 0xb0,uVar3,ar6_00,ar7_00);
    puVar2 = (undefined4 *)deref_u32(uVar1,uVar3,ar6_00,ar7_00);
    uVar1 = puVar2[1];
    *(undefined4 *)(ar4 + 0xb4) = *puVar2;
    *(undefined4 *)(ar4 + 0xb8) = uVar1;
    *(undefined4 *)(ar4 + 0xbc) = puVar2[2];
    if (*(int *)(ar4 + 0x128) == 3) {
      *(undefined **)(ar4 + 0xb4) = &DAT_8c135f04 + iVar5 * 0x18;
    }
    else {
      *(undefined **)(ar4 + 0xb4) = &DAT_8c136054 + iVar5 * 0x18;
    }
  }
  s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_00);
  Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7_00);
  return 1;
}

__asm__(".globl _FUN_8c057b6c\n.set _FUN_8c057b6c, _FUN_8c057b6c_def\n");
//@unit 8c057e58
#include "../decls.h"
uint FUN_8c057e58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  undefined8 in_dr4;
  undefined8 in_xd0;
  undefined4 in_PR;
  char cVar5;
  char cVar6;
  uint uStack_50;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar2 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uStack_c = in_PR;
  Vec3_set_zero(&fStack_18,ar5,ar6,ar7);
  Vec3_set_zero(&uStack_24,ar5,ar6,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,uVar2);
  FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),ar6,ar7);
  vec3_copy_8c023d8c(&uStack_24,auStack_30,ar6,ar7);
  object_dtor_delete(auStack_30,0xffffffff,ar6,ar7);
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c8),uStack_24);
  }
  else {
    in_xd0 = CONCAT44(uStack_20,uStack_24);
    dVar4 = *(double *)(ar4 + 0x2c8);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar3);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x2c0);
  }
  if (cVar5 == '\0') {
    fStack_18 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2cc),uStack_20);
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_1c,uStack_20);
    dVar4 = *(double *)(ar4 + 0x2cc);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar3);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x2c0);
  }
  if (cVar5 == '\0') {
    fStack_14 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2d0),uStack_1c);
  }
  else {
    fStack_14 = (float)in_xd0;
    in_xd0 = CONCAT44(fStack_18,uStack_1c);
    dVar4 = *(double *)(ar4 + 0x2d0);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar3);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x2c0);
  }
  if (cVar5 == '\0') {
    fStack_10 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fStack_10 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 != '\0') {
    fStack_10 = (float)in_xd0;
    uStack_c = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  vec3_copy_8c023d8c(ar4 + 0x2c8,&uStack_24,ar6,ar7);
  vec3_copy_8c02b5fc(auStack_3c,&fStack_18,ar6,ar7);
  FUN_8c023484(ar4 + 0x14,auStack_3c,ar6,ar7,auStack_4c);
  Vec3_assign(ar4 + 0x14,auStack_4c,ar6,ar7);
  Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_3c,0xffffffff,ar6,ar7);
  Vec3_length(ar4 + 0x14,uVar2,ar6,ar7);
  iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(ar4 + 0x2b8) = 0;
    FUN_8c023d7c(ar4 + 0x2c8,uVar2,ar6,ar7);
  }
  object_dtor_delete(&uStack_24,0xffffffff,ar6,ar7);
  object_dtor_delete(&fStack_18,0xffffffff,ar6,ar7);
  uStack_50 = (uint)(iVar1 != 1);
  return uStack_50;
}

__asm__(".globl _FUN_8c057e58\n.set _FUN_8c057e58, _FUN_8c057e58_def\n");
//@unit 8c058024
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
//@unit 8c058d60
#include "../decls.h"
undefined4 FUN_8c058d60_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  code *ar5_00;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  double dVar6;
  float fVar7;
  char cVar8;
  char cVar9;
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
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar5_00 = Vec3_ctor_zero;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_20,Vec3_ctor_zero,ar6,ar7);
  Vec3_ctor_zero(auStack_30,ar5_00,ar6_00,ar7_00);
  Vec3_assign(auStack_30,ar6,ar6_00,ar7_00);
  *(undefined4 *)(ar4 + 0x178) = 1;
  iVar1 = *(int *)(ar4 + 300);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      *(undefined4 *)(ar4 + 0x214) = 0;
      ar6_00 = (undefined1 *)(ar4 + 0x34c);
      iVar1 = FUN_8c055c38(ar4,ar5,ar6_00,ar7);
      ar7_00 = ar7;
      if (iVar1 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
      break;
    case 1:
      uVar3 = ar5;
      iVar1 = FUN_8c057164(ar4,ar5,ar6_00,ar7_00);
      if (iVar1 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x40) = 5;
        FUN_8c0230f0(auStack_30,uVar3,ar6_00,ar7_00,auStack_40);
        FUN_8c0230f0(ar5,uVar3,ar6_00,ar7_00,auStack_50);
        puVar2 = auStack_50;
        Vec3_sub(auStack_40,puVar2,ar6_00,ar7_00,auStack_60);
        Vec3_normalize(auStack_60,puVar2,ar6_00,ar7_00);
        Vec3_assign(ar4 + 0x54,auStack_70,ar6_00,ar7_00);
        Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_50,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_40,0xffffffff,ar6_00,ar7_00);
        Vec3_scale(ar4 + 0x54,&DAT_8c1365f0,ar6_00,ar7_00,auStack_80);
        Vec3_sub(auStack_30,auStack_80,ar6_00,ar7_00,auStack_90);
        Vec3_assign(ar4 + 0x248,auStack_90,ar6_00,ar7_00);
        Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_80,0xffffffff,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x250));
        }
        else {
          dVar6 = *(double *)(ar4 + 0x48);
        }
        if (cVar8 == '\0') {
          fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 - dVar6,0);
        }
        if (cVar8 != '\0' || fVar5 <= 0.0) {
          Vec3_assign(ar4 + 0x248,ar5,ar6_00,ar7_00);
        }
        *(undefined4 *)(ar4 + 700) = 1;
      }
      break;
    case 2:
      FUN_8c0230f0(auStack_30,ar6,ar6_00,ar7_00,auStack_a0);
      FUN_8c0230f0(ar5,ar6,ar6_00,ar7_00,auStack_b0);
      puVar2 = auStack_b0;
      Vec3_sub(auStack_a0,puVar2,ar6_00,ar7_00,auStack_c0);
      Vec3_normalize(auStack_c0,puVar2,ar6_00,ar7_00);
      Vec3_assign(ar4 + 0x54,auStack_d0,ar6_00,ar7_00);
      Vec3_dtor(auStack_d0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_c0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_b0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_a0,0xffffffff,ar6_00,ar7_00);
      Vec3_ctor_copy(auStack_e0,ar4 + 0x54,ar6_00,ar7_00);
      ar7_00 = auStack_e0;
      ar6_00 = (undefined1 *)(ar4 + 0x248);
      iVar1 = FUN_8c04e0e0(ar4,ar5,ar6_00,ar7_00);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_e0,0xffffffff,ar6_00,ar7_00);
      if (iVar1 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        FUN_8c030f2c(ar4 + 0x1fc,uVar3,ar6_00,ar7_00);
        *(undefined4 *)(ar4 + 0x2e8) = 1;
      }
      break;
    case 3:
      ar7_00 = (undefined1 *)0x1d;
      ar6_00 = auStack_30;
      iVar1 = FUN_8c058024(ar4,ar5,ar6_00,0x1d);
      if (iVar1 == 0) {
        FUN_8c022d04(ar4 + 0x2a8,ar5,ar6_00,ar7_00);
        FUN_8c022d04(ar4 + 0x2d4,ar5,ar6_00,ar7_00);
        *(undefined4 *)(ar4 + 700) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      *(undefined4 *)(ar4 + 0x2e8) = 1;
      break;
    case 4:
      Vec3_ctor_xyz(auStack_f0,ar6,ar6_00,ar7_00);
      Vec3_add(ar5,auStack_f0,ar6_00,ar7_00,auStack_100);
      ar6_00 = auStack_100;
      FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00);
      Vec3_dtor(auStack_100,0xffffffff,ar6_00,ar7_00);
      ar6 = (undefined1 *)0xffffffff;
      Vec3_dtor(auStack_f0,0xffffffff,ar6_00,ar7_00);
      FUN_8c032ab0(ar4,ar6,ar6_00,ar7_00);
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x278) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(undefined8 *)(ar4 + 0x278) = in_dr0;
      }
      *(undefined4 *)(ar4 + 800) = 0;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 5:
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar1 = FUN_8c057e58(ar4,ar6,ar6_00,ar7_00);
      if (iVar1 == 0) {
        ar7_00 = (undefined1 *)0x0;
        ar6_00 = (undefined1 *)0xffffffff;
        uVar3 = 0x1a;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_00);
        FUN_8c0230f0(ar4 + 0x14,uVar3,ar6_00,ar7_00,auStack_110);
        Vec3_ctor_xyz(auStack_120,uVar3,ar6_00,ar7_00);
        FUN_8c022dac(auStack_110,auStack_120,ar6_00,ar7_00);
        if (cVar9 == '\0') {
          fVar7 = 2.0;
        }
        else {
          fVar5 = 2.0;
          fVar7 = 8.319336e+12;
        }
        Vec3_dtor(auStack_120,0xffffffff,ar6_00,ar7_00);
        Vec3_dtor(auStack_110,0xffffffff,ar6_00,ar7_00);
        if (cVar8 != '\0' || fVar5 <= fVar7) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        else {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + -1;
        }
      }
      break;
    case 6:
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar6_00,ar7_00);
      *(undefined4 *)(ar4 + 0x2e8) = 1;
      uVar4 = 0;
    }
  }
  Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7_00);
  return uVar4;
}

__asm__(".globl _FUN_8c058d60\n.set _FUN_8c058d60, _FUN_8c058d60_def\n");
//@unit 8c0593cc
#include "../decls.h"
undefined4 FUN_8c0593cc_def(int ar4,int *ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *ar6_00;
  undefined1 *puVar7;
  uint ar7_00;
  uint ar7_01;
  undefined4 ar7_02;
  undefined4 uVar8;
  float fVar9;
  undefined8 in_dr0;
  undefined8 uVar10;
  double dVar11;
  float fVar12;
  undefined8 in_xd0;
  char cVar13;
  char cVar14;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  undefined4 in_stack_fffffe9c;
  uint uStack_100;
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
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar8 = 1;
  ar7_00 = ar7;
  Vec3_ctor_copy(auStack_30,in_stack_00000000,ar6,ar7);
  *(undefined4 *)(ar4 + 0x178) = 1;
  uVar5 = 1;
  *(undefined4 *)(ar4 + 0x2e8) = 1;
  iVar1 = *(int *)(ar4 + 300);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      FUN_8c030f2c(ar4 + 0x1fc,in_stack_00000000,1,ar7_00);
      Vec3_ctor_xyz(auStack_40,in_stack_00000000,uVar5,ar7_00);
      Vec3_add(ar7,auStack_40,uVar5,ar7_00,auStack_50);
      puVar7 = auStack_50;
      FUN_8c057b6c(ar4,ar7,puVar7,ar7_00);
      Vec3_dtor(auStack_50,0xffffffff,puVar7,ar7_00);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_40,0xffffffff,puVar7,ar7_00);
      FUN_8c032ab0(ar4,uVar2,puVar7,ar7_00);
      if (cVar14 == '\0') {
        *(int *)(ar4 + 0x278) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(undefined8 *)(ar4 + 0x278) = in_dr0;
      }
      uVar5 = 0;
      *(undefined4 *)(ar4 + 800) = 0;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      if (in_stack_00000004 == 0x1c) {
        uVar5 = 0x100;
        uVar2 = 0;
        iVar1 = rand_range(ar4,0,0x100,ar7_00);
        if (iVar1 == 0) {
          FUN_8c022d04(ar4 + 0x2a8,uVar2,uVar5,ar7_00);
          FUN_8c022d04(ar4 + 0x2d4,uVar2,uVar5,ar7_00);
          *(undefined4 *)(ar4 + 300) = 5;
          uVar6 = 0;
          uVar2 = 0xffffffff;
          uVar5 = 0x20;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x20,0xffffffff,0);
          *(undefined4 *)(ar4 + 0x218) = 5;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6);
          break;
        }
      }
      uVar6 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      FUN_8c0230f0(ar4 + 0x14,uVar2,uVar5,ar7_00,auStack_60);
      Vec3_ctor_xyz(auStack_70,uVar2,uVar5,ar7_00);
      FUN_8c022dac(auStack_60,auStack_70,uVar5,ar7_00);
      if (cVar14 == '\0') {
        in_dr0 = CONCAT44(0x40000000,uVar6);
      }
      else {
        in_dr0 = 0x8c022cb040000000;
      }
      ar7_01 = (uint)(cVar13 == '\0' && (float)in_dr0 < (float)((ulonglong)in_dr0 >> 0x20));
      ar7_00 = ar7_01;
      Vec3_dtor(auStack_70,0xffffffff,uVar5,ar7_01);
      in_stack_00000000 = 0xffffffff;
      Vec3_dtor(auStack_60,0xffffffff,uVar5,ar7_00);
      if (ar7_01 != 0) {
        *(undefined4 *)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(ar4 + 300) = 2;
        vec3_clear(ar4 + 0x2a8,in_stack_00000000,uVar5,ar7_00);
        pcVar4 = vec3_clear;
        vec3_clear(ar4 + 0x2d4,vec3_clear,uVar5,ar7_00);
        if (in_stack_00000004 == 0x1d) {
          uVar2 = (**(code **)(*ar5 + 0x10c))(ar5,pcVar4,uVar5,ar7_00);
          FUN_8c0d98d4(uVar2,pcVar4,uVar5,ar7_00);
        }
        break;
      }
    case 1:
      fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar1 = FUN_8c057e58(ar4,in_stack_00000000,uVar5,ar7_00);
      if (iVar1 == 0) {
        FUN_8c0230f0(ar4 + 0x14,in_stack_00000000,uVar5,ar7_00,auStack_80);
        Vec3_ctor_xyz(auStack_90,in_stack_00000000,uVar5,ar7_00);
        FUN_8c022dac(auStack_80,auStack_90,uVar5,ar7_00);
        if (cVar14 == '\0') {
          pcVar4 = (code *)0x40000000;
        }
        else {
          fVar9 = 2.0;
          pcVar4 = Vec3_dtor;
        }
        Vec3_dtor(auStack_90,0xffffffff,uVar5,ar7_00);
        Vec3_dtor(auStack_80,0xffffffff,uVar5,ar7_00);
        if (cVar13 != '\0' || fVar9 <= (float)(uint)pcVar4) {
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          uVar5 = 300;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          iVar1 = ar4;
          vec3_clear(ar4 + 0x2a8,300,ar4,ar7_00);
          vec3_clear(ar4 + 0x2d4,uVar5,iVar1,ar7_00);
          if (in_stack_00000004 == 0x1d) {
            uVar2 = (**(code **)(*ar5 + 0x10c))(ar5,uVar5,iVar1,ar7_00);
            FUN_8c0d98d4(uVar2,uVar5,iVar1,ar7_00);
          }
        }
        else {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + -1;
        }
      }
      break;
    case 2:
      if (in_stack_00000004 == 0x1c) {
        uVar5 = 0x1c;
        puVar7 = auStack_30;
        iVar1 = FUN_8c058024(ar4,ar7,puVar7,0x1c);
        if (iVar1 == 0) {
          FUN_8c03c314(ar4,ar7,puVar7,uVar5);
          FUN_8c022d04(ar4 + 0x2a8,ar7,puVar7,uVar5);
          *(undefined4 *)(ar4 + 0x2e8) = 0;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          uVar6 = 0;
          uVar2 = 0xffffffff;
          uVar5 = 0x1a;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6);
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          FUN_8c03f39c(ar6,uVar5,uVar2,uVar6);
        }
      }
      else if (in_stack_00000004 == 0x1d) {
        uVar5 = 0x1d;
        iVar1 = FUN_8c058024(ar4,ar7,auStack_30,0x1d);
        if (iVar1 == 0) {
          if (cVar14 == '\0') {
            uVar10 = CONCAT44(*(undefined4 *)(ar7 + 4),(int)in_dr0);
          }
          else {
            uVar10 = *(undefined8 *)(ar7 + 4);
          }
          uVar2 = 0x2a8;
          FUN_8c022d04(ar4 + 0x2a8,FUN_8c022d04,0x2a8,uVar5);
          (**(code **)(*ar5 + 0x128))(ar5,ar7,uVar2,uVar5);
          if (cVar14 == '\0') {
            dVar11 = (double)CONCAT44(*(undefined4 *)(ar7 + 4),(int)((ulonglong)uVar10 >> 0x20));
            uVar10 = in_xd0;
          }
          else {
            dVar11 = *(double *)(ar7 + 4);
          }
          if (cVar13 == '\0') {
            fVar9 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
          }
          else {
            fVar9 = SUB84(dVar11 - dVar11,0);
          }
          if (cVar14 == '\0') {
            *(float *)(ar4 + 0x2ac) = fVar9;
          }
          else {
            *(undefined8 *)(ar4 + 0x2ac) = uVar10;
          }
          uVar6 = 0;
          uVar2 = 0xffffffff;
          uVar5 = 0x25;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x25,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6);
          *(undefined4 *)(ar4 + 0x2e8) = 2;
          *(undefined4 *)(ar4 + 300) = 6;
          Vec3_ctor_xyz(auStack_a0,uVar5,uVar2,uVar6);
          Vec3_add(ar7,auStack_a0,uVar2,uVar6,auStack_b0);
          puVar7 = auStack_b0;
          FUN_8c057b6c(ar4,ar7,puVar7,uVar6);
          Vec3_dtor(auStack_b0,0xffffffff,puVar7,uVar6);
          uVar5 = 0xffffffff;
          Vec3_dtor(auStack_a0,0xffffffff,puVar7,uVar6);
          FUN_8c030eb8(ar4 + 0x1fc,uVar5,puVar7,uVar6);
        }
      }
      else if (in_stack_00000004 == 0x31) {
        uVar5 = 0x1c;
        puVar7 = auStack_30;
        iVar1 = FUN_8c058024(ar4,ar7,puVar7,0x1c);
        if (iVar1 == 0) {
          FUN_8c03c314(ar4,ar7,puVar7,uVar5);
          FUN_8c022d04(ar4 + 0x2a8,ar7,puVar7,uVar5);
          *(undefined4 *)(ar4 + 0x2e8) = 0;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          uVar2 = 0;
          uVar5 = 0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
          iVar1 = ar4 + 0xb0;
          s_CAnimBody_SetFrame_033e6e(iVar1,iVar1,uVar5,uVar2);
          *(undefined4 *)(ar4 + 0x2b8) = 2;
          FUN_8c03f39c(ar6,iVar1,uVar5,uVar2);
        }
      }
      break;
    case 3:
      uVar5 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x26,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      *(undefined4 *)(ar4 + 0x178) = 0;
      *(undefined4 *)(ar4 + 700) = 0;
      *(undefined4 *)(ar4 + 300) = 0;
      pcVar4 = FUN_8c022d04;
      FUN_8c022d04(ar4 + 0x2d4,0x2d4,FUN_8c022d04,uVar5);
      FUN_8c022d04(ar4 + 0x2a8,ar4 + 0x2a8,pcVar4,uVar5);
      uVar8 = 0;
      *(undefined4 *)(ar4 + 0x2e8) = 2;
      break;
    case 4:
      FUN_8c030eb8(ar4 + 0x1fc,in_stack_00000000,1,ar7_00);
      uVar5 = 0x1c;
      iVar1 = FUN_8c058024(ar4,ar7,auStack_30,0x1c);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 0x2e8) = 2;
        *(undefined4 *)(ar4 + 700) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + -1;
        FUN_8c022d04(ar4 + 0x2a8,ar4,0,uVar5);
        uVar6 = 0;
        uVar2 = 0xffffffff;
        uVar5 = 0x1a;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0);
        *(undefined4 *)(ar4 + 0x218) = 4;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar2,uVar6);
        *(undefined4 *)(ar4 + 0x2b8) = 2;
      }
      break;
    case 5:
      s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,in_stack_00000000,1,ar7_00);
      fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
      CAnimBody_GetCurFrame(ar4 + 0xb0,CAnimBody_GetCurFrame,uVar5,ar7_00,in_stack_fffffe9c);
      if (cVar14 == '\0') {
        fVar12 = 113.0;
      }
      else {
        fVar9 = 113.0;
        fVar12 = 1.04257e-42;
      }
      if (cVar13 != '\0' || fVar12 <= fVar9) {
        *(undefined4 *)(ar4 + 0x2e8) = 1;
        ar7_02 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x55;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x55,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,uVar6,ar7_02);
        FUN_8c022d04(ar4 + 0x2d4,uVar5,uVar6,ar7_02);
        FUN_8c022d04(ar4 + 0x2a8,uVar5,uVar6,ar7_02);
        uVar5 = FUN_8c026db0(ar4,uVar5,uVar6,ar7_02);
        uVar2 = FUN_8c03c0f0(ar4 + 0xb0,uVar5,uVar6,ar7_02);
        puVar3 = (undefined4 *)deref_u32(uVar2,uVar5,uVar6,ar7_02);
        uVar5 = puVar3[1];
        *(undefined4 *)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(ar4 + 0xb8) = uVar5;
        *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
        *(undefined4 *)(ar4 + 0x29c) = 1;
        *(undefined4 *)(ar4 + 300) = 4;
      }
      break;
    case 6:
      iVar1 = FUN_8c057e58(ar4,in_stack_00000000,1,ar7_00);
      fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
      if (iVar1 == 0) {
        pcVar4 = FUN_8c0230f0;
        FUN_8c0230f0(ar4 + 0x14,FUN_8c0230f0,uVar5,ar7_00,auStack_c0);
        Vec3_ctor_xyz(auStack_d0,pcVar4,uVar5,ar7_00);
        FUN_8c022dac(auStack_c0,auStack_d0,uVar5,ar7_00);
        if (cVar14 == '\0') {
          pcVar4 = (code *)0x40000000;
        }
        else {
          fVar9 = 2.0;
          pcVar4 = Vec3_dtor;
        }
        Vec3_dtor(auStack_d0,0xffffffff,uVar5,ar7_00);
        ar6_00 = Vec3_dtor;
        Vec3_dtor(auStack_c0,0xffffffff,Vec3_dtor,ar7_00);
        uStack_100 = (uint)(cVar13 == '\0' && fVar9 < (float)(uint)pcVar4);
        if (uStack_100 == 0) {
          puVar7 = auStack_e0;
          Vec3_ctor_xyz(puVar7,0,puVar7,ar7_00);
          Vec3_add(ar7,auStack_e0,puVar7,ar7_00,auStack_f0);
          puVar7 = auStack_f0;
          FUN_8c057b6c(ar4,ar7,puVar7,ar7_00);
          Vec3_dtor(auStack_f0,0xffffffff,puVar7,ar7_00);
          Vec3_dtor(auStack_e0,0xffffffff,puVar7,ar7_00);
        }
        else {
          *(undefined4 *)(ar4 + 800) = 0;
          FUN_8c022d04(ar4 + 0x2d4,uStack_100,ar6_00,ar7_00);
          FUN_8c022d04(ar4 + 0x2a8,uStack_100,ar6_00,ar7_00);
          *(undefined4 *)(ar4 + 700) = 0;
          *(undefined4 *)(ar4 + 300) = 0;
          *(undefined4 *)(ar4 + 0x178) = 0;
          uVar8 = 0;
          *(undefined4 *)(ar4 + 0x2b8) = 2;
        }
      }
    }
  }
  Vec3_dtor(auStack_30,0xffffffff,auStack_30,0xffffffff);
  return uVar8;
}

__asm__(".globl _FUN_8c0593cc\n.set _FUN_8c0593cc, _FUN_8c0593cc_def\n");
//@unit 8c059fbc
#include "../decls.h"
undefined4 ret_const_0_059fbc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_059fbc\n.set _ret_const_0_059fbc, _ret_const_0_059fbc_def\n");
//@unit 8c059fc4
#include "../decls.h"
undefined4 FUN_8c059fc4_def(int ar4,undefined4 *ar5,int ar6,undefined1 *ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *ar7_00;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  double dVar6;
  double dVar7;
  float fVar8;
  uint in_fr3;
  undefined8 in_dr4;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd14;
  bool bVar9;
  char cVar10;
  char cVar11;
  int in_stack_00000000;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar11 = '\0';
  cVar10 = '\0';
  uVar3 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uVar4 = 1;
  puVar2 = ar5;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  if (cVar11 == '\0') {
    in_fr15 = 338.375;
  }
  else {
    in_xd14 = 1.63025361168389e-311;
  }
  *(undefined4 *)(ar4 + 0x300) = 0;
  iVar1 = *(int *)(ar4 + 0x28c);
  if (iVar1 == 0) {
    iVar1 = FUN_8c057164(ar4,ar5,ar6,ar7_00);
    if (iVar1 == 0) {
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x43330000,ar5[1]);
      }
      else {
        dVar6 = -7.95546843074564e-251;
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar6,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x2ac) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x2ac) = dVar6;
      }
      Vec3_assign(ar4 + 0x54,ar5,ar6,ar7_00);
      if (in_stack_00000000 == -1) {
        ar6 = 3;
        in_stack_00000000 = rand_range(ar4,0,3,ar7_00);
      }
      Vec3_assign(auStack_2c,ar5,ar6,ar7_00);
      puVar2 = ar5;
      Vec3_assign(ar4 + 0x268,ar5,ar6,ar7_00);
      if (in_stack_00000000 == 1) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x43fa0000,*ar5);
        }
        else {
          dVar6 = 1.1551152330547935e+238;
        }
        if (cVar10 == '\0' && (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar6,0)) {
          in_stack_00000000 = 0;
        }
      }
      if (in_stack_00000000 == 0) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)(ar7 + 8),SUB84(dVar6,0));
        }
        else {
          dVar6 = *(double *)(ar7 + 8);
        }
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - in_fr15,SUB84(dVar6,0));
        }
        else {
          dVar6 = dVar6 - (double)CONCAT44(in_fr14,in_fr15);
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x5c) = (int)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x54));
        }
        else {
          *(double *)(ar4 + 0x5c) = dVar6;
          dVar6 = *(double *)(ar4 + 0x48);
        }
        if (cVar10 == '\0') {
          fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar6 + dVar6,0);
        }
        if (cVar11 != '\0') {
          fVar5 = 0.0;
        }
        if (cVar10 != '\0' || 0.0 <= fVar5) {
          if (cVar11 == '\0') {
            dVar6 = (double)(ulonglong)in_fr3;
            dVar7 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
          }
          else {
            dVar6 = 0.0;
            dVar7 = 1.23977604087146e-311;
          }
          if (cVar10 == '\0') {
            fVar8 = (float)((ulonglong)dVar7 >> 0x20);
            fVar5 = SUB84(dVar7,0) * fVar8;
            dVar7 = (double)CONCAT44(fVar8,fVar5);
            dVar6 = (double)CONCAT44(0.0 - fVar5,SUB84(dVar6,0));
          }
          else {
            dVar7 = dVar7 * dVar7;
            dVar6 = dVar6 - dVar7;
          }
          fVar5 = SUB84(dVar7,0);
          if (cVar11 == '\0') {
            *(int *)(ar4 + 0x54) = (int)((ulonglong)dVar6 >> 0x20);
          }
          else {
            *(double *)(ar4 + 0x54) = dVar6;
          }
        }
        FUN_8c022d04(ar4 + 0x248,puVar2,ar6,ar7_00);
        if (cVar11 == '\0') {
          uVar3 = *(undefined4 *)(ar7 + 8);
          dVar6 = (double)CONCAT44(uVar3,fVar5);
          *(undefined4 *)(ar4 + 0x270) = uVar3;
        }
        else {
          dVar6 = *(double *)(ar7 + 8);
          *(double *)(ar4 + 0x270) = dVar6;
        }
      }
      else if (in_stack_00000000 == 1) {
        if (cVar11 == '\0') {
          in_xd14 = (double)CONCAT44(in_fr15,0x41a00000);
        }
        if (cVar10 == '\0') {
          in_xd14 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) + SUB84(in_xd14,0),
                                     SUB84(in_xd14,0));
        }
        else {
          in_xd14 = in_xd14 + in_xd14;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x5c) = (int)((ulonglong)in_xd14 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x5c) = in_xd14;
        }
        FUN_8c022d04(ar4 + 0x248,puVar2,ar6,ar7_00);
        dVar6 = (double)((ulonglong)in_xd14 & 0xffffffff);
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x270) = 0;
        }
        else {
          *(double *)(ar4 + 0x270) = dVar6;
        }
      }
      else if ((in_stack_00000000 == 2) || (in_stack_00000000 == 3)) {
        if (cVar11 == '\0') {
          in_xd14 = (double)CONCAT44(in_fr15,0x42200000);
        }
        if (cVar10 == '\0') {
          in_xd14 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) + SUB84(in_xd14,0),
                                     SUB84(in_xd14,0));
        }
        else {
          in_xd14 = in_xd14 + in_xd14;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x54) = (int)((ulonglong)in_xd14 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x54) = in_xd14;
        }
        FUN_8c022d04(ar4 + 0x248,puVar2,ar6,ar7_00);
        dVar6 = (double)((ulonglong)in_xd14 & 0xffffffff);
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x268) = 0;
        }
        else {
          *(double *)(ar4 + 0x268) = dVar6;
        }
      }
      FUN_8c022fc0(ar5,ar4 + 0x268,ar6,ar7_00);
      if (cVar10 == '\0') {
        bVar9 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar9 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
      }
      if (!bVar9) {
        Vec3_assign(ar4 + 0x54,ar5,ar6,ar7_00);
      }
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 700) = 1;
      if ((*(int *)(ar4 + 0x290) == 1) && (*(int *)(ar4 + 0x124) != 0x10)) {
        *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
      }
    }
    else if (iVar1 != 2) {
      if (iVar1 == 3) {
        iVar1 = *(int *)(ar4 + 800);
        if (iVar1 == 0) {
          CAnimBody_GetCurFrame(ar4 + 0xb0,puVar2,ar6,ar7_00,uVar3);
          if (cVar11 == '\0') {
            fVar8 = 25.0;
          }
          else {
            fVar5 = 25.0;
            fVar8 = 8.12753e-43;
          }
          if (cVar10 == '\0' && fVar8 < fVar5) {
            FUN_8c033474(ar4,0x1c,ar5,*(undefined4 *)(ar4 + 0x244));
            *(int *)(ar4 + 800) = *(int *)(ar4 + 800) + 1;
          }
        }
        else if (iVar1 == 1) {
          CAnimBody_GetCurFrame(ar4 + 0xb0,puVar2,ar6,ar7_00,uVar3);
          if (cVar11 == '\0') {
            fVar8 = 78.0;
          }
          else {
            fVar5 = 78.0;
            fVar8 = 8.12753e-43;
          }
          if (cVar10 == '\0' && fVar8 < fVar5) {
            FUN_8c033474(ar4,0x1d,ar5,*(undefined4 *)(ar4 + 0x244));
            *(int *)(ar4 + 800) = *(int *)(ar4 + 800) + 1;
          }
        }
        else if (iVar1 == 2) {
          CAnimBody_GetCurFrame(ar4 + 0xb0,puVar2,ar6,ar7_00,uVar3);
          if (cVar11 == '\0') {
            fVar8 = 150.0;
          }
          else {
            fVar5 = 150.0;
            fVar8 = 7.39886e-43;
          }
          if (cVar10 == '\0' && fVar8 < fVar5) {
            if (*(char *)(ar4 + 0x210) == '\x01') {
              Vec3_assign(auStack_2c,ar5,ar6,ar7_00);
              (**(code **)(**(int **)(ar4 + 0x244) + 0xd0))(*(int **)(ar4 + 0x244),auStack_2c,1,5);
            }
            *(int *)(ar4 + 800) = *(int *)(ar4 + 800) + 1;
          }
        }
        *(undefined4 *)(ar4 + 0x178) = 1;
        ar7_00 = (undefined1 *)0x1e;
        ar6 = ar4 + 0x268;
        iVar1 = FUN_8c058024(ar4,ar5,ar6,0x1e);
        if (iVar1 == 0) {
          FUN_8c022d04(ar4 + 0x2d4,ar5,ar6,ar7_00);
          FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7_00);
          *(undefined4 *)(ar4 + 700) = 0;
          *(undefined4 *)(ar4 + 0x178) = 0;
          uVar4 = 0;
          *(undefined4 *)(ar4 + 0x28c) = 0;
          *(undefined4 *)(ar4 + 0x68) = 0;
          FUN_8c03c314(ar4,ar5,ar6,ar7_00);
          FUN_8c030eb8(ar4 + 0x1fc,ar5,ar6,ar7_00);
          *(undefined4 *)(ar4 + 0x2e8) = 2;
        }
      }
      goto LAB_8c05a4c4;
    }
    Vec3_ctor_copy(auStack_3c,ar4 + 0x248,ar6,ar7_00);
    ar7_00 = auStack_3c;
    ar6 = ar4 + 0x54;
    iVar1 = FUN_8c04e0e0(ar4,ar5,ar6,ar7_00);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7_00);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x218) = 9;
      *(int *)(ar4 + 0x28c) = *(int *)(ar4 + 0x28c) + 1;
      *(undefined4 *)(ar4 + 800) = 0;
      FUN_8c030f2c(ar4 + 0x1fc,uVar3,ar6,ar7_00);
    }
  }
LAB_8c05a4c4:
  Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7_00);
  return uVar4;
}

__asm__(".globl _FUN_8c059fc4\n.set _FUN_8c059fc4, _FUN_8c059fc4_def\n");
//@unit 8c05a54c
#include "../decls.h"
undefined4 FUN_8c05a54c_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double in_dr0;
  double dVar7;
  undefined4 uVar9;
  double dVar8;
  float fVar10;
  undefined4 in_fr3;
  float fVar11;
  undefined8 in_dr12;
  double dVar12;
  undefined4 in_fr15;
  undefined8 in_xd0;
  double in_xd12;
  bool bVar13;
  char cVar14;
  char cVar15;
  undefined4 in_stack_fffffefc;
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  uVar4 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  cVar15 = '\0';
  cVar14 = '\0';
  iVar3 = 1;
  iVar2 = *(int *)(ar4 + 300);
  if ((iVar2 < 0xb) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      if (*(int *)(ar4 + 0x2ec) < 5) {
        *(undefined4 *)(ar4 + 0x32c) = 6;
      }
      else {
        iVar3 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x2ec),8,ar6,ar7);
        if (iVar3 == 0) {
          *(undefined4 *)(ar4 + 0x32c) = 2;
        }
        else {
          *(undefined4 *)(ar4 + 0x32c) = 1;
        }
      }
      *(int *)(ar4 + 0x2ec) = *(int *)(ar4 + 0x2ec) + 1;
      iVar3 = *(int *)(ar4 + 0x32c);
      if ((iVar3 < 7) && (-1 < iVar3)) {
                    
        switch(iVar3) {
        default:
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          break;
        case 2:
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 3;
          break;
        case 3:
          break;
        case 4:
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 5;
          break;
        case 5:
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 7;
          break;
        case 6:
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 9;
        }
      }
      break;
    case 1:
      iVar3 = rand_range(ar4,0,0x10,ar7);
      if (iVar3 == 0) {
        ar7 = *(int *)(ar4 + 0x244);
        FUN_8c033474(ar4,0xe,ar5,ar7);
      }
      *(uint *)(ar4 + 0x2f4) = *(uint *)(ar4 + 0x2f4) ^ 1;
      if (*(int *)(ar4 + 0x2f4) == 0) {
        iVar3 = ar4;
        uVar4 = libgcc_divide_helper_0101e4(*(undefined4 *)(ar4 + 0x2ec),4,ar4,ar7);
        iVar3 = libgcc_divide_helper_01031c(uVar4,9,iVar3,ar7);
        ar7 = 0;
        ar6 = -1;
        iVar3 = iVar3 + 0x2f;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar3,0xffffffff,0);
      }
      else {
        iVar3 = ar4;
        uVar4 = libgcc_divide_helper_0101e4(*(undefined4 *)(ar4 + 0x2ec),4,ar4,ar7);
        iVar3 = libgcc_divide_helper_01031c(uVar4,9,iVar3,ar7);
        ar7 = 0;
        ar6 = -1;
        iVar3 = iVar3 + 0x26;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar3,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,ar6,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 2:
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar3,ar6,ar7);
      if (iVar3 == 1) {
        *(undefined4 *)(ar4 + 300) = 0;
      }
      break;
    case 3:
      uVar5 = 0x10;
      uVar6 = 0;
      iVar3 = rand_range(ar4,0,0x10,ar7);
      if (iVar3 == 0) {
        ar7 = *(int *)(ar4 + 0x244);
        uVar6 = 0xe;
        FUN_8c033474(ar4,0xe,ar5,ar7);
        uVar5 = ar5;
      }
      *(uint *)(ar4 + 0x2f4) = *(uint *)(ar4 + 0x2f4) ^ 1;
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x2e4));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x2e4);
        dVar7 = 4.51450460004832e-312;
      }
      if (cVar14 == '\0') {
        fVar11 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar15 == '\0') {
        *(float *)(ar4 + 0x2e4) = fVar11;
        fVar11 = *(float *)(ar4 + 0x2e4);
      }
      else {
        *(undefined8 *)(ar4 + 0x2e4) = in_xd0;
      }
      uVar9 = 0x3f800000;
      if (fVar11 == 1.0) {
        FUN_8c0230f0(ar4 + 0x14,uVar6,uVar5,ar7,auStack_30);
        Vec3_ctor_xyz(auStack_40,uVar6,uVar5,ar7);
        FUN_8c022dac(auStack_30,auStack_40,uVar5,ar7);
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x224) = uVar9;
        }
        else {
          *(ulonglong *)(ar4 + 0x224) = CONCAT44(uVar9,fVar11);
        }
        Vec3_dtor(auStack_40,0xffffffff,uVar5,ar7);
        Vec3_dtor(auStack_30,0xffffffff,uVar5,ar7);
      }
      else {
        FUN_8c0230f0(ar4 + 0x14,uVar6,uVar5,ar7,auStack_50);
        Vec3_ctor_xyz(auStack_60,uVar6,uVar5,ar7);
        FUN_8c022dac(auStack_50,auStack_60,uVar5,ar7);
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x224) = uVar9;
        }
        else {
          *(ulonglong *)(ar4 + 0x224) = CONCAT44(uVar9,fVar11);
        }
        Vec3_dtor(auStack_60,0xffffffff,uVar5,ar7);
        Vec3_dtor(auStack_50,0xffffffff,uVar5,ar7);
      }
      ar7 = 0;
      ar6 = -1;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x18,0xffffffff,0);
      iVar2 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x18,ar6,ar7);
      iVar3 = 0x31;
      iVar1 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x31,ar6,ar7);
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44((float)iVar2,in_fr3);
      }
      else {
        dVar7 = (double)iVar2;
      }
      fVar10 = (float)((ulonglong)dVar7 >> 0x20);
      if (cVar14 == '\0') {
        bVar13 = fVar10 < 0.0;
      }
      else {
        bVar13 = dVar7 < (double)(ulonglong)(uint)fVar11;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar8 = (double)CONCAT44(0x4f800000,fVar11);
        }
        else {
          dVar8 = 8192.002426147461;
        }
        if (cVar14 == '\0') {
          dVar7 = (double)CONCAT44(fVar10 + (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar7,0));
        }
        else {
          dVar7 = dVar7 + dVar8;
        }
      }
      fVar11 = (float)iVar1;
      dVar8 = (double)(ulonglong)(uint)fVar11;
      if (cVar14 == '\0' && fVar11 < 0.0) {
        if (cVar15 == '\0') {
          dVar8 = (double)CONCAT44(0x4f800000,fVar11);
        }
        else {
          dVar8 = 8192.002426147461;
        }
        if (cVar14 == '\0') {
          fVar11 = (float)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)CONCAT44(fVar11,SUB84(dVar8,0) + fVar11);
        }
        else {
          dVar8 = dVar8 + dVar8;
        }
      }
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / SUB84(dVar8,0),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 / dVar8;
      }
      if (cVar15 == '\0') {
        in_dr0 = (double)CONCAT44(0x40c00000,SUB84(dVar8,0));
      }
      else {
        in_dr0 = -8.399316855946905e-251;
      }
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) *
                                 (float)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 * in_dr0;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x278) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x278) = dVar7;
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,ar6,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 4:
      CAnimBody_GetCurFrame(ar4 + 0xb0,iVar3,ar6,ar7,in_stack_fffffefc);
      dVar7 = in_dr0;
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
      }
      uVar5 = 0x18;
      iVar3 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x18,ar6,ar7);
      fVar11 = (float)iVar3;
      dVar12 = (double)CONCAT44(uVar4,fVar11);
      dVar8 = (double)((ulonglong)in_dr0 & 0xffffffff);
      if (cVar14 == '\0') {
        bVar13 = fVar11 < 0.0;
      }
      else {
        bVar13 = dVar12 < dVar8;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar8 = (double)CONCAT44(0x4f800000,SUB84(in_dr0,0));
        }
        else {
          dVar8 = 8192.002426147461;
        }
        if (cVar14 == '\0') {
          dVar12 = (double)CONCAT44(uVar4,fVar11 + (float)((ulonglong)dVar8 >> 0x20));
        }
        else {
          dVar12 = dVar12 + dVar8;
        }
      }
      if (cVar15 == '\0') {
        dVar8 = (double)CONCAT44(0x3f000000,SUB84(dVar8,0));
      }
      else {
        dVar8 = 524288.123046875;
      }
      if (cVar14 == '\0') {
        dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                                  SUB84(dVar12,0) * (float)((ulonglong)dVar8 >> 0x20));
      }
      else {
        dVar12 = dVar12 * dVar8;
      }
      if (cVar15 == '\0') {
        in_xd12 = (double)CONCAT44(SUB84(dVar12,0),0x41200000);
      }
      fVar11 = (float)((ulonglong)dVar7 >> 0x20);
      if (cVar14 == '\0') {
        fVar10 = (float)((ulonglong)in_xd12 >> 0x20) - SUB84(in_xd12,0);
        in_xd12 = (double)CONCAT44(fVar10,SUB84(in_xd12,0));
        bVar13 = fVar11 < fVar10;
      }
      else {
        in_xd12 = in_xd12 - in_xd12;
        bVar13 = dVar7 < in_xd12;
      }
      if (!bVar13) {
        if (cVar15 == '\0') {
          in_xd12 = (double)CONCAT44(0x41200000,SUB84(in_xd12,0));
        }
        else {
          in_xd12 = 134217760.5625;
        }
        if (cVar14 == '\0') {
          bVar13 = fVar11 < SUB84(dVar12,0) + (float)((ulonglong)in_xd12 >> 0x20);
        }
        else {
          bVar13 = dVar7 < dVar12 + in_xd12;
        }
        if (bVar13) {
          if (cVar15 == '\0') {
            in_xd12 = (double)((ulonglong)in_xd12 & 0xffffffff);
          }
          else {
            in_xd12 = *(double *)(ar4 + 0x278);
          }
          Vec3_set_xyz(auStack_6c,uVar5,ar6,ar7);
          FUN_8c023484(ar4 + 0x14,auStack_6c,ar6,ar7,auStack_7c);
          Vec3_assign(ar4 + 0x14,auStack_7c,ar6,ar7);
          Vec3_dtor(auStack_7c,0xffffffff,ar6,ar7);
          object_dtor_delete(auStack_6c,0xffffffff,ar6,ar7);
          Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
        }
      }
      uVar4 = SUB84(in_xd12,0);
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0x278,ar6,ar7);
      if (iVar3 == 1) {
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar4);
        }
        *(undefined4 *)(ar4 + 300) = 0;
      }
      break;
    case 5:
      ar7 = 0;
      ar6 = -1;
      uVar4 = 0x1e;
      iVar3 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1e,0xffffffff,0);
      if (iVar3 != 6) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6,ar7);
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      iVar3 = ar4;
    case 6:
      uVar4 = SUB84(in_dr0,0);
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar3,ar6,ar7);
      if (iVar3 == 1) {
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar4);
        }
        *(undefined4 *)(ar4 + 300) = 0;
      }
      break;
    case 7:
      ar7 = 0;
      uVar4 = 0xffffffff;
      iVar3 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1f,0xffffffff,0);
      if (iVar3 != 6) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,uVar4,ar7);
      }
      ar6 = *(int *)(ar4 + 300) + 1;
      *(int *)(ar4 + 300) = ar6;
    case 8:
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,ar6,ar7);
      if (iVar3 == 1) {
        *(undefined4 *)(ar4 + 300) = 0;
      }
      break;
    case 9:
      uVar6 = 0;
      uVar5 = 0xffffffff;
      uVar4 = 0x3f;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x3f,0xffffffff,0);
      if (*(int *)(ar4 + 0x128) == 3) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,uVar5,uVar6);
      }
      else {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,uVar6);
      }
      ar7 = *(int *)(ar4 + 300);
      ar6 = ar7 + 1;
      *(int *)(ar4 + 300) = ar6;
    case 10:
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0x278,ar6,ar7);
      if (iVar3 == 1) {
        *(undefined4 *)(ar4 + 300) = 0;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c05a54c\n.set _FUN_8c05a54c, _FUN_8c05a54c_def\n");
//@unit 8c05ae54
#include "../decls.h"
undefined4 FUN_8c05ae54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float in_fr1;
  float fVar3;
  double dVar4;
  undefined4 in_fr4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  float fStack_58;
  int iStack_54;
  undefined8 uStack_4c;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  Vec3_ctor_zero(auStack_18,ar5,ar6,ar7);
  FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_28);
  uVar2 = Vec3_length(auStack_28,ar5,ar6,ar7);
  Vec3_assign(auStack_18,uVar2,ar6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  if (cVar6 == '\0') {
    in_fr1 = *(float *)(ar4 + 0x2c);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2c);
  }
  if (cVar5 == '\0') {
    fStack_58 = in_fr1 + 1.0;
  }
  else {
    fStack_58 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
  }
  iStack_54 = ar4;
  if (cVar6 != '\0') {
    fStack_58 = (float)in_xd0;
    iStack_54 = (int)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar6 == '\0') {
    *(float *)(iStack_54 + 0x2c) = fStack_58;
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),fStack_58);
  }
  else {
    *(ulonglong *)(iStack_54 + 0x2c) = CONCAT44(iStack_54,fStack_58);
    in_xd0 = CONCAT44(iStack_54,fStack_58);
    dVar4 = *(double *)(ar4 + 0x38);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(in_fr4,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(fStack_58,in_fr4);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  uVar1 = in_xd0;
  if (cVar6 == '\0') {
    uStack_4c = CONCAT44((*(uint*)((uchar*)&uStack_4c+4)),fVar3);
    uVar1 = uStack_4c;
  }
  uStack_4c = uVar1;
  Vec3_scale(auStack_18,&uStack_4c,ar6,ar7,auStack_38);
  FUN_8c023aa0(ar4 + 0x14,auStack_38,ar6,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  Vec3_normalize(ar4 + 0x14,uVar2,ar6,ar7);
  Vec3_assign(ar4 + 0x14,(int)&uStack_4c + 4,ar6,ar7);
  Vec3_dtor((int)&uStack_4c + 4,0xffffffff,ar6,ar7);
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
  uVar2 = Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c05ae54\n.set _FUN_8c05ae54, _FUN_8c05ae54_def\n");
//@unit 8c05af78
#include "../decls.h"
undefined4 FUN_8c05af78_def(int ar4,double *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  code *ar5_00;
  double *pdVar3;
  ulonglong *ar5_01;
  undefined1 *puVar4;
  int ar6_00;
  float fVar5;
  float fVar6;
  double in_dr0;
  undefined4 uVar8;
  double dVar7;
  float fVar9;
  double in_dr14;
  double dVar10;
  double in_xd0;
  bool bVar11;
  bool bVar12;
  char cVar13;
  char cVar14;
  float fStack_39c;
  float fStack_398;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined8 uStack_34c;
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [12];
  undefined1 auStack_30c [16];
  undefined1 auStack_2fc [16];
  undefined1 auStack_2ec [16];
  undefined1 auStack_2dc [16];
  undefined1 auStack_2cc [16];
  undefined1 auStack_2bc [16];
  undefined1 auStack_2ac [16];
  undefined1 auStack_29c [16];
  undefined1 auStack_28c [16];
  undefined1 auStack_27c [16];
  undefined1 auStack_26c [12];
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [12];
  undefined1 auStack_244 [16];
  undefined1 auStack_234 [12];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [12];
  undefined1 auStack_1fc [16];
  undefined1 auStack_1ec [16];
  undefined1 auStack_1dc [16];
  undefined1 auStack_1cc [16];
  undefined1 auStack_1bc [16];
  undefined1 auStack_1ac [16];
  undefined1 auStack_19c [16];
  undefined1 auStack_18c [16];
  undefined1 auStack_17c [16];
  undefined1 auStack_16c [16];
  undefined1 auStack_15c [12];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [12];
  undefined1 auStack_134 [16];
  undefined1 auStack_124 [12];
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
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined8 uStack_24;
  
  cVar14 = '\0';
  cVar13 = '\0';
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  ar5_00 = Vec3_ctor_zero;
  Vec3_ctor_zero(auStack_38,Vec3_ctor_zero,ar6_00,ar7);
  Vec3_ctor_zero(auStack_48,ar5_00,ar6_00,ar7);
  Vec3_ctor_zero(auStack_58,ar5_00,ar6_00,ar7);
  pdVar3 = ar5;
  Vec3_ctor_copy(auStack_68,ar5,ar6_00,ar7);
  vec3_clear(ar4 + 0x200,pdVar3,ar6_00,ar7);
  *(undefined4 *)(ar4 + 0x304) = 0;
  ar5_01 = *(ulonglong **)(ar6 + 0x84);
  if ((ar5_01 != (ulonglong *)0x0) && ((*(byte *)(ar4 + 0x1fc) & 0x3f) >> 5 != 0)) {
    FUN_8c02f670(*(undefined4 *)(ar6 + 0x70),auStack_98,ar6_00,ar7,auStack_98);
    Vec3_assign(ar4 + 0x308,auStack_98,ar6_00,ar7);
    ar5_01 = (ulonglong *)0xffffffff;
    Vec3_dtor(auStack_98,0xffffffff,ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x318) = 1;
  }
  if ((*(int *)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1e) < 0)) {
    Vec3_assign(auStack_48,ar5,ar6_00,ar7);
    Vec3_assign(auStack_58,*(int *)(ar6 + 0x68) + 4,ar6_00,ar7);
    if (cVar14 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)(ar6 + 0x68) + 0x158));
    }
    Vec3_sub(auStack_48,auStack_58,ar6_00,ar7,auStack_a8);
    Vec3_assign(auStack_28,auStack_a8,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_a8,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(auStack_28,uVar2,ar6_00,ar7);
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (cVar14 == '\0') {
      in_dr0 = (double)CONCAT44(uVar2,*(undefined4 *)(ar4 + 0x48));
      dVar7 = in_xd0;
      uStack_364 = uVar2;
    }
    else {
      uStack_364 = SUB84(in_dr0,0);
      dVar7 = *(double *)(ar4 + 0x48);
      uStack_360 = uVar2;
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(in_dr0,0) + SUB84(in_dr14,0);
    }
    else {
      fVar5 = SUB84(in_dr0 + in_dr14,0);
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(uStack_364,fVar5);
    }
    else {
      dVar10 = (double)CONCAT44(uStack_360,uStack_364);
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar10 - dVar10,0);
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(0x3dcccccd,fVar5);
    }
    else {
      dVar10 = -7.93713999303812e-251;
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar10 * dVar10,0);
    }
    dVar10 = dVar7;
    if (cVar14 == '\0') {
      uStack_34c = (double)CONCAT44((*(uint*)((uchar*)&uStack_34c+4)),fVar5);
      dVar10 = uStack_34c;
    }
    uStack_34c = dVar10;
    dVar10 = uStack_34c;
    if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar10 = (double)(ulonglong)(uint)fVar5, cVar14 == '\0')
       ) {
      uStack_34c = (double)((ulonglong)uStack_34c & 0xffffffff00000000);
      dVar10 = uStack_34c;
    }
    uStack_34c = dVar10;
    dVar10 = (double)(ulonglong)(uint)fVar5;
    Vec3_length(auStack_28,ar4 + 0x48,ar6_00,ar7);
    Vec3_length_sq(ar4 + 4,Vec3_length_sq,ar6_00,ar7);
    in_xd0 = dVar10;
    if (cVar14 == '\0') {
      dVar10 = (double)((ulonglong)dVar10 >> 0x20);
      in_xd0 = dVar7;
    }
    fVar5 = SUB84(dVar10,0);
    if (cVar13 == '\0' && 0.0 < fVar5) {
      if (*(int *)(ar4 + 0x2b8) == 7) {
        Vec3_scale(ar4 + 0x14,&DAT_8c1365f4,ar6_00,ar7,auStack_b8);
        puVar4 = auStack_b8;
        Vec3_add(auStack_28,puVar4,ar6_00,ar7,auStack_c8);
        Vec3_normalize(auStack_c8,puVar4,ar6_00,ar7);
        Vec3_assign(auStack_28,auStack_d8,ar6_00,ar7);
        Vec3_dtor(auStack_d8,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_c8,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_b8,0xffffffff,ar6_00,ar7);
      }
      else {
        Vec3_scale(ar4 + 0x14,&DAT_8c1365f8,ar6_00,ar7,auStack_e8);
        puVar4 = auStack_e8;
        Vec3_add(auStack_28,puVar4,ar6_00,ar7,auStack_f8);
        Vec3_normalize(auStack_f8,puVar4,ar6_00,ar7);
        Vec3_assign(auStack_28,auStack_108,ar6_00,ar7);
        Vec3_dtor(auStack_108,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_f8,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_e8,0xffffffff,ar6_00,ar7);
      }
    }
    FUN_8c023bf4(auStack_28,&uStack_34c,ar6_00,ar7);
    in_dr0 = (double)(ulonglong)(uint)fVar5;
    dVar7 = in_dr0;
    if (cVar14 == '\0') {
      uStack_24 = (double)((ulonglong)(*(uint*)((uchar*)&uStack_24+4)) << 0x20);
      dVar7 = uStack_24;
    }
    uStack_24 = dVar7;
    Vec3_assign(ar4 + 0x200,auStack_28,ar6_00,ar7);
    if ((2 < *(int *)(ar4 + 0x128)) && (*(int *)(ar4 + 0x330) == 1)) {
      Vec3_sub(auStack_58,auStack_48,ar6_00,ar7,auStack_118);
      Vec3_ctor_copy(auStack_78,auStack_118,ar6_00,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_118,0xffffffff,ar6_00,ar7);
      Vec3_set_xyz(auStack_124,uVar2,ar6_00,ar7);
      FUN_8c023484(auStack_78,auStack_124,ar6_00,ar7,auStack_134);
      Vec3_assign(auStack_78,auStack_134,ar6_00,ar7);
      Vec3_dtor(auStack_134,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_124,0xffffffff,ar6_00,ar7);
      puVar4 = auStack_78;
      FUN_8c022d14(ar4 + 0x14,puVar4,ar6_00,ar7);
      dVar7 = in_dr0;
      if (cVar14 == '\0') {
        dVar7 = (double)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = in_xd0;
      }
      in_xd0 = in_dr0;
      in_dr0 = (double)((ulonglong)dVar7 & 0xffffffff);
      if (cVar13 == '\0' && 0.0 < SUB84(dVar7,0)) {
        Vec3_set_xyz(auStack_15c,puVar4,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_15c,ar6_00,ar7,auStack_16c);
        Vec3_assign(ar4 + 0x14,auStack_16c,ar6_00,ar7);
        Vec3_dtor(auStack_16c,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_15c,0xffffffff,ar6_00,ar7);
      }
      else {
        Vec3_set_xyz(auStack_140,puVar4,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_140,ar6_00,ar7,auStack_150);
        Vec3_assign(ar4 + 0x14,auStack_150,ar6_00,ar7);
        Vec3_dtor(auStack_150,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_140,0xffffffff,ar6_00,ar7);
        FUN_8c023bf4(auStack_78,&DAT_8c1365fc,ar6_00,ar7);
      }
      FUN_8c023bf4(ar4 + 0x200,&DAT_8c136600,ar6_00,ar7);
      Vec3_scale(auStack_78,&DAT_8c136604,ar6_00,ar7,auStack_17c);
      FUN_8c023aa0(ar4 + 0x200,auStack_17c,ar6_00,ar7);
      Vec3_dtor(auStack_17c,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7);
    }
    ar5_01 = (ulonglong *)0x1;
    *(undefined4 *)(ar4 + 0x304) = 1;
  }
  if ((*(int *)(ar6 + 100) != 0) && ((int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1d) < 0)) {
    iVar1 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x50),ar5_01,ar6_00,ar7);
    if ((iVar1 == 0xf) ||
       ((iVar1 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x50),ar5_01,ar6_00,ar7), iVar1 == 10 ||
        (iVar1 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x50),ar5_01,ar6_00,ar7), iVar1 == 0xd)))
       ) {
      Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
      uVar2 = Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
      return uVar2;
    }
    (**(code **)(*(int *)(*(int *)(ar6 + 0x50) + 8) + 0x170))
              (*(int *)(ar6 + 0x50),ar5_01,ar6_00,ar7);
    uStack_37c = SUB84(in_dr0,0);
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    if (cVar14 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),uVar2);
      dVar7 = (double)CONCAT44(0x3a83126f,uStack_37c);
      uStack_37c = uVar2;
    }
    else {
      dVar7 = 1.85086533838489e-311;
    }
    if (cVar13 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) + (float)((ulonglong)dVar7 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 + dVar7;
    }
    pdVar3 = ar5;
    Vec3_assign(auStack_48,ar5,ar6_00,ar7);
    FUN_8c02f670(*(undefined4 *)(ar6 + 0x50),pdVar3,ar6_00,ar7,auStack_18c);
    Vec3_assign(auStack_58,auStack_18c,ar6_00,ar7);
    Vec3_dtor(auStack_18c,0xffffffff,ar6_00,ar7);
    Vec3_sub(auStack_48,auStack_58,ar6_00,ar7,auStack_19c);
    Vec3_assign(auStack_28,auStack_19c,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_19c,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(auStack_28,uVar2,ar6_00,ar7);
    uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (cVar14 == '\0') {
      dVar7 = (double)CONCAT44(uVar8,*(undefined4 *)(ar4 + 0x48));
      uStack_380 = uVar8;
    }
    else {
      uStack_380 = SUB84(dVar7,0);
      in_xd0 = *(double *)(ar4 + 0x48);
      uStack_37c = uVar8;
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar7,0) + SUB84(in_dr14,0);
    }
    else {
      fVar5 = SUB84(dVar7 + in_dr14,0);
    }
    if (cVar14 == '\0') {
      dVar7 = (double)CONCAT44(uStack_380,fVar5);
    }
    else {
      dVar7 = (double)CONCAT44(uStack_37c,uStack_380);
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar14 == '\0') {
      dVar7 = (double)CONCAT44(0x3dcccccd,fVar5);
    }
    else {
      dVar7 = -7.93713999303812e-251;
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    dVar7 = in_xd0;
    if (cVar14 == '\0') {
      uStack_34c = (double)CONCAT44((*(uint*)((uchar*)&uStack_34c+4)),fVar5);
      dVar7 = uStack_34c;
    }
    uStack_34c = dVar7;
    dVar7 = uStack_34c;
    if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar7 = (double)(ulonglong)(uint)fVar5, cVar14 == '\0'))
    {
      uStack_34c = (double)((ulonglong)uStack_34c & 0xffffffff00000000);
      dVar7 = uStack_34c;
    }
    uStack_34c = dVar7;
    dVar7 = (double)(ulonglong)(uint)fVar5;
    Vec3_length(auStack_28,uVar2,ar6_00,ar7);
    FUN_8c023bf4(auStack_28,&uStack_34c,ar6_00,ar7);
    dVar10 = uStack_24;
    if (((*(int *)(ar4 + 0x124) != 0xf) && (*(int *)(ar4 + 0x124) != 0xf)) &&
       (dVar7 = (double)((ulonglong)dVar7 & 0xffffffff), dVar10 = dVar7, cVar14 == '\0')) {
      uStack_24 = (double)((ulonglong)uStack_24 & 0xffffffff00000000);
      dVar10 = uStack_24;
    }
    uStack_24 = dVar10;
    puVar4 = auStack_28;
    FUN_8c023aa0(ar4 + 0x200,puVar4,ar6_00,ar7);
    (**(code **)(*(int *)(*(int *)(ar6 + 0x50) + 8) + 0x13c))
              (*(int *)(ar6 + 0x50),puVar4,ar6_00,ar7);
    Vec3_assign(auStack_38,auStack_1ac,ar6_00,ar7);
    Vec3_dtor(auStack_1ac,0xffffffff,ar6_00,ar7);
    FUN_8c0230f0(ar4 + 0x200,0x200,ar6_00,ar7,auStack_1bc);
    FUN_8c0230f0(auStack_38,FUN_8c0230f0,ar6_00,ar7,auStack_1cc);
    FUN_8c022dac(auStack_1bc,auStack_1cc,ar6_00,ar7);
    fStack_398 = (float)((ulonglong)dVar7 >> 0x20);
    if (cVar14 == '\0') {
      fVar5 = 5.0;
      dVar7 = in_xd0;
    }
    else {
      fStack_398 = 5.0;
      fVar5 = 6.55808e-43;
    }
    bVar12 = cVar13 == '\0';
    bVar11 = fStack_398 < fVar5;
    Vec3_dtor(auStack_1cc,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_1bc,0xffffffff,ar6_00,ar7);
    if (bVar12 && bVar11) {
      Vec3_sub(auStack_48,auStack_58,ar6_00,ar7,auStack_1dc);
      Vec3_assign(auStack_28,auStack_1dc,ar6_00,ar7);
      Vec3_dtor(auStack_1dc,0xffffffff,ar6_00,ar7);
      FUN_8c0230f0(ar4 + 0x200,ar4 + 0x200,ar6_00,ar7,auStack_1ec);
      FUN_8c0230f0(auStack_28,auStack_28,ar6_00,ar7,auStack_1fc);
      fVar6 = fStack_398;
      fStack_398 = fVar5;
      FUN_8c022dac(auStack_1ec,auStack_1fc,ar6_00,ar7);
      if (cVar14 == '\0') {
        fVar5 = 5.0;
      }
      else {
        dVar7 = (double)CONCAT44(fStack_398,fVar6);
        fStack_398 = 5.0;
        fVar5 = 6.55808e-43;
      }
      bVar12 = cVar13 == '\0';
      bVar11 = fStack_398 < fVar5;
      Vec3_dtor(auStack_1fc,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_1ec,0xffffffff,ar6_00,ar7);
      if (bVar12 && bVar11) {
        Vec3_set_xyz(auStack_208,Vec3_set_xyz,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x200,auStack_208,ar6_00,ar7,auStack_218);
        Vec3_assign(ar4 + 0x200,auStack_218,ar6_00,ar7);
        Vec3_dtor(auStack_218,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_208,0xffffffff,ar6_00,ar7);
      }
    }
    if ((2 < *(int *)(ar4 + 0x128)) && (*(int *)(ar4 + 0x330) == 1)) {
      Vec3_sub(auStack_58,auStack_48,ar6_00,ar7,auStack_228);
      fVar6 = fStack_398;
      fStack_398 = fVar5;
      Vec3_ctor_copy(auStack_88,auStack_228,ar6_00,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_228,0xffffffff,ar6_00,ar7);
      Vec3_set_xyz(auStack_234,uVar2,ar6_00,ar7);
      FUN_8c023484(auStack_88,auStack_234,ar6_00,ar7,auStack_244);
      Vec3_assign(auStack_88,auStack_244,ar6_00,ar7);
      Vec3_dtor(auStack_244,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_234,0xffffffff,ar6_00,ar7);
      FUN_8c022d14(ar4 + 0x14,auStack_88,ar6_00,ar7);
      if (cVar14 != '\0') {
        dVar7 = (double)CONCAT44(fStack_398,fVar6);
        fStack_398 = fVar6;
      }
      fVar5 = 0.0;
      if (cVar13 == '\0' && 0.0 < fStack_398) {
        Vec3_set_xyz(auStack_26c,auStack_26c,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_26c,ar6_00,ar7,auStack_27c);
        Vec3_assign(ar4 + 0x14,auStack_27c,ar6_00,ar7);
        Vec3_dtor(auStack_27c,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_26c,0xffffffff,ar6_00,ar7);
      }
      else {
        Vec3_set_xyz(auStack_250,auStack_250,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_250,ar6_00,ar7,auStack_260);
        Vec3_assign(ar4 + 0x14,auStack_260,ar6_00,ar7);
        Vec3_dtor(auStack_260,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_250,0xffffffff,ar6_00,ar7);
        FUN_8c023bf4(auStack_88,&DAT_8c136608,ar6_00,ar7);
      }
      FUN_8c023bf4(ar4 + 0x200,&DAT_8c13660c,ar6_00,ar7);
      Vec3_scale(auStack_88,&DAT_8c136610,ar6_00,ar7,auStack_28c);
      FUN_8c023aa0(ar4 + 0x200,auStack_28c,ar6_00,ar7);
      Vec3_dtor(auStack_28c,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_88,0xffffffff,ar6_00,ar7);
    }
    uVar2 = 0x304;
    *(undefined4 *)(ar4 + 0x304) = 1;
    if (*(int *)(ar6 + 0x58) == 0) {
      Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
      uVar2 = Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
      return uVar2;
    }
    iVar1 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x58),0x304,ar6_00,ar7);
    if ((iVar1 == 0xf) ||
       (iVar1 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x58),uVar2,ar6_00,ar7), iVar1 == 10)) {
      Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
      uVar2 = Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
      return uVar2;
    }
    (**(code **)(*(int *)(*(int *)(ar6 + 0x58) + 8) + 0x170))(*(int *)(ar6 + 0x58),iVar1,ar6_00,ar7)
    ;
    if (cVar14 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar5);
      dVar10 = (double)CONCAT44(0x3a83126f,fStack_398);
      fStack_398 = fVar5;
    }
    else {
      dVar10 = 1.85086533838489e-311;
    }
    if (cVar13 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) + (float)((ulonglong)dVar10 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 + dVar10;
    }
    Vec3_assign(auStack_48,ar5,ar6_00,ar7);
    FUN_8c02f670(*(undefined4 *)(ar6 + 0x58),(undefined4 *)(ar6 + 0x58),ar6_00,ar7,auStack_29c);
    Vec3_assign(auStack_58,auStack_29c,ar6_00,ar7);
    Vec3_dtor(auStack_29c,0xffffffff,ar6_00,ar7);
    Vec3_sub(auStack_48,auStack_58,ar6_00,ar7,auStack_2ac);
    Vec3_assign(auStack_28,auStack_2ac,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_2ac,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(auStack_28,uVar2,ar6_00,ar7);
    fVar5 = (float)((ulonglong)dVar10 >> 0x20);
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(fVar5,*(undefined4 *)(ar4 + 0x48));
      fStack_39c = fVar5;
    }
    else {
      fStack_39c = SUB84(dVar10,0);
      dVar7 = *(double *)(ar4 + 0x48);
      fStack_398 = fVar5;
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar10,0) + SUB84(in_dr14,0);
    }
    else {
      fVar5 = SUB84(dVar10 + in_dr14,0);
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(fStack_39c,fVar5);
    }
    else {
      dVar10 = (double)CONCAT44(fStack_398,fStack_39c);
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar10 - dVar10,0);
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(0x3dcccccd,fVar5);
    }
    else {
      dVar10 = -7.93713999303812e-251;
    }
    if (cVar13 == '\0') {
      fVar5 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar10 * dVar10,0);
    }
    if (cVar14 == '\0') {
      uStack_34c = (double)CONCAT44((*(uint*)((uchar*)&uStack_34c+4)),fVar5);
      dVar7 = uStack_34c;
    }
    uStack_34c = dVar7;
    dVar7 = uStack_34c;
    if ((cVar13 == '\0' && fVar5 < 0.0) && (dVar7 = (double)(ulonglong)(uint)fVar5, cVar14 == '\0'))
    {
      uStack_34c = (double)((ulonglong)uStack_34c & 0xffffffff00000000);
      dVar7 = uStack_34c;
    }
    uStack_34c = dVar7;
    Vec3_length(auStack_28,uVar2,ar6_00,ar7);
    FUN_8c023bf4(auStack_28,&uStack_34c,ar6_00,ar7);
    dVar10 = (double)(ulonglong)(uint)fVar5;
    dVar7 = dVar10;
    if (cVar14 == '\0') {
      uStack_24 = (double)((ulonglong)uStack_24 & 0xffffffff00000000);
      dVar7 = uStack_24;
    }
    uStack_24 = dVar7;
    puVar4 = auStack_28;
    FUN_8c023aa0(ar4 + 0x200,puVar4,ar6_00,ar7);
    fVar5 = (float)((ulonglong)dVar10 >> 0x20);
    (**(code **)(*(int *)(*(int *)(ar6 + 0x50) + 8) + 0x13c))
              (*(int *)(ar6 + 0x50),puVar4,ar6_00,ar7);
    Vec3_assign(auStack_38,auStack_2bc,ar6_00,ar7);
    Vec3_dtor(auStack_2bc,0xffffffff,ar6_00,ar7);
    iVar1 = ar4 + 0x200;
    FUN_8c0230f0(iVar1,iVar1,ar6_00,ar7,auStack_2cc);
    FUN_8c0230f0(auStack_38,iVar1,ar6_00,ar7,auStack_2dc);
    FUN_8c022dac(auStack_2cc,auStack_2dc,ar6_00,ar7);
    if (cVar14 == '\0') {
      fVar6 = 5.0;
    }
    else {
      fVar5 = 5.0;
      fVar6 = 2.74654e-43;
    }
    bVar12 = cVar13 == '\0';
    bVar11 = fVar5 < fVar6;
    Vec3_dtor(auStack_2dc,0xffffffff,ar6_00,ar7);
    ar5_01 = (ulonglong *)0xffffffff;
    Vec3_dtor(auStack_2cc,0xffffffff,ar6_00,ar7);
    if (bVar12 && bVar11) {
      Vec3_sub(auStack_48,auStack_58,ar6_00,ar7,auStack_2ec);
      Vec3_assign(auStack_28,auStack_2ec,ar6_00,ar7);
      Vec3_dtor(auStack_2ec,0xffffffff,ar6_00,ar7);
      FUN_8c0230f0(ar4 + 0x200,FUN_8c0230f0,ar6_00,ar7,auStack_2fc);
      FUN_8c0230f0(auStack_28,FUN_8c0230f0,ar6_00,ar7,auStack_30c);
      FUN_8c022dac(auStack_2fc,auStack_30c,ar6_00,ar7);
      if (cVar14 == '\0') {
        fVar5 = 5.0;
      }
      else {
        fVar6 = 5.0;
        fVar5 = 2.74654e-43;
      }
      bVar12 = cVar13 == '\0';
      Vec3_dtor(auStack_30c,0xffffffff,ar6_00,ar7);
      ar5_01 = (ulonglong *)0xffffffff;
      Vec3_dtor(auStack_2fc,0xffffffff,ar6_00,ar7);
      if (bVar12 && fVar6 < fVar5) {
        Vec3_set_xyz(auStack_318,ar5_01,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x200,auStack_318,ar6_00,ar7,auStack_328);
        Vec3_assign(ar4 + 0x200,auStack_328,ar6_00,ar7);
        Vec3_dtor(auStack_328,0xffffffff,ar6_00,ar7);
        ar5_01 = (ulonglong *)0xffffffff;
        object_dtor_delete(auStack_318,0xffffffff,ar6_00,ar7);
      }
    }
    *(undefined4 *)(ar4 + 0x304) = 1;
  }
  if (2 < *(int *)(ar4 + 0x128)) {
    if (cVar14 == '\0') {
      dVar7 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar7 = 7.67384666056308e+21;
    }
    if (cVar13 == '\0') {
      fVar5 = (float)((ulonglong)dVar7 >> 0x20);
      dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) * fVar5);
    }
    else {
      dVar7 = dVar7 * dVar7;
    }
    if (cVar14 == '\0') {
      dVar10 = (double)CONCAT44(0x447a0000,SUB84(in_dr14,0));
    }
    else {
      dVar10 = -7.933010971859645e-251;
    }
    if (cVar13 == '\0') {
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) - SUB84(dVar7,0),SUB84(dVar10,0))
      ;
    }
    else {
      dVar10 = dVar10 - dVar7;
    }
    if (cVar14 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)ar5,SUB84(dVar7,0));
    }
    else {
      dVar7 = *ar5;
    }
    fVar5 = (float)((ulonglong)dVar10 >> 0x20);
    if (cVar13 == '\0') {
      bVar12 = fVar5 < (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      bVar12 = dVar10 < dVar7;
    }
    if (!bVar12) {
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x200),*(undefined4 *)ar5);
      }
      else {
        dVar7 = *(double *)(ar4 + 0x200);
      }
      if (cVar13 == '\0') {
        fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar14 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar6);
      }
      else {
        dVar7 = *(double *)(ar4 + 0x48);
      }
      if (cVar13 == '\0') {
        fVar9 = (float)((ulonglong)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7,0) + fVar9;
        dVar7 = (double)CONCAT44(fVar9,fVar6);
        bVar12 = fVar6 < fVar5;
      }
      else {
        dVar7 = dVar7 + dVar7;
        bVar12 = dVar7 < dVar10;
      }
      if (!bVar12) {
        ar5_01 = (ulonglong *)(ar4 + 0x200);
        if (cVar14 == '\0') {
          *(undefined4 *)ar5_01 = 0;
        }
        else {
          *ar5_01 = (ulonglong)dVar7 & 0xffffffff;
        }
      }
    }
  }
  Vec3_ctor_xyz(auStack_338,ar5_01,ar6_00,ar7);
  iVar1 = FUN_8c023d04(ar4 + 0x200,auStack_338,ar6_00,ar7);
  Vec3_dtor(auStack_338,0xffffffff,ar6_00,ar7);
  if (iVar1 != 0) {
    FUN_8c032ab0(ar4,iVar1,ar6_00,ar7);
    FUN_8c032ab0(ar4,iVar1,ar6_00,ar7);
    Vec3_ctor_xyz((int)&uStack_34c + 4,(int)&uStack_34c + 4,ar6_00,ar7);
    FUN_8c023aa0(ar4 + 0x200,(int)&uStack_34c + 4,ar6_00,ar7);
    Vec3_dtor((int)&uStack_34c + 4,0xffffffff,ar6_00,ar7);
  }
  Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
  uVar2 = Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c05af78\n.set _FUN_8c05af78, _FUN_8c05af78_def\n");
//@unit 8c05c258
#include "../decls.h"
undefined4 FUN_8c05c258_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_ctor_xyz(s0,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c05c258\n.set _FUN_8c05c258, _FUN_8c05c258_def\n");
//@unit 8c05c27c
#include "../decls.h"
undefined4 ret_const_3f800000_05c27c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _ret_const_3f800000_05c27c\n.set _ret_const_3f800000_05c27c, _ret_const_3f800000_05c27c_def\n");
//@unit 8c05c284
#include "../decls.h"
undefined4 get_field_24_05c284_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x24);
}

__asm__(".globl _get_field_24_05c284\n.set _get_field_24_05c284, _get_field_24_05c284_def\n");
//@unit 8c05c28c
#include "../decls.h"
undefined4 FUN_8c05c28c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 in_dr0;
  double dVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  double in_dr12;
  undefined4 uVar9;
  double in_dr14;
  undefined8 in_xd0;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff94;
  undefined8 uStack_30;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar2 = 1;
  Vec3_ctor_xyz((int)&uStack_30 + 4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x2b8) == 2) {
    uVar2 = 0;
    goto LAB_8c05c608;
  }
  CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,in_stack_ffffff94);
  if (cVar12 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
  }
  iVar1 = *(int *)(ar4 + 0x128);
  uVar8 = (undefined4)in_dr0;
  uVar9 = SUB84(in_dr14,0);
  if (iVar1 == 1) {
    if (cVar12 == '\0') {
      in_dr14 = (double)CONCAT44(0x41980000,uVar9);
      in_dr12 = 33554440.21484375;
      in_dr0 = CONCAT44(0x41d80000,uVar8);
      uStack_30 = (double)CONCAT44((*(uint*)((uchar*)&uStack_30+4)),0x41d80000);
    }
    else {
      in_dr14 = 402653249.59375;
      in_dr12 = 1610612998.0;
      in_dr0 = 0xfe08c70541d80000;
      uStack_30 = -1.296348781552367e+299;
    }
  }
  else if (iVar1 == 2) {
    if (cVar12 == '\0') {
      in_dr14 = (double)CONCAT44(0x41300000,uVar9);
      in_dr12 = 1048576.2567138672;
      in_dr0 = CONCAT44(0x41b80000,uVar8);
      uStack_30 = (double)CONCAT44((*(uint*)((uchar*)&uStack_30+4)),0x41b80000);
    }
    else {
      in_dr14 = 402653249.1875;
      in_dr12 = 402653249.1875;
      in_dr0 = 0xfe08c70541b80000;
      uStack_30 = -1.2963487811625545e+299;
    }
  }
  else if (iVar1 == 3) {
    if (cVar12 == '\0') {
      in_dr14 = (double)CONCAT44(0x41700000,uVar9);
      in_dr12 = 4294968348.5;
      in_dr0 = CONCAT44(0x42200000,uVar8);
      uStack_30 = (double)CONCAT44((*(uint*)((uchar*)&uStack_30+4)),0x42200000);
    }
    else {
      in_dr14 = 805306498.875;
      in_dr12 = 34359746808.0;
      in_dr0 = 0xfe08c70f42200000;
      uStack_30 = -1.2963567657906834e+299;
    }
  }
  else if (iVar1 == 4) {
    if (cVar12 == '\0') {
      in_dr14 = (double)CONCAT44(0x41600000,uVar9);
      in_dr12 = 15032387641.0;
      in_dr0 = CONCAT44(0x42280000,uVar8);
      uStack_30 = (double)CONCAT44((*(uint*)((uchar*)&uStack_30+4)),0x42280000);
    }
    else {
      in_dr14 = 805306498.75;
      in_dr12 = 51539616006.0;
      in_dr0 = 0x12842280000;
      uStack_30 = 6.28659126329025e-312;
    }
  }
  uVar8 = (undefined4)in_dr0;
  if (*(int *)(ar4 + 0x128) < 3) {
    iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
    fVar4 = SUB84(in_dr14,0);
    if (iVar1 == 5) {
      if (cVar11 == '\0' && (float)((ulonglong)in_dr14 >> 0x20) < fVar4) {
        if (cVar11 == '\0') {
          bVar10 = fVar4 < SUB84(in_dr12,0);
        }
        else {
          bVar10 = in_dr14 < in_dr12;
        }
        if (bVar10) {
          if (cVar12 == '\0') {
            dVar5 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar5 = 7.498589249951456e+86;
          }
          if (cVar11 == '\0') {
            fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 0x28) = fVar4;
            uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = in_xd0;
            uVar7 = *(undefined8 *)(ar4 + 0x24);
          }
          if (cVar11 == '\0' && (float)((ulonglong)uVar7 >> 0x20) < (float)uVar7) {
            if (cVar12 == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar5 = -4.794955196358332e-255;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
        fVar4 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      if (cVar11 == '\0' && fVar4 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
      }
    }
    else if (iVar1 == 6) {
      if (cVar11 == '\0') {
        bVar10 = (float)((ulonglong)in_dr12 >> 0x20) < fVar4;
      }
      else {
        bVar10 = in_dr12 < in_dr14;
      }
      if (bVar10) {
        dVar5 = uStack_30;
        if (cVar12 == '\0') {
          dVar5 = (double)CONCAT44((undefined4)uStack_30,uVar8);
        }
        if (cVar11 == '\0') {
          bVar10 = fVar4 < (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          bVar10 = in_dr14 < dVar5;
        }
        if (bVar10) {
          if (cVar12 == '\0') {
            dVar5 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar5 = 6.876925718751272e+86;
          }
          if (cVar11 == '\0') {
            fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 0x28) = fVar4;
            uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = in_xd0;
            uVar7 = *(undefined8 *)(ar4 + 0x24);
          }
          if (cVar11 == '\0' && (float)((ulonglong)uVar7 >> 0x20) < (float)uVar7) {
            if (cVar12 == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar5 = 6.566093943887814e+86;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
        fVar4 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      if (cVar11 == '\0' && fVar4 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar5 = 1.0035827136752305e+178;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
    }
  }
  else {
    iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 6) {
      fVar4 = SUB84(in_dr14,0);
      if (cVar11 != '\0' || fVar4 <= (float)((ulonglong)in_dr14 >> 0x20)) {
LAB_8c05c538:
        if (cVar12 == '\0') {
          dVar5 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar5 = 1.3411048210842936e-08;
        }
        if (cVar11 == '\0') {
          fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 0x28) = fVar3;
          fVar3 = *(float *)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        uVar6 = (ulonglong)(uint)fVar3;
        if (cVar11 == '\0' && fVar3 < 0.0) {
          uVar6 = (ulonglong)(uint)fVar3;
          if (cVar12 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = uVar6;
          }
        }
      }
      else {
        if (cVar11 == '\0') {
          bVar10 = fVar4 < SUB84(in_dr12,0);
        }
        else {
          bVar10 = in_dr14 < in_dr12;
        }
        if (!bVar10) goto LAB_8c05c538;
        if (cVar12 == '\0') {
          dVar5 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar5 = 5.944430421950997e+86;
        }
        if (cVar11 == '\0') {
          fVar3 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 + dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 0x28) = fVar3;
          uVar6 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          uVar6 = *(ulonglong *)(ar4 + 0x24);
        }
        if (cVar11 == '\0' && (float)(uVar6 >> 0x20) < (float)uVar6) {
          if (cVar12 == '\0') {
            uVar8 = *(undefined4 *)(ar4 + 0x24);
            uVar6 = CONCAT44(uVar8,(float)uVar6);
            *(undefined4 *)(ar4 + 0x28) = uVar8;
          }
          else {
            uVar6 = *(ulonglong *)(ar4 + 0x24);
            *(ulonglong *)(ar4 + 0x28) = uVar6;
          }
        }
      }
      if (cVar11 == '\0') {
        bVar10 = (float)((ulonglong)in_dr12 >> 0x20) < fVar4;
      }
      else {
        bVar10 = in_dr12 < in_dr14;
      }
      if (bVar10) {
        dVar5 = uStack_30;
        if (cVar12 == '\0') {
          dVar5 = (double)CONCAT44((undefined4)uStack_30,(int)uVar6);
        }
        if (cVar11 == '\0') {
          bVar10 = fVar4 < (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          bVar10 = in_dr14 < dVar5;
        }
        if (bVar10) {
          if (cVar12 == '\0') {
            dVar5 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar5 = 5.322766890750813e+86;
          }
          if (cVar11 == '\0') {
            fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 0x28) = fVar4;
            uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = in_xd0;
            uVar7 = *(undefined8 *)(ar4 + 0x24);
          }
          if (cVar11 == '\0' && (float)((ulonglong)uVar7 >> 0x20) < (float)uVar7) {
            if (cVar12 == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar5 = 6.545756141680556e+163;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
        fVar4 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      if (cVar11 == '\0' && fVar4 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar5 = 3.73996784729797e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
    }
  }
LAB_8c05c5ec:
  iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(ar4 + 0x2b8) = 2;
    uVar2 = 0;
  }
LAB_8c05c608:
  Vec3_dtor((int)&uStack_30 + 4,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c05c28c\n.set _FUN_8c05c28c, _FUN_8c05c28c_def\n");
//@unit 8c05c640
#include "../decls.h"
undefined4 FUN_8c05c640_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double in_dr0;
  float fVar9;
  double dVar8;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffffa4;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar6 = 1;
  if (*(int *)(ar4 + 0x31c) < 1) {
    if (*(int *)(ar4 + 0x324) == 0) {
      iVar1 = *(int *)(ar4 + 300);
      if ((iVar1 < 5) && (-1 < iVar1)) {
                    
        switch(iVar1) {
        case 0:
          uVar2 = ar5;
          iVar1 = ar6;
          iVar3 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
          fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
          if (iVar3 == 0x11) {
            CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,iVar1,ar7,in_stack_ffffffa4);
            if (cVar11 == '\0') {
              fVar9 = 190.0;
            }
            else {
              fVar7 = 190.0;
              fVar9 = 9.75304e-43;
            }
            if (cVar10 != '\0' || fVar7 <= fVar9) {
              *(undefined4 *)(ar4 + 0x2b8) = 3;
              *(undefined4 *)(ar4 + 300) = 3;
              return 1;
            }
          }
          if (ar6 == 1) {
            iVar1 = FUN_8c057164(ar4,ar5,iVar1,ar7);
            if (iVar1 == 0) {
              *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            }
          }
          else {
            iVar1 = FUN_8c05c28c(ar4,uVar2,iVar1,ar7);
            if (iVar1 == 0) {
              *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            }
          }
          break;
        case 1:
          *(undefined4 *)(ar4 + 0x214) = 0;
          *(undefined4 *)(ar4 + 0x178) = 1;
          iVar3 = ar4 + 0x34c;
          iVar1 = FUN_8c055c38(ar4,ar5,iVar3,ar6);
          if (iVar1 == 0) {
            *(undefined4 *)(ar4 + 0x178) = 0;
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            *(undefined4 *)(ar4 + 0x40) = 5;
            Vec3_assign(ar4 + 0x248,ar5,iVar3,ar6);
            FUN_8c032ab0(ar4,ar5,iVar3,ar6);
            if (cVar11 == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x48)
                                       );
            }
            else {
              in_xd0 = *(undefined8 *)(ar4 + 0x48);
            }
            if (cVar10 == '\0') {
              fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
              in_dr0 = (double)CONCAT44(fVar7,SUB84(in_dr0,0) * fVar7);
            }
            else {
              in_dr0 = in_dr0 * in_dr0;
            }
            if (cVar11 == '\0') {
              *(int *)(ar4 + 0x248) = SUB84(in_dr0,0);
            }
            else {
              *(undefined8 *)(ar4 + 0x248) = in_xd0;
            }
            FUN_8c032ab0(ar4,ar5,iVar3,ar6);
            if (cVar11 == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x48)
                                       );
            }
            if (cVar10 == '\0') {
              fVar7 = SUB84(in_dr0,0) * (float)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              fVar7 = SUB84(in_dr0 * in_dr0,0);
            }
            if (cVar11 == '\0') {
              dVar8 = (double)CONCAT44(0x44bb8000,fVar7);
            }
            else {
              dVar8 = -1.1449929295928696e+164;
            }
            if (cVar10 == '\0') {
              dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar8,0),
                                       SUB84(dVar8,0));
            }
            else {
              dVar8 = dVar8 - dVar8;
            }
            if (cVar11 == '\0') {
              *(int *)(ar4 + 0x250) = (int)((ulonglong)dVar8 >> 0x20);
            }
            else {
              *(double *)(ar4 + 0x250) = dVar8;
            }
          }
          break;
        case 2:
          *(undefined4 *)(ar4 + 700) = 0xffffffff;
          iVar1 = FUN_8c04c314(ar4,ar5,ar4 + 0x248,ar7);
          if (iVar1 == 0) {
            *(undefined4 *)(ar4 + 700) = 0;
            iVar1 = rand_range(ar4,0,10,ar7);
            if (iVar1 < 5) {
              uVar5 = 0;
              uVar4 = 0xffffffff;
              uVar2 = 0x1e;
              iVar1 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1e,0xffffffff,0);
              if (iVar1 != 6) {
                s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,uVar5);
              }
              *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
            }
            else {
              uVar5 = 0;
              uVar4 = 0xffffffff;
              uVar2 = 0x11;
              iVar1 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0);
              if (iVar1 != 6) {
                s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,uVar5);
              }
              *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            }
            *(undefined4 *)(ar4 + 0x2b8) = 3;
          }
          break;
        case 3:
          iVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7);
          if (iVar1 == 7) {
            *(undefined4 *)(ar4 + 300) = 0;
            uVar6 = 0;
          }
          break;
        case 4:
          iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7);
          if (iVar1 == 1) {
            *(undefined4 *)(ar4 + 300) = 0;
            *(undefined4 *)(ar4 + 0x2b8) = 2;
            uVar6 = 0;
          }
        }
      }
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

__asm__(".globl _FUN_8c05c640\n.set _FUN_8c05c640, _FUN_8c05c640_def\n");
//@unit 8c05c9fc
#include "../decls.h"
undefined4 FUN_8c05c9fc_def(int ar4,undefined1 *ar5,undefined1 *ar6,code *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  code *ar5_00;
  undefined4 *puVar4;
  undefined4 a5;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  float fVar8;
  uint uVar9;
  double dVar10;
  undefined4 uVar12;
  double dVar11;
  float fVar13;
  undefined4 in_fr3;
  undefined8 in_xd0;
  char cVar14;
  char cVar15;
  undefined1 auStack_11c [16];
  undefined1 auStack_10c [12];
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
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  undefined4 uStack_10;
  
  cVar15 = '\0';
  cVar14 = '\0';
  uStack_10 = 1;
  uVar7 = 1;
  ar5_00 = Vec3_ctor_zero;
  puVar6 = ar6;
  Vec3_ctor_zero(auStack_24,Vec3_ctor_zero,ar6,ar7);
  Vec3_ctor_zero(auStack_34,ar5_00,ar6,ar7);
  Vec3_ctor_zero((int)&uStack_48 + 4,ar5_00,ar6,ar7);
  puVar4 = &DAT_8c125bf0;
  FUN_8c03f460(auStack_50,&DAT_8c125bf0,ar6,ar7);
  if (cVar15 == '\0') {
    dVar10 = 2.597301565578305e+22;
  }
  else {
    in_xd0 = 0;
    dVar10 = 6.62631198776065e-312;
  }
  if (cVar14 == '\0') {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) - SUB84(dVar10,0),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 - dVar10;
  }
  dVar11 = dVar10;
  if (cVar15 == '\0') {
    uStack_48 = (double)CONCAT44((*(uint*)((uchar*)&uStack_48+4)),(int)((ulonglong)dVar10 >> 0x20));
    dVar11 = uStack_48;
  }
  uStack_48 = dVar11;
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    iVar1 = FUN_8c05c28c(ar4,FUN_8c05c28c,ar6,ar7);
    if (iVar1 == 0) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
      uVar5 = *(undefined4 *)(ar4 + 0x244);
      if (cVar15 == '\0') {
        uVar2 = SUB84(dVar10,0);
        uVar12 = 0x40000000;
      }
      else {
        uVar2 = 0x40000000;
        uVar12 = 0x43b40000;
      }
      ar6 = auStack_50;
      FUN_8c032518(ar4,ar5,ar6,uVar5);
      Vec3_assign(ar4 + 0x54,auStack_60,ar6,uVar5);
      a5 = 0xffffffff;
      Vec3_dtor(auStack_60,0xffffffff,ar6,uVar5);
      (**(code **)(**(int **)(ar4 + 0x244) + 0x184))(*(int **)(ar4 + 0x244),a5,ar6,uVar5);
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),uVar12);
      }
      else {
        in_xd0 = CONCAT44(uVar12,uVar2);
        dVar10 = *(double *)(ar4 + 0x48);
      }
      if (cVar14 == '\0') {
        fVar8 = (float)((ulonglong)dVar10 >> 0x20);
        dVar10 = (double)CONCAT44(fVar8,SUB84(dVar10,0) - fVar8);
      }
      else {
        dVar10 = dVar10 - dVar10;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x58) = SUB84(dVar10,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x58) = in_xd0;
      }
      Vec3_sub(ar4 + 0x54,ar5,ar6,uVar5,auStack_70);
      Vec3_normalize(auStack_70,Vec3_normalize,ar6,uVar5);
      Vec3_scale(auStack_80,ar4 + 0x48,ar6,uVar5,auStack_90);
      Vec3_scale(auStack_90,&DAT_8c136614,ar6,uVar5,auStack_a0);
      Vec3_add(ar5,auStack_a0,ar6,uVar5,auStack_b0);
      Vec3_assign(ar4 + 0x248,auStack_b0,ar6,uVar5);
      Vec3_dtor(auStack_b0,0xffffffff,ar6,uVar5);
      ar7 = Vec3_dtor;
      Vec3_dtor(auStack_a0,0xffffffff,ar6,Vec3_dtor);
      Vec3_dtor(auStack_90,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_80,0xffffffff,ar6,ar7);
      uVar5 = 0xffffffff;
      Vec3_dtor(auStack_70,0xffffffff,ar6,ar7);
      (**(code **)(**(int **)(ar4 + 0x244) + 0x184))(*(int **)(ar4 + 0x244),uVar5,ar6,ar7);
      if (cVar15 == '\0') {
        dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),in_fr3);
        dVar11 = (double)CONCAT44(0x3f000000,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        dVar11 = -2.4967168957076204e+265;
      }
      if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) -
                                  SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20),
                                  SUB84(dVar10,0));
      }
      else {
        dVar10 = dVar10 - dVar11 * dVar11;
      }
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x24c) = (int)((ulonglong)dVar10 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x24c) = dVar10;
      }
    }
  }
  else if (iVar1 == 1) {
    ar6 = (undefined1 *)(ar4 + 0x248);
    iVar1 = pure_virtual_stub(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)dVar10 & 0xffffffff;
      }
      ar7 = (code *)0x0;
      ar6 = (undefined1 *)0xffffffff;
      uVar5 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6,ar7);
    }
  }
  else if (iVar1 == 2) {
    FUN_8c05ae54(ar4,puVar4,ar6,ar7);
    Vec3_scale(ar4 + 0x14,&DAT_8c136618,ar6,ar7,auStack_c0);
    Vec3_add(ar5,auStack_c0,ar6,ar7,auStack_d0);
    FUN_8c031c74(ar4,auStack_d0,ar5,ar7);
    Vec3_dtor(auStack_d0,0xffffffff,ar5,ar7);
    uVar5 = 0xffffffff;
    Vec3_dtor(auStack_c0,0xffffffff,ar5,ar7);
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar5,ar5,ar7);
    ar6 = ar5;
    if (iVar1 == 1) {
      if (cVar15 == '\0') {
        fVar8 = *(float *)(ar4 + 0x18);
        fVar13 = 0.03;
      }
      else {
        fVar8 = 0.03;
        fVar13 = 4.14784e-43;
      }
      if (cVar14 != '\0' || fVar8 <= fVar13) {
        if (*(int *)(ar4 + 0x128) == 0) {
          ar7 = (code *)0x0;
          ar6 = (undefined1 *)0xffffffff;
          uVar5 = 0x14;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x14,0xffffffff,0);
          uVar5 = FUN_8c026db0(ar4,uVar5,ar6,ar7);
          uVar2 = FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6,ar7);
          puVar4 = (undefined4 *)deref_u32(uVar2,uVar5,ar6,ar7);
          uVar2 = puVar4[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar4;
          *(undefined4 *)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(ar4 + 0xbc) = puVar4[2];
          *(undefined **)(ar4 + 0xb4) = &DAT_8c1362f4;
        }
        else if (*(int *)(ar4 + 0x128) == 1) {
          ar7 = (code *)0x0;
          ar6 = (undefined1 *)0xffffffff;
          uVar5 = 0x14;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x14,0xffffffff,0);
          uVar5 = FUN_8c026db0(ar4,uVar5,ar6,ar7);
          uVar2 = FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6,ar7);
          puVar4 = (undefined4 *)deref_u32(uVar2,uVar5,ar6,ar7);
          uVar2 = puVar4[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar4;
          *(undefined4 *)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(ar4 + 0xbc) = puVar4[2];
          *(undefined **)(ar4 + 0xb4) = &DAT_8c13633c;
        }
        else {
          ar7 = (code *)0x0;
          ar6 = (undefined1 *)0xffffffff;
          uVar5 = 0x15;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x15,0xffffffff,0);
          uVar5 = FUN_8c026db0(ar4,uVar5,ar6,ar7);
          uVar2 = FUN_8c03c0f0(ar4 + 0xb0,uVar5,ar6,ar7);
          puVar4 = (undefined4 *)deref_u32(uVar2,uVar5,ar6,ar7);
          uVar2 = puVar4[1];
          *(undefined4 *)(ar4 + 0xb4) = *puVar4;
          *(undefined4 *)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(ar4 + 0xbc) = puVar4[2];
          *(undefined **)(ar4 + 0xb4) = &DAT_8c136384;
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6,ar7);
        vec3_clear(ar4 + 0x2d4,uVar5,ar6,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
    }
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(ar4 + 0x178) = 1;
    *(undefined4 *)(ar4 + 0x334) = 1;
    *(undefined4 *)(ar4 + 0x2e8) = 1;
    CAnimBody_GetCurFrame(ar4 + 0xb0,puVar4,ar6,ar7,puVar6);
    uVar9 = SUB84(dVar10,0);
    FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar6,ar7);
    Vec3_assign(auStack_34,auStack_e0,ar6,ar7);
    Vec3_dtor(auStack_e0,0xffffffff,ar6,ar7);
    Vec3_sub(auStack_34,ar4 + 0x2d4,ar6,ar7,auStack_f0);
    Vec3_assign(ar4 + 0x2a8,auStack_f0,ar6,ar7);
    Vec3_dtor(auStack_f0,0xffffffff,ar6,ar7);
    puVar3 = auStack_34;
    Vec3_assign(ar4 + 0x2d4,puVar3,ar6,ar7);
    CAnimBody_GetCurFrame(ar4 + 0xb0,puVar3,ar6,ar7,puVar6);
    Vec3_ctor_xyz(auStack_100,puVar3,ar6,ar7);
    ar7 = (code *)(ar4 + 0x2a8);
    puVar3 = (undefined1 *)FUN_8c023d04(ar7,auStack_100,ar6,ar7);
    uVar5 = 0xffffffff;
    ar6 = puVar3;
    Vec3_dtor(auStack_100,0xffffffff,puVar3,ar7);
    if (puVar3 != (undefined1 *)0x0) {
      vec3_copy_8c02b5fc(auStack_10c,puVar6,ar6,ar7);
      FUN_8c023484(ar4 + 0x2a8,auStack_10c,ar6,ar7,auStack_11c);
      Vec3_assign(ar4 + 0x2a8,auStack_11c,ar6,ar7);
      Vec3_dtor(auStack_11c,0xffffffff,ar6,ar7);
      uVar5 = 0xffffffff;
      object_dtor_delete(auStack_10c,0xffffffff,ar6,ar7);
    }
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar5,ar6,ar7);
    if (iVar1 == 1) {
      uVar7 = 0;
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x334) = 0;
      *(undefined4 *)(ar4 + 0x2e8) = 0;
      *(undefined4 *)(ar4 + 0x178) = 0;
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)uVar9;
      }
      vec3_clear(ar4 + 0x2a8,ar4 + 0x2a8,ar6,ar7);
      ar7 = (code *)0x0;
      ar6 = (undefined1 *)0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,ar6,ar7);
      *(undefined4 *)(ar4 + 0x2b8) = 3;
    }
  }
  free_if_nonnull_wrap_102790(auStack_50,0xffffffff,ar6,ar7);
  Vec3_dtor((int)&uStack_48 + 4,0xffffffff,ar6,ar7);
  puVar6 = auStack_34;
  Vec3_dtor(puVar6,0xffffffff,puVar6,ar7);
  Vec3_dtor(auStack_24,0xffffffff,puVar6,ar7);
  return uVar7;
}

__asm__(".globl _FUN_8c05c9fc\n.set _FUN_8c05c9fc, _FUN_8c05c9fc_def\n");
//@unit 8c05d2a4
#include "../decls.h"
undefined4 FUN_8c05d2a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (0 < *(int *)(0x31c + ar4)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c05d2a4\n.set _FUN_8c05d2a4, _FUN_8c05d2a4_def\n");
//@unit 8c05d2bc
#include "../decls.h"
undefined4 FUN_8c05d2bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [24];
  undefined1 auStack_64 [24];
  undefined1 auStack_4c [76];
  
  uStack_80 = Vec3_ctor_xyz((&DATA_8c125d28),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c280330;
  global_list_push(uStack_80,(&Vec3_dtor),0x8c280330,ar7);
  uStack_84 = Vec3_ctor_xyz((&DATA_8c125d38),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c28033c;
  global_list_push(uStack_84,(&Vec3_dtor),0x8c28033c,ar7);
  uStack_88 = Vec3_ctor_xyz((&DATA_8c125d48),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c280348;
  global_list_push(uStack_88,(&Vec3_dtor),0x8c280348,ar7);
  uStack_8c = Vec3_ctor_xyz((&DATA_8c125d58),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c280354;
  global_list_push(uStack_8c,(&Vec3_dtor),0x8c280354,ar7);
  uStack_90 = Vec3_ctor_xyz((&DATA_8c125d68),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c280360;
  global_list_push(uStack_90,(&Vec3_dtor),0x8c280360,ar7);
  uStack_94 = Vec3_ctor_xyz((&DATA_8c125d78),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c28036c;
  global_list_push(uStack_94,(&Vec3_dtor),0x8c28036c,ar7);
  uStack_98 = Vec3_ctor_xyz((&DATA_8c125d88),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c280378;
  global_list_push(uStack_98,(&Vec3_dtor),0x8c280378,ar7);
  uStack_9c = Vec3_ctor_xyz((&DATA_8c125d98),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c280384;
  global_list_push(uStack_9c,(&Vec3_dtor),0x8c280384,ar7);
  uStack_a0 = Vec3_ctor_xyz((&DATA_8c125da8),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c280390;
  global_list_push(uStack_a0,(&Vec3_dtor),0x8c280390,ar7);
  uStack_a4 = Vec3_ctor_xyz(0x8c2803a8,puVar3,uVar2,ar7);
  uVar2 = 0x8c28039c;
  global_list_push(uStack_a4,(&Vec3_dtor),0x8c28039c,ar7);
  uStack_a8 = Vec3_ctor_copy(0x8c2803d4,(&DATA_8c125d78),uVar2,ar7);
  uVar2 = 0x8c2803bc;
  global_list_push(uStack_a8,(&Vec3_dtor),0x8c2803bc,ar7);
  uStack_ac = Vec3_ctor_copy(0x8c2803d4 + 0x10,(&DATA_8c125d68),uVar2,ar7)
  ;
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2803c8;
  global_list_push(uStack_ac,(&Vec3_dtor),0x8c2803c8,ar7);
  uVar1 = FUN_8c030e34((int)&uStack_c0 + 0xa4,puVar3,uVar2,ar7);
  uStack_b0 = uVar1;
  FUN_8c05d608(0x8c2803f4,uVar1,uVar2,ar7);
  uVar1 = FUN_8c030e34((int)&uStack_c0 + 0x8c,uVar1,uVar2,ar7);
  uStack_b4 = uVar1;
  FUN_8c05d608(0x8c2803f4 + 0x18,uVar1,uVar2,ar7);
  uVar1 = FUN_8c030e34(auStack_4c,uVar1,uVar2,ar7);
  uStack_b8 = uVar1;
  FUN_8c05d608(0x8c2803f4 + 0x30,uVar1,uVar2,ar7);
  uVar1 = FUN_8c030e34(auStack_64,uVar1,uVar2,ar7);
  uStack_bc = uVar1;
  FUN_8c05d608(0x8c2803f4 + 0x48,uVar1,uVar2,ar7);
  uStack_c0 = FUN_8c030e34(auStack_7c,uVar1,uVar2,ar7);
  uVar2 = FUN_8c05d608(0x8c2803f4 + 0x60,uStack_c0,uVar2,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c05d2bc\n.set _FUN_8c05d2bc, _FUN_8c05d2bc_def\n");
//@unit 8c05d608
#include "../decls.h"
undefined4 * FUN_8c05d608_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  ar4[3] = ar5[3];
  uVar1 = ar5[5];
  ar4[4] = ar5[4];
  ar4[5] = uVar1;
  return ar4;
}

__asm__(".globl _FUN_8c05d608\n.set _FUN_8c05d608, _FUN_8c05d608_def\n");
//@unit 8c05d644
#include "../decls.h"
undefined4 * s_FROGMANLINE_05d646_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  FUN_8c02f064(ar4,ar5,ar6,ar7);
  *ar4 = &DAT_8c12a078;
  FUN_8c0300a4(ar4 + 0x27,ar5,ar6,ar7);
  FUN_8c02eac0(ar4 + 0x207,ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 0x20) = 0;
  ar4[0xe1] = 0xffffffff;
  ar4[0x214] = 0;
  ar4[0x215] = 0;
  *(undefined1 *)(ar4 + 0x21e) = 0;
  *(undefined1 *)((int)ar4 + 0x879) = 0;
  ar4[0x21b] = 0;
  *(undefined1 *)(ar4 + 0x21c) = 0;
  *(undefined1 *)((int)ar4 + 0x871) = 0;
  ar4[0x216] = 0;
  *(undefined1 *)(ar4 + 0x217) = 0;
  ar4[0x219] = 0;
  ar4[0x21a] = 0;
  ar4[0x21f] = 0;
  ar4[0x220] = 0;
  strcpy(ar4 + 0xd9,s_FROGMANLINE_8c136998,ar6,ar7,in_stack_fffffff4);
  strcpy(ar4 + 0x27,s_FROGMANLINE1_8c1369a4,ar6,ar7,in_stack_fffffff4);
  strcpy(ar4 + 0x2f,s_STATUS_FORMAT_8c1369b1,ar6,ar7,in_stack_fffffff4);
  strcpy(ar4 + 0x37,&DAT_8c1369bf,ar6,ar7,in_stack_fffffff4);
  ar4[0xe2] = 4;
  FUN_8c05d7f8(ar4 + 0x27,1,ar6,ar7);
  *(undefined1 *)((int)ar4 + 0x9a) = 2;
  ar4[0x222] = 1;
  ar4[0x221] = 1;
  ar4[0x218] = 0;
  ar4[0x21d] = 0x1b;
  ar4[0x223] = 0;
  ar4[0x224] = 0;
  ar4[0x225] = 0;
  ar4[0x226] = 0;
  return ar4;
}

__asm__(".globl _s_FROGMANLINE_05d646\n.set _s_FROGMANLINE_05d646, _s_FROGMANLINE_05d646_def\n");
//@unit 8c05d7f8
#include "../decls.h"
int FUN_8c05d7f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x778;
  *(undefined4 *)(0x778 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c05d7f8\n.set _FUN_8c05d7f8, _FUN_8c05d7f8_def\n");
//@unit 8c05d804
#include "../decls.h"
undefined4 * Class_12a078_m0_05d804_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12a078;
    free_if_nonnull_wrap_02eaec(ar4 + 0x207,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a078_m0_05d804\n.set _Class_12a078_m0_05d804, _Class_12a078_m0_05d804_def\n");
//@unit 8c05d860
#include "../decls.h"
undefined4 s_STATUS_SICK_05d86e_def(int *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  code *pcVar11;
  int *ar5_00;
  undefined *ar6_00;
  int iVar12;
  code *pcVar13;
  char *pcVar14;
  int ar7_00;
  undefined4 in_stack_fffffe88;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [20];
  
  pcVar4 = ar5;
  pcVar11 = ar6;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  puVar10 = auStack_50;
  puVar7 = &DAT_8c136948;
  iVar9 = 0x10;
  do {
    puVar8 = puVar7 + 1;
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 2;
    puVar10[1] = *puVar8;
    puVar10 = puVar10 + 2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pcVar13 = FUN_8c02602c;
  uVar2 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar4,pcVar11,FUN_8c02602c);
  if ((uVar2 & 0xffff) == 3) {
    uVar3 = FUN_8c02bef8(*(int *)(ar6 + 4),3,pcVar11,pcVar13);
    (**(code **)(*ar4 + 0x18))(ar4,*(int *)(ar6 + 0x18),(int)(short)uVar3,pcVar13);
  }
  DAT_8c136908 = ar4[0x210];
  pcVar14 = (char *)(uint)ar4[0x211];
  ar6_00 = &DAT_8c13686c;
  uVar3 = 0xa4;
  DAT_8c136910 = ar4[0x212];
  DAT_8c13690c = pcVar14;
  iVar9 = get_field_13c_028d9c(*(int *)(ar6 + 4),0xa4,&DAT_8c13686c,pcVar14);
  ar4[0x21d] = iVar9;
  uVar3 = FUN_8c02bef8(*(int *)(ar6 + 4),uVar3,ar6_00,pcVar14);
  FUN_8c030d04(ar4 + 0x27,(int)(short)uVar3,ar6_00,pcVar14);
  if ('\x01' < (char)ar4[0x26]) {
    FUN_8c05d7f8(ar4 + 0x27,0,ar6_00,pcVar14);
  }
  FUN_8c05ff40(ar4,ar5,ar6,pcVar14);
  s_STATUS_SUCKED_0660da(ar4,ar5,ar6,pcVar14);
  pcVar4 = ar6;
  s_STATUS_LASTONE_066468(ar4,ar5,ar6,pcVar14);
  pcVar11 = get_field_13c_028d9c;
  iVar9 = get_field_13c_028d9c(*(int *)(ar6 + 4),get_field_13c_028d9c,pcVar4,pcVar14);
  if ((((iVar9 == 7) &&
       (uVar3 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,pcVar11,pcVar4,pcVar14), (char)uVar3 == '\x01'
       )) && (iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar11,pcVar4,pcVar14), iVar9 == 0))
     && (ar4[0xe1] == -1)) {
    uVar2 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar11,pcVar4,pcVar14);
    uVar3 = 0x43;
    iVar9 = libgcc_divide_helper_01031c(uVar2 & 0xffff,0x43,pcVar4,pcVar14);
    if ((iVar9 == 0x16) && (ar4[1] == 0)) {
      uVar3 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x78,uVar3,pcVar4,pcVar14);
      FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar3,pcVar4,pcVar14);
      pcVar14 = s_STATUS_SICK_8c1369c1;
      FUN_8c0303b8(ar4 + 0x27,0x12,0,s_STATUS_SICK_8c1369c1,&DAT_8c1369bf);
    }
  }
  pcVar4 = ar5;
  pcVar11 = ar6;
  s_IDLEACTION_SNEEZE_065e70(ar4,ar5,ar6,pcVar14);
  iVar9 = get_field_124_027930(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar14);
  if (((iVar9 != 2) &&
      (iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14), iVar9 == 0)) &&
     ((ar4[1] == 0 &&
      (iVar9 = get_field_178_035734(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar14), iVar9 == 0)))) {
    pcVar4 = ar5;
    pcVar11 = ar6;
    FUN_8c0620d4(ar4,ar5,ar6,pcVar14);
  }
  iVar9 = get_field_124_027930(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar14);
  if (iVar9 != 2) {
    pcVar4 = ar6;
    FUN_8c02f20c(ar4,ar6,pcVar11,pcVar14);
  }
  pcVar14 = (char *)get_field_4_05eed8(ar4,pcVar4,pcVar11,pcVar14);
  pcVar4 = ar5;
  pcVar11 = ar6;
  s_STATUS_SNORE_05f668(ar4,ar5,ar6,pcVar14);
  iVar9 = get_field_124_027930(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar14);
  if (iVar9 != 2) {
    pcVar13 = s_REQUEST_ATTENTION_063846;
    pcVar4 = ar5;
    pcVar11 = ar6;
    s_REQUEST_ATTENTION_063846(ar4,ar5,ar6,s_REQUEST_ATTENTION_063846);
    iVar9 = get_field_178_035734(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar13);
    pcVar14 = (char *)pcVar13;
    if ((iVar9 == 0) &&
       (iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar13),
       pcVar14 = (char *)pcVar13, iVar9 == 0)) {
      pcVar4 = ar5;
      pcVar11 = ar6;
      s_REACTION_TITILLATE_064bb8(ar4,ar5,ar6,pcVar13);
      pcVar14 = (char *)pcVar13;
    }
    pcVar4 = (code *)get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
    if ((pcVar4 == (code *)0x0) && (ar4[1] != 0xd)) {
      s_GRATIFIC_RID_HOT_06522a(ar4,ar5,ar6,pcVar14);
      pcVar4 = ar5;
      pcVar11 = ar6;
      s_REACTION_TEMP_LACK_0628aa(ar4,ar5,ar6,pcVar14);
    }
    iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
    if (iVar9 == 0) {
      FUN_8c02e8e0(ar4 + 0x207,1,pcVar11,pcVar14);
      pcVar4 = ar5;
      pcVar11 = ar6;
      s_REACTION_WAKED_TAP_062b14(ar4,ar5,ar6,pcVar14);
    }
  }
  iVar9 = get_field_124_027930(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar14);
  if (iVar9 == 0) {
    iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
    if (iVar9 == 0) {
      uVar2 = get_field_a0_035724(*(int *)(ar6 + 0x18),pcVar4,pcVar11,pcVar14);
      pcVar4 = (code *)(uVar2 & 0xff);
      if ((pcVar4 == (code *)0x2) && (ar4[1] == 0)) {
        iVar9 = get_field_24_05eed0(*(int *)(ar6 + 4) + 0xf8,2,pcVar11,pcVar14);
        if (iVar9 == 1) {
          uVar2 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar4,pcVar11,pcVar14);
          pcVar4 = (code *)0x7;
          iVar9 = libgcc_divide_helper_01031c(uVar2 & 0xffff,7,pcVar11,pcVar14);
          if ((iVar9 == 1) && (ar4[0xe1] == -1)) {
            pcVar14 = s_REQUEST_SLEEP_8c1369cd;
            pcVar11 = (code *)0x0;
            pcVar4 = (code *)0x0;
            FUN_8c0306d4(ar4 + 0x27,0,0,s_REQUEST_SLEEP_8c1369cd);
          }
        }
        uVar3 = FUN_8c05eec4(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
        if ((char)uVar3 == '\0') {
          uVar2 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar4,pcVar11,pcVar14);
          pcVar4 = (code *)0x7;
          iVar9 = libgcc_divide_helper_01031c(uVar2 & 0xffff,7,pcVar11,pcVar14);
          if ((iVar9 == 1) && (ar4[0xe1] == -1)) {
            if (ar4[0x226] == 1) {
              pcVar14 = s_REQUEST_WAKE_UP_8c1369db;
              pcVar11 = (code *)0x0;
              pcVar4 = (code *)0x21;
              FUN_8c0306d4(ar4 + 0x27,0x21,0,s_REQUEST_WAKE_UP_8c1369db);
            }
            else {
              pcVar14 = s_REQUEST_WANT_LIGHT_8c1369eb;
              pcVar11 = (code *)0x0;
              pcVar4 = (code *)0x21;
              FUN_8c0306d4(ar4 + 0x27,0x21,0,s_REQUEST_WANT_LIGHT_8c1369eb);
            }
            ar4[0x226] = 0;
          }
        }
        uVar3 = FUN_8c05eec4(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
        if ((*(char *)((int)ar4 + 0x9a) != (char)uVar3) &&
           (uVar3 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar4,pcVar11,pcVar14), 3 < (ushort)uVar3)) {
          uVar3 = FUN_8c05eec4(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
          if ((char)uVar3 == '\0') {
            pcVar14 = s_STATUS_LIGHT_OFF_8c1369fe;
            pcVar11 = (code *)0x0;
            pcVar4 = (code *)0xa;
            FUN_8c0306d4(ar4 + 0x27,10,0,s_STATUS_LIGHT_OFF_8c1369fe);
          }
          else {
            pcVar4 = (code *)FUN_8c05eec4(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
            if (*(char *)((int)ar4 + 0x9a) < (char)pcVar4) {
              pcVar14 = s_STATUS_LIGHT_8c136a0f;
              pcVar11 = (code *)0x0;
              pcVar4 = (code *)0x0;
              FUN_8c0306d4(ar4 + 0x27,0,0,s_STATUS_LIGHT_8c136a0f);
            }
          }
        }
      }
    }
    iVar9 = get_field_124_027930(*(int *)(ar6 + 8),pcVar4,pcVar11,pcVar14);
    if (iVar9 != 2) {
      if ((((ar4[1] != 7) &&
           (iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14), iVar9 == 0)) &&
          ('\x01' < (char)ar4[0x26])) &&
         (iVar9 = get_field_770_05eeb8(ar4 + 0x27,pcVar4,pcVar11,pcVar14), iVar9 == 1)) {
        if (ar4[0xe1] == -1) {
          pcVar11 = (code *)(ar4 + 0x27);
          pcVar4 = (code *)(uint)ar4[0xe2];
          iVar9 = FUN_8c0f8320(0x8c35468c,pcVar4,pcVar11,pcVar14);
          ar4[0xe1] = iVar9;
        }
        else {
          pcVar4 = (code *)0x2;
          FUN_8c030870(ar4 + 0x27,2,pcVar11,pcVar14);
        }
      }
      uVar3 = FUN_8c05eeb0(*(int *)(ar6 + 4) + 0xa8,pcVar4,pcVar11,pcVar14);
      if ((char)uVar3 == '\x01') {
        pcVar4 = get_field_140_025f70;
        iVar9 = get_field_140_025f70(*(int *)(ar6 + 4),get_field_140_025f70,pcVar11,pcVar14);
        if (iVar9 == 0) {
          *(undefined1 *)(ar4 + 0x26) = 4;
        }
      }
    }
  }
  if (((ar4[0x10] == 0) || (ar4[0x10] == 3)) &&
     ((ar4[1] != 7 &&
      ((pcVar4 = (code *)get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14),
       pcVar4 == (code *)0x0 && (pcVar14 = (char *)0x1, '\x01' < (char)ar4[0x26])))))) {
    pcVar14 = (char *)0x83;
    pcVar11 = (code *)(int)*(char *)((int)ar4 + 0x83);
    pcVar4 = (code *)(int)*(char *)((int)ar4 + 0x83);
    if ((pcVar4 == (code *)0x0) || (pcVar4 == (code *)0x1)) {
      pcVar4 = ar5;
      pcVar11 = ar6;
      FUN_8c0652f4(ar4,ar5,ar6,0x83);
    }
  }
  if (((ar4[1] != 1) && (iVar9 = (int)(char)ar4[0x26], iVar9 < 10)) && (-1 < iVar9)) {
                    
    switch(iVar9) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 0x2e;
      ar4[0x10] = 0x2e;
      DAT_8c136908 = 0x2e;
      ar4[0x211] = 0x36;
      DAT_8c13690c = (char *)0x36;
      ar4[0x212] = 0x36;
      DAT_8c136910 = 0x36;
      iVar9 = (**(code **)(*(int *)(*(int *)ar6 + 8) + 0x18c))(*(int *)ar6,pcVar4,pcVar11,0x36);
      if (iVar9 == 0) {
        *(undefined1 *)(ar4 + 0x26) = 1;
      }
      break;
    case 1:
      if (ar4[0x10] != 0x18) {
        uVar3 = FUN_8c05eea8(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
        *(char *)((int)ar4 + 0x99) = (char)uVar3;
        ar4[3] = 0;
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[0x210] = 0x18;
        ar4[0x10] = 0x18;
        DAT_8c136908 = 0x18;
        ar4[0x211] = 0x36;
        DAT_8c13690c = (char *)0x36;
        ar4[0x212] = 0x36;
        pcVar4 = (code *)0x36;
        DAT_8c136910 = 0x36;
        FUN_8c0c4e2c(FUN_8c0c4e2c,0x36,pcVar11,pcVar14);
      }
      break;
    case 2:
      uVar3 = FUN_8c05eea8(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
      *(char *)((int)ar4 + 0x99) = (char)uVar3;
      iVar9 = get_field_40_03598c(*(int *)(ar6 + 0xc),pcVar4,pcVar11,pcVar14);
      if (iVar9 == 7) {
        pcVar4 = (code *)(uint)ar4[0x21f];
        if (pcVar4 == (code *)0x1) {
          *(undefined1 *)(ar4 + 0x26) = 8;
        }
        if (ar4[0x10] != 0x17) {
          ar4[1] = 0xd;
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[0x10] = 0x17;
          pcVar11 = (code *)0x17;
          ar4[0x210] = 0x17;
          DAT_8c136908 = 0x17;
          ar4[0x211] = 0x36;
          DAT_8c13690c = (char *)0x36;
          ar4[0x212] = 0x36;
          pcVar4 = (code *)&DAT_8c13686c;
          DAT_8c136910 = 0x36;
        }
      }
      break;
    case 3:
      break;
    case 4:
      FUN_8c02cb7c(*(int *)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14,in_stack_fffffe88);
      if (((ar4[1] == 7) || (ar4[0x10] == 8)) ||
         (pcVar13 = (code *)(uint)ar4[0x10], pcVar13 == (code *)0x9)) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        pcVar13 = FUN_8c02cb7c;
        FUN_8c02cb7c(*(int *)(ar6 + 4) + 0xa8,0,0x4b,FUN_8c02cb7c);
      }
      pcVar11 = *(code **)(ar6 + 0xc);
      pcVar4 = get_field_40_03598c;
      iVar9 = get_field_40_03598c(pcVar11,get_field_40_03598c,pcVar11,pcVar13);
      if ((iVar9 == 7) && (ar4[0x10] != 0x17)) {
        if (ar4[0x21f] == 1) {
          *(undefined1 *)(ar4 + 0x26) = 8;
        }
        FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,1,pcVar11,pcVar13);
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[3] = 0;
        ar4[0x10] = 0x17;
        ar4[0x210] = 0x17;
        DAT_8c136908 = 0x17;
        ar4[0x211] = 0x36;
        DAT_8c13690c = (char *)0x36;
        ar4[0x212] = 0x36;
        pcVar4 = (code *)0x36;
        DAT_8c136910 = 0x36;
      }
      break;
    default:
      pcVar4 = (code *)0x0;
      FUN_8c02cb7c(*(int *)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14,in_stack_fffffe88);
      break;
    case 7:
      pcVar13 = FUN_8c02cb7c;
      FUN_8c02cb7c(*(int *)(ar6 + 4) + 0xa8,0,pcVar11,FUN_8c02cb7c);
      pcVar11 = (code *)(ar4 + 0x10);
      pcVar4 = *(code **)pcVar11;
      if ((pcVar4 != (code *)0x2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],pcVar4,pcVar11,pcVar13);
          ar4[0x1b] = 0;
        }
      }
      break;
    case 8:
      FUN_8c02cb7c(*(int *)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14,in_stack_fffffe88);
      FUN_8c02c330(*(int *)(ar6 + 4),0,pcVar11,pcVar14,in_stack_fffffe88);
      FUN_8c02c330(*(int *)(ar6 + 4) + 0x18,0,pcVar11,pcVar14,in_stack_fffffe88);
      FUN_8c02c330(*(int *)(ar6 + 4) + 0x60,0,pcVar11,pcVar14,in_stack_fffffe88);
      pcVar4 = (code *)0x0;
      FUN_8c02c330(*(int *)(ar6 + 4) + 0x48,0,pcVar11,pcVar14,in_stack_fffffe88);
      if (ar4[0x21f] == 1) {
        *(undefined1 *)(ar4 + 0x26) = 9;
      }
      uVar3 = get_field_a0_035724(*(int *)(ar6 + 0x18),pcVar4,pcVar11,pcVar14);
      if ((char)uVar3 == '\x03') {
        pcVar4 = (code *)0x9;
        *(undefined1 *)(ar4 + 0x26) = 9;
      }
      if (*(char *)((int)ar4 + 0x879) == '\x02') {
        if ((ar4[0x10] == 0x30) || (ar4[0x21f] == 1)) {
          ar4[1] = 0;
          ar4[2] = 0x4b;
          ar4[3] = 0;
          ar4[0x10] = 0;
          ar4[0x210] = 0;
          DAT_8c136908 = 0;
          ar4[0x211] = 0x36;
          DAT_8c13690c = (char *)0x36;
          ar4[0x212] = 0x36;
          DAT_8c136910 = 0x36;
        }
        else {
          ar4[0x10] = 0x30;
          ar4[1] = 0xd;
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[0x10] = 0x30;
          ar4[0x210] = 0x30;
          pcVar11 = (code *)0x9c;
          pcVar4 = (code *)0x30;
          DAT_8c136908 = 0x30;
          ar4[0x211] = 0x36;
          DAT_8c13690c = (char *)0x36;
          ar4[0x212] = 0x36;
          DAT_8c136910 = 0x36;
        }
      }
      else {
        *(undefined1 *)(ar4 + 0x26) = 9;
        if (*(char *)((int)ar4 + 0x879) != '\x02') {
          s_STATUS_FORMAT_030306(ar4 + 0x27,pcVar4,pcVar11,pcVar14);
        }
        FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,1,pcVar11,pcVar14);
        FUN_8c02cbbc(*(int *)(ar6 + 4) + 0x90,1,pcVar11,pcVar14);
        FUN_8c02c330(*(int *)(ar6 + 4) + 0x60,0,pcVar11,pcVar14,in_stack_fffffe88);
        ar4[0x10] = 0x2c;
        ar4[1] = 0xd;
        ar4[2] = 99;
        ar4[3] = 0;
        ar4[0x10] = 0x2c;
        ar4[0x210] = 0x2c;
        DAT_8c136908 = 0x2c;
        ar4[0x211] = 0x36;
        DAT_8c13690c = (char *)0x36;
        ar4[0x212] = 0x36;
        pcVar4 = (code *)0xa4;
        DAT_8c136910 = 0x36;
      }
      break;
    case 9:
      FUN_8c02cb7c(*(int *)(ar6 + 4) + 0xa8,0,pcVar11,pcVar14,in_stack_fffffe88);
      FUN_8c02c330(*(int *)(ar6 + 4) + 0x78,0,pcVar11,FUN_8c02c330,in_stack_fffffe88);
      pcVar4 = (code *)0x0;
      pcVar11 = *(code **)(ar6 + 4);
      FUN_8c02ce00(pcVar11 + 0x78,0,pcVar11,0,in_stack_fffffe88);
      if (((ar4[0x10] == 0x30) || (ar4[0x10] == 0x17)) || (ar4[0x10] == 0x2c)) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        ar4[0x210] = 0;
        DAT_8c136908 = 0;
        ar4[0x211] = 0x36;
        DAT_8c13690c = (char *)0x36;
        pcVar11 = (code *)0x848;
        pcVar4 = (code *)0x36;
        ar4[0x212] = 0x36;
        DAT_8c136910 = 0x36;
      }
    }
  }
  FUN_8c0301f8(ar4 + 0x27,pcVar4,pcVar11,FUN_8c0301f8);
  ar7_00 = 0x91;
  iVar12 = (int)*(char *)((int)ar4 + 0x91);
  iVar9 = (int)*(char *)((int)ar4 + 0x91);
  get_field_124_027930(*(int *)(ar6 + 8),iVar9,iVar12,0x91);
  get_field_40_05eea0(ar4,iVar9,iVar12,ar7_00);
  s_EVENT_ENDING_0656da(ar4,ar5,ar6,ar7_00);
  pcVar4 = ar6;
  FUN_8c065cb0(ar4,ar5,ar6,ar7_00);
  iVar9 = get_field_124_027930(*(int *)(ar6 + 8),ar5,pcVar4,ar7_00);
  if (iVar9 != 2) {
    pcVar11 = ar6;
    FUN_8c0665a0(ar4,ar6,pcVar4,ar7_00);
    FUN_8c05ee90(*(int *)(ar6 + 8),pcVar11,pcVar4,ar7_00);
    if (ar4[1] == 2) {
      iVar9 = FUN_8c02c518(*(int *)(ar6 + 4),pcVar11,pcVar4,ar7_00);
      if (iVar9 == 0) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 1) {
        ar7_00 = ar4[0xe1];
        if (ar7_00 == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 3) {
        if (ar4[0xe1] == -1) {
          ar7_00 = 0x40;
          pcVar4 = (code *)0x0;
          ar4[0x10] = 0;
        }
      }
      else if (iVar9 == 4) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
        uVar3 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x60,*(int *)(ar6 + 4) + 0x60,pcVar4,ar7_00);
        in_stack_fffffe88 = CONCAT13((char)uVar3,(int3)in_stack_fffffe88);
        if ((char)uVar3 < '\x04') {
          ar4[0x10] = 0;
        }
      }
    }
    ar5 = (code *)(ar4 + 0x10);
    if (0x35 < *(int *)ar5) {
      ar4[0x10] = 0;
      ar4[1] = 0;
      ar4[0xe] = 2;
    }
    if ((*(char *)((int)ar4 + 0x91) == '\x01') ||
       (iVar9 = get_field_124_027930(*(int *)(ar6 + 8),ar5,pcVar4,ar7_00), ar4[0x10] != iVar9)) {
      pcVar4 = (code *)0x1;
      ar5 = (code *)(uint)ar4[0x10];
      FUN_8c031b08(*(int *)(ar6 + 8),ar5,1,ar7_00);
    }
  }
  *(undefined1 *)((int)ar4 + 0x83) = 4;
  uVar3 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,ar5,pcVar4,ar7_00);
  cVar1 = (char)uVar3;
  uVar3 = CONCAT13((char)((uint)in_stack_fffffe88 >> 0x18),CONCAT12(cVar1,(short)in_stack_fffffe88))
  ;
  iVar9 = (int)cVar1;
  if (cVar1 == '\x01') {
    iVar9 = 1;
    FUN_8c05ee84(*(int *)(ar6 + 0xc),1,pcVar4,ar7_00);
  }
  iVar12 = FUN_8c02c518(*(int *)(ar6 + 4),iVar9,pcVar4,ar7_00);
  if (iVar12 != -1) {
    iVar9 = 0;
    FUN_8c05ee78(*(int *)(ar6 + 0xc),0,pcVar4,ar7_00);
  }
  uVar2 = FUN_8c02602c(*(int *)(ar6 + 0x18),iVar9,pcVar4,ar7_00);
  uVar2 = uVar2 & 0xffff;
  if (ar4[0x219] != uVar2) {
    uVar5 = FUN_8c02602c(*(int *)(ar6 + 0x18),uVar2,pcVar4,ar7_00);
    ar4[0x219] = uVar5 & 0xffff;
    uVar6 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,uVar2,pcVar4,ar7_00);
    uVar3 = CONCAT22((short)((uint)uVar3 >> 0x10),CONCAT11((char)uVar6,(char)uVar3));
    iVar9 = (int)(char)uVar6;
    if (iVar9 == 1) {
      iVar9 = 0;
      FUN_8c02cbbc(*(int *)(ar6 + 4) + 0x90,0,pcVar4,FUN_8c02cbbc);
    }
    iVar12 = *(int *)(ar6 + 0xc);
    pcVar4 = get_field_d0_05ee6c;
    uVar2 = get_field_d0_05ee6c(iVar12,iVar9,get_field_d0_05ee6c,iVar12);
    if (uVar2 == 0) {
      uVar2 = 0;
      FUN_8c05ee64(*(int *)(ar6 + 4) + 0xf8,0,pcVar4,iVar12,uVar3);
    }
    iVar9 = FUN_8c02c340(*(int *)(ar6 + 4) + 0x90,uVar2,pcVar4,iVar12);
    if (iVar9 < 0x31) {
      FUN_8c0e9668(*(int *)(ar6 + 0xc),uVar2,pcVar4,iVar12);
    }
    else {
      FUN_8c0e9690(*(int *)(ar6 + 0xc),uVar2,pcVar4,iVar12);
    }
  }
  if (((ar4[0x10] != 0x23) || (ar4[0x10] != 0x16)) || (ar4[0x10] != 0x27)) {
    ar4[0x23] = 0;
  }
  *(undefined1 *)((int)ar4 + 0x82) = 0;
  *(undefined1 *)(ar4 + 0x21) = 0;
  *(undefined1 *)((int)ar4 + 0x85) = 0;
  uVar6 = 0x87;
  *(undefined1 *)((int)ar4 + 0x87) = 0;
  uVar3 = FUN_8c05eec4(*(int *)(ar6 + 0xc),uVar2,pcVar4,0x87);
  *(char *)((int)ar4 + 0x9a) = (char)uVar3;
  iVar9 = get_field_124_027930(*(int *)(ar6 + 8),uVar2,pcVar4,uVar6);
  if ((iVar9 == 2) && (ar4[0x25] = 0x36, ar4[0xe1] != -1)) {
    ar5_00 = ar4 + 0x37;
    iVar9 = FUN_8c05edfc(s_start_8c136a1c,ar5_00,pcVar4,uVar6);
    if (iVar9 == 0) {
      FUN_8c0f8214(0x8c35468c,ar5_00,pcVar4,uVar6);
      FUN_8c030870(ar4 + 0x27,3,pcVar4,uVar6);
      ar4[2] = 0;
      ar4[3] = 0;
      *(undefined1 *)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
      ar4[0x3f] = 0;
    }
  }
  uVar3 = Vec3_dtor(auStack_30,0xffffffff,pcVar4,uVar6);
  return uVar3;
}

__asm__(".globl _s_STATUS_SICK_05d86e\n.set _s_STATUS_SICK_05d86e, _s_STATUS_SICK_05d86e_def\n");
//@unit 8c05edfc
#include "../decls.h"
undefined4 FUN_8c05edfc_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c05edfc\n.set _FUN_8c05edfc, _FUN_8c05edfc_def\n");
//@unit 8c05ee64
#include "../decls.h"
undefined4 FUN_8c05ee64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x18) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c05ee64\n.set _FUN_8c05ee64, _FUN_8c05ee64_def\n");
//@unit 8c05ee6c
#include "../decls.h"
undefined4 get_field_d0_05ee6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xd0 + ar4);
}

__asm__(".globl _get_field_d0_05ee6c\n.set _get_field_d0_05ee6c, _get_field_d0_05ee6c_def\n");
//@unit 8c05ee78
#include "../decls.h"
int FUN_8c05ee78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xd0;
  *(undefined4 *)(0xd0 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c05ee78\n.set _FUN_8c05ee78, _FUN_8c05ee78_def\n");
//@unit 8c05ee84
#include "../decls.h"
int FUN_8c05ee84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xc0;
  *(undefined4 *)(0xc0 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c05ee84\n.set _FUN_8c05ee84, _FUN_8c05ee84_def\n");
//@unit 8c05ee90
#include "../decls.h"
undefined4 FUN_8c05ee90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x130) = in_fr4;
  return 0x130;
}

__asm__(".globl _FUN_8c05ee90\n.set _FUN_8c05ee90, _FUN_8c05ee90_def\n");
//@unit 8c05eea0
#include "../decls.h"
undefined4 get_field_40_05eea0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x40);
}

__asm__(".globl _get_field_40_05eea0\n.set _get_field_40_05eea0, _get_field_40_05eea0_def\n");
//@unit 8c05eea8
#include "../decls.h"
int FUN_8c05eea8_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*ar4;
}

__asm__(".globl _FUN_8c05eea8\n.set _FUN_8c05eea8, _FUN_8c05eea8_def\n");
//@unit 8c05eeb0
#include "../decls.h"
int FUN_8c05eeb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 4);
}

__asm__(".globl _FUN_8c05eeb0\n.set _FUN_8c05eeb0, _FUN_8c05eeb0_def\n");
//@unit 8c05eeb8
#include "../decls.h"
undefined4 get_field_770_05eeb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x770 + ar4);
}

__asm__(".globl _get_field_770_05eeb8\n.set _get_field_770_05eeb8, _get_field_770_05eeb8_def\n");
//@unit 8c05eec4
#include "../decls.h"
int FUN_8c05eec4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(0xbc + ar4);
}

__asm__(".globl _FUN_8c05eec4\n.set _FUN_8c05eec4, _FUN_8c05eec4_def\n");
//@unit 8c05eed0
#include "../decls.h"
undefined4 get_field_24_05eed0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x24);
}

__asm__(".globl _get_field_24_05eed0\n.set _get_field_24_05eed0, _get_field_24_05eed0_def\n");
//@unit 8c05eed8
#include "../decls.h"
undefined4 get_field_4_05eed8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}

__asm__(".globl _get_field_4_05eed8\n.set _get_field_4_05eed8, _get_field_4_05eed8_def\n");
//@unit 8c05eee0
#include "../decls.h"
undefined4 Class_12a078_m2_05eee0_def(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_stack_ffffffa0;
  
  uVar2 = ar5;
  piVar3 = ar6;
  uVar1 = FUN_8c02602c(ar6[6],ar5,ar6,ar7);
  if ((short)uVar1 == 3) {
    uVar2 = FUN_8c02bef8(ar6[1],uVar2,piVar3,ar7);
    in_stack_ffffffa0 = CONCAT22((short)uVar2,(short)in_stack_ffffffa0);
    piVar3 = (int *)(int)(short)uVar2;
    (**(code **)(*ar4 + 0x18))(ar4,ar6[6],piVar3,ar7);
  }
  iVar4 = get_field_40_03598c(ar6[3],get_field_40_03598c,piVar3,ar7);
  if (iVar4 == 2) {
    FUN_8c05f498(ar6[3],0,piVar3,ar7);
  }
  DAT_8c136908 = ar4[0x210];
  DAT_8c13690c = ar4[0x211];
  DAT_8c136910 = ar4[0x212];
  uVar2 = ar5;
  piVar3 = ar6;
  FUN_8c05ff40(ar4,ar5,ar6,ar7);
  iVar4 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,uVar2,piVar3,ar7);
  if ((iVar4 == 1) && (ar4[1] != 1)) {
    iVar4 = get_field_6c_02f46c(*ar6,uVar2,piVar3,ar7);
    if ((iVar4 == 0) && (iVar4 = get_field_70_05f490(*ar6,uVar2,piVar3,ar7), iVar4 == 0)) {
      piVar3 = (int *)0x1b;
      FUN_8c0b9ed4(ar6[6],0x1b,0x1b,ar7);
      ar4[0x10] = 2;
      ar4[0xe] = 2;
      ar4[1] = 1;
      ar4[3] = 0;
      ar4[2] = 99;
      FUN_8c02f298(ar4,199,piVar3,ar7);
    }
    else {
      ar4[0xe] = 2;
      ar4[1] = 0xb;
      ar4[2] = 99;
      ar4[0x10] = 0xe;
      uVar2 = 0x577;
      FUN_8c02f298(ar4,0x577,piVar3,ar7);
      if (ar4[0x1b] != 0) {
        (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],uVar2,piVar3,ar7);
        ar4[0x1b] = 0;
      }
    }
    if (((char)ar4[0x21e] == '\x01') && (ar4[1] == 0)) {
      *(undefined1 *)(ar4 + 0x21e) = 0;
    }
  }
  piVar6 = ar6;
  FUN_8c02f20c(ar4,ar6,piVar3,ar7);
  uVar2 = get_field_4_05eed8(ar4,piVar6,piVar3,ar7);
  piVar3 = ar6;
  s_STATUS_SNORE_05f668(ar4,ar5,ar6,uVar2);
  if (((ar4[1] != 1) && (iVar4 = (int)(char)ar4[0x26], iVar4 < 10)) && (-1 < iVar4)) {
                    
    switch(iVar4) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 0x2e;
      ar4[0x10] = 0x2e;
      DAT_8c136908 = 0x2e;
      break;
    case 1:
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[2] = 99;
      ar4[0x210] = 0x18;
      ar4[0x10] = 0x18;
      DAT_8c136908 = 0x18;
      break;
    case 2:
      uVar1 = FUN_8c05eea8(ar6[3],ar5,piVar3,uVar2);
      *(char *)((int)ar4 + 0x99) = (char)uVar1;
      break;
    case 4:
      ar5 = 0;
      FUN_8c02cb7c(ar6[1] + 0xa8,0,piVar3,uVar2,in_stack_ffffffa0);
      break;
    case 7:
      ar5 = 0;
      FUN_8c02cb7c(ar6[1] + 0xa8,0,piVar3,uVar2,in_stack_ffffffa0);
      if ((ar4[0x10] != 2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],ar5,piVar3,uVar2);
          ar4[0x1b] = 0;
        }
      }
      break;
    case 8:
      ar5 = 0;
      FUN_8c02cb7c(ar6[1] + 0xa8,0,piVar3,uVar2,in_stack_ffffffa0);
      if (ar4[0x21f] == 1) {
        *(undefined1 *)(ar4 + 0x26) = 9;
      }
      if (ar4[0x10] != 0x2c) {
        s_STATUS_FORMAT_030306(ar4 + 0x27,ar5,piVar3,uVar2);
        FUN_8c02ce10(ar6[1] + 0x90,1,piVar3,uVar2);
        FUN_8c02cbbc(ar6[1] + 0x90,1,piVar3,uVar2);
        ar5 = 0;
        FUN_8c02c330(ar6[1] + 0x60,0,piVar3,uVar2,in_stack_ffffffa0);
        ar4[0x10] = 0x2c;
      }
      break;
    case 9:
      if (ar4[0x10] == 0x2c) {
        ar4[1] = 0;
        ar4[2] = 0x4b;
        ar4[3] = 0;
        ar4[0x10] = 0;
        ar4[0x210] = 0;
        DAT_8c136908 = 0;
        ar4[0x211] = 0x36;
        DAT_8c13690c = 0x36;
        ar4[0x212] = 0x36;
        DAT_8c136910 = 0x36;
      }
    }
  }
  if (ar4[0xe1] != -1) {
    iVar4 = FUN_8c0fa2b8(0x8c35468c,ar5,piVar3,uVar2);
    if (iVar4 == 0) {
      ar4[0x25] = 0;
      FUN_8c030870(ar4 + 0x27,3,piVar3,uVar2);
      ar4[1] = 0;
      ar4[0x10] = 0;
      ar4[2] = 0x19;
      *(undefined1 *)((int)ar4 + 0x91) = 1;
      ar4[3] = 0;
      *(undefined1 *)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
    }
    else {
      FUN_8c0f8214(0x8c35468c,ar5,piVar3,uVar2);
    }
    ar4[0x25] = ar4[0x55];
  }
  if (ar4[0x22] == 1) {
    ar4[0x22] = 0;
  }
  piVar6 = ar6;
  FUN_8c0665a0(ar4,ar6,piVar3,uVar2);
  FUN_8c05ee90(ar6[2],piVar6,piVar3,uVar2);
  iVar4 = get_field_4_05eed8(ar4,piVar6,piVar3,uVar2);
  iVar4 = *(int *)(&DAT_8c13686c + ar4[3] * 4 + iVar4 * 0xc);
  FUN_8c05f488(ar4,iVar4,piVar3,uVar2);
  if (*(char *)((int)ar4 + 0x91) != '\x01') {
    iVar5 = get_field_124_027930(ar6[2],iVar4,piVar3,uVar2);
    iVar4 = get_field_40_05eea0(ar4,iVar4,piVar3,uVar2);
    if (iVar5 == iVar4) {
      return iVar5;
    }
  }
  uVar1 = get_field_40_05eea0(ar4,iVar4,piVar3,uVar2);
  uVar2 = FUN_8c031b08(ar6[2],uVar1,1,uVar2);
  return uVar2;
}

__asm__(".globl _Class_12a078_m2_05eee0\n.set _Class_12a078_m2_05eee0, _Class_12a078_m2_05eee0_def\n");
//@unit 8c05f488
#include "../decls.h"
undefined4 FUN_8c05f488_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x40) = ar5;
  return 0x40;
}

__asm__(".globl _FUN_8c05f488\n.set _FUN_8c05f488, _FUN_8c05f488_def\n");
//@unit 8c05f490
#include "../decls.h"
undefined4 get_field_70_05f490_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x70);
}

__asm__(".globl _get_field_70_05f490\n.set _get_field_70_05f490, _get_field_70_05f490_def\n");
//@unit 8c05f498
#include "../decls.h"
undefined4 FUN_8c05f498_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x40) = ar5;
  return 0x40;
}

__asm__(".globl _FUN_8c05f498\n.set _FUN_8c05f498, _FUN_8c05f498_def\n");
//@unit 8c05f4a0
#include "../decls.h"
int s_REACTION_CATCH_05f4a2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  char *ar7_00;
  undefined1 auStack_18 [20];
  
  if (*(int *)(ar4 + 0x6c) != 0) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  Vec3_ctor_copy(auStack_18,ar5 + 0x10,ar6,ar7);
  Vec3_assign_wrap_05f640(ar4,auStack_18,ar6,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  *(undefined4 *)(ar4 + 0x94) = 0x15;
  if (*(int *)(ar4 + 900) != -1) {
    *(undefined4 *)(ar4 + 0x94) = *(undefined4 *)(ar4 + 0x154);
    iVar1 = FUN_8c0fa2b8(0x8c35468c,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x94) = 0;
      FUN_8c030870(ar4 + 0x9c,3,ar6,ar7);
      *(undefined4 *)(ar4 + 4) = 2;
      *(undefined4 *)(ar4 + 0x40) = 0x10;
      *(undefined4 *)(ar4 + 8) = 0x19;
      *(undefined1 *)(ar4 + 0x91) = 1;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined1 *)(ar4 + 0x80) = 1;
      *(undefined4 *)(ar4 + 900) = 0xffffffff;
    }
  }
  iVar1 = *(int *)(ar4 + 900);
  if (iVar1 == -1) {
    FUN_8c030870(ar4 + 0x9c,0,ar6,ar7);
    ar7_00 = s_REACTION_CATCH_8c136a22;
    uVar2 = 0;
    FUN_8c030568(ar4 + 0x9c,0x25,0,s_REACTION_CATCH_8c136a22,&DAT_8c1369bf);
    strcpy(ar4 + 0xbc,s_REACTION_CATCH_8c136a22,uVar2,ar7_00,ar5);
    strcpy(ar4 + 0xdc,&DAT_8c1369bf,uVar2,ar7_00,ar5);
    *(undefined4 *)(ar4 + 0xfc) = 0;
    iVar1 = ar4 + 0x9c;
    uVar2 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),iVar1,ar7_00);
    *(undefined4 *)(ar4 + 900) = uVar2;
    *(undefined4 *)(ar4 + 0x14c) = 0;
    iVar1 = FUN_8c030870(ar4 + 0x9c,2,iVar1,ar7_00);
  }
  return iVar1;
}

__asm__(".globl _s_REACTION_CATCH_05f4a2\n.set _s_REACTION_CATCH_05f4a2, _s_REACTION_CATCH_05f4a2_def\n");
//@unit 8c05f640
#include "../decls.h"
undefined4 Vec3_assign_wrap_05f640_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_assign(ar4 + 0x70,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Vec3_assign_wrap_05f640\n.set _Vec3_assign_wrap_05f640, _Vec3_assign_wrap_05f640_def\n");
//@unit 8c05f660
#include "../decls.h"
undefined4 s_STATUS_SNORE_05f668_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  uint uVar1;
  undefined *ar5_00;
  int a5;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *ar7_00;
  char cVar5;
  undefined4 in_stack_ffffff94;
  undefined1 auStack_24 [20];
  
  cVar5 = '\0';
  piVar3 = ar6;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    iVar4 = 0x40;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13686c + *(int *)(ar4 + 0xc) * 4 + ar7 * 0xc);
    FUN_8c060044(ar4,ar5,ar6,0x40);
    ar5_00 = (undefined *)0x1;
    FUN_8c02f404(ar4,1,piVar3,iVar4,in_stack_ffffff94);
    ar7 = iVar4;
  }
  else {
    ar5_00 = &DAT_8c13686c + ar7 * 0xc;
    *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar5_00 + *(int *)(ar4 + 0xc) * 4);
  }
  iVar4 = *(int *)(ar4 + 0x40);
  if (iVar4 < 0x28) {
    if (-1 < iVar4) {
                    
      switch(iVar4) {
      case 0:
        FUN_8c02f404(ar4,3,piVar3,ar7,in_stack_ffffff94);
        break;
      case 1:
        FUN_8c02f404(ar4,3,piVar3,ar7,in_stack_ffffff94);
        iVar4 = FUN_8c02f414(ar4,FUN_8c02f414,piVar3,ar7);
        if (iVar4 == 1) {
          FUN_8c066628(ar4,ar5,piVar3,ar7);
        }
        else {
          *(undefined4 *)(ar4 + 0x6c) = 0;
          *(undefined4 *)(ar4 + 0x38) = 2;
        }
        FUN_8c02fdd8(ar4,ar5,piVar3,ar7);
        break;
      case 2:
        a5 = *(int *)(*ar6 + 8);
        iVar4 = (**(code **)(a5 + 0xb4))(*ar6,a5,piVar3,ar7);
        if (iVar4 == 1) {
          iVar4 = *ar6;
          FUN_8c027954(iVar4,a5,piVar3,ar7);
          FUN_8c0c4e2c(iVar4,a5,piVar3,ar7);
        }
        break;
      case 3:
        uVar1 = FUN_8c02602c(ar6[6],ar5_00,piVar3,ar7);
        iVar4 = libgcc_divide_helper_01031c(uVar1 & 0xffff,0x25,libgcc_divide_helper_01031c,ar7);
        if (iVar4 == 0xe) {
          ar7_00 = s_STATUS_SNORE_8c136a31;
          FUN_8c0306d4(ar4 + 0x9c,0x11,0,s_STATUS_SNORE_8c136a31);
          FUN_8c02f404(ar4,3,FUN_8c02f404,ar7_00,in_stack_ffffff94);
        }
        break;
      case 4:
        FUN_8c02f404(ar4,3,piVar3,ar7,in_stack_ffffff94);
        break;
      case 6:
        iVar4 = FUN_8c02f414(ar4,ar5_00,piVar3,ar7);
        if (iVar4 == 1) {
          if (*(int *)(ar4 + 0x88) == 1) {
            uVar2 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),ar5_00,piVar3,ar7);
            uVar2 = FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),uVar2,piVar3,ar7);
            FUN_8c05fec4(ar6[1],uVar2,piVar3,ar7);
            if (*(int *)(ar4 + 0x6c) != 0) {
              (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                        (*(int *)(ar4 + 0x6c),uVar2,piVar3,ar7);
              ar7 = 0;
              *(undefined4 *)(ar4 + 0x6c) = 0;
            }
          }
          FUN_8c066628(ar4,ar5,FUN_8c066628,ar7);
        }
        else {
          *(undefined4 *)(ar4 + 0x38) = 2;
        }
        break;
      case 9:
        uVar1 = FUN_8c02602c(ar6[6],ar5_00,piVar3,ar7);
        uVar2 = 10;
        iVar4 = libgcc_divide_helper_01031c(uVar1 & 0xffff,10,piVar3,ar7);
        if (((iVar4 == 5) && (*(char *)(ar4 + 0x870) == '\0')) &&
           (iVar4 = get_field_140_025f70(ar6[1],uVar2,piVar3,ar7), iVar4 == 0)) {
          FUN_8c0fa5bc(0x8c35468c,(int)*(char *)(ar4 + 0x870),piVar3,ar7);
          iVar4 = FUN_8c02fcc4(ar4,ar6,piVar3,ar7);
          if (iVar4 == 0) {
            FUN_8c0306d4(ar4 + 0x9c,10,0,s_STATUS_UNCONSIDERED_8c136a60);
          }
          else {
            FUN_8c0306d4(ar4 + 0x9c,10,0,s_STATUS_COUPLING_8c136a50);
          }
          *(undefined1 *)(ar4 + 0x870) = 1;
        }
        break;
      case 0xc:
      case 0x12:
        Vec3_ctor_copy(auStack_24,ar6[5] + 0x10,piVar3,ar7);
        Vec3_assign_wrap_05f640(ar4,auStack_24,piVar3,ar7);
        Vec3_dtor(auStack_24,0xffffffff,piVar3,ar7);
        if (cVar5 == '\0') {
          *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x78) = 0x64e3e50344af0000;
        }
        break;
      case 0xf:
        iVar4 = FUN_8c02f414(ar4,ar5_00,piVar3,ar7);
        if (iVar4 == 1) {
          if (*(int *)(ar4 + 0x88) == 1) {
            FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),1,piVar3,ar7);
            *(undefined4 *)(ar4 + 0x88) = 0;
          }
          FUN_8c066628(ar4,ar5,piVar3,ar7);
          FUN_8c02fdd8(ar4,ar5,piVar3,ar7);
        }
        else {
          *(undefined4 *)(ar4 + 0x38) = 2;
          FUN_8c05febc(ar6[3],0,piVar3,ar7);
        }
        break;
      case 0x10:
        if (((*(int *)(ar4 + 4) != 0xd) &&
            (iVar4 = FUN_8c02c518(ar6[1],ar5_00,piVar3,ar7), iVar4 < 6)) && (-1 < iVar4)) {
                    
          switch(iVar4) {
          case 0:
            uVar2 = FUN_8c02c5ac(ar6[1],ar5_00,piVar3,ar7);
            FUN_8c0303b8(ar4 + 0x9c,4,(int)(char)uVar2,s_REQUEST_HOT_8c136a74,&DAT_8c1369bf);
            break;
          case 1:
            uVar2 = FUN_8c02c5ac(ar6[1] + 0x18,ar5_00,piVar3,ar7);
            FUN_8c0303b8(ar4 + 0x9c,5,(int)(char)uVar2,s_REQUEST_COLD_8c136a80,&DAT_8c1369bf);
            break;
          case 3:
            uVar2 = FUN_8c02c5ac(ar6[1] + 0x48,ar5_00,piVar3,ar7);
            FUN_8c0303b8(ar4 + 0x9c,0x10,(int)(char)uVar2,s_REQUEST_HUMIDITY_8c136a9c,&DAT_8c1369bf)
            ;
            break;
          case 4:
            uVar2 = FUN_8c02c5ac(ar6[1] + 0x60,ar5_00,piVar3,ar7);
            FUN_8c0303b8(ar4 + 0x9c,0xd,(int)(char)uVar2,s_REQUEST_HUNGRY_8c136a8d,&DAT_8c1369bf);
            break;
          case 5:
            uVar2 = FUN_8c02c5ac(ar6[1] + 0x78,ar5_00,piVar3,ar7);
            FUN_8c0303b8(ar4 + 0x9c,0x12,(int)(char)uVar2,s_STATUS_SICK_8c1369c1,&DAT_8c1369bf);
          }
        }
        break;
      case 0x16:
        if (*(int *)(ar4 + 0x8c) == 1) {
          FUN_8c0306d4(ar4 + 0x9c,0x2a,0,s_REACTION_GURUGURU_8c136a3e);
          *(undefined4 *)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x22:
        if (*(int *)(ar4 + 0x8c) == 1) {
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_STATUS_AFTER_BINTA_8c136ac1);
          *(undefined4 *)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x23:
        if (*(int *)(ar4 + 0x8c) == 1) {
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_STATUS_BEFORE_BINTA_8c136aad);
          *(undefined4 *)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x26:
        if (*(int *)(ar4 + 0x8c) == 1) {
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_STATUS_AFTER_FIGHT_8c136ae8);
          *(undefined4 *)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x27:
        if (*(int *)(ar4 + 0x8c) == 1) {
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_STATUS_BEFORE_FIGHT_8c136ad4);
          *(undefined4 *)(ar4 + 0x8c) = 0;
        }
      }
    }
  }
  else if ((iVar4 == 0x34) && (*(int *)(ar4 + 0x8c) == 1)) {
    FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_STATUS_SNIFFING_8c136afb);
    *(undefined4 *)(ar4 + 0x8c) = 0;
  }
  return 1;
}

__asm__(".globl _s_STATUS_SNORE_05f668\n.set _s_STATUS_SNORE_05f668, _s_STATUS_SNORE_05f668_def\n");
//@unit 8c05febc
#include "../decls.h"
undefined4 FUN_8c05febc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x38) = (undefined1)ar5;
  return 0x38;
}

__asm__(".globl _FUN_8c05febc\n.set _FUN_8c05febc, _FUN_8c05febc_def\n");
//@unit 8c05fec4
#include "../decls.h"
undefined4 FUN_8c05fec4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02d930(ar4 + 0x90,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c05fec4\n.set _FUN_8c05fec4, _FUN_8c05fec4_def\n");
//@unit 8c05feec
#include "../decls.h"
int FUN_8c05feec_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iStack_8;
  
  iStack_8 = ar5;
  if (*(int *)(ar4 + 0x6c) <= ar5) {
    iStack_8 = *(int *)(ar4 + 0x6c);
  }
  *(int *)(ar4 + 0x6c) = *(int *)(ar4 + 0x6c) - iStack_8;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 2;
  return iStack_8;
}

__asm__(".globl _FUN_8c05feec\n.set _FUN_8c05feec, _FUN_8c05feec_def\n");
//@unit 8c05ff40
#include "../decls.h"
int FUN_8c05ff40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  char cVar3;
  int in_stack_ffffffe0;
  
  cVar3 = '\0';
  if (*(int *)(ar4 + 0x3c) == 0) {
    uVar2 = ar5;
    ar6_00 = ar6;
    s_GRATIFIC_EAT_0611d6(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13686c + *(int *)(ar4 + 0xc) * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 0x36) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(ar4 + 8) = 0;
      if (*(int *)(ar4 + 4) == 1) {
        *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
        ar5 = uVar2;
        ar6 = ar6_00;
        in_stack_ffffffe0 = ar4;
      }
      else {
        if (cVar3 == '\0') {
          *(undefined4 *)(ar4 + 0x70) = 0xc7c35000;
        }
        else {
          *(undefined8 *)(ar4 + 0x70) = 0x8c02f404c7c35000;
        }
        *(undefined4 *)(ar4 + 0xc) = 0;
        ar5 = 0;
        FUN_8c02f404(ar4,0,ar6_00,ar7,in_stack_ffffffe0);
        ar6 = ar6_00;
      }
    }
    else {
      FUN_8c060044(ar4,ar5,ar6,ar7);
    }
  }
  if (*(int *)(ar4 + 0x3c) == 2) {
    ar5 = 2;
    FUN_8c02f404(ar4,2,ar6,ar7,in_stack_ffffffe0);
  }
  iVar1 = *(int *)(ar4 + 0x38);
  if ((iVar1 == 2) && (iVar1 = 0, *(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    iVar1 = 0x6c;
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c05ff40\n.set _FUN_8c05ff40, _FUN_8c05ff40_def\n");
