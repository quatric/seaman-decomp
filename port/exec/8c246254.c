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
undefined4 FUN_8c246254_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c246254";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  double *pdVar6;
  double *pdVar7;
  double *ar6_00;
  uint ar7_00;
  double *unaff_r8 = 0;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  double in_dr0 = 0;
  float fVar14;
  double in_dr2 = 0;
  double dVar15;
  float fVar17;
  uint uVar18;
  double dVar16;
  float fVar19;
  uint uVar20;
  double in_dr4 = 0;
  double dVar21;
  undefined4 uVar22;
  double in_dr6 = 0;
  double dVar23;
  undefined4 in_fr13 = 0;
  double dVar24;
  double dVar25;
  double dVar26;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar27;
  char cVar28;
  char cVar29;
  uint uVar30;
  
  cVar29 = '\0';
  cVar28 = '\0';
  dVar24 = CONCAT44D(0x3f000000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x8000;
  }
  puVar11 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x30)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(int *)(fr0_ - 0x38)) = 0;
  do {
    puVar12 = puVar11 + 1;
    (*(uint *)(fr0_ - 0x44)) = (uint)*puVar11;
    uVar3 = 0x3f800000;
    if ((*puVar11 & 0x8000) != 0) {
      (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) & 0x7fff;
      uVar3 = 0xbf800000;
    }
    (*(int *)(fr0_ - 0x38)) = (*(int *)(fr0_ - 0x38)) + (*(uint *)(fr0_ - 0x44));
    (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) - 2;
    puVar13 = puVar11 + 2;
    puVar11 = puVar11 + 3;
    pdVar9 = (double *)(unsigned)((uint)*puVar13 * 0x40 + iVar2);
    pdVar8 = (double *)(unsigned)((uint)*puVar12 * 0x40 + iVar2);
    pdVar7 = unaff_r8;
    if (cVar29 == '\0') {
      dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar9 + 4));
      in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(in_dr6,0));
      dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 1),uVar3);
      in_dr4 = (double)(ulonglong)*(uint *)(unsigned)(pdVar8 + 1);
      dVar26 = in_xd12;
    }
    else {
      in_dr6 = *(double *)(unsigned)((int)pdVar8 + 4);
      dVar25 = pdVar9[1];
      dVar26 = *(double *)(unsigned)((int)pdVar9 + 4);
    }
    do {
      uVar1 = *puVar11;
      puVar11 = puVar11 + 1;
      pdVar10 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar2);
      uVar30 = 0;
      fVar19 = F32LO(in_dr4);
      in_dr4 = CONCAT44D(0x3f800000,fVar19);
      if ((*(uint *)(unsigned)pdVar8 & *(uint *)(unsigned)pdVar9 & *(uint *)(unsigned)pdVar10 & 0x3f) == 0) {
        if (cVar29 == '\0') {
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 1),SUB84(dVar24,0));
        }
        else {
          dVar15 = pdVar10[1];
          in_xd2 = dVar26;
        }
        fVar17 = F32HI(dVar25);
        if (cVar28 == '\0') {
          dVar15 = CONCAT44D(F32HI(dVar15) - fVar17,
                                    F32LO(dVar15) - F32HI(in_dr6));
        }
        else {
          dVar15 = (dVar15 - in_dr6) - dVar25;
        }
        if (cVar29 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar10 + 4));
        }
        if (cVar28 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar24));
          fVar14 = F32LO(dVar15) * F32HI(dVar15);
        }
        else {
          in_dr0 = in_dr0 - dVar24;
          fVar14 = SUB84(dVar15 * dVar15,0);
        }
        dVar15 = dVar25;
        if (cVar29 == '\0') {
          dVar15 = CONCAT44D(fVar17,fVar14);
        }
        if (cVar28 == '\0') {
          fVar17 = (F32HI(dVar15) - fVar19) * F32LO(in_dr0);
          in_dr2 = CONCAT44D(fVar17,F32LO(dVar15) - fVar17);
        }
        else {
          in_dr2 = (dVar15 - in_dr4) * in_dr0;
          in_dr2 = in_dr2 - in_dr2;
        }
        in_dr4 = in_xd2;
        if (cVar29 == '\0') {
          in_dr4 = CONCAT44D(SUB84(in_dr2,0),fVar19);
        }
        if (cVar28 == '\0') {
          in_dr4 = CONCAT44D(F32HI(in_dr4) * F32LO(dVar25),
                                    SUB84(in_dr4,0));
        }
        else {
          in_dr4 = in_dr4 * dVar25;
        }
        in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
        if (cVar28 == '\0') {
          bVar27 = 0.0 < F32HI(in_dr4);
        }
        else {
          bVar27 = in_dr2 < in_dr4;
        }
        if ((bVar27) && (uVar4 != 0)) {
          uVar30 = uVar4;
          if (cVar28 == '\0') {
            in_dr4 = CONCAT44D(0xbf800000,SUB84(in_dr4,0));
          }
          else {
            in_dr4 = -CONCAT44D(0x3f800000,SUB84(in_dr4,0));
          }
        }
      }
      uVar18 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar19 = F32HI(in_dr4);
      if (pdVar7 < unaff_r8) {
        if (cVar28 == '\0') {
          bVar27 = fVar19 < 0.0;
        }
        else {
          bVar27 = in_dr4 < (double)((ulonglong)uVar18 << 0x20);
        }
        if (bVar27) {
          *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar18 = uVar30;
          if (*(uint *)(unsigned)((int)pdVar9 + 0x3c) != (ar5 | uVar30)) {
            pdVar8 = pdVar9 + 2;
            *(uint *)(unsigned)((int)pdVar9 + 0x3c) = ar5 | uVar30;
            pdVar6 = pdVar9 + 6;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar6,uVar30));
            uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar8,pdVar6,uVar30));
            *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar3;
            if (cVar29 == '\0') {
              in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
              in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            else {
              in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
              in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
            }
            uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar8,pdVar6,uVar30));
            *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = uVar3;
          }
          uVar30 = SUB84(in_dr6,0);
          uVar3 = (undefined4)(D2U(dVar24) >> 0x20);
          if (cVar29 == '\0') {
            pdVar8 = (double *)(unsigned)((int)pdVar9 + 0x34);
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 6),uVar3);
            dVar23 = CONCAT44D(uVar3,SUB84(in_dr0,0));
          }
          else {
            dVar15 = pdVar9[6];
            pdVar8 = pdVar9 + 7;
            dVar23 = dVar24;
            in_xd2 = dVar24;
          }
          if (cVar28 == '\0') {
            dVar15 = (double)(ulonglong)
                             (uint)(F32HI(dVar23) *
                                    F32HI(dVar15) + F32LO(dVar15));
          }
          if (cVar29 == '\0') {
            *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar15,0);
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar3);
            dVar15 = CONCAT44D(uVar3,SUB84(dVar23,0));
            dVar23 = CONCAT44D(uVar3,SUB84(in_dr4,0));
          }
          else {
            pdVar9[4] = in_xd2;
            dVar16 = *pdVar8;
            in_xd2 = dVar24;
            dVar15 = dVar24;
            dVar23 = dVar24;
          }
          uVar3 = SUB84(dVar23,0);
          pdVar8 = (double *)(unsigned)((int)pdVar9 + 0x24);
          if (cVar28 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)(F32HI(dVar15) *
                                    F32HI(dVar16) + F32LO(dVar16));
          }
          uVar22 = SUB84(dVar16,0);
          if (cVar29 == '\0') {
            *(undefined4 *)(unsigned)pdVar8 = uVar22;
          }
          else {
            *pdVar8 = in_xd2;
          }
          CacheBlockWriteBack(pdVar8);
          goto LAB_8c246636;
        }
        *(undefined4 *)(unsigned)pdVar9 = 0xf0000000;
        CacheBlockWriteBack(pdVar9);
        uVar18 = uVar30;
        if (*(uint *)(unsigned)((int)pdVar9 + 0x3c) != (ar5 | uVar30)) {
          pdVar8 = pdVar9 + 2;
          *(uint *)(unsigned)((int)pdVar9 + 0x3c) = ar5 | uVar30;
          pdVar7 = pdVar9 + 6;
          puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
          (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar7,uVar30));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar8,pdVar7,uVar30));
          *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar3;
          if (cVar29 == '\0') {
            in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
            in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          else {
            in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
            in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
          }
          uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar8,pdVar7,uVar30));
          *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = uVar3;
        }
        uVar3 = (undefined4)(D2U(dVar24) >> 0x20);
        if (cVar29 == '\0') {
          pdVar8 = (double *)(unsigned)((int)pdVar9 + 0x34);
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 6),uVar3);
          dVar23 = CONCAT44D(uVar3,SUB84(in_dr0,0));
        }
        else {
          dVar15 = pdVar9[6];
          pdVar8 = pdVar9 + 7;
          dVar23 = dVar24;
          in_xd2 = dVar24;
        }
        if (cVar28 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)(F32HI(dVar23) *
                                  F32HI(dVar15) + F32LO(dVar15));
        }
        if (cVar29 == '\0') {
          *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar15,0);
          dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar3);
          dVar15 = CONCAT44D(uVar3,SUB84(dVar23,0));
          dVar23 = CONCAT44D(uVar3,SUB84(in_dr4,0));
        }
        else {
          pdVar9[4] = in_xd2;
          dVar16 = *pdVar8;
          in_xd2 = dVar24;
          dVar15 = dVar24;
          dVar23 = dVar24;
        }
        pdVar8 = (double *)(unsigned)((int)pdVar9 + 0x24);
        if (cVar28 == '\0') {
          dVar16 = (double)(ulonglong)
                           (uint)(F32HI(dVar15) *
                                  F32HI(dVar16) + F32LO(dVar16));
        }
        if (cVar29 == '\0') {
          *(int *)(unsigned)pdVar8 = SUB84(dVar16,0);
        }
        else {
          *pdVar8 = in_xd2;
        }
        CacheBlockWriteBack(pdVar8);
        if (cVar29 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar15,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(dVar16,0));
          pdVar8 = pdVar9 + 1;
        }
        else {
          in_dr0 = *pdVar9;
          in_dr2 = pdVar9[1];
          pdVar8 = pdVar9 + 2;
        }
        if (cVar29 == '\0') {
          uVar3 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          in_dr4 = CONCAT44D(uVar3,SUB84(dVar23,0));
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),SUB84(in_dr6,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar3;
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
        pdVar7 = unaff_r8;
        uVar30 = uVar18;
      }
      else {
        in_dr2 = (double)((ulonglong)uVar18 << 0x20);
        if (cVar28 == '\0') {
          bVar27 = fVar19 < 0.0;
        }
        else {
          bVar27 = in_dr4 < in_dr2;
        }
        if (bVar27) {
          *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          ar7_00 = uVar30;
          if (*(uint *)(unsigned)((int)pdVar8 + 0x3c) != (ar5 | uVar30)) {
            pdVar6 = pdVar8 + 2;
            *(uint *)(unsigned)((int)pdVar8 + 0x3c) = ar5 | uVar30;
            ar6_00 = pdVar8 + 6;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar6,ar6_00,uVar30));
            uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar6,ar6_00,uVar30));
            *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar3;
            if (cVar29 == '\0') {
              in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
              in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            else {
              in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
              in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
            }
            uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar6,ar6_00,uVar30));
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar3;
          }
          uVar3 = (undefined4)(D2U(dVar24) >> 0x20);
          if (cVar29 == '\0') {
            pdVar6 = (double *)(unsigned)((int)pdVar8 + 0x34);
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar3);
            dVar23 = CONCAT44D(uVar3,SUB84(in_dr0,0));
          }
          else {
            dVar15 = pdVar8[6];
            pdVar6 = pdVar8 + 7;
            dVar23 = dVar24;
            in_xd2 = dVar24;
          }
          if (cVar28 == '\0') {
            dVar15 = (double)(ulonglong)
                             (uint)(F32HI(dVar23) *
                                    F32HI(dVar15) + F32LO(dVar15));
          }
          if (cVar29 == '\0') {
            *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar15,0);
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,uVar3);
            dVar15 = CONCAT44D(uVar3,SUB84(dVar23,0));
            dVar23 = CONCAT44D(uVar3,SUB84(in_dr4,0));
          }
          else {
            pdVar8[4] = in_xd2;
            dVar16 = *pdVar6;
            in_xd2 = dVar24;
            dVar15 = dVar24;
            dVar23 = dVar24;
          }
          pdVar6 = (double *)(unsigned)((int)pdVar8 + 0x24);
          if (cVar28 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)(F32HI(dVar15) *
                                    F32HI(dVar16) + F32LO(dVar16));
          }
          if (cVar29 == '\0') {
            *(int *)(unsigned)pdVar6 = SUB84(dVar16,0);
          }
          else {
            *pdVar6 = in_xd2;
          }
          CacheBlockWriteBack(pdVar6);
          if (cVar29 == '\0') {
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar15,0));
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar16,0));
            pdVar8 = pdVar8 + 1;
          }
          else {
            dVar15 = *pdVar8;
            dVar16 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar29 == '\0') {
            uVar3 = *(undefined4 *)(unsigned)(pdVar8 + 2);
            dVar21 = CONCAT44D(uVar3,SUB84(dVar23,0));
            dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar3;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar16) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar15) >> 0x20);
          }
          else {
            dVar21 = pdVar8[2];
            dVar23 = pdVar8[3];
            unaff_r8[3] = dVar23;
            unaff_r8[2] = dVar21;
            unaff_r8[1] = dVar16;
            *unaff_r8 = dVar15;
          }
          uVar20 = SUB84(dVar21,0);
          uVar30 = SUB84(dVar23,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          uVar18 = ar7_00;
          if (*(uint *)(unsigned)((int)pdVar9 + 0x3c) != (ar5 | ar7_00)) {
            pdVar8 = pdVar9 + 2;
            *(uint *)(unsigned)((int)pdVar9 + 0x3c) = ar5 | ar7_00;
            pdVar6 = pdVar9 + 6;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar6,ar7_00));
            uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar8,pdVar6,ar7_00));
            *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar3;
            uVar30 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2638);
            uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            if (cVar29 == '\0') {
              uVar30 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
              uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar8,pdVar6,ar7_00));
            *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = uVar3;
          }
          uVar3 = (undefined4)(D2U(dVar24) >> 0x20);
          if (cVar29 == '\0') {
            pdVar8 = (double *)(unsigned)((int)pdVar9 + 0x34);
            dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 6),uVar3);
            dVar15 = CONCAT44D(uVar3,SUB84(dVar15,0));
          }
          else {
            dVar23 = pdVar9[6];
            pdVar8 = pdVar9 + 7;
            dVar15 = dVar24;
            in_xd2 = dVar24;
          }
          if (cVar28 == '\0') {
            dVar23 = (double)(ulonglong)
                             (uint)(F32HI(dVar15) *
                                    F32HI(dVar23) + F32LO(dVar23));
          }
          if (cVar29 == '\0') {
            *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar23,0);
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar3);
            dVar15 = CONCAT44D(uVar3,SUB84(dVar15,0));
            dVar23 = CONCAT44D(uVar3,uVar20);
          }
          else {
            pdVar9[4] = in_xd2;
            dVar16 = *pdVar8;
            in_xd2 = dVar24;
            dVar15 = dVar24;
            dVar23 = dVar24;
          }
          uVar3 = SUB84(dVar23,0);
          pdVar8 = (double *)(unsigned)((int)pdVar9 + 0x24);
          if (cVar28 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)(F32HI(dVar15) *
                                    F32HI(dVar16) + F32LO(dVar16));
          }
          uVar22 = SUB84(dVar16,0);
          if (cVar29 == '\0') {
            *(undefined4 *)(unsigned)pdVar8 = uVar22;
          }
          else {
            *pdVar8 = in_xd2;
          }
          CacheBlockWriteBack(pdVar8);
