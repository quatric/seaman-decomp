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
uint FUN_8c24ef30_def(double *ar4,undefined4 ar5,short *ar6,short *ar7)

{
  ring[rp++ & 255] = "FUN_8c24ef30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  short *psVar12;
  double *unaff_r8 = 0;
  short *psVar13;
  short *psVar14;
  ushort *puVar15;
  ushort *puVar16;
  double in_dr0 = 0;
  double dVar17;
  float fVar18;
  float fVar19;
  double in_dr2 = 0;
  undefined4 uVar20;
  undefined4 uVar21;
  double in_dr4 = 0;
  double dVar22;
  double in_xd2 = 0;
  double dVar23;
  double in_xd14 = 0;
  bool bVar24;
  char cVar25;
  char cVar26;
  
  cVar26 = '\0';
  cVar25 = '\0';
  uVar1 = *(ushort *)(unsigned)ar4;
  (*(ushort *)(fr0_ - 0x30)) = uVar1 & 0x3fff;
  uVar5 = 0x3b800000;
  uVar2 = uVar1 & 0xc000;
  psVar13 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)ar4 + 0x14));
  puVar15 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)((int)ar4 + 4));
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)*(ushort *)(unsigned)((int)ar4 + 2) * 3;
    pdVar11 = ar4;
    for ((*(int *)(fr0_ - 0x2c)) = 0; uVar2 = (uint)*(ushort *)(unsigned)((int)ar4 + 2), (*(int *)(fr0_ - 0x2c)) < (int)uVar2;
        (*(int *)(fr0_ - 0x2c)) = (*(int *)(fr0_ - 0x2c)) + 1) {
      pdVar7 = (double *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)*puVar15 * 0x20);
      puVar16 = puVar15 + 2;
      pdVar8 = (double *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)puVar15[1] * 0x20);
      puVar15 = puVar15 + 3;
      pdVar9 = (double *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)*puVar16 * 0x20);
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
        if (cVar26 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)((int)pdVar8 + 4);
          dVar23 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)((int)pdVar7 + 4));
          dVar22 = CONCAT44D(uVar21,SUB84(in_dr4,0));
        }
        else {
          dVar23 = *(double *)(unsigned)((int)pdVar8 + 4);
          in_xd2 = *(double *)(unsigned)((int)pdVar7 + 4);
          uVar21 = (undefined4)(D2U(dVar23) >> 0x20);
          dVar22 = dVar23;
        }
        if (cVar25 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) - F32LO(dVar23),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 - dVar23;
        }
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(pdVar9 + 1));
          dVar22 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)(pdVar8 + 1));
        }
        else {
          in_xd2 = pdVar9[1];
        }
        fVar18 = F32LO(dVar22);
        if (cVar25 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),F32LO(dVar23) - fVar18);
        }
        else {
          dVar23 = dVar23 - dVar22;
        }
        if (cVar26 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar18);
        }
        if (cVar25 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) * F32LO(dVar23),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 * dVar23;
        }
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1));
        }
        else {
          in_xd2 = pdVar7[1];
        }
        if (cVar25 == '\0') {
          dVar17 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar23));
        }
        else {
          dVar17 = in_dr0 - dVar23;
        }
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar9 + 4));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)pdVar9 + 4);
        }
        if (cVar25 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                    F32LO(dVar23) - F32HI(dVar22));
        }
        else {
          dVar23 = dVar23 - dVar22;
        }
        uVar2 = (uint)(D2U(dVar23) >> 0x20);
        dVar22 = dVar23;
        if (cVar26 == '\0') {
          dVar22 = CONCAT44D(uVar2,fVar18);
        }
        if (cVar25 == '\0') {
          in_dr0 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                    F32LO(dVar17) * F32LO(dVar23));
        }
        else {
          in_dr0 = dVar17 * dVar23;
        }
        in_dr2 = (double)((ulonglong)uVar2 << 0x20);
        if (cVar25 == '\0') {
          fVar18 = F32HI(dVar22) - F32LO(in_dr0);
          in_dr4 = CONCAT44D(fVar18,SUB84(dVar22,0));
          bVar24 = 0.0 < fVar18;
        }
        else {
          in_dr4 = dVar22 - in_dr0;
          bVar24 = in_dr2 < in_dr4;
        }
        if (!bVar24) goto LAB_8c24f04c;
      }
      else {
LAB_8c24f04c:
        uVar4 = SUB84(in_dr0,0);
        uVar20 = (undefined4)((ulonglong)in_dr2 >> 0x20);
        *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
        CacheBlockWriteBack(pdVar7);
        uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar26 == '\0') {
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar7,pdVar11,ar6,ar7));
        dVar23 = in_xd14;
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D(uVar5,uVar21);
        }
        *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar3;
        fVar18 = F32HI(dVar23);
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(uVar20,(float)(int)*psVar13 * fVar18);
        }
        else {
          dVar22 = CONCAT44D(uVar20,(float)(int)*psVar13) * dVar23;
        }
        if (cVar26 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar22,0);
        }
        else {
          pdVar7[4] = in_xd2;
        }
        fVar19 = (float)(int)psVar13[1];
        if (cVar25 == '\0') {
          fVar19 = fVar19 * fVar18;
        }
        else {
          fVar19 = SUB84(CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar19) * dVar23,0);
        }
        if (cVar26 == '\0') {
          *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar19;
        }
        else {
          *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar7 + 4);
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar4);
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar19);
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar23 = *pdVar7;
          dVar22 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar26 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar21;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar22) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar23) >> 0x20);
        }
        else {
          dVar17 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar17;
          unaff_r8[1] = dVar22;
          *unaff_r8 = dVar23;
        }
        *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
        CacheBlockWriteBack(pdVar8);
        uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar26 == '\0') {
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar8,psVar13 + 1,ar6,ar7));
        dVar17 = in_xd14;
        if (cVar26 == '\0') {
          dVar17 = CONCAT44D(uVar5,uVar21);
        }
        *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar4;
        uVar21 = (undefined4)(D2U(dVar22) >> 0x20);
        fVar18 = F32HI(dVar17);
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(uVar21,(float)(int)psVar13[2] * fVar18);
        }
        else {
          dVar22 = CONCAT44D(uVar21,(float)(int)psVar13[2]) * dVar17;
        }
        if (cVar26 == '\0') {
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar22,0);
        }
        else {
          pdVar8[4] = in_xd2;
        }
        pdVar11 = (double *)(unsigned)((int)pdVar8 + 0x24);
        if (cVar25 == '\0') {
          fVar18 = (float)(int)psVar13[3] * fVar18;
        }
        else {
          fVar18 = SUB84(CONCAT44D((int)(D2U(dVar22) >> 0x20),(float)(int)psVar13[3]) *
                         dVar17,0);
        }
        if (cVar26 == '\0') {
          *(float *)(unsigned)pdVar11 = fVar18;
        }
        else {
          *pdVar11 = in_xd2;
        }
        CacheBlockWriteBack(pdVar8 + 4);
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar23,0));
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),fVar18);
          pdVar8 = pdVar8 + 1;
        }
        else {
          dVar23 = *pdVar8;
          dVar22 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar26 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar21;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar22) >> 0x20);
          pdVar8 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar8 = (int)(D2U(dVar23) >> 0x20);
        }
        else {
          dVar17 = pdVar8[2];
          unaff_r8[7] = pdVar8[3];
          unaff_r8[6] = dVar17;
          unaff_r8[5] = dVar22;
          pdVar8 = unaff_r8 + 4;
          *pdVar8 = dVar23;
        }
        *(undefined4 *)(unsigned)pdVar9 = 0xf0000000;
        CacheBlockWriteBack(pdVar9);
        uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar26 == '\0') {
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar9,pdVar11,ar6,ar7));
        dVar17 = in_xd14;
        if (cVar26 == '\0') {
          dVar17 = CONCAT44D(uVar5,uVar21);
        }
        *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar4;
        uVar21 = (undefined4)(D2U(dVar22) >> 0x20);
        fVar18 = F32HI(dVar17);
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(uVar21,(float)(int)psVar13[4] * fVar18);
        }
        else {
          dVar22 = CONCAT44D(uVar21,(float)(int)psVar13[4]) * dVar17;
        }
        if (cVar26 == '\0') {
          *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar22,0);
        }
        else {
          pdVar9[4] = in_xd2;
        }
        pdVar11 = (double *)(unsigned)((int)pdVar9 + 0x24);
        if (cVar25 == '\0') {
          fVar18 = (float)(int)psVar13[5] * fVar18;
        }
        else {
          fVar18 = SUB84(CONCAT44D((int)(D2U(dVar22) >> 0x20),(float)(int)psVar13[5]) *
                         dVar17,0);
        }
        if (cVar26 == '\0') {
          *(float *)(unsigned)pdVar11 = fVar18;
        }
        else {
          *pdVar11 = in_xd2;
        }
        CacheBlockWriteBack(pdVar9 + 4);
        if (cVar26 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar23,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),fVar18);
          pdVar9 = pdVar9 + 1;
        }
        else {
          in_dr0 = *pdVar9;
          in_dr2 = pdVar9[1];
          pdVar9 = pdVar9 + 2;
        }
        if (cVar26 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar9 + 2);
          in_dr4 = CONCAT44D(uVar21,SUB84(dVar17,0));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
          *(undefined4 *)(unsigned)(pdVar8 + 7) = uVar21;
          *(int *)(unsigned)((int)pdVar8 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar9[2];
          pdVar8[7] = pdVar9[3];
          pdVar8[6] = in_dr4;
          pdVar8[5] = in_dr2;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = in_dr0;
        }
        unaff_r8 = pdVar8 + 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
      }
      psVar13 = psVar13 + 6;
    }
  }
  else if (uVar2 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)*(ushort *)(unsigned)((int)ar4 + 2) * 4;
    (*(int *)(fr0_ - 0x24)) = 0;
    pdVar11 = ar4;
    while( true ) {
      uVar21 = SUB84(in_dr4,0);
      uVar2 = (uint)*(ushort *)(unsigned)((int)ar4 + 2);
      if ((int)uVar2 <= (*(int *)(fr0_ - 0x24))) break;
      pdVar7 = (double *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)*puVar15 * 0x20);
      pdVar8 = (double *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)puVar15[1] * 0x20);
      puVar16 = puVar15 + 3;
      pdVar9 = (double *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)puVar15[2] * 0x20);
      puVar15 = puVar15 + 4;
      pdVar10 = (double *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)*puVar16 * 0x20);
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
        if (cVar26 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)((int)pdVar8 + 4);
          dVar23 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)((int)pdVar7 + 4));
        }
        else {
          dVar23 = *(double *)(unsigned)((int)pdVar8 + 4);
          in_xd2 = *(double *)(unsigned)((int)pdVar7 + 4);
        }
        if (cVar25 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) - F32LO(dVar23),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 - dVar23;
        }
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(pdVar9 + 1));
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),uVar21);
        }
        else {
          in_xd2 = pdVar9[1];
          dVar22 = pdVar8[1];
        }
        fVar18 = F32HI(dVar22);
        if (cVar25 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),F32LO(dVar23) - fVar18);
        }
        else {
          dVar23 = dVar23 - dVar22;
        }
        if (cVar26 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar18);
        }
        if (cVar25 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) * F32LO(dVar23),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 * dVar23;
        }
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1));
        }
        else {
          in_xd2 = pdVar7[1];
        }
        if (cVar25 == '\0') {
          dVar17 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar23));
        }
        else {
          dVar17 = in_dr0 - dVar23;
        }
        uVar21 = (undefined4)(D2U(dVar23) >> 0x20);
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D(uVar21,SUB84(dVar22,0));
          dVar22 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)((int)pdVar9 + 4));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)pdVar9 + 4);
          dVar22 = dVar23;
        }
        if (cVar25 == '\0') {
          fVar18 = F32LO(dVar22) - F32LO(dVar23);
          dVar22 = CONCAT44D(uVar21,fVar18);
          in_dr0 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) * fVar18);
        }
        else {
          dVar22 = dVar22 - dVar23;
          in_dr0 = dVar17 * dVar22;
        }
        in_dr2 = (double)(D2U(dVar22) & 0xffffffff00000000);
        if (cVar25 == '\0') {
          fVar18 = F32HI(dVar23) - F32LO(in_dr0);
          in_dr4 = CONCAT44D(fVar18,SUB84(dVar23,0));
          bVar24 = 0.0 < fVar18;
        }
        else {
          in_dr4 = dVar23 - in_dr0;
          bVar24 = in_dr2 < in_dr4;
        }
        if (!bVar24) goto LAB_8c24f268;
      }
      else {
LAB_8c24f268:
        uVar4 = SUB84(in_dr0,0);
        uVar20 = (undefined4)((ulonglong)in_dr2 >> 0x20);
        *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
        CacheBlockWriteBack(pdVar7);
        uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar26 == '\0') {
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar7,pdVar11,ar6,ar7));
        dVar23 = in_xd14;
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D(uVar5,uVar21);
        }
        *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar3;
        fVar18 = F32HI(dVar23);
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(uVar20,(float)(int)*psVar13 * fVar18);
        }
        else {
          dVar22 = CONCAT44D(uVar20,(float)(int)*psVar13) * dVar23;
        }
        if (cVar26 == '\0') {
          *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar22,0);
        }
        else {
          pdVar7[4] = in_xd2;
        }
        fVar19 = (float)(int)psVar13[1];
        if (cVar25 == '\0') {
          fVar19 = fVar19 * fVar18;
        }
        else {
          fVar19 = SUB84(CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar19) * dVar23,0);
        }
        if (cVar26 == '\0') {
          *(float *)(unsigned)((int)pdVar7 + 0x24) = fVar19;
        }
        else {
          *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar7 + 4);
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar4);
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar19);
          pdVar7 = pdVar7 + 1;
        }
        else {
          dVar23 = *pdVar7;
          dVar22 = pdVar7[1];
          pdVar7 = pdVar7 + 2;
        }
        if (cVar26 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar21;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar22) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar23) >> 0x20);
        }
        else {
          dVar17 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar17;
          unaff_r8[1] = dVar22;
          *unaff_r8 = dVar23;
        }
        *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
        CacheBlockWriteBack(pdVar8);
        uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar26 == '\0') {
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar8,psVar13 + 1,ar6,ar7));
        dVar17 = in_xd14;
        if (cVar26 == '\0') {
          dVar17 = CONCAT44D(uVar5,uVar21);
        }
        *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar4;
        uVar21 = (undefined4)(D2U(dVar22) >> 0x20);
        fVar18 = F32HI(dVar17);
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(uVar21,(float)(int)psVar13[2] * fVar18);
        }
        else {
          dVar22 = CONCAT44D(uVar21,(float)(int)psVar13[2]) * dVar17;
        }
        if (cVar26 == '\0') {
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar22,0);
        }
        else {
          pdVar8[4] = in_xd2;
        }
        pdVar11 = (double *)(unsigned)((int)pdVar8 + 0x24);
        if (cVar25 == '\0') {
          fVar18 = (float)(int)psVar13[3] * fVar18;
        }
        else {
          fVar18 = SUB84(CONCAT44D((int)(D2U(dVar22) >> 0x20),(float)(int)psVar13[3]) *
                         dVar17,0);
        }
        if (cVar26 == '\0') {
          *(float *)(unsigned)pdVar11 = fVar18;
        }
        else {
          *pdVar11 = in_xd2;
        }
        CacheBlockWriteBack(pdVar8 + 4);
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar23,0));
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),fVar18);
          pdVar8 = pdVar8 + 1;
        }
        else {
          dVar23 = *pdVar8;
          dVar22 = pdVar8[1];
          pdVar8 = pdVar8 + 2;
        }
        if (cVar26 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar21;
          *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar22) >> 0x20);
          pdVar8 = unaff_r8 + 6;
          *(int *)(unsigned)pdVar8 = (int)(D2U(dVar23) >> 0x20);
        }
        else {
          dVar17 = pdVar8[2];
          unaff_r8[7] = pdVar8[3];
          unaff_r8[6] = dVar17;
          unaff_r8[5] = dVar22;
          pdVar8 = unaff_r8 + 4;
          *pdVar8 = dVar23;
        }
        *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
        CacheBlockWriteBack(pdVar9);
        uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar26 == '\0') {
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar9,pdVar11,ar6,ar7));
        dVar17 = in_xd14;
        if (cVar26 == '\0') {
          dVar17 = CONCAT44D(uVar5,uVar21);
        }
        *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar4;
        uVar21 = (undefined4)(D2U(dVar22) >> 0x20);
        fVar18 = F32HI(dVar17);
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(uVar21,(float)(int)psVar13[4] * fVar18);
        }
        else {
          dVar22 = CONCAT44D(uVar21,(float)(int)psVar13[4]) * dVar17;
        }
        if (cVar26 == '\0') {
          *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar22,0);
        }
        else {
          pdVar9[4] = in_xd2;
        }
        fVar19 = (float)(int)psVar13[5];
        if (cVar25 == '\0') {
          fVar19 = fVar19 * fVar18;
        }
        else {
          fVar19 = SUB84(CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar19) * dVar17,0);
        }
        if (cVar26 == '\0') {
          *(float *)(unsigned)((int)pdVar9 + 0x24) = fVar19;
        }
        else {
          *(double *)(unsigned)((int)pdVar9 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar9 + 4);
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar23,0));
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),fVar19);
          pdVar9 = pdVar9 + 1;
        }
        else {
          dVar23 = *pdVar9;
          dVar22 = pdVar9[1];
          pdVar9 = pdVar9 + 2;
        }
        if (cVar26 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar9 + 2);
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
          *(undefined4 *)(unsigned)(pdVar8 + 7) = uVar21;
          *(int *)(unsigned)((int)pdVar8 + 0x34) = (int)(D2U(dVar22) >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)(unsigned)pdVar8 = (int)(D2U(dVar23) >> 0x20);
        }
        else {
          dVar17 = pdVar9[2];
          pdVar8[7] = pdVar9[3];
          pdVar8[6] = dVar17;
          pdVar8[5] = dVar22;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = dVar23;
        }
        *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
        CacheBlockWriteBack(pdVar10);
        uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar26 == '\0') {
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar10,psVar13 + 5,ar6,ar7));
        dVar17 = in_xd14;
        if (cVar26 == '\0') {
          dVar17 = CONCAT44D(uVar5,uVar21);
        }
        *(undefined4 *)(unsigned)(pdVar10 + 5) = uVar4;
        pdVar11 = (double *)(unsigned)(psVar13 + 7);
        uVar21 = (undefined4)(D2U(dVar22) >> 0x20);
        fVar18 = F32HI(dVar17);
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(uVar21,(float)(int)psVar13[6] * fVar18);
        }
        else {
          dVar22 = CONCAT44D(uVar21,(float)(int)psVar13[6]) * dVar17;
        }
        if (cVar26 == '\0') {
          *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar22,0);
        }
        else {
          pdVar10[4] = in_xd2;
        }
        if (cVar25 == '\0') {
          fVar18 = (float)(int)(short)*(ushort *)(unsigned)pdVar11 * fVar18;
        }
        else {
          fVar18 = SUB84(CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                          (float)(int)(short)*(ushort *)(unsigned)pdVar11) * dVar17,0);
        }
        if (cVar26 == '\0') {
          *(float *)(unsigned)((int)pdVar10 + 0x24) = fVar18;
        }
        else {
          *(double *)(unsigned)((int)pdVar10 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar10 + 4);
        if (cVar26 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar23,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),fVar18);
          pdVar10 = pdVar10 + 1;
        }
        else {
          in_dr0 = *pdVar10;
          in_dr2 = pdVar10[1];
          pdVar10 = pdVar10 + 2;
        }
        if (cVar26 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar10 + 2);
          in_dr4 = CONCAT44D(uVar21,SUB84(dVar17,0));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
          *(undefined4 *)(unsigned)(pdVar8 + 7) = uVar21;
          *(int *)(unsigned)((int)pdVar8 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
          pdVar8 = pdVar8 + 6;
          *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar10[2];
          pdVar8[7] = pdVar10[3];
          pdVar8[6] = in_dr4;
          pdVar8[5] = in_dr2;
          pdVar8 = pdVar8 + 4;
          *pdVar8 = in_dr0;
        }
        unaff_r8 = pdVar8 + 4;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
      }
      psVar13 = psVar13 + 8;
      (*(int *)(fr0_ - 0x24)) = (*(int *)(fr0_ - 0x24)) + 1;
    }
  }
  else if (uVar2 == 0x8000) {
    iVar6 = 0;
    while( true ) {
      uVar21 = SUB84(in_dr4,0);
      uVar2 = (uint)*(ushort *)(unsigned)((int)ar4 + 2);
      if ((int)uVar2 <= iVar6) break;
      puVar16 = puVar15 + 1;
      uVar2 = (uint)*puVar15;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar2;
      psVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
        ar7 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)puVar15[2] * 0x20;
        ar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)*puVar16 * 0x20;
        psVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)puVar15[3] * 0x20;
        if (cVar26 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(ar7 + 2);
          dVar23 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)(ar6 + 2));
        }
        else {
          dVar23 = *(double *)(unsigned)(ar7 + 2);
          in_xd2 = *(double *)(unsigned)(ar6 + 2);
        }
        if (cVar25 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) - F32LO(dVar23),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 - dVar23;
        }
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(psVar12 + 4));
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(ar7 + 4),uVar21);
        }
        else {
          in_xd2 = *(double *)(unsigned)(psVar12 + 4);
          dVar22 = *(double *)(unsigned)(ar7 + 4);
        }
        fVar18 = F32HI(dVar22);
        if (cVar25 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),F32LO(dVar23) - fVar18);
        }
        else {
          dVar23 = dVar23 - dVar22;
        }
        if (cVar26 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar18);
        }
        if (cVar25 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) * F32LO(dVar23),
                                    SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 * dVar23;
        }
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)(ar6 + 4));
        }
        else {
          in_xd2 = *(double *)(unsigned)(ar6 + 4);
        }
        if (cVar25 == '\0') {
          dVar17 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar23));
        }
        else {
          dVar17 = in_dr0 - dVar23;
        }
        uVar21 = (undefined4)(D2U(dVar23) >> 0x20);
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D(uVar21,SUB84(dVar22,0));
          dVar22 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)(psVar12 + 2));
        }
        else {
          in_xd2 = *(double *)(unsigned)(psVar12 + 2);
          dVar22 = dVar23;
        }
        if (cVar25 == '\0') {
          fVar18 = F32LO(dVar22) - F32LO(dVar23);
          dVar22 = CONCAT44D(uVar21,fVar18);
          in_dr0 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) * fVar18);
        }
        else {
          dVar22 = dVar22 - dVar23;
          in_dr0 = dVar17 * dVar22;
        }
        in_dr2 = (double)(D2U(dVar22) & 0xffffffff00000000);
        if (cVar25 == '\0') {
          fVar18 = F32HI(dVar23) - F32LO(in_dr0);
          in_dr4 = CONCAT44D(fVar18,SUB84(dVar23,0));
          bVar24 = 0.0 < fVar18;
        }
        else {
          in_dr4 = dVar23 - in_dr0;
          bVar24 = in_dr2 < in_dr4;
        }
        if (!bVar24) goto LAB_8c24f4c0;
        puVar15 = puVar16 + uVar2;
        psVar12 = psVar13 + uVar2 * 2;
      }
      else {
LAB_8c24f4c0:
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar2;
        (*(int *)(fr0_ - 0x34)) = 0;
        psVar14 = psVar13;
        if (0 < (int)(uVar2 - 1)) {
          do {
            uVar4 = SUB84(in_dr0,0);
            uVar20 = (undefined4)((ulonglong)in_dr2 >> 0x20);
            uVar1 = *puVar16;
            puVar16 = puVar16 + 1;
            pdVar11 = (double *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)uVar1 * 0x20);
            *(undefined4 *)(unsigned)pdVar11 = 0xe0000000;
            CacheBlockWriteBack(pdVar11);
            uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            if (cVar26 == '\0') {
              uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            }
            uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar11,psVar12,ar6,ar7));
            dVar23 = in_xd14;
            if (cVar26 == '\0') {
              dVar23 = CONCAT44D(uVar5,uVar21);
            }
            psVar13 = psVar14 + 2;
            *(undefined4 *)(unsigned)(pdVar11 + 5) = uVar3;
            psVar12 = psVar14 + 1;
            fVar18 = F32HI(dVar23);
            if (cVar25 == '\0') {
              dVar22 = CONCAT44D(uVar20,(float)(int)*psVar14 * fVar18);
            }
            else {
              dVar22 = CONCAT44D(uVar20,(float)(int)*psVar14) * dVar23;
            }
            if (cVar26 == '\0') {
              *(int *)(unsigned)(pdVar11 + 4) = SUB84(dVar22,0);
            }
            else {
              pdVar11[4] = in_xd2;
            }
            if (cVar25 == '\0') {
              fVar18 = (float)(int)*psVar12 * fVar18;
            }
            else {
              fVar18 = SUB84(CONCAT44D((int)(D2U(dVar22) >> 0x20),(float)(int)*psVar12)
                             * dVar23,0);
            }
            if (cVar26 == '\0') {
              *(float *)(unsigned)((int)pdVar11 + 0x24) = fVar18;
            }
            else {
              *(double *)(unsigned)((int)pdVar11 + 0x24) = in_xd2;
            }
            CacheBlockWriteBack(pdVar11 + 4);
            if (cVar26 == '\0') {
              in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,uVar4);
              in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),fVar18);
              pdVar11 = pdVar11 + 1;
            }
            else {
              in_dr0 = *pdVar11;
              in_dr2 = pdVar11[1];
              pdVar11 = pdVar11 + 2;
            }
            if (cVar26 == '\0') {
              uVar21 = *(undefined4 *)(unsigned)(pdVar11 + 2);
              *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar11 + 0x14);
              *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar21;
              *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
              unaff_r8 = unaff_r8 + 2;
              *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              dVar23 = pdVar11[2];
              unaff_r8[3] = pdVar11[3];
              unaff_r8[2] = dVar23;
              unaff_r8[1] = in_dr2;
              *unaff_r8 = in_dr0;
            }
            unaff_r8 = unaff_r8 + 4;
            (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
            psVar14 = psVar13;
          } while ((*(int *)(fr0_ - 0x34)) < (int)(uVar2 - 1));
        }
        uVar4 = SUB84(in_dr0,0);
        uVar20 = (undefined4)((ulonglong)in_dr2 >> 0x20);
        puVar15 = puVar16 + 1;
        pdVar11 = (double *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)*puVar16 * 0x20);
        *(undefined4 *)(unsigned)pdVar11 = 0xf0000000;
        CacheBlockWriteBack(pdVar11);
        uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar26 == '\0') {
          uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), float_to_color_u8(pdVar11,psVar12,ar6,ar7));
        dVar23 = in_xd14;
        if (cVar26 == '\0') {
          dVar23 = CONCAT44D(uVar5,uVar21);
        }
        psVar12 = psVar13 + 2;
        *(undefined4 *)(unsigned)(pdVar11 + 5) = uVar3;
        fVar18 = F32HI(dVar23);
        if (cVar25 == '\0') {
          dVar22 = CONCAT44D(uVar20,(float)(int)*psVar13 * fVar18);
        }
        else {
          dVar22 = CONCAT44D(uVar20,(float)(int)*psVar13) * dVar23;
        }
        if (cVar26 == '\0') {
          *(int *)(unsigned)(pdVar11 + 4) = SUB84(dVar22,0);
        }
        else {
          pdVar11[4] = in_xd2;
        }
        if (cVar25 == '\0') {
          fVar18 = (float)(int)psVar13[1] * fVar18;
        }
        else {
          fVar18 = SUB84(CONCAT44D((int)(D2U(dVar22) >> 0x20),(float)(int)psVar13[1]) *
                         dVar23,0);
        }
        if (cVar26 == '\0') {
          *(float *)(unsigned)((int)pdVar11 + 0x24) = fVar18;
        }
        else {
          *(double *)(unsigned)((int)pdVar11 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(pdVar11 + 4);
        if (cVar26 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,uVar4);
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),fVar18);
          pdVar11 = pdVar11 + 1;
        }
        else {
          in_dr0 = *pdVar11;
          in_dr2 = pdVar11[1];
          pdVar11 = pdVar11 + 2;
        }
        if (cVar26 == '\0') {
          uVar21 = *(undefined4 *)(unsigned)(pdVar11 + 2);
          in_dr4 = CONCAT44D(uVar21,SUB84(dVar23,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar11 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar21;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar11[2];
          unaff_r8[3] = pdVar11[3];
          unaff_r8[2] = in_dr4;
          unaff_r8[1] = in_dr2;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
      }
      iVar6 = iVar6 + 1;
      psVar13 = psVar12;
    }
  }
  else if (uVar2 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c241114);
    }
    else {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c240f4c);
    }
                    
                    
    uVar5 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)UNRECOVERED_JUMPTABLE))(ar4,(*(ushort *)(fr0_ - 0x30)),vr6,vr7));
    return uVar5;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c24ef30\n.set _FUN_8c24ef30, _FUN_8c24ef30_def\n");
