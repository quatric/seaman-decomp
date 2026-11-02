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
uint FUN_8c251f78_def(ushort *ar4,double *ar5,double *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c251f78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  ushort uVar1;
  double *pdVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar8;
  double *pdVar9;
  uint uVar10;
  uint *ar6_00;
  uint *ar4_00;
  double *pdVar11;
  uint ar6_01;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  double *unaff_r8 = 0;
  double *pdVar15;
  int iVar16;
  double *pdVar17;
  uint uVar18;
  uint *ar5_00;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  double in_dr0 = 0;
  float fVar22;
  float fVar23;
  float fVar24;
  double in_dr2 = 0;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  double in_dr4 = 0;
  double dVar28;
  double dVar29;
  double in_dr6 = 0;
  double in_dr8 = 0;
  double dVar31;
  double in_dr12 = 0;
  double dVar32;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double dVar33;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd14 = 0;
  bool bVar34;
  char cVar35;
  char cVar36;
  undefined4 uVar30;
  
  cVar36 = '\0';
  cVar35 = '\0';
  uVar7 = 0x3f000000;
  uVar1 = *ar4;
  (*(uint*)((uchar*)&(*(int *)(fr0_ - 0x38))+0)) = uVar1 & 0x3fff;
  uVar3 = uVar1 & 0xc000;
  puVar19 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 3;
    (*(int *)(fr0_ - 0x34)) = 0;
    while( true ) {
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= (*(int *)(fr0_ - 0x34))) break;
      puVar14 = puVar19 + 1;
      pdVar8 = (double *)(unsigned)((uint)*puVar19 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar20 = puVar19 + 2;
      puVar19 = puVar19 + 3;
      pdVar15 = (double *)(unsigned)((uint)*puVar20 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar9 = (double *)(unsigned)((uint)*puVar14 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar8 & *(uint *)(unsigned)pdVar9 & *(uint *)(unsigned)pdVar15 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar8 | *(uint *)(unsigned)pdVar9 | *(uint *)(unsigned)pdVar15) & 1) == 0) {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            if (cVar36 == '\0') {
              uVar27 = *(undefined4 *)(unsigned)((int)pdVar9 + 4);
              dVar28 = CONCAT44D(uVar27,*(undefined4 *)(unsigned)((int)pdVar8 + 4));
              dVar29 = CONCAT44D(uVar27,SUB84(in_dr4,0));
            }
            else {
              dVar28 = *(double *)(unsigned)((int)pdVar9 + 4);
              in_xd2 = *(double *)(unsigned)((int)pdVar8 + 4);
              uVar27 = (undefined4)(D2U(dVar28) >> 0x20);
              dVar29 = dVar28;
            }
            if (cVar35 == '\0') {
              dVar28 = CONCAT44D(F32HI(dVar28) - F32LO(dVar28),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 - dVar28;
            }
            if (cVar36 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar15 + 1));
              dVar29 = CONCAT44D(uVar27,*(undefined4 *)(unsigned)(pdVar9 + 1));
            }
            else {
              in_xd2 = pdVar15[1];
              in_xd4 = pdVar9[1];
            }
            fVar24 = F32LO(dVar29);
            if (cVar35 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),F32LO(dVar28) - fVar24);
            }
            else {
              dVar28 = dVar28 - dVar29;
            }
            dVar33 = in_xd4;
            if (cVar36 == '\0') {
              in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar24);
              dVar33 = in_xd0;
            }
            in_xd0 = dVar33;
            if (cVar35 == '\0') {
              dVar28 = CONCAT44D(F32HI(dVar28) * F32LO(dVar28),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 * dVar28;
            }
            if (cVar36 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)(pdVar8 + 1)
                                       );
            }
            else {
              in_xd2 = pdVar8[1];
            }
            if (cVar35 == '\0') {
              dVar33 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                        F32LO(in_dr0) - F32LO(dVar28));
            }
            else {
              dVar33 = in_dr0 - dVar28;
            }
            if (cVar36 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        *(undefined4 *)(unsigned)((int)pdVar15 + 4));
            }
            else {
              in_xd2 = *(double *)(unsigned)((int)pdVar15 + 4);
            }
            if (cVar35 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        F32LO(dVar28) - F32HI(dVar29));
            }
            else {
              dVar28 = dVar28 - dVar29;
            }
            uVar3 = (uint)(D2U(dVar28) >> 0x20);
            dVar29 = dVar28;
            if (cVar36 == '\0') {
              dVar29 = CONCAT44D(uVar3,fVar24);
            }
            if (cVar35 == '\0') {
              in_dr0 = CONCAT44D((int)(D2U(dVar33) >> 0x20),
                                        F32LO(dVar33) * F32LO(dVar28));
            }
            else {
              in_dr0 = dVar33 * dVar28;
            }
            in_dr2 = (double)((ulonglong)uVar3 << 0x20);
            if (cVar35 == '\0') {
              fVar24 = F32HI(dVar29) - F32LO(in_dr0);
              in_dr4 = CONCAT44D(fVar24,SUB84(dVar29,0));
              bVar34 = 0.0 < fVar24;
            }
            else {
              in_dr4 = dVar29 - in_dr0;
              bVar34 = in_dr2 < in_dr4;
            }
            if (bVar34) goto LAB_8c25223c;
          }
          uVar27 = SUB84(in_dr2,0);
          uVar5 = SUB84(in_dr0,0);
          *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          uVar30 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar36 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
            uVar30 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar8,ar5,ar6,ar7));
          dVar33 = in_xd14;
          dVar29 = in_xd14;
          dVar28 = in_xd14;
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D(uVar7,uVar30);
            dVar29 = in_xd2;
            uVar27 = uVar7;
            dVar28 = CONCAT44D(uVar7,uVar5);
          }
          *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar4;
          if (cVar36 == '\0') {
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar27);
            pdVar17 = (double *)(unsigned)((int)pdVar8 + 0x34);
          }
          else {
            dVar25 = pdVar8[6];
            pdVar17 = pdVar8 + 7;
          }
          if (cVar35 == '\0') {
            dVar25 = (double)(ulonglong)
                             (uint)(F32HI(dVar28) *
                                    F32HI(dVar25) + F32LO(dVar25));
          }
          uVar27 = (undefined4)(D2U(dVar33) >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar25,0);
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)pdVar17,uVar27);
            dVar33 = dVar29;
            dVar29 = CONCAT44D(uVar27,SUB84(dVar28,0));
          }
          else {
            pdVar8[4] = dVar29;
            dVar25 = *pdVar17;
            dVar29 = dVar33;
          }
          pdVar11 = (double *)(unsigned)((int)pdVar8 + 0x24);
          if (cVar35 == '\0') {
            dVar25 = (double)(ulonglong)
                             (uint)(F32HI(dVar29) *
                                    F32HI(dVar25) + F32LO(dVar25));
          }
          if (cVar36 == '\0') {
            *(int *)(unsigned)pdVar11 = SUB84(dVar25,0);
          }
          else {
            *pdVar11 = dVar33;
          }
          CacheBlockWriteBack(pdVar11);
          if (cVar36 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar29,0));
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar25,0));
            pdVar8 = pdVar8 + 1;
          }
          else {
            dVar29 = *pdVar8;
            dVar28 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(unsigned)(pdVar8 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar27;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar28) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar29) >> 0x20);
          }
          else {
            dVar25 = pdVar8[2];
            unaff_r8[3] = pdVar8[3];
            unaff_r8[2] = dVar25;
            unaff_r8[1] = dVar28;
            *unaff_r8 = dVar29;
          }
          *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar36 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
            uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar5 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar9,pdVar17,ar6,ar7));
          uVar30 = SUB84(dVar28,0);
          dVar31 = in_xd14;
          dVar28 = in_xd14;
          dVar25 = in_xd14;
          if (cVar36 == '\0') {
            dVar31 = CONCAT44D(uVar7,uVar27);
            dVar28 = dVar33;
            uVar30 = uVar7;
            dVar25 = CONCAT44D(uVar7,SUB84(dVar29,0));
          }
          *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar5;
          if (cVar36 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 6),uVar30);
            pdVar8 = (double *)(unsigned)((int)pdVar9 + 0x34);
          }
          else {
            dVar29 = pdVar9[6];
            pdVar8 = pdVar9 + 7;
          }
          if (cVar35 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)(F32HI(dVar25) *
                                    F32HI(dVar29) + F32LO(dVar29));
          }
          uVar27 = (undefined4)(D2U(dVar31) >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar29,0);
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar27);
            dVar31 = dVar28;
            dVar29 = CONCAT44D(uVar27,SUB84(dVar25,0));
          }
          else {
            pdVar9[4] = dVar28;
            dVar33 = *pdVar8;
            dVar29 = dVar31;
          }
          pdVar17 = (double *)(unsigned)((int)pdVar9 + 0x24);
          if (cVar35 == '\0') {
            dVar33 = (double)(ulonglong)
                             (uint)(F32HI(dVar29) *
                                    F32HI(dVar33) + F32LO(dVar33));
          }
          if (cVar36 == '\0') {
            *(int *)(unsigned)pdVar17 = SUB84(dVar33,0);
          }
          else {
            *pdVar17 = dVar31;
          }
          CacheBlockWriteBack(pdVar17);
          if (cVar36 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar29,0));
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(dVar33,0));
            pdVar9 = pdVar9 + 1;
          }
          else {
            dVar29 = *pdVar9;
            dVar28 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(unsigned)(pdVar9 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar27;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar28) >> 0x20);
            pdVar9 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar9 = (int)(D2U(dVar29) >> 0x20);
          }
          else {
            dVar33 = pdVar9[2];
            unaff_r8[7] = pdVar9[3];
            unaff_r8[6] = dVar33;
            unaff_r8[5] = dVar28;
            pdVar9 = unaff_r8 + 4;
            *pdVar9 = dVar29;
          }
          *(undefined4 *)(unsigned)pdVar15 = 0xf0000000;
          CacheBlockWriteBack(pdVar15);
          uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar36 != '\0') {
            in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc));
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
            uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar5 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar15,pdVar8,ar6,ar7));
          uVar30 = SUB84(dVar28,0);
          dVar33 = in_xd14;
          in_xd2 = in_xd14;
          dVar28 = in_xd14;
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D(uVar7,uVar27);
            in_xd2 = dVar31;
            uVar30 = uVar7;
            dVar28 = CONCAT44D(uVar7,SUB84(dVar29,0));
          }
          *(undefined4 *)(unsigned)(pdVar15 + 5) = uVar5;
          if (cVar36 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar15 + 6),uVar30);
            ar5 = (double *)(unsigned)((int)pdVar15 + 0x34);
          }
          else {
            dVar29 = pdVar15[6];
            ar5 = pdVar15 + 7;
          }
          if (cVar35 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)(F32HI(dVar28) *
                                    F32HI(dVar29) + F32LO(dVar29));
          }
          uVar27 = (undefined4)(D2U(dVar33) >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(unsigned)(pdVar15 + 4) = SUB84(dVar29,0);
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar27);
            dVar29 = CONCAT44D(uVar27,SUB84(dVar28,0));
          }
          else {
            pdVar15[4] = in_xd2;
            dVar25 = *ar5;
            in_xd2 = dVar33;
            dVar29 = dVar33;
          }
          pdVar8 = (double *)(unsigned)((int)pdVar15 + 0x24);
          if (cVar35 == '\0') {
            dVar25 = (double)(ulonglong)
                             (uint)(F32HI(dVar29) *
                                    F32HI(dVar25) + F32LO(dVar25));
          }
          if (cVar36 == '\0') {
            *(int *)(unsigned)pdVar8 = SUB84(dVar25,0);
          }
          else {
            *pdVar8 = in_xd2;
          }
          CacheBlockWriteBack(pdVar8);
          if (cVar36 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar15,SUB84(dVar29,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + 4),SUB84(dVar25,0));
            pdVar15 = pdVar15 + 1;
          }
          else {
            in_dr0 = *pdVar15;
            in_dr2 = pdVar15[1];
            pdVar15 = pdVar15 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(unsigned)(pdVar15 + 2);
            in_dr4 = CONCAT44D(uVar27,SUB84(dVar33,0));
            *(undefined4 *)(unsigned)((int)pdVar9 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar15 + 0x14);
            *(undefined4 *)(unsigned)(pdVar9 + 7) = uVar27;
            *(int *)(unsigned)((int)pdVar9 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar9 = pdVar9 + 6;
            *(int *)(unsigned)pdVar9 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar15[2];
            pdVar9[7] = pdVar15[3];
            pdVar9[6] = in_dr4;
            pdVar9[5] = in_dr2;
            pdVar9 = pdVar9 + 4;
            *pdVar9 = in_dr0;
          }
          unaff_r8 = pdVar9 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
        }
        else {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            if (cVar36 == '\0') {
              uVar27 = *(undefined4 *)(unsigned)(pdVar9 + 3);
              uVar30 = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
              pdVar17 = (double *)(unsigned)((int)pdVar8 + 0x14);
              in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar30);
              dVar33 = CONCAT44D(uVar27,SUB84(in_dr0,0));
              dVar29 = in_xd2;
              dVar28 = *(double *)(unsigned)((int)pdVar9 + 0x14);
            }
            else {
              dVar33 = pdVar9[3];
              dVar29 = *(double *)(unsigned)((int)pdVar9 + 0x14);
              in_xd4 = *(double *)(unsigned)((int)pdVar8 + 0x14);
              pdVar17 = pdVar8 + 3;
              uVar30 = SUB84(dVar33,0);
              uVar27 = (undefined4)(D2U(dVar33) >> 0x20);
              dVar28 = dVar33;
              in_xd6 = dVar29;
            }
            dVar25 = *pdVar17;
            fVar23 = F32HI(dVar25);
            fVar24 = F32LO(dVar25);
            if (cVar35 == '\0') {
              fVar22 = F32LO(in_dr2) * fVar23;
              dVar33 = CONCAT44D(F32HI(dVar33) * fVar24,SUB84(dVar33,0))
              ;
            }
            else {
              fVar22 = SUB84(in_dr2 * dVar25,0);
              dVar33 = dVar33 * dVar25;
            }
            if (cVar36 == '\0') {
              dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 2),*(undefined4 *)(unsigned)(pdVar9 + 2));
              dVar28 = CONCAT44D(uVar27,fVar22);
            }
            else {
              in_xd8 = pdVar9[2];
              dVar31 = pdVar8[2];
            }
            fVar22 = F32HI(dVar31);
            if (cVar35 == '\0') {
              dVar28 = CONCAT44D(F32HI(dVar28) * fVar22,SUB84(dVar28,0))
              ;
            }
            else {
              dVar28 = dVar28 * dVar31;
            }
            dVar26 = in_xd8;
            if (cVar36 == '\0') {
              dVar26 = CONCAT44D(SUB84(dVar31,0),SUB84(in_dr12,0));
            }
            if (cVar35 == '\0') {
              dVar33 = CONCAT44D(F32HI(dVar33) - F32LO(dVar28),
                                        SUB84(dVar33,0));
            }
            else {
              dVar33 = dVar33 - dVar28;
            }
            in_xd2 = in_xd8;
            if (cVar36 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),SUB84(dVar31,0));
              in_xd2 = dVar29;
            }
            if (cVar35 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),F32LO(dVar28) * fVar23);
            }
            else {
              dVar28 = dVar28 * dVar25;
            }
            dVar29 = in_xd6;
            if (cVar36 == '\0') {
              dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),uVar30);
              dVar29 = in_xd0;
            }
            in_xd0 = dVar29;
            if (cVar35 == '\0') {
              dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),F32LO(dVar33) * fVar22);
              in_dr12 = CONCAT44D(F32HI(dVar26) * fVar24,SUB84(dVar26,0)
                                        );
              fVar23 = F32LO(dVar28) - F32HI(dVar28);
            }
            else {
              dVar33 = dVar33 * dVar31;
              in_dr12 = dVar26 * dVar25;
              fVar23 = SUB84(dVar28 - dVar28,0);
            }
            if (cVar36 == '\0') {
              dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + 0x14),fVar23);
            }
            else {
              dVar29 = *(double *)(unsigned)((int)pdVar15 + 0x14);
            }
            if (cVar35 == '\0') {
              dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),
                                        F32LO(dVar33) - F32HI(in_dr12));
              dVar29 = CONCAT44D(F32HI(dVar29) * F32LO(dVar29),
                                        SUB84(dVar29,0));
            }
            else {
              dVar33 = dVar33 - in_dr12;
              dVar29 = dVar29 * dVar29;
            }
            if (cVar36 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar15 + 2));
            }
            else {
              in_xd2 = pdVar15[2];
            }
            if (cVar35 == '\0') {
              dVar29 = CONCAT44D(F32HI(dVar33) * F32LO(dVar29) +
                                        F32HI(dVar29),SUB84(dVar29,0));
            }
            if (cVar36 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar15 + 3));
              in_dr0 = CONCAT44D(SUB84(dVar33,0),SUB84(dVar33,0));
            }
            else {
              in_xd2 = pdVar15[3];
              in_dr0 = in_xd0;
            }
            if (cVar35 == '\0') {
              dVar29 = (double)((ulonglong)
                                (uint)(F32HI(in_dr0) * F32LO(dVar29) +
                                      F32HI(dVar29)) << 0x20);
            }
            in_dr2 = (double)(D2U(dVar29) & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar36 == '\0') {
              in_dr4 = CONCAT44D((int)(D2U(dVar29) >> 0x20),fVar24);
            }
            if (cVar35 == '\0') {
              bVar34 = 0.0 < F32HI(in_dr4);
            }
            else {
              bVar34 = in_dr2 < in_dr4;
            }
            if (bVar34) goto LAB_8c25223c;
          }
          (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c23e4c8(pdVar8,pdVar9,pdVar15,ar7));
          ar5 = pdVar9;
          ar6 = pdVar15;
        }
      }
