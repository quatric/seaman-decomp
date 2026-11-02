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
undefined4 FUN_8c123ea6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c123ea6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  undefined4 uVar2;
  ushort uVar3;
  short *psVar4;
  float *pfVar5;
  short sVar6;
  int iVar7;
  int ar5_00;
  short sVar8;
  float *ar6_00;
  int iVar9;
  float *ar7_00;
  undefined8 in_dr0 = 0;
  float fVar10;
  undefined8 in_dr4 = 0;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  undefined8 in_xd14 = 0;
  char cVar15;
  
  fVar12 = F32HI(in_dr0);
  cVar15 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x4a4) = 0x3c23d70a;
  fVar10 = F32HI(in_dr4);
  uVar14 = CONCAT44(0x3f800000,fVar10);
  iVar7 = ar4;
  if (*(char *)(unsigned)(ar4 + 0x28) == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x3f800000;
    *(float *)(unsigned)(ar4 + 0x3c) = fVar10;
    if (*(char *)(unsigned)(ar4 + 0x4ac) == '\0') {
      *(float *)(unsigned)(ar4 + 0x2c) = fVar10 + *(float *)(unsigned)(ar4 + 0x4a0) + 1.0;
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = *(undefined4 *)(unsigned)(ar4 + 0x4a0);
    }
    *(undefined4 *)(unsigned)(ar4 + 0x494) = 0x40400000;
    fVar10 = *(float *)(unsigned)(ar4 + 0x38) * 1.5 + *(float *)(unsigned)(ar4 + 0x3c);
    *(float *)(unsigned)(ar4 + 0x34) = fVar10;
    fVar12 = 1.8939124;
    *(float *)(unsigned)(ar4 + 0x30) = fVar10 + 1.1513;
    ar6 = 300;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xe0ad78eb;
    *(undefined2 *)(unsigned)(ar4 + 0x4b4) = 0;
    *(undefined1 *)(unsigned)(ar4 + 0x28) = 1;
    iVar7 = ar4 + 0xac;
    ar5 = 0;
    cVar15 = '\0';
    (vsp = ((unsigned long)(fr0_ - 0)), memset(iVar7,0,300,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x430) = 0;
  }
  fVar10 = (float)in_dr4;
  if (*(short *)(unsigned)(ar4 + 0x48) < 1) {
    if (*(uint *)(unsigned)(ar4 + 0x430) < 0x28) {
      *(int *)(unsigned)(ar4 + 0x430) = *(int *)(unsigned)(ar4 + 0x430) + 1;
      (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013be8(iVar7,ar5,ar6,ar7));
      cVar15 = '\0';
      sVar8 = (short)(int)fVar12;
    }
    else {
      sVar8 = 5;
      psVar4 = (short *)(unsigned)(*((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x488)) * 2 + ar4 + 0xac);
      *psVar4 = *psVar4 + -1;
    }
    fVar12 = (float)uVar14;
    if (cVar15 == '\0') {
      fVar10 = 0.5;
      in_xd14 = CONCAT44(fVar12,0xc1280000);
    }
    sVar6 = (short)(int)(((F32HI(in_xd14) + (float)in_xd14) * 149.0) / 20.5 +
                        fVar10);
    if (sVar6 < 0) {
      sVar6 = 0;
    }
    if (0x95 < sVar6) {
      sVar6 = 0x95;
    }
    psVar4 = (short *)(unsigned)(sVar6 * 2 + ar4 + 0xac);
    *psVar4 = *psVar4 + 1;
    psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x488));
    *(unsigned *)(unsigned)(ar4 + 0x488) = psVar4 + 1;
    *psVar4 = sVar6;
    if (*(int *)(unsigned)(ar4 + 0x488) == *(int *)(unsigned)(ar4 + 0x484)) {
      *(int *)(unsigned)(ar4 + 0x488) = ar4 + 0x434;
    }
    sVar6 = 0;
    psVar4 = (short *)(unsigned)(ar4 + 0xac);
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      iVar7 = (int)sVar8;
      sVar6 = sVar6 + sVar1;
    } while (sVar6 < iVar7);
    iVar9 = (int)psVar4 - (ar4 + 0xac);
    psVar4 = (short *)(unsigned)(ar4 + 0x1d6);
    ar5_00 = 0;
    ar7_00 = (float *)(unsigned)((((int)(iVar9 + (uint)(iVar9 < 0)) >> 1) + 0xffffU & 0xffff) * 4 +
                      ar4 + 0x1d8);
    do {
      ar5_00 = ar5_00 + *psVar4;
      psVar4 = psVar4 + -1;
    } while ((short)ar5_00 < iVar7);
    iVar9 = (int)psVar4 - (ar4 + 0xac);
    ar6_00 = (float *)(unsigned)((((int)(iVar9 + (uint)(iVar9 < 0)) >> 1) + 1U & 0xffff) * 4 + ar4 + 0x1d8);
    fVar11 = *ar6_00;
    fVar13 = *ar7_00 - *(float *)(unsigned)(ar4 + 0x3c);
    if (fVar10 < fVar13) {
      fVar13 = fVar10;
    }
    if (fVar13 <= 0.0) {
      fVar10 = 0.049999997;
    }
    else {
      fVar10 = 0.01;
    }
    *(float *)(unsigned)(ar4 + 0x3c) = *(float *)(unsigned)(ar4 + 0x3c) + fVar13 * fVar10 + 0.0;
    pfVar5 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa8));
    fVar10 = *((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa8));
    *(unsigned *)(unsigned)(ar4 + 0xa8) = pfVar5 + 1;
    *pfVar5 = fVar12;
    if (*(uint *)(unsigned)(ar4 + 0xa4) <= *(uint *)(unsigned)(ar4 + 0xa8)) {
      *(int *)(unsigned)(ar4 + 0xa8) = ar4 + 0x54;
    }
    if (fVar10 - *(float *)(unsigned)(ar4 + 0x3c) < *(float *)(unsigned)(ar4 + 0x38) + 0.5) {
      fVar10 = (fVar11 - *(float *)(unsigned)(ar4 + 0x3c)) - *(float *)(unsigned)(ar4 + 0x38);
      if (0.099999994 < fVar10) {
        fVar10 = 0.099999994;
      }
      if (fVar10 <= 0.0) {
        fVar13 = 0.19999999;
      }
      else {
        fVar13 = 0.02;
      }
      *(float *)(unsigned)(ar4 + 0x38) = *(float *)(unsigned)(ar4 + 0x38) + fVar10 * fVar13 + 0.0;
      if (*(float *)(unsigned)(ar4 + 0x38) < 0.46) {
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x3eeb851e;
      }
    }
    *(float *)(unsigned)(ar4 + 0x34) = *(float *)(unsigned)(ar4 + 0x38) * 1.5 + *(float *)(unsigned)(ar4 + 0x3c);
    if (*(char *)(unsigned)(ar4 + 0x4ac) == '\0') {
      fVar10 = 0.0;
    }
    else {
      fVar10 = *(float *)(unsigned)(ar4 + 0x38) + *(float *)(unsigned)(ar4 + 0x3c);
    }
    fVar13 = *(float *)(unsigned)(ar4 + 0x40) -
             ((*(float *)(unsigned)(ar4 + 0x2c) + fVar10) - *(float *)(unsigned)(ar4 + 0x34)) * 0.01;
    *(float *)(unsigned)(ar4 + 0x40) = fVar13;
    if (fVar13 < fVar11) {
      *(float *)(unsigned)(ar4 + 0x40) = fVar11 - fVar10;
    }
    *(float *)(unsigned)(ar4 + 0x30) = *(float *)(unsigned)(ar4 + 0x34) + 1.1513;
    fVar11 = *(float *)(unsigned)(ar4 + 0x498) + *(float *)(unsigned)(ar4 + 0x4a8) + -1007.0;
    *(float *)(unsigned)(ar4 + 0x50) = fVar11;
    fVar13 = 1.8939124;
    if (*(float *)(unsigned)(ar4 + 0x30) < fVar11) {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = *(undefined4 *)(unsigned)(ar4 + 0x50);
    }
    if (fVar12 <= *(float *)(unsigned)(ar4 + 0x30)) {
      *(undefined2 *)(unsigned)(ar4 + 0x44) = 0;
    }
    else {
      *(short *)(unsigned)(ar4 + 0x44) = *(short *)(unsigned)(ar4 + 0x44) + 1;
    }
    if (*(short *)(unsigned)(ar4 + 0x48e) < *(short *)(unsigned)(ar4 + 0x44)) {
      if (*(short *)(unsigned)(ar4 + 0x46) == 0) {
        *(float *)(unsigned)(ar4 + 0x40) = *(float *)(unsigned)(ar4 + 0x34) - fVar10;
      }
      *(undefined2 *)(unsigned)(ar4 + 0x46) = *(undefined2 *)(unsigned)(ar4 + 0x490);
    }
    sVar8 = *(short *)(unsigned)(ar4 + 0x46);
    *(short *)(unsigned)(ar4 + 0x46) = sVar8 + -1;
    if (sVar8 < 1) {
      *(undefined2 *)(unsigned)(ar4 + 0x46) = 0;
      *(undefined2 *)(unsigned)(ar4 + 0x4a) = 0;
    }
    else {
      uVar3 = *(short *)(unsigned)(ar4 + 0x4a) + 1;
      *(ushort *)(unsigned)(ar4 + 0x4a) = uVar3;
      if ((((uint)uVar3 == (int)*(short *)(unsigned)(ar4 + 0x492)) || (*(short *)(unsigned)(ar4 + 0x46) == 0)) ||
         (fVar13 = 1.8939124, *(float *)(unsigned)(ar4 + 0x2c) + 1.0 < *(float *)(unsigned)(ar4 + 0x40))) {
        *(undefined2 *)(unsigned)(ar4 + 0x4a) = 0;
        fVar11 = *(float *)(unsigned)(ar4 + 0x40) - *(float *)(unsigned)(ar4 + 0x2c);
        if (fVar11 <= 0.0) {
          fVar13 = 0.049999997;
        }
        else {
          fVar13 = 0.29999998;
        }
        *(float *)(unsigned)(ar4 + 0x2c) = fVar13 * fVar11 + *(float *)(unsigned)(ar4 + 0x2c);
        *(short *)(unsigned)(ar4 + 0x4b4) = *(short *)(unsigned)(ar4 + 0x4b4) + 1;
      }
    }
    fVar11 = 0.0;
    *(float *)(unsigned)(ar4 + 0x494) = (*(float *)(unsigned)(ar4 + 0x2c) + fVar10) - *(float *)(unsigned)(ar4 + 0x34);
    if (fVar12 <= *(float *)(unsigned)(ar4 + 0x34)) {
      fVar12 = 0.0;
    }
    else {
      uVar14 = uVar14 & 0xffffffff00000000;
      fVar11 = 0.0;
      (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(iVar7,ar5_00,ar6_00,ar7_00));
      fVar12 = (float)(uVar14 >> 0x20);
      fVar12 = fVar12 / (fVar13 + fVar12);
    }
    if ((0.0 <= fVar12) && (fVar11 = fVar12, 1.0 < fVar12)) {
      fVar11 = (float)(uVar14 >> 0x20);
    }
    *(float *)(unsigned)(ar4 + 0x4a4) = fVar11;
    uVar2 = 0x4c;
    *(float *)(unsigned)(ar4 + 0x4c) = *(float *)(unsigned)(ar4 + 0x4c) + *(float *)(unsigned)(ar4 + 0x4a4);
  }
  else {
    if (*(short *)(unsigned)(ar4 + 0x48) != 0) {
      *(undefined1 *)(unsigned)(ar4 + 0x28) = 0;
    }
    uVar2 = 0x48;
    *(short *)(unsigned)(ar4 + 0x48) = *(short *)(unsigned)(ar4 + 0x48) + -1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c123ea6\n.set _FUN_8c123ea6, _FUN_8c123ea6_def\n");
