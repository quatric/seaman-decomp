#include "../decls.h"
int FUN_8c093e80_def(int ar4,undefined4 ar5,int ar6,int ar7)

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

__asm__(".globl _FUN_8c093e80\n.set _FUN_8c093e80, _FUN_8c093e80_def\n");
