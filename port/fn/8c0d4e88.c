#include "../decls.h"
undefined1 * FUN_8c0d4e88_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  float fVar1;
  undefined8 in_dr0;
  undefined4 uVar3;
  undefined1 *puVar4;
  double dVar2;
  float fVar5;
  undefined4 in_fr3;
  double dVar6;
  double in_xd0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  Class_12c394_m0_102b04(0x8c437a78,ar5,ar6,ar7);
  uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar8 == '\0') {
    fVar1 = *(float *)(ar5 + 8);
    puVar4 = (undefined1 *)0x44bb8000;
    _DAT_8c437c78 = uVar3;
  }
  else {
    _DAT_8c437c78 = (undefined4)in_dr0;
    in_xd0 = *(double *)(ar5 + 8);
    fVar1 = 1500.0;
    puVar4 = &DAT_8c437844;
    _DAT_8c437c7c = uVar3;
  }
  if (cVar7 != '\0' || fVar1 <= (float)(uint)puVar4) {
    if (cVar8 == '\0') {
      dVar2 = (double)CONCAT44(0x44bb8000,_DAT_8c437c78);
    }
    else {
      in_xd0 = (double)CONCAT44(_DAT_8c437c7c,_DAT_8c437c78);
      dVar2 = -1.3596743611313892e-249;
    }
    if (cVar7 == '\0') {
      fVar1 = (float)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)CONCAT44(fVar1,SUB84(dVar2,0) * fVar1);
    }
    else {
      dVar2 = dVar2 * dVar2;
    }
    if (cVar8 == '\0') {
      _DAT_8c437844 = SUB84(dVar2,0);
    }
    else {
      _DAT_8c437844 = SUB84(in_xd0,0);
      _DAT_8c437848 = (float)((ulonglong)in_xd0 >> 0x20);
    }
  }
  else {
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar5 + 8),in_fr3);
      dVar2 = (double)CONCAT44(0x44bb8000,fVar1);
    }
    else {
      dVar6 = *(double *)(ar5 + 8);
      dVar2 = -1.3596743611313892e-249;
    }
    if (cVar7 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - (float)((ulonglong)dVar2 >> 0x20)
                               ,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - dVar2;
    }
    if (cVar8 == '\0') {
      dVar2 = (double)CONCAT44(0x44bb8000,_DAT_8c437c78);
    }
    else {
      in_xd0 = (double)CONCAT44(_DAT_8c437c7c,_DAT_8c437c78);
      dVar2 = -1.3596743611313892e-249;
    }
    if (cVar7 == '\0') {
      fVar5 = (float)((ulonglong)dVar2 >> 0x20);
      fVar1 = SUB84(dVar2,0) * fVar5;
      dVar2 = (double)CONCAT44(fVar5,fVar1);
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + fVar1,SUB84(dVar6,0));
    }
    else {
      dVar2 = dVar2 * dVar2;
      dVar6 = dVar6 + dVar2;
    }
    fVar1 = (float)((ulonglong)dVar6 >> 0x20);
    _DAT_8c437844 = fVar1;
    if (cVar8 != '\0') {
      _DAT_8c437844 = SUB84(dVar6,0);
      _DAT_8c437848 = fVar1;
    }
  }
  Class_12c394_m0_102b04(0x8c437aa4,ar5_00,ar6,ar7);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(0x44bb8000,(int)((ulonglong)dVar2 >> 0x20));
    dVar2 = in_xd0;
  }
  else {
    dVar6 = -1.3596743611313892e-249;
  }
  if (cVar7 == '\0') {
    fVar1 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar6 * dVar6,0);
  }
  fVar5 = _DAT_8c437844;
  _DAT_8c437c74 = fVar1;
  if (cVar8 != '\0') {
    _DAT_8c437c74 = SUB84(dVar2,0);
    _DAT_8c437c78 = (undefined4)((ulonglong)dVar2 >> 0x20);
    dVar2 = (double)CONCAT44(_DAT_8c437848,_DAT_8c437844);
    fVar5 = fVar1;
  }
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(_DAT_8c437c74,fVar5);
  }
  else {
    dVar6 = (double)CONCAT44(_DAT_8c437c78,_DAT_8c437c74);
  }
  if (cVar7 == '\0') {
    _DAT_8c437848 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    _DAT_8c437848 = SUB84(dVar6 + dVar6,0);
  }
  if (cVar8 != '\0') {
    _DAT_8c437848 = SUB84(dVar2,0);
    _DAT_8c43784c = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  return &DAT_8c437c74;
}

__asm__(".globl _FUN_8c0d4e88\n.set _FUN_8c0d4e88, _FUN_8c0d4e88_def\n");
