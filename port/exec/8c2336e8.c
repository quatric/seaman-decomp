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
undefined4 FUN_8c2336e8_def(double *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2336e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 484; for (int i_ = 0; i_ < 484; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  double *pdVar5;
  undefined1 *ar4_00;
  int *piVar6;
  undefined1 *ar5_00;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  double *pdVar10;
  double in_dr0 = 0;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  double in_dr2 = 0;
  double dVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int *piVar19;
  uint uVar20;
  undefined4 uVar21;
  double in_dr4 = 0;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  double in_dr6 = 0;
  undefined4 uVar25;
  double in_dr8 = 0;
  double dVar26;
  float fVar27;
  double in_dr12 = 0;
  float fVar28;
  undefined8 in_dr14 = 0;
  double dVar29;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar30;
  bool bVar31;
  char cVar32;
  char cVar33;
  float *ain0;
  
  cVar33 = '\0';
  cVar32 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x28)) = SUB84(in_dr12,0);
  (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  dVar29 = CONCAT44D(0x3f800000,(*(undefined4 *)(fr0_ - 0x20)));
  (vsp = ((unsigned long)(fr0_ - 484)), FUN_8c2360b0(ar4,((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x48)),ar7));
  (vsp = ((unsigned long)(fr0_ - 484)), FUN_8c23620c(ar5,&(*(double *)(fr0_ - 0x54)),&(*(double *)(fr0_ - 0x60)),ar7));
  pdVar4 = &(*(double *)(fr0_ - 0x54));
  ar5_00 = ((undefined1 *)(fr0_ - 0x48));
  pdVar9 = &(*(double *)(fr0_ - 0x60));
  ar4_00 = ((undefined1 *)(fr0_ - 0x3c));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 484)), FUN_8c212808(ar4_00,ar5_00,pdVar4,pdVar9));
  if (iVar2 != 0) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1e0))); unsigned long ri1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1dc))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 484)); FUN_8c010838(ar4_00,ar5_00,pdVar4,pdVar9); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1e0))); unsigned long ri1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1dc))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 484)); FUN_8c010838(ar4_00,ar5_00,pdVar4,pdVar9); });
    bVar1 = true;
    (*(unsigned *)(fr0_ - 0x1d4) = (unsigned)(unsigned long)(((double *)(fr0_ - 0xc0))));
    for (pdVar10 = (double *)(unsigned)((undefined1 *)(fr0_ - 0x108)); pdVar10 < ((double *)(fr0_ - 0xc0));
        pdVar10 = (double *)(unsigned)((int)pdVar10 + 0xc)) {
      piVar6 = (int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x1d4)) + 4);
      iVar3 = *piVar6;
      pdVar7 = ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x1d4)) + 1;
      iVar2 = *(int *)(unsigned)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x1d4));
      if (cVar33 == '\0') {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),
                                  *(undefined4 *)(unsigned)((int)ar4 + iVar3 * 0xc + 4));
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)ar4 + iVar3 * 0xc + 4);
      }
      iVar8 = *(int *)(unsigned)pdVar7;
      if (cVar33 == '\0') {
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                  *(undefined4 *)(unsigned)((int)ar4 + iVar2 * 0xc + 4));
      }
      else {
        in_xd4 = *(double *)(unsigned)((int)ar4 + iVar2 * 0xc + 4);
      }
      if (cVar32 == '\0') {
        fVar14 = F32LO(in_dr2) - F32LO(in_dr4);
      }
      else {
        fVar14 = SUB84(in_dr2 - in_dr4,0);
      }
      if (cVar33 == '\0') {
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + iVar2 * 0xc + 8),SUB84(in_dr4,0));
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + iVar8 * 0xc + 8),fVar14);
      }
      else {
        dVar22 = *(double *)(unsigned)((int)ar4 + iVar2 * 0xc + 8);
        dVar16 = *(double *)(unsigned)((int)ar4 + iVar8 * 0xc + 8);
      }
      fVar14 = F32HI(dVar22);
      if (cVar32 == '\0') {
        fVar15 = F32LO(dVar16) * (F32HI(dVar16) - fVar14);
      }
      else {
        fVar15 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22),0);
      }
      if (cVar33 == '\0') {
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + iVar3 * 0xc + 8),fVar15);
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + iVar8 * 0xc + 4),SUB84(in_dr0,0));
      }
      else {
        dVar16 = *(double *)(unsigned)((int)ar4 + iVar3 * 0xc + 8);
        dVar11 = *(double *)(unsigned)((int)ar4 + iVar8 * 0xc + 4);
      }
      if (cVar32 == '\0') {
        dVar16 = CONCAT44D(F32HI(dVar16) - fVar14,SUB84(dVar16,0));
        dVar11 = CONCAT44D(F32HI(dVar11) - F32LO(dVar22),
                                  SUB84(dVar11,0));
      }
      else {
        dVar16 = dVar16 - dVar22;
        dVar11 = dVar11 - dVar22;
      }
      fVar27 = F32HI(dVar16);
      fVar15 = -SUB84(dVar16,0);
      if (cVar32 == '\0') {
        fVar15 = F32HI(dVar11) * fVar27 + fVar15;
      }
      if (cVar33 == '\0') {
        *(float *)(unsigned)pdVar10 = fVar15;
      }
      else {
        *pdVar10 = in_xd2;
      }
      pdVar4 = (double *)(unsigned)(*piVar6 * 0xc + (int)ar4);
      if (cVar33 == '\0') {
        fVar15 = *(float *)(unsigned)(pdVar4 + 1);
      }
      else {
        in_xd2 = pdVar4[1];
      }
      pdVar9 = (double *)(unsigned)(*(int *)(unsigned)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x1d4)) * 0xc + (int)ar4);
      if (cVar33 == '\0') {
        dVar22 = CONCAT44D(fVar14,*(undefined4 *)(unsigned)(pdVar9 + 1));
      }
      else {
        in_xd4 = pdVar9[1];
      }
      if (cVar32 == '\0') {
        fVar15 = fVar15 - F32LO(dVar22);
      }
      else {
        fVar15 = SUB84(CONCAT44D(fVar27,fVar15) - dVar22,0);
      }
      pdVar5 = (double *)(unsigned)(*(int *)(unsigned)pdVar7 * 0xc + (int)ar4);
      if (cVar33 == '\0') {
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar22,0));
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar15);
      }
      else {
        dVar22 = *pdVar9;
        dVar16 = *pdVar5;
      }
      fVar14 = F32HI(dVar22);
      if (cVar32 == '\0') {
        fVar15 = F32LO(dVar16) * (F32HI(dVar16) - fVar14);
      }
      else {
        fVar15 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22),0);
      }
      if (cVar33 == '\0') {
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,fVar15);
      }
      else {
        dVar16 = *pdVar4;
      }
      if (cVar32 == '\0') {
        dVar16 = CONCAT44D(F32HI(dVar16) - fVar14,SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 - dVar22;
      }
      if (cVar33 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar5 + 1),SUB84(dVar11,0));
      }
      else {
        dVar11 = pdVar5[1];
      }
      fVar15 = F32HI(dVar16);
      fVar14 = -SUB84(dVar16,0);
      if (cVar32 == '\0') {
        uVar25 = SUB84(dVar11,0);
        fVar14 = (F32HI(dVar11) - F32LO(dVar22)) * fVar15 + fVar14;
      }
      else {
        uVar25 = SUB84(dVar11 - dVar22,0);
      }
      if (cVar33 == '\0') {
        *(float *)(unsigned)((int)pdVar10 + 4) = fVar14;
      }
      else {
        *(double *)(unsigned)((int)pdVar10 + 4) = in_xd2;
      }
      pdVar4 = (double *)(unsigned)(*piVar6 * 0xc + (int)ar4);
      if (cVar33 == '\0') {
        fVar14 = *(float *)(unsigned)pdVar4;
      }
      else {
        in_xd2 = *pdVar4;
      }
      pdVar9 = (double *)(unsigned)(*(int *)(unsigned)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x1d4)) * 0xc + (int)ar4);
      if (cVar33 == '\0') {
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar22,0));
      }
      else {
        dVar22 = *pdVar9;
      }
      pdVar5 = (double *)(unsigned)(*(int *)(unsigned)pdVar7 * 0xc + (int)ar4);
      fVar27 = F32HI(dVar22);
      if (cVar32 == '\0') {
        fVar14 = fVar14 - fVar27;
      }
      else {
        fVar14 = SUB84(CONCAT44D(fVar15,fVar14) - dVar22,0);
      }
      if (cVar33 == '\0') {
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),fVar14);
        dVar22 = CONCAT44D(fVar27,*(undefined4 *)(unsigned)((int)pdVar9 + 4));
      }
      else {
        dVar16 = *(double *)(unsigned)((int)pdVar5 + 4);
        in_xd4 = *(double *)(unsigned)((int)pdVar9 + 4);
      }
      if (cVar32 == '\0') {
        fVar14 = F32LO(dVar16) * (F32HI(dVar16) - F32LO(dVar22));
      }
      else {
        fVar14 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22),0);
      }
      if (cVar33 == '\0') {
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 4),fVar14);
      }
      else {
        dVar16 = *(double *)(unsigned)((int)pdVar4 + 4);
      }
      if (cVar32 == '\0') {
        dVar16 = CONCAT44D(F32HI(dVar16) - F32LO(dVar22),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 - dVar22;
      }
      if (cVar33 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,uVar25);
      }
      else {
        dVar11 = *pdVar5;
      }
      fVar15 = F32HI(dVar16);
      fVar14 = -SUB84(dVar16,0);
      if (cVar32 == '\0') {
        uVar25 = SUB84(dVar11,0);
        fVar14 = (F32HI(dVar11) - F32HI(dVar22)) * fVar15
                 + fVar14;
      }
      else {
        uVar25 = SUB84(dVar11 - dVar22,0);
      }
      if (cVar33 == '\0') {
        *(float *)(unsigned)(pdVar10 + 1) = fVar14;
        fVar28 = *(float *)(unsigned)pdVar10;
        dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),fVar28);
        fVar27 = *(float *)(unsigned)((int)pdVar10 + 4);
        in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),fVar27);
        dVar16 = CONCAT44D(fVar28,uVar25);
        fVar14 = fVar27;
      }
      else {
        pdVar10[1] = in_xd2;
        dVar16 = *pdVar10;
        in_xd2 = *(double *)(unsigned)((int)pdVar10 + 4);
        fVar28 = F32LO(dVar29);
        fVar27 = F32LO(in_dr12);
        in_xd12 = in_xd2;
        in_xd14 = dVar16;
      }
      if (cVar32 == '\0') {
        dVar11 = CONCAT44D(fVar15,fVar14 * fVar27);
      }
      else {
        dVar11 = CONCAT44D(fVar15,fVar14) * in_dr12;
      }
      if (cVar33 == '\0') {
        in_dr12 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 1),fVar27);
      }
      else {
        in_dr12 = pdVar10[1];
      }
      if (cVar32 == '\0') {
        dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                  F32HI(dVar16) * fVar28 + F32LO(dVar11));
      }
      fVar14 = F32HI(in_dr12);
      in_dr0 = in_dr12;
      if (cVar33 == '\0') {
        in_dr0 = CONCAT44D(fVar14,SUB84(dVar16,0));
      }
      if (cVar32 == '\0') {
        dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                  F32HI(in_dr0) * fVar14 + F32LO(dVar11));
      }
      dVar16 = in_xd2;
      if (cVar33 == '\0') {
        dVar16 = (double)(D2U(dVar22) & 0xffffffff);
      }
      uVar25 = SUB84(dVar16,0);
      pdVar4 = ar4;
      ({ unsigned long ri0_ = (unsigned long)(pdVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 484)); FUN_8c258030(piVar6,pdVar7,ar4,pdVar9); });
      in_dr4 = dVar29;
      if (cVar33 == '\0') {
        in_dr4 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar25);
      }
      if (cVar32 == '\0') {
        in_dr4 = CONCAT44D(F32HI(in_dr4) /
                                  F32HI(in_dr0),SUB84(in_dr4,0));
      }
      else {
        in_dr4 = in_dr4 / in_dr0;
      }
      if (cVar33 == '\0') {
        dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),*(undefined4 *)(unsigned)pdVar10);
      }
      else {
        in_xd2 = *pdVar10;
      }
      fVar14 = F32HI(in_dr4);
      if (cVar32 == '\0') {
        fVar15 = F32LO(dVar11) * fVar14;
      }
      else {
        fVar15 = SUB84(dVar11 * in_dr4,0);
      }
      if (cVar33 == '\0') {
        *(float *)(unsigned)pdVar10 = fVar15;
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),fVar15);
      }
      else {
        *pdVar10 = in_xd2;
        in_dr2 = *(double *)(unsigned)((int)pdVar10 + 4);
      }
      if (cVar32 == '\0') {
        in_dr2 = CONCAT44D(F32HI(in_dr2) * fVar14,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = in_dr2 * in_dr4;
      }
      uVar25 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      if (cVar33 == '\0') {
        *(undefined4 *)(unsigned)((int)pdVar10 + 4) = uVar25;
        in_dr2 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)(pdVar10 + 1));
      }
      else {
        *(double *)(unsigned)((int)pdVar10 + 4) = in_dr2;
        in_xd2 = pdVar10[1];
      }
      if (cVar32 == '\0') {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) * fVar14);
      }
      else {
        in_dr2 = in_dr2 * in_dr4;
      }
      if (cVar33 == '\0') {
        *(int *)(unsigned)(pdVar10 + 1) = SUB84(in_dr2,0);
      }
      else {
        pdVar10[1] = in_xd2;
      }
      (*(unsigned *)(fr0_ - 0x1d4) = (unsigned)(unsigned long)(((double *)(unsigned long)*(unsigned *)(fr0_ - 0x1d4)) + 2));
    }
    (*(unsigned *)(fr0_ - 0x1b4) = (unsigned)(unsigned long)(((int *)(fr0_ - 0x194))));
    for ((*(int *)(fr0_ - 0x1d8)) = 0; (*(int *)(fr0_ - 0x1d8)) < 6; (*(int *)(fr0_ - 0x1d8)) = (*(int *)(fr0_ - 0x1d8)) + 1) {
      bVar31 = true;
      iVar2 = (*(int *)(fr0_ - 0x1d8)) * 0xc;
      pdVar10 = (double *)(unsigned)(iVar2 + (int)((undefined1 *)(fr0_ - 0x108)));
      if (cVar33 == '\0') {
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(in_dr4,0));
      }
      else {
        dVar22 = *pdVar10;
      }
      pdVar7 = (double *)(unsigned)(*(int *)(unsigned)(((double *)(fr0_ - 0xc0)) + (*(int *)(fr0_ - 0x1d8)) * 2) * 0xc + (int)ar4);
      fVar14 = F32HI(dVar22);
      if (cVar33 == '\0') {
        dVar22 = CONCAT44D(fVar14,*(undefined4 *)(unsigned)pdVar7);
        dVar16 = CONCAT44D(fVar14,*(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x108)) + iVar2 + 4));
        dVar11 = in_xd4;
      }
      else {
        dVar11 = *(double *)(unsigned)(((undefined1 *)(fr0_ - 0x108)) + iVar2 + 4);
        in_xd2 = *pdVar7;
        dVar16 = dVar22;
      }
      if (cVar32 == '\0') {
        dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(dVar22),
                                  SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 * dVar22;
      }
      fVar15 = F32LO(dVar16);
      if (cVar33 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar7 + 4))
        ;
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar15);
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)pdVar7 + 4);
      }
      if (cVar32 == '\0') {
        dVar22 = CONCAT44D(-F32HI(dVar22) -
                                  F32LO(in_dr0) * F32LO(dVar22),SUB84(dVar22,0));
      }
      else {
        dVar22 = -dVar22 - in_dr0 * dVar22;
      }
      if (cVar33 == '\0') {
        uVar25 = *(undefined4 *)(unsigned)((int)((double *)(fr0_ - 0x100)) + iVar2);
        in_dr6 = CONCAT44D(uVar25,SUB84(in_dr6,0));
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1));
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),uVar25);
      }
      else {
        in_dr6 = *(double *)(unsigned)((int)((double *)(fr0_ - 0x100)) + iVar2);
        in_xd2 = pdVar7[1];
        uVar25 = (undefined4)((ulonglong)in_dr6 >> 0x20);
        dVar12 = *(double *)(unsigned)((int)ar5 + 4);
      }
      if (cVar32 == '\0') {
        dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),F32LO(dVar12) * F32LO(dVar22)
                                 );
      }
      else {
        dVar12 = dVar12 * dVar22;
      }
      dVar23 = dVar11;
      if (cVar33 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar15);
        dVar23 = in_xd2;
      }
      if (cVar32 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                  F32LO(dVar22) * F32HI(dVar12));
      }
      else {
        dVar22 = dVar22 * dVar12;
      }
      if (cVar33 == '\0') {
        in_dr6 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)ar5);
        dVar26 = CONCAT44D((int)(D2U(dVar22) >> 0x20),SUB84(in_dr8,0));
        dVar12 = CONCAT44D(fVar14,SUB84(dVar12,0));
      }
      else {
        in_xd6 = *ar5;
        dVar26 = dVar22;
        dVar12 = dVar16;
      }
      if (cVar32 == '\0') {
        dVar26 = CONCAT44D(F32HI(dVar26) - F32LO(dVar12),
                                  SUB84(dVar26,0));
      }
      else {
        dVar26 = dVar26 - dVar12;
      }
      if (cVar33 == '\0') {
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),SUB84(dVar22,0));
      }
      else {
        dVar22 = ar5[1];
      }
      if (cVar32 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                  F32HI(dVar12) * F32LO(in_dr6) +
                                  SUB84(dVar22,0));
      }
      fVar27 = F32HI(in_dr6);
      dVar13 = in_dr6;
      if (cVar33 == '\0') {
        dVar13 = CONCAT44D(fVar27,SUB84(dVar12,0));
      }
      if (cVar32 == '\0') {
        dVar22 = (double)(ulonglong)
                         (uint)(F32HI(dVar13) *
                                F32HI(dVar22) + F32LO(dVar22));
      }
      in_dr8 = dVar23;
      dVar12 = dVar16;
      if (cVar33 == '\0') {
        in_dr8 = CONCAT44D(SUB84(dVar22,0),SUB84(dVar26,0));
        dVar12 = CONCAT44D(fVar14,SUB84(dVar13,0));
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),SUB84(dVar22,0));
      }
      fVar28 = F32HI(dVar26);
      if (cVar32 == '\0') {
        in_dr8 = CONCAT44D(F32HI(in_dr8) + fVar28,SUB84(in_dr8,0));
      }
      else {
        in_dr8 = in_dr8 + dVar26;
      }
      dVar22 = dVar11;
      if (cVar33 == '\0') {
        dVar26 = CONCAT44D(fVar28,fVar15);
        dVar22 = dVar23;
      }
      if (cVar32 == '\0') {
        in_dr8 = CONCAT44D(-F32HI(in_dr8),SUB84(in_dr8,0));
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                  F32HI(dVar12) * fVar14 +
                                  F32LO(dVar26) * fVar15);
      }
      else {
        dVar26 = dVar26 * dVar16;
        in_dr8 = -in_dr8;
      }
      in_xd4 = in_dr8;
      dVar23 = in_dr6;
      if (cVar33 == '\0') {
        dVar16 = CONCAT44D(fVar14,(int)((ulonglong)in_dr8 >> 0x20));
        in_xd4 = dVar11;
        dVar23 = CONCAT44D(fVar27,SUB84(dVar12,0));
      }
      if (cVar32 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                  F32HI(dVar23) * fVar27 + F32LO(dVar26));
      }
      dVar11 = dVar16;
      if (cVar33 == '\0') {
        dVar11 = CONCAT44D((int)(D2U(dVar16) >> 0x20),SUB84(dVar23,0));
      }
      if (cVar32 == '\0') {
        fVar14 = F32LO(dVar16) / F32LO(dVar26);
        in_dr6 = (double)(ulonglong)
                         (uint)(F32HI(dVar11) * fVar14 + F32LO(in_dr6));
      }
      else {
        fVar14 = SUB84(dVar16 / dVar26,0);
      }
      if (cVar33 == '\0') {
        (*(uint *)(fr0_ - 0x180)) = SUB84(in_dr6,0);
        uVar17 = CONCAT44(*(undefined4 *)(unsigned)((int)ar5 + 4),*(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x108)) + iVar2 + 4));
        dVar16 = CONCAT44D(fVar14,SUB84(dVar11,0));
      }
      else {
        (*(uint *)(fr0_ - 0x180)) = SUB84(in_xd6,0);
        dVar22 = *(double *)(unsigned)(((undefined1 *)(fr0_ - 0x108)) + iVar2 + 4);
        uVar17 = *(undefined8 *)(unsigned)((int)ar5 + 4);
        dVar16 = in_xd4;
      }
      fVar15 = F32HI(dVar16);
      if (cVar32 == '\0') {
        uVar17 = CONCAT44(fVar15 * (float)uVar17 + F32HI(uVar17),(float)uVar17)
        ;
      }
      if (cVar33 == '\0') {
        (*(undefined4 *)(fr0_ - 0x17c)) = (undefined4)((ulonglong)uVar17 >> 0x20);
        uVar18 = CONCAT44(*(undefined4 *)(unsigned)((int)((double *)(fr0_ - 0x100)) + iVar2),*(undefined4 *)(unsigned)(ar5 + 1));
      }
      else {
        (*(undefined4 *)(fr0_ - 0x17c)) = (undefined4)uVar17;
        uVar18 = *(ulonglong *)(unsigned)((int)((double *)(fr0_ - 0x100)) + iVar2);
        dVar22 = ar5[1];
      }
      if (cVar32 == '\0') {
        uVar18 = (ulonglong)(uint)(fVar15 * (float)(uVar18 >> 0x20) + (float)uVar18);
      }
      (*(undefined4 *)(fr0_ - 0x178)) = (undefined4)uVar18;
      if (cVar33 == '\0') {
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),SUB84(dVar16,0));
        in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x17c)),SUB84(in_dr12,0));
        dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),(*(uint *)(fr0_ - 0x180)));
      }
      else {
        (*(undefined4 *)(fr0_ - 0x178)) = SUB84(dVar22,0);
        (*(float *)(fr0_ - 0x174)) = F32HI(dVar22);
        dVar16 = *(double *)(unsigned)((int)ar5 + 4);
        in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x178)),(*(undefined4 *)(fr0_ - 0x17c)));
        in_xd14 = CONCAT44D((*(undefined4 *)(fr0_ - 0x17c)),(*(uint *)(fr0_ - 0x180)));
      }
      if (cVar32 == '\0') {
        in_xd2 = CONCAT44D(F32HI(in_xd2) -
                                  F32HI(dVar16),SUB84(in_xd2,0));
      }
      else {
        in_xd2 = in_xd2 - dVar16;
      }
      if (cVar33 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),*(undefined4 *)(unsigned)ar5);
      }
      else {
        dVar22 = *ar5;
        dVar11 = ar5[1];
      }
      if (cVar32 == '\0') {
        dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),F32LO(dVar29) - F32LO(dVar11)
                                 );
      }
      else {
        dVar29 = dVar29 - dVar11;
      }
      fVar15 = F32HI(in_xd2);
      if (cVar33 == '\0') {
        dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),fVar15);
        in_xd2 = dVar22;
        dVar22 = CONCAT44D(fVar15,(*(undefined4 *)(fr0_ - 0x178)));
      }
      else {
        in_xd12 = CONCAT44D((*(float *)(fr0_ - 0x174)),(*(undefined4 *)(fr0_ - 0x178)));
        dVar22 = in_xd2;
      }
      if (cVar32 == '\0') {
        fVar27 = F32HI(dVar11);
        dVar11 = CONCAT44D(fVar27,F32LO(dVar11) * fVar15);
        fVar27 = F32LO(dVar22) - fVar27;
      }
      else {
        dVar11 = dVar11 * dVar22;
        fVar27 = SUB84(dVar22 - dVar11,0);
      }
      dVar22 = in_xd14;
      if (cVar33 == '\0') {
        dVar22 = CONCAT44D(SUB84(dVar29,0),SUB84(dVar16,0));
      }
      if (cVar32 == '\0') {
        dVar11 = (double)(ulonglong)
                         (uint)(F32HI(dVar22) * F32LO(dVar29) +
                               SUB84(dVar11,0));
      }
      dVar16 = in_xd12;
      if (cVar33 == '\0') {
        dVar16 = CONCAT44D(fVar27,SUB84(dVar22,0));
      }
      if (cVar32 == '\0') {
        dVar11 = (double)(ulonglong)
                         (uint)(F32HI(dVar16) * fVar27 + F32LO(dVar11));
      }
      dVar22 = in_xd2;
      if (cVar33 == '\0') {
        dVar22 = (double)(ulonglong)(uint)fVar14;
      }
      (vsp = ((unsigned long)(fr0_ - 484)), FUN_8c258030(pdVar10,pdVar7,pdVar4,pdVar9));
      (*(unsigned *)(fr0_ - 0x1d4) = (unsigned)(unsigned long)((double *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x1b4))));
      dVar12 = dVar16;
      dVar23 = dVar16;
      if (cVar33 == '\0') {
        uVar25 = (undefined4)(D2U(dVar16) >> 0x20);
        dVar12 = CONCAT44D(uVar25,uVar25);
        dVar23 = in_xd12;
      }
      in_xd12 = dVar23;
      ain0 = ((float *)(fr0_ - 0x168)) + (*(int *)(fr0_ - 0x1d8)) * 4;
      iVar2 = (*(int *)(fr0_ - 0x1d8)) * 0x10 + -0xc0;
      if (cVar32 == '\0') {
        dVar12 = CONCAT44D(F32HI(dVar12) * F32LO(dVar12),
                                  SUB84(dVar12,0));
      }
      else {
        dVar12 = dVar12 * dVar12;
      }
      while( true ) {
        uVar21 = SUB84(dVar22,0);
        uVar24 = SUB84(in_dr6,0);
        uVar25 = SUB84(dVar11,0);
        if (cVar33 == '\0') {
          dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),0x3ccccccd);
        }
        else {
          in_xd14 = -1.5763811764977282e-226;
        }
        if (&(*(int *)(fr0_ - 0x184)) <= ((double *)(unsigned long)*(unsigned *)(fr0_ - 0x1d4))) break;
        (vsp = ((unsigned long)(fr0_ - 484)), FUN_8c0107a0(0x14,((int *)(fr0_ - 0x194)),((undefined1 *)(unsigned)0x8c26d940),vr7));
        iVar3 = *(int *)(unsigned)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x1d4));
        pdVar10 = (double *)(unsigned)((int)((double *)(fr0_ - 0xc0)) + iVar3 * 4 + iVar2 + 0xc0);
        piVar6 = (int *)(unsigned)((int)((double *)(fr0_ - 0xc0)) + *(int *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x1d4)) + 4) * 4 + iVar2 + 0xc0);
        pdVar4 = (double *)(unsigned)(*(int *)(unsigned)pdVar10 * 0xc + (int)ar4);
        if (cVar33 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,uVar25);
        }
        else {
          dVar22 = *pdVar4;
        }
        if (cVar33 == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                    *(undefined4 *)(unsigned)(*piVar6 * 0xc + (int)ar4));
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar6 * 0xc + (int)ar4);
        }
        if (cVar32 == '\0') {
          dVar22 = CONCAT44D(F32HI(dVar22) - F32LO(dVar22),
                                    SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 - dVar22;
        }
        (*(float *)(fr0_ - 0x1ac)) = SUB84(dVar22,0);
        if (cVar33 == '\0') {
          (*(float *)(fr0_ - 0x1ac)) = F32HI(dVar22);
        }
        if (cVar33 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + *(int *)(unsigned)pdVar10 * 0xc + 4),
                                    *(undefined4 *)(unsigned)((int)ar4 + *piVar6 * 0xc + 4));
        }
        else {
          dVar22 = *(double *)(unsigned)((int)ar4 + *(int *)(unsigned)pdVar10 * 0xc + 4);
          in_xd2 = *(double *)(unsigned)((int)ar4 + *piVar6 * 0xc + 4);
        }
        if (cVar32 == '\0') {
          dVar22 = CONCAT44D(F32HI(dVar22) - F32LO(dVar22),
                                    SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 - dVar22;
        }
        if (cVar33 == '\0') {
          (*(float *)(fr0_ - 0x1a8)) = F32HI(dVar22);
        }
        else {
          (*(float *)(fr0_ - 0x1a8)) = SUB84(dVar22,0);
        }
        if (cVar33 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + *(int *)(unsigned)pdVar10 * 0xc + 8),
                                    *(undefined4 *)(unsigned)((int)ar4 + *piVar6 * 0xc + 8));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)ar4 + *piVar6 * 0xc + 8);
          dVar22 = *(double *)(unsigned)((int)ar4 + *(int *)(unsigned)pdVar10 * 0xc + 8);
        }
        if (cVar32 == '\0') {
          dVar22 = CONCAT44D(F32HI(dVar22) - F32LO(dVar22),
                                    SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 - dVar22;
        }
        fVar14 = F32HI(dVar22);
        (*(float *)(fr0_ - 0x1a4)) = fVar14;
        if (cVar33 != '\0') {
          (*(float *)(fr0_ - 0x1a4)) = SUB84(dVar22,0);
          (*(float *)(fr0_ - 0x1a0)) = fVar14;
        }
        if (cVar33 == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),(*(undefined4 *)(fr0_ - 0x17c)));
          in_dr6 = CONCAT44D((*(float *)(fr0_ - 0x1a8)),uVar24);
        }
        else {
          in_dr6 = CONCAT44D((*(float *)(fr0_ - 0x1a4)),(*(float *)(fr0_ - 0x1a8)));
        }
        if (cVar33 == '\0') {
          dVar22 = (double)(ulonglong)(*(uint *)(fr0_ - 0x180));
        }
        else {
          in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x17c)),(*(uint *)(fr0_ - 0x180)));
        }
        pdVar7 = (double *)(unsigned)(*(int *)(unsigned)pdVar10 * 0xc + (int)ar4);
        if (cVar33 == '\0') {
          dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1ac)),uVar21);
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(dVar22,0));
          in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)pdVar7);
        }
        else {
          dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1a8)),(*(float *)(fr0_ - 0x1ac)));
          dVar22 = *(double *)(unsigned)((int)pdVar7 + 4);
          in_xd6 = *pdVar7;
        }
        if (cVar32 == '\0') {
          fVar14 = F32LO(dVar16) - F32HI(dVar22);
        }
        else {
          fVar14 = SUB84(dVar16 - dVar22,0);
        }
        fVar15 = F32HI(in_dr6);
        dVar16 = in_dr6;
        if (cVar33 == '\0') {
          dVar16 = CONCAT44D(fVar15,SUB84(dVar22,0));
        }
        if (cVar32 == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),
                                    F32LO(dVar16) - F32LO(in_dr6));
        }
        else {
          dVar16 = dVar16 - in_dr6;
        }
        uVar25 = (undefined4)(D2U(dVar11) >> 0x20);
        if (cVar33 == '\0') {
          dVar11 = CONCAT44D(uVar25,(*(float *)(fr0_ - 0x1a4)));
          dVar22 = CONCAT44D(uVar25,fVar14);
        }
        else {
          in_xd4 = CONCAT44D((*(float *)(fr0_ - 0x1a0)),(*(float *)(fr0_ - 0x1a4)));
          dVar22 = dVar11;
        }
        if (cVar32 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) * F32LO(dVar22),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 * dVar22;
        }
        if (cVar33 == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1));
        }
        if (cVar32 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar22) * F32LO(dVar16) +
                                    F32HI(dVar16),SUB84(dVar16,0));
        }
        fVar14 = F32LO(dVar11);
        if (cVar33 == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),(*(undefined4 *)(fr0_ - 0x178)));
          dVar22 = CONCAT44D(fVar14,SUB84(dVar22,0));
        }
        else {
          in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x174)),(*(undefined4 *)(fr0_ - 0x178)));
          dVar22 = in_xd4;
        }
        if (cVar32 == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),
                                    F32LO(dVar16) - F32LO(dVar22));
        }
        else {
          dVar16 = dVar16 - dVar22;
        }
        if (cVar33 == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar15);
        }
        if (cVar32 == '\0') {
          fVar15 = F32LO(dVar22) * fVar15;
          dVar16 = CONCAT44D(F32HI(dVar22) * F32LO(dVar16) +
                                    F32HI(dVar16),SUB84(dVar16,0));
        }
        else {
          fVar15 = SUB84(dVar22 * in_dr6,0);
        }
        fVar27 = F32HI(dVar11);
        dVar22 = dVar11;
        if (cVar33 == '\0') {
          dVar22 = CONCAT44D(fVar27,fVar15);
        }
        if (cVar32 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar22) * fVar27 + F32LO(dVar22));
        }
        dVar23 = in_xd4;
        if (cVar33 == '\0') {
          dVar23 = CONCAT44D(fVar14,SUB84(dVar22,0));
        }
        if (cVar32 == '\0') {
          dVar23 = (double)(ulonglong)
                           (uint)(F32HI(dVar23) * fVar14 + F32LO(dVar23));
        }
        dVar22 = dVar11;
        if (cVar33 == '\0') {
          dVar11 = CONCAT44D(fVar27,SUB84(dVar23,0));
          dVar22 = CONCAT44D(fVar27,(int)(D2U(dVar16) >> 0x20));
          dVar16 = in_xd4;
        }
        in_xd4 = dVar16;
        if (cVar32 == '\0') {
          fVar14 = F32LO(dVar22) / F32LO(dVar11);
          in_dr6 = (double)(ulonglong)
                           (uint)(F32HI(dVar11) * fVar14 + F32LO(in_dr6));
        }
        else {
          fVar14 = SUB84(dVar22 / dVar11,0);
        }
        if (cVar33 == '\0') {
          (*(float *)(fr0_ - 0x1a0)) = SUB84(in_dr6,0);
          dVar22 = CONCAT44D(fVar14,SUB84(dVar11,0));
        }
        else {
          (*(float *)(fr0_ - 0x1a0)) = SUB84(in_xd6,0);
          dVar22 = in_xd4;
        }
        if (cVar33 == '\0') {
          (*(float *)(fr0_ - 0x19c)) = *(float *)(unsigned)((int)ar4 + *(int *)(unsigned)pdVar10 * 0xc + 4);
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)ar4 + *(int *)(unsigned)pdVar10 * 0xc + 4);
          (*(float *)(fr0_ - 0x19c)) = (*(float *)(fr0_ - 0x1a8));
          (*(float *)(fr0_ - 0x1a8)) = (*(float *)(fr0_ - 0x1a4));
        }
        fVar15 = F32HI(dVar22);
        if (cVar32 == '\0') {
          (*(float *)(fr0_ - 0x19c)) = fVar15 * (*(float *)(fr0_ - 0x1a8)) + (*(float *)(fr0_ - 0x19c));
        }
        if (cVar33 != '\0') {
          (*(float *)(fr0_ - 0x19c)) = SUB84(in_xd2,0);
        }
        if (cVar33 == '\0') {
          (*(float *)(fr0_ - 0x198)) = *(float *)(unsigned)((int)ar4 + *(int *)(unsigned)pdVar10 * 0xc + 8);
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)ar4 + *(int *)(unsigned)pdVar10 * 0xc + 8);
          (*(float *)(fr0_ - 0x198)) = (*(float *)(fr0_ - 0x1a4));
          (*(float *)(fr0_ - 0x1a4)) = (*(float *)(fr0_ - 0x1a0));
        }
        if (cVar32 == '\0') {
          (*(float *)(fr0_ - 0x198)) = fVar15 * (*(float *)(fr0_ - 0x1a4)) + (*(float *)(fr0_ - 0x198));
        }
        if (cVar33 == '\0') {
          dVar16 = CONCAT44D((*(float *)(fr0_ - 0x1a0)),(*(uint *)(fr0_ - 0x180)));
        }
        else {
          (*(float *)(fr0_ - 0x198)) = SUB84(in_xd2,0);
          ((int *)(fr0_ - 0x194))[0] = (int)((ulonglong)in_xd2 >> 0x20);
          dVar16 = CONCAT44D((*(float *)(fr0_ - 0x19c)),(*(float *)(fr0_ - 0x1a0)));
          in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x17c)),(*(uint *)(fr0_ - 0x180)));
        }
        if (cVar32 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) - F32LO(dVar16),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar33 == '\0') {
          (*(float *)(fr0_ - 0x1ac)) = F32HI(dVar16);
          dVar16 = CONCAT44D((*(float *)(fr0_ - 0x19c)),(*(undefined4 *)(fr0_ - 0x17c)));
        }
        else {
          (*(float *)(fr0_ - 0x1ac)) = SUB84(dVar16,0);
          dVar16 = CONCAT44D((*(float *)(fr0_ - 0x198)),(*(float *)(fr0_ - 0x19c)));
          in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x178)),(*(undefined4 *)(fr0_ - 0x17c)));
        }
        if (cVar32 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) - F32LO(dVar16),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar33 == '\0') {
          (*(float *)(fr0_ - 0x1a8)) = F32HI(dVar16);
          dVar16 = CONCAT44D((*(float *)(fr0_ - 0x198)),(*(undefined4 *)(fr0_ - 0x178)));
        }
        else {
          (*(float *)(fr0_ - 0x1a8)) = SUB84(dVar16,0);
          dVar16 = CONCAT44D(((int *)(fr0_ - 0x194))[0],(*(float *)(fr0_ - 0x198)));
          in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x174)),(*(undefined4 *)(fr0_ - 0x178)));
        }
        if (cVar32 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) - F32LO(dVar16),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        fVar15 = F32HI(dVar16);
        if (cVar33 == '\0') {
          dVar16 = CONCAT44D((*(float *)(fr0_ - 0x1a8)),(*(float *)(fr0_ - 0x1a8)));
          fVar27 = (*(float *)(fr0_ - 0x1ac));
          (*(float *)(fr0_ - 0x1a4)) = fVar15;
          fVar15 = F32LO(dVar22);
        }
        else {
          (*(float *)(fr0_ - 0x1a4)) = SUB84(dVar16,0);
          dVar16 = CONCAT44D((*(float *)(fr0_ - 0x1a4)),(*(float *)(fr0_ - 0x1a8)));
          in_xd2 = dVar16;
          fVar27 = (*(float *)(fr0_ - 0x1a8));
          (*(float *)(fr0_ - 0x1a0)) = fVar15;
          fVar15 = (*(float *)(fr0_ - 0x1ac));
        }
        if (cVar32 == '\0') {
          fVar28 = (*(float *)(fr0_ - 0x1a8)) * F32HI(dVar16);
        }
        else {
          fVar28 = SUB84(dVar16 * dVar16,0);
        }
        if (cVar33 == '\0') {
          dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1a4)),fVar28);
          fVar15 = (*(float *)(fr0_ - 0x1ac));
        }
        else {
          dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1a0)),(*(float *)(fr0_ - 0x1a4)));
        }
        if (cVar32 == '\0') {
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                    fVar27 * fVar15 + F32LO(dVar11));
        }
        piVar19 = (int *)(unsigned)(D2U(dVar11) >> 0x20);
        dVar16 = dVar11;
        piVar6 = piVar19;
        if (cVar33 == '\0') {
          dVar16 = CONCAT44D(piVar19,piVar19);
          piVar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x1b4));
        }
        (*(unsigned *)(fr0_ - 0x1b4) = (unsigned)(unsigned long)(piVar6));
        if (cVar32 == '\0') {
          dVar11 = CONCAT44D(piVar19,F32HI(dVar16) * F32LO(dVar16) +
                                            SUB84(dVar11,0));
        }
        dVar22 = in_xd2;
        if (cVar33 == '\0') {
          dVar22 = (double)(ulonglong)(uint)fVar14;
        }
        uVar25 = SUB84(dVar22,0);
        pdVar4 = ar4;
        pdVar9 = ar4;
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 484)); FUN_8c258030(pdVar10,pdVar7,ar4,ar4); });
        dVar22 = dVar29;
        if (cVar33 == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar25);
        }
        if (cVar32 == '\0') {
          dVar22 = CONCAT44D(F32HI(dVar22) /
                                    F32HI(dVar16),SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 / dVar16;
        }
        if (cVar33 == '\0') {
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),(*(float *)(fr0_ - 0x1ac)));
        }
        else {
          in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x1a8)),(*(float *)(fr0_ - 0x1ac)));
        }
        fVar14 = F32HI(dVar22);
        if (cVar32 == '\0') {
          (*(float *)(fr0_ - 0x1ac)) = F32LO(dVar11) * fVar14;
        }
        else {
          (*(float *)(fr0_ - 0x1ac)) = SUB84(dVar11 * dVar22,0);
        }
        if (cVar33 == '\0') {
          dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1a8)),(*(float *)(fr0_ - 0x1ac)));
        }
        else {
          (*(float *)(fr0_ - 0x1ac)) = SUB84(in_xd2,0);
          (*(float *)(fr0_ - 0x1a8)) = F32HI(in_xd2);
          dVar11 = CONCAT44D((*(float *)(fr0_ - 0x1a4)),(*(float *)(fr0_ - 0x1a8)));
        }
        if (cVar32 == '\0') {
          dVar11 = CONCAT44D(F32HI(dVar11) * fVar14,SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 * dVar22;
        }
        uVar20 = (uint)(D2U(dVar11) >> 0x20);
        if (cVar33 == '\0') {
          dVar11 = CONCAT44D(uVar20,(*(float *)(fr0_ - 0x1a4)));
          (*(float *)(fr0_ - 0x1a8)) = (float)uVar20;
        }
        else {
          (*(float *)(fr0_ - 0x1a8)) = SUB84(dVar11,0);
          in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x1a0)),uVar20);
        }
        if (cVar32 == '\0') {
          fVar14 = F32LO(dVar11) * fVar14;
        }
        else {
          fVar14 = SUB84(dVar11 * dVar22,0);
        }
        if (cVar33 != '\0') {
          (*(float *)(fr0_ - 0x1a4)) = SUB84(in_xd2,0);
          (*(float *)(fr0_ - 0x1a0)) = F32HI(in_xd2);
          in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x1a8)),(*(float *)(fr0_ - 0x1ac)));
          (*(float *)(fr0_ - 0x1ac)) = fVar14;
          fVar14 = (*(float *)(fr0_ - 0x1a4));
        }
        pdVar5 = (double *)(unsigned)((int)ain0[iVar3] * 0xc + (int)((undefined1 *)(fr0_ - 0x108)));
        if (cVar33 == '\0') {
          dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,(*(float *)(fr0_ - 0x1ac)));
        }
        else {
          dVar11 = *pdVar5;
        }
        fVar15 = F32LO(dVar29);
        if (cVar32 == '\0') {
          fVar27 = ABS(F32HI(dVar11) - F32LO(dVar11));
          dVar11 = CONCAT44D(fVar27,SUB84(dVar11,0));
          bVar30 = fVar15 < fVar27;
        }
        else {
          dVar11 = ABS(dVar11 - dVar11);
          bVar30 = dVar29 < dVar11;
        }
        if (bVar30) {
LAB_8c233baa:
          if (cVar33 == '\0') {
            dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)ar5 + 0xc));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)ar5 + 0xc);
          }
          if (cVar32 == '\0') {
            bVar30 = SUB84(dVar11,0) < SUB84(dVar12,0);
          }
          else {
            bVar30 = dVar11 < dVar12;
          }
          if (!bVar30) {
            if (cVar33 == '\0') {
              fVar14 = *(float *)(unsigned)((int)ar5 + 0xc);
              dVar16 = CONCAT44D((*(float *)(fr0_ - 0x19c)),SUB84(dVar16,0));
              dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),fVar14);
              dVar22 = CONCAT44D(fVar14,SUB84(dVar22,0));
            }
            else {
              in_xd2 = *(double *)(unsigned)((int)ar5 + 0xc);
              dVar16 = CONCAT44D((*(float *)(fr0_ - 0x198)),(*(float *)(fr0_ - 0x19c)));
              fVar14 = F32HI(in_xd2);
              dVar22 = in_xd2;
            }
            if (cVar32 == '\0') {
              fVar14 = F32LO(dVar11) * fVar14;
            }
            else {
              fVar14 = SUB84(dVar11 * dVar22,0);
            }
            if (cVar33 == '\0') {
              in_dr6 = CONCAT44D((*(uint *)(fr0_ - 0x180)),(*(undefined4 *)(fr0_ - 0x17c)));
            }
            else {
              in_xd6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x178)),(*(undefined4 *)(fr0_ - 0x17c)));
              in_dr6 = CONCAT44D((*(undefined4 *)(fr0_ - 0x17c)),(*(uint *)(fr0_ - 0x180)));
            }
            if (cVar32 == '\0') {
              in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),
                                        F32LO(in_dr6) - F32HI(dVar16));
            }
            else {
              in_dr6 = in_dr6 - dVar16;
            }
            if (cVar33 == '\0') {
              dVar23 = CONCAT44D((*(undefined4 *)(fr0_ - 0x178)),fVar14);
            }
            else {
              dVar23 = CONCAT44D((*(float *)(fr0_ - 0x174)),(*(undefined4 *)(fr0_ - 0x178)));
              in_xd4 = in_xd2;
            }
            if (cVar32 == '\0') {
              dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                        F32LO(dVar23) - F32HI(dVar12));
            }
            else {
              dVar23 = dVar23 - dVar12;
            }
            if (cVar33 == '\0') {
              dVar11 = CONCAT44D((*(float *)(fr0_ - 0x198)),(*(float *)(fr0_ - 0x1a0)));
              dVar22 = in_xd2;
            }
            else {
              dVar22 = CONCAT44D((*(float *)(fr0_ - 0x19c)),(*(float *)(fr0_ - 0x1a0)));
              dVar11 = CONCAT44D(((int *)(fr0_ - 0x194))[0],(*(float *)(fr0_ - 0x198)));
            }
            if (cVar32 == '\0') {
              in_dr6 = CONCAT44D(F32HI(in_dr6) - F32LO(dVar11),
                                        SUB84(in_dr6,0));
            }
            else {
              in_dr6 = in_dr6 - dVar11;
            }
            in_xd2 = in_xd6;
            if (cVar33 == '\0') {
              dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),SUB84(in_dr6,0));
              in_xd2 = dVar22;
            }
            if (cVar32 == '\0') {
              fVar14 = F32HI(dVar11);
              dVar11 = CONCAT44D(fVar14,F32LO(dVar11) * F32LO(in_dr6));
              dVar23 = CONCAT44D(F32HI(dVar23) - fVar14,SUB84(dVar23,0))
              ;
            }
            else {
              dVar11 = dVar11 * in_dr6;
              dVar23 = dVar23 - dVar11;
            }
            fVar14 = F32HI(in_dr6);
            dVar22 = in_dr6;
            if (cVar33 == '\0') {
              dVar22 = CONCAT44D(fVar14,SUB84(dVar16,0));
            }
            if (cVar32 == '\0') {
              dVar11 = (double)(ulonglong)
                               (uint)(F32HI(dVar22) * fVar14 + F32LO(dVar11))
              ;
            }
            fVar14 = F32HI(dVar23);
            dVar16 = dVar23;
            if (cVar33 == '\0') {
              dVar16 = CONCAT44D(fVar14,SUB84(dVar22,0));
            }
            if (cVar32 == '\0') {
              dVar11 = (double)(ulonglong)
                               (uint)(F32HI(dVar16) * fVar14 + F32LO(dVar11))
              ;
            }
            dVar22 = in_xd2;
            if (cVar33 == '\0') {
              dVar22 = CONCAT44D(SUB84(dVar11,0),SUB84(dVar23,0));
            }
            if (cVar32 != '\0' || F32HI(dVar22) <= SUB84(dVar22,0))
            goto LAB_8c233bf0;
          }
          bVar31 = false;
        }
        else {
          if (cVar33 == '\0') {
            dVar11 = (double)(ulonglong)(uint)(*(float *)(fr0_ - 0x1a8));
          }
          else {
            in_xd2 = CONCAT44D(fVar14,(*(float *)(fr0_ - 0x1a8)));
          }
          if (cVar33 == '\0') {
            dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x108)) + (int)ain0[iVar3] * 0xc + 4),
                                      SUB84(dVar11,0));
          }
          else {
            dVar11 = *(double *)(unsigned)(((undefined1 *)(fr0_ - 0x108)) + (int)ain0[iVar3] * 0xc + 4);
          }
          if (cVar32 == '\0') {
            fVar27 = ABS(F32HI(dVar11) - F32LO(dVar11));
            dVar11 = CONCAT44D(fVar27,SUB84(dVar11,0));
            bVar30 = fVar15 < fVar27;
          }
          else {
            dVar11 = ABS(dVar11 - dVar11);
            bVar30 = dVar29 < dVar11;
          }
          if (bVar30) goto LAB_8c233baa;
          if (cVar33 == '\0') {
            dVar11 = (double)(ulonglong)(uint)fVar14;
          }
          else {
            in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x1a0)),fVar14);
          }
          if (cVar33 == '\0') {
            dVar11 = CONCAT44D(*(undefined4 *)(unsigned)((int)((double *)(fr0_ - 0x100)) + (int)ain0[iVar3] * 0xc),
                                      SUB84(dVar11,0));
          }
          else {
            dVar11 = *(double *)(unsigned)((int)((double *)(fr0_ - 0x100)) + (int)ain0[iVar3] * 0xc);
          }
          if (cVar32 == '\0') {
            fVar14 = ABS(F32HI(dVar11) - F32LO(dVar11));
            dVar11 = CONCAT44D(fVar14,SUB84(dVar11,0));
            bVar30 = fVar15 < fVar14;
          }
          else {
            dVar11 = ABS(dVar11 - dVar11);
            fVar14 = F32HI(dVar11);
            bVar30 = dVar29 < dVar11;
          }
          if (bVar30) goto LAB_8c233baa;
          if (cVar33 == '\0') {
            dVar11 = CONCAT44D(fVar14,*(undefined4 *)(unsigned)((int)ar5 + 0xc));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)ar5 + 0xc);
          }
          if (cVar32 == '\0') {
            bVar30 = SUB84(dVar11,0) < SUB84(dVar12,0);
          }
          else {
            bVar30 = dVar11 < dVar12;
          }
          if (bVar30) goto LAB_8c233baa;
        }
