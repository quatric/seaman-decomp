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
undefined4 FUN_8c246756_def(int ar4,double *ar5,double *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c246756";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *unaff_r8 = 0;
  double *ar4_00;
  double *ar4_01;
  double *pdVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  float fVar15;
  double in_dr0 = 0;
  double dVar16;
  double in_dr2 = 0;
  float fVar20;
  double dVar18;
  ulonglong uVar19;
  double in_dr4 = 0;
  double dVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double in_dr6 = 0;
  double dVar25;
  float fVar26;
  double dVar27;
  double in_dr10 = 0;
  float fVar28;
  undefined4 in_fr13 = 0;
  double dVar29;
  undefined4 uVar30;
  double dVar31;
  undefined8 uVar32;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar33;
  char cVar34;
  char cVar35;
  float fVar17;
  
  cVar35 = '\0';
  cVar34 = '\0';
  dVar29 = CONCAT44D(0x3f000000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0x8000;
  }
  puVar12 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x30)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(int *)(fr0_ - 0x3c)) = 0;
  do {
    puVar13 = puVar12 + 1;
    uVar7 = (uint)*puVar12;
    uVar4 = 0x3f800000;
    if ((*puVar12 & 0x8000) != 0) {
      uVar7 = uVar7 & 0x7fff;
      uVar4 = 0xbf800000;
    }
    (*(int *)(fr0_ - 0x3c)) = (*(int *)(fr0_ - 0x3c)) + uVar7;
    iVar5 = uVar7 - 2;
    puVar14 = puVar12 + 2;
    puVar12 = puVar12 + 3;
    ar4_01 = (double *)(unsigned)((uint)*puVar14 * 0x40 + iVar2);
    ar4_00 = (double *)(unsigned)((uint)*puVar13 * 0x40 + iVar2);
    pdVar8 = unaff_r8;
    if (cVar35 == '\0') {
      dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_01 + 4),uVar4);
      in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),SUB84(in_dr6,0));
      dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),*(undefined4 *)(unsigned)(ar4_01 + 1));
      in_dr4 = (double)(ulonglong)*(uint *)(unsigned)(ar4_00 + 1);
    }
    else {
      dVar31 = *(double *)(unsigned)((int)ar4_01 + 4);
      in_dr6 = *(double *)(unsigned)((int)ar4_00 + 4);
      in_xd12 = ar4_01[1];
    }
    do {
      uVar1 = *puVar12;
      puVar12 = puVar12 + 1;
      pdVar11 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar2);
      (*(int *)(fr0_ - 0x34)) = 0;
      fVar20 = F32LO(in_dr4);
      in_dr4 = CONCAT44D(0x3f800000,fVar20);
      if ((*(uint *)(unsigned)ar4_00 & *(uint *)(unsigned)ar4_01 & *(uint *)(unsigned)pdVar11 & 0x3f) == 0) {
        if (((*(uint *)(unsigned)ar4_00 | *(uint *)(unsigned)ar4_01 | *(uint *)(unsigned)pdVar11) & 1) == 0) {
          fVar15 = F32HI(dVar31);
          if (cVar35 == '\0') {
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + 1),fVar15);
          }
          else {
            dVar25 = pdVar11[1];
            in_xd2 = dVar31;
          }
          if (cVar34 == '\0') {
            dVar25 = CONCAT44D(F32HI(dVar25) - F32LO(dVar29),
                                      F32LO(dVar25) - F32HI(in_dr6));
          }
          else {
            dVar25 = (dVar25 - in_dr6) - dVar29;
          }
          if (cVar35 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar11 + 4));
          }
          if (cVar34 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - fVar15);
            fVar15 = F32LO(dVar25) * F32HI(dVar25);
          }
          else {
            in_dr0 = in_dr0 - dVar31;
            fVar15 = SUB84(dVar25 * dVar25,0);
          }
          dVar25 = in_xd12;
          if (cVar35 == '\0') {
            dVar25 = CONCAT44D(SUB84(dVar29,0),fVar15);
          }
          if (cVar34 == '\0') {
            fVar15 = (F32HI(dVar25) - fVar20) * F32LO(in_dr0);
            in_dr2 = CONCAT44D(fVar15,F32LO(dVar25) - fVar15);
          }
          else {
            in_dr2 = (dVar25 - in_dr4) * in_dr0;
            in_dr2 = in_dr2 - in_dr2;
          }
          in_dr4 = in_xd2;
          if (cVar35 == '\0') {
            in_dr4 = CONCAT44D(SUB84(in_dr2,0),fVar20);
          }
          if (cVar34 == '\0') {
            in_dr4 = CONCAT44D(F32HI(in_dr4) * F32LO(dVar31),
                                      SUB84(in_dr4,0));
          }
          else {
            in_dr4 = in_dr4 * dVar31;
          }
          in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
          if (cVar34 == '\0') {
            bVar33 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar33 = in_dr2 < in_dr4;
          }
          if ((bVar33) && (iVar6 != 0)) {
            if (cVar34 == '\0') {
              in_dr4 = CONCAT44D(0xbf800000,SUB84(in_dr4,0));
            }
            else {
              in_dr4 = -CONCAT44D(0x3f800000,SUB84(in_dr4,0));
            }
          }
        }
        else {
          if (cVar35 == '\0') {
            fVar17 = *(float *)(unsigned)(ar4_01 + 2);
            fVar15 = *(float *)(unsigned)((int)ar4_01 + 0x14);
            dVar16 = CONCAT44D(fVar17,fVar15);
            fVar20 = *(float *)(unsigned)(ar4_01 + 3);
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 2),
                                      *(undefined4 *)(unsigned)((int)ar4_00 + 0x14));
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 3),SUB84(in_dr6,0));
            ar5 = (double *)(unsigned)((int)ar4_00 + 0x1c);
            in_dr10 = CONCAT44D(fVar20,SUB84(in_dr10,0));
            dVar18 = CONCAT44D(fVar20,SUB84(in_dr2,0));
          }
          else {
            dVar16 = ar4_01[2];
            in_dr10 = ar4_01[4];
            dVar21 = ar4_00[2];
            dVar25 = ar4_00[4];
            ar5 = ar4_00 + 5;
            fVar17 = F32HI(dVar16);
            fVar15 = F32LO(dVar16);
            fVar20 = F32HI(in_dr10);
            dVar18 = in_dr10;
          }
          fVar26 = F32HI(dVar25);
          fVar22 = F32HI(dVar21);
          if (cVar34 == '\0') {
            fVar28 = F32HI(in_dr10) * fVar22;
            in_dr10 = CONCAT44D(fVar28,SUB84(in_dr10,0));
            dVar18 = (double)((ulonglong)(uint)(fVar20 * F32LO(dVar21) - F32LO(dVar16) * fVar26)
                             << 0x20);
            dVar27 = CONCAT44D(fVar17 * fVar26 - fVar28,
                                      fVar15 * fVar22 -
                                      F32HI(dVar16) * F32LO(dVar21));
          }
          else {
            in_dr10 = in_dr10 * dVar21;
            dVar27 = dVar16 * dVar25 * dVar21;
            dVar18 = dVar18 * dVar21 - dVar27;
            dVar27 = (dVar16 * dVar25 * dVar21 - in_dr10) - dVar27;
          }
          if (cVar35 == '\0') {
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + 2),SUB84(dVar25,0));
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 0x14),
                                      *(undefined4 *)(unsigned)(pdVar11 + 3));
            ar6 = (double *)(unsigned)((int)pdVar11 + 0x1c);
          }
          else {
            in_dr6 = pdVar11[2];
            dVar25 = pdVar11[3];
            ar6 = pdVar11 + 5;
          }
          uVar19 = D2U(dVar18) & 0xffffffff00000000;
                    
          if (cVar34 == '\0') {
            fVar20 = F32LO(dVar27) * F32LO(dVar25) +
                     F32HI(dVar27) * F32HI(dVar25) +
                     F32LO(in_dr6) * 0.0 +
                     (float)(uVar19 >> 0x20) * F32HI(in_dr6);
          }
          in_dr4 = in_xd2;
          in_dr0 = in_xd2;
          if (cVar35 == '\0') {
            in_dr4 = CONCAT44D((int)uVar19,SUB84(dVar25,0));
            in_dr0 = CONCAT44D((int)uVar19,SUB84(dVar27,0));
          }
          if (cVar34 == '\0') {
            in_dr4 = CONCAT44D(F32HI(in_dr4) * F32LO(dVar31),
                                      SUB84(in_dr4,0));
          }
          else {
            in_dr4 = in_dr4 * dVar31;
          }
          in_dr2 = (double)(uVar19 & 0xffffffff00000000);
          if (cVar34 == '\0') {
            bVar33 = 0.0 < F32HI(in_dr4);
          }
          else {
            bVar33 = in_dr2 < in_dr4;
          }
          (*(int *)(fr0_ - 0x34)) = iVar6;
          if (!bVar33) {
            (*(int *)(fr0_ - 0x34)) = 1;
            in_dr4 = CONCAT44D(0x3f800000,SUB84(in_dr4,0));
          }
        }
      }
      uVar4 = SUB84(in_dr6,0);
      uVar7 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar20 = F32HI(in_dr4);
      if (pdVar8 < unaff_r8) {
        dVar25 = (double)((ulonglong)uVar7 << 0x20);
        if (cVar34 == '\0') {
          bVar33 = fVar20 < 0.0;
        }
        else {
          bVar33 = in_dr4 < dVar25;
        }
        if (bVar33) {
          *(undefined4 *)(unsigned)ar4_01 = 0xe0000000;
          CacheBlockWriteBack(ar4_01);
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
          if (cVar35 == '\0') {
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          uVar3 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(ar4_01,ar5,ar6,ar7));
          uVar24 = SUB84(dVar25,0);
          uVar30 = (undefined4)(D2U(dVar29) >> 0x20);
          dVar16 = dVar29;
          dVar25 = dVar29;
          dVar21 = dVar29;
          if (cVar35 == '\0') {
            dVar16 = CONCAT44D(uVar30,uVar23);
            dVar25 = in_xd2;
            dVar21 = CONCAT44D(uVar30,SUB84(in_dr0,0));
            uVar24 = uVar30;
          }
          *(undefined4 *)(unsigned)(ar4_01 + 5) = uVar3;
          if (cVar35 == '\0') {
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_01 + 6),uVar24);
            ar5 = (double *)(unsigned)((int)ar4_01 + 0x34);
          }
          else {
            dVar18 = ar4_01[6];
            ar5 = ar4_01 + 7;
          }
          if (cVar34 == '\0') {
            fVar20 = F32HI(dVar18);
            dVar18 = CONCAT44D(fVar20,F32HI(dVar21) * fVar20 +
                                             SUB84(dVar18,0));
          }
          uVar23 = (undefined4)(D2U(dVar16) >> 0x20);
          if (cVar35 == '\0') {
            *(int *)(unsigned)(ar4_01 + 4) = SUB84(dVar18,0);
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar23);
            in_xd2 = dVar25;
            dVar25 = CONCAT44D(uVar23,SUB84(dVar21,0));
          }
          else {
            ar4_01[4] = dVar25;
            dVar18 = *ar5;
            in_xd2 = dVar16;
            dVar25 = dVar16;
          }
          pdVar10 = (double *)(unsigned)((int)ar4_01 + 0x24);
          if (cVar34 == '\0') {
            fVar20 = F32HI(dVar18);
            dVar18 = CONCAT44D(fVar20,F32HI(dVar25) * fVar20 +
                                             SUB84(dVar18,0));
          }
          uVar23 = SUB84(dVar18,0);
          if (cVar35 == '\0') {
            *(undefined4 *)(unsigned)pdVar10 = uVar23;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar10);
