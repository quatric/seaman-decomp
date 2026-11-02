#include "../decls.h"
int FUN_8c095548_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

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
      uStack_30c = (double)CONCAT44((*(uint*)((uchar*)&uStack_30c+4)),fVar8);
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
        uStack_318 = (double)CONCAT44((*(uint*)((uchar*)&uStack_318+4)),(int)((ulonglong)dVar9 >> 0x20));
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
      uStack_30c = (double)CONCAT44((*(uint*)((uchar*)&uStack_30c+4)),fVar8);
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
      if ((*(uint*)((uchar*)&uStack_320+4)) != 0) {
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
        uStack_30c = (double)CONCAT44((*(uint*)((uchar*)&uStack_30c+4)),fVar8);
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
          uStack_320 = (double)CONCAT44((*(uint*)((uchar*)&uStack_320+4)),(int)((ulonglong)dVar9 >> 0x20));
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
      uStack_324 = (uint)(cVar14 == '\0' && fVar8 < (float)(uint)pcVar2);
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
  (*(uint*)((uchar*)&uStack_318+4)) = iVar7;
  Vec3_dtor(auStack_58,0xffffffff,pcVar5,uVar6);
  Vec3_dtor(auStack_48,0xffffffff,pcVar5,uVar6);
  Vec3_dtor(auStack_38,0xffffffff,pcVar5,uVar6);
  return (*(uint*)((uchar*)&uStack_318+4));
}

__asm__(".globl _FUN_8c095548\n.set _FUN_8c095548, _FUN_8c095548_def\n");
