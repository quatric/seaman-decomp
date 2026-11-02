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
uint FUN_8c24f64c_def(double *ar4,undefined4 ar5,double *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c24f64c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  uint *ar6_00;
  ushort *puVar9;
  uint *ar4_00;
  double *pdVar10;
  short *psVar11;
  short *psVar12;
  int iVar13;
  uint ar7_00;
  int iVar14;
  short *psVar15;
  double *unaff_r8 = 0;
  double *pdVar16;
  int iVar17;
  double *pdVar18;
  uint uVar19;
  int iVar20;
  uint *ar5_00;
  ushort *puVar21;
  ushort *puVar22;
  short *psVar23;
  double in_dr0 = 0;
  float fVar24;
  float fVar25;
  double in_dr2 = 0;
  undefined4 uVar27;
  double dVar26;
  double in_dr4 = 0;
  float fVar29;
  double dVar28;
  undefined4 uVar30;
  double in_dr6 = 0;
  double dVar31;
  double in_dr8 = 0;
  double dVar33;
  double in_dr12 = 0;
  double dVar34;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double dVar35;
  double in_xd8 = 0;
  double in_xd14 = 0;
  bool bVar36;
  char cVar37;
  char cVar38;
  undefined4 uVar32;
  
  cVar38 = '\0';
  cVar37 = '\0';
  uVar5 = 0x3b800000;
  uVar1 = *(ushort *)(unsigned)ar4;
  (*(uint*)((uchar*)&(*(int *)(fr0_ - 0x38))+0)) = uVar1 & 0x3fff;
  psVar23 = ((short *)(unsigned long)*(unsigned *)(unsigned)((int)ar4 + 0x14));
  uVar2 = uVar1 & 0xc000;
  puVar21 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)((int)ar4 + 4));
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)*(ushort *)(unsigned)((int)ar4 + 2) * 3;
    pdVar10 = ar4;
    for ((*(int *)(fr0_ - 0x34)) = 0; uVar2 = (uint)*(ushort *)(unsigned)((int)ar4 + 2), (*(int *)(fr0_ - 0x34)) < (int)uVar2;
        (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1) {
      pdVar7 = (double *)(unsigned)((uint)*puVar21 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar9 = puVar21 + 2;
      pdVar6 = (double *)(unsigned)((uint)puVar21[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar21 = puVar21 + 3;
      pdVar16 = (double *)(unsigned)((uint)*puVar9 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar7 & *(uint *)(unsigned)pdVar6 & *(uint *)(unsigned)pdVar16 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar7 | *(uint *)(unsigned)pdVar6 | *(uint *)(unsigned)pdVar16) & 1) == 0) {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            if (cVar38 == '\0') {
              fVar29 = *(float *)(unsigned)((int)pdVar6 + 4);
              dVar35 = *(double *)(unsigned)((int)pdVar6 + 4);
              dVar28 = CONCAT44D(fVar29,*(undefined4 *)(unsigned)((int)pdVar7 + 4));
            }
            else {
              in_xd2 = *(double *)(unsigned)((int)pdVar7 + 4);
              dVar28 = *(double *)(unsigned)((int)pdVar6 + 4);
              dVar35 = pdVar6[1];
              fVar29 = F32LO(dVar35);
            }
            if (cVar37 == '\0') {
              dVar28 = CONCAT44D(F32HI(dVar28) - F32LO(dVar28),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 - dVar28;
            }
            fVar25 = F32HI(dVar35);
            if (cVar38 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar16 + 1));
              in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar25);
            }
            else {
              in_xd2 = pdVar16[1];
              in_xd0 = dVar35;
            }
            if (cVar37 == '\0') {
              fVar25 = F32LO(dVar28) - fVar25;
              dVar28 = CONCAT44D(F32HI(dVar28) * fVar25,fVar25);
            }
            else {
              dVar28 = (dVar28 - dVar35) * (dVar28 - dVar35);
            }
            if (cVar38 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1)
                                       );
            }
            else {
              in_xd2 = pdVar7[1];
            }
            if (cVar37 == '\0') {
              dVar26 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                        F32LO(in_dr0) - F32LO(dVar28));
            }
            else {
              dVar26 = in_dr0 - dVar28;
            }
            if (cVar38 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        *(undefined4 *)(unsigned)((int)pdVar16 + 4));
            }
            else {
              in_xd2 = *(double *)(unsigned)((int)pdVar16 + 4);
            }
            if (cVar37 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),F32LO(dVar28) - fVar29);
            }
            else {
              dVar28 = dVar28 - dVar35;
            }
            uVar2 = (uint)(D2U(dVar28) >> 0x20);
            dVar35 = dVar28;
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D(uVar2,fVar29);
            }
            if (cVar37 == '\0') {
              in_dr0 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                        F32LO(dVar26) * F32LO(dVar28));
            }
            else {
              in_dr0 = dVar26 * dVar28;
            }
            in_dr2 = (double)((ulonglong)uVar2 << 0x20);
            if (cVar37 == '\0') {
              fVar29 = F32HI(dVar35) - F32LO(in_dr0);
              in_dr4 = CONCAT44D(fVar29,SUB84(dVar35,0));
              bVar36 = 0.0 < fVar29;
            }
            else {
              in_dr4 = dVar35 - in_dr0;
              bVar36 = in_dr2 < in_dr4;
            }
            if (bVar36) goto LAB_8c24f980;
          }
          uVar30 = SUB84(in_dr0,0);
          uVar27 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
          CacheBlockWriteBack(pdVar7);
          uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar38 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
            uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar3 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar7,pdVar10,ar6,ar7));
          dVar35 = in_xd14;
          if (cVar38 == '\0') {
            dVar35 = CONCAT44D(uVar5,uVar32);
          }
          *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar3;
          fVar29 = F32HI(dVar35);
          if (cVar37 == '\0') {
            dVar28 = CONCAT44D(uVar27,(float)(int)*psVar23 * fVar29);
          }
          else {
            dVar28 = CONCAT44D(uVar27,(float)(int)*psVar23) * dVar35;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          pdVar10 = (double *)(unsigned)((int)pdVar7 + 0x24);
          if (cVar37 == '\0') {
            fVar29 = (float)(int)psVar23[1] * fVar29;
          }
          else {
            fVar29 = SUB84(CONCAT44D((int)(D2U(dVar28) >> 0x20),(float)(int)psVar23[1])
                           * dVar35,0);
          }
          if (cVar38 == '\0') {
            *(float *)(unsigned)pdVar10 = fVar29;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar7 + 4);
          if (cVar38 == '\0') {
            dVar35 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar30);
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar29);
            pdVar7 = pdVar7 + 1;
          }
          else {
            dVar35 = *pdVar7;
            dVar28 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar32;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar28) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar35) >> 0x20);
          }
          else {
            dVar26 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar26;
            unaff_r8[1] = dVar28;
            *unaff_r8 = dVar35;
          }
          *(undefined4 *)(unsigned)pdVar6 = 0xe0000000;
          CacheBlockWriteBack(pdVar6);
          uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar38 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
            uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar30 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar6,pdVar10,ar6,ar7));
          dVar26 = in_xd14;
          if (cVar38 == '\0') {
            dVar26 = CONCAT44D(uVar5,uVar32);
          }
          *(undefined4 *)(unsigned)(pdVar6 + 5) = uVar30;
          uVar32 = (undefined4)(D2U(dVar28) >> 0x20);
          fVar29 = F32HI(dVar26);
          if (cVar37 == '\0') {
            dVar28 = CONCAT44D(uVar32,(float)(int)psVar23[2] * fVar29);
          }
          else {
            dVar28 = CONCAT44D(uVar32,(float)(int)psVar23[2]) * dVar26;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar6 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar6[4] = in_xd2;
          }
          pdVar10 = (double *)(unsigned)((int)pdVar6 + 0x24);
          if (cVar37 == '\0') {
            fVar29 = (float)(int)psVar23[3] * fVar29;
          }
          else {
            fVar29 = SUB84(CONCAT44D((int)(D2U(dVar28) >> 0x20),(float)(int)psVar23[3])
                           * dVar26,0);
          }
          if (cVar38 == '\0') {
            *(float *)(unsigned)pdVar10 = fVar29;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar6 + 4);
          if (cVar38 == '\0') {
            dVar35 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(dVar35,0));
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),fVar29);
            pdVar6 = pdVar6 + 1;
          }
          else {
            dVar35 = *pdVar6;
            dVar28 = pdVar6[1];
            pdVar6 = pdVar6 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(unsigned)(pdVar6 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar32;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar28) >> 0x20);
            pdVar6 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar6 = (int)(D2U(dVar35) >> 0x20);
          }
          else {
            dVar26 = pdVar6[2];
            unaff_r8[7] = pdVar6[3];
            unaff_r8[6] = dVar26;
            unaff_r8[5] = dVar28;
            pdVar6 = unaff_r8 + 4;
            *pdVar6 = dVar35;
          }
          *(undefined4 *)(unsigned)pdVar16 = 0xf0000000;
          CacheBlockWriteBack(pdVar16);
          uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar38 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
            uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar30 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar16,pdVar10,ar6,ar7));
          dVar26 = in_xd14;
          if (cVar38 == '\0') {
            dVar26 = CONCAT44D(uVar5,uVar32);
          }
          *(undefined4 *)(unsigned)(pdVar16 + 5) = uVar30;
          uVar32 = (undefined4)(D2U(dVar28) >> 0x20);
          fVar29 = F32HI(dVar26);
          if (cVar37 == '\0') {
            dVar28 = CONCAT44D(uVar32,(float)(int)psVar23[4] * fVar29);
          }
          else {
            dVar28 = CONCAT44D(uVar32,(float)(int)psVar23[4]) * dVar26;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar16 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar16[4] = in_xd2;
          }
          pdVar10 = (double *)(unsigned)((int)pdVar16 + 0x24);
          if (cVar37 == '\0') {
            fVar29 = (float)(int)psVar23[5] * fVar29;
          }
          else {
            fVar29 = SUB84(CONCAT44D((int)(D2U(dVar28) >> 0x20),(float)(int)psVar23[5])
                           * dVar26,0);
          }
          if (cVar38 == '\0') {
            *(float *)(unsigned)pdVar10 = fVar29;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar16 + 4);
          if (cVar38 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar16,SUB84(dVar35,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar16 + 4),fVar29);
            pdVar16 = pdVar16 + 1;
          }
          else {
            in_dr0 = *pdVar16;
            in_dr2 = pdVar16[1];
            pdVar16 = pdVar16 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(unsigned)(pdVar16 + 2);
            in_dr4 = CONCAT44D(uVar32,SUB84(dVar26,0));
            *(undefined4 *)(unsigned)((int)pdVar6 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar16 + 0x14);
            *(undefined4 *)(unsigned)(pdVar6 + 7) = uVar32;
            *(int *)(unsigned)((int)pdVar6 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar6 = pdVar6 + 6;
            *(int *)(unsigned)pdVar6 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar16[2];
            pdVar6[7] = pdVar16[3];
            pdVar6[6] = in_dr4;
            pdVar6[5] = in_dr2;
            pdVar6 = pdVar6 + 4;
            *pdVar6 = in_dr0;
          }
          unaff_r8 = pdVar6 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
        }
        else {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            if (cVar38 == '\0') {
              uVar32 = *(undefined4 *)(unsigned)(pdVar6 + 3);
              uVar30 = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
              in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),
                                        *(undefined4 *)(unsigned)((int)pdVar7 + 0x14));
              in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 3)
                                       );
              in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar30);
              dVar26 = CONCAT44D(uVar32,SUB84(in_dr0,0));
              dVar35 = in_xd2;
              dVar28 = *(double *)(unsigned)((int)pdVar6 + 0x14);
            }
            else {
              dVar26 = pdVar6[3];
              dVar35 = *(double *)(unsigned)((int)pdVar6 + 0x14);
              uVar30 = SUB84(dVar26,0);
              uVar32 = (undefined4)(D2U(dVar26) >> 0x20);
              dVar28 = dVar26;
              in_xd6 = dVar35;
            }
            if (cVar37 == '\0') {
              fVar29 = F32LO(in_dr2) * F32LO(in_dr4);
              dVar26 = CONCAT44D(F32HI(dVar26) * F32LO(in_dr8),
                                        SUB84(dVar26,0));
            }
            else {
              fVar29 = SUB84(in_dr2 * in_dr4,0);
              dVar26 = dVar26 * in_dr8;
            }
            if (cVar38 == '\0') {
              dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar6 + 2),SUB84(in_dr4,0));
              in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 2),SUB84(in_dr8,0));
              dVar28 = CONCAT44D(uVar32,fVar29);
            }
            else {
              dVar31 = pdVar6[2];
              in_dr8 = pdVar7[2];
            }
            fVar29 = F32HI(in_dr8);
            if (cVar37 == '\0') {
              dVar28 = CONCAT44D(F32HI(dVar28) * fVar29,SUB84(dVar28,0))
              ;
            }
            else {
              dVar28 = dVar28 * in_dr8;
            }
            uVar32 = (undefined4)(D2U(dVar31) >> 0x20);
            dVar33 = dVar31;
            if (cVar38 == '\0') {
              dVar33 = CONCAT44D(uVar32,SUB84(in_dr12,0));
            }
            if (cVar37 == '\0') {
              dVar26 = CONCAT44D(F32HI(dVar26) - F32LO(dVar28),
                                        SUB84(dVar26,0));
            }
            else {
              dVar26 = dVar26 - dVar28;
            }
            in_xd2 = dVar31;
            if (cVar38 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),uVar32);
              in_xd2 = dVar35;
            }
            if (cVar37 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        F32LO(dVar28) * F32LO(dVar31));
            }
            else {
              dVar28 = dVar28 * dVar31;
            }
            dVar35 = in_xd6;
            if (cVar38 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),uVar30);
              dVar35 = in_xd0;
            }
            in_xd0 = dVar35;
            if (cVar37 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),F32LO(dVar26) * fVar29);
              in_dr12 = CONCAT44D(F32HI(dVar33) * F32LO(in_dr8),
                                         SUB84(dVar33,0));
              fVar29 = F32LO(dVar28) - F32HI(dVar28);
            }
            else {
              dVar26 = dVar26 * in_dr8;
              in_dr12 = dVar33 * in_dr8;
              fVar29 = SUB84(dVar28 - dVar28,0);
            }
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar16 + 0x14),fVar29);
            }
            else {
              dVar35 = *(double *)(unsigned)((int)pdVar16 + 0x14);
            }
            if (cVar37 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                        F32LO(dVar26) - F32HI(in_dr12));
              dVar35 = CONCAT44D(F32HI(dVar35) * F32LO(dVar35),
                                        SUB84(dVar35,0));
            }
            else {
              dVar26 = dVar26 - in_dr12;
              dVar35 = dVar35 * dVar35;
            }
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar16 + 2));
            }
            else {
              in_xd2 = pdVar16[2];
            }
            if (cVar37 == '\0') {
              dVar35 = CONCAT44D(F32HI(dVar26) * F32LO(dVar35) +
                                        F32HI(dVar35),SUB84(dVar35,0));
            }
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar16 + 3));
              in_dr0 = CONCAT44D(SUB84(dVar26,0),SUB84(dVar26,0));
            }
            else {
              in_xd2 = pdVar16[3];
              in_dr0 = in_xd0;
            }
            if (cVar37 == '\0') {
              dVar35 = (double)((ulonglong)
                                (uint)(F32HI(in_dr0) * F32LO(dVar35) +
                                      F32HI(dVar35)) << 0x20);
            }
            in_dr2 = (double)(D2U(dVar35) & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar38 == '\0') {
              in_dr4 = CONCAT44D((int)(D2U(dVar35) >> 0x20),SUB84(dVar31,0));
            }
            if (cVar37 == '\0') {
              bVar36 = 0.0 < F32HI(in_dr4);
            }
            else {
              bVar36 = in_dr2 < in_dr4;
            }
            if (bVar36) goto LAB_8c24f980;
          }
          dVar35 = in_xd14;
          if (cVar38 == '\0') {
            dVar35 = CONCAT44D(uVar5,SUB84(in_dr4,0));
          }
          in_dr4 = dVar35;
          uVar32 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          fVar29 = F32HI(in_dr4);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)*psVar23 * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)*psVar23) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[1] * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[1]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)((int)pdVar7 + 0x24) = SUB84(dVar35,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
          }
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[2] * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[2]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar6 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar6[4] = in_xd2;
          }
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[3] * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[3]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)((int)pdVar6 + 0x24) = SUB84(dVar35,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar6 + 0x24) = in_xd2;
          }
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[4] * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[4]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar16 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar16[4] = in_xd2;
          }
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            in_dr2 = CONCAT44D(uVar32,(float)(int)psVar23[5] * fVar29);
          }
          else {
            in_dr2 = CONCAT44D(uVar32,(float)(int)psVar23[5]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)((int)pdVar16 + 0x24) = SUB84(in_dr2,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar16 + 0x24) = in_xd2;
          }
          (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c23e228(pdVar7,pdVar6,pdVar16,ar7));
          pdVar10 = pdVar6;
          ar6 = pdVar16;
        }
      }
