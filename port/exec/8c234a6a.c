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
undefined4 FUN_8c234a6a_def(double *ar4,double *ar5,double *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c234a6a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 *puVar2;
  float fVar3;
  double in_dr0 = 0;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  undefined4 in_fr5 = 0;
  float fVar11;
  undefined4 in_fr7 = 0;
  double dVar12;
  float fVar14;
  double in_dr14 = 0;
  double in_xd2 = 0;
  double dVar15;
  double in_xd4 = 0;
  undefined8 in_xd6 = 0;
  double in_xd14 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 uVar13;
  
  uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44D(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
    puVar2 = &(*(undefined8 *)(fr0_ - 0x8));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = uVar1;
  }
  else {
    puVar2 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x10));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar2 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    uVar13 = *(undefined4 *)(unsigned)(ain0 + (int)ar5);
    in_fr5 = *(undefined4 *)(unsigned)(ar5 + 2);
    dVar12 = CONCAT44D(uVar13,*(undefined4 *)(unsigned)ar5);
    dVar9 = CONCAT44D(uVar13,in_fr7);
  }
  else {
    dVar12 = *(double *)(unsigned)(ain0 + (int)ar5);
    in_xd2 = *ar5;
    in_xd4 = ar5[2];
    uVar13 = (undefined4)(D2U(dVar12) >> 0x20);
    dVar9 = dVar12;
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = CONCAT44D(F32HI(dVar12) * F32LO(dVar12),SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 * dVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),*(undefined4 *)(unsigned)((int)ar5 + 4));
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr5);
  }
  else {
    in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = F32LO(in_dr0) * F32LO(dVar12);
  }
  else {
    fVar3 = SUB84(in_dr0 * dVar12,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar9 = CONCAT44D(uVar13,*(undefined4 *)(unsigned)((int)ar5 + 0x14));
  }
  else {
    in_xd6 = *(undefined8 *)(unsigned)((int)ar5 + 0x14);
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = CONCAT44D(-F32HI(dVar12),SUB84(dVar12,0));
  }
  else {
    dVar12 = -dVar12;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),*(undefined4 *)(unsigned)(ar5 + 1));
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 4),fVar3);
  }
  else {
    in_xd2 = ar5[1];
    dVar4 = *(double *)(unsigned)((int)ar4 + 4);
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = CONCAT44D(F32HI(dVar12) - F32LO(dVar4),SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 - dVar4;
  }
  fVar3 = F32LO(dVar9);
  if (in_FPSCR_SZ == '\0') {
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),fVar3);
  }
  if (in_FPSCR_PR == '\0') {
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),F32LO(dVar4) * F32LO(dVar12));
  }
  else {
    dVar4 = dVar4 * dVar12;
  }
  dVar15 = in_xd4;
  if (in_FPSCR_SZ == '\0') {
    dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),in_fr5);
    dVar15 = in_xd2;
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),
                              F32LO(dVar12) * F32HI(dVar4));
  }
  else {
    dVar12 = dVar12 * dVar4;
  }
  fVar7 = F32HI(dVar9);
  if (in_FPSCR_SZ == '\0') {
    dVar8 = CONCAT44D(*(undefined4 *)(unsigned)ar4,SUB84(dVar12,0));
    dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),in_fr5);
    dVar4 = CONCAT44D(fVar7,SUB84(dVar4,0));
  }
  else {
    dVar8 = *ar4;
    dVar4 = dVar9;
  }
  if (in_FPSCR_PR == '\0') {
    dVar12 = CONCAT44D(F32HI(dVar12) - F32LO(dVar4),SUB84(dVar12,0));
    fVar14 = F32HI(dVar8);
    dVar8 = CONCAT44D(fVar14,F32HI(dVar4) * fVar14 + F32LO(dVar8));
  }
  else {
    dVar12 = dVar12 - dVar4;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 1);
  }
  uVar5 = in_xd6;
  if (in_FPSCR_SZ == '\0') {
    uVar5 = CONCAT44(fVar3,SUB84(dVar4,0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),
                             F32HI(uVar5) * (float)uVar5 + F32LO(dVar8));
  }
  dVar4 = dVar15;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = (double)((ulonglong)(uint)fVar7 << 0x20);
    in_dr14 = CONCAT44D(uVar1,SUB84(dVar8,0));
    dVar4 = in_xd14;
  }
  if (in_FPSCR_PR == '\0') {
    fVar14 = F32LO(in_dr14) + F32HI(dVar12);
  }
  else {
    fVar14 = SUB84(in_dr14 + dVar12,0);
  }
  fVar11 = F32LO(dVar12);
  if (in_FPSCR_SZ == '\0') {
    dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar11);
    in_xd4 = dVar15;
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = F32HI(dVar9) * fVar7 + F32LO(dVar8) * fVar11;
  }
  else {
    fVar7 = SUB84(dVar8 * dVar12,0);
  }
  fVar6 = fVar3;
  if (in_FPSCR_SZ != '\0') {
    fVar6 = F32HI(in_xd6);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = fVar6 * fVar3 + fVar7;
  }
  dVar9 = in_xd4;
  if (in_FPSCR_SZ == '\0') {
    dVar9 = CONCAT44D(fVar7,fVar14);
  }
  if (ar6 != (double *)(unsigned)0x0) {
    if (in_FPSCR_SZ == '\0') {
      fVar7 = F32LO(dVar9);
      dVar4 = in_xd4;
    }
    dVar12 = dVar4;
    if (in_FPSCR_SZ == '\0') {
      dVar12 = CONCAT44D(-fVar7,fVar11);
    }
    if (in_FPSCR_PR == '\0') {
      fVar3 = F32HI(dVar12) / F32HI(dVar9);
    }
    else {
      fVar3 = (float)((ulonglong)(dVar12 / dVar9) >> 0x20);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar5 + 0xc));
    }
    else {
      dVar4 = *(double *)(unsigned)((int)ar5 + 0xc);
      dVar9 = *ar4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = CONCAT44D(fVar3 * F32LO(dVar9) + F32HI(dVar9),
                               SUB84(dVar9,0));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)ar6 = (int)(D2U(dVar9) >> 0x20);
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 2),*(undefined4 *)(unsigned)((int)ar4 + 4));
    }
    else {
      *ar6 = dVar9;
      dVar4 = *(double *)(unsigned)((int)ar4 + 4);
      dVar9 = ar5[2];
    }
    if (in_FPSCR_PR == '\0') {
      dVar9 = (double)(ulonglong)(uint)(fVar3 * F32HI(dVar9) + F32LO(dVar9));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)ar6 + 4) = SUB84(dVar9,0);
      uVar10 = CONCAT44(*(undefined4 *)(unsigned)((int)ar5 + 0x14),*(undefined4 *)(unsigned)(ar4 + 1));
    }
    else {
      *(double *)(unsigned)((int)ar6 + 4) = dVar4;
      dVar4 = ar4[1];
      uVar10 = *(ulonglong *)(unsigned)((int)ar5 + 0x14);
    }
    if (in_FPSCR_PR == '\0') {
      uVar10 = (ulonglong)(uint)(fVar3 * (float)(uVar10 >> 0x20) + (float)uVar10);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(ar6 + 1) = (int)uVar10;
    }
    else {
      ar6[1] = dVar4;
    }
  }
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar2 + -4)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); FUN_8c258048(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c234a6a\n.set _FUN_8c234a6a, _FUN_8c234a6a_def\n");