LAB_8c25223c:
      (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
    }
  }
  else if (uVar3 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 4;
    (*(int *)(fr0_ - 0x2c)) = 0;
    while( true ) {
      uVar27 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= (*(int *)(fr0_ - 0x2c))) break;
      pdVar9 = (double *)(unsigned)((uint)*puVar19 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar14 = puVar19 + 3;
      pdVar15 = (double *)(unsigned)((uint)puVar19[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar17 = (double *)(unsigned)((uint)puVar19[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar19 = puVar19 + 4;
      pdVar8 = (double *)(unsigned)((uint)*puVar14 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar9 & *(uint *)(unsigned)pdVar15 & *(uint *)(unsigned)pdVar17 & *(uint *)(unsigned)pdVar8 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar9 | *(uint *)(unsigned)pdVar15 | *(uint *)(unsigned)pdVar17 | *(uint *)(unsigned)pdVar8) & 1) == 0) {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            if (cVar36 == '\0') {
              uVar27 = *(undefined4 *)(unsigned)((int)pdVar15 + 4);
              dVar29 = CONCAT44D(uVar27,*(undefined4 *)(unsigned)((int)pdVar9 + 4));
            }
            else {
              dVar29 = *(double *)(unsigned)((int)pdVar15 + 4);
              in_xd2 = *(double *)(unsigned)((int)pdVar9 + 4);
              in_xd4 = dVar29;
            }
            if (cVar35 == '\0') {
              dVar29 = CONCAT44D(F32HI(dVar29) - F32LO(dVar29),
                                        SUB84(dVar29,0));
            }
            else {
              dVar29 = dVar29 - dVar29;
            }
            if (cVar36 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar17 + 1));
              dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar15 + 1),uVar27);
            }
            else {
              in_xd2 = pdVar17[1];
              dVar28 = pdVar15[1];
            }
            fVar24 = F32HI(dVar28);
            if (cVar35 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),F32LO(dVar29) - fVar24);
            }
            else {
              dVar29 = dVar29 - dVar28;
            }
            dVar33 = dVar28;
            if (cVar36 == '\0') {
              in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar24);
              dVar33 = in_xd0;
            }
            in_xd0 = dVar33;
            if (cVar35 == '\0') {
              dVar29 = CONCAT44D(F32HI(dVar29) * F32LO(dVar29),
                                        SUB84(dVar29,0));
            }
            else {
              dVar29 = dVar29 * dVar29;
            }
            if (cVar36 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),*(undefined4 *)(unsigned)(pdVar9 + 1)
                                       );
            }
            else {
              in_xd2 = pdVar9[1];
            }
            if (cVar35 == '\0') {
              dVar33 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                        F32LO(in_dr0) - F32LO(dVar29));
            }
            else {
              dVar33 = in_dr0 - dVar29;
            }
            if (cVar36 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        *(undefined4 *)(unsigned)((int)pdVar17 + 4));
            }
            else {
              in_xd2 = *(double *)(unsigned)((int)pdVar17 + 4);
            }
            if (cVar35 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        F32LO(dVar29) - F32LO(dVar28));
            }
            else {
              dVar29 = dVar29 - dVar28;
            }
            uVar3 = (uint)(D2U(dVar29) >> 0x20);
            dVar25 = dVar29;
            if (cVar36 == '\0') {
              dVar25 = CONCAT44D(uVar3,SUB84(dVar28,0));
            }
            if (cVar35 == '\0') {
              in_dr0 = CONCAT44D((int)(D2U(dVar33) >> 0x20),
                                        F32LO(dVar33) * F32LO(dVar29));
            }
            else {
              in_dr0 = dVar33 * dVar29;
            }
            in_dr2 = (double)((ulonglong)uVar3 << 0x20);
            if (cVar35 == '\0') {
              fVar24 = F32HI(dVar25) - F32LO(in_dr0);
              in_dr4 = CONCAT44D(fVar24,SUB84(dVar25,0));
              bVar34 = 0.0 < fVar24;
            }
            else {
              in_dr4 = dVar25 - in_dr0;
              bVar34 = in_dr2 < in_dr4;
            }
            if (bVar34) goto LAB_8c25258e;
          }
          uVar27 = SUB84(in_dr2,0);
          uVar5 = SUB84(in_dr0,0);
          *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar30 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar36 != '\0') {
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
            uVar30 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar9,ar5,ar6,ar7));
          dVar33 = in_xd14;
          dVar29 = in_xd14;
          dVar28 = in_xd14;
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D(uVar7,uVar30);
            dVar29 = in_xd2;
            uVar27 = uVar7;
            dVar28 = CONCAT44D(uVar7,uVar5);
          }
          *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar4;
          if (cVar36 == '\0') {
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 6),uVar27);
            pdVar11 = (double *)(unsigned)((int)pdVar9 + 0x34);
          }
          else {
            dVar25 = pdVar9[6];
            pdVar11 = pdVar9 + 7;
          }
          if (cVar35 == '\0') {
            dVar25 = (double)(ulonglong)
                             (uint)(F32HI(dVar28) *
                                    F32HI(dVar25) + F32LO(dVar25));
          }
          uVar27 = (undefined4)(D2U(dVar33) >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar25,0);
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,uVar27);
            dVar33 = dVar29;
            dVar29 = CONCAT44D(uVar27,SUB84(dVar28,0));
          }
          else {
            pdVar9[4] = dVar29;
            dVar25 = *pdVar11;
            dVar29 = dVar33;
          }
          pdVar2 = (double *)(unsigned)((int)pdVar9 + 0x24);
          if (cVar35 == '\0') {
            dVar25 = (double)(ulonglong)
                             (uint)(F32HI(dVar29) *
                                    F32HI(dVar25) + F32LO(dVar25));
          }
          if (cVar36 == '\0') {
            *(int *)(unsigned)pdVar2 = SUB84(dVar25,0);
          }
          else {
            *pdVar2 = dVar33;
          }
          CacheBlockWriteBack(pdVar2);
          if (cVar36 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar29,0));
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(dVar25,0));
            pdVar9 = pdVar9 + 1;
          }
          else {
            dVar29 = *pdVar9;
            dVar28 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(unsigned)(pdVar9 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar27;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar28) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar29) >> 0x20);
          }
          else {
            dVar25 = pdVar9[2];
            unaff_r8[3] = pdVar9[3];
            unaff_r8[2] = dVar25;
            unaff_r8[1] = dVar28;
            *unaff_r8 = dVar29;
          }
          *(undefined4 *)(unsigned)pdVar15 = 0xe0000000;
          CacheBlockWriteBack(pdVar15);
          uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar36 != '\0') {
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
            uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar5 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar15,pdVar11,ar6,ar7));
          uVar30 = SUB84(dVar28,0);
          dVar31 = in_xd14;
          dVar28 = in_xd14;
          dVar25 = in_xd14;
          if (cVar36 == '\0') {
            dVar31 = CONCAT44D(uVar7,uVar27);
            dVar28 = dVar33;
            uVar30 = uVar7;
            dVar25 = CONCAT44D(uVar7,SUB84(dVar29,0));
          }
          *(undefined4 *)(unsigned)(pdVar15 + 5) = uVar5;
          if (cVar36 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar15 + 6),uVar30);
            pdVar9 = (double *)(unsigned)((int)pdVar15 + 0x34);
          }
          else {
            dVar29 = pdVar15[6];
            pdVar9 = pdVar15 + 7;
          }
          if (cVar35 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)(F32HI(dVar25) *
                                    F32HI(dVar29) + F32LO(dVar29));
          }
          uVar27 = (undefined4)(D2U(dVar31) >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(unsigned)(pdVar15 + 4) = SUB84(dVar29,0);
            dVar33 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,uVar27);
            dVar31 = dVar28;
            dVar29 = CONCAT44D(uVar27,SUB84(dVar25,0));
          }
          else {
            pdVar15[4] = dVar28;
            dVar33 = *pdVar9;
            dVar29 = dVar31;
          }
          pdVar11 = (double *)(unsigned)((int)pdVar15 + 0x24);
          if (cVar35 == '\0') {
            dVar33 = (double)(ulonglong)
                             (uint)(F32HI(dVar29) *
                                    F32HI(dVar33) + F32LO(dVar33));
          }
          if (cVar36 == '\0') {
            *(int *)(unsigned)pdVar11 = SUB84(dVar33,0);
          }
          else {
            *pdVar11 = dVar31;
          }
          CacheBlockWriteBack(pdVar11);
          if (cVar36 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)pdVar15,SUB84(dVar29,0));
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + 4),SUB84(dVar33,0));
            pdVar15 = pdVar15 + 1;
          }
          else {
            dVar29 = *pdVar15;
            dVar28 = pdVar15[1];
            pdVar15 = pdVar15 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(unsigned)(pdVar15 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar15 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar27;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar28) >> 0x20);
            pdVar15 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar15 = (int)(D2U(dVar29) >> 0x20);
          }
          else {
            dVar33 = pdVar15[2];
            unaff_r8[7] = pdVar15[3];
            unaff_r8[6] = dVar33;
            unaff_r8[5] = dVar28;
            pdVar15 = unaff_r8 + 4;
            *pdVar15 = dVar29;
          }
          *(undefined4 *)(unsigned)pdVar17 = 0xe0000000;
          CacheBlockWriteBack(pdVar17);
          uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar36 != '\0') {
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
            uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar5 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar17,pdVar9,ar6,ar7));
          uVar30 = SUB84(dVar28,0);
          dVar25 = in_xd14;
          dVar28 = in_xd14;
          dVar33 = in_xd14;
          if (cVar36 == '\0') {
            dVar25 = CONCAT44D(uVar7,uVar27);
            dVar28 = dVar31;
            uVar30 = uVar7;
            dVar33 = CONCAT44D(uVar7,SUB84(dVar29,0));
          }
          *(undefined4 *)(unsigned)(pdVar17 + 5) = uVar5;
          if (cVar36 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar17 + 6),uVar30);
            pdVar9 = (double *)(unsigned)((int)pdVar17 + 0x34);
          }
          else {
            dVar29 = pdVar17[6];
            pdVar9 = pdVar17 + 7;
          }
          if (cVar35 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar29) + F32LO(dVar29));
          }
          uVar27 = (undefined4)(D2U(dVar25) >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(unsigned)(pdVar17 + 4) = SUB84(dVar29,0);
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,uVar27);
            dVar25 = dVar28;
            dVar29 = CONCAT44D(uVar27,SUB84(dVar33,0));
          }
          else {
            pdVar17[4] = dVar28;
            dVar31 = *pdVar9;
            dVar29 = dVar25;
          }
          pdVar11 = (double *)(unsigned)((int)pdVar17 + 0x24);
          if (cVar35 == '\0') {
            dVar31 = (double)(ulonglong)
                             (uint)(F32HI(dVar29) *
                                    F32HI(dVar31) + F32LO(dVar31));
          }
          if (cVar36 == '\0') {
            *(int *)(unsigned)pdVar11 = SUB84(dVar31,0);
          }
          else {
            *pdVar11 = dVar25;
          }
          CacheBlockWriteBack(pdVar11);
          if (cVar36 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)pdVar17,SUB84(dVar29,0));
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar17 + 4),SUB84(dVar31,0));
            pdVar17 = pdVar17 + 1;
          }
          else {
            dVar29 = *pdVar17;
            dVar28 = pdVar17[1];
            pdVar17 = pdVar17 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(unsigned)(pdVar17 + 2);
            *(undefined4 *)(unsigned)((int)pdVar15 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar17 + 0x14);
            *(undefined4 *)(unsigned)(pdVar15 + 7) = uVar27;
            *(int *)(unsigned)((int)pdVar15 + 0x34) = (int)(D2U(dVar28) >> 0x20);
            pdVar15 = pdVar15 + 6;
            *(int *)(unsigned)pdVar15 = (int)(D2U(dVar29) >> 0x20);
          }
          else {
            dVar33 = pdVar17[2];
            pdVar15[7] = pdVar17[3];
            pdVar15[6] = dVar33;
            pdVar15[5] = dVar28;
            pdVar15 = pdVar15 + 4;
            *pdVar15 = dVar29;
          }
          *(undefined4 *)(unsigned)pdVar8 = 0xf0000000;
          CacheBlockWriteBack(pdVar8);
          uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          if (cVar36 != '\0') {
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
            uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          }
          uVar5 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar8,pdVar9,ar6,ar7));
          uVar30 = SUB84(dVar28,0);
          dVar33 = in_xd14;
          in_xd2 = in_xd14;
          dVar28 = in_xd14;
          if (cVar36 == '\0') {
            dVar33 = CONCAT44D(uVar7,uVar27);
            in_xd2 = dVar25;
            uVar30 = uVar7;
            dVar28 = CONCAT44D(uVar7,SUB84(dVar29,0));
          }
          *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar5;
          if (cVar36 == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar30);
            ar5 = (double *)(unsigned)((int)pdVar8 + 0x34);
          }
          else {
            dVar29 = pdVar8[6];
            ar5 = pdVar8 + 7;
          }
          if (cVar35 == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)(F32HI(dVar28) *
                                    F32HI(dVar29) + F32LO(dVar29));
          }
          uVar27 = (undefined4)(D2U(dVar33) >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar29,0);
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar27);
            dVar29 = CONCAT44D(uVar27,SUB84(dVar28,0));
          }
          else {
            pdVar8[4] = in_xd2;
            dVar25 = *ar5;
            in_xd2 = dVar33;
            dVar29 = dVar33;
          }
          pdVar9 = (double *)(unsigned)((int)pdVar8 + 0x24);
          if (cVar35 == '\0') {
            dVar25 = (double)(ulonglong)
                             (uint)(F32HI(dVar29) *
                                    F32HI(dVar25) + F32LO(dVar25));
          }
          if (cVar36 == '\0') {
            *(int *)(unsigned)pdVar9 = SUB84(dVar25,0);
          }
          else {
            *pdVar9 = in_xd2;
          }
          CacheBlockWriteBack(pdVar9);
          if (cVar36 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar29,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar25,0));
            pdVar8 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar36 == '\0') {
            uVar27 = *(undefined4 *)(unsigned)(pdVar8 + 2);
            in_dr4 = CONCAT44D(uVar27,SUB84(dVar33,0));
            *(undefined4 *)(unsigned)((int)pdVar15 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
            *(undefined4 *)(unsigned)(pdVar15 + 7) = uVar27;
            *(int *)(unsigned)((int)pdVar15 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar15 = pdVar15 + 6;
            *(int *)(unsigned)pdVar15 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar8[2];
            pdVar15[7] = pdVar8[3];
            pdVar15[6] = in_dr4;
            pdVar15[5] = in_dr2;
            pdVar15 = pdVar15 + 4;
            *pdVar15 = in_dr0;
          }
          unaff_r8 = pdVar15 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
        }
        else {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            if (cVar36 == '\0') {
              uVar27 = *(undefined4 *)(unsigned)(pdVar15 + 3);
              uVar30 = *(undefined4 *)(unsigned)((int)pdVar15 + 0x14);
              pdVar11 = (double *)(unsigned)((int)pdVar9 + 0x14);
              in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar30);
              dVar33 = CONCAT44D(uVar27,SUB84(in_dr0,0));
              dVar29 = in_xd2;
              dVar28 = CONCAT44D(uVar30,uVar27);
            }
            else {
              dVar33 = pdVar15[3];
              dVar29 = *(double *)(unsigned)((int)pdVar15 + 0x14);
              pdVar11 = pdVar9 + 3;
              uVar30 = (undefined4)(D2U(dVar29) >> 0x20);
              uVar27 = SUB84(dVar29,0);
              dVar28 = dVar29;
              in_xd4 = dVar33;
            }
            dVar25 = *pdVar11;
            fVar24 = F32HI(dVar25);
            if (cVar35 == '\0') {
              fVar23 = F32LO(in_dr2) * fVar24;
              dVar33 = CONCAT44D(F32HI(dVar33) * F32LO(dVar25),
                                        SUB84(dVar33,0));
            }
            else {
              fVar23 = SUB84(in_dr2 * dVar25,0);
              dVar33 = dVar33 * dVar25;
            }
            if (cVar36 == '\0') {
              dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 2),*(undefined4 *)(unsigned)(pdVar15 + 2));
              dVar26 = CONCAT44D(uVar27,fVar23);
            }
            else {
              in_xd8 = pdVar15[2];
              dVar31 = pdVar9[2];
              dVar26 = in_xd4;
            }
            fVar23 = F32HI(dVar31);
            if (cVar35 == '\0') {
              dVar26 = CONCAT44D(F32HI(dVar26) * fVar23,SUB84(dVar26,0))
              ;
            }
            else {
              dVar26 = dVar26 * dVar31;
            }
            dVar32 = in_xd8;
            if (cVar36 == '\0') {
              dVar32 = CONCAT44D(SUB84(dVar31,0),SUB84(in_dr12,0));
            }
            if (cVar35 == '\0') {
              dVar33 = CONCAT44D(F32HI(dVar33) - F32LO(dVar26),
                                        SUB84(dVar33,0));
            }
            else {
              dVar33 = dVar33 - dVar26;
            }
            in_xd2 = in_xd8;
            if (cVar36 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),SUB84(dVar31,0));
              in_xd2 = dVar29;
            }
            if (cVar35 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),F32LO(dVar26) * fVar24);
            }
            else {
              dVar26 = dVar26 * dVar25;
            }
            if (cVar36 == '\0') {
              dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),uVar30);
              dVar28 = in_xd0;
            }
            in_xd0 = dVar28;
            if (cVar35 == '\0') {
              dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),F32LO(dVar33) * fVar23);
              in_dr12 = CONCAT44D(F32HI(dVar32) * F32LO(dVar25),
                                         SUB84(dVar32,0));
              fVar24 = F32LO(dVar26) - F32HI(dVar26);
            }
            else {
              dVar33 = dVar33 * dVar31;
              in_dr12 = dVar32 * dVar25;
              fVar24 = SUB84(dVar26 - dVar26,0);
            }
            if (cVar36 == '\0') {
              dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar17 + 0x14),fVar24);
            }
            else {
              dVar29 = *(double *)(unsigned)((int)pdVar17 + 0x14);
            }
            if (cVar35 == '\0') {
              dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),
                                        F32LO(dVar33) - F32HI(in_dr12));
              dVar29 = CONCAT44D(F32HI(dVar29) * F32LO(dVar29),
                                        SUB84(dVar29,0));
            }
            else {
              dVar33 = dVar33 - in_dr12;
              dVar29 = dVar29 * dVar29;
            }
            if (cVar36 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar17 + 2));
            }
            else {
              in_xd2 = pdVar17[2];
            }
            if (cVar35 == '\0') {
              dVar29 = CONCAT44D(F32HI(dVar33) * F32LO(dVar29) +
                                        F32HI(dVar29),SUB84(dVar29,0));
            }
            if (cVar36 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar17 + 3));
              in_dr0 = CONCAT44D(SUB84(dVar33,0),SUB84(dVar33,0));
            }
            else {
              in_xd2 = pdVar17[3];
              in_dr0 = in_xd0;
            }
            if (cVar35 == '\0') {
              dVar29 = (double)((ulonglong)
                                (uint)(F32HI(in_dr0) * F32LO(dVar29) +
                                      F32HI(dVar29)) << 0x20);
            }
            in_dr2 = (double)(D2U(dVar29) & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar36 == '\0') {
              in_dr4 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar27);
            }
            if (cVar35 == '\0') {
              bVar34 = 0.0 < F32HI(in_dr4);
            }
            else {
              bVar34 = in_dr2 < in_dr4;
            }
            if (bVar34) goto LAB_8c25258e;
          }
          if ((*(uint *)(unsigned)pdVar9 & *(uint *)(unsigned)pdVar15 & *(uint *)(unsigned)pdVar17 & 1) == 0) {
            ar5 = pdVar15;
            ar6 = pdVar17;
            (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c23e4c8(pdVar9,pdVar15,pdVar17,ar7));
          }
          if ((*(uint *)(unsigned)pdVar15 & *(uint *)(unsigned)pdVar17 & *(uint *)(unsigned)pdVar8 & 1) == 0) {
            (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c23e4c8(pdVar15,pdVar17,pdVar8,ar7));
            ar5 = pdVar17;
            ar6 = pdVar8;
          }
        }
      }
