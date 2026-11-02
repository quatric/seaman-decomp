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
uint FUN_8c252e7c_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c252e7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  uint *ar6_00;
  ushort *puVar6;
  int iVar7;
  uint *ar4_00;
  uint uVar8;
  int iVar9;
  int iVar10;
  double *unaff_r8 = 0;
  double *pdVar11;
  int iVar12;
  double *pdVar13;
  uint uVar14;
  uint *ar5_00;
  ushort *puVar15;
  ushort *puVar16;
  double in_dr0 = 0;
  float fVar17;
  float fVar18;
  double in_dr2 = 0;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double in_dr4 = 0;
  float fVar23;
  undefined4 uVar24;
  double dVar22;
  undefined4 uVar25;
  double in_dr6 = 0;
  double dVar26;
  double in_dr8 = 0;
  double in_dr12 = 0;
  double dVar28;
  double in_xd0 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double dVar29;
  double in_xd8 = 0;
  bool bVar30;
  char cVar31;
  char cVar32;
  undefined4 uVar27;
  
  cVar32 = '\0';
  cVar31 = '\0';
  uVar1 = *ar4;
  (*(uint*)((uchar*)&(*(int *)(fr0_ - 0x30))+0)) = uVar1 & 0x3fff;
  uVar2 = uVar1 & 0xc000;
  puVar15 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 3;
    (*(int *)(fr0_ - 0x30)) = 0;
    while( true ) {
      uVar24 = SUB84(in_dr4,0);
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= (*(int *)(fr0_ - 0x30))) break;
      puVar6 = puVar15 + 1;
      pdVar3 = (double *)(unsigned)((uint)*puVar15 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar16 = puVar15 + 2;
      puVar15 = puVar15 + 3;
      pdVar13 = (double *)(unsigned)((uint)*puVar16 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar4 = (double *)(unsigned)((uint)*puVar6 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar3 & *(uint *)(unsigned)pdVar4 & *(uint *)(unsigned)pdVar13 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar3 | *(uint *)(unsigned)pdVar4 | *(uint *)(unsigned)pdVar13) & 1) == 0) {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            if (cVar32 == '\0') {
              uVar24 = *(undefined4 *)(unsigned)((int)pdVar4 + 4);
              dVar26 = CONCAT44D(uVar24,*(undefined4 *)(unsigned)((int)pdVar3 + 4));
            }
            else {
              dVar26 = *(double *)(unsigned)((int)pdVar4 + 4);
            }
            if (cVar31 == '\0') {
              dVar26 = CONCAT44D(F32HI(dVar26) - F32LO(dVar26),
                                        SUB84(dVar26,0));
            }
            else {
              dVar26 = dVar26 - dVar26;
            }
            if (cVar32 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar13 + 1));
              dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar4 + 1),uVar24);
            }
            else {
              dVar22 = pdVar4[1];
            }
            fVar23 = F32HI(dVar22);
            if (cVar31 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),F32LO(dVar26) - fVar23);
            }
            else {
              dVar26 = dVar26 - dVar22;
            }
            dVar29 = dVar22;
            if (cVar32 == '\0') {
              in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar23);
              dVar29 = in_xd0;
            }
            in_xd0 = dVar29;
            if (cVar31 == '\0') {
              dVar26 = CONCAT44D(F32HI(dVar26) * F32LO(dVar26),
                                        SUB84(dVar26,0));
            }
            else {
              dVar26 = dVar26 * dVar26;
            }
            if (cVar32 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)(pdVar3 + 1)
                                       );
            }
            if (cVar31 == '\0') {
              dVar29 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                        F32LO(in_dr0) - F32LO(dVar26));
            }
            else {
              dVar29 = in_dr0 - dVar26;
            }
            if (cVar32 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                        *(undefined4 *)(unsigned)((int)pdVar13 + 4));
            }
            if (cVar31 == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                        F32LO(dVar26) - F32LO(dVar22));
            }
            else {
              dVar26 = dVar26 - dVar22;
            }
            uVar2 = (uint)(D2U(dVar26) >> 0x20);
            dVar21 = dVar26;
            if (cVar32 == '\0') {
              dVar21 = CONCAT44D(uVar2,SUB84(dVar22,0));
            }
            if (cVar31 == '\0') {
              in_dr0 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        F32LO(dVar29) * F32LO(dVar26));
            }
            else {
              in_dr0 = dVar29 * dVar26;
            }
            in_dr2 = (double)((ulonglong)uVar2 << 0x20);
            if (cVar31 == '\0') {
              fVar23 = F32HI(dVar21) - F32LO(in_dr0);
              in_dr4 = CONCAT44D(fVar23,SUB84(dVar21,0));
              bVar30 = 0.0 < fVar23;
            }
            else {
              in_dr4 = dVar21 - in_dr0;
              bVar30 = in_dr2 < in_dr4;
            }
            uVar24 = SUB84(in_dr4,0);
            if (bVar30) goto LAB_8c2530dc;
          }
          *(undefined4 *)(unsigned)pdVar3 = 0xe0000000;
          CacheBlockWriteBack(pdVar3);
          if (cVar32 == '\0') {
            *(undefined4 *)(unsigned)(pdVar3 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar3 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar25 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar3 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar19 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar25);
            *(undefined4 *)(unsigned)((int)pdVar3 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar3[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar3 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            pdVar3[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar3 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar3 + 0x2c));
          if (cVar32 == '\0') {
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(in_dr0,0));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 4),(int)uVar19);
            pdVar3 = pdVar3 + 1;
          }
          else {
            dVar26 = *pdVar3;
            dVar22 = pdVar3[1];
            pdVar3 = pdVar3 + 2;
          }
          if (cVar32 == '\0') {
            uVar25 = *(undefined4 *)(unsigned)(pdVar3 + 2);
            dVar29 = CONCAT44D(uVar25,uVar24);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar3 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar25;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar22) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar26) >> 0x20);
          }
          else {
            dVar29 = pdVar3[2];
            unaff_r8[3] = pdVar3[3];
            unaff_r8[2] = dVar29;
            unaff_r8[1] = dVar22;
            *unaff_r8 = dVar26;
          }
          *(undefined4 *)(unsigned)pdVar4 = 0xe0000000;
          CacheBlockWriteBack(pdVar4);
          if (cVar32 == '\0') {
            *(undefined4 *)(unsigned)(pdVar4 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar4 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar19 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar24);
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar4[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar4 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            pdVar4[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar4 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar4 + 0x2c));
          if (cVar32 == '\0') {
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,SUB84(dVar26,0));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 4),(int)uVar19);
            pdVar4 = pdVar4 + 1;
          }
          else {
            dVar26 = *pdVar4;
            dVar22 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          if (cVar32 == '\0') {
            uVar24 = *(undefined4 *)(unsigned)(pdVar4 + 2);
            dVar29 = CONCAT44D(uVar24,SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar4 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar24;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar22) >> 0x20);
            pdVar3 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar3 = (int)(D2U(dVar26) >> 0x20);
          }
          else {
            dVar29 = pdVar4[2];
            unaff_r8[7] = pdVar4[3];
            unaff_r8[6] = dVar29;
            unaff_r8[5] = dVar22;
            pdVar3 = unaff_r8 + 4;
            *pdVar3 = dVar26;
          }
          *(undefined4 *)(unsigned)pdVar13 = 0xf0000000;
          CacheBlockWriteBack(pdVar13);
          if (cVar32 == '\0') {
            *(undefined4 *)(unsigned)(pdVar13 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar13 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar13 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar19 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar24);
            *(undefined4 *)(unsigned)((int)pdVar13 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar13[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar13 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            pdVar13[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar13 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar13 + 0x2c));
          if (cVar32 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar13,SUB84(dVar26,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar13 + 4),(int)uVar19);
            pdVar13 = pdVar13 + 1;
          }
          else {
            in_dr0 = *pdVar13;
            in_dr2 = pdVar13[1];
            pdVar13 = pdVar13 + 2;
          }
          if (cVar32 == '\0') {
            uVar24 = *(undefined4 *)(unsigned)(pdVar13 + 2);
            in_dr4 = CONCAT44D(uVar24,SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)pdVar3 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar13 + 0x14);
            *(undefined4 *)(unsigned)(pdVar3 + 7) = uVar24;
            *(int *)(unsigned)((int)pdVar3 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar3 = pdVar3 + 6;
            *(int *)(unsigned)pdVar3 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar13[2];
            pdVar3[7] = pdVar13[3];
            pdVar3[6] = in_dr4;
            pdVar3[5] = in_dr2;
            pdVar3 = pdVar3 + 4;
            *pdVar3 = in_dr0;
          }
          unaff_r8 = pdVar3 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
        }
        else {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            if (cVar32 == '\0') {
              uVar24 = *(undefined4 *)(unsigned)(pdVar4 + 3);
              uVar25 = *(undefined4 *)(unsigned)((int)pdVar4 + 0x14);
              dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 0x14),uVar24);
              dVar26 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)(pdVar3 + 3));
              in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar25);
              dVar29 = CONCAT44D(uVar24,SUB84(in_dr0,0));
            }
            else {
              dVar29 = pdVar4[3];
              dVar26 = *(double *)(unsigned)((int)pdVar4 + 0x14);
              dVar22 = *(double *)(unsigned)((int)pdVar3 + 0x14);
              uVar25 = (undefined4)(D2U(dVar26) >> 0x20);
              uVar24 = SUB84(dVar22,0);
              in_xd8 = dVar29;
            }
            fVar23 = F32LO(dVar26);
            fVar18 = F32HI(dVar22);
            if (cVar31 == '\0') {
              fVar17 = F32LO(in_dr2) * fVar23;
              dVar29 = CONCAT44D(F32HI(dVar29) * fVar18,SUB84(dVar29,0))
              ;
            }
            else {
              fVar17 = SUB84(in_dr2 * dVar26,0);
              dVar29 = dVar29 * dVar22;
            }
            if (cVar32 == '\0') {
              dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar3 + 2),*(undefined4 *)(unsigned)(pdVar4 + 2));
              dVar20 = CONCAT44D(uVar24,fVar17);
            }
            else {
              in_xd6 = pdVar4[2];
              dVar21 = pdVar3[2];
              dVar20 = in_xd8;
            }
            fVar17 = F32HI(dVar21);
            if (cVar31 == '\0') {
              dVar20 = CONCAT44D(F32HI(dVar20) * fVar17,SUB84(dVar20,0))
              ;
            }
            else {
              dVar20 = dVar20 * dVar21;
            }
            dVar28 = in_xd6;
            if (cVar32 == '\0') {
              dVar28 = CONCAT44D(SUB84(dVar21,0),SUB84(in_dr12,0));
            }
            if (cVar31 == '\0') {
              dVar29 = CONCAT44D(F32HI(dVar29) - F32LO(dVar20),
                                        SUB84(dVar29,0));
            }
            else {
              dVar29 = dVar29 - dVar20;
            }
            if (cVar32 == '\0') {
              dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),SUB84(dVar21,0));
            }
            if (cVar31 == '\0') {
              dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) * fVar23);
            }
            else {
              dVar20 = dVar20 * dVar26;
            }
            if (cVar32 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar25);
              dVar26 = in_xd0;
            }
            if (cVar31 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),F32LO(dVar29) * fVar17);
              in_dr12 = CONCAT44D(F32HI(dVar28) * fVar18,SUB84(dVar28,0)
                                        );
              fVar18 = F32LO(dVar20) - F32HI(dVar20);
            }
            else {
              dVar29 = dVar29 * dVar21;
              in_dr12 = dVar28 * dVar22;
              fVar18 = SUB84(dVar20 - dVar20,0);
            }
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar13 + 0x14),fVar18);
            }
            else {
              dVar22 = *(double *)(unsigned)((int)pdVar13 + 0x14);
            }
            if (cVar31 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        F32LO(dVar29) - F32HI(in_dr12));
              dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(dVar22),
                                        SUB84(dVar22,0));
            }
            else {
              dVar29 = dVar29 - in_dr12;
              dVar22 = dVar22 * dVar22;
            }
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar13 + 2));
            }
            if (cVar31 == '\0') {
              dVar22 = CONCAT44D(F32HI(dVar29) * F32LO(dVar22) +
                                        F32HI(dVar22),SUB84(dVar22,0));
            }
            in_dr0 = dVar26;
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar13 + 3));
              in_dr0 = CONCAT44D(SUB84(dVar29,0),SUB84(dVar29,0));
            }
            if (cVar31 == '\0') {
              dVar22 = (double)((ulonglong)
                                (uint)(F32HI(in_dr0) * F32LO(dVar22) +
                                      F32HI(dVar22)) << 0x20);
            }
            in_dr2 = (double)(D2U(dVar22) & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar32 == '\0') {
              in_dr4 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar23);
            }
            if (cVar31 == '\0') {
              bVar30 = 0.0 < F32HI(in_dr4);
            }
            else {
              bVar30 = in_dr2 < in_dr4;
            }
            in_xd0 = dVar26;
            if (bVar30) goto LAB_8c2530dc;
          }
          (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23eb44(pdVar3,pdVar4,pdVar13,ar7));
        }
      }
