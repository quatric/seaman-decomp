#include "../decls.h"
undefined4 FUN_8c014be4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined4 in_fr3;
  double dVar6;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  char cVar7;
  char cVar8;
  undefined4 uStack_20;
  
  cVar8 = '\0';
  cVar7 = '\0';
  iVar2 = ar4;
  uVar3 = ar5;
  iVar1 = rand(ar4,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(in_fr5,in_fr3);
  }
  else {
    dVar6 = (double)CONCAT44(in_fr6,in_fr5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar5 = -7.554616947321253e-251;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(in_fr4,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(in_fr5,in_fr4);
  }
  if (cVar7 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)(ar4 + 4) = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    *(double *)(ar4 + 4) = dVar6;
  }
  iVar1 = rand(iVar2,uVar3,ar6,ar7);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(in_fr7,SUB84(dVar6,0));
  }
  else {
    dVar6 = (double)CONCAT44(in_fr8,in_fr7);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar5 = -7.554616947321253e-251;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(in_fr6,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(in_fr7,in_fr6);
  }
  if (cVar7 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)(ar4 + 8) = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    *(double *)(ar4 + 8) = dVar6;
  }
  iVar2 = rand(iVar2,uVar3,ar6,ar7);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(in_fr9,SUB84(dVar6,0));
  }
  else {
    dVar6 = (double)CONCAT44(uStack_20,in_fr9);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47000000,(float)iVar2);
  }
  else {
    dVar5 = -7.554616947321253e-251;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(in_fr8,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(in_fr9,in_fr8);
  }
  if (cVar7 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)(ar4 + 0xc) = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0xc) = dVar6;
  }
  *(undefined4 *)(ar4 + 0x40) = ar5;
  for (iVar2 = 1; iVar2 < 5; iVar2 = iVar2 + 1) {
    iVar1 = iVar2 * 0xc + ar4;
    uVar3 = *(undefined4 *)(ar4 + 8);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(ar4 + 4);
    *(undefined4 *)(iVar1 + 8) = uVar3;
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(ar4 + 0xc);
  }
  uVar3 = FUN_8c014ef8(ar4,ar5,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c014be4\n.set _FUN_8c014be4, _FUN_8c014be4_def\n");
