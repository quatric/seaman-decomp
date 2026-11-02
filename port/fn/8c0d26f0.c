#include "../decls.h"
undefined * FUN_8c0d26f0_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  float *ar4_00;
  float fVar2;
  double dVar3;
  undefined8 in_xd0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar4_00 = ar4;
  iVar1 = rand(ar4,ar5,ar6,ar7);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar3 = 4294968432.0;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 / dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x41f00000,fVar2);
  }
  else {
    dVar3 = 1.1916598991585905e+22;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x44843000,fVar2);
  }
  else {
    dVar3 = 6473925613858816.0;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *ar4 = fVar2;
    ar4[1] = 183.0;
  }
  else {
    *(undefined8 *)ar4 = in_xd0;
    ar4[1] = 183.0;
    ar4[2] = 711.0;
  }
  iVar1 = rand(ar4_00,ar5,ar6,ar7);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar3 = 4294968432.0;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 / dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x41f00000,fVar2);
  }
  else {
    dVar3 = 1.1916598991585905e+22;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x4431c000,fVar2);
  }
  else {
    dVar3 = -1.5729774353164037e+308;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    ar4[2] = fVar2;
  }
  else {
    *(undefined8 *)(ar4 + 2) = in_xd0;
  }
  return &DAT_8c0d2768;
}

__asm__(".globl _FUN_8c0d26f0\n.set _FUN_8c0d26f0, _FUN_8c0d26f0_def\n");
