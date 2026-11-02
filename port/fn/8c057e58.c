#include "../decls.h"
uint FUN_8c057e58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  undefined8 in_dr4;
  undefined8 in_xd0;
  undefined4 in_PR;
  char cVar5;
  char cVar6;
  uint uStack_50;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar2 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uStack_c = in_PR;
  Vec3_set_zero(&fStack_18,ar5,ar6,ar7);
  Vec3_set_zero(&uStack_24,ar5,ar6,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,uVar2);
  FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),ar6,ar7);
  vec3_copy_8c023d8c(&uStack_24,auStack_30,ar6,ar7);
  object_dtor_delete(auStack_30,0xffffffff,ar6,ar7);
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c8),uStack_24);
  }
  else {
    in_xd0 = CONCAT44(uStack_20,uStack_24);
    dVar4 = *(double *)(ar4 + 0x2c8);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar3);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x2c0);
  }
  if (cVar5 == '\0') {
    fStack_18 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2cc),uStack_20);
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_1c,uStack_20);
    dVar4 = *(double *)(ar4 + 0x2cc);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar3);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x2c0);
  }
  if (cVar5 == '\0') {
    fStack_14 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2d0),uStack_1c);
  }
  else {
    fStack_14 = (float)in_xd0;
    in_xd0 = CONCAT44(fStack_18,uStack_1c);
    dVar4 = *(double *)(ar4 + 0x2d0);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar3);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x2c0);
  }
  if (cVar5 == '\0') {
    fStack_10 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fStack_10 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 != '\0') {
    fStack_10 = (float)in_xd0;
    uStack_c = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  vec3_copy_8c023d8c(ar4 + 0x2c8,&uStack_24,ar6,ar7);
  vec3_copy_8c02b5fc(auStack_3c,&fStack_18,ar6,ar7);
  FUN_8c023484(ar4 + 0x14,auStack_3c,ar6,ar7,auStack_4c);
  Vec3_assign(ar4 + 0x14,auStack_4c,ar6,ar7);
  Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
  uVar2 = 0xffffffff;
  object_dtor_delete(auStack_3c,0xffffffff,ar6,ar7);
  Vec3_length(ar4 + 0x14,uVar2,ar6,ar7);
  iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(ar4 + 0x2b8) = 0;
    FUN_8c023d7c(ar4 + 0x2c8,uVar2,ar6,ar7);
  }
  object_dtor_delete(&uStack_24,0xffffffff,ar6,ar7);
  object_dtor_delete(&fStack_18,0xffffffff,ar6,ar7);
  uStack_50 = (uint)(iVar1 != 1);
  return uStack_50;
}

__asm__(".globl _FUN_8c057e58\n.set _FUN_8c057e58, _FUN_8c057e58_def\n");
