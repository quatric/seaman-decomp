#include "../decls.h"
undefined4 FUN_8c0a9578_def(int ar4,undefined4 ar5,double *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  double *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  ulonglong in_dr0;
  double dVar6;
  double dVar7;
  double in_xd0;
  char cVar8;
  char cVar9;
  int *in_stack_00000000;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar3 = 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  uVar4 = (uint)in_dr0;
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    Vec3_assign(ar4 + 0x2174,ar4 + 0x80,ar6_00,ar7_00);
    dVar7 = (double)(ulonglong)uVar4;
    if (cVar9 == '\0') {
      *(undefined4 *)(ar4 + 0x2194) = 0;
    }
    else {
      *(double *)(ar4 + 0x2194) = dVar7;
    }
    Vec3_assign(ar4 + 0x54,ar5,ar6_00,ar7_00);
    ar5_00 = ar4 + 0x14;
    Vec3_assign(ar4 + 0x80,ar5_00,ar6_00,ar7_00);
    FUN_8c023d7c(ar4 + 0x21a8,ar5_00,ar6_00,ar7_00);
    FUN_8c023d7c(ar7,ar5_00,ar6_00,ar7_00);
    iVar1 = *(int *)(ar4 + 0x2198);
    if (iVar1 == 1) {
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x42c80000,*(undefined4 *)(ar6 + 1));
      }
      else {
        in_xd0 = ar6[1];
        dVar7 = 1.82072774393391e-310;
      }
      if (cVar8 == '\0') {
        fVar5 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) - fVar5);
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x5c) = SUB84(dVar7,0);
      }
      else {
        *(double *)(ar4 + 0x5c) = in_xd0;
      }
      FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00);
    }
    else if (iVar1 == 2) {
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x42c80000,SUB84(dVar7,0));
        *(undefined4 *)(ar4 + 0x5c) = 0x42c80000;
      }
      else {
        dVar7 = 1.82072774393391e-310;
        *(undefined8 *)(ar4 + 0x5c) = 0x218442c80000;
      }
      FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00);
    }
    else if (iVar1 == 3) {
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x42c80000,*(undefined4 *)ar6);
      }
      else {
        in_xd0 = *ar6;
        dVar7 = 1.82072774393391e-310;
      }
      if (cVar8 == '\0') {
        fVar5 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) - fVar5);
      }
      else {
        dVar7 = dVar7 - dVar7;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x54) = SUB84(dVar7,0);
      }
      else {
        *(double *)(ar4 + 0x54) = in_xd0;
      }
      FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00);
    }
    else if (iVar1 == 4) {
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x42c80000,SUB84(dVar7,0));
        *(undefined4 *)(ar4 + 0x54) = 0x42c80000;
      }
      else {
        dVar7 = 1.82072774393391e-310;
        *(undefined8 *)(ar4 + 0x54) = 0x218442c80000;
      }
      FUN_8c022d04(ar4 + 0x2184,ar5_00,ar6_00,ar7_00);
    }
    (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x54,ar6_00,ar7_00);
    uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (cVar9 == '\0') {
      *(undefined4 *)(ar4 + 0x58) = uVar2;
    }
    else {
      *(double *)(ar4 + 0x58) = dVar7;
      uStack_70 = uVar2;
    }
    FUN_8c022fc0(ar5,ar4 + 0x54,ar6_00,ar7_00);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(0x40a00000,(int)((ulonglong)dVar7 >> 0x20));
    }
    else {
      dVar6 = -7.956827002088933e-251;
      in_xd0 = dVar7;
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
    }
    else {
      *(double *)(ar4 + 0x28) = in_xd0;
    }
    Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7_00,auStack_38);
    Vec3_assign(ar4 + 0x14,auStack_38,ar6_00,ar7_00);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
    Vec3_length(ar4 + 0x14,uVar2,ar6_00,ar7_00);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2194) = in_dr0 & 0xffffffff;
      }
      uVar3 = 0;
      Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7_00);
      *(undefined4 *)(ar4 + 0x2198) = 0;
      *(undefined4 *)(ar4 + 300) = 0;
    }
    goto LAB_8c0a984a;
  }
  if (cVar9 == '\0') {
    dVar7 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x2194));
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x2194);
    dVar7 = -7.957972460180408e-251;
  }
  if (cVar8 == '\0') {
    fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar7 + dVar7,0);
  }
  if (cVar9 == '\0') {
    *(float *)(ar4 + 0x2194) = fVar5;
    fVar5 = *(float *)(ar4 + 0x2194);
  }
  else {
    *(double *)(ar4 + 0x2194) = in_xd0;
  }
  if (cVar8 != '\0' || 1.0 <= fVar5) {
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    if (cVar9 == '\0') {
      *(undefined4 *)(ar4 + 0x2194) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x2194) = CONCAT44(0x3f800000,fVar5);
    }
  }
  if (cVar9 == '\0') {
    fVar5 = *(float *)(ar4 + 0x2194);
  }
  if (cVar8 == '\0') {
    dVar7 = (double)CONCAT44(1.0 - fVar5,fVar5);
  }
  else {
    dVar7 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
  }
  uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
  uStack_70 = uVar2;
  if (cVar9 != '\0') {
    uStack_70 = SUB84(dVar7,0);
    uStack_6c = uVar2;
  }
  Vec3_scale(ar4 + 0x80,&uStack_70,ar6_00,ar7_00,auStack_48);
  Vec3_scale(ar4 + 0x2184,ar4 + 0x2194,ar6_00,ar7_00,auStack_58);
  Vec3_add(auStack_48,auStack_58,ar6_00,ar7_00,auStack_68);
  Vec3_assign(ar4 + 0x80,auStack_68,ar6_00,ar7_00);
  Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
  FUN_8c031ab4(ar4,ar7,ar6_00,ar7_00);
LAB_8c0a984a:
  uStack_6c = uVar3;
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  return uStack_6c;
}

__asm__(".globl _FUN_8c0a9578\n.set _FUN_8c0a9578, _FUN_8c0a9578_def\n");
