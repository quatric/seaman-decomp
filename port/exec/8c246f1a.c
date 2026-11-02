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
undefined4 FUN_8c246f1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c246f1a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  double *unaff_r8 = 0;
  double *ar4_00;
  double *ar5_00;
  double *pdVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  float fVar12;
  double in_dr0 = 0;
  double dVar13;
  double in_dr2 = 0;
  float fVar17;
  double dVar15;
  ulonglong uVar16;
  double in_dr4 = 0;
  double dVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double in_dr6 = 0;
  double dVar22;
  float fVar23;
  double dVar24;
  double in_dr10 = 0;
  float fVar25;
  undefined4 in_fr13 = 0;
  double dVar26;
  double in_dr14 = 0;
  undefined8 uVar27;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar28;
  char cVar29;
  char cVar30;
  float fVar14;
  
  cVar30 = '\0';
  cVar29 = '\0';
  dVar26 = CONCAT44D(0x3f800000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0x8000;
  }
  puVar9 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x30)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(int *)(fr0_ - 0x3c)) = 0;
  do {
    uVar21 = SUB84(in_dr14,0);
    puVar10 = puVar9 + 1;
    uVar5 = (uint)*puVar9;
    uVar20 = (undefined4)(D2U(dVar26) >> 0x20);
    if (cVar30 == '\0') {
      uVar21 = uVar20;
    }
    if ((*puVar9 & 0x8000) != 0) {
      uVar5 = uVar5 & 0x7fff;
      uVar21 = 0xbf800000;
    }
    (*(int *)(fr0_ - 0x3c)) = (*(int *)(fr0_ - 0x3c)) + uVar5;
    iVar3 = uVar5 - 2;
    puVar11 = puVar9 + 2;
    puVar9 = puVar9 + 3;
    ar5_00 = (double *)(unsigned)((uint)*puVar11 * 0x40 + iVar2);
    ar4_00 = (double *)(unsigned)((uint)*puVar10 * 0x40 + iVar2);
    pdVar6 = unaff_r8;
    if (cVar30 == '\0') {
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5_00 + 4),uVar21);
      in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),SUB84(in_dr6,0));
      dVar26 = CONCAT44D(uVar20,*(undefined4 *)(unsigned)(ar5_00 + 1));
      in_dr4 = (double)(ulonglong)*(uint *)(unsigned)(ar4_00 + 1);
    }
    else {
      in_dr14 = *(double *)(unsigned)((int)ar5_00 + 4);
      in_dr6 = *(double *)(unsigned)((int)ar4_00 + 4);
      in_xd12 = ar5_00[1];
    }
    do {
      uVar1 = *puVar9;
      puVar9 = puVar9 + 1;
      pdVar8 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar2);
      (*(int *)(fr0_ - 0x34)) = 0;
      uVar21 = (undefined4)(D2U(dVar26) >> 0x20);
      dVar22 = dVar26;
      if (cVar30 == '\0') {
        dVar22 = CONCAT44D(uVar21,SUB84(in_dr4,0));
      }
      in_dr4 = dVar22;
      if ((*(uint *)(unsigned)ar4_00 & *(uint *)(unsigned)ar5_00 & *(uint *)(unsigned)pdVar8 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)ar4_00 | *(uint *)(unsigned)ar5_00 | *(uint *)(unsigned)pdVar8) & 1) == 0) {
          fVar17 = F32HI(in_dr14);
          if (cVar30 == '\0') {
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),fVar17);
          }
          else {
            dVar18 = pdVar8[1];
            in_xd2 = in_dr14;
          }
          if (cVar29 == '\0') {
            dVar18 = CONCAT44D(F32HI(dVar18) - F32LO(dVar26),
                                      F32LO(dVar18) - F32HI(in_dr6));
          }
          else {
            dVar18 = (dVar18 - in_dr6) - dVar26;
          }
          if (cVar30 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar8 + 4));
          }
          if (cVar29 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - fVar17);
            fVar17 = F32LO(dVar18) * F32HI(dVar18);
          }
          else {
            in_dr0 = in_dr0 - in_dr14;
            fVar17 = SUB84(dVar18 * dVar18,0);
          }
          dVar18 = in_xd12;
          if (cVar30 == '\0') {
            dVar18 = CONCAT44D(SUB84(dVar26,0),fVar17);
          }
          if (cVar29 == '\0') {
            fVar17 = (F32HI(dVar18) - F32LO(dVar22)) * F32LO(in_dr0);
            in_dr2 = CONCAT44D(fVar17,F32LO(dVar18) - fVar17);
          }
          else {
            in_dr2 = (dVar18 - dVar22) * in_dr0;
            in_dr2 = in_dr2 - in_dr2;
          }
          in_dr4 = in_xd2;
          if (cVar30 == '\0') {
            in_dr4 = CONCAT44D(SUB84(in_dr2,0),SUB84(dVar22,0));
          }
          if (cVar29 == '\0') {
            in_dr4 = CONCAT44D(F32HI(in_dr4) * F32LO(in_dr14),
                                      SUB84(in_dr4,0));
          }
          else {
            in_dr4 = in_dr4 * in_dr14;
          }
          in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
          if (cVar29 == '\0') {
            bVar28 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar28 = in_dr2 < in_dr4;
          }
          if ((bVar28) && (iVar4 != 0)) {
            if (cVar29 == '\0') {
              in_dr4 = CONCAT44D(0xbf800000,SUB84(in_dr4,0));
            }
            else {
              in_dr4 = -CONCAT44D(0x3f800000,SUB84(in_dr4,0));
            }
          }
        }
        else {
          if (cVar30 == '\0') {
            fVar14 = *(float *)(unsigned)(ar5_00 + 2);
            fVar12 = *(float *)(unsigned)((int)ar5_00 + 0x14);
            dVar13 = CONCAT44D(fVar14,fVar12);
            fVar17 = *(float *)(unsigned)(ar5_00 + 3);
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 2),
                                      *(undefined4 *)(unsigned)((int)ar4_00 + 0x14));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 3),SUB84(in_dr6,0));
            in_dr10 = CONCAT44D(fVar17,SUB84(in_dr10,0));
            dVar15 = CONCAT44D(fVar17,SUB84(in_dr2,0));
          }
          else {
            dVar13 = ar5_00[2];
            in_dr10 = ar5_00[4];
            dVar18 = ar4_00[2];
            dVar22 = ar4_00[4];
            fVar14 = F32HI(dVar13);
            fVar12 = F32LO(dVar13);
            fVar17 = F32HI(in_dr10);
            dVar15 = in_dr10;
          }
          fVar23 = F32HI(dVar22);
          fVar19 = F32HI(dVar18);
          if (cVar29 == '\0') {
            fVar25 = F32HI(in_dr10) * fVar19;
            in_dr10 = CONCAT44D(fVar25,SUB84(in_dr10,0));
            dVar15 = (double)((ulonglong)(uint)(fVar17 * F32LO(dVar18) - F32LO(dVar13) * fVar23)
                             << 0x20);
            dVar24 = CONCAT44D(fVar14 * fVar23 - fVar25,
                                      fVar12 * fVar19 -
                                      F32HI(dVar13) * F32LO(dVar18));
          }
          else {
            in_dr10 = in_dr10 * dVar18;
            dVar24 = dVar13 * dVar22 * dVar18;
            dVar15 = dVar15 * dVar18 - dVar24;
            dVar24 = (dVar13 * dVar22 * dVar18 - in_dr10) - dVar24;
          }
          if (cVar30 == '\0') {
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 2),SUB84(dVar22,0));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),
                                      *(undefined4 *)(unsigned)(pdVar8 + 3));
          }
          else {
            in_dr6 = pdVar8[2];
            dVar22 = pdVar8[3];
          }
          uVar16 = D2U(dVar15) & 0xffffffff00000000;
                    
          if (cVar29 == '\0') {
            fVar17 = F32LO(dVar24) * F32LO(dVar22) +
                     F32HI(dVar24) * F32HI(dVar22) +
                     F32LO(in_dr6) * 0.0 +
                     (float)(uVar16 >> 0x20) * F32HI(in_dr6);
          }
          dVar18 = in_xd2;
          in_dr0 = in_xd2;
          if (cVar30 == '\0') {
            dVar18 = CONCAT44D((int)uVar16,SUB84(dVar22,0));
            in_dr0 = CONCAT44D((int)uVar16,SUB84(dVar24,0));
          }
          if (cVar29 == '\0') {
            dVar18 = CONCAT44D(F32HI(dVar18) * F32LO(in_dr14),
                                      SUB84(dVar18,0));
          }
          else {
            dVar18 = dVar18 * in_dr14;
          }
          in_dr2 = (double)(uVar16 & 0xffffffff00000000);
          if (cVar29 == '\0') {
            bVar28 = 0.0 < F32HI(dVar18);
          }
          else {
            bVar28 = in_dr2 < dVar18;
          }
          in_dr4 = dVar18;
          (*(int *)(fr0_ - 0x34)) = iVar4;
          if ((!bVar28) && ((*(int *)(fr0_ - 0x34)) = 1, in_dr4 = dVar26, cVar30 == '\0')) {
            in_dr4 = CONCAT44D(uVar21,SUB84(dVar18,0));
          }
        }
      }
      uVar5 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar17 = F32HI(in_dr4);
      uVar21 = SUB84(in_dr6,0);
      if (pdVar6 < unaff_r8) {
        if (cVar29 == '\0') {
          bVar28 = fVar17 < 0.0;
        }
        else {
          bVar28 = in_dr4 < (double)((ulonglong)uVar5 << 0x20);
        }
        if (bVar28) {
          *(undefined4 *)(unsigned)ar5_00 = 0xe0000000;
          CacheBlockWriteBack(ar5_00);
          if (cVar30 == '\0') {
            *(undefined4 *)(unsigned)(ar5_00 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)ar5_00 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(ar5_00 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar27 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar20);
            *(undefined4 *)(unsigned)((int)ar5_00 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            ar5_00[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)ar5_00 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            ar5_00[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)ar5_00 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          uVar20 = (undefined4)uVar27;
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)ar5_00 + 0x2c));
LAB_8c2471aa:
          if (cVar30 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,SUB84(in_dr0,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5_00 + 4),uVar20);
            pdVar7 = ar5_00 + 1;
          }
          else {
            in_dr0 = *ar5_00;
            in_dr2 = ar5_00[1];
            pdVar7 = ar5_00 + 2;
          }
          if (cVar30 == '\0') {
            uVar20 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            in_dr4 = CONCAT44D(uVar20,SUB84(in_dr4,0));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),uVar21);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar7[2];
            dVar22 = pdVar7[3];
            unaff_r8[3] = dVar22;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar21 = SUB84(dVar22,0);
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          *(undefined4 *)(unsigned)ar5_00 = 0xf0000000;
          CacheBlockWriteBack(ar5_00);
          if (cVar30 == '\0') {
            *(undefined4 *)(unsigned)(ar5_00 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)ar5_00 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(ar5_00 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar27 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar20);
            *(undefined4 *)(unsigned)((int)ar5_00 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            ar5_00[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)ar5_00 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            ar5_00[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)ar5_00 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)ar5_00 + 0x2c));
          if (cVar30 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,SUB84(in_dr0,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5_00 + 4),(int)uVar27);
            pdVar6 = ar5_00 + 1;
          }
          else {
            in_dr0 = *ar5_00;
            in_dr2 = ar5_00[1];
            pdVar6 = ar5_00 + 2;
          }
          if (cVar30 == '\0') {
            uVar20 = *(undefined4 *)(unsigned)(pdVar6 + 2);
            in_dr4 = CONCAT44D(uVar20,SUB84(in_dr4,0));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 0x14),uVar21);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar6[2];
            dVar22 = pdVar6[3];
            unaff_r8[3] = dVar22;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar21 = SUB84(dVar22,0);
          unaff_r8 = unaff_r8 + 4;
          pdVar6 = unaff_r8;
        }
      }
      else {
        in_dr2 = (double)((ulonglong)uVar5 << 0x20);
        if (cVar29 == '\0') {
          bVar28 = fVar17 < 0.0;
        }
        else {
          bVar28 = in_dr4 < in_dr2;
        }
        if (bVar28) {
          *(undefined4 *)(unsigned)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          if (cVar30 == '\0') {
            *(undefined4 *)(unsigned)(ar4_00 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)ar4_00 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(ar4_00 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar27 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar20);
            *(undefined4 *)(unsigned)((int)ar4_00 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            ar4_00[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)ar4_00 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            ar4_00[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)ar4_00 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)ar4_00 + 0x2c));
          if (cVar30 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(in_dr0,0));
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),(int)uVar27);
            pdVar7 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            dVar22 = ar4_00[1];
            pdVar7 = ar4_00 + 2;
          }
          if (cVar30 == '\0') {
            uVar20 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            in_dr4 = CONCAT44D(uVar20,SUB84(in_dr4,0));
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),uVar21);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar22) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar7[2];
            dVar18 = pdVar7[3];
            unaff_r8[3] = dVar18;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = dVar22;
            *unaff_r8 = in_dr0;
          }
          uVar21 = SUB84(dVar18,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)ar5_00 = 0xe0000000;
          CacheBlockWriteBack(ar5_00);
          if (cVar30 == '\0') {
            *(undefined4 *)(unsigned)(ar5_00 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)ar5_00 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(ar5_00 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar27 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar20);
            *(undefined4 *)(unsigned)((int)ar5_00 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            ar5_00[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)ar5_00 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            ar5_00[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)ar5_00 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          uVar20 = (undefined4)uVar27;
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)ar5_00 + 0x2c));
          goto LAB_8c2471aa;
        }
      }
      if ((*(int *)(fr0_ - 0x34)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23eb44(ar4_00,ar5_00,pdVar8,ar7));
        pdVar6 = unaff_r8;
      }
      if (cVar30 == '\0') {
        uVar27 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(in_dr14,0));
        in_dr6 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar21);
      }
      else {
        uVar27 = *(undefined8 *)(unsigned)((int)pdVar8 + 4);
        in_dr6 = in_dr14;
      }
      if (cVar30 == '\0') {
        in_dr4 = (double)(D2U(dVar26) & 0xffffffff);
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),*(undefined4 *)(unsigned)(pdVar8 + 1));
      }
      else {
        in_xd12 = pdVar8[1];
      }
      iVar3 = iVar3 + -1;
      in_dr14 = CONCAT44D((int)((ulonglong)uVar27 >> 0x20),-(float)uVar27);
      ar4_00 = ar5_00;
      ar5_00 = pdVar8;
    } while (iVar3 != 0);
    if (pdVar6 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar8 = 0xf0000000;
      CacheBlockWriteBack(pdVar8);
      if (cVar30 == '\0') {
        *(undefined4 *)(unsigned)(pdVar8 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        *(undefined4 *)(unsigned)((int)pdVar8 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        *(undefined4 *)(unsigned)(pdVar8 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        uVar27 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar21);
        *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
      }
      else {
        pdVar8[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
        *(ulonglong *)(unsigned)((int)pdVar8 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
        in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
        pdVar8[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
        uVar27 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
        *(undefined8 *)(unsigned)((int)pdVar8 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
      }
      CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar8 + 0x2c));
      if (cVar30 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(in_dr0,0));
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),(int)uVar27);
        pdVar8 = pdVar8 + 1;
      }
      else {
        in_dr0 = *pdVar8;
        in_dr2 = pdVar8[1];
        pdVar8 = pdVar8 + 2;
      }
      if (cVar30 == '\0') {
        uVar21 = *(undefined4 *)(unsigned)(pdVar8 + 2);
        in_dr4 = CONCAT44D(uVar21,SUB84(in_dr4,0));
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),SUB84(in_dr6,0));
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar21;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar8[2];
        in_dr6 = pdVar8[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = in_dr2;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
    }
    (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) - 1;
    if ((*(uint *)(fr0_ - 0x30)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x3c));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + (*(int *)(fr0_ - 0x3c));
      return 8;
    }
  } while( true );
}

__asm__(".globl _FUN_8c246f1a\n.set _FUN_8c246f1a, _FUN_8c246f1a_def\n");