LAB_8c24f980:
      psVar23 = psVar23 + 6;
    }
  }
  else if (uVar2 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)*(ushort *)(unsigned)((int)ar4 + 2) * 4;
    (*(int *)(fr0_ - 0x2c)) = 0;
    pdVar10 = ar4;
    while( true ) {
      uVar32 = SUB84(in_dr4,0);
      uVar2 = (uint)*(ushort *)(unsigned)((int)ar4 + 2);
      if ((int)uVar2 <= (*(int *)(fr0_ - 0x2c))) break;
      pdVar7 = (double *)(unsigned)((uint)*puVar21 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar9 = puVar21 + 3;
      pdVar16 = (double *)(unsigned)((uint)puVar21[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar18 = (double *)(unsigned)((uint)puVar21[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar21 = puVar21 + 4;
      pdVar6 = (double *)(unsigned)((uint)*puVar9 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar7 & *(uint *)(unsigned)pdVar16 & *(uint *)(unsigned)pdVar18 & *(uint *)(unsigned)pdVar6 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar7 | *(uint *)(unsigned)pdVar16 | *(uint *)(unsigned)pdVar18 | *(uint *)(unsigned)pdVar6) & 1) == 0) {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            if (cVar38 == '\0') {
              uVar32 = *(undefined4 *)(unsigned)((int)pdVar16 + 4);
              dVar35 = CONCAT44D(uVar32,*(undefined4 *)(unsigned)((int)pdVar7 + 4));
            }
            else {
              dVar35 = *(double *)(unsigned)((int)pdVar16 + 4);
              in_xd2 = *(double *)(unsigned)((int)pdVar7 + 4);
            }
            if (cVar37 == '\0') {
              dVar35 = CONCAT44D(F32HI(dVar35) - F32LO(dVar35),
                                        SUB84(dVar35,0));
            }
            else {
              dVar35 = dVar35 - dVar35;
            }
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar18 + 1));
              dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar16 + 1),uVar32);
            }
            else {
              in_xd2 = pdVar18[1];
              dVar28 = pdVar16[1];
            }
            fVar29 = F32HI(dVar28);
            if (cVar37 == '\0') {
              dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),F32LO(dVar35) - fVar29);
            }
            else {
              dVar35 = dVar35 - dVar28;
            }
            dVar26 = dVar28;
            if (cVar38 == '\0') {
              in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar29);
              dVar26 = in_xd0;
            }
            in_xd0 = dVar26;
            if (cVar37 == '\0') {
              dVar35 = CONCAT44D(F32HI(dVar35) * F32LO(dVar35),
                                        SUB84(dVar35,0));
            }
            else {
              dVar35 = dVar35 * dVar35;
            }
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),*(undefined4 *)(unsigned)(pdVar7 + 1)
                                       );
            }
            else {
              in_xd2 = pdVar7[1];
            }
            if (cVar37 == '\0') {
              dVar26 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                        F32LO(in_dr0) - F32LO(dVar35));
            }
            else {
              dVar26 = in_dr0 - dVar35;
            }
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),
                                        *(undefined4 *)(unsigned)((int)pdVar18 + 4));
            }
            else {
              in_xd2 = *(double *)(unsigned)((int)pdVar18 + 4);
            }
            if (cVar37 == '\0') {
              dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),
                                        F32LO(dVar35) - F32LO(dVar28));
            }
            else {
              dVar35 = dVar35 - dVar28;
            }
            uVar2 = (uint)(D2U(dVar35) >> 0x20);
            dVar31 = dVar35;
            if (cVar38 == '\0') {
              dVar31 = CONCAT44D(uVar2,SUB84(dVar28,0));
            }
            if (cVar37 == '\0') {
              in_dr0 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                        F32LO(dVar26) * F32LO(dVar35));
            }
            else {
              in_dr0 = dVar26 * dVar35;
            }
            in_dr2 = (double)((ulonglong)uVar2 << 0x20);
            if (cVar37 == '\0') {
              fVar29 = F32HI(dVar31) - F32LO(in_dr0);
              in_dr4 = CONCAT44D(fVar29,SUB84(dVar31,0));
              bVar36 = 0.0 < fVar29;
            }
            else {
              in_dr4 = dVar31 - in_dr0;
              bVar36 = in_dr2 < in_dr4;
            }
            if (bVar36) goto LAB_8c24fd68;
          }
          uVar30 = SUB84(in_dr0,0);
          uVar27 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
          CacheBlockWriteBack(pdVar7);
          uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar38 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
            uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar3 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar7,pdVar10,ar6,ar7));
          dVar35 = in_xd14;
          if (cVar38 == '\0') {
            dVar35 = CONCAT44D(uVar5,uVar32);
          }
          *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar3;
          fVar29 = F32HI(dVar35);
          if (cVar37 == '\0') {
            dVar28 = CONCAT44D(uVar27,(float)(int)*psVar23 * fVar29);
          }
          else {
            dVar28 = CONCAT44D(uVar27,(float)(int)*psVar23) * dVar35;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          pdVar10 = (double *)(unsigned)((int)pdVar7 + 0x24);
          if (cVar37 == '\0') {
            fVar29 = (float)(int)psVar23[1] * fVar29;
          }
          else {
            fVar29 = SUB84(CONCAT44D((int)(D2U(dVar28) >> 0x20),(float)(int)psVar23[1])
                           * dVar35,0);
          }
          if (cVar38 == '\0') {
            *(float *)(unsigned)pdVar10 = fVar29;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar7 + 4);
          if (cVar38 == '\0') {
            dVar35 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar30);
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),fVar29);
            pdVar7 = pdVar7 + 1;
          }
          else {
            dVar35 = *pdVar7;
            dVar28 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar32;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar28) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar35) >> 0x20);
          }
          else {
            dVar26 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar26;
            unaff_r8[1] = dVar28;
            *unaff_r8 = dVar35;
          }
          *(undefined4 *)(unsigned)pdVar16 = 0xe0000000;
          CacheBlockWriteBack(pdVar16);
          uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar38 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
            uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar30 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar16,pdVar10,ar6,ar7));
          dVar26 = in_xd14;
          if (cVar38 == '\0') {
            dVar26 = CONCAT44D(uVar5,uVar32);
          }
          *(undefined4 *)(unsigned)(pdVar16 + 5) = uVar30;
          uVar32 = (undefined4)(D2U(dVar28) >> 0x20);
          fVar29 = F32HI(dVar26);
          if (cVar37 == '\0') {
            dVar28 = CONCAT44D(uVar32,(float)(int)psVar23[2] * fVar29);
          }
          else {
            dVar28 = CONCAT44D(uVar32,(float)(int)psVar23[2]) * dVar26;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar16 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar16[4] = in_xd2;
          }
          pdVar10 = (double *)(unsigned)((int)pdVar16 + 0x24);
          if (cVar37 == '\0') {
            fVar29 = (float)(int)psVar23[3] * fVar29;
          }
          else {
            fVar29 = SUB84(CONCAT44D((int)(D2U(dVar28) >> 0x20),(float)(int)psVar23[3])
                           * dVar26,0);
          }
          if (cVar38 == '\0') {
            *(float *)(unsigned)pdVar10 = fVar29;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar16 + 4);
          if (cVar38 == '\0') {
            dVar35 = CONCAT44D(*(undefined4 *)(unsigned)pdVar16,SUB84(dVar35,0));
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar16 + 4),fVar29);
            pdVar16 = pdVar16 + 1;
          }
          else {
            dVar35 = *pdVar16;
            dVar28 = pdVar16[1];
            pdVar16 = pdVar16 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(unsigned)(pdVar16 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar16 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar32;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar28) >> 0x20);
            pdVar7 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar7 = (int)(D2U(dVar35) >> 0x20);
          }
          else {
            dVar26 = pdVar16[2];
            unaff_r8[7] = pdVar16[3];
            unaff_r8[6] = dVar26;
            unaff_r8[5] = dVar28;
            pdVar7 = unaff_r8 + 4;
            *pdVar7 = dVar35;
          }
          *(undefined4 *)(unsigned)pdVar18 = 0xe0000000;
          CacheBlockWriteBack(pdVar18);
          uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar38 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
            uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar30 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar18,pdVar10,ar6,ar7));
          dVar26 = in_xd14;
          if (cVar38 == '\0') {
            dVar26 = CONCAT44D(uVar5,uVar32);
          }
          *(undefined4 *)(unsigned)(pdVar18 + 5) = uVar30;
          uVar32 = (undefined4)(D2U(dVar28) >> 0x20);
          fVar29 = F32HI(dVar26);
          if (cVar37 == '\0') {
            dVar28 = CONCAT44D(uVar32,(float)(int)psVar23[4] * fVar29);
          }
          else {
            dVar28 = CONCAT44D(uVar32,(float)(int)psVar23[4]) * dVar26;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar18 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar18[4] = in_xd2;
          }
          fVar25 = (float)(int)psVar23[5];
          if (cVar37 == '\0') {
            fVar25 = fVar25 * fVar29;
          }
          else {
            fVar25 = SUB84(CONCAT44D((int)(D2U(dVar28) >> 0x20),fVar25) * dVar26,0);
          }
          if (cVar38 == '\0') {
            *(float *)(unsigned)((int)pdVar18 + 0x24) = fVar25;
          }
          else {
            *(double *)(unsigned)((int)pdVar18 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar18 + 4);
          if (cVar38 == '\0') {
            dVar35 = CONCAT44D(*(undefined4 *)(unsigned)pdVar18,SUB84(dVar35,0));
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar18 + 4),fVar25);
            pdVar18 = pdVar18 + 1;
          }
          else {
            dVar35 = *pdVar18;
            dVar28 = pdVar18[1];
            pdVar18 = pdVar18 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(unsigned)(pdVar18 + 2);
            *(undefined4 *)(unsigned)((int)pdVar7 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar18 + 0x14);
            *(undefined4 *)(unsigned)(pdVar7 + 7) = uVar32;
            *(int *)(unsigned)((int)pdVar7 + 0x34) = (int)(D2U(dVar28) >> 0x20);
            pdVar7 = pdVar7 + 6;
            *(int *)(unsigned)pdVar7 = (int)(D2U(dVar35) >> 0x20);
          }
          else {
            dVar26 = pdVar18[2];
            pdVar7[7] = pdVar18[3];
            pdVar7[6] = dVar26;
            pdVar7[5] = dVar28;
            pdVar7 = pdVar7 + 4;
            *pdVar7 = dVar35;
          }
          *(undefined4 *)(unsigned)pdVar6 = 0xf0000000;
          CacheBlockWriteBack(pdVar6);
          uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar38 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
            uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar30 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar6,psVar23 + 5,ar6,ar7));
          dVar26 = in_xd14;
          if (cVar38 == '\0') {
            dVar26 = CONCAT44D(uVar5,uVar32);
          }
          *(undefined4 *)(unsigned)(pdVar6 + 5) = uVar30;
          pdVar10 = (double *)(unsigned)(psVar23 + 7);
          uVar32 = (undefined4)(D2U(dVar28) >> 0x20);
          fVar29 = F32HI(dVar26);
          if (cVar37 == '\0') {
            dVar28 = CONCAT44D(uVar32,(float)(int)psVar23[6] * fVar29);
          }
          else {
            dVar28 = CONCAT44D(uVar32,(float)(int)psVar23[6]) * dVar26;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar6 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar6[4] = in_xd2;
          }
          if (cVar37 == '\0') {
            fVar29 = (float)(int)(short)*(ushort *)(unsigned)pdVar10 * fVar29;
          }
          else {
            fVar29 = SUB84(CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                            (float)(int)(short)*(ushort *)(unsigned)pdVar10) * dVar26,0);
          }
          if (cVar38 == '\0') {
            *(float *)(unsigned)((int)pdVar6 + 0x24) = fVar29;
          }
          else {
            *(double *)(unsigned)((int)pdVar6 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar6 + 4);
          if (cVar38 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(dVar35,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),fVar29);
            pdVar6 = pdVar6 + 1;
          }
          else {
            in_dr0 = *pdVar6;
            in_dr2 = pdVar6[1];
            pdVar6 = pdVar6 + 2;
          }
          if (cVar38 == '\0') {
            uVar32 = *(undefined4 *)(unsigned)(pdVar6 + 2);
            in_dr4 = CONCAT44D(uVar32,SUB84(dVar26,0));
            *(undefined4 *)(unsigned)((int)pdVar7 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
            *(undefined4 *)(unsigned)(pdVar7 + 7) = uVar32;
            *(int *)(unsigned)((int)pdVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar7 = pdVar7 + 6;
            *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar6[2];
            pdVar7[7] = pdVar6[3];
            pdVar7[6] = in_dr4;
            pdVar7[5] = in_dr2;
            pdVar7 = pdVar7 + 4;
            *pdVar7 = in_dr0;
          }
          unaff_r8 = pdVar7 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
        }
        else {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            if (cVar38 == '\0') {
              uVar32 = *(undefined4 *)(unsigned)(pdVar16 + 3);
              uVar30 = *(undefined4 *)(unsigned)((int)pdVar16 + 0x14);
              dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),
                                        *(undefined4 *)(unsigned)(pdVar7 + 3));
              in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar30);
              dVar31 = CONCAT44D(uVar32,SUB84(in_dr0,0));
              dVar35 = in_xd2;
              dVar26 = *(double *)(unsigned)((int)pdVar16 + 0x14);
            }
            else {
              dVar31 = pdVar16[3];
              dVar35 = *(double *)(unsigned)((int)pdVar16 + 0x14);
              dVar28 = *(double *)(unsigned)((int)pdVar7 + 0x14);
              uVar30 = SUB84(dVar31,0);
              uVar32 = (undefined4)(D2U(dVar31) >> 0x20);
              dVar26 = dVar31;
              in_xd6 = dVar35;
            }
            fVar29 = F32LO(dVar28);
            fVar25 = F32HI(dVar28);
            if (cVar37 == '\0') {
              fVar24 = F32LO(in_dr2) * fVar29;
              dVar31 = CONCAT44D(F32HI(dVar31) * fVar25,SUB84(dVar31,0))
              ;
            }
            else {
              fVar24 = SUB84(in_dr2 * dVar28,0);
              dVar31 = dVar31 * dVar28;
            }
            if (cVar38 == '\0') {
              dVar33 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 2),*(undefined4 *)(unsigned)(pdVar16 + 2));
              dVar26 = CONCAT44D(uVar32,fVar24);
            }
            else {
              in_xd8 = pdVar16[2];
              dVar33 = pdVar7[2];
            }
            fVar24 = F32HI(dVar33);
            if (cVar37 == '\0') {
              dVar26 = CONCAT44D(F32HI(dVar26) * fVar24,SUB84(dVar26,0))
              ;
            }
            else {
              dVar26 = dVar26 * dVar33;
            }
            dVar34 = in_xd8;
            if (cVar38 == '\0') {
              dVar34 = CONCAT44D(SUB84(dVar33,0),SUB84(in_dr12,0));
            }
            if (cVar37 == '\0') {
              dVar31 = CONCAT44D(F32HI(dVar31) - F32LO(dVar26),
                                        SUB84(dVar31,0));
            }
            else {
              dVar31 = dVar31 - dVar26;
            }
            in_xd2 = in_xd8;
            if (cVar38 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),SUB84(dVar33,0));
              in_xd2 = dVar35;
            }
            if (cVar37 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),F32LO(dVar26) * fVar29);
            }
            else {
              dVar26 = dVar26 * dVar28;
            }
            dVar35 = in_xd6;
            if (cVar38 == '\0') {
              dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),uVar30);
              dVar35 = in_xd0;
            }
            in_xd0 = dVar35;
            if (cVar37 == '\0') {
              dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) * fVar24);
              in_dr12 = CONCAT44D(F32HI(dVar34) * fVar25,SUB84(dVar34,0)
                                        );
              fVar25 = F32LO(dVar26) - F32HI(dVar26);
            }
            else {
              dVar31 = dVar31 * dVar33;
              in_dr12 = dVar34 * dVar28;
              fVar25 = SUB84(dVar26 - dVar26,0);
            }
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar18 + 0x14),fVar25);
            }
            else {
              dVar35 = *(double *)(unsigned)((int)pdVar18 + 0x14);
            }
            if (cVar37 == '\0') {
              dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                        F32LO(dVar31) - F32HI(in_dr12));
              dVar35 = CONCAT44D(F32HI(dVar35) * F32LO(dVar35),
                                        SUB84(dVar35,0));
            }
            else {
              dVar31 = dVar31 - in_dr12;
              dVar35 = dVar35 * dVar35;
            }
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar18 + 2));
            }
            else {
              in_xd2 = pdVar18[2];
            }
            if (cVar37 == '\0') {
              dVar35 = CONCAT44D(F32HI(dVar31) * F32LO(dVar35) +
                                        F32HI(dVar35),SUB84(dVar35,0));
            }
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar18 + 3));
              in_dr0 = CONCAT44D(SUB84(dVar31,0),SUB84(dVar31,0));
            }
            else {
              in_xd2 = pdVar18[3];
              in_dr0 = in_xd0;
            }
            if (cVar37 == '\0') {
              dVar35 = (double)((ulonglong)
                                (uint)(F32HI(in_dr0) * F32LO(dVar35) +
                                      F32HI(dVar35)) << 0x20);
            }
            in_dr2 = (double)(D2U(dVar35) & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar38 == '\0') {
              in_dr4 = CONCAT44D((int)(D2U(dVar35) >> 0x20),fVar29);
            }
            if (cVar37 == '\0') {
              bVar36 = 0.0 < F32HI(in_dr4);
            }
            else {
              bVar36 = in_dr2 < in_dr4;
            }
            if (bVar36) goto LAB_8c24fd68;
          }
          dVar35 = in_xd14;
          if (cVar38 == '\0') {
            dVar35 = CONCAT44D(uVar5,SUB84(in_dr4,0));
          }
          in_dr4 = dVar35;
          uVar32 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          fVar29 = F32HI(in_dr4);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)*psVar23 * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)*psVar23) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar7[4] = in_xd2;
          }
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[1] * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[1]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)((int)pdVar7 + 0x24) = SUB84(dVar35,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar7 + 0x24) = in_xd2;
          }
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[2] * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[2]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar16 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar16[4] = in_xd2;
          }
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[3] * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[3]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)((int)pdVar16 + 0x24) = SUB84(dVar35,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar16 + 0x24) = in_xd2;
          }
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[4] * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[4]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar18 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar18[4] = in_xd2;
          }
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[5] * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[5]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)((int)pdVar18 + 0x24) = SUB84(dVar35,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar18 + 0x24) = in_xd2;
          }
          pdVar10 = (double *)(unsigned)(psVar23 + 7);
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[6] * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[6]) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar6 + 4) = SUB84(dVar35,0);
          }
          else {
            pdVar6[4] = in_xd2;
          }
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            in_dr2 = CONCAT44D(uVar32,(float)(int)(short)*(ushort *)(unsigned)pdVar10 * fVar29);
          }
          else {
            in_dr2 = CONCAT44D(uVar32,(float)(int)(short)*(ushort *)(unsigned)pdVar10) * in_dr4;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)((int)pdVar6 + 0x24) = SUB84(in_dr2,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar6 + 0x24) = in_xd2;
          }
          if ((*(uint *)(unsigned)pdVar7 & *(uint *)(unsigned)pdVar16 & *(uint *)(unsigned)pdVar18 & 1) == 0) {
            pdVar10 = pdVar16;
            ar6 = pdVar18;
            (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c23e228(pdVar7,pdVar16,pdVar18,ar7));
          }
          if ((*(uint *)(unsigned)pdVar16 & *(uint *)(unsigned)pdVar18 & *(uint *)(unsigned)pdVar6 & 1) == 0) {
            (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c23e228(pdVar16,pdVar18,pdVar6,ar7));
            pdVar10 = pdVar18;
            ar6 = pdVar6;
          }
        }
      }
