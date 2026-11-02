#include "../decls.h"
undefined4 FUN_8c08eef4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar5_01;
  undefined4 uVar2;
  undefined4 ar6_00;
  int ar5_02;
  float in_fr1;
  float fVar3;
  float fVar5;
  double dVar4;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [12];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar1 = ar5;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  Vec3_set_zero(auStack_38,iVar1,ar6,ar7);
  ar5_02 = ar5 + 0xb;
  uVar2 = 10;
  iVar1 = FUN_8c034148(ar4 + 0xb0,10,ar6,ar7);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
    if (cVar7 == '\0') {
      in_fr1 = *(float *)(ar4 + 0x2cc);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
    }
    if (cVar6 == '\0') {
      in_fr1 = in_fr1 + 1.0;
    }
    else {
      in_fr1 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
    }
    if (cVar7 == '\0') {
      *(float *)(ar4 + 0x2cc) = in_fr1;
    }
    else {
      *(undefined8 *)(ar4 + 0x2cc) = in_xd0;
    }
    iVar1 = ar5_02;
    uVar2 = FUN_8c03c0f0(ar4 + 0xb0,ar5_02,ar6,ar7);
    uVar2 = deref_u32(uVar2,iVar1,ar6,ar7);
    ar5_00 = FUN_8c0342ac(ar4 + 0xb0,uVar2,0,ar7);
    ar6_00 = 0;
    ar5_01 = FUN_8c034548(ar4 + 0xb0,uVar2,0,ar7);
    if (cVar7 == '\0') {
      fVar3 = *(float *)(ar4 + 0x2cc);
      fVar5 = 319.0;
    }
    else {
      fVar3 = 319.0;
      fVar5 = 4.2039e-43;
    }
    if (fVar3 == fVar5) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7);
      ar7 = 0;
      ar6_00 = 0xffffffff;
      uVar2 = 0;
      iVar1 = ar4 + 0xb0;
      s_CAnimBody_SetAnimation_033a94(iVar1,0,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x284) = 0x15;
      if (ar5_02 < 0xe) {
        uVar2 = rand(iVar1,uVar2,ar6_00,ar7);
        iVar1 = libgcc_divide_helper_01031c(uVar2,0xaf0,ar6_00,ar7);
        if (cVar6 == '\0') {
          dVar4 = (double)CONCAT44((float)(iVar1 + 0x781),fVar3);
        }
        else {
          dVar4 = (double)(iVar1 + 0x781);
        }
        if (cVar7 == '\0') {
          *(int *)(ar4 + 0x27c) = (int)((ulonglong)dVar4 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x27c) = dVar4;
        }
      }
      else {
        uVar2 = rand(iVar1,uVar2,ar6_00,ar7);
        iVar1 = libgcc_divide_helper_01031c(uVar2,3000,ar6_00,ar7);
        if (cVar6 == '\0') {
          dVar4 = (double)CONCAT44((float)(iVar1 + 2000),fVar3);
        }
        else {
          dVar4 = (double)(iVar1 + 2000);
        }
        if (cVar7 == '\0') {
          *(int *)(ar4 + 0x27c) = (int)((ulonglong)dVar4 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x27c) = dVar4;
        }
      }
      *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb | 4;
    }
    FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2d0,auStack_48,ar6_00,ar7);
    Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7);
    FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7);
    FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2e0,auStack_58,ar6_00,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7);
    Vec3_set_xyz(auStack_64,uVar2,ar6_00,ar7);
    FUN_8c023484(ar4 + 0x2d0,auStack_64,ar6_00,ar7,auStack_74);
    Vec3_assign(ar4 + 0x2d0,auStack_74,ar6_00,ar7);
    Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_64,0xffffffff,ar6_00,ar7);
    FUN_8c034650(ar4 + 0xb0,ar5_01,ar6_00,ar7);
    vec3_copy_8c023d8c(auStack_38,auStack_80,ar6_00,ar7);
    uVar2 = 0xffffffff;
    object_dtor_delete(auStack_80,0xffffffff,ar6_00,ar7);
    Vec3_ctor_xyz(auStack_90,uVar2,ar6_00,ar7);
    Vec3_set_xyz(auStack_9c,uVar2,ar6_00,ar7);
    FUN_8c023484(auStack_90,auStack_9c,ar6_00,ar7,auStack_ac);
    Vec3_assign(ar4 + 0x14,auStack_ac,ar6_00,ar7);
    Vec3_dtor(auStack_ac,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_9c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7);
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
    object_dtor_delete(auStack_38,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
  }
  else {
    object_dtor_delete(auStack_38,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c08eef4\n.set _FUN_8c08eef4, _FUN_8c08eef4_def\n");