LAB_8c246636:
          if (cVar29 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar15,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),uVar22);
            pdVar8 = pdVar9 + 1;
          }
          else {
            in_dr0 = *pdVar9;
            in_dr2 = pdVar9[1];
            pdVar8 = pdVar9 + 2;
          }
          if (cVar29 == '\0') {
            uVar22 = *(undefined4 *)(unsigned)(pdVar8 + 2);
            in_dr4 = CONCAT44D(uVar22,uVar3);
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),uVar30);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar22;
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
          uVar30 = uVar18;
        }
      }
      if (cVar29 == '\0') {
        uVar3 = SUB84(dVar24,0);
        dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar10 + 4)
                                 );
        in_xd12 = dVar26;
        in_dr6 = CONCAT44D(uVar3,SUB84(in_dr6,0));
      }
      else {
        in_xd12 = *(double *)(unsigned)((int)pdVar10 + 4);
        in_dr6 = dVar26;
      }
      uVar3 = 8;
      if (cVar29 == '\0') {
        in_dr4 = (double)(D2U(dVar25) >> 0x20);
        uVar18 = (uint)(D2U(dVar25) >> 0x20);
        dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 1),SUB84(dVar25,0));
      }
      else {
        uVar18 = SUB84(in_dr4,0);
        dVar26 = pdVar10[1];
      }
      (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) + -1;
      dVar25 = CONCAT44D((int)(D2U(dVar26) >> 0x20),-SUB84(dVar26,0));
      pdVar8 = pdVar9;
      pdVar9 = pdVar10;
      dVar26 = in_xd12;
    } while ((*(uint *)(fr0_ - 0x44)) != 0);
    if (pdVar7 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
      CacheBlockWriteBack(pdVar10);
      if (*(uint *)(unsigned)((int)pdVar10 + 0x3c) != (ar5 | uVar30)) {
        pdVar8 = pdVar10 + 2;
        *(uint *)(unsigned)((int)pdVar10 + 0x3c) = ar5 | uVar30;
        pdVar7 = pdVar10 + 6;
        puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
        (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar8,pdVar7,uVar30));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar8,pdVar7,uVar30));
        *(undefined4 *)(unsigned)(pdVar10 + 5) = uVar3;
        if (cVar29 == '\0') {
          in_dr6 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
          uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
        }
        else {
          in_dr6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
          uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar8,pdVar7,uVar30));
        *(undefined4 *)(unsigned)((int)pdVar10 + 0x2c) = uVar3;
      }
      uVar22 = (undefined4)(D2U(dVar24) >> 0x20);
      if (cVar29 == '\0') {
        pdVar8 = (double *)(unsigned)((int)pdVar10 + 0x34);
        dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 6),uVar22);
        dVar25 = CONCAT44D(uVar22,SUB84(in_dr0,0));
      }
      else {
        dVar26 = pdVar10[6];
        pdVar8 = pdVar10 + 7;
        dVar25 = dVar24;
        in_xd2 = dVar24;
      }
      if (cVar28 == '\0') {
        dVar26 = (double)(ulonglong)
                         (uint)(F32HI(dVar25) *
                                F32HI(dVar26) + F32LO(dVar26));
      }
      if (cVar29 == '\0') {
        *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar26,0);
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,uVar22);
        dVar26 = CONCAT44D(uVar22,SUB84(dVar25,0));
        dVar25 = CONCAT44D(uVar22,uVar18);
      }
      else {
        pdVar10[4] = in_xd2;
        dVar15 = *pdVar8;
        in_xd2 = dVar24;
        dVar26 = dVar24;
        dVar25 = dVar24;
      }
      pdVar8 = (double *)(unsigned)((int)pdVar10 + 0x24);
      if (cVar28 == '\0') {
        dVar15 = (double)(ulonglong)
                         (uint)(F32HI(dVar26) *
                                F32HI(dVar15) + F32LO(dVar15));
      }
      if (cVar29 == '\0') {
        *(int *)(unsigned)pdVar8 = SUB84(dVar15,0);
      }
      else {
        *pdVar8 = in_xd2;
      }
      CacheBlockWriteBack(pdVar8);
      if (cVar29 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar26,0));
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(dVar15,0));
        pdVar10 = pdVar10 + 1;
      }
      else {
        in_dr0 = *pdVar10;
        in_dr2 = pdVar10[1];
        pdVar10 = pdVar10 + 2;
      }
      if (cVar29 == '\0') {
        uVar22 = *(undefined4 *)(unsigned)(pdVar10 + 2);
        in_dr4 = CONCAT44D(uVar22,SUB84(dVar25,0));
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 0x14),SUB84(in_dr6,0));
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar22;
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
    (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) - 1;
    if ((*(uint *)(fr0_ - 0x30)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x38));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + (*(int *)(fr0_ - 0x38));
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c246254\n.set _FUN_8c246254, _FUN_8c246254_def\n");
