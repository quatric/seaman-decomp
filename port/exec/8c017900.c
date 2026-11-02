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
undefined4 FUN_8c017900_def(int ar4,double *ar5,float *ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c017900";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 464; for (int i_ = 0; i_ < 464; i_++) z_[i_] = 0; }
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined8 *puVar4;
  float *pfVar5;
  double *pdVar6;
  float *pfVar7;
  float *ar5_00;
  float *ar7_00;
  short sVar8;
  undefined4 in_fr1 = 0;
  undefined4 uVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  float fVar14;
  float in_fr4 = 0;
  undefined4 in_fr12 = 0;
  double in_dr14 = 0;
  double dVar15;
  undefined8 in_xd0 = 0;
  bool bVar16;
  bool bVar17;
  char cVar18;
  char cVar19;
  undefined4 uVar13;
  
  cVar19 = '\0';
  cVar18 = '\0';
  psVar2 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(unsigned *)(fr0_ - 0xd4) = (unsigned)(unsigned long)((short *)(unsigned)0x0));
  ((short *)(fr0_ - 0x1ce))[3] = 0;
  sVar1 = 0;
  pdVar6 = ar5;
  pfVar7 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x6c)),pdVar6,pfVar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x5c)),pdVar6,pfVar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x4c)),pdVar6,pfVar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x7c)),pdVar6,pfVar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 464)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x8c)),pdVar6,pfVar7,ar7_00));
  iVar3 = *(int *)(unsigned)(ar4 + 8);
  if (cVar19 == '\0') {
    (*(undefined4 *)(fr0_ - 0xb0)) = *(undefined4 *)(unsigned)ar5;
    (*(undefined4 *)(fr0_ - 0xac)) = *(undefined4 *)(unsigned)((int)ar5 + 4);
    (*(undefined4 *)(fr0_ - 0xa8)) = *(undefined4 *)(unsigned)(ar5 + 1);
    dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0xa8)),in_fr1);
  }
  else {
    (*(undefined4 *)(fr0_ - 0xb0)) = SUB84(*ar5,0);
    (*(undefined4 *)(fr0_ - 0xac)) = (undefined4)*(undefined8 *)(unsigned)((int)ar5 + 4);
    dVar11 = ar5[1];
    (*(undefined4 *)(fr0_ - 0xa8)) = SUB84(dVar11,0);
    (*(float *)(fr0_ - 0xa4)) = F32HI(dVar11);
  }
  ((short *)(fr0_ - 0x1ce))[4] = 0;
  do {
    if (*(int *)(unsigned)(ar4 + 0xc) <= (int)((short *)(fr0_ - 0x1ce))[4]) {
      if (cVar19 == '\0') {
        ar6[2] = 0.0;
        (*(undefined4 *)(fr0_ - 0x1c4)) = 0;
        ar6[1] = 0.0;
        *ar6 = 0.0;
      }
      else {
        (*(undefined4 *)(fr0_ - 0x1c0)) = SUB84(dVar11,0);
        (*(int *)(fr0_ - 0x1bc)) = 0;
        *(ulonglong *)(unsigned)(ar6 + 2) = D2U(dVar11) & 0xffffffff;
        (*(undefined4 *)(fr0_ - 0x1c4)) = (*(undefined4 *)(fr0_ - 0x1c0));
        *(ulonglong *)(unsigned)(ar6 + 1) = D2U(dVar11) & 0xffffffff;
        *(ulonglong *)(unsigned)ar6 = D2U(dVar11) & 0xffffffff;
      }
      (*(undefined4 *)(fr0_ - 0x1c0)) = 0;
      (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xe0))+4)) = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x8c)),0xffffffff,pfVar7,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(&(*(float *)(fr0_ - 0x7c)),0xffffffff,pfVar7,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,pfVar7,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,pfVar7,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,pfVar7,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,pfVar7,ar7_00));
      return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xe0))+4));
    }
    ((short *)(fr0_ - 0x1ce))[3] = *psVar2;
    bVar16 = ((short *)(fr0_ - 0x1ce))[3] < 0;
    if (bVar16) {
      (*(int *)(fr0_ - 0xe4)) = (int)((short *)(fr0_ - 0x1ce))[3];
      ((short *)(fr0_ - 0x1ce))[3] = -((short *)(fr0_ - 0x1ce))[3];
    }
    psVar2 = psVar2 + 1;
    (*(unsigned *)(fr0_ - 0xd4) = (unsigned)(unsigned long)(psVar2));
    while( true ) {
      (*(int *)(fr0_ - 0x1bc)) = (vsp = ((unsigned long)(fr0_ - 464)), libgcc_divide_helper_0101e4((int)psVar2 - (int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0xd4)),2,pfVar7,ar7_00));
      uVar9 = SUB84(dVar11,0);
      if (((short *)(fr0_ - 0x1ce))[3] <= (*(int *)(fr0_ - 0x1bc))) break;
      if (psVar2 == ((short *)(unsigned long)*(unsigned *)(fr0_ - 0xd4))) {
        ((short *)(fr0_ - 0x1ce))[0] = *psVar2;
        ((short *)(fr0_ - 0x1ce))[1] = psVar2[1];
        ((short *)(fr0_ - 0x1ce))[2] = psVar2[2];
        psVar2 = psVar2 + 3;
      }
      else {
        ((short *)(fr0_ - 0x1ce))[0] = ((short *)(fr0_ - 0x1ce))[1];
        ((short *)(fr0_ - 0x1ce))[1] = ((short *)(fr0_ - 0x1ce))[2];
        ((short *)(fr0_ - 0x1ce))[2] = *psVar2;
        psVar2 = psVar2 + 1;
      }
      (*(int *)(fr0_ - 0xe8)) = (int)((short *)(fr0_ - 0x1ce))[2];
      (*(int *)(fr0_ - 0xec)) = (int)((short *)(fr0_ - 0x1ce))[0];
      (*(int *)(fr0_ - 0xf0)) = (int)((short *)(fr0_ - 0x1ce))[1];
      puVar4 = (undefined8 *)(unsigned)((*(int *)(fr0_ - 0xec)) * 0x18 + iVar3);
      if (cVar19 == '\0') {
        uVar9 = *(undefined4 *)(unsigned)puVar4;
      }
      else {
        in_xd0 = *puVar4;
      }
      pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0xf0)) * 0x18 + iVar3);
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,uVar9);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) + F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0xe8)) * 0x18 + iVar3);
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) + F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) / F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      (*(float *)(fr0_ - 0xa4)) = fVar10;
      if (cVar19 != '\0') {
        (*(float *)(fr0_ - 0xa4)) = (float)in_xd0;
      }
      (*(int *)(fr0_ - 0xf4)) = (int)((short *)(fr0_ - 0x1ce))[2];
      (*(int *)(fr0_ - 0xf8)) = (int)((short *)(fr0_ - 0x1ce))[0];
      (*(int *)(fr0_ - 0xfc)) = (int)((short *)(fr0_ - 0x1ce))[1];
      pfVar7 = (float *)(unsigned)((*(int *)(fr0_ - 0xf8)) * 0x18 + iVar3 + 4);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar7;
      }
      pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0xfc)) * 0x18 + iVar3 + 4);
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) + F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0xf4)) * 0x18 + iVar3 + 4);
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) + F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) / F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      (*(float *)(fr0_ - 0xa0)) = fVar10;
      if (cVar19 != '\0') {
        (*(float *)(fr0_ - 0xa0)) = (float)in_xd0;
      }
      (*(int *)(fr0_ - 0x100)) = (int)((short *)(fr0_ - 0x1ce))[2];
      (*(int *)(fr0_ - 0x104)) = (int)((short *)(fr0_ - 0x1ce))[0];
      (*(int *)(fr0_ - 0x108)) = (int)((short *)(fr0_ - 0x1ce))[1];
      pfVar7 = (float *)(unsigned)((*(int *)(fr0_ - 0x104)) * 0x18 + iVar3 + 8);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar7;
      }
      pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x108)) * 0x18 + iVar3 + 8);
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) + F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x100)) * 0x18 + iVar3 + 8);
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) + F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) / F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      (*(float *)(fr0_ - 0x9c)) = fVar10;
      if (cVar19 != '\0') {
        (*(float *)(fr0_ - 0x9c)) = (float)in_xd0;
      }
      (*(int *)(fr0_ - 0x10c)) = (int)((short *)(fr0_ - 0x1ce))[2];
      (*(int *)(fr0_ - 0x110)) = (int)((short *)(fr0_ - 0x1ce))[0];
      (*(int *)(fr0_ - 0x114)) = (int)((short *)(fr0_ - 0x1ce))[1];
      pfVar7 = (float *)(unsigned)((*(int *)(fr0_ - 0x110)) * 0x18 + iVar3 + 0xc);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar7;
      }
      pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x114)) * 0x18 + iVar3 + 0xc);
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) + F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x10c)) * 0x18 + iVar3 + 0xc);
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) + F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) / F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      (*(float *)(fr0_ - 0x98)) = fVar10;
      if (cVar19 != '\0') {
        (*(float *)(fr0_ - 0x98)) = (float)in_xd0;
      }
      (*(int *)(fr0_ - 0x118)) = (int)((short *)(fr0_ - 0x1ce))[2];
      (*(int *)(fr0_ - 0x11c)) = (int)((short *)(fr0_ - 0x1ce))[0];
      (*(int *)(fr0_ - 0x120)) = (int)((short *)(fr0_ - 0x1ce))[1];
      pfVar7 = (float *)(unsigned)((*(int *)(fr0_ - 0x11c)) * 0x18 + iVar3 + 0x10);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar7;
      }
      pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x120)) * 0x18 + iVar3 + 0x10);
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) + F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x118)) * 0x18 + iVar3 + 0x10);
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) + F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) / F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      (*(float *)(fr0_ - 0x94)) = fVar10;
      if (cVar19 != '\0') {
        (*(float *)(fr0_ - 0x94)) = (float)in_xd0;
      }
      (*(int *)(fr0_ - 0x124)) = (int)((short *)(fr0_ - 0x1ce))[2];
      (*(int *)(fr0_ - 0x128)) = (int)((short *)(fr0_ - 0x1ce))[0];
      (*(int *)(fr0_ - 0x12c)) = (int)((short *)(fr0_ - 0x1ce))[1];
      pfVar7 = (float *)(unsigned)((*(int *)(fr0_ - 0x128)) * 0x18 + iVar3 + 0x14);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar7;
      }
      pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x12c)) * 0x18 + iVar3 + 0x14);
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) + F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x124)) * 0x18 + iVar3 + 0x14);
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = F32LO(dVar11) + F32HI(dVar11);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = CONCAT44D(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = F32HI(dVar11);
        dVar11 = CONCAT44D(fVar10,F32LO(dVar11) / fVar10);
      }
      else {
        dVar11 = dVar11 / dVar11;
      }
      if (cVar19 == '\0') {
        (*(float *)(fr0_ - 0x90)) = SUB84(dVar11,0);
      }
      else {
        (*(float *)(fr0_ - 0x90)) = (float)in_xd0;
        (*(undefined4 *)(fr0_ - 0x8c)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      pfVar7 = (float *)(unsigned)0x0;
      ar5_00 = &(*(float *)(fr0_ - 0xa4));
      (vsp = ((unsigned long)(fr0_ - 464)), FUN_8c234a68(&(*(undefined4 *)(fr0_ - 0xb0)),ar5_00,0,ar7_00));
      fVar10 = F32HI(dVar11);
      dVar15 = dVar11;
      if (cVar19 == '\0') {
        (*(undefined8 *)(fr0_ - 0xe0)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xe0))+4)),fVar10);
        dVar15 = (*(undefined8 *)(fr0_ - 0xe0));
      }
      (*(undefined8 *)(fr0_ - 0xe0)) = dVar15;
      if (cVar18 == '\0') {
        bVar17 = in_fr4 < fVar10;
      }
      else {
        bVar17 = CONCAT44D(in_fr12,in_fr4) < dVar11;
      }
      if (!bVar17) {
        sVar8 = 0;
        while( true ) {
          uVar9 = SUB84(in_dr14,0);
          fVar10 = F32LO(dVar11);
          if (2 < sVar8) break;
          if (sVar8 == 0) {
            (*(int *)(fr0_ - 0x130)) = (int)((short *)(fr0_ - 0x1ce))[1];
            (*(int *)(fr0_ - 0x134)) = (int)((short *)(fr0_ - 0x1ce))[0];
            pfVar5 = (float *)(unsigned)((*(int *)(fr0_ - 0x130)) * 0x18 + iVar3);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar5;
            }
            pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x134)) * 0x18 + iVar3);
            if (cVar19 == '\0') {
              dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = F32LO(dVar11) - F32HI(dVar11);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            (*(float *)(fr0_ - 0x7c)) = fVar10;
            if (cVar19 != '\0') {
              (*(float *)(fr0_ - 0x7c)) = (float)in_xd0;
            }
            (*(int *)(fr0_ - 0x138)) = (int)((short *)(fr0_ - 0x1ce))[1];
            (*(int *)(fr0_ - 0x13c)) = (int)((short *)(fr0_ - 0x1ce))[0];
            pfVar5 = (float *)(unsigned)((*(int *)(fr0_ - 0x138)) * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar5;
            }
            pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x13c)) * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = F32LO(dVar11) - F32HI(dVar11);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            (*(float *)(fr0_ - 0x78)) = fVar10;
            if (cVar19 != '\0') {
              (*(float *)(fr0_ - 0x78)) = (float)in_xd0;
            }
            (*(int *)(fr0_ - 0x140)) = (int)((short *)(fr0_ - 0x1ce))[1];
            (*(int *)(fr0_ - 0x144)) = (int)((short *)(fr0_ - 0x1ce))[0];
            pfVar5 = (float *)(unsigned)((*(int *)(fr0_ - 0x140)) * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar5;
            }
            pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x144)) * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = F32LO(dVar11) - F32HI(dVar11);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            (*(float *)(fr0_ - 0x74)) = fVar10;
            if (cVar19 != '\0') {
              (*(float *)(fr0_ - 0x74)) = (float)in_xd0;
              (*(undefined4 *)(fr0_ - 0x70)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
            }
          }
          else if (sVar8 == 1) {
            ar5_00 = (float *)(unsigned)(int)((short *)(fr0_ - 0x1ce))[2];
            (*(int *)(fr0_ - 0x14c)) = (int)((short *)(fr0_ - 0x1ce))[1];
            pfVar5 = (float *)(unsigned)((int)ar5_00 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar5;
            }
            pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x14c)) * 0x18 + iVar3);
            if (cVar19 == '\0') {
              dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = F32LO(dVar11) - F32HI(dVar11);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            (*(float *)(fr0_ - 0x7c)) = fVar10;
            if (cVar19 != '\0') {
              (*(float *)(fr0_ - 0x7c)) = (float)in_xd0;
            }
            (*(int *)(fr0_ - 0x150)) = (int)((short *)(fr0_ - 0x1ce))[2];
            (*(int *)(fr0_ - 0x154)) = (int)((short *)(fr0_ - 0x1ce))[1];
            pfVar5 = (float *)(unsigned)((*(int *)(fr0_ - 0x150)) * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar5;
            }
            pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x154)) * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = F32LO(dVar11) - F32HI(dVar11);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            (*(float *)(fr0_ - 0x78)) = fVar10;
            if (cVar19 != '\0') {
              (*(float *)(fr0_ - 0x78)) = (float)in_xd0;
            }
            (*(int *)(fr0_ - 0x158)) = (int)((short *)(fr0_ - 0x1ce))[2];
            (*(int *)(fr0_ - 0x15c)) = (int)((short *)(fr0_ - 0x1ce))[1];
            pfVar5 = (float *)(unsigned)((*(int *)(fr0_ - 0x158)) * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar5;
            }
            pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x15c)) * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = F32LO(dVar11) - F32HI(dVar11);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            (*(unsigned *)(fr0_ - 0x148) = (unsigned)(unsigned long)(ar5_00));
            (*(float *)(fr0_ - 0x74)) = fVar10;
            if (cVar19 != '\0') {
              (*(float *)(fr0_ - 0x74)) = (float)in_xd0;
              (*(undefined4 *)(fr0_ - 0x70)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
            }
          }
          else if (sVar8 == 2) {
            (*(int *)(fr0_ - 0x160)) = (int)((short *)(fr0_ - 0x1ce))[0];
            (*(int *)(fr0_ - 0x164)) = (int)((short *)(fr0_ - 0x1ce))[2];
            pfVar5 = (float *)(unsigned)((*(int *)(fr0_ - 0x160)) * 0x18 + iVar3);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar5;
            }
            pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x164)) * 0x18 + iVar3);
            if (cVar19 == '\0') {
              dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = F32LO(dVar11) - F32HI(dVar11);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            (*(float *)(fr0_ - 0x7c)) = fVar10;
            if (cVar19 != '\0') {
              (*(float *)(fr0_ - 0x7c)) = (float)in_xd0;
            }
            (*(int *)(fr0_ - 0x168)) = (int)((short *)(fr0_ - 0x1ce))[0];
            (*(int *)(fr0_ - 0x16c)) = (int)((short *)(fr0_ - 0x1ce))[2];
            pfVar5 = (float *)(unsigned)((*(int *)(fr0_ - 0x168)) * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar5;
            }
            pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x16c)) * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = F32LO(dVar11) - F32HI(dVar11);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            (*(float *)(fr0_ - 0x78)) = fVar10;
            if (cVar19 != '\0') {
              (*(float *)(fr0_ - 0x78)) = (float)in_xd0;
            }
            (*(int *)(fr0_ - 0x170)) = (int)((short *)(fr0_ - 0x1ce))[0];
            (*(int *)(fr0_ - 0x174)) = (int)((short *)(fr0_ - 0x1ce))[2];
            pfVar5 = (float *)(unsigned)((*(int *)(fr0_ - 0x170)) * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar5;
            }
            pdVar6 = (double *)(unsigned)((*(int *)(fr0_ - 0x174)) * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = F32LO(dVar11) - F32HI(dVar11);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            (*(float *)(fr0_ - 0x74)) = fVar10;
            if (cVar19 != '\0') {
              (*(float *)(fr0_ - 0x74)) = (float)in_xd0;
              (*(undefined4 *)(fr0_ - 0x70)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
            }
          }
          (vsp = ((unsigned long)(fr0_ - 464)), Vec3_length(&(*(float *)(fr0_ - 0x7c)),ar5_00,pfVar7,ar7_00));
          (*(int *)(fr0_ - 0x178)) = (int)sVar8;
          (*(int *)(fr0_ - 0x180)) = (int)sVar8;
          (*(int *)(fr0_ - 0x17c)) = (int)((short *)(fr0_ - 0x1ce))[sVar8];
          puVar4 = (undefined8 *)(unsigned)(((short *)(fr0_ - 0x1ce))[sVar8] * 0x18 + iVar3 + 0xc);
          if (cVar19 == '\0') {
            uVar13 = *(undefined4 *)(unsigned)puVar4;
            uVar12 = CONCAT44(uVar13,fVar10);
            *(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x6c)) + sVar8 * 0x10) = uVar13;
          }
          else {
            uVar12 = *puVar4;
            *(undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x6c)) + sVar8 * 0x10) = uVar12;
          }
          (*(int *)(fr0_ - 0x184)) = (int)sVar8;
          (*(int *)(fr0_ - 0x18c)) = (int)sVar8;
          (*(int *)(fr0_ - 0x188)) = (int)((short *)(fr0_ - 0x1ce))[sVar8];
          puVar4 = (undefined8 *)(unsigned)(((short *)(fr0_ - 0x1ce))[sVar8] * 0x18 + iVar3 + 0x10);
          if (cVar19 == '\0') {
            uVar13 = *(undefined4 *)(unsigned)puVar4;
            uVar12 = CONCAT44(uVar13,(int)uVar12);
            *(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x6c)) + sVar8 * 0x10 + 4) = uVar13;
          }
          else {
            uVar12 = *puVar4;
            *(undefined8 *)(unsigned)(((undefined1 *)(fr0_ - 0x6c)) + sVar8 * 0x10 + 4) = uVar12;
          }
          (*(int *)(fr0_ - 0x190)) = (int)sVar8;
          (*(int *)(fr0_ - 0x198)) = (int)sVar8;
          (*(int *)(fr0_ - 0x194)) = (int)((short *)(fr0_ - 0x1ce))[sVar8];
          puVar4 = (undefined8 *)(unsigned)((*(int *)(fr0_ - 0x194)) * 0x18 + iVar3 + 0x14);
          if (cVar19 == '\0') {
            uVar13 = *(undefined4 *)(unsigned)puVar4;
            uVar12 = CONCAT44(uVar13,(int)uVar12);
            *(undefined4 *)(unsigned)(&(*(undefined8 *)(fr0_ - 0x64)) + sVar8 * 2) = uVar13;
          }
          else {
            uVar12 = *puVar4;
            (&(*(undefined8 *)(fr0_ - 0x64)))[sVar8 * 2] = uVar12;
          }
          uVar13 = (undefined4)uVar12;
          if (bVar16) {
            (*(int *)(fr0_ - 0x1a0)) = (int)sVar8;
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); FUN_8c022d3c(((undefined1 *)(fr0_ - 0x6c)) + (*(int *)(fr0_ - 0x1a0)) * 0x10,&(*(float *)(fr0_ - 0x7c)),pfVar7,ar7_00); });
            (vsp = ((unsigned long)(fr0_ - 464)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x8c)),((undefined1 *)(fr0_ - 0xd0)),pfVar7,ar7_00));
            pfVar7 = (float *)(unsigned)0xffffffff;
            ar5_00 = (float *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,0xffffffff,ar7_00));
          }
          else {
            (*(int *)(fr0_ - 0x19c)) = (int)sVar8;
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc0))); *(unsigned *)((((unsigned long)(fr0_ - 464)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 464)) - 8); FUN_8c022d3c(&(*(float *)(fr0_ - 0x7c)),((undefined1 *)(fr0_ - 0x6c)) + (*(int *)(fr0_ - 0x19c)) * 0x10,pfVar7,ar7_00); });
            (vsp = ((unsigned long)(fr0_ - 464)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x8c)),((undefined1 *)(fr0_ - 0xc0)),pfVar7,ar7_00));
            ar5_00 = (float *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,pfVar7,ar7_00));
          }
          (*(int *)(fr0_ - 0x1a8)) = (int)sVar8;
          (*(int *)(fr0_ - 0x1a4)) = (int)((short *)(fr0_ - 0x1ce))[sVar8];
          (*(int *)(fr0_ - 0x1b0)) = (int)sVar8;
          (*(int *)(fr0_ - 0x1ac)) = (int)((short *)(fr0_ - 0x1ce))[sVar8];
          (*(int *)(fr0_ - 0x1b8)) = (int)sVar8;
          (*(int *)(fr0_ - 0x1b4)) = (int)((short *)(fr0_ - 0x1ce))[sVar8];
          pdVar6 = (double *)(unsigned)(((short *)(fr0_ - 0x1ce))[sVar8] * 0x18 + iVar3);
          if (cVar19 == '\0') {
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,uVar9);
            dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x8c)),uVar13);
          }
          else {
            dVar15 = *pdVar6;
            dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x88)),(*(undefined4 *)(fr0_ - 0x8c)));
          }
          if (cVar18 == '\0') {
            dVar15 = CONCAT44D(F32HI(dVar15) *
                                      F32HI(dVar11),SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 * dVar11;
          }
          puVar4 = (undefined8 *)(unsigned)((*(int *)(fr0_ - 0x1b4)) * 0x18 + iVar3 + 4);
          if (cVar19 == '\0') {
            dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x88)),*(undefined4 *)(unsigned)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x84)),(*(undefined4 *)(fr0_ - 0x88)));
          }
          if (cVar18 == '\0') {
            dVar15 = CONCAT44D(F32HI(dVar15) +
                                      F32LO(dVar11) * F32HI(dVar11),
                                      SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 + dVar11 * dVar11;
          }
          puVar4 = (undefined8 *)(unsigned)(((short *)(fr0_ - 0x1ce))[sVar8] * 0x18 + iVar3 + 8);
          if (cVar19 == '\0') {
            dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x84)),*(undefined4 *)(unsigned)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x80)),(*(undefined4 *)(fr0_ - 0x84)));
          }
          if (cVar18 == '\0') {
            fVar10 = F32LO(dVar11) * F32HI(dVar11);
            dVar15 = CONCAT44D(F32HI(dVar15) + fVar10,SUB84(dVar15,0));
          }
          else {
            fVar10 = SUB84(dVar11 * dVar11,0);
            dVar15 = dVar15 + dVar11 * dVar11;
          }
          if (cVar19 == '\0') {
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),(*(undefined4 *)(fr0_ - 0x8c)));
            dVar11 = CONCAT44D(*(undefined4 *)(unsigned)ar5,fVar10);
          }
          else {
            dVar11 = *ar5;
          }
          if (cVar18 == '\0') {
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                      F32LO(dVar15) * F32HI(dVar11));
          }
          else {
            dVar15 = dVar15 * dVar11;
          }
          if (cVar19 == '\0') {
            dVar11 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),(*(undefined4 *)(fr0_ - 0x88)));
          }
          else {
            in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x84)),(*(undefined4 *)(fr0_ - 0x88)));
            dVar11 = *(double *)(unsigned)((int)ar5 + 4);
          }
          if (cVar18 == '\0') {
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                      SUB84(dVar15,0) +
                                      F32LO(dVar11) * F32HI(dVar11));
          }
          else {
            dVar15 = dVar15 + dVar11 * dVar11;
          }
          if (cVar19 == '\0') {
            dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),(*(undefined4 *)(fr0_ - 0x84)));
          }
          else {
            in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x80)),(*(undefined4 *)(fr0_ - 0x84)));
            dVar11 = ar5[1];
          }
          if (cVar18 == '\0') {
            fVar14 = F32HI(dVar11);
            fVar10 = F32LO(dVar11) * fVar14;
            dVar11 = CONCAT44D(fVar14,fVar10);
            fVar14 = F32HI(dVar15);
            in_dr14 = CONCAT44D(fVar14,(F32LO(dVar15) + fVar10) - fVar14);
          }
          else {
            dVar11 = dVar11 * dVar11;
            in_dr14 = (dVar15 + dVar11) - (dVar15 + dVar11);
          }
          dVar11 = (double)(D2U(dVar11) & 0xffffffff);
          if (cVar18 == '\0') {
            bVar17 = 0.0 < SUB84(in_dr14,0);
          }
          else {
            bVar17 = dVar11 < in_dr14;
          }
          if (bVar17) {
            sVar1 = 0;
            break;
          }
          sVar1 = sVar1 + 1;
          if (sVar1 == 3) {
            if (cVar19 == '\0') {
              *ar6 = (*(float *)(fr0_ - 0x98));
              ar6[1] = (*(float *)(fr0_ - 0x94));
              ar6[2] = (*(float *)(fr0_ - 0x90));
              *ar7 = (*(float *)(fr0_ - 0xa4));
              ar7[1] = (*(float *)(fr0_ - 0xa0));
              ar7[2] = (*(float *)(fr0_ - 0x9c));
            }
            else {
              *(ulonglong *)(unsigned)ar6 = CONCAT44((*(float *)(fr0_ - 0x94)),(*(float *)(fr0_ - 0x98)));
              *(ulonglong *)(unsigned)(ar6 + 1) = CONCAT44((*(float *)(fr0_ - 0x90)),(*(float *)(fr0_ - 0x94)));
              *(ulonglong *)(unsigned)(ar6 + 2) = CONCAT44((*(undefined4 *)(fr0_ - 0x8c)),(*(float *)(fr0_ - 0x90)));
              *(ulonglong *)(unsigned)ar7 = CONCAT44((*(float *)(fr0_ - 0xa0)),(*(float *)(fr0_ - 0xa4)));
              *(ulonglong *)(unsigned)(ar7 + 1) = CONCAT44((*(float *)(fr0_ - 0x9c)),(*(float *)(fr0_ - 0xa0)));
              *(ulonglong *)(unsigned)(ar7 + 2) = CONCAT44((*(float *)(fr0_ - 0x98)),(*(float *)(fr0_ - 0x9c)));
            }
            (*(undefined4 *)(fr0_ - 0xd8)) = 1;
            (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x8c)),0xffffffff,pfVar7,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(&(*(float *)(fr0_ - 0x7c)),0xffffffff,pfVar7,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,pfVar7,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,pfVar7,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,pfVar7,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 464)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,pfVar7,ar7_00));
            return (*(undefined4 *)(fr0_ - 0xd8));
          }
          sVar8 = sVar8 + 1;
        }
        bVar16 = (bool)(bVar16 ^ 1);
      }
    }
    ((short *)(fr0_ - 0x1ce))[4] = ((short *)(fr0_ - 0x1ce))[4] + 1;
  } while( true );
}

__asm__(".globl _FUN_8c017900\n.set _FUN_8c017900, _FUN_8c017900_def\n");
