#include "../decls.h"
undefined4 FUN_8c0d6aac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 in_dr4;
  float in_fr6;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd14;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  *(int *)(ar4 + 0x30) = (int)((ulonglong)in_dr4 >> 0x20);
  *(int *)(ar4 + 0x34) = (int)in_dr4;
  *(float *)(ar4 + 0x38) = in_fr6;
  (**(code **)(*(int *)(ar4 + 0xa8) + 0xc))((int *)(ar4 + 0xa8),ar5,ar6,ar7);
  if (cVar6 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),in_fr1);
    in_fr15 = in_fr6;
  }
  else {
    in_xd14 = (double)CONCAT44(in_fr6,in_fr1);
    dVar1 = *(double *)(ar4 + 0x30);
  }
  if (cVar5 == '\0') {
    bVar4 = in_fr15 < (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    bVar4 = (double)CONCAT44(in_fr14,in_fr15) < dVar1;
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(ar4 + 0x30) = in_fr15;
    }
    else {
      *(double *)(ar4 + 0x30) = in_xd14;
    }
  }
  (**(code **)(*(int *)(ar4 + 200) + 0xc))((int *)(ar4 + 200),ar5,ar6,ar7);
  if (cVar6 == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),SUB84(dVar1,0));
    in_fr15 = (float)((ulonglong)dVar1 >> 0x20);
    dVar1 = in_xd14;
  }
  else {
    dVar2 = *(double *)(ar4 + 0x30);
  }
  if (cVar5 == '\0') {
    bVar4 = (float)((ulonglong)dVar2 >> 0x20) < in_fr15;
  }
  else {
    bVar4 = dVar2 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(ar4 + 0x30) = in_fr15;
    }
    else {
      *(double *)(ar4 + 0x30) = dVar1;
    }
  }
  (**(code **)(*(int *)(ar4 + 0x68) + 0xc))((int *)(ar4 + 0x68),ar5,ar6,ar7);
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar2,0));
    in_fr15 = (float)((ulonglong)dVar2 >> 0x20);
    dVar2 = dVar1;
  }
  else {
    dVar3 = *(double *)(ar4 + 0x34);
  }
  if (cVar5 == '\0') {
    bVar4 = in_fr15 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar4 = (double)CONCAT44(in_fr14,in_fr15) < dVar3;
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(ar4 + 0x34) = in_fr15;
    }
    else {
      *(double *)(ar4 + 0x34) = dVar2;
    }
  }
  (**(code **)(*(int *)(ar4 + 0x88) + 0xc))((int *)(ar4 + 0x88),ar5,ar6,ar7);
  if (cVar6 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar3,0));
    in_fr15 = (float)((ulonglong)dVar3 >> 0x20);
    dVar3 = dVar2;
  }
  else {
    dVar1 = *(double *)(ar4 + 0x34);
  }
  if (cVar5 == '\0') {
    bVar4 = (float)((ulonglong)dVar1 >> 0x20) < in_fr15;
  }
  else {
    bVar4 = dVar1 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(ar4 + 0x34) = in_fr15;
    }
    else {
      *(double *)(ar4 + 0x34) = dVar3;
    }
  }
  (**(code **)(*(int *)(ar4 + 0xe8) + 8))((int *)(ar4 + 0xe8),ar5,ar6,ar7);
  if (cVar6 == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar1,0));
    in_fr15 = (float)((ulonglong)dVar1 >> 0x20);
    dVar1 = dVar3;
  }
  else {
    dVar2 = *(double *)(ar4 + 0x34);
  }
  if (cVar5 == '\0') {
    bVar4 = (float)((ulonglong)dVar2 >> 0x20) < in_fr15;
  }
  else {
    bVar4 = dVar2 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      *(float *)(ar4 + 0x34) = in_fr15;
      *(float *)(ar4 + 0x24) = in_fr15;
    }
    else {
      *(double *)(ar4 + 0x34) = dVar1;
      *(double *)(ar4 + 0x24) = dVar1;
    }
  }
  FUN_8c0d66d8(ar4,ar5,ar6,ar7);
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x34);
  }
  else {
    *(undefined8 *)(ar4 + 0x24) = *(undefined8 *)(ar4 + 0x34);
  }
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 100) = 5;
  return 100;
}

__asm__(".globl _FUN_8c0d6aac\n.set _FUN_8c0d6aac, _FUN_8c0d6aac_def\n");