LAB_8c24fd68:
      psVar23 = psVar23 + 8;
      (*(int *)(fr0_ - 0x2c)) = (*(int *)(fr0_ - 0x2c)) + 1;
    }
  }
  else if (uVar2 == 0x8000) {
    iVar17 = 0;
    while( true ) {
      uVar32 = SUB84(in_dr6,0);
      uVar2 = (uint)*(ushort *)(unsigned)((int)ar4 + 2);
      if ((int)uVar2 <= iVar17) break;
      ar7_00 = 0;
      puVar22 = puVar21 + 1;
      iVar13 = 0;
      uVar19 = 0xffffffff;
      uVar2 = (uint)*puVar21;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar2;
      puVar9 = puVar22;
      if (uVar2 != 0) {
        do {
          uVar1 = *puVar9;
          puVar9 = puVar9 + 1;
          iVar13 = iVar13 + 1;
          uVar8 = *(uint *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          uVar19 = uVar19 & uVar8;
          ar7_00 = ar7_00 | uVar8;
        } while (iVar13 < (int)uVar2);
      }
      iVar13 = uVar2 * 2;
      if ((uVar19 & 0x3f) == 0) {
        if ((ar7_00 & 1) == 0) {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            iVar14 = (uint)puVar21[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
            ar7_00 = (uint)*puVar22 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D(*(undefined4 *)(unsigned)(iVar14 + 4),SUB84(in_dr4,0));
            }
            else {
              dVar35 = *(double *)(unsigned)(iVar14 + 4);
            }
            uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
            if (cVar38 == '\0') {
              dVar28 = CONCAT44D(uVar32,*(undefined4 *)(unsigned)(ar7_00 + 4));
            }
            else {
              in_xd2 = *(double *)(unsigned)(ar7_00 + 4);
              dVar28 = dVar35;
            }
            if (cVar37 == '\0') {
              dVar28 = CONCAT44D(F32HI(dVar28) - F32LO(dVar28),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 - dVar28;
            }
            iVar20 = (uint)puVar21[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
            if (cVar38 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)(iVar20 + 8)
                                       );
              dVar35 = CONCAT44D(uVar32,*(undefined4 *)(unsigned)(iVar14 + 8));
            }
            else {
              in_xd2 = *(double *)(unsigned)(iVar20 + 8);
              in_xd4 = *(double *)(unsigned)(iVar14 + 8);
            }
            fVar29 = F32LO(dVar35);
            if (cVar37 == '\0') {
              fVar25 = F32LO(dVar28) - fVar29;
              dVar28 = CONCAT44D(F32HI(dVar28) * fVar25,fVar25);
            }
            else {
              dVar28 = (dVar28 - dVar35) * (dVar28 - dVar35);
            }
            if (cVar38 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)(ar7_00 + 8)
                                       );
              in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar29);
            }
            else {
              in_xd2 = *(double *)(unsigned)(ar7_00 + 8);
              in_xd0 = in_xd4;
            }
            if (cVar37 == '\0') {
              dVar26 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                        F32LO(in_dr0) - F32LO(dVar28));
            }
            else {
              dVar26 = in_dr0 - dVar28;
            }
            if (cVar38 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)(iVar20 + 4)
                                       );
            }
            else {
              in_xd2 = *(double *)(unsigned)(iVar20 + 4);
            }
            if (cVar37 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        F32LO(dVar28) - F32HI(dVar35));
            }
            else {
              dVar28 = dVar28 - dVar35;
            }
            uVar19 = (uint)(D2U(dVar28) >> 0x20);
            dVar35 = dVar28;
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D(uVar19,fVar29);
            }
            if (cVar37 == '\0') {
              in_dr0 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                        F32LO(dVar26) * F32LO(dVar28));
            }
            else {
              in_dr0 = dVar26 * dVar28;
            }
            in_dr2 = (double)((ulonglong)uVar19 << 0x20);
            if (cVar37 == '\0') {
              fVar29 = F32HI(dVar35) - F32LO(in_dr0);
              in_dr4 = CONCAT44D(fVar29,SUB84(dVar35,0));
              bVar36 = 0.0 < fVar29;
            }
            else {
              in_dr4 = dVar35 - in_dr0;
              bVar36 = in_dr2 < in_dr4;
            }
            if (bVar36) goto LAB_8c24fffa;
          }
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar2;
          psVar11 = (short *)(unsigned)(uVar2 - 1);
          (*(int *)(fr0_ - 0x38)) = 0;
          psVar12 = psVar11;
          psVar15 = psVar23;
          if (0 < (int)psVar11) {
            do {
              uVar30 = SUB84(in_dr0,0);
              uVar27 = (undefined4)((ulonglong)in_dr2 >> 0x20);
              uVar1 = *puVar22;
              puVar22 = puVar22 + 1;
              pdVar10 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
              CacheBlockWriteBack(pdVar10);
              uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
              if (cVar38 != '\0') {
                in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
                in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
                uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
              }
              uVar3 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar10,psVar12,iVar13,ar7_00));
              dVar35 = in_xd14;
              if (cVar38 == '\0') {
                dVar35 = CONCAT44D(uVar5,uVar32);
              }
              psVar23 = psVar15 + 2;
              *(undefined4 *)(unsigned)(pdVar10 + 5) = uVar3;
              psVar12 = psVar15 + 1;
              fVar29 = F32HI(dVar35);
              if (cVar37 == '\0') {
                dVar28 = CONCAT44D(uVar27,(float)(int)*psVar15 * fVar29);
              }
              else {
                dVar28 = CONCAT44D(uVar27,(float)(int)*psVar15) * dVar35;
              }
              if (cVar38 == '\0') {
                *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar28,0);
              }
              else {
                pdVar10[4] = in_xd2;
              }
              if (cVar37 == '\0') {
                fVar29 = (float)(int)*psVar12 * fVar29;
              }
              else {
                fVar29 = SUB84(CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                                (float)(int)*psVar12) * dVar35,0);
              }
              if (cVar38 == '\0') {
                *(float *)(unsigned)((int)pdVar10 + 0x24) = fVar29;
              }
              else {
                *(double *)(unsigned)((int)pdVar10 + 0x24) = in_xd2;
              }
              CacheBlockWriteBack(pdVar10 + 4);
              if (cVar38 == '\0') {
                in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,uVar30);
                in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),fVar29);
                pdVar10 = pdVar10 + 1;
              }
              else {
                in_dr0 = *pdVar10;
                in_dr2 = pdVar10[1];
                pdVar10 = pdVar10 + 2;
              }
              if (cVar38 == '\0') {
                uVar32 = *(undefined4 *)(unsigned)(pdVar10 + 2);
                *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
                *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar32;
                *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
                unaff_r8 = unaff_r8 + 2;
                *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                dVar35 = pdVar10[2];
                unaff_r8[3] = pdVar10[3];
                unaff_r8[2] = dVar35;
                unaff_r8[1] = in_dr2;
                *unaff_r8 = in_dr0;
              }
              unaff_r8 = unaff_r8 + 4;
              (*(int *)(fr0_ - 0x38)) = (*(int *)(fr0_ - 0x38)) + 1;
              psVar15 = psVar23;
            } while ((*(int *)(fr0_ - 0x38)) < (int)psVar11);
          }
          uVar27 = SUB84(in_dr0,0);
          uVar3 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          puVar21 = puVar22 + 1;
          pdVar10 = (double *)(unsigned)((uint)*puVar22 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
          CacheBlockWriteBack(pdVar10);
          uVar30 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          if (cVar38 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
            uVar30 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            uVar32 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar10,psVar12,iVar13,ar7_00));
          dVar35 = in_xd14;
          if (cVar38 == '\0') {
            dVar35 = CONCAT44D(uVar5,uVar30);
          }
          psVar12 = psVar23 + 2;
          *(undefined4 *)(unsigned)(pdVar10 + 5) = uVar4;
          fVar29 = F32HI(dVar35);
          if (cVar37 == '\0') {
            dVar28 = CONCAT44D(uVar3,(float)(int)*psVar23 * fVar29);
          }
          else {
            dVar28 = CONCAT44D(uVar3,(float)(int)*psVar23) * dVar35;
          }
          if (cVar38 == '\0') {
            *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar28,0);
          }
          else {
            pdVar10[4] = in_xd2;
          }
          if (cVar37 == '\0') {
            fVar29 = (float)(int)psVar23[1] * fVar29;
          }
          else {
            fVar29 = SUB84(CONCAT44D((int)(D2U(dVar28) >> 0x20),(float)(int)psVar23[1])
                           * dVar35,0);
          }
          if (cVar38 == '\0') {
            *(float *)(unsigned)((int)pdVar10 + 0x24) = fVar29;
          }
          else {
            *(double *)(unsigned)((int)pdVar10 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar10 + 4);
          if (cVar38 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,uVar27);
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),fVar29);
            pdVar10 = pdVar10 + 1;
          }
          else {
            in_dr0 = *pdVar10;
            in_dr2 = pdVar10[1];
            pdVar10 = pdVar10 + 2;
          }
          if (cVar38 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(pdVar10 + 2);
            in_dr4 = CONCAT44D(uVar30,SUB84(dVar35,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 0x14),uVar32);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar30;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar10[2];
            in_dr6 = pdVar10[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            iVar14 = (uint)*puVar22 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
            iVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)puVar21[2] * 0x40;
            iVar13 = (uint)puVar21[3] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
            if (cVar38 == '\0') {
              uVar30 = *(undefined4 *)(unsigned)(iVar20 + 0x18);
              dVar35 = CONCAT44D(*(undefined4 *)(unsigned)(iVar14 + 0x14),SUB84(in_dr4,0));
              dVar28 = CONCAT44D(uVar30,SUB84(in_dr0,0));
              in_dr8 = CONCAT44D(uVar30,SUB84(in_dr8,0));
            }
            else {
              dVar28 = *(double *)(unsigned)(iVar20 + 0x18);
              dVar35 = *(double *)(unsigned)(iVar14 + 0x14);
              uVar30 = (undefined4)(D2U(dVar28) >> 0x20);
              in_dr8 = dVar28;
            }
            fVar29 = F32HI(dVar35);
            if (cVar37 == '\0') {
              dVar28 = CONCAT44D(F32HI(dVar28) * fVar29,SUB84(dVar28,0))
              ;
            }
            else {
              dVar28 = dVar28 * dVar35;
            }
            if (cVar38 == '\0') {
              uVar32 = *(undefined4 *)(unsigned)(iVar20 + 0x14);
              in_dr8 = CONCAT44D(uVar30,*(undefined4 *)(unsigned)(iVar14 + 0x18));
              in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar32);
            }
            else {
              in_xd2 = *(double *)(unsigned)(iVar20 + 0x14);
              in_xd6 = in_xd2;
            }
            if (cVar37 == '\0') {
              fVar25 = F32LO(in_dr2) * F32LO(in_dr8);
            }
            else {
              fVar25 = SUB84(in_dr2 * in_dr8,0);
            }
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D(fVar29,*(undefined4 *)(unsigned)(iVar20 + 0x10));
              in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar14 + 0x10),uVar32);
              dVar26 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),fVar25);
            }
            else {
              in_xd4 = *(double *)(unsigned)(iVar20 + 0x10);
              in_dr6 = *(double *)(unsigned)(iVar14 + 0x10);
              dVar26 = in_dr8;
            }
            if (cVar37 == '\0') {
              dVar28 = CONCAT44D(F32HI(dVar28) - F32LO(dVar26),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 - dVar26;
            }
            uVar32 = SUB84(dVar35,0);
            dVar31 = in_xd4;
            if (cVar38 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),uVar32);
              dVar31 = in_xd2;
            }
            fVar29 = F32HI(in_dr6);
            if (cVar37 == '\0') {
              dVar26 = CONCAT44D(F32HI(dVar26) * fVar29,SUB84(dVar26,0))
              ;
            }
            else {
              dVar26 = dVar26 * in_dr6;
            }
            dVar33 = in_xd4;
            if (cVar38 == '\0') {
              dVar33 = CONCAT44D(uVar32,SUB84(in_dr12,0));
            }
            if (cVar37 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                        F32LO(dVar26) * F32LO(in_dr8));
            }
            else {
              dVar26 = dVar26 * in_dr8;
            }
            dVar34 = in_xd6;
            if (cVar38 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),SUB84(in_dr6,0));
              dVar34 = in_xd0;
            }
            if (cVar37 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),F32LO(dVar28) * fVar29);
              in_dr12 = CONCAT44D(F32HI(dVar33) *
                                         F32HI(dVar35),SUB84(dVar33,0));
              fVar29 = F32LO(dVar26) - F32HI(dVar26);
            }
            else {
              dVar28 = dVar28 * in_dr6;
              in_dr12 = dVar33 * dVar35;
              fVar29 = SUB84(dVar26 - dVar26,0);
            }
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D(*(undefined4 *)(unsigned)(iVar13 + 0x14),fVar29);
            }
            else {
              dVar35 = *(double *)(unsigned)(iVar13 + 0x14);
            }
            if (cVar37 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        F32LO(dVar28) - F32HI(in_dr12));
              dVar35 = CONCAT44D(F32HI(dVar35) * F32LO(dVar35),
                                        SUB84(dVar35,0));
            }
            else {
              dVar28 = dVar28 - in_dr12;
              dVar35 = dVar35 * dVar35;
            }
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),
                                        *(undefined4 *)(unsigned)(iVar13 + 0x10));
            }
            else {
              dVar31 = *(double *)(unsigned)(iVar13 + 0x10);
            }
            if (cVar37 == '\0') {
              dVar35 = CONCAT44D(F32HI(dVar28) * F32LO(dVar35) +
                                        F32HI(dVar35),SUB84(dVar35,0));
            }
            if (cVar38 == '\0') {
              dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),
                                        *(undefined4 *)(unsigned)(iVar13 + 0x18));
              in_dr0 = CONCAT44D(SUB84(dVar28,0),SUB84(dVar28,0));
              in_xd2 = dVar31;
            }
            else {
              in_xd2 = *(double *)(unsigned)(iVar13 + 0x18);
              in_dr0 = dVar34;
            }
            if (cVar37 == '\0') {
              dVar35 = (double)((ulonglong)
                                (uint)(F32HI(in_dr0) * F32LO(dVar35) +
                                      F32HI(dVar35)) << 0x20);
            }
            in_dr2 = (double)(D2U(dVar35) & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar38 == '\0') {
              in_dr4 = CONCAT44D((int)(D2U(dVar35) >> 0x20),uVar32);
            }
            if (cVar37 == '\0') {
              bVar36 = 0.0 < F32HI(in_dr4);
            }
            else {
              bVar36 = in_dr2 < in_dr4;
            }
            in_xd0 = dVar34;
            if (bVar36) {
LAB_8c24fffa:
              puVar21 = puVar22 + uVar2;
              psVar12 = psVar23 + uVar2 * 2;
              goto LAB_8c2500dc;
            }
          }
          puVar9 = puVar21 + 2;
          puVar21 = puVar21 + 3;
          uVar32 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          dVar35 = in_xd14;
          if (cVar38 == '\0') {
            dVar35 = CONCAT44D(uVar5,SUB84(in_dr4,0));
          }
          in_dr4 = dVar35;
          fVar29 = F32HI(in_dr4);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)*psVar23 * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)*psVar23) * in_dr4;
          }
          ar4_00 = (uint *)(unsigned)((uint)*puVar22 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          ar5_00 = (uint *)(unsigned)((uint)*puVar9 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          if (cVar38 == '\0') {
            ar4_00[8] = SUB84(dVar35,0);
          }
          else {
            *(double *)(unsigned)(ar4_00 + 8) = in_xd2;
          }
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[1] * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[1]) * in_dr4;
          }
          if (cVar38 == '\0') {
            ar4_00[9] = SUB84(dVar35,0);
          }
          else {
            *(double *)(unsigned)(ar4_00 + 9) = in_xd2;
          }
          psVar15 = psVar23 + 3;
          psVar12 = psVar23 + 4;
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[2] * fVar29);
          }
          else {
            dVar35 = CONCAT44D(uVar32,(float)(int)psVar23[2]) * in_dr4;
          }
          if (cVar38 == '\0') {
            ar5_00[8] = SUB84(dVar35,0);
          }
          else {
            *(double *)(unsigned)(ar5_00 + 8) = in_xd2;
          }
          uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
          if (cVar37 == '\0') {
            in_dr2 = CONCAT44D(uVar32,(float)(int)*psVar15 * fVar29);
          }
          else {
            in_dr2 = CONCAT44D(uVar32,(float)(int)*psVar15) * in_dr4;
          }
          if (cVar38 == '\0') {
            ar5_00[9] = SUB84(in_dr2,0);
          }
          else {
            *(double *)(unsigned)(ar5_00 + 9) = in_xd2;
          }
          (*(int *)(fr0_ - 0x34)) = 0;
          if (0 < (int)(uVar2 - 2)) {
            do {
              uVar1 = *puVar21;
              puVar21 = puVar21 + 1;
              dVar35 = in_xd14;
              if (cVar38 == '\0') {
                dVar35 = CONCAT44D(uVar5,SUB84(in_dr4,0));
              }
              in_dr4 = dVar35;
              ar6_00 = (uint *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              uVar32 = (undefined4)((ulonglong)in_dr2 >> 0x20);
              fVar29 = F32HI(in_dr4);
              if (cVar37 == '\0') {
                dVar35 = CONCAT44D(uVar32,(float)(int)*psVar12 * fVar29);
              }
              else {
                dVar35 = CONCAT44D(uVar32,(float)(int)*psVar12) * in_dr4;
              }
              if (cVar38 == '\0') {
                ar6_00[8] = SUB84(dVar35,0);
              }
              else {
                *(double *)(unsigned)(ar6_00 + 8) = in_xd2;
              }
              uVar32 = (undefined4)(D2U(dVar35) >> 0x20);
              if (cVar37 == '\0') {
                in_dr2 = CONCAT44D(uVar32,(float)(int)psVar12[1] * fVar29);
              }
              else {
                in_dr2 = CONCAT44D(uVar32,(float)(int)psVar12[1]) * in_dr4;
              }
              if (cVar38 == '\0') {
                ar6_00[9] = SUB84(in_dr2,0);
              }
              else {
                *(double *)(unsigned)(ar6_00 + 9) = in_xd2;
              }
              psVar12 = psVar12 + 2;
              if ((*ar4_00 & *ar5_00 & *ar6_00 & 1) == 0) {
                (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c23e228(ar4_00,ar5_00,ar6_00,psVar15));
              }
              (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
              ar4_00 = ar5_00;
              ar5_00 = ar6_00;
            } while ((*(int *)(fr0_ - 0x34)) < (int)(uVar2 - 2));
          }
        }
      }
      else {
        psVar12 = psVar23 + uVar2 * 2;
        puVar21 = puVar22 + uVar2;
      }
LAB_8c2500dc:
      iVar17 = iVar17 + 1;
      psVar23 = psVar12;
    }
  }
  else if (uVar2 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab318) & 1) == 0) {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c2458f6);
    }
    else {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c24553e);
    }
                    
                    
    uVar5 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)UNRECOVERED_JUMPTABLE))(ar4,(ushort)(*(int *)(fr0_ - 0x38)),vr6,vr7));
    return uVar5;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c24f64c\n.set _FUN_8c24f64c, _FUN_8c24f64c_def\n");
