#include "../decls.h"
undefined4 FUN_8c0911f0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar5_01;
  int iVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  float in_fr1;
  float fVar5;
  float fVar7;
  double dVar6;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = ar5;
  iVar3 = ar6;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  Vec3_set_zero(auStack_3c,uVar4,iVar3,ar7);
  iVar1 = libgcc_divide_helper_01031c(ar5,3,iVar3,ar7);
  iVar1 = iVar1 + 0x11;
  uVar4 = 10;
  iVar2 = FUN_8c034148(ar4 + 0xb0,10,iVar3,ar7);
  if ((iVar2 == 1) || (iVar2 == 2)) {
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,iVar3,ar7);
    if (cVar9 == '\0') {
      in_fr1 = *(float *)(ar4 + 0x2cc);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
    }
    if (cVar8 == '\0') {
      in_fr1 = in_fr1 + 1.0;
    }
    else {
      in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x2cc) = in_fr1;
    }
    else {
      *(undefined8 *)(ar4 + 0x2cc) = in_xd0;
    }
    uVar4 = FUN_8c03c0f0(ar4 + 0xb0,iVar1,iVar3,ar7);
    uVar4 = deref_u32(uVar4,iVar1,iVar3,ar7);
    ar5_00 = FUN_8c0342ac(ar4 + 0xb0,uVar4,0,ar7);
    ar6_00 = 0;
    ar5_01 = FUN_8c034548(ar4 + 0xb0,uVar4,0,ar7);
    if (cVar9 == '\0') {
      fVar5 = *(float *)(ar4 + 0x2cc);
      fVar7 = 319.0;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
      fVar5 = 319.0;
      fVar7 = 4.2039e-43;
    }
    if (fVar5 == fVar7) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7);
      ar7 = 0;
      ar6_00 = 0xffffffff;
      uVar4 = 0;
      iVar3 = ar4 + 0xb0;
      s_CAnimBody_SetAnimation_033a94(iVar3,0,0xffffffff,0);
      uVar4 = rand(iVar3,uVar4,ar6_00,ar7);
      iVar3 = libgcc_divide_helper_01031c(uVar4,0x4c4,ar6_00,ar7);
      *(int *)(ar4 + 0x284) = iVar3 + 0x9c4;
    }
    FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2d0,auStack_4c,ar6_00,ar7);
    Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7);
    FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7);
    FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2e0,auStack_5c,ar6_00,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7);
    Vec3_set_xyz(auStack_68,uVar4,ar6_00,ar7);
    FUN_8c023484(ar4 + 0x2d0,auStack_68,ar6_00,ar7,auStack_78);
    Vec3_assign(ar4 + 0x2d0,auStack_78,ar6_00,ar7);
    Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_68,0xffffffff,ar6_00,ar7);
    FUN_8c034650(ar4 + 0xb0,ar5_01,ar6_00,ar7);
    vec3_copy_8c023d8c(ar6,auStack_84,ar6_00,ar7);
    object_dtor_delete(auStack_84,0xffffffff,ar6_00,ar7);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2a0),*(undefined4 *)(ar6 + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(ar6 + 4);
      dVar6 = *(double *)(ar4 + 0x2a0);
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 700),fVar5);
    }
    else {
      dVar6 = *(double *)(ar4 + 700);
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(0x43340000,fVar5);
    }
    else {
      dVar6 = 1.4180502381632e-311;
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar6 + 4) = fVar5;
    }
    else {
      *(undefined8 *)(ar6 + 4) = in_xd0;
    }
    object_dtor_delete(auStack_3c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7);
  }
  else {
    object_dtor_delete(auStack_3c,0xffffffff,iVar3,ar7);
    Vec3_dtor(auStack_30,0xffffffff,iVar3,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c0911f0\n.set _FUN_8c0911f0, _FUN_8c0911f0_def\n");
