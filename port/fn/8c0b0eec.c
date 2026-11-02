#include "../decls.h"
undefined4 FUN_8c0b0eec_def(int ar4,float *ar5,float *ar6,undefined4 ar7)

{
  double dVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int *ar5_00;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  code *ar5_01;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  ulonglong in_dr0;
  float fVar13;
  double dVar12;
  undefined8 in_xd0;
  char cVar14;
  char cVar15;
  float *ain0;
  undefined8 uStack_204;
  undefined8 uStack_188;
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
  undefined1 auStack_30 [20];
  
  cVar15 = '\0';
  cVar14 = '\0';
  uVar10 = 1;
  pfVar6 = ar5;
  uVar9 = ar7;
  ain0 = ar6;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_40,pfVar6,ar6,uVar9);
  Vec3_ctor_zero(auStack_50,pfVar6,ar6,uVar9);
  iVar4 = *(int *)(ar4 + 300);
  if ((iVar4 < 9) && (-1 < iVar4)) {
                    
    switch(iVar4) {
    case 0:
      uVar8 = 0xc;
      iVar4 = FUN_8c034148(ar4 + 0xb0,0xc,ar6,uVar9);
      if (iVar4 != 1) {
        if (iVar4 != 2) break;
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar8,ar6,uVar9);
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,uVar9);
      break;
    case 1:
      if (cVar15 == '\0') {
        fVar11 = *ar5;
        fVar13 = 1500.0;
      }
      else {
        in_xd0 = *(undefined8 *)ar5;
        fVar11 = 1500.0;
        fVar13 = 1000.0;
      }
      if (cVar14 == '\0' && fVar13 < fVar11) {
        Vec3_ctor_xyz(auStack_70,Vec3_ctor_xyz,ar6,uVar9);
        Vec3_assign(ar4 + 0x2e4,auStack_70,ar6,uVar9);
        Vec3_dtor(auStack_70,0xffffffff,ar6,uVar9);
      }
      else {
        Vec3_ctor_xyz(auStack_60,pfVar6,ar6,uVar9);
        Vec3_assign(ar4 + 0x2e4,auStack_60,ar6,uVar9);
        Vec3_dtor(auStack_60,0xffffffff,ar6,uVar9);
      }
      FUN_8c031b68(ar4,0x8c286dbc,ar6,uVar9);
      *(undefined4 *)(ar4 + 0x40) = 3;
      in_dr0 = (ulonglong)(uint)fVar11;
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = in_dr0;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 2:
      if (cVar15 == '\0') {
        uVar8 = (undefined4)in_dr0;
        uVar5 = 0x3f000000;
        *(undefined4 *)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        uVar8 = 0x3f000000;
        uVar5 = 0xb0;
        *(undefined8 *)(ar4 + 0x28) = 0xb03f000000;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,ar6,uVar9);
      pfVar6 = ar5;
      Vec3_sub(ar4 + 0x2e4,ar5,ar6,uVar9,auStack_80);
      uVar3 = Vec3_length(auStack_80,pfVar6,ar6,uVar9);
      Vec3_assign(auStack_50,uVar3,ar6,uVar9);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_80,0xffffffff,ar6,uVar9);
      FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,uVar9,auStack_90);
      FUN_8c0230f0(auStack_50,uVar3,ar6,uVar9,auStack_a0);
      FUN_8c022dac(auStack_90,auStack_a0,ar6,uVar9);
      Vec3_dtor(auStack_a0,0xffffffff,ar6,uVar9);
      Vec3_dtor(auStack_90,0xffffffff,ar6,uVar9);
      FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,uVar9);
      if (cVar15 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),uVar5);
      }
      else {
        in_xd0 = CONCAT44(uVar5,uVar8);
        dVar12 = *(double *)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      if (cVar15 == '\0') {
        *(float *)(ar4 + 0x30) = fVar11;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
      iVar4 = FUN_8c031764(ar4,ar4 + 0x2e4,ar5,uVar9);
      if (iVar4 == 0) {
        uVar9 = 300;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x40) = 0;
      }
      ar6 = (float *)0x1e;
      iVar4 = rand_range(ar4,0,0x1e,uVar9);
      if (iVar4 == 0) {
        *(undefined4 *)(ar4 + 0x240) = 1;
        FUN_8c033474(ar4,0xb,ar5,ar7);
        ar6 = ar5;
        uVar9 = ar7;
      }
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,uVar9);
      break;
    case 3:
      if (cVar15 == '\0') {
        fVar11 = *ar5;
        fVar13 = 1500.0;
      }
      else {
        in_xd0 = *(undefined8 *)ar5;
        fVar11 = 1500.0;
        fVar13 = 1200.0;
      }
      if (cVar14 == '\0' && fVar13 < fVar11) {
        Vec3_ctor_xyz(auStack_c0,pfVar6,ar6,uVar9);
        Vec3_assign(ar4 + 0x2e4,auStack_c0,ar6,uVar9);
        Vec3_dtor(auStack_c0,0xffffffff,ar6,uVar9);
      }
      else {
        Vec3_ctor_xyz(auStack_b0,Vec3_ctor_xyz,ar6,uVar9);
        Vec3_assign(ar4 + 0x2e4,auStack_b0,ar6,uVar9);
        Vec3_dtor(auStack_b0,0xffffffff,ar6,uVar9);
      }
      FUN_8c031b68(ar4,0x8c286dbc,ar6,uVar9);
      *(undefined4 *)(ar4 + 0x40) = 3;
      pfVar6 = (float *)(ar4 + 0x2c);
      in_dr0 = (ulonglong)(uint)fVar11;
      if (cVar15 == '\0') {
        *pfVar6 = 0.0;
      }
      else {
        *(ulonglong *)pfVar6 = in_dr0;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 4:
      if (cVar15 == '\0') {
        uVar8 = (undefined4)in_dr0;
        uVar5 = 0x3f000000;
        *(undefined4 *)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        uVar8 = 0x3f000000;
        uVar5 = 0xb0;
        *(undefined8 *)(ar4 + 0x28) = 0xb03f000000;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pfVar6,ar6,uVar9);
      pfVar6 = ar5;
      Vec3_sub(ar4 + 0x2e4,ar5,ar6,uVar9,auStack_d0);
      uVar3 = Vec3_length(auStack_d0,pfVar6,ar6,uVar9);
      Vec3_assign(auStack_50,uVar3,ar6,uVar9);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_d0,0xffffffff,ar6,uVar9);
      FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,uVar9,auStack_e0);
      FUN_8c0230f0(auStack_50,uVar3,ar6,uVar9,auStack_f0);
      FUN_8c022dac(auStack_e0,auStack_f0,ar6,uVar9);
      Vec3_dtor(auStack_f0,0xffffffff,ar6,uVar9);
      Vec3_dtor(auStack_e0,0xffffffff,ar6,uVar9);
      FUN_8c022fc0(ar5,ar4 + 0x2e4,ar6,uVar9);
      if (cVar15 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),uVar5);
      }
      else {
        in_xd0 = CONCAT44(uVar5,uVar8);
        dVar12 = *(double *)(ar4 + 0x28);
      }
      if (cVar14 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      if (cVar15 == '\0') {
        *(float *)(ar4 + 0x30) = fVar11;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = in_xd0;
      }
      iVar4 = FUN_8c031764(ar4,ar4 + 0x2e4,ar5,uVar9);
      if (iVar4 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x40) = 0;
      }
      ar6 = (float *)0x1e;
      iVar4 = rand_range(ar4,0,0x1e,uVar9);
      if (iVar4 == 0) {
        *(undefined4 *)(ar4 + 0x240) = 1;
        FUN_8c033474(ar4,0xb,ar5,ar7);
        ar6 = ar5;
        uVar9 = ar7;
      }
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,uVar9);
      break;
    case 5:
      *(undefined4 *)(ar4 + 0x240) = 1;
      uVar9 = 0xb;
      FUN_8c033474(ar4,0xb,ar5,ar7);
      uVar8 = (undefined4)in_dr0;
      vec3_clear(ar4 + 0x54,uVar9,ar5,ar7);
      ar6 = ar5;
      uVar9 = ar7;
      if (_DAT_8c286db8 == 0) {
        uVar5 = 0xd;
        uVar9 = FUN_8c03c0f0(ar4 + 0xb0,0xd,ar5,ar7);
        ar5_00 = (int *)deref_u32(uVar9,uVar5,ar5,ar7);
        ar6 = (float *)0x1;
        iVar4 = FUN_8c0342ac(ar4 + 0xb0,ar5_00,1,ar7);
        if (iVar4 != 0) {
          _DAT_8c286db8 = iVar4;
        }
        *(undefined4 *)(*ar5_00 + 0x18) = 0;
        uVar9 = ar7;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      if (cVar15 == '\0') {
        *(undefined4 *)(ar4 + 0x2d0) = 0x3f800000;
        in_dr0 = CONCAT44(0x42f00000,uVar8);
        *(undefined4 *)(ar4 + 0x2cc) = 0x42f00000;
      }
      else {
        *(undefined8 *)(ar4 + 0x2d0) = CONCAT44(0x3f800000,uVar8);
        in_dr0 = 0x11042f00000;
        *(undefined8 *)(ar4 + 0x2cc) = 0x11042f00000;
      }
      iVar4 = ar4 + 0x80;
      FUN_8c0230f0(iVar4,iVar4,ar6,uVar9,auStack_100);
      uVar8 = Vec3_length(auStack_100,iVar4,ar6,uVar9);
      Vec3_assign(ar4 + 700,uVar8,ar6,uVar9);
      pfVar6 = (float *)0xffffffff;
      Vec3_dtor(auStack_100,0xffffffff,ar6,uVar9);
    case 6:
      fVar11 = (float)in_dr0;
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pfVar6,ar6,uVar9);
      if (cVar15 == '\0') {
        fVar11 = *(float *)(ar4 + 0x2d0);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x2d0);
      }
      if (cVar14 == '\0') {
        fVar11 = fVar11 + 1.0;
      }
      else {
        fVar11 = SUB84((double)CONCAT44(0x3f800000,fVar11) + (double)CONCAT44(0x3f800000,fVar11),0);
      }
      uStack_204 = in_xd0;
      if (cVar15 == '\0') {
        uStack_204 = CONCAT44(ar4,fVar11);
      }
      if (cVar15 == '\0') {
        *(undefined4 *)((*(uint*)((uchar*)&uStack_204+4)) + 0x2d0) = (undefined4)uStack_204;
        dVar12 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2cc),(undefined4)uStack_204);
      }
      else {
        *(undefined8 *)((*(uint*)((uchar*)&uStack_204+4)) + 0x2d0) = uStack_204;
        dVar12 = *(double *)(ar4 + 0x2cc);
        in_xd0 = uStack_204;
      }
      if (cVar14 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      uVar2 = in_xd0;
      if (cVar15 == '\0') {
        uStack_180 = CONCAT44((*(uint*)((uchar*)&uStack_180+4)),fVar11);
        uVar2 = uStack_180;
      }
      uStack_180 = uVar2;
      if (cVar14 == '\0') {
        dVar12 = (double)CONCAT44(1.0 - fVar11,fVar11);
      }
      else {
        dVar12 = (double)CONCAT44(0x3f800000,fVar11) - (double)CONCAT44(0x3f800000,fVar11);
      }
      dVar1 = dVar12;
      if (cVar15 == '\0') {
        uStack_188 = (double)CONCAT44((*(uint*)((uchar*)&uStack_188+4)),(int)((ulonglong)dVar12 >> 0x20));
        dVar1 = uStack_188;
      }
      uStack_188 = dVar1;
      Vec3_scale(ar4 + 0x80,&uStack_188,ar6,uVar9,auStack_110);
      Vec3_scale(ar4 + 700,&uStack_180,ar6,uVar9,auStack_120);
      Vec3_add(auStack_110,auStack_120,ar6,uVar9,auStack_130);
      Vec3_assign(ar4 + 0x80,auStack_130,ar6,uVar9);
      Vec3_dtor(auStack_130,0xffffffff,ar6,uVar9);
      Vec3_dtor(auStack_120,0xffffffff,ar6,uVar9);
      Vec3_dtor(auStack_110,0xffffffff,ar6,uVar9);
      FUN_8c022dac(ar4 + 0x80,ar4 + 700,ar6,uVar9);
      if (cVar15 == '\0') {
        dVar12 = (double)((ulonglong)dVar12 >> 0x20);
      }
      if (cVar14 != '\0' || SUB84(dVar12,0) <= 0.0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 7:
      uVar8 = 0xd;
      iVar4 = FUN_8c034148(ar4 + 0xb0,0xd,ar6,uVar9);
      if (iVar4 != 1) {
        if (iVar4 != 2) break;
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar8,ar6,uVar9);
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x314) = 1;
      break;
    case 8:
      iVar4 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pfVar6,ar6,uVar9);
      if (iVar4 == 1) {
        in_dr0 = in_dr0 & 0xffffffff;
        if (cVar15 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = in_dr0;
        }
        vec3_clear(ar4 + 0x54,1,ar6,uVar9);
        uVar10 = 0;
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x314) = 2;
        uVar9 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xe,0xffffffff,0);
        ar6 = (float *)(ar4 + 0xb0);
        ar5_01 = s_CAnimBody_SetFrame_033e6e;
        s_CAnimBody_SetFrame_033e6e(ar6,s_CAnimBody_SetFrame_033e6e,ar6,uVar9);
        FUN_8c022d04(ar4 + 0x304,ar5_01,ar6,uVar9);
      }
      CAnimBody_GetCurFrame(ar4 + 0xb0,CAnimBody_GetCurFrame,ar6,uVar9,ain0);
      FUN_8c034384(ar4 + 0xb0,_DAT_8c286db8,ar6,uVar9);
      Vec3_assign(auStack_30,auStack_140,ar6,uVar9);
      Vec3_dtor(auStack_140,0xffffffff,ar6,uVar9);
      Vec3_sub(auStack_30,ar4 + 0x54,ar6,uVar9,auStack_150);
      Vec3_assign(auStack_40,auStack_150,ar6,uVar9);
      Vec3_dtor(auStack_150,0xffffffff,ar6,uVar9);
      puVar7 = auStack_30;
      Vec3_assign(ar4 + 0x54,puVar7,ar6,uVar9);
      Vec3_ctor_xyz(auStack_160,puVar7,ar6,uVar9);
      iVar4 = FUN_8c023d04(auStack_40,auStack_160,ar6,uVar9);
      uVar8 = 0xffffffff;
      Vec3_dtor(auStack_160,0xffffffff,ar6,uVar9);
      if (iVar4 != 0) {
        vec3_copy_8c02b5fc(auStack_16c,ain0,ar6,uVar9);
        puVar7 = auStack_16c;
        FUN_8c023484(auStack_40,puVar7,ar6,uVar9,(int)&uStack_180 + 4);
        uVar8 = Vec3_length((int)&uStack_180 + 4,puVar7,ar6,uVar9);
        Vec3_assign(ar4 + 0x14,uVar8,ar6,uVar9);
        Vec3_dtor((int)&uStack_180 + 4,0xffffffff,ar6,uVar9);
        uVar8 = 0xffffffff;
        object_dtor_delete(auStack_16c,0xffffffff,ar6,uVar9);
      }
      Vec3_length_sq(auStack_40,uVar8,ar6,uVar9);
      if (cVar15 == '\0') {
        *(int *)(ar4 + 0x28) = (int)(in_dr0 >> 0x20);
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0;
      }
    }
  }
  (*(uint*)((uchar*)&uStack_188+4)) = uVar10;
  Vec3_dtor(auStack_50,0xffffffff,ar6,uVar9);
  Vec3_dtor(auStack_40,0xffffffff,ar6,uVar9);
  Vec3_dtor(auStack_30,0xffffffff,ar6,uVar9);
  return (*(uint*)((uchar*)&uStack_188+4));
}

__asm__(".globl _FUN_8c0b0eec\n.set _FUN_8c0b0eec, _FUN_8c0b0eec_def\n");
