#include "../decls.h"
undefined4 FUN_8c08f354_def(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar5_01;
  int iVar2;
  int iVar3;
  int ar5_02;
  undefined4 ar6_00;
  int iVar4;
  undefined4 in_fr1;
  float fVar5;
  undefined8 uVar6;
  code *pcVar8;
  float fVar9;
  double dVar7;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  int in_stack_00000000;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  iVar3 = ar6;
  iVar2 = ar5;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  Vec3_set_zero(auStack_3c,ar5,iVar3,ar7);
  iVar4 = iVar2 + 0xb;
  if (cVar11 == '\0') {
    in_fr1 = *(undefined4 *)(ar4 + 0x2cc);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
  }
  ar5_02 = 0x27c;
  if (cVar11 == '\0') {
    uVar6 = CONCAT44(*(undefined4 *)(ar4 + 0x27c),in_fr1);
  }
  else {
    uVar6 = *(undefined8 *)(ar4 + 0x27c);
  }
  if (((float)uVar6 == (float)((ulonglong)uVar6 >> 0x20)) &&
     (ar5_02 = *(int *)(ar4 + 0x284), 0 < ar5_02)) {
    if (*(int *)(ar4 + 0x284) == 0x15) {
      ar7 = 0;
      uVar1 = 0xffffffff;
      ar5_02 = 4;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_02,uVar1,ar7);
      *(int *)(ar4 + 0x284) = *(int *)(ar4 + 0x284) + -1;
      iVar3 = ar4;
    }
    fVar5 = (float)((ulonglong)uVar6 >> 0x20);
    iVar4 = FUN_8c03f3ac(ar4 + 0xb0,ar5_02,iVar3,ar7);
    if (iVar4 == 7) {
      *(int *)(ar4 + 0x284) = *(int *)(ar4 + 0x284) + -1;
      if (*(int *)(ar4 + 0x284) == 0) {
        ar7 = 0;
        iVar3 = -1;
        ar5_02 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      }
      else if (*(int *)(ar4 + 0x284) == 10) {
        ar5_02 = *(int *)(ar4 + 0x2f8);
        FUN_8c06b154(*(undefined4 *)(ar4 + 0x2f4),ar5_02,iVar3,ar7);
      }
    }
    CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_02,iVar3,ar7,iVar2);
    if (cVar11 == '\0') {
      pcVar8 = (code *)0x42480000;
    }
    else {
      fVar5 = 50.0;
      pcVar8 = libgcc_divide_helper_01031c;
    }
    if (fVar5 == (float)(uint)pcVar8) {
      iVar2 = libgcc_divide_helper_01031c(iVar2,3,iVar3,ar7);
      if (iVar2 == 0) {
        FUN_8c033474(ar4,0x22,ar6,in_stack_00000000);
        iVar3 = ar6;
        ar7 = in_stack_00000000;
      }
      else if (iVar2 == 1) {
        FUN_8c033474(ar4,0x23,ar6,in_stack_00000000);
        iVar3 = ar6;
        ar7 = in_stack_00000000;
      }
      else if (iVar2 == 2) {
        FUN_8c033474(ar4,0x25,ar6,in_stack_00000000);
        iVar3 = ar6;
        ar7 = in_stack_00000000;
      }
    }
  }
  else {
    FUN_8c03f3ac(ar4 + 0xb0,ar5_02,iVar3,ar7);
    fVar5 = (float)uVar6;
    if (cVar11 == '\0') {
      fVar5 = *(float *)(ar4 + 0x2cc);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
    }
    if (cVar10 == '\0') {
      fVar5 = fVar5 + 1.0;
    }
    else {
      fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) + (double)CONCAT44(0x3f800000,fVar5),0);
    }
    if (cVar11 == '\0') {
      *(float *)(ar4 + 0x2cc) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + 0x2cc) = in_xd0;
    }
    iVar2 = iVar4;
    uVar1 = FUN_8c03c0f0(ar4 + 0xb0,iVar4,iVar3,ar7);
    uVar1 = deref_u32(uVar1,iVar2,iVar3,ar7);
    ar5_00 = FUN_8c0342ac(ar4 + 0xb0,uVar1,0,ar7);
    ar6_00 = 0;
    iVar3 = ar4 + 0xb0;
    ar5_01 = FUN_8c034548(iVar3,uVar1,0,ar7);
    if (iVar4 < 0xe) {
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 0x2cc);
        pcVar8 = (code *)0x45938000;
      }
      else {
        fVar5 = 4720.0;
        pcVar8 = rand;
      }
      if (fVar5 == (float)(uint)pcVar8) {
        iVar3 = rand(iVar3,uVar1,ar6_00,ar7);
        uVar1 = 2;
        iVar2 = libgcc_divide_helper_01031c(iVar3,2,ar6_00,ar7);
        if (iVar2 != 0) {
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x2cc) = 0x45cf8800;
          }
          else {
            *(undefined8 *)(ar4 + 0x2cc) = 0x45c5800045cf8800;
          }
        }
      }
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 0x2cc);
        fVar9 = 6320.0;
      }
      else {
        fVar5 = 6320.0;
        fVar9 = 4.2039e-43;
      }
      if (fVar5 == fVar9) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7);
        ar7 = 0;
        ar6_00 = 0xffffffff;
        uVar1 = 10;
        iVar3 = ar4 + 0xb0;
        s_CAnimBody_SetAnimation_033a94(iVar3,10,0xffffffff,0);
      }
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 0x2cc);
        fVar9 = 7040.0;
      }
      else {
        fVar5 = 7040.0;
        fVar9 = 1921.0;
      }
      if (fVar5 == fVar9) {
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x2cc) = 0x44f02000;
        }
        else {
          fVar5 = 1921.0;
          *(undefined8 *)(ar4 + 0x2cc) = 0x28444f02000;
        }
        *(undefined4 *)(ar4 + 0x284) = 0x15;
        uVar1 = rand(iVar3,uVar1,ar6_00,ar7);
        iVar3 = libgcc_divide_helper_01031c(uVar1,0xaf0,ar6_00,ar7);
        if (cVar10 == '\0') {
          dVar7 = (double)CONCAT44((float)(iVar3 + 0x781),fVar5);
        }
        else {
          dVar7 = (double)(iVar3 + 0x781);
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x27c) = (int)((ulonglong)dVar7 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x27c) = dVar7;
        }
      }
    }
    else {
      if (cVar11 == '\0') {
        fVar5 = *(float *)(ar4 + 0x2cc);
        fVar9 = 8720.0;
      }
      else {
        fVar5 = 8720.0;
        fVar9 = 4.2039e-43;
      }
      if (fVar5 == fVar9) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7);
        ar7 = 0;
        ar6_00 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0);
      }
    }
    FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2d0,auStack_4c,ar6_00,ar7);
    Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7);
    FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_00,ar7);
    FUN_8c034384(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    Vec3_assign(ar4 + 0x2e0,auStack_5c,ar6_00,ar7);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7);
    Vec3_set_xyz(auStack_68,uVar1,ar6_00,ar7);
    FUN_8c023484(ar4 + 0x2d0,auStack_68,ar6_00,ar7,auStack_78);
    Vec3_assign(ar4 + 0x2d0,auStack_78,ar6_00,ar7);
    Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_68,0xffffffff,ar6_00,ar7);
    FUN_8c034650(ar4 + 0xb0,ar5_01,ar6_00,ar7);
    vec3_copy_8c023d8c(auStack_3c,auStack_84,ar6_00,ar7);
    uVar1 = 0xffffffff;
    object_dtor_delete(auStack_84,0xffffffff,ar6_00,ar7);
    Vec3_ctor_xyz(auStack_94,uVar1,ar6_00,ar7);
    Vec3_set_xyz(auStack_a0,uVar1,ar6_00,ar7);
    FUN_8c023484(auStack_94,auStack_a0,ar6_00,ar7,auStack_b0);
    Vec3_assign(ar4 + 0x14,auStack_b0,ar6_00,ar7);
    Vec3_dtor(auStack_b0,0xffffffff,ar6_00,ar7);
    object_dtor_delete(auStack_a0,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7);
    ar7 = ar4 + 0x14;
    iVar3 = 0x80;
    Vec3_assign(ar4 + 0x80,ar7,0x80,ar7);
  }
  object_dtor_delete(auStack_3c,0xffffffff,iVar3,ar7);
  Vec3_dtor(auStack_30,0xffffffff,Vec3_dtor,ar7);
  return 1;
}

__asm__(".globl _FUN_8c08f354\n.set _FUN_8c08f354, _FUN_8c08f354_def\n");
