#include "../decls.h"
uint FUN_8c091570_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar6_00;
  undefined4 ar6_01;
  float in_fr1;
  float fVar5;
  double dVar6;
  undefined8 in_xd0;
  bool bVar7;
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
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  Vec3_set_zero(auStack_3c,uVar4,ar6_00,ar7);
  uVar4 = 3;
  iVar2 = libgcc_divide_helper_01031c(ar5,3,ar6_00,ar7);
  iVar2 = iVar2 + 0x11;
  FUN_8c03f3ac(ar4 + 0xb0,uVar4,ar6_00,ar7);
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
  uVar4 = FUN_8c03c0f0(ar4 + 0xb0,iVar2,ar6_00,ar7);
  uVar4 = deref_u32(uVar4,iVar2,ar6_00,ar7);
  uVar3 = FUN_8c0342ac(ar4 + 0xb0,uVar4,0,ar7);
  ar6_01 = 0;
  uVar4 = FUN_8c034548(ar4 + 0xb0,uVar4,0,ar7);
  if (cVar9 == '\0') {
    in_fr1 = *(float *)(ar4 + 0x2cc);
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x2cc);
  }
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44((float)*(int *)(ar4 + 0x284),in_fr1);
  }
  else {
    dVar6 = (double)*(int *)(ar4 + 0x284);
  }
  bVar1 = cVar8 == '\0';
  bVar7 = SUB84(dVar6,0) < (float)((ulonglong)dVar6 >> 0x20);
  if (!bVar1 || !bVar7) {
    *(undefined4 *)(ar4 + 0x214) = 0;
  }
  FUN_8c034384(ar4 + 0xb0,uVar3,ar6_01,ar7);
  Vec3_assign(ar4 + 0x2d0,auStack_4c,ar6_01,ar7);
  Vec3_dtor(auStack_4c,0xffffffff,ar6_01,ar7);
  FUN_8c023b4c(ar4 + 0x2d0,ar4 + 0x2e0,ar6_01,ar7);
  FUN_8c023bf4(ar4 + 0x2d0,ar4 + 0x2c4,ar6_01,ar7);
  FUN_8c034384(ar4 + 0xb0,uVar3,ar6_01,ar7);
  Vec3_assign(ar4 + 0x2e0,auStack_5c,ar6_01,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_5c,0xffffffff,ar6_01,ar7);
  Vec3_set_xyz(auStack_68,uVar3,ar6_01,ar7);
  FUN_8c023484(ar4 + 0x2d0,auStack_68,ar6_01,ar7,auStack_78);
  Vec3_assign(ar4 + 0x2d0,auStack_78,ar6_01,ar7);
  Vec3_dtor(auStack_78,0xffffffff,ar6_01,ar7);
  object_dtor_delete(auStack_68,0xffffffff,ar6_01,ar7);
  FUN_8c034650(ar4 + 0xb0,uVar4,ar6_01,ar7);
  vec3_copy_8c023d8c(ar6,auStack_84,ar6_01,ar7);
  object_dtor_delete(auStack_84,0xffffffff,ar6_01,ar7);
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
  object_dtor_delete(auStack_3c,0xffffffff,ar6_01,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6_01,ar7);
  return (uint)(bVar1 && bVar7);
}

__asm__(".globl _FUN_8c091570\n.set _FUN_8c091570, _FUN_8c091570_def\n");
