#include "../decls.h"
undefined8 * FUN_8c0d21a0_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined8 uStack_18;
  
  cVar7 = '\0';
  cVar6 = '\0';
  if ((ar5 & 1) == 0) {
    *(short *)(ar4 + 0x24) = *(short *)(ar4 + 0x24) + 1;
  }
  if (*(short *)(ar4 + 0x24) == 0x14) {
    FUN_8c0d20bc(ar4,ar5,ar6,ar7);
  }
  if (((*(int *)(ar4 + 0x3c) == 3) ||
      (puVar1 = *(undefined8 **)(ar4 + 0x3c), puVar1 == (undefined8 *)0x4)) &&
     (puVar1 = (undefined8 *)0x8, 7 < *(short *)(ar4 + 0x24))) {
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0x3c03126f,*(undefined4 *)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
      dVar4 = 5.238690687974987e-11;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    pdVar2 = (double *)(ar4 + 0x20);
    if (cVar7 == '\0') {
      *(float *)(ar4 + 0x20) = fVar3;
      pdVar2 = (double *)(ar4 + 0x1c);
    }
    else {
      *(undefined8 *)(ar4 + 0x20) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x1c);
    }
    dVar4 = *pdVar2;
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    uStack_18 = in_xd0;
    if (cVar7 == '\0') {
      uStack_18 = CONCAT44(ar4,fVar3);
    }
    if (cVar7 == '\0') {
      *(float *)((*(uint*)((uchar*)&uStack_18+4)) + 0x1c) = (float)uStack_18;
      fVar5 = 0.1;
      fVar3 = (float)uStack_18;
    }
    else {
      *(undefined8 *)((*(uint*)((uchar*)&uStack_18+4)) + 0x1c) = uStack_18;
      fVar3 = 0.1;
      fVar5 = 3.8960407e-10;
      in_xd0 = uStack_18;
    }
    if (cVar6 == '\0' && fVar3 < fVar5) {
      if (cVar7 == '\0') {
        *(undefined4 *)(ar4 + 0x1c) = 0x3dcccccd;
      }
      else {
        *(undefined8 *)(ar4 + 0x1c) = 0x2fd62fe63dcccccd;
      }
    }
    puVar1 = (undefined8 *)(ar4 + 0x14);
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x1c),*(undefined4 *)puVar1);
    }
    else {
      in_xd0 = *puVar1;
      dVar4 = *(double *)(ar4 + 0x1c);
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      *(float *)(ar4 + 0x14) = fVar3;
    }
    else {
      *(undefined8 *)(ar4 + 0x14) = in_xd0;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0d21a0\n.set _FUN_8c0d21a0, _FUN_8c0d21a0_def\n");
