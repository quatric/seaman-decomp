#include "../decls.h"
undefined4 FUN_8c0240bc_def(double *ar4,double *ar5,float *ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr3;
  double dVar4;
  undefined4 in_fr15;
  double dVar5;
  undefined4 uVar6;
  double in_xd0;
  char cVar7;
  char cVar8;
  undefined4 in_stack_00000000;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar1 = *(float *)(ar5 + 1) * ar6[2];
  dVar5 = (double)CONCAT44(*(float *)ar5 * *ar6 + *(float *)((int)ar5 + 4) * ar6[1] + fVar1,in_fr15)
  ;
  Vec3_ctor_zero(&uStack_30,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)ar5,in_fr3);
    dVar3 = (double)CONCAT44(*(undefined4 *)ar4,fVar1);
  }
  else {
    dVar4 = *ar5;
    dVar3 = *ar4;
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),*(undefined4 *)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(double *)((int)ar5 + 4);
    dVar3 = *(double *)((int)ar4 + 4);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) +
                             SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar3 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),*(undefined4 *)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar3 = ar4[1];
  }
  if (cVar7 == '\0') {
    fVar1 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) -
                             ((float)((ulonglong)dVar4 >> 0x20) + fVar1),SUB84(dVar5,0));
  }
  else {
    fVar1 = SUB84(dVar3 * dVar3,0);
    dVar5 = dVar5 - (dVar4 + dVar3 * dVar3);
  }
  uVar6 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)ar5,uVar6);
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 2),fVar1);
  }
  else {
    dVar4 = *ar5;
    dVar3 = ar4[2];
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x14),*(undefined4 *)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(double *)((int)ar5 + 4);
    dVar3 = *(double *)((int)ar4 + 0x14);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) +
                             SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar3 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 3),*(undefined4 *)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar3 = ar4[3];
  }
  if (cVar7 == '\0') {
    fVar2 = (float)((ulonglong)dVar3 >> 0x20);
    fVar1 = SUB84(dVar3,0) * fVar2;
    dVar3 = (double)CONCAT44(fVar2,fVar1);
    fVar1 = SUB84(dVar4,0) / ((float)((ulonglong)dVar4 >> 0x20) + fVar1);
  }
  else {
    dVar3 = dVar3 * dVar3;
    fVar1 = SUB84((dVar4 + dVar3) / (dVar4 + dVar3),0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(uVar6,fVar1);
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),*(undefined4 *)(ar4 + 2));
  }
  else {
    in_xd0 = ar4[2];
  }
  fVar1 = SUB84(dVar5,0);
  if (cVar7 == '\0') {
    fVar2 = SUB84(dVar3,0) * fVar1;
  }
  else {
    fVar2 = SUB84(dVar3 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)ar4,fVar2);
  }
  else {
    dVar4 = *ar4;
  }
  if (cVar7 == '\0') {
    fVar2 = (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44(fVar2,SUB84(dVar4,0) + fVar2);
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  if (cVar8 == '\0') {
    uStack_30 = SUB84(dVar4,0);
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)((int)ar4 + 0x14));
  }
  else {
    uStack_30 = SUB84(in_xd0,0);
    in_xd0 = *(double *)((int)ar4 + 0x14);
  }
  if (cVar7 == '\0') {
    fVar2 = SUB84(dVar4,0) * fVar1;
  }
  else {
    fVar2 = SUB84(dVar4 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),fVar2);
  }
  else {
    dVar4 = *(double *)((int)ar4 + 4);
  }
  if (cVar7 == '\0') {
    fVar2 = (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44(fVar2,SUB84(dVar4,0) + fVar2);
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  if (cVar8 == '\0') {
    uStack_2c = SUB84(dVar4,0);
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 3));
  }
  else {
    uStack_2c = SUB84(in_xd0,0);
    in_xd0 = ar4[3];
  }
  if (cVar7 == '\0') {
    fVar1 = SUB84(dVar4,0) * fVar1;
  }
  else {
    fVar1 = SUB84(dVar4 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),fVar1);
  }
  else {
    dVar5 = ar4[1];
  }
  if (cVar7 == '\0') {
    fStack_28 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fStack_28 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 != '\0') {
    fStack_28 = SUB84(in_xd0,0);
    uStack_24 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  Vec3_ctor_copy(in_stack_00000000,&uStack_30,ar6,ar7);
  Vec3_dtor(&uStack_30,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0240bc\n.set _FUN_8c0240bc, _FUN_8c0240bc_def\n");
