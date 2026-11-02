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
