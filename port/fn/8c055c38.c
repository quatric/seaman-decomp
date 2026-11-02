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