LAB_8c2530dc:
      (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) + 1;
    }
  }
  else if (uVar2 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 4;
    (*(int *)(fr0_ - 0x28)) = 0;
    while( true ) {
      uVar24 = SUB84(in_dr4,0);
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= (*(int *)(fr0_ - 0x28))) break;
      pdVar4 = (double *)(unsigned)((uint)*puVar15 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar6 = puVar15 + 3;
      pdVar13 = (double *)(unsigned)((uint)puVar15[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      pdVar11 = (double *)(unsigned)((uint)puVar15[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar15 = puVar15 + 4;
      pdVar3 = (double *)(unsigned)((uint)*puVar6 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((*(uint *)(unsigned)pdVar4 & *(uint *)(unsigned)pdVar13 & *(uint *)(unsigned)pdVar11 & *(uint *)(unsigned)pdVar3 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)pdVar4 | *(uint *)(unsigned)pdVar13 | *(uint *)(unsigned)pdVar11 | *(uint *)(unsigned)pdVar3) & 1) == 0) {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            if (cVar32 == '\0') {
              uVar25 = *(undefined4 *)(unsigned)((int)pdVar13 + 4);
              dVar22 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)((int)pdVar4 + 4));
              dVar26 = CONCAT44D(uVar25,uVar24);
            }
            else {
              dVar22 = *(double *)(unsigned)((int)pdVar13 + 4);
              uVar25 = (undefined4)(D2U(dVar22) >> 0x20);
              dVar26 = dVar22;
            }
            if (cVar31 == '\0') {
              dVar22 = CONCAT44D(F32HI(dVar22) - F32LO(dVar22),
                                        SUB84(dVar22,0));
            }
            else {
              dVar22 = dVar22 - dVar22;
            }
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar11 + 1));
              dVar26 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)(pdVar13 + 1));
            }
            else {
              in_xd4 = pdVar13[1];
            }
            fVar23 = F32LO(dVar26);
            if (cVar31 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) - fVar23);
            }
            else {
              dVar22 = dVar22 - dVar26;
            }
            dVar29 = in_xd4;
            if (cVar32 == '\0') {
              in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar23);
              dVar29 = in_xd0;
            }
            in_xd0 = dVar29;
            if (cVar31 == '\0') {
              dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(dVar22),
                                        SUB84(dVar22,0));
            }
            else {
              dVar22 = dVar22 * dVar22;
            }
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(pdVar4 + 1)
                                       );
            }
            if (cVar31 == '\0') {
              dVar29 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                        F32LO(in_dr0) - F32LO(dVar22));
            }
            else {
              dVar29 = in_dr0 - dVar22;
            }
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        *(undefined4 *)(unsigned)((int)pdVar11 + 4));
            }
            if (cVar31 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        F32LO(dVar22) - F32HI(dVar26));
            }
            else {
              dVar22 = dVar22 - dVar26;
            }
            uVar2 = (uint)(D2U(dVar22) >> 0x20);
            dVar26 = dVar22;
            if (cVar32 == '\0') {
              dVar26 = CONCAT44D(uVar2,fVar23);
            }
            if (cVar31 == '\0') {
              in_dr0 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        F32LO(dVar29) * F32LO(dVar22));
            }
            else {
              in_dr0 = dVar29 * dVar22;
            }
            in_dr2 = (double)((ulonglong)uVar2 << 0x20);
            if (cVar31 == '\0') {
              fVar23 = F32HI(dVar26) - F32LO(in_dr0);
              in_dr4 = CONCAT44D(fVar23,SUB84(dVar26,0));
              bVar30 = 0.0 < fVar23;
            }
            else {
              in_dr4 = dVar26 - in_dr0;
              bVar30 = in_dr2 < in_dr4;
            }
            uVar24 = SUB84(in_dr4,0);
            if (bVar30) goto LAB_8c253392;
          }
          *(undefined4 *)(unsigned)pdVar4 = 0xe0000000;
          CacheBlockWriteBack(pdVar4);
          if (cVar32 == '\0') {
            *(undefined4 *)(unsigned)(pdVar4 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar25 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar4 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar19 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar25);
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar4[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar4 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            pdVar4[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar4 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar4 + 0x2c));
          if (cVar32 == '\0') {
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,SUB84(in_dr0,0));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 4),(int)uVar19);
            pdVar4 = pdVar4 + 1;
          }
          else {
            dVar26 = *pdVar4;
            dVar22 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          if (cVar32 == '\0') {
            uVar25 = *(undefined4 *)(unsigned)(pdVar4 + 2);
            dVar29 = CONCAT44D(uVar25,uVar24);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar4 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar25;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar22) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar26) >> 0x20);
          }
          else {
            dVar29 = pdVar4[2];
            unaff_r8[3] = pdVar4[3];
            unaff_r8[2] = dVar29;
            unaff_r8[1] = dVar22;
            *unaff_r8 = dVar26;
          }
          *(undefined4 *)(unsigned)pdVar13 = 0xe0000000;
          CacheBlockWriteBack(pdVar13);
          if (cVar32 == '\0') {
            *(undefined4 *)(unsigned)(pdVar13 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar13 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar13 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar19 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar24);
            *(undefined4 *)(unsigned)((int)pdVar13 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar13[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar13 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            pdVar13[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar13 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar13 + 0x2c));
          if (cVar32 == '\0') {
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar13,SUB84(dVar26,0));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar13 + 4),(int)uVar19);
            pdVar13 = pdVar13 + 1;
          }
          else {
            dVar26 = *pdVar13;
            dVar22 = pdVar13[1];
            pdVar13 = pdVar13 + 2;
          }
          if (cVar32 == '\0') {
            uVar24 = *(undefined4 *)(unsigned)(pdVar13 + 2);
            dVar29 = CONCAT44D(uVar24,SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar13 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 7) = uVar24;
            *(int *)(unsigned)((int)unaff_r8 + 0x34) = (int)(D2U(dVar22) >> 0x20);
            pdVar4 = unaff_r8 + 6;
            *(int *)(unsigned)pdVar4 = (int)(D2U(dVar26) >> 0x20);
          }
          else {
            dVar29 = pdVar13[2];
            unaff_r8[7] = pdVar13[3];
            unaff_r8[6] = dVar29;
            unaff_r8[5] = dVar22;
            pdVar4 = unaff_r8 + 4;
            *pdVar4 = dVar26;
          }
          *(undefined4 *)(unsigned)pdVar11 = 0xe0000000;
          CacheBlockWriteBack(pdVar11);
          if (cVar32 == '\0') {
            *(undefined4 *)(unsigned)(pdVar11 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar11 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar11 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar19 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar24);
            *(undefined4 *)(unsigned)((int)pdVar11 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar11[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar11 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            pdVar11[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar11 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar11 + 0x2c));
          if (cVar32 == '\0') {
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(dVar26,0));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),(int)uVar19);
            pdVar11 = pdVar11 + 1;
          }
          else {
            dVar26 = *pdVar11;
            dVar22 = pdVar11[1];
            pdVar11 = pdVar11 + 2;
          }
          if (cVar32 == '\0') {
            uVar24 = *(undefined4 *)(unsigned)(pdVar11 + 2);
            dVar29 = CONCAT44D(uVar24,SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar11 + 0x14);
            *(undefined4 *)(unsigned)(pdVar4 + 7) = uVar24;
            *(int *)(unsigned)((int)pdVar4 + 0x34) = (int)(D2U(dVar22) >> 0x20);
            pdVar4 = pdVar4 + 6;
            *(int *)(unsigned)pdVar4 = (int)(D2U(dVar26) >> 0x20);
          }
          else {
            dVar29 = pdVar11[2];
            pdVar4[7] = pdVar11[3];
            pdVar4[6] = dVar29;
            pdVar4[5] = dVar22;
            pdVar4 = pdVar4 + 4;
            *pdVar4 = dVar26;
          }
          *(undefined4 *)(unsigned)pdVar3 = 0xf0000000;
          CacheBlockWriteBack(pdVar3);
          if (cVar32 == '\0') {
            *(undefined4 *)(unsigned)(pdVar3 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar3 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar3 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar19 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar24);
            *(undefined4 *)(unsigned)((int)pdVar3 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar3[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar3 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            pdVar3[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar3 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar3 + 0x2c));
          if (cVar32 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(dVar26,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 4),(int)uVar19);
            pdVar3 = pdVar3 + 1;
          }
          else {
            in_dr0 = *pdVar3;
            in_dr2 = pdVar3[1];
            pdVar3 = pdVar3 + 2;
          }
          if (cVar32 == '\0') {
            uVar24 = *(undefined4 *)(unsigned)(pdVar3 + 2);
            in_dr4 = CONCAT44D(uVar24,SUB84(dVar29,0));
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x3c) = *(undefined4 *)(unsigned)((int)pdVar3 + 0x14);
            *(undefined4 *)(unsigned)(pdVar4 + 7) = uVar24;
            *(int *)(unsigned)((int)pdVar4 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
            pdVar4 = pdVar4 + 6;
            *(int *)(unsigned)pdVar4 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar3[2];
            pdVar4[7] = pdVar3[3];
            pdVar4[6] = in_dr4;
            pdVar4[5] = in_dr2;
            pdVar4 = pdVar4 + 4;
            *pdVar4 = in_dr0;
          }
          unaff_r8 = pdVar4 + 4;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
        }
        else {
          dVar26 = in_xd0;
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            if (cVar32 == '\0') {
              uVar25 = *(undefined4 *)(unsigned)(pdVar13 + 3);
              uVar27 = *(undefined4 *)(unsigned)((int)pdVar13 + 0x14);
              dVar26 = CONCAT44D(uVar27,uVar25);
              dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 0x14),uVar24);
              in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar4 + 3),SUB84(in_dr8,0));
              in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar27);
              dVar29 = CONCAT44D(uVar25,SUB84(in_dr0,0));
            }
            else {
              dVar29 = pdVar13[3];
              dVar26 = *(double *)(unsigned)((int)pdVar13 + 0x14);
              dVar22 = *(double *)(unsigned)((int)pdVar4 + 0x14);
              in_dr8 = pdVar4[3];
              uVar27 = (undefined4)(D2U(dVar26) >> 0x20);
              uVar25 = SUB84(dVar26,0);
              in_xd6 = dVar29;
            }
            fVar18 = F32HI(in_dr8);
            fVar23 = F32HI(dVar22);
            if (cVar31 == '\0') {
              fVar17 = F32LO(in_dr2) * fVar18;
              dVar29 = CONCAT44D(F32HI(dVar29) * fVar23,SUB84(dVar29,0))
              ;
            }
            else {
              fVar17 = SUB84(in_dr2 * in_dr8,0);
              dVar29 = dVar29 * dVar22;
            }
            if (cVar32 == '\0') {
              in_dr8 = CONCAT44D(fVar18,*(undefined4 *)(unsigned)(pdVar13 + 2));
              dVar22 = CONCAT44D(fVar23,*(undefined4 *)(unsigned)(pdVar4 + 2));
              dVar21 = CONCAT44D(uVar25,fVar17);
            }
            else {
              in_xd8 = pdVar13[2];
              in_xd4 = pdVar4[2];
              dVar21 = in_xd6;
            }
            fVar23 = F32LO(dVar22);
            if (cVar31 == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) * fVar23,SUB84(dVar21,0))
              ;
            }
            else {
              dVar21 = dVar21 * dVar22;
            }
            dVar20 = in_xd8;
            if (cVar32 == '\0') {
              dVar20 = CONCAT44D(SUB84(in_dr8,0),SUB84(in_dr12,0));
            }
            if (cVar31 == '\0') {
              dVar29 = CONCAT44D(F32HI(dVar29) - F32LO(dVar21),
                                        SUB84(dVar29,0));
            }
            else {
              dVar29 = dVar29 - dVar21;
            }
            if (cVar32 == '\0') {
              dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),SUB84(in_dr8,0));
            }
            if (cVar31 == '\0') {
              dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                        F32LO(dVar21) * F32HI(in_dr8));
            }
            else {
              dVar21 = dVar21 * in_dr8;
            }
            if (cVar32 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar27);
              dVar26 = in_xd0;
            }
            if (cVar31 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),F32LO(dVar29) * fVar23);
              in_dr12 = CONCAT44D(F32HI(dVar20) *
                                         F32HI(dVar22),SUB84(dVar20,0));
              fVar18 = F32LO(dVar21) - F32HI(dVar21);
            }
            else {
              dVar29 = dVar29 * dVar22;
              in_dr12 = dVar20 * dVar22;
              fVar18 = SUB84(dVar21 - dVar21,0);
            }
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 0x14),fVar18);
            }
            else {
              dVar22 = *(double *)(unsigned)((int)pdVar11 + 0x14);
            }
            if (cVar31 == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        F32LO(dVar29) - F32HI(in_dr12));
              dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(dVar22),
                                        SUB84(dVar22,0));
            }
            else {
              dVar29 = dVar29 - in_dr12;
              dVar22 = dVar22 * dVar22;
            }
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar11 + 2));
            }
            if (cVar31 == '\0') {
              dVar22 = CONCAT44D(F32HI(dVar29) * F32LO(dVar22) +
                                        F32HI(dVar22),SUB84(dVar22,0));
            }
            in_dr0 = dVar26;
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        *(undefined4 *)(unsigned)(pdVar11 + 3));
              in_dr0 = CONCAT44D(SUB84(dVar29,0),SUB84(dVar29,0));
            }
            if (cVar31 == '\0') {
              dVar22 = (double)((ulonglong)
                                (uint)(F32HI(in_dr0) * F32LO(dVar22) +
                                      F32HI(dVar22)) << 0x20);
            }
            in_dr2 = (double)(D2U(dVar22) & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar32 == '\0') {
              in_dr4 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar23);
            }
            if (cVar31 == '\0') {
              bVar30 = 0.0 < F32HI(in_dr4);
            }
            else {
              bVar30 = in_dr2 < in_dr4;
            }
            in_xd0 = dVar26;
            if (bVar30) goto LAB_8c253392;
          }
          in_xd0 = dVar26;
          if ((*(uint *)(unsigned)pdVar4 & *(uint *)(unsigned)pdVar13 & *(uint *)(unsigned)pdVar11 & 1) == 0) {
            (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23eb44(pdVar4,pdVar13,pdVar11,ar7));
            in_xd0 = dVar26;
          }
          if ((*(uint *)(unsigned)pdVar13 & *(uint *)(unsigned)pdVar11 & *(uint *)(unsigned)pdVar3 & 1) == 0) {
            (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23eb44(pdVar13,pdVar11,pdVar3,ar7));
          }
        }
      }