LAB_8c246a84:
          if (cVar35 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_01,SUB84(dVar25,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_01 + 4),uVar23);
            pdVar10 = ar4_01 + 1;
          }
          else {
            in_dr0 = *ar4_01;
            in_dr2 = ar4_01[1];
            pdVar10 = ar4_01 + 2;
          }
          if (cVar35 == '\0') {
            uVar23 = *(undefined4 *)(unsigned)(pdVar10 + 2);
            in_dr4 = CONCAT44D(uVar23,SUB84(dVar16,0));
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 0x14),uVar4);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar10[2];
            dVar25 = pdVar10[3];
            unaff_r8[3] = dVar25;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar4 = SUB84(dVar25,0);
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          *(undefined4 *)(unsigned)ar4_01 = 0xf0000000;
          CacheBlockWriteBack(ar4_01);
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
          if (cVar35 == '\0') {
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          uVar3 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(ar4_01,ar5,ar6,ar7));
          uVar24 = SUB84(dVar25,0);
          uVar30 = (undefined4)(D2U(dVar29) >> 0x20);
          dVar18 = dVar29;
          dVar25 = dVar29;
          dVar21 = dVar29;
          if (cVar35 == '\0') {
            dVar18 = CONCAT44D(uVar30,uVar23);
            dVar25 = in_xd2;
            dVar21 = CONCAT44D(uVar30,SUB84(in_dr0,0));
            uVar24 = uVar30;
          }
          *(undefined4 *)(unsigned)(ar4_01 + 5) = uVar3;
          if (cVar35 == '\0') {
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_01 + 6),uVar24);
            ar5 = (double *)(unsigned)((int)ar4_01 + 0x34);
          }
          else {
            dVar16 = ar4_01[6];
            ar5 = ar4_01 + 7;
          }
          if (cVar34 == '\0') {
            fVar20 = F32HI(dVar16);
            dVar16 = CONCAT44D(fVar20,F32HI(dVar21) * fVar20 +
                                             SUB84(dVar16,0));
          }
          uVar23 = (undefined4)(D2U(dVar18) >> 0x20);
          if (cVar35 == '\0') {
            *(int *)(unsigned)(ar4_01 + 4) = SUB84(dVar16,0);
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar23);
            in_xd2 = dVar25;
            dVar25 = CONCAT44D(uVar23,SUB84(dVar21,0));
          }
          else {
            ar4_01[4] = dVar25;
            dVar16 = *ar5;
            in_xd2 = dVar18;
            dVar25 = dVar18;
          }
          pdVar8 = (double *)(unsigned)((int)ar4_01 + 0x24);
          if (cVar34 == '\0') {
            fVar20 = F32HI(dVar16);
            dVar16 = CONCAT44D(fVar20,F32HI(dVar25) * fVar20 +
                                             SUB84(dVar16,0));
          }
          if (cVar35 == '\0') {
            *(int *)(unsigned)pdVar8 = SUB84(dVar16,0);
          }
          else {
            *pdVar8 = in_xd2;
          }
          CacheBlockWriteBack(pdVar8);
          if (cVar35 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_01,SUB84(dVar25,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_01 + 4),SUB84(dVar16,0));
            pdVar8 = ar4_01 + 1;
          }
          else {
            in_dr0 = *ar4_01;
            in_dr2 = ar4_01[1];
            pdVar8 = ar4_01 + 2;
          }
          if (cVar35 == '\0') {
            uVar23 = *(undefined4 *)(unsigned)(pdVar8 + 2);
            in_dr4 = CONCAT44D(uVar23,SUB84(dVar18,0));
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),uVar4);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            in_dr4 = pdVar8[2];
            dVar25 = pdVar8[3];
            unaff_r8[3] = dVar25;
            unaff_r8[2] = in_dr4;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar4 = SUB84(dVar25,0);
          unaff_r8 = unaff_r8 + 4;
          pdVar8 = unaff_r8;
        }
      }
      else {
        in_dr2 = (double)((ulonglong)uVar7 << 0x20);
        if (cVar34 == '\0') {
          bVar33 = fVar20 < 0.0;
        }
        else {
          bVar33 = in_dr4 < in_dr2;
        }
        if (bVar33) {
          *(undefined4 *)(unsigned)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          if (cVar35 == '\0') {
            uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          }
          uVar24 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(ar4_00,ar5,ar6,ar7));
          uVar23 = SUB84(in_dr2,0);
          uVar3 = (undefined4)(D2U(dVar29) >> 0x20);
          dVar18 = dVar29;
          dVar25 = dVar29;
          dVar21 = dVar29;
          if (cVar35 == '\0') {
            dVar18 = CONCAT44D(uVar3,uVar4);
            dVar25 = in_xd2;
            dVar21 = CONCAT44D(uVar3,SUB84(in_dr0,0));
            uVar23 = uVar3;
          }
          *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar24;
          if (cVar35 == '\0') {
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 6),uVar23);
            pdVar10 = (double *)(unsigned)((int)ar4_00 + 0x34);
          }
          else {
            dVar16 = ar4_00[6];
            pdVar10 = ar4_00 + 7;
          }
          if (cVar34 == '\0') {
            fVar20 = F32HI(dVar16);
            dVar16 = CONCAT44D(fVar20,F32HI(dVar21) * fVar20 +
                                             SUB84(dVar16,0));
          }
          uVar4 = (undefined4)(D2U(dVar18) >> 0x20);
          if (cVar35 == '\0') {
            *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar16,0);
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,uVar4);
            dVar18 = dVar25;
            dVar25 = CONCAT44D(uVar4,SUB84(dVar21,0));
          }
          else {
            ar4_00[4] = dVar25;
            dVar16 = *pdVar10;
            dVar25 = dVar18;
          }
          pdVar9 = (double *)(unsigned)((int)ar4_00 + 0x24);
          if (cVar34 == '\0') {
            fVar20 = F32HI(dVar16);
            dVar16 = CONCAT44D(fVar20,F32HI(dVar25) * fVar20 +
                                             SUB84(dVar16,0));
          }
          if (cVar35 == '\0') {
            *(int *)(unsigned)pdVar9 = SUB84(dVar16,0);
          }
          else {
            *pdVar9 = dVar18;
          }
          CacheBlockWriteBack(pdVar9);
          if (cVar35 == '\0') {
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(dVar25,0));
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),SUB84(dVar16,0));
            pdVar9 = ar4_00 + 1;
          }
          else {
            dVar25 = *ar4_00;
            dVar21 = ar4_00[1];
            pdVar9 = ar4_00 + 2;
          }
          if (cVar35 == '\0') {
            uVar4 = *(undefined4 *)(unsigned)(pdVar9 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar4;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar21) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar25) >> 0x20);
          }
          else {
            dVar16 = pdVar9[2];
            unaff_r8[3] = pdVar9[3];
            unaff_r8[2] = dVar16;
            unaff_r8[1] = dVar21;
            *unaff_r8 = dVar25;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)ar4_01 = 0xe0000000;
          CacheBlockWriteBack(ar4_01);
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
          if (cVar35 == '\0') {
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          uVar3 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(ar4_01,pdVar10,ar6,ar7));
          uVar24 = SUB84(dVar21,0);
          uVar30 = (undefined4)(D2U(dVar29) >> 0x20);
          dVar16 = dVar29;
          in_xd2 = dVar29;
          dVar21 = dVar29;
          if (cVar35 == '\0') {
            dVar16 = CONCAT44D(uVar30,uVar23);
            in_xd2 = dVar18;
            dVar21 = CONCAT44D(uVar30,SUB84(dVar25,0));
            uVar24 = uVar30;
          }
          *(undefined4 *)(unsigned)(ar4_01 + 5) = uVar3;
          if (cVar35 == '\0') {
            dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_01 + 6),uVar24);
            ar5 = (double *)(unsigned)((int)ar4_01 + 0x34);
          }
          else {
            dVar25 = ar4_01[6];
            ar5 = ar4_01 + 7;
          }
          if (cVar34 == '\0') {
            fVar20 = F32HI(dVar25);
            dVar25 = CONCAT44D(fVar20,F32HI(dVar21) * fVar20 +
                                             SUB84(dVar25,0));
          }
          uVar23 = (undefined4)(D2U(dVar16) >> 0x20);
          if (cVar35 == '\0') {
            *(int *)(unsigned)(ar4_01 + 4) = SUB84(dVar25,0);
            dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar23);
            dVar25 = CONCAT44D(uVar23,SUB84(dVar21,0));
          }
          else {
            ar4_01[4] = in_xd2;
            dVar18 = *ar5;
            in_xd2 = dVar16;
            dVar25 = dVar16;
          }
          pdVar10 = (double *)(unsigned)((int)ar4_01 + 0x24);
          if (cVar34 == '\0') {
            fVar20 = F32HI(dVar18);
            dVar18 = CONCAT44D(fVar20,F32HI(dVar25) * fVar20 +
                                             SUB84(dVar18,0));
          }
          uVar23 = SUB84(dVar18,0);
          if (cVar35 == '\0') {
            *(undefined4 *)(unsigned)pdVar10 = uVar23;
          }
          else {
            *pdVar10 = in_xd2;
          }
          CacheBlockWriteBack(pdVar10);
          goto LAB_8c246a84;
        }
      }
      if ((*(int *)(fr0_ - 0x34)) != 0) {
        ar5 = ar4_01;
        ar6 = pdVar11;
        (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23e4c8(ar4_00,ar4_01,pdVar11,ar7));
        pdVar8 = unaff_r8;
      }
      if (cVar35 == '\0') {
        uVar32 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(dVar31,0));
        in_dr6 = CONCAT44D((int)(D2U(dVar31) >> 0x20),uVar4);
      }
      else {
        uVar32 = *(undefined8 *)(unsigned)((int)pdVar11 + 4);
        in_dr6 = dVar31;
      }
      uVar4 = 8;
      if (cVar35 == '\0') {
        in_dr4 = (double)(D2U(dVar29) & 0xffffffff);
        dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),*(undefined4 *)(unsigned)(pdVar11 + 1));
      }
      else {
        in_xd12 = pdVar11[1];
      }
      iVar5 = iVar5 + -1;
      dVar31 = CONCAT44D((int)((ulonglong)uVar32 >> 0x20),-(float)uVar32);
      ar4_00 = ar4_01;
      ar4_01 = pdVar11;
    } while (iVar5 != 0);
    if (pdVar8 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar11 = 0xf0000000;
      CacheBlockWriteBack(pdVar11);
      uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
      uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
      if (cVar35 == '\0') {
        uVar24 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(pdVar11,ar5,ar6,ar7));
      uVar3 = SUB84(in_dr2,0);
      uVar30 = (undefined4)(D2U(dVar29) >> 0x20);
      dVar21 = dVar29;
      dVar31 = dVar29;
      dVar25 = dVar29;
      if (cVar35 == '\0') {
        dVar21 = CONCAT44D(uVar30,uVar24);
        dVar31 = in_xd2;
        dVar25 = CONCAT44D(uVar30,SUB84(in_dr0,0));
        uVar3 = uVar30;
      }
      *(undefined4 *)(unsigned)(pdVar11 + 5) = uVar4;
      if (cVar35 == '\0') {
        dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + 6),uVar3);
        ar5 = (double *)(unsigned)((int)pdVar11 + 0x34);
      }
      else {
        dVar18 = pdVar11[6];
        ar5 = pdVar11 + 7;
      }
      if (cVar34 == '\0') {
        fVar20 = F32HI(dVar18);
        dVar18 = CONCAT44D(fVar20,F32HI(dVar25) * fVar20 +
                                         SUB84(dVar18,0));
      }
      uVar24 = (undefined4)(D2U(dVar21) >> 0x20);
      if (cVar35 == '\0') {
        *(int *)(unsigned)(pdVar11 + 4) = SUB84(dVar18,0);
        dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar24);
        in_xd2 = dVar31;
        dVar31 = CONCAT44D(uVar24,SUB84(dVar25,0));
      }
      else {
        pdVar11[4] = dVar31;
        dVar18 = *ar5;
        in_xd2 = dVar21;
        dVar31 = dVar21;
      }
      pdVar8 = (double *)(unsigned)((int)pdVar11 + 0x24);
      if (cVar34 == '\0') {
        fVar20 = F32HI(dVar18);
        dVar18 = CONCAT44D(fVar20,F32HI(dVar31) * fVar20 +
                                         SUB84(dVar18,0));
      }
      if (cVar35 == '\0') {
        *(int *)(unsigned)pdVar8 = SUB84(dVar18,0);
      }
      else {
        *pdVar8 = in_xd2;
      }
      CacheBlockWriteBack(pdVar8);
      if (cVar35 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(dVar31,0));
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(dVar18,0));
        pdVar11 = pdVar11 + 1;
      }
      else {
        in_dr0 = *pdVar11;
        in_dr2 = pdVar11[1];
        pdVar11 = pdVar11 + 2;
      }
      if (cVar35 == '\0') {
        uVar24 = *(undefined4 *)(unsigned)(pdVar11 + 2);
        in_dr4 = CONCAT44D(uVar24,SUB84(dVar21,0));
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 0x14),uVar23);
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar11 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar24;
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
    (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) - 1;
    if ((*(uint *)(fr0_ - 0x30)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x3c));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + (*(int *)(fr0_ - 0x3c));
      return uVar4;
    }
  } while( true );
}

__asm__(".globl _FUN_8c246756\n.set _FUN_8c246756, _FUN_8c246756_def\n");
