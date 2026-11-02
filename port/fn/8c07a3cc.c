#include "../decls.h"
uint FUN_8c07a3cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  undefined4 uVar2;
  undefined4 ar7_00;
  int *ar7_01;
  undefined4 in_fr1;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  int *in_stack_00000000;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar2 = ar5;
  ar7_00 = ar7;
  FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7);
  FUN_8c031748(ar4,uVar2,ar6,ar7_00);
  iVar1 = *(int *)(ar4 + 0x134);
  if (iVar1 == 0) {
    iVar1 = rand_range(ar4,0,100,ar7_00);
    if ((iVar1 < 0x32) || (*(int *)(ar4 + 0x2a0) != 0)) {
      *(undefined4 *)(ar4 + 0x134) = 1;
      goto LAB_8c07a446;
    }
    *(undefined4 *)(ar4 + 0x134) = 2;
  }
  else {
    if (iVar1 == 1) {
LAB_8c07a446:
      FUN_8c031c74(ar4,ar5,ar5,ar7_00);
      uVar2 = 0x13;
      iVar1 = FUN_8c031de8(ar4,0x13,ar5,ar7_00);
      if (iVar1 != 0) {
        return 1;
      }
      FUN_8c03c314(ar4,uVar2,ar5,ar7_00);
      iVar1 = *(int *)(ar4 + 0x2a0) + -1;
      *(int *)(ar4 + 0x2a0) = iVar1;
      if (iVar1 < 0) {
        *(undefined4 *)(ar4 + 0x2a0) = 0;
      }
      *(undefined4 *)(ar4 + 0x134) = 0;
      return 0;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      goto LAB_8c07a5f4;
    }
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x40400000,in_fr1);
  }
  else {
    dVar4 = 52776566554624.0;
  }
  ar7_01 = in_stack_00000000;
  FUN_8c032518(ar4,ar5,ar7,in_stack_00000000);
  Vec3_assign(ar4 + 0x54,auStack_24,ar7,ar7_01);
  Vec3_dtor(auStack_24,0xffffffff,ar7,ar7_01);
  a5 = ar4 + 0x54;
  iVar1 = (**(code **)(*in_stack_00000000 + 0x134))(in_stack_00000000,a5,ar7,ar7_01);
  if (iVar1 == 1) {
    Vec3_set_xyz(auStack_30,a5,ar7,ar7_01);
    FUN_8c023484(ar4 + 0x14,auStack_30,ar7,ar7_01,auStack_40);
    Vec3_assign(ar4 + 0x14,auStack_40,ar7,ar7_01);
    Vec3_dtor(auStack_40,0xffffffff,ar7,ar7_01);
    uVar2 = 0xffffffff;
    object_dtor_delete(auStack_30,0xffffffff,ar7,ar7_01);
    Vec3_set_xyz(auStack_4c,uVar2,ar7,ar7_01);
    FUN_8c023484(ar4 + 0x80,auStack_4c,ar7,ar7_01,auStack_5c);
    Vec3_assign(ar4 + 0x80,auStack_5c,ar7,ar7_01);
    Vec3_dtor(auStack_5c,0xffffffff,ar7,ar7_01);
    object_dtor_delete(auStack_4c,0xffffffff,ar7,ar7_01);
    return 1;
  }
  (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x54,ar7,ar7_01);
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x7c));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x7c);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(ar4 + 0x58) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x58) = in_xd0;
  }
  *(undefined4 *)(ar4 + 0x40) = 5;
  *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
LAB_8c07a5f4:
  iVar1 = FUN_8c0755e0(ar4,ar5,ar4 + 0x54,in_stack_00000000);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x134) = 0;
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c07a3cc\n.set _FUN_8c07a3cc, _FUN_8c07a3cc_def\n");