LAB_8c233bf0:
        (*(unsigned *)(fr0_ - 0x1d4) = (unsigned)(unsigned long)((double *)(unsigned)((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x1d4)) + 4)));
      }
      if (bVar31) {
        return 1;
      }
      if (cVar33 == '\0') {
        dVar11 = CONCAT44D((*(uint *)(fr0_ - 0x180)),*(undefined4 *)(unsigned)ar5);
      }
      else {
        in_xd2 = *ar5;
        dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x17c)),(*(uint *)(fr0_ - 0x180)));
      }
      if (cVar32 == '\0') {
        dVar11 = CONCAT44D(F32HI(dVar11) - F32LO(dVar11),
                                  SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 - dVar11;
      }
      if (cVar33 == '\0') {
        (*(float *)(fr0_ - 0x174)) = F32HI(dVar11);
        dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x17c)),*(undefined4 *)(unsigned)((int)ar5 + 4));
      }
      else {
        (*(float *)(fr0_ - 0x174)) = SUB84(dVar11,0);
        dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x178)),(*(undefined4 *)(fr0_ - 0x17c)));
        in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
      }
      if (cVar32 == '\0') {
        dVar11 = CONCAT44D(F32HI(dVar11) - F32LO(dVar11),
                                  SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 - dVar11;
      }
      if (cVar33 == '\0') {
        (*(float *)(fr0_ - 0x170)) = F32HI(dVar11);
        dVar11 = CONCAT44D((*(undefined4 *)(fr0_ - 0x178)),*(undefined4 *)(unsigned)(ar5 + 1));
      }
      else {
        (*(float *)(fr0_ - 0x170)) = SUB84(dVar11,0);
        dVar11 = CONCAT44D((*(float *)(fr0_ - 0x174)),(*(undefined4 *)(fr0_ - 0x178)));
        in_xd2 = ar5[1];
      }
      if (cVar32 == '\0') {
        dVar11 = CONCAT44D(F32HI(dVar11) - F32LO(dVar11),
                                  SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 - dVar11;
      }
      fVar14 = F32HI(dVar11);
      if (cVar33 == '\0') {
        dVar11 = CONCAT44D(fVar14,(*(float *)(fr0_ - 0x170)));
        in_dr12 = CONCAT44D((*(float *)(fr0_ - 0x174)),SUB84(dVar12,0));
        dVar16 = CONCAT44D((*(float *)(fr0_ - 0x170)),SUB84(dVar16,0));
        fVar15 = (*(float *)(fr0_ - 0x170));
        (*(float *)(fr0_ - 0x16c)) = fVar14;
      }
      else {
        (*(float *)(fr0_ - 0x16c)) = SUB84(dVar11,0);
        dVar16 = CONCAT44D((*(float *)(fr0_ - 0x16c)),(*(float *)(fr0_ - 0x170)));
        in_dr12 = CONCAT44D((*(float *)(fr0_ - 0x170)),(*(float *)(fr0_ - 0x174)));
        fVar15 = (*(float *)(fr0_ - 0x16c));
        in_xd2 = dVar16;
        ((float *)(fr0_ - 0x168))[0] = fVar14;
      }
      if (cVar32 == '\0') {
        dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                  fVar15 * F32HI(dVar16));
      }
      else {
        dVar11 = dVar11 * dVar16;
      }
      uVar25 = (undefined4)((ulonglong)in_dr12 >> 0x20);
      if (cVar33 == '\0') {
        in_dr12 = CONCAT44D(uVar25,(*(float *)(fr0_ - 0x16c)));
        dVar16 = CONCAT44D(uVar25,SUB84(dVar16,0));
      }
      else {
        in_xd12 = CONCAT44D(((float *)(fr0_ - 0x168))[0],(*(float *)(fr0_ - 0x16c)));
        dVar16 = in_dr12;
      }
      if (cVar32 == '\0') {
        dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                  F32HI(dVar16) *
                                  F32HI(in_dr12) + F32LO(dVar11));
      }
      in_dr0 = in_xd12;
      if (cVar33 == '\0') {
        in_dr0 = CONCAT44D(SUB84(in_dr12,0),SUB84(dVar16,0));
      }
      if (cVar32 == '\0') {
        dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                  F32HI(in_dr0) * F32LO(in_dr12) +
                                  SUB84(dVar11,0));
      }
      dVar16 = in_xd2;
      if (cVar33 == '\0') {
        dVar16 = (double)(D2U(dVar22) & 0xffffffff);
      }
      uVar25 = SUB84(dVar16,0);
      (vsp = ((unsigned long)(fr0_ - 484)), FUN_8c258030(pdVar10,pdVar7,pdVar4,pdVar9));
      in_dr4 = dVar29;
      if (cVar33 == '\0') {
        in_dr4 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar25);
      }
      if (cVar32 == '\0') {
        in_dr4 = CONCAT44D(F32HI(in_dr4) /
                                  F32HI(in_dr0),SUB84(in_dr4,0));
      }
      else {
        in_dr4 = in_dr4 / in_dr0;
      }
      if (cVar33 == '\0') {
        dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),(*(float *)(fr0_ - 0x174)));
      }
      else {
        in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x170)),(*(float *)(fr0_ - 0x174)));
      }
      fVar14 = F32HI(in_dr4);
      if (cVar32 == '\0') {
        (*(float *)(fr0_ - 0x174)) = F32LO(dVar11) * fVar14;
      }
      else {
        (*(float *)(fr0_ - 0x174)) = SUB84(dVar11 * in_dr4,0);
      }
      if (cVar33 == '\0') {
        dVar22 = CONCAT44D((*(float *)(fr0_ - 0x170)),(*(float *)(fr0_ - 0x174)));
      }
      else {
        (*(float *)(fr0_ - 0x174)) = SUB84(in_xd2,0);
        (*(float *)(fr0_ - 0x170)) = F32HI(in_xd2);
        dVar22 = CONCAT44D((*(float *)(fr0_ - 0x16c)),(*(float *)(fr0_ - 0x170)));
      }
      if (cVar32 == '\0') {
        dVar22 = CONCAT44D(F32HI(dVar22) * fVar14,SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 * in_dr4;
      }
      uVar25 = (undefined4)(D2U(dVar22) >> 0x20);
      if (cVar33 == '\0') {
        dVar22 = CONCAT44D(uVar25,(*(float *)(fr0_ - 0x16c)));
        (*(float *)(fr0_ - 0x170)) = (float)uVar25;
      }
      else {
        (*(float *)(fr0_ - 0x170)) = SUB84(dVar22,0);
        in_xd2 = CONCAT44D(((float *)(fr0_ - 0x168))[0],uVar25);
      }
      if (cVar32 == '\0') {
        fVar14 = F32LO(dVar22) * fVar14;
      }
      else {
        fVar14 = SUB84(dVar22 * in_dr4,0);
      }
      fVar15 = (*(float *)(fr0_ - 0x174));
      (*(float *)(fr0_ - 0x16c)) = fVar14;
      if (cVar33 != '\0') {
        (*(float *)(fr0_ - 0x16c)) = SUB84(in_xd2,0);
        ((float *)(fr0_ - 0x168))[0] = F32HI(in_xd2);
        in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x170)),(*(float *)(fr0_ - 0x174)));
        fVar15 = fVar14;
      }
      pdVar10 = (double *)(unsigned)((*(int *)(fr0_ - 0x1d8)) * 0xc + (int)((undefined1 *)(fr0_ - 0x108)));
      if (cVar33 == '\0') {
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,fVar15);
      }
      else {
        dVar22 = *pdVar10;
      }
      fVar14 = F32LO(dVar29);
      if (cVar32 == '\0') {
        fVar15 = ABS(F32HI(dVar22) - F32LO(dVar22));
        dVar22 = CONCAT44D(fVar15,SUB84(dVar22,0));
        bVar31 = fVar14 < fVar15;
      }
      else {
        dVar22 = ABS(dVar22 - dVar22);
        bVar31 = dVar29 < dVar22;
      }
      if (bVar31) {
LAB_8c233cbe:
        bVar1 = false;
      }
      else {
        fVar15 = (*(float *)(fr0_ - 0x170));
        if (cVar33 != '\0') {
          in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x16c)),(*(float *)(fr0_ - 0x170)));
          fVar15 = (float)SUB84(dVar22,0);
        }
        if (cVar33 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(((undefined1 *)(fr0_ - 0x108)) + (*(int *)(fr0_ - 0x1d8)) * 0xc + 4),fVar15);
        }
        else {
          dVar22 = *(double *)(unsigned)(((undefined1 *)(fr0_ - 0x108)) + (*(int *)(fr0_ - 0x1d8)) * 0xc + 4);
        }
        if (cVar32 == '\0') {
          fVar15 = ABS(F32HI(dVar22) - F32LO(dVar22));
          dVar22 = CONCAT44D(fVar15,SUB84(dVar22,0));
          bVar31 = fVar14 < fVar15;
        }
        else {
          dVar22 = ABS(dVar22 - dVar22);
          bVar31 = dVar29 < dVar22;
        }
        if (bVar31) goto LAB_8c233cbe;
        fVar15 = (*(float *)(fr0_ - 0x16c));
        if (cVar33 != '\0') {
          in_xd2 = CONCAT44D(((float *)(fr0_ - 0x168))[0],(*(float *)(fr0_ - 0x16c)));
          fVar15 = F32LO(dVar22);
        }
        if (cVar33 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)((double *)(fr0_ - 0x100)) + (*(int *)(fr0_ - 0x1d8)) * 0xc),fVar15);
        }
        else {
          dVar22 = *(double *)(unsigned)((int)((double *)(fr0_ - 0x100)) + (*(int *)(fr0_ - 0x1d8)) * 0xc);
        }
        if (cVar32 == '\0') {
          bVar31 = fVar14 < ABS(F32HI(dVar22) - F32LO(dVar22));
        }
        else {
          bVar31 = dVar29 < ABS(dVar22 - dVar22);
        }
        if (bVar31) goto LAB_8c233cbe;
      }
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c2336e8\n.set _FUN_8c2336e8, _FUN_8c2336e8_def\n");
