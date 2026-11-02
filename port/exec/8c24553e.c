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
undefined4 FUN_8c24553e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c24553e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  double *pdVar10;
  double *pdVar11;
  short *psVar12;
  double *ar5_00;
  double *ar6_00;
  double *unaff_r8 = 0;
  double *pdVar13;
  double *ar4_00;
  double *ar4_01;
  short *psVar14;
  short *psVar15;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  float fVar19;
  double in_dr0 = 0;
  double dVar20;
  undefined4 uVar22;
  double in_dr2 = 0;
  double dVar23;
  float fVar25;
  ulonglong uVar24;
  float fVar26;
  double dVar27;
  double dVar28;
  double in_dr6 = 0;
  float fVar29;
  double dVar30;
  double in_dr10 = 0;
  float fVar31;
  undefined4 in_fr13 = 0;
  undefined4 uVar33;
  double dVar32;
  double in_dr14 = 0;
  undefined8 uVar34;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar35;
  char cVar36;
  char cVar37;
  float fVar21;
  
  cVar37 = '\0';
  cVar36 = '\0';
  dVar32 = CONCAT44D(0x3f800000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0x8000;
  }
  puVar16 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  psVar14 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
  (*(uint *)(fr0_ - 0x30)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(int *)(fr0_ - 0x40)) = 0;
  do {
    uVar6 = SUB84(in_dr14,0);
    puVar17 = puVar16 + 1;
    uVar9 = (uint)*puVar16;
    uVar33 = (undefined4)(D2U(dVar32) >> 0x20);
    if (cVar37 == '\0') {
      uVar6 = uVar33;
    }
    if ((*puVar16 & 0x8000) != 0) {
      uVar9 = uVar9 & 0x7fff;
      uVar6 = 0xbf800000;
    }
    psVar15 = psVar14 + 2;
    (*(int *)(fr0_ - 0x40)) = (*(int *)(fr0_ - 0x40)) + uVar9;
    iVar7 = uVar9 - 2;
    puVar18 = puVar16 + 2;
    puVar16 = puVar16 + 3;
    ar4_00 = (double *)(unsigned)((uint)*puVar17 * 0x40 + iVar3);
    ar4_01 = (double *)(unsigned)((uint)*puVar18 * 0x40 + iVar3);
    if (cVar37 == '\0') {
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_01 + 4),uVar6);
      dVar27 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),*(undefined4 *)(unsigned)(ar4_00 + 1));
      dVar32 = CONCAT44D(uVar33,*(undefined4 *)(unsigned)(ar4_01 + 1));
      in_dr6 = CONCAT44D(0x3b800000,SUB84(in_dr6,0));
    }
    else {
      dVar27 = *(double *)(unsigned)((int)ar4_00 + 4);
      in_dr14 = *(double *)(unsigned)((int)ar4_01 + 4);
      in_xd12 = ar4_01[1];
      in_dr6 = -2.584224838040973e+250;
    }
    uVar6 = (undefined4)((ulonglong)in_dr2 >> 0x20);
    fVar26 = F32HI(in_dr6);
    if (cVar36 == '\0') {
      dVar23 = CONCAT44D(uVar6,(float)(int)*psVar14 * fVar26);
    }
    else {
      dVar23 = CONCAT44D(uVar6,(float)(int)*psVar14) * in_dr6;
    }
    if (cVar37 == '\0') {
      *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar23,0);
    }
    else {
      ar4_00[4] = in_xd2;
    }
    uVar6 = (undefined4)(D2U(dVar23) >> 0x20);
    if (cVar36 == '\0') {
      dVar23 = CONCAT44D(uVar6,(float)(int)psVar14[1] * fVar26);
    }
    else {
      dVar23 = CONCAT44D(uVar6,(float)(int)psVar14[1]) * in_dr6;
    }
    if (cVar37 == '\0') {
      *(int *)(unsigned)((int)ar4_00 + 0x24) = SUB84(dVar23,0);
    }
    else {
      *(double *)(unsigned)((int)ar4_00 + 0x24) = in_xd2;
    }
    psVar12 = psVar14 + 3;
    psVar14 = psVar14 + 4;
    uVar6 = (undefined4)(D2U(dVar23) >> 0x20);
    if (cVar36 == '\0') {
      dVar23 = CONCAT44D(uVar6,(float)(int)*psVar15 * fVar26);
    }
    else {
      dVar23 = CONCAT44D(uVar6,(float)(int)*psVar15) * in_dr6;
    }
    if (cVar37 == '\0') {
      *(int *)(unsigned)(ar4_01 + 4) = SUB84(dVar23,0);
    }
    else {
      ar4_01[4] = in_xd2;
    }
    uVar6 = (undefined4)(D2U(dVar23) >> 0x20);
    if (cVar36 == '\0') {
      in_dr2 = CONCAT44D(uVar6,(float)(int)*psVar12 * fVar26);
    }
    else {
      in_dr2 = CONCAT44D(uVar6,(float)(int)*psVar12) * in_dr6;
    }
    pdVar10 = unaff_r8;
    if (cVar37 == '\0') {
      *(int *)(unsigned)((int)ar4_01 + 0x24) = SUB84(in_dr2,0);
    }
    else {
      *(double *)(unsigned)((int)ar4_01 + 0x24) = in_xd2;
    }
    do {
      uVar6 = SUB84(in_dr6,0);
      uVar1 = *puVar16;
      puVar16 = puVar16 + 1;
      pdVar13 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar3);
      (*(int *)(fr0_ - 0x34)) = 0;
      if (cVar37 == '\0') {
        uVar6 = 0x3b800000;
      }
      uVar33 = (undefined4)(D2U(dVar32) >> 0x20);
      in_dr6 = dVar32;
      if (cVar37 == '\0') {
        in_dr6 = CONCAT44D(uVar33,uVar6);
      }
      ar6_00 = (double *)(unsigned)(*(uint *)(unsigned)ar4_00 & *(uint *)(unsigned)ar4_01 & *(uint *)(unsigned)pdVar13 & 0x3f);
      sVar2 = *psVar14;
      psVar15 = psVar14 + 1;
      psVar14 = psVar14 + 2;
      uVar6 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      fVar26 = F32LO(in_dr6);
      if (cVar36 == '\0') {
        dVar23 = CONCAT44D(uVar6,(float)(int)sVar2 * fVar26);
      }
      else {
        dVar23 = CONCAT44D(uVar6,(float)(int)sVar2) * in_dr6;
      }
      if (cVar37 == '\0') {
        *(int *)(unsigned)(pdVar13 + 4) = SUB84(dVar23,0);
      }
      else {
        pdVar13[4] = in_xd2;
      }
      ar5_00 = (double *)(unsigned)((int)pdVar13 + 0x24);
      uVar6 = (undefined4)(D2U(dVar23) >> 0x20);
      if (cVar36 == '\0') {
        dVar23 = CONCAT44D(uVar6,(float)(int)*psVar15 * fVar26);
      }
      else {
        dVar23 = CONCAT44D(uVar6,(float)(int)*psVar15) * in_dr6;
      }
      if (cVar37 == '\0') {
        *(int *)(unsigned)ar5_00 = SUB84(dVar23,0);
      }
      else {
        *ar5_00 = in_xd2;
      }
      if (ar6_00 == (double *)(unsigned)0x0) {
        if (((*(uint *)(unsigned)ar4_00 | *(uint *)(unsigned)ar4_01 | *(uint *)(unsigned)pdVar13) & 1) == 0) {
          fVar25 = F32HI(in_dr14);
          if (cVar37 == '\0') {
            dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar13 + 1),fVar25);
          }
          else {
            dVar23 = pdVar13[1];
            in_xd2 = in_dr14;
          }
          if (cVar36 == '\0') {
            dVar23 = CONCAT44D(F32HI(dVar23) - F32LO(dVar32),
                                      F32LO(dVar23) - F32HI(dVar27));
          }
          else {
            dVar23 = (dVar23 - dVar27) - dVar32;
          }
          if (cVar37 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar13 + 4));
          }
          if (cVar36 == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - fVar25);
            fVar25 = F32LO(dVar23) * F32HI(dVar23);
          }
          else {
            in_dr0 = in_dr0 - in_dr14;
            fVar25 = SUB84(dVar23 * dVar23,0);
          }
          dVar23 = in_xd12;
          if (cVar37 == '\0') {
            dVar23 = CONCAT44D(SUB84(dVar32,0),fVar25);
          }
          if (cVar36 == '\0') {
            fVar25 = (F32HI(dVar23) - F32LO(dVar27)) * F32LO(in_dr0);
            dVar23 = CONCAT44D(fVar25,F32LO(dVar23) - fVar25);
          }
          else {
            dVar23 = (dVar23 - dVar27) * in_dr0;
            dVar23 = dVar23 - dVar23;
          }
          in_dr6 = in_xd2;
          if (cVar37 == '\0') {
            in_dr6 = CONCAT44D(SUB84(dVar23,0),fVar26);
          }
          if (cVar36 == '\0') {
            in_dr6 = CONCAT44D(F32HI(in_dr6) * F32LO(in_dr14),
                                      SUB84(in_dr6,0));
          }
          else {
            in_dr6 = in_dr6 * in_dr14;
          }
          dVar23 = (double)(D2U(dVar23) & 0xffffffff00000000);
          if (cVar36 == '\0') {
            bVar35 = 0.0 < F32HI(in_dr6);
          }
          else {
            bVar35 = dVar23 < in_dr6;
          }
          if ((bVar35) && (iVar8 != 0)) {
            if (cVar36 == '\0') {
              in_dr6 = CONCAT44D(0xbf800000,SUB84(in_dr6,0));
            }
            else {
              in_dr6 = -CONCAT44D(0x3f800000,SUB84(in_dr6,0));
            }
          }
        }
        else {
          if (cVar37 == '\0') {
            fVar21 = *(float *)(unsigned)(ar4_01 + 2);
            fVar19 = *(float *)(unsigned)((int)ar4_01 + 0x14);
            dVar20 = CONCAT44D(fVar21,fVar19);
            fVar25 = *(float *)(unsigned)(ar4_01 + 3);
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 2),
                                      *(undefined4 *)(unsigned)((int)ar4_00 + 0x14));
            dVar27 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 3),fVar26);
            ar5_00 = (double *)(unsigned)((int)ar4_00 + 0x1c);
            in_dr10 = CONCAT44D(fVar25,SUB84(in_dr10,0));
            dVar23 = CONCAT44D(fVar25,SUB84(dVar23,0));
          }
          else {
            dVar20 = ar4_01[2];
            in_dr10 = ar4_01[4];
            dVar28 = ar4_00[2];
            dVar27 = ar4_00[4];
            ar5_00 = ar4_00 + 5;
            fVar21 = F32HI(dVar20);
            fVar19 = F32LO(dVar20);
            fVar25 = F32HI(in_dr10);
            dVar23 = in_dr10;
          }
          fVar29 = F32HI(dVar27);
          fVar26 = F32HI(dVar28);
          if (cVar36 == '\0') {
            fVar31 = F32HI(in_dr10) * fVar26;
            in_dr10 = CONCAT44D(fVar31,SUB84(in_dr10,0));
            dVar23 = (double)((ulonglong)(uint)(fVar25 * F32LO(dVar28) - F32LO(dVar20) * fVar29)
                             << 0x20);
            dVar30 = CONCAT44D(fVar21 * fVar29 - fVar31,
                                      fVar19 * fVar26 -
                                      F32HI(dVar20) * F32LO(dVar28));
          }
          else {
            in_dr10 = in_dr10 * dVar28;
            dVar30 = dVar20 * dVar27 * dVar28;
            dVar23 = dVar23 * dVar28 - dVar30;
            dVar30 = (dVar20 * dVar27 * dVar28 - in_dr10) - dVar30;
          }
          if (cVar37 == '\0') {
            dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar13 + 2),SUB84(dVar27,0));
            dVar27 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar13 + 0x14),
                                      *(undefined4 *)(unsigned)(pdVar13 + 3));
            ar6_00 = (double *)(unsigned)((int)pdVar13 + 0x1c);
          }
          else {
            dVar28 = pdVar13[2];
            dVar27 = pdVar13[3];
            ar6_00 = pdVar13 + 5;
          }
          uVar24 = D2U(dVar23) & 0xffffffff00000000;
                    
          if (cVar36 == '\0') {
            fVar26 = F32LO(dVar30) * F32LO(dVar27) +
                     F32HI(dVar30) * F32HI(dVar27) +
                     F32LO(dVar28) * 0.0 +
                     (float)(uVar24 >> 0x20) * F32HI(dVar28);
          }
          dVar20 = in_xd2;
          in_dr0 = in_xd2;
          if (cVar37 == '\0') {
            dVar20 = CONCAT44D((int)uVar24,SUB84(dVar28,0));
            in_dr0 = CONCAT44D((int)uVar24,SUB84(dVar30,0));
          }
          if (cVar36 == '\0') {
            dVar20 = CONCAT44D(F32HI(dVar20) * F32LO(in_dr14),
                                      SUB84(dVar20,0));
          }
          else {
            dVar20 = dVar20 * in_dr14;
          }
          dVar23 = (double)(uVar24 & 0xffffffff00000000);
          if (cVar36 == '\0') {
            bVar35 = 0.0 < F32HI(dVar20);
          }
          else {
            bVar35 = dVar23 < dVar20;
          }
          in_dr6 = dVar20;
          (*(int *)(fr0_ - 0x34)) = iVar8;
          if ((!bVar35) && ((*(int *)(fr0_ - 0x34)) = 1, in_dr6 = dVar32, cVar37 == '\0')) {
            in_dr6 = CONCAT44D(uVar33,SUB84(dVar20,0));
          }
        }
      }
      uVar6 = SUB84(dVar27,0);
      uVar9 = (uint)(D2U(dVar23) >> 0x20);
      fVar26 = F32HI(in_dr6);
      if (pdVar10 < unaff_r8) {
        dVar27 = (double)((ulonglong)uVar9 << 0x20);
        if (cVar36 == '\0') {
          bVar35 = fVar26 < 0.0;
        }
        else {
          bVar35 = in_dr6 < dVar27;
        }
        if (bVar35) {
LAB_8c2457f2:
          uVar22 = SUB84(dVar27,0);
          uVar4 = SUB84(in_dr0,0);
          *(undefined4 *)(unsigned)ar4_01 = 0xe0000000;
          CacheBlockWriteBack(ar4_01);
          uVar33 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
          if (cVar37 == '\0') {
            uVar33 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          uVar5 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(ar4_01,ar5_00,ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4_01 + 5) = uVar5;
          CacheBlockWriteBack(ar4_01 + 4);
          if (cVar37 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_01,uVar4);
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_01 + 4),uVar22);
            pdVar11 = ar4_01 + 1;
          }
          else {
            in_dr0 = *ar4_01;
            in_dr2 = ar4_01[1];
            pdVar11 = ar4_01 + 2;
          }
          if (cVar37 == '\0') {
            uVar4 = *(undefined4 *)(unsigned)(pdVar11 + 2);
            dVar27 = CONCAT44D(uVar4,uVar33);
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 0x14),uVar6);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar11 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar4;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar27 = pdVar11[2];
            in_dr6 = pdVar11[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar27;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar6 = SUB84(dVar27,0);
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          *(undefined4 *)(unsigned)ar4_01 = 0xf0000000;
          CacheBlockWriteBack(ar4_01);
          uVar33 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
          if (cVar37 == '\0') {
            uVar33 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(ar4_01,ar5_00,ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4_01 + 5) = uVar4;
          CacheBlockWriteBack(ar4_01 + 4);
          if (cVar37 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_01,SUB84(in_dr0,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_01 + 4),SUB84(dVar27,0));
            pdVar10 = ar4_01 + 1;
          }
          else {
            in_dr0 = *ar4_01;
            in_dr2 = ar4_01[1];
            pdVar10 = ar4_01 + 2;
          }
          if (cVar37 == '\0') {
            uVar4 = *(undefined4 *)(unsigned)(pdVar10 + 2);
            dVar27 = CONCAT44D(uVar4,uVar33);
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 0x14),uVar6);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar4;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar27 = pdVar10[2];
            in_dr6 = pdVar10[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar27;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          uVar6 = SUB84(dVar27,0);
          unaff_r8 = unaff_r8 + 4;
          pdVar10 = unaff_r8;
        }
      }
      else {
        in_dr2 = (double)((ulonglong)uVar9 << 0x20);
        if (cVar36 == '\0') {
          bVar35 = fVar26 < 0.0;
        }
        else {
          bVar35 = in_dr6 < in_dr2;
        }
        if (bVar35) {
          *(undefined4 *)(unsigned)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar6 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(ar4_00,ar5_00,ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar6;
          CacheBlockWriteBack(ar4_00 + 4);
          if (cVar37 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(in_dr0,0));
            dVar27 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),SUB84(in_dr2,0));
            pdVar11 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            dVar27 = ar4_00[1];
            pdVar11 = ar4_00 + 2;
          }
          if (cVar37 == '\0') {
            uVar6 = *(undefined4 *)(unsigned)(pdVar11 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar11 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar6;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar27) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar23 = pdVar11[2];
            unaff_r8[3] = pdVar11[3];
            unaff_r8[2] = dVar23;
            unaff_r8[1] = dVar27;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          goto LAB_8c2457f2;
        }
      }
      if ((*(int *)(fr0_ - 0x34)) != 0) {
        ar5_00 = ar4_01;
        ar6_00 = pdVar13;
        (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c23e228(ar4_00,ar4_01,pdVar13,ar7));
        pdVar10 = unaff_r8;
      }
      if (cVar37 == '\0') {
        uVar34 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar13 + 4),SUB84(in_dr14,0));
        dVar27 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar6);
      }
      else {
        uVar34 = *(undefined8 *)(unsigned)((int)pdVar13 + 4);
        dVar27 = in_dr14;
      }
      uVar6 = 8;
      if (cVar37 == '\0') {
        dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),SUB84(dVar32,0));
        dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(pdVar13 + 1));
      }
      else {
        in_xd12 = pdVar13[1];
      }
      iVar7 = iVar7 + -1;
      in_dr14 = CONCAT44D((int)((ulonglong)uVar34 >> 0x20),-(float)uVar34);
      ar4_00 = ar4_01;
      ar4_01 = pdVar13;
    } while (iVar7 != 0);
    if (pdVar10 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar13 = 0xf0000000;
      CacheBlockWriteBack(pdVar13);
      uVar33 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
      if (cVar37 == '\0') {
        uVar33 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
      }
      uVar6 = (vsp = ((unsigned long)(fr0_ - 72)), float_to_color_u8(pdVar13,ar5_00,ar6_00,ar7));
      *(undefined4 *)(unsigned)(pdVar13 + 5) = uVar6;
      CacheBlockWriteBack(pdVar13 + 4);
      if (cVar37 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar13,SUB84(in_dr0,0));
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar13 + 4),SUB84(in_dr2,0));
        pdVar13 = pdVar13 + 1;
      }
      else {
        in_dr0 = *pdVar13;
        in_dr2 = pdVar13[1];
        pdVar13 = pdVar13 + 2;
      }
      if (cVar37 == '\0') {
        uVar4 = *(undefined4 *)(unsigned)(pdVar13 + 2);
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar13 + 0x14),uVar33);
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar13 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar4;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        dVar27 = pdVar13[2];
        in_dr6 = pdVar13[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = dVar27;
        unaff_r8[1] = in_dr2;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
    }
    (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) - 1;
    if ((*(uint *)(fr0_ - 0x30)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x40));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + (*(int *)(fr0_ - 0x40));
      return uVar6;
    }
  } while( true );
}

__asm__(".globl _FUN_8c24553e\n.set _FUN_8c24553e, _FUN_8c24553e_def\n");
