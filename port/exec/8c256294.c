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
undefined4 FUN_8c256294_def(int ar4,double *ar5,double *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c256294";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  double in_dr0 = 0;
  undefined8 uVar1;
  undefined4 in_fr3 = 0;
  double dVar2;
  undefined8 uVar3;
  float fVar6;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 in_fr5 = 0;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  undefined8 in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  float in_xf6 = 0;
  float in_xf7 = 0;
  undefined8 in_xd8 = 0;
  float in_xf10 = 0;
  float in_xf11 = 0;
  float in_xf12 = 0;
  float in_xf13 = 0;
  float in_xf14 = 0;
  float in_xf15 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (ar4 == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar5 + 4));
      dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),0x3f800000);
    }
    else {
      dVar8 = *ar5;
      in_xd4 = ar5[1];
      dVar11 = ar5[2];
    }
                    
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32LO(dVar8);
      fVar9 = F32HI(dVar8);
      fVar10 = F32LO(dVar11);
      fVar6 = F32HI(dVar11);
      fVar7 = (float)in_xd0 * fVar12 + F32LO(in_xd4) * fVar9 + (float)in_xd8 * fVar10 +
              in_xf12 * fVar6;
      fVar7 = F32HI(in_xd0) * fVar12 +
              F32HI(in_xd4) * fVar9 +
              F32HI(in_xd8) * fVar10 + in_xf13 * fVar6;
      fVar7 = F32LO(in_xd2) * fVar12 + in_xf6 * fVar9 + in_xf10 * fVar10 + in_xf14 * fVar6;
      fVar12 = F32HI(in_xd2) * fVar12 + in_xf7 * fVar9 + in_xf11 * fVar10 +
               in_xf15 * fVar6;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar11 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar5 + 4));
      dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),0x3f800000);
      uVar1 = CONCAT44(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)(ar4 + 0x10));
      uVar3 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x20),*(undefined4 *)(unsigned)(ar4 + 0x30));
      dVar8 = in_xd2;
    }
    else {
      dVar11 = *ar5;
      dVar2 = ar5[2];
      uVar1 = *(undefined8 *)(unsigned)ar4;
      uVar3 = *(undefined8 *)(unsigned)(ar4 + 0x20);
      dVar8 = *(double *)(unsigned)(ar4 + 0x30);
    }
                    
    fVar12 = F32LO(dVar11);
    fVar7 = F32HI(dVar11);
    fVar9 = F32LO(dVar2);
    fVar10 = F32HI(dVar2);
    if (in_FPSCR_PR == '\0') {
      fVar6 = (float)uVar1 * fVar12 + F32HI(uVar1) * fVar7 +
              (float)uVar3 * fVar9 + F32HI(uVar3) * fVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar1 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 4),*(undefined4 *)(unsigned)(ar4 + 0x14));
      uVar4 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x34));
      in_xd2 = dVar8;
      dVar8 = CONCAT44D((int)uVar3,in_fr5);
    }
    else {
      uVar1 = *(undefined8 *)(unsigned)(ar4 + 4);
      uVar4 = *(undefined8 *)(unsigned)(ar4 + 0x24);
      in_xd2 = *(double *)(unsigned)(ar4 + 0x34);
    }
                    
    if (in_FPSCR_PR == '\0') {
      fVar6 = (float)uVar1 * fVar12 + F32HI(uVar1) * fVar7 +
              (float)uVar4 * fVar9 + F32HI(uVar4) * fVar10;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),(int)uVar4);
      in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 8),*(undefined4 *)(unsigned)(ar4 + 0x18));
      lVar5 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x28),*(undefined4 *)(unsigned)(ar4 + 0x38));
    }
    else {
      in_dr0 = *(double *)(unsigned)(ar4 + 8);
      lVar5 = *(longlong *)(unsigned)(ar4 + 0x28);
      in_xd2 = *(double *)(unsigned)(ar4 + 0x38);
    }
                    
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32LO(in_dr0) * fVar12 + F32HI(in_dr0) * fVar7 +
               (float)lVar5 * fVar9 + F32HI(lVar5) * fVar10;
    }
    in_fr3 = (undefined4)lVar5;
    dVar11 = in_xd2;
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)(lVar5 << 0x20);
    }
  }
  fVar12 = F32HI(dVar11);
  if (in_FPSCR_PR == '\0') {
    dVar11 = CONCAT44D(fVar12,1.0 / fVar12);
  }
  else {
    dVar11 = CONCAT44D(fVar12,0x3f800000) / CONCAT44D(fVar12,0x3f800000);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4a8,in_fr3);
  }
  else {
    dVar2 = *(undefined4 *)(unsigned)0x8c4aa4a8;
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) * F32HI(dVar8) *
                             SUB84(dVar11,0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar8 * dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4dc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) * F32LO(in_dr0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * in_dr0;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                              *(undefined4 *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc));
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) + F32LO(in_dr0),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 + in_dr0;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4a8);
  }
  else {
    in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4a8;
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = CONCAT44D((int)(D2U(dVar2) >> 0x20),
                              F32LO(dVar2) * F32LO(dVar8) * F32LO(dVar11));
  }
  else {
    dVar11 = dVar2 * dVar8 * dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4e0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),F32LO(dVar11) * F32LO(in_dr0));
  }
  else {
    dVar11 = dVar11 * in_dr0;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(0x8c4aa4a8 + 2));
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),F32LO(dVar11) + F32LO(in_dr0));
  }
  else {
    dVar11 = dVar11 + in_dr0;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)ar6 = (int)(D2U(dVar11) >> 0x20);
    *(int *)(unsigned)((int)ar6 + 4) = SUB84(dVar11,0);
  }
  else {
    *ar6 = dVar11;
    *(double *)(unsigned)((int)ar6 + 4) = in_xd2;
  }
  return 4;
}

__asm__(".globl _FUN_8c256294\n.set _FUN_8c256294, _FUN_8c256294_def\n");
