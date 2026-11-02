#include "../decls.h"
undefined4 FUN_8c0b54f4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  double dVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  int ar6_00;
  float in_fr1;
  double dVar3;
  float fVar5;
  ulonglong uVar4;
  float fVar6;
  undefined4 in_fr14;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  float fStack_e0;
  float fStack_dc;
  undefined4 auStack_d8 [4];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [12];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  double dStack_20;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  FUN_8c022d04(ar4 + 0x200,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    fStack_dc = 0.0;
  }
  else {
    auStack_d8[0] = 0;
    fStack_dc = in_fr1;
  }
  fVar6 = 1.0;
  Vec3_ctor_zero(auStack_24,uVar2,ar6_00,ar7);
  Vec3_ctor_zero(auStack_34,uVar2,ar6_00,ar7);
  Vec3_ctor_zero(auStack_44,uVar2,ar6_00,ar7);
  Vec3_ctor_zero(auStack_54,uVar2,ar6_00,ar7);
  if ((*(int *)(ar6 + 0x68) == 0) || (-1 < (int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1e))) {
    if ((*(int *)(ar6 + 0x88) != 0) && ((int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1b) < 0)) {
      *(undefined4 *)(ar4 + 0x1d4) = 2;
    }
    Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
    uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  }
  else {
    *(undefined4 *)(ar4 + 0x1d4) = 1;
    if (cVar8 == '\0') {
      fVar6 = *(float *)(*(int *)(ar6 + 0x68) + 0x158);
    }
    Vec3_assign(auStack_24,*(int *)(ar6 + 0x68) + 4,ar6_00,ar7);
    dVar3 = dStack_20;
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44((*(uint*)((uchar*)&dStack_20+0)),in_fr1);
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) + fVar6,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + (double)CONCAT44(in_fr14,fVar6);
    }
    dVar1 = dVar3;
    if (cVar8 == '\0') {
      dStack_20 = (double)CONCAT44((*(uint*)((uchar*)&dStack_20+4)),(int)((ulonglong)dVar3 >> 0x20));
      dVar1 = dStack_20;
    }
    dStack_20 = dVar1;
    Vec3_sub(ar5,auStack_24,ar6_00,ar7,auStack_64);
    Vec3_assign(ar4 + 0x200,auStack_64,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(ar4 + 0x200,uVar2,ar6_00,ar7);
    fVar5 = (float)((ulonglong)dVar3 >> 0x20);
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(fVar5,*(undefined4 *)(ar4 + 0x48));
      fStack_e0 = fVar5;
    }
    else {
      fStack_e0 = SUB84(dVar3,0);
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      fStack_dc = fVar5;
    }
    if (cVar7 == '\0') {
      fVar6 = SUB84(dVar3,0) + fVar6;
    }
    else {
      fVar6 = SUB84(dVar3 + (double)CONCAT44(in_fr14,fVar6),0);
    }
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(fStack_e0,fVar6);
    }
    else {
      dVar3 = (double)CONCAT44(fStack_dc,fStack_e0);
    }
    if (cVar7 == '\0') {
      fVar6 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar3 - dVar3,0);
    }
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(0x3dcccccd,fVar6);
    }
    else {
      dVar3 = -7.93713999303812e-251;
    }
    if (cVar7 == '\0') {
      fVar6 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar3 * dVar3,0);
    }
    fStack_dc = fVar6;
    if (cVar8 != '\0') {
      fStack_dc = (float)in_xd0;
      auStack_d8[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    if (cVar7 == '\0' && fVar6 < 0.0) {
      if (cVar8 == '\0') {
        fStack_dc = 0.0;
      }
      else {
        auStack_d8[0] = 0;
        fStack_dc = fVar6;
      }
    }
    uVar4 = (ulonglong)(uint)fVar6;
    Vec3_length(ar4 + 0x200,uVar2,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x200,&fStack_dc,ar6_00,ar7);
    Vec3_assign(auStack_34,ar5,ar6_00,ar7);
    Vec3_assign(auStack_44,*(int *)(ar6 + 0x68) + 4,ar6_00,ar7);
    Vec3_sub(auStack_44,auStack_34,ar6_00,ar7,auStack_74);
    Vec3_assign(auStack_54,auStack_74,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
    Vec3_set_xyz(auStack_80,uVar2,ar6_00,ar7);
    FUN_8c023484(auStack_54,auStack_80,ar6_00,ar7,auStack_90);
    Vec3_assign(auStack_54,auStack_90,ar6_00,ar7);
    Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_80,0xffffffff,ar6_00,ar7);
    ar5_00 = auStack_54;
    FUN_8c022d14(ar4 + 0x14,ar5_00,ar6_00,ar7);
    if (cVar8 == '\0') {
      uVar4 = uVar4 >> 0x20;
    }
    if (cVar7 == '\0' && 0.0 < (float)uVar4) {
      Vec3_set_xyz(auStack_b8,ar5_00,ar6_00,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_b8,ar6_00,ar7,auStack_c8);
      Vec3_assign(ar4 + 0x14,auStack_c8,ar6_00,ar7);
      Vec3_dtor(auStack_c8,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_b8,0xffffffff,ar6_00,ar7);
    }
    else {
      Vec3_set_xyz(auStack_9c,ar5_00,ar6_00,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_9c,ar6_00,ar7,auStack_ac);
      Vec3_assign(ar4 + 0x14,auStack_ac,ar6_00,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_9c,0xffffffff,ar6_00,ar7);
      FUN_8c023bf4(auStack_54,&DAT_8c13bacc,ar6_00,ar7);
    }
    Vec3_scale(auStack_54,&DAT_8c13bad0,ar6_00,ar7,auStack_d8);
    FUN_8c023aa0(ar4 + 0x200,auStack_d8,ar6_00,ar7);
    Vec3_dtor(auStack_d8,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
    uVar2 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0b54f4\n.set _FUN_8c0b54f4, _FUN_8c0b54f4_def\n");
