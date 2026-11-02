#include "../decls.h"
int FUN_8c094514_def(int ar4,code *ar5,code *ar6,code *ar7)

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
      uStack_2a8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_2a8+4)),fVar7);
      pcVar3 = (code *)0x43960000;
      dVar8 = in_xd0;
    }
    else {
      fVar7 = 300.0;
      pcVar3 = (code *)0x2a0;
      uStack_2a8 = dVar8;
    }
    if (cVar12 == '\0' && (float)(uint)pcVar3 < fVar7) {
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
        uStack_2b4 = (double)CONCAT44((*(uint*)((uchar*)&uStack_2b4+4)),(int)((ulonglong)dVar9 >> 0x20));
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
      uStack_2a8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_2a8+4)),fVar7);
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
      if ((*(uint*)((uchar*)&uStack_2bc+4)) != 0) {
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
        uStack_2a8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_2a8+4)),fVar7);
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
          uStack_2bc = (double)CONCAT44((*(uint*)((uchar*)&uStack_2bc+4)),(int)((ulonglong)dVar8 >> 0x20));
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
  (*(uint*)((uchar*)&uStack_2b4+4)) = ar5_02;
  Vec3_dtor(auStack_54,0xffffffff,ar6,pcVar6);
  Vec3_dtor(auStack_44,0xffffffff,ar6,pcVar6);
  Vec3_dtor(auStack_34,0xffffffff,ar6,pcVar6);
  return (*(uint*)((uchar*)&uStack_2b4+4));
}

__asm__(".globl _FUN_8c094514\n.set _FUN_8c094514, _FUN_8c094514_def\n");