LAB_8c253392:
      (*(int *)(fr0_ - 0x28)) = (*(int *)(fr0_ - 0x28)) + 1;
    }
  }
  else if (uVar2 == 0x8000) {
    iVar12 = 0;
    while( true ) {
      uVar24 = SUB84(in_dr6,0);
      uVar25 = SUB84(in_dr4,0);
      uVar2 = (uint)ar4[1];
      if ((int)uVar2 <= iVar12) break;
      uVar8 = 0;
      puVar16 = puVar15 + 1;
      iVar10 = 0;
      uVar14 = 0xffffffff;
      uVar2 = (uint)*puVar15;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar2;
      puVar6 = puVar16;
      if (uVar2 != 0) {
        do {
          uVar1 = *puVar6;
          puVar6 = puVar6 + 1;
          iVar10 = iVar10 + 1;
          uVar5 = *(uint *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          uVar14 = uVar14 & uVar5;
          uVar8 = uVar8 | uVar5;
        } while (iVar10 < (int)uVar2);
      }
      if ((uVar14 & 0x3f) == 0) {
        if ((uVar8 & 1) == 0) {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            iVar10 = (uint)puVar15[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
            if (cVar32 == '\0') {
              dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(iVar10 + 4),uVar25);
            }
            else {
              dVar26 = *(double *)(unsigned)(iVar10 + 4);
            }
            iVar9 = (uint)*puVar16 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
            uVar25 = (undefined4)(D2U(dVar26) >> 0x20);
            dVar22 = dVar26;
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)(iVar9 + 4));
            }
            if (cVar31 == '\0') {
              dVar22 = CONCAT44D(F32HI(dVar22) - F32LO(dVar22),
                                        SUB84(dVar22,0));
            }
            else {
              dVar22 = dVar22 - dVar22;
            }
            iVar7 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)puVar15[3] * 0x40;
            if (cVar32 == '\0') {
              fVar23 = *(float *)(unsigned)(iVar10 + 8);
              dVar26 = CONCAT44D(uVar25,fVar23);
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(iVar7 + 8))
              ;
              in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar23);
            }
            else {
              in_xd0 = *(double *)(unsigned)(iVar10 + 8);
              fVar23 = F32LO(dVar26);
              in_xd4 = in_xd0;
            }
            if (cVar31 == '\0') {
              fVar18 = F32LO(dVar22) - fVar23;
              dVar22 = CONCAT44D(F32HI(dVar22) * fVar18,fVar18);
            }
            else {
              dVar22 = (dVar22 - dVar26) * (dVar22 - dVar26);
            }
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(iVar9 + 8))
              ;
            }
            if (cVar31 == '\0') {
              dVar29 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                        F32LO(in_dr0) - F32LO(dVar22));
            }
            else {
              dVar29 = in_dr0 - dVar22;
            }
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)(iVar7 + 4))
              ;
            }
            if (cVar31 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        F32LO(dVar22) - F32HI(dVar26));
            }
            else {
              dVar22 = dVar22 - dVar26;
            }
            uVar8 = (uint)(D2U(dVar22) >> 0x20);
            dVar26 = dVar22;
            if (cVar32 == '\0') {
              dVar26 = CONCAT44D(uVar8,fVar23);
            }
            if (cVar31 == '\0') {
              in_dr0 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        F32LO(dVar29) * F32LO(dVar22));
            }
            else {
              in_dr0 = dVar29 * dVar22;
            }
            in_dr2 = (double)((ulonglong)uVar8 << 0x20);
            if (cVar31 == '\0') {
              fVar23 = F32HI(dVar26) - F32LO(in_dr0);
              in_dr4 = CONCAT44D(fVar23,SUB84(dVar26,0));
              bVar30 = 0.0 < fVar23;
            }
            else {
              in_dr4 = dVar26 - in_dr0;
              bVar30 = in_dr2 < in_dr4;
            }
            if (bVar30) goto LAB_8c2535c8;
          }
          uVar25 = SUB84(in_dr4,0);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar2;
          (*(int *)(fr0_ - 0x34)) = 0;
          if (0 < (int)(uVar2 - 1)) {
            do {
              uVar1 = *puVar16;
              puVar16 = puVar16 + 1;
              pdVar3 = (double *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              *(undefined4 *)(unsigned)pdVar3 = 0xe0000000;
              CacheBlockWriteBack(pdVar3);
              if (cVar32 == '\0') {
                *(undefined4 *)(unsigned)(pdVar3 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
                *(undefined4 *)(unsigned)((int)pdVar3 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
                uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
                *(undefined4 *)(unsigned)(pdVar3 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
                uVar19 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar24);
                *(undefined4 *)(unsigned)((int)pdVar3 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
              }
              else {
                pdVar3[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
                *(ulonglong *)(unsigned)((int)pdVar3 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
                pdVar3[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
                uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
                *(undefined8 *)(unsigned)((int)pdVar3 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
              }
              CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar3 + 0x2c));
              if (cVar32 == '\0') {
                in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(in_dr0,0));
                dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 4),(int)uVar19);
                pdVar3 = pdVar3 + 1;
              }
              else {
                in_dr0 = *pdVar3;
                dVar26 = pdVar3[1];
                pdVar3 = pdVar3 + 2;
              }
              if (cVar32 == '\0') {
                uVar24 = *(undefined4 *)(unsigned)(pdVar3 + 2);
                in_dr4 = CONCAT44D(uVar24,SUB84(in_dr4,0));
                in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 0x14),SUB84(in_dr6,0));
                *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar3 + 0x14);
                *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar24;
                *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar26) >> 0x20);
                unaff_r8 = unaff_r8 + 2;
                *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                in_dr4 = pdVar3[2];
                in_dr6 = pdVar3[3];
                unaff_r8[3] = in_dr6;
                unaff_r8[2] = in_dr4;
                unaff_r8[1] = dVar26;
                *unaff_r8 = in_dr0;
              }
              uVar24 = SUB84(in_dr6,0);
              uVar25 = SUB84(in_dr4,0);
              unaff_r8 = unaff_r8 + 4;
              (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
            } while ((*(int *)(fr0_ - 0x34)) < (int)(uVar2 - 1));
          }
          puVar15 = puVar16 + 1;
          pdVar3 = (double *)(unsigned)((uint)*puVar16 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          *(undefined4 *)(unsigned)pdVar3 = 0xf0000000;
          CacheBlockWriteBack(pdVar3);
          if (cVar32 == '\0') {
            *(undefined4 *)(unsigned)(pdVar3 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar3 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar3 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar19 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar27);
            *(undefined4 *)(unsigned)((int)pdVar3 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar3[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar3 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            pdVar3[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar3 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar3 + 0x2c));
          if (cVar32 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(in_dr0,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 4),(int)uVar19);
            pdVar3 = pdVar3 + 1;
          }
          else {
            in_dr0 = *pdVar3;
            in_dr2 = pdVar3[1];
            pdVar3 = pdVar3 + 2;
          }
          if (cVar32 == '\0') {
            uVar27 = *(undefined4 *)(unsigned)(pdVar3 + 2);
            in_dr4 = CONCAT44D(uVar27,uVar25);
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 0x14),uVar24);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar3 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar27;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar3[2];
            in_dr6 = pdVar3[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          dVar26 = in_xd0;
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
            iVar9 = (uint)puVar15[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
            if (cVar32 == '\0') {
              uVar25 = *(undefined4 *)(unsigned)(iVar9 + 0x18);
            }
            else {
              in_xd4 = *(double *)(unsigned)(iVar9 + 0x18);
            }
            dVar22 = in_xd4;
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D(uVar25,SUB84(in_dr0,0));
            }
            iVar10 = (uint)*puVar16 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
            if (cVar32 == '\0') {
              in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(iVar9 + 0x14),uVar24);
              in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),
                                        *(undefined4 *)(unsigned)(iVar10 + 0x14));
              dVar29 = CONCAT44D(*(undefined4 *)(unsigned)(iVar10 + 0x18),uVar25);
            }
            else {
              in_dr6 = *(double *)(unsigned)(iVar9 + 0x14);
              dVar29 = *(double *)(unsigned)(iVar10 + 0x18);
            }
            uVar24 = (undefined4)((ulonglong)in_dr6 >> 0x20);
            if (cVar32 == '\0') {
              in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar24);
            }
            fVar23 = F32HI(dVar29);
            if (cVar31 == '\0') {
              dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(in_dr8),
                                        SUB84(dVar22,0));
              dVar26 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),F32LO(in_dr2) * fVar23);
            }
            else {
              dVar22 = dVar22 * in_dr8;
              dVar26 = in_dr2 * dVar29;
            }
            iVar7 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)puVar15[3] * 0x40;
            if (cVar31 == '\0') {
              dVar22 = CONCAT44D(F32HI(dVar22) - F32LO(dVar26),
                                        SUB84(dVar22,0));
            }
            else {
              dVar22 = dVar22 - dVar26;
            }
            if (cVar32 == '\0') {
              uVar25 = *(undefined4 *)(unsigned)(iVar9 + 0x10);
              in_dr8 = CONCAT44D(uVar25,SUB84(in_dr8,0));
              in_dr6 = CONCAT44D(uVar24,*(undefined4 *)(unsigned)(iVar10 + 0x10));
              dVar26 = CONCAT44D(SUB84(dVar29,0),uVar25);
            }
            else {
              in_dr8 = *(double *)(unsigned)(iVar9 + 0x10);
              uVar25 = (undefined4)((ulonglong)in_dr8 >> 0x20);
              dVar26 = in_xd4;
            }
            if (cVar31 == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar26) * F32LO(in_dr6),
                                        F32LO(dVar26) * fVar23);
            }
            else {
              dVar21 = dVar26 * dVar29 * in_dr6;
            }
            dVar26 = in_dr6;
            dVar20 = in_dr8;
            if (cVar32 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        (int)((ulonglong)in_dr6 >> 0x20));
              dVar26 = in_xd0;
              dVar20 = CONCAT44D(uVar25,SUB84(in_dr12,0));
            }
            if (cVar31 == '\0') {
              in_dr12 = CONCAT44D(F32HI(dVar20) * F32LO(in_dr8),
                                         SUB84(dVar20,0));
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        F32LO(dVar22) * F32LO(in_dr6));
              fVar23 = F32LO(dVar21) - F32HI(dVar21);
            }
            else {
              in_dr12 = dVar20 * in_dr8;
              dVar22 = dVar22 * in_dr6;
              fVar23 = SUB84(dVar21 - dVar21,0);
            }
            if (cVar32 == '\0') {
              dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(iVar7 + 0x14),fVar23);
            }
            else {
              dVar21 = *(double *)(unsigned)(iVar7 + 0x14);
            }
            if (cVar31 == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        F32LO(dVar22) - F32HI(in_dr12));
              dVar21 = CONCAT44D(F32HI(dVar21) * F32LO(dVar21),
                                        SUB84(dVar21,0));
            }
            else {
              dVar22 = dVar22 - in_dr12;
              dVar21 = dVar21 * dVar21;
            }
            if (cVar32 == '\0') {
              dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                        *(undefined4 *)(unsigned)(iVar7 + 0x10));
            }
            if (cVar31 == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar22) * F32LO(dVar21) +
                                        F32HI(dVar21),SUB84(dVar21,0));
            }
            in_dr0 = dVar26;
            if (cVar32 == '\0') {
              dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                        *(undefined4 *)(unsigned)(iVar7 + 0x18));
              in_dr0 = CONCAT44D(SUB84(dVar22,0),SUB84(dVar22,0));
            }
            if (cVar31 == '\0') {
              dVar21 = (double)((ulonglong)
                                (uint)(F32HI(in_dr0) * F32LO(dVar21) +
                                      F32HI(dVar21)) << 0x20);
            }
            in_dr2 = (double)(D2U(dVar21) & 0xffffffff00000000);
            in_dr4 = in_dr2;
            if (cVar32 == '\0') {
              in_dr4 = CONCAT44D((int)(D2U(dVar21) >> 0x20),SUB84(dVar29,0));
            }
            if (cVar31 == '\0') {
              bVar30 = 0.0 < F32HI(in_dr4);
            }
            else {
              bVar30 = in_dr2 < in_dr4;
            }
            in_xd0 = dVar26;
            if (bVar30) goto LAB_8c2535c8;
          }
          puVar6 = puVar15 + 2;
          puVar15 = puVar15 + 3;
          (*(int *)(fr0_ - 0x30)) = 0;
          ar4_00 = (uint *)(unsigned)((uint)*puVar16 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          ar5_00 = (uint *)(unsigned)((uint)*puVar6 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
          in_xd0 = dVar26;
          if (0 < (int)(uVar2 - 2)) {
            do {
              uVar1 = *puVar15;
              puVar15 = puVar15 + 1;
              ar6_00 = (uint *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
              if ((*ar4_00 & *ar5_00 & *ar6_00 & 1) == 0) {
                (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c23eb44(ar4_00,ar5_00,ar6_00,iVar10));
              }
              (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) + 1;
              ar4_00 = ar5_00;
              ar5_00 = ar6_00;
            } while ((*(int *)(fr0_ - 0x30)) < (int)(uVar2 - 2));
          }
        }
      }
      else {
LAB_8c2535c8:
        puVar15 = puVar16 + uVar2;
      }
      iVar12 = iVar12 + 1;
    }
  }
  else if (uVar2 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab318) & 1) == 0) {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c247280);
    }
    else {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c246f1a);
    }
                    
                    
    uVar24 = (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)UNRECOVERED_JUMPTABLE))(ar4,(ushort)(*(int *)(fr0_ - 0x30)),vr6,vr7));
    return uVar24;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c252e7c\n.set _FUN_8c252e7c, _FUN_8c252e7c_def\n");
