#include "../decls.h"
int FUN_8c0967d8_def(int ar4,int *ar5,int *ar6,int *ar7)

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
      uStack_2b4 = (double)CONCAT44((*(uint*)((uchar*)&uStack_2b4+4)),fVar7);
      pcVar2 = (code *)0x43960000;
      in_xd0 = dVar8;
    }
    else {
      fVar7 = 300.0;
      pcVar2 = (code *)0x2a4;
      uStack_2b4 = in_xd0;
    }
    if (cVar12 == '\0' && (float)(uint)pcVar2 < fVar7) {
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
        uStack_2c0 = (double)CONCAT44((*(uint*)((uchar*)&uStack_2c0+4)),(int)((ulonglong)dVar8 >> 0x20));
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
      uStack_2b4 = (double)CONCAT44((*(uint*)((uchar*)&uStack_2b4+4)),fVar7);
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
      if ((*(uint*)((uchar*)&uStack_2c8+4)) != 0) {
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
        uStack_2b4 = (double)CONCAT44((*(uint*)((uchar*)&uStack_2b4+4)),fVar7);
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
          uStack_2c8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_2c8+4)),(int)((ulonglong)dVar8 >> 0x20));
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
  (*(uint*)((uchar*)&uStack_2c0+4)) = iVar6;
  free_if_nonnull_wrap_102790(&uStack_60,0xffffffff,ar6,piVar5);
  Vec3_dtor(auStack_54,0xffffffff,ar6,piVar5);
  Vec3_dtor(auStack_44,0xffffffff,ar6,piVar5);
  Vec3_dtor(auStack_34,0xffffffff,ar6,piVar5);
  return (*(uint*)((uchar*)&uStack_2c0+4));
}

__asm__(".globl _FUN_8c0967d8\n.set _FUN_8c0967d8, _FUN_8c0967d8_def\n");
