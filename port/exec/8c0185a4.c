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
undefined4 FUN_8c0185a4_def(int ar4,double *ar5,float *ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c0185a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 364; for (int i_ = 0; i_ < 364; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  short sVar2;
  short *psVar3;
  undefined8 *puVar4;
  double *pdVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *ar5_00;
  float *ar7_00;
  short sVar9;
  undefined4 in_fr1 = 0;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float in_fr4 = 0;
  undefined4 in_fr12 = 0;
  double in_dr14 = 0;
  double dVar14;
  undefined8 in_xd0 = 0;
  bool bVar15;
  bool bVar16;
  char cVar17;
  char cVar18;
  
  cVar18 = '\0';
  cVar17 = '\0';
  psVar3 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(unsigned *)(fr0_ - 0xb4) = (unsigned)(unsigned long)((short *)(unsigned)0x0));
  ((short *)(fr0_ - 0x16a))[3] = 0;
  sVar2 = 0;
  pdVar5 = ar5;
  pfVar6 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 364)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 364)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x4c)),pdVar5,pfVar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 364)), Vec3_ctor_zero(&(*(undefined8 *)(fr0_ - 0x5c)),pdVar5,pfVar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 364)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x6c)),pdVar5,pfVar6,ar7_00));
  iVar8 = *(int *)(unsigned)(ar4 + 8);
  if (cVar18 == '\0') {
    (*(undefined4 *)(fr0_ - 0x90)) = *(undefined4 *)(unsigned)ar5;
    (*(undefined4 *)(fr0_ - 0x8c)) = *(undefined4 *)(unsigned)((int)ar5 + 4);
    (*(undefined4 *)(fr0_ - 0x88)) = *(undefined4 *)(unsigned)(ar5 + 1);
    dVar12 = CONCAT44D((*(undefined4 *)(fr0_ - 0x88)),in_fr1);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x90)) = SUB84(*ar5,0);
    (*(undefined4 *)(fr0_ - 0x8c)) = (undefined4)*(undefined8 *)(unsigned)((int)ar5 + 4);
    dVar12 = ar5[1];
    (*(undefined4 *)(fr0_ - 0x88)) = SUB84(dVar12,0);
    (*(float *)(fr0_ - 0x84)) = F32HI(dVar12);
  }
  ((short *)(fr0_ - 0x16a))[4] = 0;
  do {
    if (*(int *)(unsigned)(ar4 + 0xc) <= (int)((short *)(fr0_ - 0x16a))[4]) {
      if (cVar18 == '\0') {
        ar6[2] = 0.0;
        (*(undefined4 *)(fr0_ - 0x160)) = 0;
        ar6[1] = 0.0;
        *ar6 = 0.0;
      }
      else {
        (*(undefined4 *)(fr0_ - 0x15c)) = SUB84(dVar12,0);
        (*(int *)(fr0_ - 0x158)) = 0;
        *(ulonglong *)(unsigned)(ar6 + 2) = D2U(dVar12) & 0xffffffff;
        (*(undefined4 *)(fr0_ - 0x160)) = (*(undefined4 *)(fr0_ - 0x15c));
        *(ulonglong *)(unsigned)(ar6 + 1) = D2U(dVar12) & 0xffffffff;
        *(ulonglong *)(unsigned)ar6 = D2U(dVar12) & 0xffffffff;
      }
      (*(undefined4 *)(fr0_ - 0x15c)) = 0;
      (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc0))+4)) = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 364)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x6c)),0xffffffff,pfVar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 364)), Vec3_dtor(&(*(undefined8 *)(fr0_ - 0x5c)),0xffffffff,pfVar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 364)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,pfVar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 364)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,pfVar6,ar7_00));
      return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc0))+4));
    }
    ((short *)(fr0_ - 0x16a))[3] = *psVar3;
    bVar15 = ((short *)(fr0_ - 0x16a))[3] < 0;
    if (bVar15) {
      (*(int *)(fr0_ - 0xc4)) = (int)((short *)(fr0_ - 0x16a))[3];
      ((short *)(fr0_ - 0x16a))[3] = -((short *)(fr0_ - 0x16a))[3];
    }
    psVar3 = psVar3 + 1;
    (*(unsigned *)(fr0_ - 0xb4) = (unsigned)(unsigned long)(psVar3));
    while( true ) {
      (*(int *)(fr0_ - 0x158)) = (vsp = ((unsigned long)(fr0_ - 364)), libgcc_divide_helper_0101e4((int)psVar3 - (int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0xb4)),2,pfVar6,ar7_00));
      uVar10 = SUB84(dVar12,0);
      if (((short *)(fr0_ - 0x16a))[3] <= (*(int *)(fr0_ - 0x158))) break;
      if (psVar3 == ((short *)(unsigned long)*(unsigned *)(fr0_ - 0xb4))) {
        ((short *)(fr0_ - 0x16a))[0] = *psVar3;
        ((short *)(fr0_ - 0x16a))[1] = psVar3[1];
        ((short *)(fr0_ - 0x16a))[2] = psVar3[2];
        psVar3 = psVar3 + 3;
      }
      else {
        ((short *)(fr0_ - 0x16a))[0] = ((short *)(fr0_ - 0x16a))[1];
        ((short *)(fr0_ - 0x16a))[1] = ((short *)(fr0_ - 0x16a))[2];
        ((short *)(fr0_ - 0x16a))[2] = *psVar3;
        psVar3 = psVar3 + 1;
      }
      (*(int *)(fr0_ - 0xc8)) = (int)((short *)(fr0_ - 0x16a))[2];
      (*(int *)(fr0_ - 0xcc)) = (int)((short *)(fr0_ - 0x16a))[0];
      (*(int *)(fr0_ - 0xd0)) = (int)((short *)(fr0_ - 0x16a))[1];
      puVar4 = (undefined8 *)(unsigned)((*(int *)(fr0_ - 0xcc)) * 0x18 + iVar8);
      if (cVar18 == '\0') {
        uVar10 = *(undefined4 *)(unsigned)puVar4;
      }
      else {
        in_xd0 = *puVar4;
      }
      pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0xd0)) * 0x18 + iVar8);
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,uVar10);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0xc8)) * 0x18 + iVar8);
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) / F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      (*(float *)(fr0_ - 0x84)) = fVar11;
      if (cVar18 != '\0') {
        (*(float *)(fr0_ - 0x84)) = (float)in_xd0;
      }
      (*(int *)(fr0_ - 0xd4)) = (int)((short *)(fr0_ - 0x16a))[2];
      (*(int *)(fr0_ - 0xd8)) = (int)((short *)(fr0_ - 0x16a))[0];
      (*(int *)(fr0_ - 0xdc)) = (int)((short *)(fr0_ - 0x16a))[1];
      pfVar6 = (float *)(unsigned)((*(int *)(fr0_ - 0xd8)) * 0x18 + iVar8 + 4);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar6;
      }
      pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0xdc)) * 0x18 + iVar8 + 4);
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0xd4)) * 0x18 + iVar8 + 4);
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) / F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      (*(float *)(fr0_ - 0x80)) = fVar11;
      if (cVar18 != '\0') {
        (*(float *)(fr0_ - 0x80)) = (float)in_xd0;
      }
      (*(int *)(fr0_ - 0xe0)) = (int)((short *)(fr0_ - 0x16a))[2];
      (*(int *)(fr0_ - 0xe4)) = (int)((short *)(fr0_ - 0x16a))[0];
      (*(int *)(fr0_ - 0xe8)) = (int)((short *)(fr0_ - 0x16a))[1];
      pfVar6 = (float *)(unsigned)((*(int *)(fr0_ - 0xe4)) * 0x18 + iVar8 + 8);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar6;
      }
      pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0xe8)) * 0x18 + iVar8 + 8);
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0xe0)) * 0x18 + iVar8 + 8);
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) / F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      (*(float *)(fr0_ - 0x7c)) = fVar11;
      if (cVar18 != '\0') {
        (*(float *)(fr0_ - 0x7c)) = (float)in_xd0;
      }
      (*(int *)(fr0_ - 0xec)) = (int)((short *)(fr0_ - 0x16a))[2];
      (*(int *)(fr0_ - 0xf0)) = (int)((short *)(fr0_ - 0x16a))[0];
      (*(int *)(fr0_ - 0xf4)) = (int)((short *)(fr0_ - 0x16a))[1];
      pfVar6 = (float *)(unsigned)((*(int *)(fr0_ - 0xf0)) * 0x18 + iVar8 + 0xc);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar6;
      }
      pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0xf4)) * 0x18 + iVar8 + 0xc);
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0xec)) * 0x18 + iVar8 + 0xc);
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) / F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      (*(float *)(fr0_ - 0x78)) = fVar11;
      if (cVar18 != '\0') {
        (*(float *)(fr0_ - 0x78)) = (float)in_xd0;
      }
      (*(int *)(fr0_ - 0xf8)) = (int)((short *)(fr0_ - 0x16a))[2];
      (*(int *)(fr0_ - 0xfc)) = (int)((short *)(fr0_ - 0x16a))[0];
      (*(int *)(fr0_ - 0x100)) = (int)((short *)(fr0_ - 0x16a))[1];
      pfVar6 = (float *)(unsigned)((*(int *)(fr0_ - 0xfc)) * 0x18 + iVar8 + 0x10);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar6;
      }
      pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0x100)) * 0x18 + iVar8 + 0x10);
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0xf8)) * 0x18 + iVar8 + 0x10);
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) / F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      (*(float *)(fr0_ - 0x74)) = fVar11;
      if (cVar18 != '\0') {
        (*(float *)(fr0_ - 0x74)) = (float)in_xd0;
      }
      (*(int *)(fr0_ - 0x104)) = (int)((short *)(fr0_ - 0x16a))[2];
      (*(int *)(fr0_ - 0x108)) = (int)((short *)(fr0_ - 0x16a))[0];
      (*(int *)(fr0_ - 0x10c)) = (int)((short *)(fr0_ - 0x16a))[1];
      pfVar6 = (float *)(unsigned)((*(int *)(fr0_ - 0x108)) * 0x18 + iVar8 + 0x14);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar6;
      }
      pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0x10c)) * 0x18 + iVar8 + 0x14);
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0x104)) * 0x18 + iVar8 + 0x14);
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = CONCAT44D(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = F32HI(dVar12);
        dVar12 = CONCAT44D(fVar11,F32LO(dVar12) / fVar11);
      }
      else {
        dVar12 = dVar12 / dVar12;
      }
      if (cVar18 == '\0') {
        (*(float *)(fr0_ - 0x70)) = SUB84(dVar12,0);
      }
      else {
        (*(float *)(fr0_ - 0x70)) = (float)in_xd0;
        (*(undefined4 *)(fr0_ - 0x6c)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      pfVar6 = (float *)(unsigned)0x0;
      ar5_00 = &(*(float *)(fr0_ - 0x84));
      (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c234a68(&(*(undefined4 *)(fr0_ - 0x90)),ar5_00,0,ar7_00));
      fVar11 = F32HI(dVar12);
      dVar14 = dVar12;
      if (cVar18 == '\0') {
        (*(undefined8 *)(fr0_ - 0xc0)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc0))+4)),fVar11);
        dVar14 = (*(undefined8 *)(fr0_ - 0xc0));
      }
      (*(undefined8 *)(fr0_ - 0xc0)) = dVar14;
      if (cVar17 == '\0') {
        bVar16 = in_fr4 < fVar11;
      }
      else {
        bVar16 = CONCAT44D(in_fr12,in_fr4) < dVar12;
      }
      if (!bVar16) {
        sVar9 = 0;
        while( true ) {
          uVar10 = SUB84(in_dr14,0);
          fVar11 = F32LO(dVar12);
          if (2 < sVar9) break;
          if (sVar9 == 0) {
            (*(int *)(fr0_ - 0x110)) = (int)((short *)(fr0_ - 0x16a))[1];
            (*(int *)(fr0_ - 0x114)) = (int)((short *)(fr0_ - 0x16a))[0];
            pfVar7 = (float *)(unsigned)((*(int *)(fr0_ - 0x110)) * 0x18 + iVar8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar7;
            }
            pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0x114)) * 0x18 + iVar8);
            if (cVar18 == '\0') {
              dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = F32LO(dVar12) - F32HI(dVar12);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              (*(undefined8 *)(fr0_ - 0x5c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x5c))+4)),fVar11);
              uVar1 = (*(undefined8 *)(fr0_ - 0x5c));
            }
            (*(undefined8 *)(fr0_ - 0x5c)) = uVar1;
            (*(int *)(fr0_ - 0x118)) = (int)((short *)(fr0_ - 0x16a))[1];
            (*(int *)(fr0_ - 0x11c)) = (int)((short *)(fr0_ - 0x16a))[0];
            pfVar7 = (float *)(unsigned)((*(int *)(fr0_ - 0x118)) * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar7;
            }
            pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0x11c)) * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = F32LO(dVar12) - F32HI(dVar12);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              (*(undefined8 *)(fr0_ - 0x54)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x54))+4)),fVar11);
              uVar1 = (*(undefined8 *)(fr0_ - 0x54));
            }
          }
          else if (sVar9 == 1) {
            (*(int *)(fr0_ - 0x120)) = (int)((short *)(fr0_ - 0x16a))[2];
            (*(int *)(fr0_ - 0x124)) = (int)((short *)(fr0_ - 0x16a))[1];
            pfVar7 = (float *)(unsigned)((*(int *)(fr0_ - 0x120)) * 0x18 + iVar8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar7;
            }
            pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0x124)) * 0x18 + iVar8);
            if (cVar18 == '\0') {
              dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = F32LO(dVar12) - F32HI(dVar12);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              (*(undefined8 *)(fr0_ - 0x5c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x5c))+4)),fVar11);
              uVar1 = (*(undefined8 *)(fr0_ - 0x5c));
            }
            (*(undefined8 *)(fr0_ - 0x5c)) = uVar1;
            (*(int *)(fr0_ - 0x128)) = (int)((short *)(fr0_ - 0x16a))[2];
            (*(int *)(fr0_ - 0x12c)) = (int)((short *)(fr0_ - 0x16a))[1];
            pfVar7 = (float *)(unsigned)((*(int *)(fr0_ - 0x128)) * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar7;
            }
            pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0x12c)) * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = F32LO(dVar12) - F32HI(dVar12);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              (*(undefined8 *)(fr0_ - 0x54)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x54))+4)),fVar11);
              uVar1 = (*(undefined8 *)(fr0_ - 0x54));
            }
          }
          else {
            uVar1 = (*(undefined8 *)(fr0_ - 0x54));
            if (sVar9 == 2) {
              (*(int *)(fr0_ - 0x130)) = (int)((short *)(fr0_ - 0x16a))[0];
              (*(int *)(fr0_ - 0x134)) = (int)((short *)(fr0_ - 0x16a))[2];
              pfVar7 = (float *)(unsigned)((*(int *)(fr0_ - 0x130)) * 0x18 + iVar8);
              if (cVar18 == '\0') {
                fVar11 = *pfVar7;
              }
              else {
                in_xd0 = *(undefined8 *)(unsigned)pfVar7;
              }
              pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0x134)) * 0x18 + iVar8);
              if (cVar18 == '\0') {
                dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
              }
              else {
                dVar12 = *pdVar5;
              }
              if (cVar17 == '\0') {
                fVar11 = F32LO(dVar12) - F32HI(dVar12);
              }
              else {
                fVar11 = SUB84(dVar12 - dVar12,0);
              }
              uVar1 = in_xd0;
              if (cVar18 == '\0') {
                (*(undefined8 *)(fr0_ - 0x5c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x5c))+4)),fVar11);
                uVar1 = (*(undefined8 *)(fr0_ - 0x5c));
              }
              (*(undefined8 *)(fr0_ - 0x5c)) = uVar1;
              (*(int *)(fr0_ - 0x138)) = (int)((short *)(fr0_ - 0x16a))[0];
              (*(int *)(fr0_ - 0x13c)) = (int)((short *)(fr0_ - 0x16a))[2];
              pfVar7 = (float *)(unsigned)((*(int *)(fr0_ - 0x138)) * 0x18 + iVar8 + 8);
              if (cVar18 == '\0') {
                fVar11 = *pfVar7;
              }
              else {
                in_xd0 = *(undefined8 *)(unsigned)pfVar7;
              }
              pdVar5 = (double *)(unsigned)((*(int *)(fr0_ - 0x13c)) * 0x18 + iVar8 + 8);
              if (cVar18 == '\0') {
                dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar11);
              }
              else {
                dVar12 = *pdVar5;
              }
              if (cVar17 == '\0') {
                fVar11 = F32LO(dVar12) - F32HI(dVar12);
              }
              else {
                fVar11 = SUB84(dVar12 - dVar12,0);
              }
              uVar1 = in_xd0;
              if (cVar18 == '\0') {
                (*(undefined8 *)(fr0_ - 0x54)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x54))+4)),fVar11);
                uVar1 = (*(undefined8 *)(fr0_ - 0x54));
              }
            }
          }
          (*(undefined8 *)(fr0_ - 0x54)) = uVar1;
          (vsp = ((unsigned long)(fr0_ - 364)), Vec3_length(&(*(undefined8 *)(fr0_ - 0x5c)),ar5_00,pfVar6,ar7_00));
          if (bVar15) {
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 364)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 364)) - 8); FUN_8c022d3c(((undefined1 *)(fr0_ - 0x4c)),&(*(undefined8 *)(fr0_ - 0x5c)),pfVar6,ar7_00); });
            (vsp = ((unsigned long)(fr0_ - 364)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0xb0)),pfVar6,ar7_00));
            ar5_00 = (float *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 364)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,pfVar6,ar7_00));
          }
          else {
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 364)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 364)) - 8); FUN_8c022d3c(&(*(undefined8 *)(fr0_ - 0x5c)),((undefined1 *)(fr0_ - 0x4c)),pfVar6,ar7_00); });
            (vsp = ((unsigned long)(fr0_ - 364)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x6c)),((undefined1 *)(fr0_ - 0xa0)),pfVar6,ar7_00));
            ar5_00 = (float *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 364)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,pfVar6,ar7_00));
          }
          (*(int *)(fr0_ - 0x144)) = (int)sVar9;
          (*(int *)(fr0_ - 0x140)) = (int)((short *)(fr0_ - 0x16a))[sVar9];
          (*(int *)(fr0_ - 0x14c)) = (int)sVar9;
          (*(int *)(fr0_ - 0x148)) = (int)((short *)(fr0_ - 0x16a))[sVar9];
          (*(int *)(fr0_ - 0x154)) = (int)sVar9;
          (*(int *)(fr0_ - 0x150)) = (int)((short *)(fr0_ - 0x16a))[sVar9];
          pdVar5 = (double *)(unsigned)(((short *)(fr0_ - 0x16a))[sVar9] * 0x18 + iVar8);
          if (cVar18 == '\0') {
            dVar14 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,uVar10);
            dVar12 = CONCAT44D((*(undefined4 *)(fr0_ - 0x6c)),fVar11);
          }
          else {
            dVar14 = *pdVar5;
            dVar12 = CONCAT44D((*(undefined4 *)(fr0_ - 0x68)),(*(undefined4 *)(fr0_ - 0x6c)));
          }
          if (cVar17 == '\0') {
            dVar14 = CONCAT44D(F32HI(dVar14) *
                                      F32HI(dVar12),SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 * dVar12;
          }
          puVar4 = (undefined8 *)(unsigned)((*(int *)(fr0_ - 0x150)) * 0x18 + iVar8 + 4);
          if (cVar18 == '\0') {
            dVar12 = CONCAT44D((*(undefined4 *)(fr0_ - 0x68)),*(undefined4 *)(unsigned)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar12 = CONCAT44D((*(undefined4 *)(fr0_ - 0x64)),(*(undefined4 *)(fr0_ - 0x68)));
          }
          if (cVar17 == '\0') {
            dVar14 = CONCAT44D(F32HI(dVar14) +
                                      F32LO(dVar12) * F32HI(dVar12),
                                      SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 + dVar12 * dVar12;
          }
          puVar4 = (undefined8 *)(unsigned)(((short *)(fr0_ - 0x16a))[sVar9] * 0x18 + iVar8 + 8);
          if (cVar18 == '\0') {
            dVar12 = CONCAT44D((*(undefined4 *)(fr0_ - 0x64)),*(undefined4 *)(unsigned)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar12 = CONCAT44D((*(undefined4 *)(fr0_ - 0x60)),(*(undefined4 *)(fr0_ - 0x64)));
          }
          if (cVar17 == '\0') {
            fVar11 = F32LO(dVar12) * F32HI(dVar12);
            dVar14 = CONCAT44D(F32HI(dVar14) + fVar11,SUB84(dVar14,0));
          }
          else {
            fVar11 = SUB84(dVar12 * dVar12,0);
            dVar14 = dVar14 + dVar12 * dVar12;
          }
          if (cVar18 == '\0') {
            dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),(*(undefined4 *)(fr0_ - 0x6c)));
            dVar12 = CONCAT44D(*(undefined4 *)(unsigned)ar5,fVar11);
          }
          else {
            dVar12 = *ar5;
          }
          if (cVar17 == '\0') {
            dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),
                                      F32LO(dVar14) * F32HI(dVar12));
          }
          else {
            dVar14 = dVar14 * dVar12;
          }
          if (cVar18 == '\0') {
            dVar12 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),(*(undefined4 *)(fr0_ - 0x68)));
          }
          else {
            in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x64)),(*(undefined4 *)(fr0_ - 0x68)));
            dVar12 = *(double *)(unsigned)((int)ar5 + 4);
          }
          if (cVar17 == '\0') {
            dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),
                                      SUB84(dVar14,0) +
                                      F32LO(dVar12) * F32HI(dVar12));
          }
          else {
            dVar14 = dVar14 + dVar12 * dVar12;
          }
          if (cVar18 == '\0') {
            dVar12 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),(*(undefined4 *)(fr0_ - 0x64)));
          }
          else {
            in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x60)),(*(undefined4 *)(fr0_ - 0x64)));
            dVar12 = ar5[1];
          }
          if (cVar17 == '\0') {
            fVar13 = F32HI(dVar12);
            fVar11 = F32LO(dVar12) * fVar13;
            dVar12 = CONCAT44D(fVar13,fVar11);
            fVar13 = F32HI(dVar14);
            in_dr14 = CONCAT44D(fVar13,(F32LO(dVar14) + fVar11) - fVar13);
          }
          else {
            dVar12 = dVar12 * dVar12;
            in_dr14 = (dVar14 + dVar12) - (dVar14 + dVar12);
          }
          dVar12 = (double)(D2U(dVar12) & 0xffffffff);
          if (cVar17 == '\0') {
            bVar16 = 0.0 < SUB84(in_dr14,0);
          }
          else {
            bVar16 = dVar12 < in_dr14;
          }
          if (bVar16) {
            sVar2 = 0;
            break;
          }
          sVar2 = sVar2 + 1;
          if (sVar2 == 3) {
            if (cVar18 == '\0') {
              *ar6 = (*(float *)(fr0_ - 0x78));
              ar6[1] = (*(float *)(fr0_ - 0x74));
              ar6[2] = (*(float *)(fr0_ - 0x70));
              *ar7 = (*(float *)(fr0_ - 0x84));
              ar7[1] = (*(float *)(fr0_ - 0x80));
              ar7[2] = (*(float *)(fr0_ - 0x7c));
            }
            else {
              *(ulonglong *)(unsigned)ar6 = CONCAT44((*(float *)(fr0_ - 0x74)),(*(float *)(fr0_ - 0x78)));
              *(ulonglong *)(unsigned)(ar6 + 1) = CONCAT44((*(float *)(fr0_ - 0x70)),(*(float *)(fr0_ - 0x74)));
              *(ulonglong *)(unsigned)(ar6 + 2) = CONCAT44((*(undefined4 *)(fr0_ - 0x6c)),(*(float *)(fr0_ - 0x70)));
              *(ulonglong *)(unsigned)ar7 = CONCAT44((*(float *)(fr0_ - 0x80)),(*(float *)(fr0_ - 0x84)));
              *(ulonglong *)(unsigned)(ar7 + 1) = CONCAT44((*(float *)(fr0_ - 0x7c)),(*(float *)(fr0_ - 0x80)));
              *(ulonglong *)(unsigned)(ar7 + 2) = CONCAT44((*(float *)(fr0_ - 0x78)),(*(float *)(fr0_ - 0x7c)));
            }
            (*(undefined4 *)(fr0_ - 0xb8)) = 1;
            (vsp = ((unsigned long)(fr0_ - 364)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x6c)),0xffffffff,pfVar6,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 364)), Vec3_dtor(&(*(undefined8 *)(fr0_ - 0x5c)),0xffffffff,pfVar6,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 364)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,pfVar6,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 364)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,pfVar6,ar7_00));
            return (*(undefined4 *)(fr0_ - 0xb8));
          }
          sVar9 = sVar9 + 1;
        }
        bVar15 = (bool)(bVar15 ^ 1);
      }
    }
    ((short *)(fr0_ - 0x16a))[4] = ((short *)(fr0_ - 0x16a))[4] + 1;
  } while( true );
}

__asm__(".globl _FUN_8c0185a4\n.set _FUN_8c0185a4, _FUN_8c0185a4_def\n");
