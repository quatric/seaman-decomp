#include "../decls.h"
undefined4 FUN_8c02ae38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  float fStack_18;
  int iStack_14;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  iVar2 = *(int *)(ar4 + 0x328) + (short)uVar1 * 0x124;
  if (cVar7 == '\0') {
    uVar4 = CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(ar4 + 0x170));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x170);
    uVar4 = *(undefined8 *)(ar4 + 0x5c);
  }
  if (cVar6 != '\0' || (float)uVar4 <= (float)((ulonglong)uVar4 >> 0x20)) {
    if (cVar7 == '\0') {
      uVar4 = CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(ar4 + 0x170));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x170);
      uVar4 = *(undefined8 *)(ar4 + 0x5c);
    }
    if (cVar6 == '\0' && (float)uVar4 < (float)((ulonglong)uVar4 >> 0x20)) {
      if (cVar7 == '\0') {
        uVar1 = *(undefined4 *)(ar4 + 0x170);
        *(undefined4 *)(ar4 + 100) = uVar1;
        *(undefined4 *)(ar4 + 0x60) = uVar1;
        *(undefined4 *)(ar4 + 0x5c) = uVar1;
      }
      else {
        uVar4 = *(undefined8 *)(ar4 + 0x170);
        *(undefined8 *)(ar4 + 100) = uVar4;
        *(undefined8 *)(ar4 + 0x60) = uVar4;
        *(undefined8 *)(ar4 + 0x5c) = uVar4;
      }
    }
  }
  else {
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(iVar2 + 0xc0),*(undefined4 *)(ar4 + 100));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 100);
      dVar5 = *(double *)(iVar2 + 0xc0);
    }
    if (cVar6 == '\0') {
      fStack_18 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fStack_18 = SUB84(dVar5 + dVar5,0);
    }
    iStack_14 = ar4;
    if (cVar7 != '\0') {
      fStack_18 = (float)in_xd0;
      iStack_14 = (int)((ulonglong)in_xd0 >> 0x20);
    }
    if (cVar7 == '\0') {
      *(float *)(iStack_14 + 100) = fStack_18;
      *(float *)(ar4 + 0x60) = fStack_18;
      *(float *)(ar4 + 0x5c) = fStack_18;
    }
    else {
      *(ulonglong *)(iStack_14 + 100) = CONCAT44(iStack_14,fStack_18);
      *(ulonglong *)(ar4 + 0x60) = CONCAT44(iStack_14,fStack_18);
      *(ulonglong *)(ar4 + 0x5c) = CONCAT44(iStack_14,fStack_18);
    }
  }
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x60),*(undefined4 *)(iVar2 + 0xe8));
  }
  else {
    in_xd0 = *(undefined8 *)(iVar2 + 0xe8);
    dVar5 = *(double *)(ar4 + 0x60);
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(float *)(ar4 + 0x408) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x408) = in_xd0;
  }
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(iVar2 + 0xec));
  }
  else {
    in_xd0 = *(undefined8 *)(iVar2 + 0xec);
    dVar5 = *(double *)(ar4 + 0x5c);
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(float *)(ar4 + 0x40c) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x40c) = in_xd0;
  }
  return 0xec;
}

__asm__(".globl _FUN_8c02ae38\n.set _FUN_8c02ae38, _FUN_8c02ae38_def\n");
