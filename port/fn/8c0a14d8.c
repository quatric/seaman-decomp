#include "../decls.h"
uint FUN_8c0a14d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 uVar5;
  undefined1 *ar7_00;
  float fVar6;
  undefined8 in_dr0;
  float fVar7;
  char cVar8;
  char cVar9;
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  iVar1 = *(int *)(ar4 + 0x134);
  uVar4 = ar6;
  uVar3 = ar7;
  uVar5 = ar7;
  if (iVar1 == 0) {
    ar6_00 = 100;
    uVar2 = rand_range(ar4,0,100,ar7);
    *(undefined4 *)(ar4 + 0x220) = uVar2;
    *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
  }
  else {
    ar6_00 = ar6;
    if (iVar1 != 1) {
      uVar3 = ar5;
      if (iVar1 == 2) goto LAB_8c0a15f4;
      if (iVar1 != 3) {
        return 1;
      }
      goto LAB_8c0a165a;
    }
  }
  if (*(int *)(ar4 + 0x220) < 0x2d) {
    iVar1 = FUN_8c0a2bf4(ar4,ar5,ar6_00,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
    *(undefined4 *)(ar4 + 0x134) = 0;
    *(undefined4 *)(ar4 + 0x40) = 5;
    return 0;
  }
  if (0x59 < *(int *)(ar4 + 0x220)) {
    ar7 = 0;
    ar6 = 0;
    uVar3 = 0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0,0);
    *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
LAB_8c0a15f4:
    Vec3_ctor_xyz(auStack_48,uVar3,ar6,ar7);
    FUN_8c031c74(ar4,auStack_48,ar5,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_48,0xffffffff,ar5,ar7);
    FUN_8c03207c(ar4,uVar4,ar5,ar7);
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar5,ar7);
    if (iVar1 != 1) {
      return 1;
    }
    *(undefined4 *)(ar4 + 0x134) = 0;
    return 0;
  }
  if (cVar9 == '\0') {
    fVar6 = 3.0;
  }
  else {
    fVar6 = 500.0;
  }
  FUN_8c032518(ar4,ar5,ar6,ar7);
  Vec3_assign(ar4 + 0x54,auStack_38,uVar4,uVar5);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,uVar4,uVar5);
  *(undefined4 *)(ar4 + 0x134) = 3;
LAB_8c0a165a:
  if (*(int *)(ar4 + 0x1d4) == 1) {
    uVar3 = Vec3_length(ar4 + 0x200,uVar3,uVar4,uVar5);
    Vec3_ctor_copy(auStack_28,uVar3,uVar4,uVar5);
    FUN_8c022dac(auStack_28,ar4 + 0x14,uVar4,uVar5);
    if (cVar9 == '\0') {
      fVar7 = 90.0;
    }
    else {
      fVar6 = 90.0;
      fVar7 = 2.0;
    }
    if (cVar8 == '\0' && fVar7 < fVar6) {
      FUN_8c03263c(ar4,auStack_28,uVar4,uVar5);
      Vec3_add(auStack_58,ar5,uVar4,uVar5,auStack_68);
      Vec3_assign(ar4 + 0x54,auStack_68,uVar4,uVar5);
      Vec3_dtor(auStack_68,0xffffffff,uVar4,uVar5);
      Vec3_dtor(auStack_58,0xffffffff,uVar4,uVar5);
      uVar4 = ar6;
      FUN_8c032788(ar4,ar4 + 0x54,ar6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
      uVar5 = ar7;
    }
    Vec3_dtor(auStack_28,0xffffffff,uVar4,uVar5);
  }
  FUN_8c03f460(auStack_74,ar6,uVar4,uVar5);
  ar7_00 = auStack_74;
  ar6_01 = ar4 + 0x54;
  iVar1 = FUN_8c0a1828(ar4,ar5,ar6_01,ar7_00);
  free_if_nonnull_wrap_102790(auStack_74,0xffffffff,ar6_01,ar7_00);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x134) = 0;
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c0a14d8\n.set _FUN_8c0a14d8, _FUN_8c0a14d8_def\n");
