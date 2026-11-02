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
undefined4 FUN_8c246b7a_def(int ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c246b7a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  double *ar5_00;
  double *unaff_r8 = 0;
  double *pdVar9;
  double *pdVar10;
  double *ar4_00;
  double *pdVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  double in_dr0 = 0;
  float fVar15;
  double in_dr2 = 0;
  double dVar16;
  float fVar20;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar21;
  double in_dr4 = 0;
  undefined4 uVar22;
  undefined4 uVar23;
  double in_dr6 = 0;
  undefined4 in_fr13 = 0;
  double dVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar28;
  char cVar29;
  char cVar30;
  
  cVar30 = '\0';
  cVar29 = '\0';
  dVar24 = CONCAT44D(0x3f000000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000;
  puVar12 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x34)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(int *)(fr0_ - 0x38)) = 0;
  do {
    puVar13 = puVar12 + 1;
    uVar8 = (uint)*puVar12;
    uVar6 = 0x3f800000;
    if ((*puVar12 & 0x8000) != 0) {
      uVar8 = uVar8 & 0x7fff;
      uVar6 = 0xbf800000;
    }
    (*(int *)(fr0_ - 0x38)) = (*(int *)(fr0_ - 0x38)) + uVar8;
    iVar7 = uVar8 - 2;
    puVar14 = puVar12 + 2;
    puVar12 = puVar12 + 3;
    ar4_00 = (double *)(unsigned)((uint)*puVar14 * 0x40 + iVar4);
    pdVar9 = (double *)(unsigned)((uint)*puVar13 * 0x40 + iVar4);
    pdVar10 = unaff_r8;
    if (cVar30 == '\0') {
      dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)((int)ar4_00 + 4));
      in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(in_dr6,0));
      dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 1),uVar6);
      in_dr4 = (double)(ulonglong)*(uint *)(unsigned)(pdVar9 + 1);
      dVar27 = in_xd12;
    }
    else {
      in_dr6 = *(double *)(unsigned)((int)pdVar9 + 4);
      dVar26 = ar4_00[1];
      dVar27 = *(double *)(unsigned)((int)ar4_00 + 4);
    }
    do {
      uVar1 = *puVar12;
      puVar12 = puVar12 + 1;
      pdVar11 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar4);
      fVar21 = F32LO(in_dr4);
      in_dr4 = CONCAT44D(0x3f800000,fVar21);
      if ((*(uint *)(unsigned)pdVar9 & *(uint *)(unsigned)ar4_00 & *(uint *)(unsigned)pdVar11 & 0x3f) == 0) {
        if (cVar30 == '\0') {
          dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + 1),SUB84(dVar24,0));
        }
        else {
          dVar16 = pdVar11[1];
          in_xd2 = dVar27;
        }
        fVar20 = F32HI(dVar26);
        if (cVar29 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) - fVar20,
                                    F32LO(dVar16) - F32HI(in_dr6));
        }
        else {
          dVar16 = (dVar16 - in_dr6) - dVar26;
        }
        if (cVar30 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar11 + 4));
        }
        if (cVar29 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar24));
          fVar15 = F32LO(dVar16) * F32HI(dVar16);
        }
        else {
          in_dr0 = in_dr0 - dVar24;
          fVar15 = SUB84(dVar16 * dVar16,0);
        }
        dVar16 = dVar26;
        if (cVar30 == '\0') {
          dVar16 = CONCAT44D(fVar20,fVar15);
        }
        if (cVar29 == '\0') {
          fVar20 = (F32HI(dVar16) - fVar21) * F32LO(in_dr0);
          in_dr2 = CONCAT44D(fVar20,F32LO(dVar16) - fVar20);
        }
        else {
          in_dr2 = (dVar16 - in_dr4) * in_dr0;
          in_dr2 = in_dr2 - in_dr2;
        }
        in_dr4 = in_xd2;
        if (cVar30 == '\0') {
          in_dr4 = CONCAT44D(SUB84(in_dr2,0),fVar21);
        }
        if (cVar29 == '\0') {
          in_dr4 = CONCAT44D(F32HI(in_dr4) * F32LO(dVar26),
                                    SUB84(in_dr4,0));
        }
        else {
          in_dr4 = in_dr4 * dVar26;
        }
        in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
        if (cVar29 == '\0') {
          bVar28 = 0.0 < F32HI(in_dr4);
        }
        else {
          bVar28 = in_dr2 < in_dr4;
        }
        if ((bVar28) && (uVar2 != 0)) {
          if (cVar29 == '\0') {
            in_dr4 = CONCAT44D(0xbf800000,SUB84(in_dr4,0));
          }
          else {
            in_dr4 = -CONCAT44D(0x3f800000,SUB84(in_dr4,0));
          }
        }
      }
      uVar8 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar21 = F32HI(in_dr4);
      if (pdVar10 < unaff_r8) {
        dVar16 = (double)((ulonglong)uVar8 << 0x20);
        if (cVar29 == '\0') {
          bVar28 = fVar21 < 0.0;
        }
        else {
          bVar28 = in_dr4 < dVar16;
        }
        if (bVar28) {
          *(undefined4 *)(unsigned)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
          if (cVar30 == '\0') {
            uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          uVar5 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(ar4_00,ar5,ar6,ar7));
          uVar23 = SUB84(dVar16,0);
          uVar25 = (undefined4)(D2U(dVar24) >> 0x20);
          dVar18 = dVar24;
          dVar16 = dVar24;
          dVar19 = dVar24;
          if (cVar30 == '\0') {
            dVar18 = CONCAT44D(uVar25,uVar22);
            dVar16 = in_xd2;
            uVar23 = uVar25;
            dVar19 = CONCAT44D(uVar25,SUB84(in_dr0,0));
          }
          *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar5;
          if (cVar30 == '\0') {
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 6),uVar23);
            ar5 = (double *)(unsigned)((int)ar4_00 + 0x34);
          }
          else {
            dVar17 = ar4_00[6];
            ar5 = ar4_00 + 7;
          }
          if (cVar29 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)(F32HI(dVar19) *
                                    F32HI(dVar17) + F32LO(dVar17));
          }
          uVar22 = (undefined4)(D2U(dVar18) >> 0x20);
          if (cVar30 == '\0') {
            *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar17,0);
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar22);
            in_xd2 = dVar16;
            dVar16 = CONCAT44D(uVar22,SUB84(dVar19,0));
          }
          else {
            ar4_00[4] = dVar16;
            dVar17 = *ar5;
            in_xd2 = dVar18;
            dVar16 = dVar18;
          }
          pdVar9 = (double *)(unsigned)((int)ar4_00 + 0x24);
          if (cVar29 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)(F32HI(dVar16) *
                                    F32HI(dVar17) + F32LO(dVar17));
          }
          uVar22 = SUB84(dVar17,0);
          if (cVar30 == '\0') {
            *(undefined4 *)(unsigned)pdVar9 = uVar22;
          }
          else {
            *pdVar9 = in_xd2;
          }
          CacheBlockWriteBack(pdVar9);
