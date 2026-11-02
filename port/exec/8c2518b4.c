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
uint FUN_8c2518b4_def(ushort *ar4,double *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2518b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  ushort uVar1;
  double *pdVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double *pdVar7;
  double *pdVar8;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar9;
  double *pdVar10;
  int ar7_00;
  double *unaff_r8 = 0;
  double *pdVar11;
  ushort *puVar12;
  ushort *puVar13;
  double in_dr0 = 0;
  double dVar14;
  double in_dr2 = 0;
  double dVar15;
  double dVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double in_dr4 = 0;
  double dVar20;
  float fVar21;
  double in_xd2 = 0;
  double dVar22;
  double in_xd14 = 0;
  bool bVar23;
  char cVar24;
  char cVar25;
  
  cVar25 = '\0';
  cVar24 = '\0';
  uVar1 = *ar4;
  (*(uint*)((uchar*)&(*(int *)(fr0_ - 0x34))+0)) = uVar1 & 0x3fff;
  uVar6 = 0x3f000000;
  uVar3 = uVar1 & 0xc000;
  puVar12 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 3;
    for ((*(int *)(fr0_ - 0x2c)) = 0; uVar3 = (uint)ar4[1], (*(int *)(fr0_ - 0x2c)) < (int)uVar3; (*(int *)(fr0_ - 0x2c)) = (*(int *)(fr0_ - 0x2c)) + 1) {
      pdVar8 = (double *)(unsigned)((uint)*puVar12 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar13 = puVar12 + 2;
      pdVar7 = (double *)(unsigned)((uint)puVar12[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar12 = puVar12 + 3;
      pdVar9 = (double *)(unsigned)((uint)*puVar13 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(unsigned)((int)pdVar7 + 4);
          dVar20 = CONCAT44D(uVar19,*(undefined4 *)(unsigned)((int)pdVar8 + 4));
          dVar22 = CONCAT44D(uVar19,SUB84(in_dr4,0));
        }
        else {
          dVar20 = *(double *)(unsigned)((int)pdVar7 + 4);
          in_xd2 = *(double *)(unsigned)((int)pdVar8 + 4);
          uVar19 = (undefined4)(D2U(dVar20) >> 0x20);
          dVar22 = dVar20;
        }
        if (cVar24 == '\0') {
          dVar20 = CONCAT44D(F32HI(dVar20) - F32LO(dVar20),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar20;
        }
        if (cVar25 == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)(pdVar9 + 1));
          dVar22 = CONCAT44D(uVar19,*(undefined4 *)(unsigned)(pdVar7 + 1));
        }
        else {
          in_xd2 = pdVar9[1];
        }
        fVar21 = F32LO(dVar22);
        if (cVar24 == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) - fVar21);
        }
        else {
          dVar20 = dVar20 - dVar22;
        }
        if (cVar25 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar21);
        }
        if (cVar24 == '\0') {
          dVar20 = CONCAT44D(F32HI(dVar20) * F32LO(dVar20),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 * dVar20;
        }
        if (cVar25 == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)(pdVar8 + 1));
        }
        else {
          in_xd2 = pdVar8[1];
        }
        if (cVar24 == '\0') {
          dVar14 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar20));
        }
        else {
          dVar14 = in_dr0 - dVar20;
        }
        if (cVar25 == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar9 + 4));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)pdVar9 + 4);
        }
        if (cVar24 == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                    F32LO(dVar20) - F32HI(dVar22));
        }
        else {
          dVar20 = dVar20 - dVar22;
        }
        uVar3 = (uint)(D2U(dVar20) >> 0x20);
        dVar22 = dVar20;
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(uVar3,fVar21);
        }
        if (cVar24 == '\0') {
          in_dr0 = CONCAT44D((int)(D2U(dVar14) >> 0x20),
                                    F32LO(dVar14) * F32LO(dVar20));
        }
        else {
          in_dr0 = dVar14 * dVar20;
        }
        in_dr2 = (double)((ulonglong)uVar3 << 0x20);
        if (cVar24 == '\0') {
          fVar21 = F32HI(dVar22) - F32LO(in_dr0);
          in_dr4 = CONCAT44D(fVar21,SUB84(dVar22,0));
          bVar23 = 0.0 < fVar21;
        }
        else {
          in_dr4 = dVar22 - in_dr0;
          bVar23 = in_dr2 < in_dr4;
        }
        if (!bVar23) goto LAB_8c2519bc;
      }
      else {
LAB_8c2519bc:
        uVar19 = SUB84(in_dr2,0);
        uVar5 = SUB84(in_dr0,0);
        *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
        CacheBlockWriteBack(pdVar8);
        uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar25 == '\0') {
          uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar8,ar5,ar6,ar7));
        dVar14 = in_xd14;
        dVar22 = in_xd14;
        dVar20 = in_xd14;
        if (cVar25 == '\0') {
          dVar14 = CONCAT44D(uVar6,uVar18);
          dVar22 = in_xd2;
          uVar19 = uVar6;
          dVar20 = CONCAT44D(uVar6,uVar5);
        }
        *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar4;
        if (cVar25 == '\0') {
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar19);
          pdVar11 = (double *)(unsigned)((int)pdVar8 + 0x34);
        }
        else {
          dVar15 = pdVar8[6];
          pdVar11 = pdVar8 + 7;
        }
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)(F32HI(dVar20) *
                                  F32HI(dVar15) + F32LO(dVar15));
        }
        uVar19 = (undefined4)(D2U(dVar14) >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar15,0);
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,uVar19);
          dVar14 = dVar22;
          dVar22 = CONCAT44D(uVar19,SUB84(dVar20,0));
        }
        else {
          pdVar8[4] = dVar22;
          dVar15 = *pdVar11;
          dVar22 = dVar14;
        }
        pdVar10 = (double *)(unsigned)((int)pdVar8 + 0x24);
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)(F32HI(dVar22) *
                                  F32HI(dVar15) + F32LO(dVar15));
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)pdVar10 = SUB84(dVar15,0);
        }
        else {
          *pdVar10 = dVar14;
        }
        CacheBlockWriteBack(pdVar10);
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar22,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar15,0));
          pdVar8 = pdVar8 + 1;
        }
        else {
          dVar22 = *pdVar8;
          dVar20 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar20) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar22) >> 0x20);
        }
        else {
          dVar15 = pdVar8[2];
          unaff_r8[3] = pdVar8[3];
          unaff_r8[2] = dVar15;
          unaff_r8[1] = dVar20;
          *unaff_r8 = dVar22;
        }
        *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
        CacheBlockWriteBack(pdVar7);
        uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar25 == '\0') {
          uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar5 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar7,pdVar11,ar6,ar7));
        uVar18 = SUB84(dVar20,0);
        dVar16 = in_xd14;
        dVar20 = in_xd14;
        dVar15 = in_xd14;
        if (cVar25 == '\0') {
          dVar16 = CONCAT44D(uVar6,uVar19);
          dVar20 = dVar14;
          uVar18 = uVar6;
          dVar15 = CONCAT44D(uVar6,SUB84(dVar22,0));
        }
        *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar5;
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),uVar18);
          pdVar8 = (double *)(unsigned)((int)pdVar7 + 0x34);
        }
        else {
          dVar22 = pdVar7[6];
          pdVar8 = pdVar7 + 7;
        }
        if (cVar24 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar15) *
                                  F32HI(dVar22) + F32LO(dVar22));
        }
        uVar19 = (undefined4)(D2U(dVar16) >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar22,0);
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar19);
          dVar16 = dVar20;
          dVar22 = CONCAT44D(uVar19,SUB84(dVar15,0));
        }
        else {
          pdVar7[4] = dVar20;
          dVar14 = *pdVar8;
          dVar22 = dVar16;
        }
        pdVar11 = (double *)(unsigned)((int)pdVar7 + 0x24);
        if (cVar24 == '\0') {
          dVar14 = (double)(ulonglong)
                           (uint)(F32HI(dVar22) *
                                  F32HI(dVar14) + F32LO(dVar14));
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)pdVar11 = SUB84(dVar14,0);
        }
        else {
          *pdVar11 = dVar16;
        }
        CacheBlockWriteBack(pdVar11);
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar22,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(dVar14,0));
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar22 = *pdVar7;
          dVar20 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar19;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar20) >> 0x20);
          pdVar7 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar7 = (int)(D2U(dVar22) >> 0x20);
        }
        else {
          dVar14 = pdVar7[2];
          unaff_r8[7] = pdVar7[3];
          unaff_r8[6] = dVar14;
          unaff_r8[5] = dVar20;
          pdVar7 = unaff_r8 + 4;
          *pdVar7 = dVar22;
        }
        *(undefined4 *)(unsigned)pdVar9 = 0xf0000000;
        CacheBlockWriteBack(pdVar9);
        uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar25 == '\0') {
          uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar5 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar9,pdVar8,ar6,ar7));
        uVar18 = SUB84(dVar20,0);
        dVar14 = in_xd14;
        in_xd2 = in_xd14;
        dVar20 = in_xd14;
        if (cVar25 == '\0') {
          dVar14 = CONCAT44D(uVar6,uVar19);
          in_xd2 = dVar16;
          uVar18 = uVar6;
          dVar20 = CONCAT44D(uVar6,SUB84(dVar22,0));
        }
        *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar5;
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 6),uVar18);
          ar5 = (double *)(unsigned)((int)pdVar9 + 0x34);
        }
        else {
          dVar22 = pdVar9[6];
          ar5 = pdVar9 + 7;
        }
        if (cVar24 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar20) *
                                  F32HI(dVar22) + F32LO(dVar22));
        }
        uVar19 = (undefined4)(D2U(dVar14) >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar22,0);
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar19);
          dVar22 = CONCAT44D(uVar19,SUB84(dVar20,0));
        }
        else {
          pdVar9[4] = in_xd2;
          dVar15 = *ar5;
          in_xd2 = dVar14;
          dVar22 = dVar14;
        }
        pdVar8 = (double *)(unsigned)((int)pdVar9 + 0x24);
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)(F32HI(dVar22) *
                                  F32HI(dVar15) + F32LO(dVar15));
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)pdVar8 = SUB84(dVar15,0);
        }
        else {
          *pdVar8 = in_xd2;
        }
        CacheBlockWriteBack(pdVar8);
        if (cVar25 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar22,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(dVar15,0));
          pdVar9 = pdVar9 + 1;
        }
        else {
          in_dr0 = *pdVar9;
          in_dr2 = pdVar9[1];
          pdVar9 = pdVar9 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(unsigned)(pdVar9 + 2);
          in_dr4 = CONCAT44D(uVar19,SUB84(dVar14,0));
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
          *(undefined4 *)(unsigned)(pdVar7 + 7) = uVar19;
          *(int *)(unsigned)((int)pdVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
          pdVar7 = pdVar7 + 6;
          *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar9[2];
          pdVar7[7] = pdVar9[3];
          pdVar7[6] = in_dr4;
          pdVar7[5] = in_dr2;
          pdVar7 = pdVar7 + 4;
          *pdVar7 = in_dr0;
        }
        unaff_r8 = pdVar7 + 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
      }
    }
  }
  else if (uVar3 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 4;
    (*(int *)(fr0_ - 0x24)) = 0;
    while( true ) {
      uVar19 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= (*(int *)(fr0_ - 0x24))) break;
      pdVar9 = (double *)(unsigned)((uint)*puVar12 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar8 = (double *)(unsigned)((uint)puVar12[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar13 = puVar12 + 3;
      pdVar11 = (double *)(unsigned)((uint)puVar12[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar12 = puVar12 + 4;
      pdVar7 = (double *)(unsigned)((uint)*puVar13 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(unsigned)((int)pdVar8 + 4);
          dVar22 = CONCAT44D(uVar19,*(undefined4 *)(unsigned)((int)pdVar9 + 4));
        }
        else {
          dVar22 = *(double *)(unsigned)((int)pdVar8 + 4);
          in_xd2 = *(double *)(unsigned)((int)pdVar9 + 4);
        }
        if (cVar24 == '\0') {
          dVar22 = CONCAT44D(F32HI(dVar22) - F32LO(dVar22),
                                    SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 - dVar22;
        }
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(pdVar11 + 1));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),uVar19);
        }
        else {
          in_xd2 = pdVar11[1];
          dVar20 = pdVar8[1];
        }
        fVar21 = F32HI(dVar20);
        if (cVar24 == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) - fVar21);
        }
        else {
          dVar22 = dVar22 - dVar20;
        }
        if (cVar25 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar21);
        }
        if (cVar24 == '\0') {
          dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(dVar22),
                                    SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 * dVar22;
        }
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(pdVar9 + 1));
        }
        else {
          in_xd2 = pdVar9[1];
        }
        if (cVar24 == '\0') {
          dVar14 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar22));
        }
        else {
          dVar14 = in_dr0 - dVar22;
        }
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar11 + 4));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)pdVar11 + 4);
        }
        if (cVar24 == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                    F32LO(dVar22) - F32LO(dVar20));
        }
        else {
          dVar22 = dVar22 - dVar20;
        }
        uVar3 = (uint)(D2U(dVar22) >> 0x20);
        dVar15 = dVar22;
        if (cVar25 == '\0') {
          dVar15 = CONCAT44D(uVar3,SUB84(dVar20,0));
        }
        if (cVar24 == '\0') {
          in_dr0 = CONCAT44D((int)(D2U(dVar14) >> 0x20),
                                    F32LO(dVar14) * F32LO(dVar22));
        }
        else {
          in_dr0 = dVar14 * dVar22;
        }
        in_dr2 = (double)((ulonglong)uVar3 << 0x20);
        if (cVar24 == '\0') {
          fVar21 = F32HI(dVar15) - F32LO(in_dr0);
          in_dr4 = CONCAT44D(fVar21,SUB84(dVar15,0));
          bVar23 = 0.0 < fVar21;
        }
        else {
          in_dr4 = dVar15 - in_dr0;
          bVar23 = in_dr2 < in_dr4;
        }
        if (!bVar23) goto LAB_8c251bbc;
      }
      else {
LAB_8c251bbc:
        uVar19 = SUB84(in_dr2,0);
        uVar5 = SUB84(in_dr0,0);
        *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
        CacheBlockWriteBack(pdVar9);
        uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar25 == '\0') {
          uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar9,ar5,ar6,ar7));
        dVar14 = in_xd14;
        dVar22 = in_xd14;
        dVar20 = in_xd14;
        if (cVar25 == '\0') {
          dVar14 = CONCAT44D(uVar6,uVar18);
          dVar22 = in_xd2;
          uVar19 = uVar6;
          dVar20 = CONCAT44D(uVar6,uVar5);
        }
        *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar4;
        if (cVar25 == '\0') {
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 6),uVar19);
          pdVar10 = (double *)(unsigned)((int)pdVar9 + 0x34);
        }
        else {
          dVar15 = pdVar9[6];
          pdVar10 = pdVar9 + 7;
        }
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)(F32HI(dVar20) *
                                  F32HI(dVar15) + F32LO(dVar15));
        }
        uVar19 = (undefined4)(D2U(dVar14) >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar15,0);
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,uVar19);
          dVar14 = dVar22;
          dVar22 = CONCAT44D(uVar19,SUB84(dVar20,0));
        }
        else {
          pdVar9[4] = dVar22;
          dVar15 = *pdVar10;
          dVar22 = dVar14;
        }
        pdVar2 = (double *)(unsigned)((int)pdVar9 + 0x24);
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)(F32HI(dVar22) *
                                  F32HI(dVar15) + F32LO(dVar15));
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)pdVar2 = SUB84(dVar15,0);
        }
        else {
          *pdVar2 = dVar14;
        }
        CacheBlockWriteBack(pdVar2);
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar22,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(dVar15,0));
          pdVar9 = pdVar9 + 1;
        }
        else {
          dVar22 = *pdVar9;
          dVar20 = pdVar9[1];
          pdVar9 = pdVar9 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(unsigned)(pdVar9 + 2);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar20) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar22) >> 0x20);
        }
        else {
          dVar15 = pdVar9[2];
          unaff_r8[3] = pdVar9[3];
          unaff_r8[2] = dVar15;
          unaff_r8[1] = dVar20;
          *unaff_r8 = dVar22;
        }
        *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
        CacheBlockWriteBack(pdVar8);
        uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar25 == '\0') {
          uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar5 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar8,pdVar10,ar6,ar7));
        uVar18 = SUB84(dVar20,0);
        dVar16 = in_xd14;
        dVar20 = in_xd14;
        dVar15 = in_xd14;
        if (cVar25 == '\0') {
          dVar16 = CONCAT44D(uVar6,uVar19);
          dVar20 = dVar14;
          uVar18 = uVar6;
          dVar15 = CONCAT44D(uVar6,SUB84(dVar22,0));
        }
        *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar5;
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar18);
          pdVar9 = (double *)(unsigned)((int)pdVar8 + 0x34);
        }
        else {
          dVar22 = pdVar8[6];
          pdVar9 = pdVar8 + 7;
        }
        if (cVar24 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar15) *
                                  F32HI(dVar22) + F32LO(dVar22));
        }
        uVar19 = (undefined4)(D2U(dVar16) >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar22,0);
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,uVar19);
          dVar16 = dVar20;
          dVar22 = CONCAT44D(uVar19,SUB84(dVar15,0));
        }
        else {
          pdVar8[4] = dVar20;
          dVar14 = *pdVar9;
          dVar22 = dVar16;
        }
        pdVar10 = (double *)(unsigned)((int)pdVar8 + 0x24);
        if (cVar24 == '\0') {
          dVar14 = (double)(ulonglong)
                           (uint)(F32HI(dVar22) *
                                  F32HI(dVar14) + F32LO(dVar14));
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)pdVar10 = SUB84(dVar14,0);
        }
        else {
          *pdVar10 = dVar16;
        }
        CacheBlockWriteBack(pdVar10);
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar22,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar14,0));
          pdVar8 = pdVar8 + 1;
        }
        else {
          dVar22 = *pdVar8;
          dVar20 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar19;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar20) >> 0x20);
          pdVar8 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar8 = (int)(D2U(dVar22) >> 0x20);
        }
        else {
          dVar14 = pdVar8[2];
          unaff_r8[7] = pdVar8[3];
          unaff_r8[6] = dVar14;
          unaff_r8[5] = dVar20;
          pdVar8 = unaff_r8 + 4;
          *pdVar8 = dVar22;
        }
        *(undefined4 *)(unsigned)pdVar11 = 0xe0000000;
        CacheBlockWriteBack(pdVar11);
        uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar25 == '\0') {
          uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar5 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar11,pdVar9,ar6,ar7));
        uVar18 = SUB84(dVar20,0);
        dVar15 = in_xd14;
        dVar20 = in_xd14;
        dVar14 = in_xd14;
        if (cVar25 == '\0') {
          dVar15 = CONCAT44D(uVar6,uVar19);
          dVar20 = dVar16;
          uVar18 = uVar6;
          dVar14 = CONCAT44D(uVar6,SUB84(dVar22,0));
        }
        *(undefined4 *)(unsigned)(pdVar11 + 5) = uVar5;
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + 6),uVar18);
          pdVar9 = (double *)(unsigned)((int)pdVar11 + 0x34);
        }
        else {
          dVar22 = pdVar11[6];
          pdVar9 = pdVar11 + 7;
        }
        if (cVar24 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar14) *
                                  F32HI(dVar22) + F32LO(dVar22));
        }
        uVar19 = (undefined4)(D2U(dVar15) >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(unsigned)(pdVar11 + 4) = SUB84(dVar22,0);
          dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,uVar19);
          dVar15 = dVar20;
          dVar22 = CONCAT44D(uVar19,SUB84(dVar14,0));
        }
        else {
          pdVar11[4] = dVar20;
          dVar16 = *pdVar9;
          dVar22 = dVar15;
        }
        pdVar10 = (double *)(unsigned)((int)pdVar11 + 0x24);
        if (cVar24 == '\0') {
          dVar16 = (double)(ulonglong)
                           (uint)(F32HI(dVar22) *
                                  F32HI(dVar16) + F32LO(dVar16));
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)pdVar10 = SUB84(dVar16,0);
        }
        else {
          *pdVar10 = dVar15;
        }
        CacheBlockWriteBack(pdVar10);
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(dVar22,0));
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(dVar16,0));
          pdVar11 = pdVar11 + 1;
        }
        else {
          dVar22 = *pdVar11;
          dVar20 = pdVar11[1];
          pdVar11 = pdVar11 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(unsigned)(pdVar11 + 2);
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar11 + 0x14);
          *(undefined4 *)(unsigned)(pdVar8 + 7) = uVar19;
          *(int *)(unsigned)((int)pdVar8 + 0x34) = (int)(D2U(dVar20) >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)(unsigned)pdVar8 = (int)(D2U(dVar22) >> 0x20);
        }
        else {
          dVar14 = pdVar11[2];
          pdVar8[7] = pdVar11[3];
          pdVar8[6] = dVar14;
          pdVar8[5] = dVar20;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = dVar22;
        }
        *(undefined4 *)(unsigned)pdVar7 = 0xf0000000;
        CacheBlockWriteBack(pdVar7);
        uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar25 == '\0') {
          uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar5 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar7,pdVar9,ar6,ar7));
        uVar18 = SUB84(dVar20,0);
        dVar14 = in_xd14;
        in_xd2 = in_xd14;
        dVar20 = in_xd14;
        if (cVar25 == '\0') {
          dVar14 = CONCAT44D(uVar6,uVar19);
          in_xd2 = dVar15;
          uVar18 = uVar6;
          dVar20 = CONCAT44D(uVar6,SUB84(dVar22,0));
        }
        *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar5;
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),uVar18);
          ar5 = (double *)(unsigned)((int)pdVar7 + 0x34);
        }
        else {
          dVar22 = pdVar7[6];
          ar5 = pdVar7 + 7;
        }
        if (cVar24 == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar20) *
                                  F32HI(dVar22) + F32LO(dVar22));
        }
        uVar19 = (undefined4)(D2U(dVar14) >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar22,0);
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar19);
          dVar22 = CONCAT44D(uVar19,SUB84(dVar20,0));
        }
        else {
          pdVar7[4] = in_xd2;
          dVar15 = *ar5;
          in_xd2 = dVar14;
          dVar22 = dVar14;
        }
        pdVar9 = (double *)(unsigned)((int)pdVar7 + 0x24);
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)(F32HI(dVar22) *
                                  F32HI(dVar15) + F32LO(dVar15));
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)pdVar9 = SUB84(dVar15,0);
        }
        else {
          *pdVar9 = in_xd2;
        }
        CacheBlockWriteBack(pdVar9);
        if (cVar25 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar22,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(dVar15,0));
          pdVar7 = pdVar7 + 1;
        }
        else {
          in_dr0 = *pdVar7;
          in_dr2 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          in_dr4 = CONCAT44D(uVar19,SUB84(dVar14,0));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(pdVar8 + 7) = uVar19;
          *(int *)(unsigned)((int)pdVar8 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar7[2];
          pdVar8[7] = pdVar7[3];
          pdVar8[6] = in_dr4;
          pdVar8[5] = in_dr2;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = in_dr0;
        }
        unaff_r8 = pdVar8 + 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
      }
      (*(int *)(fr0_ - 0x24)) = (*(int *)(fr0_ - 0x24)) + 1;
    }
  }
  else if (uVar3 == 0x8000) {
    for ((*(int *)(fr0_ - 0x30)) = 0; uVar3 = (uint)ar4[1], (*(int *)(fr0_ - 0x30)) < (int)uVar3; (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) + 1) {
      puVar13 = puVar12 + 1;
      uVar3 = (uint)*puVar12;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar3;
      ar7_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
        ar6 = (uint)puVar12[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
        ar5 = (double *)(unsigned)((uint)*puVar13 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        ar7_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)puVar12[3] * 0x40;
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(unsigned)(ar6 + 4);
          dVar20 = CONCAT44D(uVar19,*(undefined4 *)(unsigned)((int)ar5 + 4));
          dVar22 = CONCAT44D(uVar19,SUB84(in_dr4,0));
        }
        else {
          dVar20 = *(double *)(unsigned)(ar6 + 4);
          in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
          uVar19 = (undefined4)(D2U(dVar20) >> 0x20);
          dVar22 = dVar20;
        }
        if (cVar24 == '\0') {
          dVar20 = CONCAT44D(F32HI(dVar20) - F32LO(dVar20),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 - dVar20;
        }
        if (cVar25 == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)(ar7_00 + 8));
          dVar22 = CONCAT44D(uVar19,*(undefined4 *)(unsigned)(ar6 + 8));
        }
        else {
          in_xd2 = *(double *)(unsigned)(ar7_00 + 8);
        }
        fVar21 = F32LO(dVar22);
        if (cVar24 == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) - fVar21);
        }
        else {
          dVar20 = dVar20 - dVar22;
        }
        if (cVar25 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar21);
        }
        if (cVar24 == '\0') {
          dVar20 = CONCAT44D(F32HI(dVar20) * F32LO(dVar20),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 * dVar20;
        }
        if (cVar25 == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)(ar5 + 1));
        }
        else {
          in_xd2 = ar5[1];
        }
        if (cVar24 == '\0') {
          dVar14 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar20));
        }
        else {
          dVar14 = in_dr0 - dVar20;
        }
        if (cVar25 == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),*(undefined4 *)(unsigned)(ar7_00 + 4));
        }
        else {
          in_xd2 = *(double *)(unsigned)(ar7_00 + 4);
        }
        if (cVar24 == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                    F32LO(dVar20) - F32HI(dVar22));
        }
        else {
          dVar20 = dVar20 - dVar22;
        }
        uVar17 = (uint)(D2U(dVar20) >> 0x20);
        dVar22 = dVar20;
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(uVar17,fVar21);
        }
        if (cVar24 == '\0') {
          in_dr0 = CONCAT44D((int)(D2U(dVar14) >> 0x20),
                                    F32LO(dVar14) * F32LO(dVar20));
        }
        else {
          in_dr0 = dVar14 * dVar20;
        }
        in_dr2 = (double)((ulonglong)uVar17 << 0x20);
        if (cVar24 == '\0') {
          fVar21 = F32HI(dVar22) - F32LO(in_dr0);
          in_dr4 = CONCAT44D(fVar21,SUB84(dVar22,0));
          bVar23 = 0.0 < fVar21;
        }
        else {
          in_dr4 = dVar22 - in_dr0;
          bVar23 = in_dr2 < in_dr4;
        }
        if (!bVar23) goto LAB_8c251dfc;
        puVar12 = puVar13 + uVar3;
      }
      else {
LAB_8c251dfc:
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar3;
        (*(int *)(fr0_ - 0x34)) = 0;
        dVar22 = in_xd2;
        if (0 < (int)(uVar3 - 1)) {
          do {
            uVar19 = SUB84(in_dr2,0);
            uVar5 = SUB84(in_dr0,0);
            uVar1 = *puVar13;
            puVar13 = puVar13 + 1;
            pdVar7 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
            *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
            CacheBlockWriteBack(pdVar7);
            uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            if (cVar25 == '\0') {
              uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            }
            uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar7,ar5,ar6,ar7_00));
            in_xd2 = in_xd14;
            dVar20 = in_xd14;
            dVar14 = in_xd14;
            if (cVar25 == '\0') {
              in_xd2 = CONCAT44D(uVar6,uVar18);
              dVar20 = dVar22;
              uVar19 = uVar6;
              dVar14 = CONCAT44D(uVar6,uVar5);
            }
            *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar4;
            if (cVar25 == '\0') {
              dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),uVar19);
              ar5 = (double *)(unsigned)((int)pdVar7 + 0x34);
            }
            else {
              dVar22 = pdVar7[6];
              ar5 = pdVar7 + 7;
            }
            if (cVar24 == '\0') {
              dVar22 = (double)(ulonglong)
                               (uint)(F32HI(dVar14) *
                                      F32HI(dVar22) + F32LO(dVar22));
            }
            uVar19 = (undefined4)((ulonglong)in_xd2 >> 0x20);
            if (cVar25 == '\0') {
              *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar22,0);
              dVar15 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar19);
              in_xd2 = dVar20;
              dVar22 = CONCAT44D(uVar19,SUB84(dVar14,0));
            }
            else {
              pdVar7[4] = dVar20;
              dVar15 = *ar5;
              dVar22 = in_xd2;
            }
            pdVar8 = (double *)(unsigned)((int)pdVar7 + 0x24);
            if (cVar24 == '\0') {
              dVar15 = (double)(ulonglong)
                               (uint)(F32HI(dVar22) *
                                      F32HI(dVar15) + F32LO(dVar15));
            }
            if (cVar25 == '\0') {
              *(int *)(unsigned)pdVar8 = SUB84(dVar15,0);
            }
            else {
              *pdVar8 = in_xd2;
            }
            CacheBlockWriteBack(pdVar8);
            if (cVar25 == '\0') {
              in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar22,0));
              in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(dVar15,0));
              pdVar7 = pdVar7 + 1;
            }
            else {
              in_dr0 = *pdVar7;
              in_dr2 = pdVar7[1];
              pdVar7 = pdVar7 + 2;
            }
            if (cVar25 == '\0') {
              uVar19 = *(undefined4 *)(unsigned)(pdVar7 + 2);
              *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
              *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
              *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
              unaff_r8 = unaff_r8 + 2;
              *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              dVar22 = pdVar7[2];
              unaff_r8[3] = pdVar7[3];
              unaff_r8[2] = dVar22;
              unaff_r8[1] = in_dr2;
              *unaff_r8 = in_dr0;
            }
            unaff_r8 = unaff_r8 + 4;
            (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
            dVar22 = in_xd2;
          } while ((*(int *)(fr0_ - 0x34)) < (int)(uVar3 - 1));
        }
        uVar19 = SUB84(in_dr2,0);
        uVar5 = SUB84(in_dr0,0);
        puVar12 = puVar13 + 1;
        pdVar7 = (double *)(unsigned)((uint)*puVar13 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        *(undefined4 *)(unsigned)pdVar7 = 0xf0000000;
        CacheBlockWriteBack(pdVar7);
        uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar25 == '\0') {
          uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar7,ar5,ar6,ar7_00));
        dVar14 = in_xd14;
        dVar22 = in_xd14;
        dVar20 = in_xd14;
        if (cVar25 == '\0') {
          dVar14 = CONCAT44D(uVar6,uVar18);
          dVar22 = in_xd2;
          uVar19 = uVar6;
          dVar20 = CONCAT44D(uVar6,uVar5);
        }
        *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar4;
        if (cVar25 == '\0') {
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),uVar19);
          ar5 = (double *)(unsigned)((int)pdVar7 + 0x34);
        }
        else {
          dVar15 = pdVar7[6];
          ar5 = pdVar7 + 7;
        }
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)(F32HI(dVar20) *
                                  F32HI(dVar15) + F32LO(dVar15));
        }
        uVar19 = (undefined4)(D2U(dVar14) >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar15,0);
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar19);
          in_xd2 = dVar22;
          dVar22 = CONCAT44D(uVar19,SUB84(dVar20,0));
        }
        else {
          pdVar7[4] = dVar22;
          dVar15 = *ar5;
          in_xd2 = dVar14;
          dVar22 = dVar14;
        }
        pdVar8 = (double *)(unsigned)((int)pdVar7 + 0x24);
        if (cVar24 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)(F32HI(dVar22) *
                                  F32HI(dVar15) + F32LO(dVar15));
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)pdVar8 = SUB84(dVar15,0);
        }
        else {
          *pdVar8 = in_xd2;
        }
        CacheBlockWriteBack(pdVar8);
        if (cVar25 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar22,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(dVar15,0));
          pdVar7 = pdVar7 + 1;
        }
        else {
          in_dr0 = *pdVar7;
          in_dr2 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          in_dr4 = CONCAT44D(uVar19,SUB84(dVar14,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = in_dr4;
          unaff_r8[1] = in_dr2;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
      }
    }
  }
  else if (uVar3 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c241d90);
    }
    else {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c241be8);
    }
                    
                    
    uVar6 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)UNRECOVERED_JUMPTABLE))(ar4,(ushort)(*(int *)(fr0_ - 0x34)),vr6,vr7));
    return uVar6;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c2518b4\n.set _FUN_8c2518b4, _FUN_8c2518b4_def\n");
