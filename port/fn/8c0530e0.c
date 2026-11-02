#include "../decls.h"
undefined4 FUN_8c0530e0_def(int ar4,int *ar5,undefined1 *ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *ar5_00;
  int *ar5_01;
  undefined1 *ar6_00;
  undefined4 uVar4;
  double dVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  ar5_01 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  FUN_8c031748(ar4,ar5_01,ar6_00,ar7);
  if (cVar9 == '\0') {
    dVar5 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x28);
    dVar5 = 4294968310.4;
  }
  if (cVar8 == '\0') {
    fVar6 = (float)((ulonglong)dVar5 >> 0x20);
    dVar5 = (double)CONCAT44(fVar6,SUB84(dVar5,0) * fVar6);
  }
  else {
    dVar5 = dVar5 * dVar5;
  }
  if (cVar9 == '\0') {
    *(int *)(ar4 + 0x28) = SUB84(dVar5,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_xd0;
  }
  FUN_8c05ae54(ar4,ar5_01,ar6_00,ar7);
  uVar2 = FUN_8c053724(ar5,ar5_01,ar6_00,ar7);
  if ((char)uVar2 == '\0') {
    iVar3 = (**(code **)(*ar5 + 0x34))(ar5,ar5_01,ar6_00,ar7);
    if (iVar3 != 0) {
      uVar2 = (**(code **)(*ar5 + 0x34))(ar5,ar5_01,ar6_00,ar7);
      uVar7 = (undefined4)((ulonglong)dVar5 >> 0x20);
      *(undefined4 *)(ar4 + 0x348) = uVar2;
      ar5_00 = &DAT_8c125d48;
      Vec3_assign(auStack_24,&DAT_8c125d48,ar6_00,ar7);
      if (*(int *)(ar4 + 0x348) == 3) {
        Vec3_ctor_xyz(auStack_34,ar5_00,ar6_00,ar7);
        Vec3_assign(auStack_24,auStack_34,ar6_00,ar7);
        ar5_00 = (undefined *)0xffffffff;
        Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
      }
      else if (*(int *)(ar4 + 0x348) == 4) {
        Vec3_ctor_xyz(auStack_44,ar5_00,ar6_00,ar7);
        Vec3_assign(auStack_24,auStack_44,ar6_00,ar7);
        ar5_00 = (undefined *)0xffffffff;
        Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x348) = 0;
      }
      FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6_00,ar7,auStack_54);
      FUN_8c022dac(auStack_54,auStack_24,ar6_00,ar7);
      if (cVar9 == '\0') {
        dVar5 = (double)CONCAT44(0x40a00000,uVar7);
      }
      else {
        dVar5 = -7.932637912122029e-251;
      }
      fVar6 = SUB84(dVar5,0);
      uVar1 = (ulonglong)dVar5 >> 0x20;
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
      if (cVar8 == '\0' && fVar6 < (float)uVar1) {
        *(undefined4 *)(ar4 + 0x348) = 0;
      }
      ar5_01 = (int *)0x0;
      (**(code **)(*ar5 + 0x38))(ar5,0,ar6_00,ar7);
      if ((*(int *)(ar4 + 0x348) != *(int *)(ar4 + 0x344)) && (*(int *)(ar4 + 0x344) == 0)) {
        *(undefined4 *)(ar4 + 0x344) = *(undefined4 *)(ar4 + 0x348);
        *(undefined4 *)(ar4 + 0x284) = 0;
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x28c) = 0;
      }
    }
    iVar3 = *(int *)(ar4 + 0x344);
    if (iVar3 == 0) {
      iVar3 = *(int *)(ar4 + 300);
      if (iVar3 == 0) {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_01,ar6_00,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          if (*(int *)(ar4 + 0x27c) == 0) {
            iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_01,ar6_00,ar7);
          }
          else {
            iVar3 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5_01,ar6_00,ar7);
          }
          if ((iVar3 == 7) || (iVar3 == 1)) {
            *(undefined4 *)(ar4 + 300) = 1;
          }
        }
        goto LAB_8c0536da;
      }
      iVar3 = *(int *)(ar4 + 0x27c);
      if (iVar3 == 0) {
        iVar3 = rand_range(ar4,0,100,ar7);
        if (iVar3 == 0) {
          ar7 = 0;
          ar6_00 = (undefined1 *)0xffffffff;
          ar5_01 = (int *)0x2;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
        }
        else {
          ar5_01 = (int *)FUN_8c032af8(ar4,0,2,10);
          ar7 = 0;
          ar6_00 = (undefined1 *)0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_01,0xffffffff,0);
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_01,ar6_00,ar7);
      }
      else if (iVar3 == 3) {
        ar7 = 0;
        ar6_00 = (undefined1 *)0xffffffff;
        ar5_01 = (int *)0xb;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0);
      }
      else if (iVar3 == 4) {
        ar7 = 0;
        ar6_00 = (undefined1 *)0xffffffff;
        ar5_01 = (int *)0xc;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xc,0xffffffff,0);
      }
      FUN_8c032ab0(ar4,ar5_01,ar6_00,ar7);
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x340) = (int)((ulonglong)dVar5 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x340) = dVar5;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x2b8) = 3;
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      if (*(int *)(ar4 + 300) == 0) {
        if (*(int *)(ar4 + 0x344) == 3) {
          Vec3_ctor_xyz(auStack_64,ar5_01,ar6_00,ar7);
          Vec3_assign(ar4 + 0x54,auStack_64,ar6_00,ar7);
          uVar2 = 0xffffffff;
          Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
        }
        else {
          Vec3_ctor_xyz(auStack_74,ar5_01,ar6_00,ar7);
          Vec3_assign(ar4 + 0x54,auStack_74,ar6_00,ar7);
          uVar2 = 0xffffffff;
          Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
        }
        if (*(int *)(ar4 + 0x128) == 0) {
          if (cVar9 == '\0') {
            *(undefined4 *)(ar4 + 0x5c) = 0x3f000000;
          }
          else {
            *(undefined8 *)(ar4 + 0x5c) = 0x8c022f543f000000;
          }
        }
        Vec3_length(ar4 + 0x54,uVar2,ar6_00,ar7);
        if (*(int *)(ar4 + 0x27c) == 0) {
          *(undefined4 *)(ar4 + 0x28c) = 1;
          FUN_8c02a1fc(ar4 + 0x2c8,uVar2,ar6_00,ar7);
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else if (*(int *)(ar4 + 300) != 1) goto LAB_8c0536da;
      Vec3_ctor_copy(auStack_84,ar4 + 0x54,ar6_00,ar7);
      ar6_00 = auStack_84;
      iVar3 = FUN_8c051c14(ar4,ar6,ar6_00,ar7);
      Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
      if (iVar3 == 0) {
        *(undefined4 *)(ar4 + 300) = 0;
        if (*(int *)(ar4 + 0x344) == 3) {
          *(undefined4 *)(ar4 + 0x27c) = 4;
        }
        else {
          *(undefined4 *)(ar4 + 0x27c) = 3;
        }
        *(undefined4 *)(ar4 + 0x344) = 0;
      }
    }
  }
  else {
    iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_01,ar6_00,ar7);
    if (iVar3 == 1) {
      *(undefined4 *)(ar4 + 300) = 0;
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x340) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x340) = CONCAT44(0x3f800000,SUB84(dVar5,0));
      }
      uVar4 = 0;
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(ar4 + 0x284) = 0;
    }
  }
LAB_8c0536da:
  Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c0530e0\n.set _FUN_8c0530e0, _FUN_8c0530e0_def\n");