LAB_8c246e36:
          if (cVar30 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(dVar16,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),uVar22);
            pdVar9 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            in_dr2 = ar4_00[1];
            pdVar9 = ar4_00 + 2;
          }
          if (cVar30 == '\0') {
            uVar22 = *(undefined4 *)(unsigned)(pdVar9 + 2);
            in_dr4 = CONCAT44D(uVar22,SUB84(dVar18,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 0x14),uVar6);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar22;
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
          *(undefined4 *)(unsigned)ar4_00 = 0xf0000000;
          CacheBlockWriteBack(ar4_00);
          uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
          if (cVar30 == '\0') {
            uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          uVar5 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(ar4_00,ar5,ar6,ar7));
          uVar23 = SUB84(dVar16,0);
          uVar25 = (undefined4)(D2U(dVar24) >> 0x20);
          dVar17 = dVar24;
          dVar16 = dVar24;
          dVar19 = dVar24;
          if (cVar30 == '\0') {
            dVar17 = CONCAT44D(uVar25,uVar22);
            dVar16 = in_xd2;
            uVar23 = uVar25;
            dVar19 = CONCAT44D(uVar25,SUB84(in_dr0,0));
          }
          *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar5;
          if (cVar30 == '\0') {
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 6),uVar23);
            ar5 = (double *)(unsigned)((int)ar4_00 + 0x34);
          }
          else {
            dVar18 = ar4_00[6];
            ar5 = ar4_00 + 7;
          }
          if (cVar29 == '\0') {
            dVar18 = (double)(ulonglong)
                             (uint)(F32HI(dVar19) *
                                    F32HI(dVar18) + F32LO(dVar18));
          }
          uVar22 = (undefined4)(D2U(dVar17) >> 0x20);
          if (cVar30 == '\0') {
            *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar18,0);
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar22);
            in_xd2 = dVar16;
            dVar16 = CONCAT44D(uVar22,SUB84(dVar19,0));
          }
          else {
            ar4_00[4] = dVar16;
            dVar18 = *ar5;
            in_xd2 = dVar17;
            dVar16 = dVar17;
          }
          pdVar9 = (double *)(unsigned)((int)ar4_00 + 0x24);
          if (cVar29 == '\0') {
            dVar18 = (double)(ulonglong)
                             (uint)(F32HI(dVar16) *
                                    F32HI(dVar18) + F32LO(dVar18));
          }
          if (cVar30 == '\0') {
            *(int *)(unsigned)pdVar9 = SUB84(dVar18,0);
          }
          else {
            *pdVar9 = in_xd2;
          }
          CacheBlockWriteBack(pdVar9);
          if (cVar30 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(dVar16,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),SUB84(dVar18,0));
            pdVar9 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            in_dr2 = ar4_00[1];
            pdVar9 = ar4_00 + 2;
          }
          if (cVar30 == '\0') {
            uVar22 = *(undefined4 *)(unsigned)(pdVar9 + 2);
            in_dr4 = CONCAT44D(uVar22,SUB84(dVar17,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 0x14),uVar6);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar22;
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
          pdVar10 = unaff_r8;
        }
      }
      else {
        in_dr2 = (double)((ulonglong)uVar8 << 0x20);
        if (cVar29 == '\0') {
          bVar28 = fVar21 < 0.0;
        }
        else {
          bVar28 = in_dr4 < in_dr2;
        }
        if (bVar28) {
          *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          if (cVar30 == '\0') {
            uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          }
          uVar23 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(pdVar9,ar5,ar6,ar7));
          uVar22 = SUB84(in_dr2,0);
          uVar5 = (undefined4)(D2U(dVar24) >> 0x20);
          dVar17 = dVar24;
          dVar16 = dVar24;
          dVar19 = dVar24;
          if (cVar30 == '\0') {
            dVar17 = CONCAT44D(uVar5,uVar6);
            dVar16 = in_xd2;
            uVar22 = uVar5;
            dVar19 = CONCAT44D(uVar5,SUB84(in_dr0,0));
          }
          *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar23;
          if (cVar30 == '\0') {
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 6),uVar22);
            ar5_00 = (double *)(unsigned)((int)pdVar9 + 0x34);
          }
          else {
            dVar18 = pdVar9[6];
            ar5_00 = pdVar9 + 7;
          }
          if (cVar29 == '\0') {
            dVar18 = (double)(ulonglong)
                             (uint)(F32HI(dVar19) *
                                    F32HI(dVar18) + F32LO(dVar18));
          }
          uVar6 = (undefined4)(D2U(dVar17) >> 0x20);
          if (cVar30 == '\0') {
            *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar18,0);
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,uVar6);
            dVar17 = dVar16;
            dVar16 = CONCAT44D(uVar6,SUB84(dVar19,0));
          }
          else {
            pdVar9[4] = dVar16;
            dVar18 = *ar5_00;
            dVar16 = dVar17;
          }
          pdVar3 = (double *)(unsigned)((int)pdVar9 + 0x24);
          if (cVar29 == '\0') {
            dVar18 = (double)(ulonglong)
                             (uint)(F32HI(dVar16) *
                                    F32HI(dVar18) + F32LO(dVar18));
          }
          if (cVar30 == '\0') {
            *(int *)(unsigned)pdVar3 = SUB84(dVar18,0);
          }
          else {
            *pdVar3 = dVar17;
          }
          CacheBlockWriteBack(pdVar3);
          if (cVar30 == '\0') {
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar16,0));
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(dVar18,0));
            pdVar9 = pdVar9 + 1;
          }
          else {
            dVar16 = *pdVar9;
            dVar19 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
          }
          if (cVar30 == '\0') {
            uVar6 = *(undefined4 *)(unsigned)(pdVar9 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar6;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar19) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar16) >> 0x20);
          }
          else {
            dVar18 = pdVar9[2];
            unaff_r8[3] = pdVar9[3];
            unaff_r8[2] = dVar18;
            unaff_r8[1] = dVar19;
            *unaff_r8 = dVar16;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
          if (cVar30 == '\0') {
            uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          uVar5 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(ar4_00,ar5_00,ar6,ar7));
          uVar23 = SUB84(dVar19,0);
          uVar25 = (undefined4)(D2U(dVar24) >> 0x20);
          dVar18 = dVar24;
          in_xd2 = dVar24;
          dVar19 = dVar24;
          if (cVar30 == '\0') {
            dVar18 = CONCAT44D(uVar25,uVar22);
            in_xd2 = dVar17;
            uVar23 = uVar25;
            dVar19 = CONCAT44D(uVar25,SUB84(dVar16,0));
          }
          *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar5;
          if (cVar30 == '\0') {
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 6),uVar23);
            ar5 = (double *)(unsigned)((int)ar4_00 + 0x34);
          }
          else {
            dVar16 = ar4_00[6];
            ar5 = ar4_00 + 7;
          }
          if (cVar29 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)(F32HI(dVar19) *
                                    F32HI(dVar16) + F32LO(dVar16));
          }
          uVar22 = (undefined4)(D2U(dVar18) >> 0x20);
          if (cVar30 == '\0') {
            *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar16,0);
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar22);
            dVar16 = CONCAT44D(uVar22,SUB84(dVar19,0));
          }
          else {
            ar4_00[4] = in_xd2;
            dVar17 = *ar5;
            in_xd2 = dVar18;
            dVar16 = dVar18;
          }
          pdVar9 = (double *)(unsigned)((int)ar4_00 + 0x24);
          if (cVar29 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)(F32HI(dVar16) *
                                    F32HI(dVar17) + F32LO(dVar17));
          }
          uVar22 = SUB84(dVar17,0);
          if (cVar30 == '\0') {
            *(undefined4 *)(unsigned)pdVar9 = uVar22;
          }
          else {
            *pdVar9 = in_xd2;
          }
          CacheBlockWriteBack(pdVar9);
          goto LAB_8c246e36;
        }
      }
      if (cVar30 == '\0') {
        uVar6 = SUB84(dVar24,0);
        dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar11 + 4)
                                 );
        in_xd12 = dVar27;
        in_dr6 = CONCAT44D(uVar6,SUB84(in_dr6,0));
      }
      else {
        in_xd12 = *(double *)(unsigned)((int)pdVar11 + 4);
        in_dr6 = dVar27;
      }
      uVar6 = 8;
      if (cVar30 == '\0') {
        in_dr4 = (double)(D2U(dVar26) >> 0x20);
        dVar27 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + 1),SUB84(dVar26,0));
      }
      else {
        dVar27 = pdVar11[1];
      }
      iVar7 = iVar7 + -1;
      dVar26 = CONCAT44D((int)(D2U(dVar27) >> 0x20),-SUB84(dVar27,0));
      pdVar9 = ar4_00;
      ar4_00 = pdVar11;
      dVar27 = in_xd12;
    } while (iVar7 != 0);
    if (pdVar10 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar11 = 0xf0000000;
      CacheBlockWriteBack(pdVar11);
      uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
      uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
      if (cVar30 == '\0') {
        uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        uVar22 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
      }
      uVar6 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(pdVar11,ar5,ar6,ar7));
      uVar5 = SUB84(in_dr2,0);
      uVar25 = (undefined4)(D2U(dVar24) >> 0x20);
      dVar16 = dVar24;
      dVar27 = dVar24;
      dVar26 = dVar24;
      if (cVar30 == '\0') {
        dVar16 = CONCAT44D(uVar25,uVar23);
        dVar27 = in_xd2;
        uVar5 = uVar25;
        dVar26 = CONCAT44D(uVar25,SUB84(in_dr0,0));
      }
      *(undefined4 *)(unsigned)(pdVar11 + 5) = uVar6;
      if (cVar30 == '\0') {
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + 6),uVar5);
        ar5 = (double *)(unsigned)((int)pdVar11 + 0x34);
      }
      else {
        dVar19 = pdVar11[6];
        ar5 = pdVar11 + 7;
      }
      if (cVar29 == '\0') {
        dVar19 = (double)(ulonglong)
                         (uint)(F32HI(dVar26) *
                                F32HI(dVar19) + F32LO(dVar19));
      }
      uVar23 = (undefined4)(D2U(dVar16) >> 0x20);
      if (cVar30 == '\0') {
        *(int *)(unsigned)(pdVar11 + 4) = SUB84(dVar19,0);
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar23);
        in_xd2 = dVar27;
        dVar27 = CONCAT44D(uVar23,SUB84(dVar26,0));
      }
      else {
        pdVar11[4] = dVar27;
        dVar19 = *ar5;
        in_xd2 = dVar16;
        dVar27 = dVar16;
      }
      pdVar9 = (double *)(unsigned)((int)pdVar11 + 0x24);
      if (cVar29 == '\0') {
        dVar19 = (double)(ulonglong)
                         (uint)(F32HI(dVar27) *
                                F32HI(dVar19) + F32LO(dVar19));
      }
      if (cVar30 == '\0') {
        *(int *)(unsigned)pdVar9 = SUB84(dVar19,0);
      }
      else {
        *pdVar9 = in_xd2;
      }
      CacheBlockWriteBack(pdVar9);
      if (cVar30 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(dVar27,0));
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(dVar19,0));
        pdVar11 = pdVar11 + 1;
      }
      else {
        in_dr0 = *pdVar11;
        in_dr2 = pdVar11[1];
        pdVar11 = pdVar11 + 2;
      }
      if (cVar30 == '\0') {
        uVar23 = *(undefined4 *)(unsigned)(pdVar11 + 2);
        in_dr4 = CONCAT44D(uVar23,SUB84(dVar16,0));
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 0x14),uVar22);
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar11 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar11[2];
        in_dr6 = pdVar11[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = in_dr2;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
    }
    (*(uint *)(fr0_ - 0x34)) = (*(uint *)(fr0_ - 0x34)) - 1;
    if ((*(uint *)(fr0_ - 0x34)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x38));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + (*(int *)(fr0_ - 0x38));
      return uVar6;
    }
  } while( true );
}

__asm__(".globl _FUN_8c246b7a\n.set _FUN_8c246b7a, _FUN_8c246b7a_def\n");
