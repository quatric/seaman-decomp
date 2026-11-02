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
