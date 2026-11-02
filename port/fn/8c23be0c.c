#include "../decls.h"
undefined4 FUN_8c23be0c_def(uint *ar4,undefined4 ar5,float *ar6,int ar7)

{
  double *ar4_00;
  uint uVar1;
  int ar7_00;
  double in_dr0;
  float in_fr3;
  float fVar2;
  double dVar3;
  undefined4 uVar4;
  undefined8 in_xd2;
  undefined4 in_PR;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  double adStack_40 [4];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  cVar9 = '\0';
  cVar8 = '\0';
  _DAT_8c4ab278 = adStack_40;
  ar7_00 = ar7;
  _DAT_8c4ab27c = ar5;
  _DAT_8c4ab280 = ar6;
  uVar4 = ar5;
  uStack_14 = in_PR;
  FUN_8c23ba30(_DAT_8c4ab278,ar5,ar6,ar7);
  ar4_00 = _DAT_8c4ab278 + 2;
  FUN_8c23ba30(ar4_00,ar5,ar6,ar7_00);
  if (ar7 != 0) {
    if (cVar9 == '\0') {
      in_fr3 = *_DAT_8c4ab280;
    }
    else {
      in_xd2 = *(undefined8 *)_DAT_8c4ab280;
    }
    if (cVar9 == '\0') {
      fVar2 = _DAT_8c4ab280[1];
      fStack_20 = -in_fr3;
    }
    else {
      fStack_20 = (float)in_xd2;
      in_xd2 = *(undefined8 *)(_DAT_8c4ab280 + 1);
      fVar2 = -in_fr3;
    }
    if (cVar9 == '\0') {
      fStack_18 = _DAT_8c4ab280[2];
      fStack_1c = -fVar2;
    }
    else {
      fStack_1c = (float)in_xd2;
      in_xd2 = *(undefined8 *)(_DAT_8c4ab280 + 2);
      fStack_18 = -fVar2;
    }
    _DAT_8c4ab280 = &fStack_20;
    fStack_18 = -fStack_18;
    if (cVar9 != '\0') {
      fStack_18 = (float)in_xd2;
      uStack_14 = (undefined4)((ulonglong)in_xd2 >> 0x20);
    }
  }
  FUN_8c23ba42(ar4_00,ar5,ar6,ar7_00);
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)_DAT_8c4ab278,_DAT_8c4c11b0);
  }
  else {
    dVar3 = *_DAT_8c4ab278;
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) + SUB84(dVar3,0),SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 + dVar3;
  }
  if (cVar9 == '\0') {
    *(int *)_DAT_8c4ab278 = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *_DAT_8c4ab278 = dVar3;
  }
  FUN_8c23ba9c(uVar4,ar5,ar6,ar7_00,uVar4);
  uVar1 = *ar4;
  uVar4 = (undefined4)((ulonglong)dVar3 >> 0x20);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)_DAT_8c4ab278);
  }
  if (cVar8 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                              SUB84(in_dr0,0) * (float)(uVar1 >> 0x18));
  }
  else {
    in_dr0 = in_dr0 * (double)CONCAT44(uVar4,(float)(uVar1 >> 0x18));
  }
  if (cVar8 == '\0') {
    uVar5 = (uint)SUB84(in_dr0,0);
  }
  else {
    uVar5 = (uint)in_dr0;
  }
  fVar2 = (float)(uVar1 >> 0x10 & 0xff);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                              *(undefined4 *)((int)_DAT_8c4ab278 + 4));
  }
  if (cVar8 == '\0') {
    fVar2 = SUB84(in_dr0,0) * fVar2;
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar2);
    uVar6 = (uint)fVar2;
  }
  else {
    in_dr0 = in_dr0 * (double)CONCAT44(uVar4,fVar2);
    uVar6 = (uint)in_dr0;
  }
  fVar2 = (float)(uVar1 >> 8 & 0xff);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(_DAT_8c4ab278 + 1));
  }
  if (cVar8 == '\0') {
    fVar2 = SUB84(in_dr0,0) * fVar2;
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar2);
    uVar7 = (uint)fVar2;
  }
  else {
    in_dr0 = in_dr0 * (double)CONCAT44(uVar4,fVar2);
    uVar7 = (uint)in_dr0;
  }
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                              *(undefined4 *)((int)_DAT_8c4ab278 + 0xc));
  }
  if (cVar8 == '\0') {
    fVar2 = SUB84(in_dr0,0) * (float)(uVar1 & 0xff);
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar2);
    uVar1 = (uint)fVar2;
  }
  else {
    in_dr0 = in_dr0 * (double)CONCAT44(uVar4,(float)(uVar1 & 0xff));
    uVar1 = (uint)in_dr0;
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
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *ar4 = uVar5 << 0x18 | uVar6 << 0x10 | uVar7 << 8 | uVar1;
  uVar1 = ar4[1];
  fVar2 = (float)(uVar1 >> 0x10 & 0xff);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                              *(undefined4 *)((int)_DAT_8c4ab278 + 0x14));
  }
  if (cVar8 == '\0') {
    fVar2 = SUB84(in_dr0,0) * fVar2;
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar2);
    uVar5 = (uint)fVar2;
  }
  else {
    in_dr0 = in_dr0 * (double)CONCAT44(uVar4,fVar2);
    uVar5 = (uint)in_dr0;
  }
  fVar2 = (float)(uVar1 >> 8 & 0xff);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(_DAT_8c4ab278 + 3));
  }
  if (cVar8 == '\0') {
    fVar2 = SUB84(in_dr0,0) * fVar2;
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar2);
    uVar6 = (uint)fVar2;
  }
  else {
    in_dr0 = in_dr0 * (double)CONCAT44(uVar4,fVar2);
    uVar6 = (uint)in_dr0;
  }
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                              *(undefined4 *)((int)_DAT_8c4ab278 + 0x1c));
  }
  if (cVar8 == '\0') {
    uVar1 = (uint)(SUB84(in_dr0,0) * (float)(uVar1 & 0xff));
  }
  else {
    uVar1 = (uint)(in_dr0 * (double)CONCAT44(uVar4,(float)(uVar1 & 0xff)));
  }
  if (0xff < uVar5) {
    uVar5 = 0xff;
  }
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  ar4[1] = uVar5 << 0x10 | uVar6 << 8 | uVar1 | 0xff000000;
  return 0xc;
}

__asm__(".globl _FUN_8c23be0c\n.set _FUN_8c23be0c, _FUN_8c23be0c_def\n");
