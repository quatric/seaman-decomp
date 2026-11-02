#include "../decls.h"
int FUN_8c0d02c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  float fVar6;
  ulonglong uVar5;
  double in_xd0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  if (DAT_8c4374b4 == '\0') {
    _DAT_8c4374b0 = 3.0525032e-05;
    DAT_8c4374b4 = '\x01';
  }
  if (DAT_8c4374bc == '\0') {
    _DAT_8c4374b8 = 0.015873017;
    DAT_8c4374bc = '\x01';
  }
  if (*(int *)(ar4 + 0x14) == 1) {
    *(float *)(ar4 + 0x10) = *(float *)(ar4 + 0x10) + _DAT_8c4374b0;
    if (_DAT_8c4374b8 < *(float *)(ar4 + 0x10)) {
      *(float *)(ar4 + 0x10) = _DAT_8c4374b8;
    }
    fVar3 = *(float *)(ar4 + 0xc) + *(float *)(ar4 + 0x10);
    uVar5 = (ulonglong)(uint)fVar3;
    *(float *)(ar4 + 0xc) = fVar3;
    iVar1 = libgcc_divide_helper_01031c((int)*(short *)(ar4 + 0x18),3,ar6,ar7);
    if (iVar1 == 0) {
      *(char *)(ar4 + 0x1b) = *(char *)(ar4 + 0x1b) + -1;
      *(char *)(ar4 + 0x1a) = *(char *)(ar4 + 0x1a) + -1;
      if (*(byte *)(ar4 + 0x1b) < 0x82) {
        *(undefined1 *)(ar4 + 0x1a) = 0x82;
        *(undefined1 *)(ar4 + 0x1b) = 0x82;
      }
    }
    iVar1 = libgcc_divide_helper_01031c((int)*(short *)(ar4 + 0x18),2,ar6,ar7);
    if (iVar1 == 0) {
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x24) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x24) = CONCAT44(0x3f800000,(int)uVar5);
      }
    }
    else if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x24) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x24) = uVar5 & 0xffffffff;
    }
  }
  else {
    if (*(float *)(ar4 + 0x10) <= 0.0) {
      iVar1 = libgcc_divide_helper_01031c((int)*(short *)(ar4 + 0x18),2,ar6,ar7);
      if (iVar1 == 0) {
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x10) = 0xb8aec33e;
        }
        else {
          *(undefined8 *)(ar4 + 0x10) = 0xffb8aec33e;
        }
      }
    }
    else {
      *(float *)(ar4 + 0x10) = *(float *)(ar4 + 0x10) - 8.333333e-05;
    }
    pdVar2 = (double *)(ar4 + 0xc);
    if (cVar8 != '\0') {
      in_xd0 = *pdVar2;
      pdVar2 = (double *)(ar4 + 0x10);
    }
    dVar4 = *pdVar2;
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0xc) = fVar3;
    }
    else {
      *(double *)(ar4 + 0xc) = in_xd0;
    }
    iVar1 = libgcc_divide_helper_01031c((int)*(short *)(ar4 + 0x18),3,ar6,ar7);
    if ((iVar1 == 0) && (*(char *)(ar4 + 0x1b) != -1)) {
      *(char *)(ar4 + 0x1b) = *(char *)(ar4 + 0x1b) + '\x01';
      *(char *)(ar4 + 0x1a) = *(char *)(ar4 + 0x1a) + '\x01';
    }
  }
  if (cVar8 == '\0') {
    fVar3 = *(float *)(ar4 + 0xc);
    fVar6 = 35.0;
  }
  else {
    fVar3 = 35.0;
    fVar6 = 1.1546207e-19;
  }
  if (cVar7 != '\0' || fVar3 <= fVar6) {
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0xc);
    }
    if (cVar7 == '\0' && fVar3 < 0.0) {
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x10) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x10) = (ulonglong)(uint)fVar3;
      }
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0xc) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0xc) = (ulonglong)(uint)fVar3;
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      uVar5 = CONCAT44(0x420c0000,fVar3);
      *(undefined4 *)(ar4 + 0xc) = 0x420c0000;
    }
    else {
      uVar5 = 0x20085045420c0000;
      *(undefined8 *)(ar4 + 0xc) = 0x20085045420c0000;
    }
    if (cVar8 == '\0') {
      *(undefined4 *)(ar4 + 0x10) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x10) = uVar5 & 0xffffffff;
    }
  }
  **(uint **)(ar4 + 0x20) =
       (uint)*(byte *)(ar4 + 0x1d) << 0x18 | (uint)*(byte *)(ar4 + 0x1c) << 0x10 |
       (uint)*(byte *)(ar4 + 0x1b) << 8 | (uint)*(byte *)(ar4 + 0x1a);
  iVar1 = *(short *)(ar4 + 0x18) + 1;
  *(short *)(ar4 + 0x18) = (short)iVar1;
  return iVar1;
}

__asm__(".globl _FUN_8c0d02c8\n.set _FUN_8c0d02c8, _FUN_8c0d02c8_def\n");
