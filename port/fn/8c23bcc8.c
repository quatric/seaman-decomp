#include "../decls.h"
undefined4 FUN_8c23bcc8_def(uint *ar4,undefined4 ar5,float *ar6,int ar7)

{
  double *ar4_00;
  undefined4 ar5_00;
  int ar7_00;
  float in_fr3;
  float fVar1;
  double dVar2;
  undefined4 in_fr5;
  double dVar3;
  float fVar4;
  undefined8 in_xd2;
  undefined4 in_PR;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  double adStack_38 [4];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  cVar10 = '\0';
  cVar9 = '\0';
  _DAT_8c4ab278 = adStack_38;
  ar5_00 = ar5;
  ar7_00 = ar7;
  _DAT_8c4ab27c = ar5;
  _DAT_8c4ab280 = ar6;
  uStack_c = in_PR;
  FUN_8c23ba30(_DAT_8c4ab278,ar5,ar6,ar7);
  ar4_00 = _DAT_8c4ab278 + 2;
  FUN_8c23ba30(ar4_00,ar5_00,ar6,ar7_00);
  if (ar7 != 0) {
    if (cVar10 == '\0') {
      in_fr3 = *_DAT_8c4ab280;
    }
    else {
      in_xd2 = *(undefined8 *)_DAT_8c4ab280;
    }
    if (cVar10 == '\0') {
      fVar4 = _DAT_8c4ab280[1];
      fStack_18 = -in_fr3;
    }
    else {
      fStack_18 = (float)in_xd2;
      in_xd2 = *(undefined8 *)(_DAT_8c4ab280 + 1);
      fVar4 = -in_fr3;
    }
    if (cVar10 == '\0') {
      fStack_10 = _DAT_8c4ab280[2];
      fStack_14 = -fVar4;
    }
    else {
      fStack_14 = (float)in_xd2;
      in_xd2 = *(undefined8 *)(_DAT_8c4ab280 + 2);
      fStack_10 = -fVar4;
    }
    _DAT_8c4ab280 = &fStack_18;
    fStack_10 = -fStack_10;
    if (cVar10 != '\0') {
      fStack_10 = (float)in_xd2;
      uStack_c = (undefined4)((ulonglong)in_xd2 >> 0x20);
    }
  }
  FUN_8c23ba42(ar4_00,ar5_00,ar6,ar7_00);
  if (cVar10 == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)_DAT_8c4ab278,_DAT_8c4c11b0);
  }
  else {
    dVar2 = *_DAT_8c4ab278;
  }
  if (cVar9 == '\0') {
    dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) + SUB84(dVar2,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 + dVar2;
  }
  if (cVar10 == '\0') {
    *(int *)_DAT_8c4ab278 = (int)((ulonglong)dVar2 >> 0x20);
  }
  else {
    *_DAT_8c4ab278 = dVar2;
  }
  FUN_8c23ba9c(ar5,ar5_00,ar6,ar7_00,ar4);
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(0x437f0000,in_fr5);
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)_DAT_8c4ab278);
  }
  else {
    dVar3 = -5.486125448238677e+303;
  }
  fVar4 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar9 == '\0') {
    fVar1 = SUB84(dVar2,0) * fVar4;
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar1);
    uVar5 = (uint)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    uVar5 = (uint)dVar2;
  }
  if (cVar10 == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)((int)_DAT_8c4ab278 + 4)
                            );
  }
  if (cVar9 == '\0') {
    fVar1 = SUB84(dVar2,0) * fVar4;
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar1);
    uVar6 = (uint)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    uVar6 = (uint)dVar2;
  }
  if (cVar10 == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)(_DAT_8c4ab278 + 1));
  }
  if (cVar9 == '\0') {
    fVar1 = SUB84(dVar2,0) * fVar4;
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar1);
    uVar7 = (uint)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    uVar7 = (uint)dVar2;
  }
  if (cVar10 == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),
                             *(undefined4 *)((int)_DAT_8c4ab278 + 0xc));
  }
  if (cVar9 == '\0') {
    fVar1 = SUB84(dVar2,0) * fVar4;
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar1);
    uVar8 = (uint)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    uVar8 = (uint)dVar2;
  }
  if (0xff < uVar5) {
    uVar5 = 0xff;
  }
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  if (0xff < uVar7) {
    uVar7 = 0xff;
  }
  if (0xff < uVar8) {
    uVar8 = 0xff;
  }
  *ar4 = uVar5 << 0x18 | uVar6 << 0x10 | uVar7 << 8 | uVar8;
  if (cVar10 == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),
                             *(undefined4 *)((int)_DAT_8c4ab278 + 0x14));
  }
  if (cVar9 == '\0') {
    fVar1 = SUB84(dVar2,0) * fVar4;
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar1);
    uVar5 = (uint)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    uVar5 = (uint)dVar2;
  }
  if (cVar10 == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)(_DAT_8c4ab278 + 3));
  }
  if (cVar9 == '\0') {
    fVar1 = SUB84(dVar2,0) * fVar4;
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar1);
    uVar6 = (uint)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    uVar6 = (uint)dVar2;
  }
  if (cVar10 == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),
                             *(undefined4 *)((int)_DAT_8c4ab278 + 0x1c));
  }
  if (cVar9 == '\0') {
    uVar7 = (uint)(SUB84(dVar2,0) * fVar4);
  }
  else {
    uVar7 = (uint)(dVar2 * dVar3);
  }
  if (0xff < uVar5) {
    uVar5 = 0xff;
  }
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  if (0xff < uVar7) {
    uVar7 = 0xff;
  }
  ar4[1] = uVar5 << 0x10 | uVar6 << 8 | uVar7 | 0xff000000;
  return 0xc;
}

__asm__(".globl _FUN_8c23bcc8\n.set _FUN_8c23bcc8, _FUN_8c23bcc8_def\n");