LAB_8c25258e:
      (*(int *)(fr0_ - 0x2c)) = (*(int *)(fr0_ - 0x2c)) + 1;
    }
  }
  else if (uVar3 == 0x8000) {
    iVar16 = 0;
    while( true ) {
      uVar27 = SUB84(in_dr4,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= iVar16) break;
      ar6_01 = 0;
      puVar20 = puVar19 + 1;
      iVar13 = 0;
      uVar18 = 0xffffffff;
      uVar3 = (uint)*puVar19;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar3;
      puVar14 = puVar20;
      if (uVar3 != 0) {
        do {
          uVar1 = *puVar14;
          puVar14 = puVar14 + 1;
          iVar13 = iVar13 + 1;
          uVar10 = *(uint *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          uVar18 = uVar18 & uVar10;
          ar6_01 = ar6_01 | uVar10;
        } while (iVar13 < (int)uVar3);
      }
      if ((uVar18 & 0x3f) == 0) {
        puVar14 = puVar19 + 3;
        if ((ar6_01 & 1) == 0) {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            ar6_01 = (uint)puVar19[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
            if (cVar36 == '\0') {
              dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(ar6_01 + 4),uVar27);
            }
            else {
              dVar29 = *(double *)(unsigned)(ar6_01 + 4);
            }
            iVar13 = (uint)*puVar20 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
            uVar27 = (undefined4)(D2U(dVar29) >> 0x20);
            if (cVar36 == '\0') {
              dVar28 = CONCAT44D(uVar27,*(undefined4 *)(unsigned)(iVar13 + 4));
            }
            else {
              in_xd2 = *(double *)(unsigned)(iVar13 + 4);
              dVar28 = dVar29;
            }
            if (cVar35 == '\0') {
              dVar28 = CONCAT44D(F32HI(dVar28) - F32LO(dVar28),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 - dVar28;
            }
            puVar14 = (ushort *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)*puVar14 * 0x40);
            if (cVar36 == '\0') {
              fVar24 = *(float *)(unsigned)(ar6_01 + 8);
              dVar29 = CONCAT44D(uVar27,fVar24);
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        *(undefined4 *)(unsigned)(puVar14 + 4));
              in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar24);
            }
            else {
              in_xd0 = *(double *)(unsigned)(ar6_01 + 8);
              in_xd2 = *(double *)(unsigned)(puVar14 + 4);
              fVar24 = F32LO(dVar29);
              in_xd4 = in_xd0;
            }
            if (cVar35 == '\0') {
              fVar23 = F32LO(dVar28) - fVar24;
              dVar28 = CONCAT44D(F32HI(dVar28) * fVar23,fVar23);
            }
            else {
              dVar28 = (dVar28 - dVar29) * (dVar28 - dVar29);
            }
            if (cVar36 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)(iVar13 + 8)
                                       );
            }
            else {
              in_xd2 = *(double *)(unsigned)(iVar13 + 8);
            }
            if (cVar35 == '\0') {
              dVar33 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                        F32LO(in_dr0) - F32LO(dVar28));
            }
            else {
              dVar33 = in_dr0 - dVar28;
            }
            if (cVar36 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        *(undefined4 *)(unsigned)(puVar14 + 2));
            }
            else {
              in_xd2 = *(double *)(unsigned)(puVar14 + 2);
            }
            if (cVar35 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        F32LO(dVar28) - F32HI(dVar29));
            }
            else {
              dVar28 = dVar28 - dVar29;
            }
            uVar18 = (uint)(D2U(dVar28) >> 0x20);
            dVar29 = dVar28;
            if (cVar36 == '\0') {
              dVar29 = CONCAT44D(uVar18,fVar24);
            }
            if (cVar35 == '\0') {
              in_dr0 = CONCAT44D((int)(D2U(dVar33) >> 0x20),
                                        F32LO(dVar33) * F32LO(dVar28));
            }
            else {
              in_dr0 = dVar33 * dVar28;
            }
            in_dr2 = (double)((ulonglong)uVar18 << 0x20);
            if (cVar35 == '\0') {
              fVar24 = F32HI(dVar29) - F32LO(in_dr0);
              in_dr4 = CONCAT44D(fVar24,SUB84(dVar29,0));
              bVar34 = 0.0 < fVar24;
            }
            else {
              in_dr4 = dVar29 - in_dr0;
              bVar34 = in_dr2 < in_dr4;
            }
            if (bVar34) goto LAB_8c25280c;
          }
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar3;
          pdVar9 = (double *)(unsigned)(uVar3 - 1);
          (*(int *)(fr0_ - 0x38)) = 0;
          pdVar8 = pdVar9;
          dVar29 = in_xd0;
          dVar28 = in_xd2;
          if (0 < (int)pdVar9) {
            do {
              uVar27 = SUB84(in_dr2,0);
              uVar5 = SUB84(in_dr0,0);
              uVar1 = *puVar20;
              puVar20 = puVar20 + 1;
              pdVar15 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              *(undefined4 *)(unsigned)pdVar15 = 0xe0000000;
              CacheBlockWriteBack(pdVar15);
              uVar30 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
              if (cVar36 != '\0') {
                in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
                uVar30 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
              }
              uVar4 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar15,pdVar8,ar6_01,puVar14));
              in_xd2 = in_xd14;
              dVar29 = in_xd14;
              dVar33 = in_xd14;
              if (cVar36 == '\0') {
                in_xd2 = CONCAT44D(uVar7,uVar30);
                dVar29 = dVar28;
                uVar27 = uVar7;
                dVar33 = CONCAT44D(uVar7,uVar5);
              }
              *(undefined4 *)(unsigned)(pdVar15 + 5) = uVar4;
              if (cVar36 == '\0') {
                dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar15 + 6),uVar27);
                pdVar8 = (double *)(unsigned)((int)pdVar15 + 0x34);
              }
              else {
                dVar28 = pdVar15[6];
                pdVar8 = pdVar15 + 7;
              }
              if (cVar35 == '\0') {
                dVar28 = (double)(ulonglong)
                                 (uint)(F32HI(dVar33) *
                                        F32HI(dVar28) + F32LO(dVar28));
              }
              uVar27 = (undefined4)((ulonglong)in_xd2 >> 0x20);
              if (cVar36 == '\0') {
                *(int *)(unsigned)(pdVar15 + 4) = SUB84(dVar28,0);
                dVar28 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar27);
                in_xd2 = dVar29;
                dVar29 = CONCAT44D(uVar27,SUB84(dVar33,0));
              }
              else {
                pdVar15[4] = dVar29;
                dVar28 = *pdVar8;
                dVar29 = in_xd2;
              }
              pdVar17 = (double *)(unsigned)((int)pdVar15 + 0x24);
              if (cVar35 == '\0') {
                dVar28 = (double)(ulonglong)
                                 (uint)(F32HI(dVar29) *
                                        F32HI(dVar28) + F32LO(dVar28));
              }
              if (cVar36 == '\0') {
                *(int *)(unsigned)pdVar17 = SUB84(dVar28,0);
              }
              else {
                *pdVar17 = in_xd2;
              }
              CacheBlockWriteBack(pdVar17);
              if (cVar36 == '\0') {
                in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar15,SUB84(dVar29,0));
                in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + 4),SUB84(dVar28,0));
                pdVar15 = pdVar15 + 1;
              }
              else {
                in_dr0 = *pdVar15;
                in_dr2 = pdVar15[1];
                pdVar15 = pdVar15 + 2;
              }
              if (cVar36 == '\0') {
                uVar27 = *(undefined4 *)(unsigned)(pdVar15 + 2);
                *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar15 + 0x14);
                *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar27;
                *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
                unaff_r8 = unaff_r8 + 2;
                *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                dVar29 = pdVar15[2];
                unaff_r8[3] = pdVar15[3];
                unaff_r8[2] = dVar29;
                unaff_r8[1] = in_dr2;
                *unaff_r8 = in_dr0;
              }
              unaff_r8 = unaff_r8 + 4;
              (*(int *)(fr0_ - 0x38)) = (*(int *)(fr0_ - 0x38)) + 1;
              dVar29 = in_xd0;
              dVar28 = in_xd2;
            } while ((*(int *)(fr0_ - 0x38)) < (int)pdVar9);
          }
          uVar30 = SUB84(in_dr2,0);
          uVar4 = SUB84(in_dr0,0);
          puVar19 = puVar20 + 1;
          pdVar9 = (double *)(unsigned)((uint)*puVar20 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          *(undefined4 *)(unsigned)pdVar9 = 0xf0000000;
          CacheBlockWriteBack(pdVar9);
          uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          if (cVar36 != '\0') {
            in_xd4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4));
            uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
          }
          uVar6 = (vsp = ((unsigned long)(fr0_ - 60)), float_to_color_u8(pdVar9,pdVar8,ar6_01,puVar14));
          dVar25 = in_xd14;
          dVar28 = in_xd14;
          dVar33 = in_xd14;
          if (cVar36 == '\0') {
            dVar25 = CONCAT44D(uVar7,uVar5);
            dVar28 = in_xd2;
            uVar30 = uVar7;
            dVar33 = CONCAT44D(uVar7,uVar4);
          }
          *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar6;
          if (cVar36 == '\0') {
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 6),uVar30);
            pdVar8 = (double *)(unsigned)((int)pdVar9 + 0x34);
          }
          else {
            dVar31 = pdVar9[6];
            pdVar8 = pdVar9 + 7;
          }
          if (cVar35 == '\0') {
            dVar31 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) *
                                    F32HI(dVar31) + F32LO(dVar31));
          }
          uVar30 = (undefined4)(D2U(dVar25) >> 0x20);
          if (cVar36 == '\0') {
            *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar31,0);
            dVar31 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar30);
            in_xd2 = dVar28;
            dVar28 = CONCAT44D(uVar30,SUB84(dVar33,0));
          }
          else {
            pdVar9[4] = dVar28;
            dVar31 = *pdVar8;
            in_xd2 = dVar25;
            dVar28 = dVar25;
          }
          pdVar8 = (double *)(unsigned)((int)pdVar9 + 0x24);
          if (cVar35 == '\0') {
            dVar31 = (double)(ulonglong)
                             (uint)(F32HI(dVar28) *
                                    F32HI(dVar31) + F32LO(dVar31));
          }
          if (cVar36 == '\0') {
            *(int *)(unsigned)pdVar8 = SUB84(dVar31,0);
          }
          else {
            *pdVar8 = in_xd2;
          }
          CacheBlockWriteBack(pdVar8);
          if (cVar36 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar28,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(dVar31,0));
            pdVar9 = pdVar9 + 1;
          }
          else {
            in_dr0 = *pdVar9;
            in_dr2 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
          }
          if (cVar36 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)(pdVar9 + 2);
            in_dr4 = CONCAT44D(uVar30,SUB84(dVar25,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 0x14),uVar27);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar30;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar9[2];
            in_dr6 = pdVar9[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          dVar29 = in_xd0;
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            iVar13 = (uint)puVar19[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
            if (cVar36 == '\0') {
              uVar27 = *(undefined4 *)(unsigned)(iVar13 + 0x18);
            }
            else {
              in_xd4 = *(double *)(unsigned)(iVar13 + 0x18);
            }
            dVar28 = in_xd4;
            if (cVar36 == '\0') {
              dVar28 = CONCAT44D(uVar27,SUB84(in_dr0,0));
            }
            iVar12 = (uint)*puVar20 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
            if (cVar36 == '\0') {
              in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar13 + 0x14),SUB84(in_dr6,0));
              in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),
                                        *(undefined4 *)(unsigned)(iVar12 + 0x14));
              dVar33 = CONCAT44D(*(undefined4 *)(unsigned)(iVar12 + 0x18),uVar27);
            }
            else {
              in_dr6 = *(double *)(unsigned)(iVar13 + 0x14);
              dVar33 = *(double *)(unsigned)(iVar12 + 0x18);
            }
            uVar27 = (undefined4)((ulonglong)in_dr6 >> 0x20);
            dVar25 = in_dr6;
            if (cVar36 == '\0') {
              in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar27);
              dVar25 = in_xd2;
            }
            fVar24 = F32HI(dVar33);
            if (cVar35 == '\0') {
              dVar28 = CONCAT44D(F32HI(dVar28) * F32LO(in_dr8),
                                        SUB84(dVar28,0));
              dVar29 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) * fVar24);
            }
            else {
              dVar28 = dVar28 * in_dr8;
              dVar29 = in_dr2 * dVar33;
            }
            puVar14 = (ushort *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)*puVar14 * 0x40);
            if (cVar35 == '\0') {
              dVar28 = CONCAT44D(F32HI(dVar28) - F32LO(dVar29),
                                        SUB84(dVar28,0));
            }
            else {
              dVar28 = dVar28 - dVar29;
            }
            if (cVar36 == '\0') {
              uVar30 = *(undefined4 *)(unsigned)(iVar13 + 0x10);
              in_dr6 = CONCAT44D(uVar27,*(undefined4 *)(unsigned)(iVar12 + 0x10));
              dVar29 = CONCAT44D(SUB84(dVar33,0),uVar30);
              in_dr8 = CONCAT44D(uVar30,SUB84(in_dr8,0));
            }
            else {
              dVar25 = *(double *)(unsigned)(iVar13 + 0x10);
              uVar30 = (undefined4)(D2U(dVar25) >> 0x20);
              dVar29 = in_xd4;
              in_dr8 = dVar25;
            }
            if (cVar35 == '\0') {
              dVar31 = CONCAT44D(F32HI(dVar29) * F32LO(in_dr6),
                                        F32LO(dVar29) * fVar24);
            }
            else {
              dVar31 = dVar29 * dVar33 * in_dr6;
            }
            dVar29 = in_dr6;
            dVar26 = in_dr8;
            if (cVar36 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        (int)((ulonglong)in_dr6 >> 0x20));
              dVar29 = in_xd0;
              dVar26 = CONCAT44D(uVar30,SUB84(in_dr12,0));
            }
            if (cVar35 == '\0') {
              in_dr12 = CONCAT44D(F32HI(dVar26) * F32LO(in_dr8),
                                         SUB84(dVar26,0));
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        F32LO(dVar28) * F32LO(in_dr6));
              fVar24 = F32LO(dVar31) - F32HI(dVar31);
            }
            else {
              in_dr12 = dVar26 * in_dr8;
              dVar28 = dVar28 * in_dr6;
              fVar24 = SUB84(dVar31 - dVar31,0);
            }
            if (cVar36 == '\0') {
              dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(puVar14 + 10),fVar24);
            }
            else {
              dVar31 = *(double *)(unsigned)(puVar14 + 10);
            }
            if (cVar35 == '\0') {
              dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                        F32LO(dVar28) - F32HI(in_dr12));
              dVar31 = CONCAT44D(F32HI(dVar31) * F32LO(dVar31),
                                        SUB84(dVar31,0));
            }
            else {
              dVar28 = dVar28 - in_dr12;
              dVar31 = dVar31 * dVar31;
            }
            if (cVar36 == '\0') {
              dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                        *(undefined4 *)(unsigned)(puVar14 + 8));
            }
            else {
              dVar25 = *(double *)(unsigned)(puVar14 + 8);
            }
            if (cVar35 == '\0') {
              dVar31 = CONCAT44D(F32HI(dVar28) * F32LO(dVar31) +
                                        F32HI(dVar31),SUB84(dVar31,0));
            }
            if (cVar36 == '\0') {
              dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                        *(undefined4 *)(unsigned)(puVar14 + 0xc));
              in_dr0 = CONCAT44D(SUB84(dVar28,0),SUB84(dVar28,0));
              in_xd2 = dVar25;
            }
            else {
              in_xd2 = *(double *)(unsigned)(puVar14 + 0xc);
              in_dr0 = dVar29;
            }
            if (cVar35 == '\0') {
              dVar31 = (double)((ulonglong)
                                (uint)(F32HI(in_dr0) * F32LO(dVar31) +
                                      F32HI(dVar31)) << 0x20);
            }
            in_dr2 = (double)(D2U(dVar31) & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar36 == '\0') {
              in_dr4 = CONCAT44D((int)(D2U(dVar31) >> 0x20),SUB84(dVar33,0));
            }
            if (cVar35 == '\0') {
              bVar34 = 0.0 < F32HI(in_dr4);
            }
            else {
              bVar34 = in_dr2 < in_dr4;
            }
            in_xd0 = dVar29;
            if (bVar34) goto LAB_8c25280c;
          }
          puVar21 = puVar19 + 2;
          puVar19 = puVar19 + 3;
          (*(int *)(fr0_ - 0x34)) = 0;
          ar4_00 = (uint *)(unsigned)((uint)*puVar20 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          ar5_00 = (uint *)(unsigned)((uint)*puVar21 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          if (0 < (int)(uVar3 - 2)) {
            do {
              uVar1 = *puVar19;
              puVar19 = puVar19 + 1;
              ar6_00 = (uint *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              if ((*ar4_00 & *ar5_00 & *ar6_00 & 1) == 0) {
                (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c23e4c8(ar4_00,ar5_00,ar6_00,puVar14));
              }
              (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
              ar4_00 = ar5_00;
              ar5_00 = ar6_00;
            } while ((*(int *)(fr0_ - 0x34)) < (int)(uVar3 - 2));
          }
        }
      }
      else {
LAB_8c25280c:
        puVar19 = puVar20 + uVar3;
        dVar29 = in_xd0;
      }
      iVar16 = iVar16 + 1;
      in_xd0 = dVar29;
    }
  }
  else if (uVar3 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab318) & 1) == 0) {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c246b7a);
    }
    else {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c246756);
    }
                    
                    
    uVar7 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)UNRECOVERED_JUMPTABLE))(ar4,(ushort)(*(int *)(fr0_ - 0x38)),vr6,vr7));
    return uVar7;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c251f78\n.set _FUN_8c251f78, _FUN_8c251f78_def\n");
