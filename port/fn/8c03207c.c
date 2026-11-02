#include "../decls.h"
undefined4 FUN_8c03207c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float fVar4;
  double dVar3;
  float in_fr5;
  float in_fr4;
  undefined4 in_fr7;
  uint in_fr6;
  undefined8 in_xd0;
  int ar4_00;
  char cVar5;
  char cVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar6 = '\0';
  cVar5 = '\0';
  fVar1 = *(float *)(ar4 + 0xa8) + in_fr5;
  *(float *)(ar4 + 0xa8) = fVar1;
  fVar2 = (fVar1 * 65536.0) / 6.283184;
  fVar4 = 6.283184;
  FUN_8c25747c((int)fVar2,ar5,ar6,ar7,in_fr4);
  uStack_c = fVar4;
  fVar1 = in_fr4;
  if (cVar6 != '\0') {
    in_xd0 = CONCAT44(in_fr5,in_fr4);
    uStack_c = fVar2;
    fVar1 = fVar2;
  }
  if (cVar5 == '\0') {
    fVar1 = fVar1 * fVar4;
  }
  else {
    fVar1 = SUB84((double)CONCAT44(fVar4,fVar1) * (double)CONCAT44(fVar4,fVar1),0);
  }
  if (cVar6 == '\0') {
    *(float *)(ar4 + 0x6c) = fVar1;
    dVar3 = (double)CONCAT44(in_fr7,*(undefined4 *)(ar4 + 0xac));
  }
  else {
    *(undefined8 *)(ar4 + 0x6c) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0xac);
    dVar3 = (double)CONCAT44(uStack_20,in_fr7);
  }
  if (cVar5 == '\0') {
    uStack_20 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    uStack_20 = SUB84(dVar3 + dVar3,0);
  }
  uStack_1c = ar4;
  if (cVar6 != '\0') {
    uStack_20 = (float)in_xd0;
    uStack_1c = (int)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar6 == '\0') {
    *(float *)(uStack_1c + 0xac) = uStack_20;
    dVar3 = (double)CONCAT44(0x47800000,uStack_20);
  }
  else {
    *(ulonglong *)(uStack_1c + 0xac) = CONCAT44(uStack_1c,uStack_20);
    in_xd0 = CONCAT44(uStack_1c,uStack_20);
    dVar3 = 12831.689682006836;
  }
  if (cVar5 == '\0') {
    fVar1 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(0x40c90fd8,fVar1);
  }
  else {
    dVar3 = -3.74578248742155e-250;
  }
  if (cVar5 == '\0') {
    fVar2 = (float)((ulonglong)dVar3 >> 0x20);
    fVar1 = SUB84(dVar3,0) / fVar2;
    dVar3 = (double)CONCAT44(fVar2,fVar1);
    ar4_00 = (int)fVar1;
  }
  else {
    dVar3 = dVar3 / dVar3;
    ar4_00 = (int)dVar3;
  }
  FUN_8c25747c(ar4_00,ar5,ar6,ar7,in_fr4);
  fVar1 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar6 == '\0') {
    dVar3 = (double)(ulonglong)in_fr6;
    uStack_10 = fVar1;
  }
  else {
    uStack_10 = SUB84(dVar3,0);
    in_xd0 = CONCAT44(in_fr7,in_fr6);
    uStack_c = fVar1;
  }
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(uStack_10,SUB84(dVar3,0));
  }
  else {
    dVar3 = (double)CONCAT44(uStack_c,uStack_10);
  }
  if (cVar5 == '\0') {
    fVar1 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar6 == '\0') {
    *(float *)(ar4 + 0x70) = fVar1;
  }
  else {
    *(undefined8 *)(ar4 + 0x70) = in_xd0;
  }
  return 0x20;
}

__asm__(".globl _FUN_8c03207c\n.set _FUN_8c03207c, _FUN_8c03207c_def\n");
