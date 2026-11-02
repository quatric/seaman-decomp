#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c10a80c_def(int ar4,undefined4 ar5,undefined4 ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c10a80c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
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
  float in_fr15 = 0;
  undefined8 in_xd2 = 0;
  undefined8 uVar12;
  char cVar13;
  
  fVar7 = *(float *)(unsigned)(ar4 + 0x88);
  if (fVar7 <= *(float *)(unsigned)(ar4 + 100)) {
    *(undefined4 *)(unsigned)(ar4 + 0x4c) = 0;
    *(undefined1 *)(unsigned)(ar4 + 0x50) = 1;
  }
  if (*(char *)(unsigned)(ar4 + 0x50) != '\0') {
    if (*(int *)(unsigned)(ar4 + 0x38) == 0) {
      *(undefined1 *)(unsigned)(ar4 + 0x50) = 0;
    }
    if (*(char *)(unsigned)(ar4 + 0x50) != '\0') {
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c10a564(ar4,ar5,ar6,ar7));
      return 1;
    }
  }
  if (*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') {
    cVar13 = '\0';
    uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c112074(*(undefined4 *)(unsigned)(ar4 + 0xc),5,(int)&(*(undefined8 *)(fr0_ - 0x34)) + 4,ar7));
    ar5_00 = (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x34))+4));
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
    iVar6 = *(int *)(unsigned)(ar4 + 0x7c);
    if (cVar13 == '\0') {
      in_fr15 = *((float *)(unsigned long)*(unsigned *)(fr0_ - 0x28));
      (*(undefined8 *)(fr0_ - 0x34)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x34))+4)),*(undefined4 *)(unsigned)((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x20)));
      fVar7 = *((float *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
      *(float *)(unsigned)(ar4 + 0x60) = fVar7;
    }
    else {
      (*(undefined8 *)(fr0_ - 0x34)) = *((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x20));
      in_xd2 = *(undefined8 *)(unsigned)((float *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
      *(undefined8 *)(unsigned)(ar4 + 0x60) = in_xd2;
    }
    (vsp = ((unsigned long)(fr0_ - 52)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x5c),(*(undefined4 *)(fr0_ - 0x2c)),iVar6,ar7));
    pfVar5 = (float *)(unsigned)(iVar6 * 4);
    cVar13 = '\0';
    a6 = pfVar5;
    (vsp = ((unsigned long)(fr0_ - 52)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x34),ar5_00,pfVar5,ar7));
    uVar12 = (*(undefined8 *)(fr0_ - 0x34));
    if (cVar13 == '\0') {
      uVar12 = in_xd2;
      fVar7 = (float)(*(undefined8 *)(fr0_ - 0x34));
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x34) + (int)pfVar5) = fVar7;
    }
    else {
      *(undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x34) + (int)pfVar5) = uVar12;
    }
    iVar3 = *(int *)(unsigned)(ar4 + 0x34) + *(int *)(unsigned)(ar4 + 0x40) * 4;
    *(int *)(unsigned)(ar4 + 0x34) = iVar3;
    if (iVar3 == *(int *)(unsigned)(ar4 + 0x2c)) {
      *(undefined4 *)(unsigned)(ar4 + 0x34) = *(undefined4 *)(unsigned)(ar4 + 0x28);
    }
    *(int *)(unsigned)(ar4 + 0x38) = *(int *)(unsigned)(ar4 + 0x38) + 1;
    *(int *)(unsigned)(ar4 + 0x74) = *(int *)(unsigned)(ar4 + 0x74) + 1;
    if (cVar13 == '\0') {
      fVar7 = 0.0009999999;
    }
    if (fVar7 < in_fr15) {
      ar7 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x5c));
      pfVar4 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x58));
      a6 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x34) + *(int *)(unsigned)(ar4 + 0x48) * -4);
      ar5_00 = (float *)(unsigned)((int)pfVar5 + (int)pfVar4);
      if (a6 < ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28))) {
        a6 = a6 + *(int *)(unsigned)(ar4 + 0x44);
      }
      *(float *)(unsigned)(ar4 + 100) = *(float *)(unsigned)(ar4 + 100) + in_fr15;
      if (*(float *)(unsigned)(ar4 + 0x88) <= *(float *)(unsigned)(ar4 + 100)) {
        *(undefined4 *)(unsigned)(ar4 + 100) = *(undefined4 *)(unsigned)(ar4 + 0x88);
      }
      fVar7 = in_fr15 / *(float *)(unsigned)(ar4 + 100);
      *(float *)(unsigned)(ar4 + 0x70) = *(float *)(unsigned)(ar4 + 0x70) + fVar7;
      fVar11 = fVar7 * *(float *)(unsigned)(ar4 + 0x90);
      if (1.0 < fVar11) {
        fVar11 = 1.0;
      }
      fVar7 = fVar7 / *(float *)(unsigned)(ar4 + 0x90);
      if (1.0 < fVar7) {
        fVar7 = 1.0;
      }
      fVar8 = 0.0;
      for (; pfVar4 < ar5_00; pfVar4 = pfVar4 + 1) {
        fVar10 = *a6;
        if (fVar10 < *ar7 + *(float *)(unsigned)(ar4 + 0x94)) {
          fVar10 = *ar7 + *(float *)(unsigned)(ar4 + 0x94);
        }
        fVar9 = fVar10 - *pfVar4;
        if (fVar9 < *(float *)(unsigned)(ar4 + 0x98)) {
          fVar9 = *(float *)(unsigned)(ar4 + 0x98);
        }
        fVar1 = fVar7;
        if (0.0 < fVar9) {
          fVar1 = fVar11;
        }
        fVar9 = *pfVar4 + fVar9 * fVar1;
        fVar10 = fVar10 - fVar9;
        *pfVar4 = fVar9;
        if (fVar10 <= 0.0) {
          fVar10 = fVar10 / *(float *)(unsigned)(ar4 + 0x90);
        }
        else {
          fVar10 = fVar10 * *(float *)(unsigned)(ar4 + 0x90);
        }
        a6 = a6 + 1;
        fVar8 = fVar8 + fVar10;
        ar7 = ar7 + 1;
      }
      fVar7 = *(float *)(unsigned)(ar4 + 0x6c) + in_fr15;
      *(float *)(unsigned)(ar4 + 0x6c) = fVar7;
      if (200.0 < fVar7) {
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0x43480000;
      }
      fVar11 = in_fr15 / *(float *)(unsigned)(ar4 + 0x6c);
      *(float *)(unsigned)(ar4 + 0x70) = *(float *)(unsigned)(ar4 + 0x70) + fVar11;
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
      for (pfVar5 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x58)); pfVar5 < ar5_00; pfVar5 = pfVar5 + 1) {
        *pfVar5 = *pfVar5 + fVar8;
      }
    }
    if ((in_fr15 == 0.0) && (*(uint *)(unsigned)(ar4 + 0x9c) < *(uint *)(unsigned)(ar4 + 0x74))) {
      *(int *)(unsigned)(ar4 + 0x78) = *(int *)(unsigned)(ar4 + 0x78) + 1;
      iVar6 = *(int *)(unsigned)(ar4 + 0x68) + 1;
      *(int *)(unsigned)(ar4 + 0x68) = iVar6;
      if (0x32 < iVar6) {
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0x32;
      }
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x78) = 0;
    }
    iVar6 = *(int *)(unsigned)(ar4 + 0x4c);
    if (iVar6 == 0) {
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c10a564(ar4,ar5_00,a6,ar7));
    }
    else if (iVar6 == 1) {
      if (*(int *)(unsigned)(ar4 + 0x84) < *(int *)(unsigned)(ar4 + 0x78)) {
        *(undefined4 *)(unsigned)(ar4 + 0x4c) = 2;
        *(undefined1 *)(unsigned)(ar4 + 0x50) = 1;
        (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c10a564(ar4,ar5_00,a6,ar7));
      }
      else if (*(int *)(unsigned)(ar4 + 0x38) == *(int *)(unsigned)(ar4 + 0x3c)) {
        (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c10a564(ar4,ar5_00,a6,ar7));
      }
    }
    else if (iVar6 == 2) {
      if (in_fr15 <= 0.0009999999) {
        (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c10a564(ar4,ar5_00,a6,ar7));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x4c) = 1;
      }
    }
  }
  if ((*(char *)(unsigned)(ar4 + 0x50) == '\0') &&
     (*(int *)(unsigned)(*(int *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x40) + (((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4) ==
      *(int *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x3c))) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c10a80c\n.set _FUN_8c10a80c, _FUN_8c10a80c_def\n");
