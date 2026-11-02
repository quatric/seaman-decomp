#include "../decls.h"
undefined4 FUN_8c10a80c_def(int ar4,undefined4 ar5,undefined4 ar6,float *ar7)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float *ar5_00;
  float *pfVar5;
  float *a6;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_fr15;
  undefined8 in_xd2;
  undefined8 uVar12;
  char cVar13;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  float *pfStack_28;
  float *pfStack_24;
  undefined8 *puStack_20;
  
  fVar7 = *(float *)(ar4 + 0x88);
  if (fVar7 <= *(float *)(ar4 + 100)) {
    *(undefined4 *)(ar4 + 0x4c) = 0;
    *(undefined1 *)(ar4 + 0x50) = 1;
  }
  if (*(char *)(ar4 + 0x50) != '\0') {
    if (*(int *)(ar4 + 0x38) == 0) {
      *(undefined1 *)(ar4 + 0x50) = 0;
    }
    if (*(char *)(ar4 + 0x50) != '\0') {
      FUN_8c10a564(ar4,ar5,ar6,ar7);
      return 1;
    }
  }
  if (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') {
    cVar13 = '\0';
    uVar2 = FUN_8c112074(*(undefined4 *)(ar4 + 0xc),5,(int)&uStack_34 + 4,ar7);
    ar5_00 = (*(uint*)((uchar*)&uStack_34+4));
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
    iVar6 = *(int *)(ar4 + 0x7c);
    if (cVar13 == '\0') {
      in_fr15 = *pfStack_28;
      uStack_34 = CONCAT44((*(uint*)((uchar*)&uStack_34+4)),*(undefined4 *)puStack_20);
      fVar7 = *pfStack_24;
      *(float *)(ar4 + 0x60) = fVar7;
    }
    else {
      uStack_34 = *puStack_20;
      in_xd2 = *(undefined8 *)pfStack_24;
      *(undefined8 *)(ar4 + 0x60) = in_xd2;
    }
    memmove(*(undefined4 *)(ar4 + 0x5c),uStack_2c,iVar6,ar7);
    pfVar5 = (float *)(iVar6 * 4);
    cVar13 = '\0';
    a6 = pfVar5;
    memmove(*(undefined4 *)(ar4 + 0x34),ar5_00,pfVar5,ar7);
    uVar12 = uStack_34;
    if (cVar13 == '\0') {
      uVar12 = in_xd2;
      fVar7 = (float)uStack_34;
    }
    if (cVar13 == '\0') {
      *(float *)(*(int *)(ar4 + 0x34) + (int)pfVar5) = fVar7;
    }
    else {
      *(undefined8 *)(*(int *)(ar4 + 0x34) + (int)pfVar5) = uVar12;
    }
    iVar3 = *(int *)(ar4 + 0x34) + *(int *)(ar4 + 0x40) * 4;
    *(int *)(ar4 + 0x34) = iVar3;
    if (iVar3 == *(int *)(ar4 + 0x2c)) {
      *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(ar4 + 0x28);
    }
    *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + 1;
    *(int *)(ar4 + 0x74) = *(int *)(ar4 + 0x74) + 1;
    if (cVar13 == '\0') {
      fVar7 = 0.0009999999;
    }
    if (fVar7 < in_fr15) {
      ar7 = *(float **)(ar4 + 0x5c);
      pfVar4 = *(float **)(ar4 + 0x58);
      a6 = (float *)(*(int *)(ar4 + 0x34) + *(int *)(ar4 + 0x48) * -4);
      ar5_00 = (float *)((int)pfVar5 + (int)pfVar4);
      if (a6 < *(float **)(ar4 + 0x28)) {
        a6 = a6 + *(int *)(ar4 + 0x44);
      }
      *(float *)(ar4 + 100) = *(float *)(ar4 + 100) + in_fr15;
      if (*(float *)(ar4 + 0x88) <= *(float *)(ar4 + 100)) {
        *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar4 + 0x88);
      }
      fVar7 = in_fr15 / *(float *)(ar4 + 100);
      *(float *)(ar4 + 0x70) = *(float *)(ar4 + 0x70) + fVar7;
      fVar11 = fVar7 * *(float *)(ar4 + 0x90);
      if (1.0 < fVar11) {
        fVar11 = 1.0;
      }
      fVar7 = fVar7 / *(float *)(ar4 + 0x90);
      if (1.0 < fVar7) {
        fVar7 = 1.0;
      }
      fVar8 = 0.0;
      for (; pfVar4 < ar5_00; pfVar4 = pfVar4 + 1) {
        fVar10 = *a6;
        if (fVar10 < *ar7 + *(float *)(ar4 + 0x94)) {
          fVar10 = *ar7 + *(float *)(ar4 + 0x94);
        }
        fVar9 = fVar10 - *pfVar4;
        if (fVar9 < *(float *)(ar4 + 0x98)) {
          fVar9 = *(float *)(ar4 + 0x98);
        }
        fVar1 = fVar7;
        if (0.0 < fVar9) {
          fVar1 = fVar11;
        }
        fVar9 = *pfVar4 + fVar9 * fVar1;
        fVar10 = fVar10 - fVar9;
        *pfVar4 = fVar9;
        if (fVar10 <= 0.0) {
          fVar10 = fVar10 / *(float *)(ar4 + 0x90);
        }
        else {
          fVar10 = fVar10 * *(float *)(ar4 + 0x90);
        }
        a6 = a6 + 1;
        fVar8 = fVar8 + fVar10;
        ar7 = ar7 + 1;
      }
      fVar7 = *(float *)(ar4 + 0x6c) + in_fr15;
      *(float *)(ar4 + 0x6c) = fVar7;
      if (200.0 < fVar7) {
        *(undefined4 *)(ar4 + 0x6c) = 0x43480000;
      }
      fVar11 = in_fr15 / *(float *)(ar4 + 0x6c);
      *(float *)(ar4 + 0x70) = *(float *)(ar4 + 0x70) + fVar11;
      fVar7 = (float)iVar6;
      if (iVar6 < 0) {
        fVar7 = fVar7 + 4.2949673e+09;
      }
      fVar8 = fVar8 * (fVar11 / fVar7);
      if (0.7 < fVar8) {
        fVar8 = 0.7;
      }
      if (fVar8 < -0.7) {
        fVar8 = -0.7;
      }
      for (pfVar5 = *(float **)(ar4 + 0x58); pfVar5 < ar5_00; pfVar5 = pfVar5 + 1) {
        *pfVar5 = *pfVar5 + fVar8;
      }
    }
    if ((in_fr15 == 0.0) && (*(uint *)(ar4 + 0x9c) < *(uint *)(ar4 + 0x74))) {
      *(int *)(ar4 + 0x78) = *(int *)(ar4 + 0x78) + 1;
      iVar6 = *(int *)(ar4 + 0x68) + 1;
      *(int *)(ar4 + 0x68) = iVar6;
      if (0x32 < iVar6) {
        *(undefined4 *)(ar4 + 0x68) = 0x32;
      }
    }
    else {
      *(undefined4 *)(ar4 + 0x78) = 0;
    }
    iVar6 = *(int *)(ar4 + 0x4c);
    if (iVar6 == 0) {
      FUN_8c10a564(ar4,ar5_00,a6,ar7);
    }
    else if (iVar6 == 1) {
      if (*(int *)(ar4 + 0x84) < *(int *)(ar4 + 0x78)) {
        *(undefined4 *)(ar4 + 0x4c) = 2;
        *(undefined1 *)(ar4 + 0x50) = 1;
        FUN_8c10a564(ar4,ar5_00,a6,ar7);
      }
      else if (*(int *)(ar4 + 0x38) == *(int *)(ar4 + 0x3c)) {
        FUN_8c10a564(ar4,ar5_00,a6,ar7);
      }
    }
    else if (iVar6 == 2) {
      if (in_fr15 <= 0.0009999999) {
        FUN_8c10a564(ar4,ar5_00,a6,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x4c) = 1;
      }
    }
  }
  if ((*(char *)(ar4 + 0x50) == '\0') &&
     (*(int *)(*(int *)(**(int **)(ar4 + 0xc) + 0x40) + (*(int **)(ar4 + 0xc))[1] * 4) ==
      *(int *)(**(int **)(ar4 + 0xc) + 0x3c))) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c10a80c\n.set _FUN_8c10a80c, _FUN_8c10a80c_def\n");
