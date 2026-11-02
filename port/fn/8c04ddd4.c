#include "../decls.h"
undefined4 FUN_8c04ddd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 in_dr0;
  double dVar5;
  float fVar6;
  double in_dr14;
  undefined8 in_xd14;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 in_stack_00000000;
  undefined4 ain0;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  uVar3 = ar7;
  ain0 = ar6;
  Vec3_sub(ar6,ar5,ar6,ar7,auStack_3c);
  Vec3_ctor_copy(auStack_2c,auStack_3c,ar6,uVar3);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_3c,0xffffffff,ar6,uVar3);
  iVar1 = get_field_6c_028cc4(ar7,uVar2,ar6,uVar3);
  if (iVar1 == 0) {
    Vec3_dtor(auStack_2c,0xffffffff,ar6,uVar3);
    return 2;
  }
  *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb;
  Vec3_length_sq(auStack_2c,uVar2,ar6,uVar3);
  if (cVar9 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),(int)in_dr0);
    in_dr0 = in_xd14;
  }
  else {
    dVar5 = *(double *)(ar4 + 0x28);
  }
  fVar6 = SUB84(in_dr14,0);
  if (cVar8 == '\0') {
    bVar7 = fVar6 < (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    bVar7 = in_dr14 < dVar5;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x28) = fVar6;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_dr0;
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar5,0));
    }
    else {
      dVar5 = *(double *)(ar4 + 0x34);
    }
    if (cVar8 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 fVar6 / (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 / dVar5;
    }
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar5,0));
    }
    else {
      dVar5 = *(double *)(ar4 + 0x28);
    }
    if (cVar8 == '\0') {
      fVar6 = SUB84(in_dr14,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar6 = SUB84(in_dr14 + dVar5,0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x28) = fVar6;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_dr0;
    }
  }
  FUN_8c031748(ar4,uVar2,ar6,uVar3);
  FUN_8c031700(ar4,uVar2,ar6,uVar3);
  uVar2 = Vec3_length(auStack_2c,uVar2,ar6,uVar3);
  Vec3_assign(ar4 + 0x14,uVar2,ar6,uVar3);
  (**(code **)(*(int *)(iVar1 + 8) + 0x140))(iVar1,uVar2,ar6,uVar3);
  Vec3_assign(ar4 + 0x80,auStack_4c,ar6,uVar3);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_4c,0xffffffff,ar6,uVar3);
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x178) = 1;
    uVar3 = 0;
    ar6 = 0xffffffff;
    uVar2 = 0x12;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x12,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,uVar3);
    *(undefined4 *)(ar4 + 0x280) = 0;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if ((iVar1 == 2) &&
       (iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,uVar3), iVar1 == 1)) {
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(ar4 + 300) = 0;
      FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,uVar3);
      uVar4 = 0;
      iVar1 = ar4 + 0x80;
      Vec3_assign(ar4 + 0x14,iVar1,ar6,uVar3);
      *(undefined4 *)(ar4 + 0x178) = 0;
      FUN_8c03c314(ar4,iVar1,ar6,uVar3);
    }
    goto LAB_8c04e01e;
  }
  iVar1 = FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6,uVar3);
  if (iVar1 == 7) {
    iVar1 = *(int *)(ar4 + 0x280);
    *(int *)(ar4 + 0x280) = iVar1 + 1;
    if (4 < iVar1 + 1) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
  }
  else {
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,uVar3,ain0);
    if (cVar8 == '\0') {
      iVar1 = (int)(float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      iVar1 = (int)dVar5;
    }
    if (iVar1 == 0x4c) {
      uVar3 = 5;
      FUN_8c033474(ar4,5,ar5,in_stack_00000000);
      FUN_8c03f39c(ar7,uVar3,ar5,in_stack_00000000);
      ar6 = ar5;
      uVar3 = in_stack_00000000;
    }
  }
LAB_8c04e01e:
  Vec3_dtor(auStack_2c,0xffffffff,ar6,uVar3);
  return uVar4;
}

__asm__(".globl _FUN_8c04ddd4\n.set _FUN_8c04ddd4, _FUN_8c04ddd4_def\n");
