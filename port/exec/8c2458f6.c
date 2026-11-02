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
undefined4 FUN_8c2458f6_def(int ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2458f6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  double *unaff_r8 = 0;
  double *pdVar8;
  double *pdVar9;
  double *ar4_00;
  double *pdVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  short *psVar14;
  short *psVar15;
  undefined4 uVar16;
  double in_dr0 = 0;
  float fVar17;
  float fVar18;
  double in_dr2 = 0;
  double dVar19;
  double dVar20;
  double dVar21;
  double in_dr4 = 0;
  double dVar22;
  undefined4 uVar23;
  double in_dr6 = 0;
  undefined4 in_fr13 = 0;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar27;
  char cVar28;
  char cVar29;
  
  cVar29 = '\0';
  cVar28 = '\0';
  dVar24 = CONCAT44D(0x3b800000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000;
  puVar11 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  psVar14 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
  (*(uint *)(fr0_ - 0x34)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(int *)(fr0_ - 0x3c)) = 0;
  do {
    puVar12 = puVar11 + 1;
    uVar7 = (uint)*puVar11;
    uVar23 = 0x3f800000;
    if ((*puVar11 & 0x8000) != 0) {
      uVar7 = uVar7 & 0x7fff;
      uVar23 = 0xbf800000;
    }
    (*(int *)(fr0_ - 0x3c)) = (*(int *)(fr0_ - 0x3c)) + uVar7;
    iVar6 = uVar7 - 2;
    puVar13 = puVar11 + 2;
    puVar11 = puVar11 + 3;
    ar4_00 = (double *)(unsigned)((uint)*puVar13 * 0x40 + iVar3);
    pdVar8 = (double *)(unsigned)((uint)*puVar12 * 0x40 + iVar3);
    pdVar9 = unaff_r8;
    if (cVar29 == '\0') {
      dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),uVar23);
      in_dr4 = (double)(ulonglong)*(uint *)(unsigned)((int)pdVar8 + 4);
      dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)(ar4_00 + 1));
      in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),SUB84(in_dr6,0));
      dVar22 = in_xd12;
    }
    else {
      dVar25 = *(double *)(unsigned)((int)ar4_00 + 4);
      in_dr6 = pdVar8[1];
      dVar22 = ar4_00[1];
    }
    do {
      uVar1 = *puVar11;
      puVar11 = puVar11 + 1;
      pdVar10 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar3);
      fVar18 = F32LO(in_dr4);
      in_dr4 = CONCAT44D(0x3f800000,fVar18);
      if ((*(uint *)(unsigned)pdVar8 & *(uint *)(unsigned)ar4_00 & *(uint *)(unsigned)pdVar10 & 0x3f) == 0) {
        fVar17 = F32HI(dVar25);
        if (cVar29 == '\0') {
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 1),fVar17);
        }
        else {
          dVar19 = pdVar10[1];
          in_xd2 = dVar25;
        }
        if (cVar28 == '\0') {
          dVar19 = CONCAT44D(F32HI(dVar19) - F32LO(dVar24),
                                    F32LO(dVar19) - fVar18);
        }
        else {
          dVar19 = (dVar19 - in_dr4) - dVar24;
        }
        if (cVar29 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar10 + 4));
        }
        if (cVar28 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - fVar17);
          fVar17 = F32LO(dVar19) * F32HI(dVar19);
        }
        else {
          in_dr0 = in_dr0 - dVar25;
          fVar17 = SUB84(dVar19 * dVar19,0);
        }
        dVar19 = dVar22;
        if (cVar29 == '\0') {
          dVar19 = CONCAT44D(SUB84(dVar24,0),fVar17);
        }
        if (cVar28 == '\0') {
          fVar17 = (F32HI(dVar19) - F32HI(in_dr6)) *
                   SUB84(in_dr0,0);
          in_dr2 = CONCAT44D(fVar17,F32LO(dVar19) - fVar17);
        }
        else {
          in_dr2 = (dVar19 - in_dr6) * in_dr0;
          in_dr2 = in_dr2 - in_dr2;
        }
        in_dr4 = in_xd2;
        if (cVar29 == '\0') {
          in_dr4 = CONCAT44D(SUB84(in_dr2,0),fVar18);
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
        if ((bVar27) && (uVar2 != 0)) {
          if (cVar28 == '\0') {
            in_dr4 = CONCAT44D(0xbf800000,SUB84(in_dr4,0));
          }
          else {
            in_dr4 = -CONCAT44D(0x3f800000,SUB84(in_dr4,0));
          }
        }
      }
      uVar7 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar18 = F32HI(in_dr4);
      if (pdVar9 < unaff_r8) {
        dVar19 = (double)((ulonglong)uVar7 << 0x20);
        if (cVar28 == '\0') {
          bVar27 = fVar18 < 0.0;
        }
        else {
          bVar27 = in_dr4 < dVar19;
        }
        if (bVar27) {
          *(undefined4 *)(unsigned)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
          if (cVar29 == '\0') {
            uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(ar4_00,ar5,ar6,ar7));
          uVar16 = SUB84(in_dr0,0);
          dVar20 = dVar24;
          if (cVar29 == '\0') {
            dVar20 = CONCAT44D((int)(D2U(dVar24) >> 0x20),uVar5);
          }
          psVar15 = psVar14 + 2;
          *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar4;
          ar5 = (double *)(unsigned)(psVar14 + 1);
          uVar5 = (undefined4)(D2U(dVar19) >> 0x20);
          fVar18 = F32HI(dVar20);
          if (cVar28 == '\0') {
            dVar19 = CONCAT44D(uVar5,(float)(int)*psVar14 * fVar18);
          }
          else {
            dVar19 = CONCAT44D(uVar5,(float)(int)*psVar14) * dVar20;
          }
          if (cVar29 == '\0') {
            *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar19,0);
          }
          else {
            ar4_00[4] = in_xd2;
          }
          if (cVar28 == '\0') {
            fVar18 = (float)(int)*(short *)(unsigned)ar5 * fVar18;
          }
          else {
            fVar18 = SUB84(CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                            (float)(int)*(short *)(unsigned)ar5) * dVar20,0);
          }
          if (cVar29 == '\0') {
            *(float *)(unsigned)((int)ar4_00 + 0x24) = fVar18;
          }
          else {
            *(double *)(unsigned)((int)ar4_00 + 0x24) = in_xd2;
          }
          goto LAB_8c245bd8;
        }
        *(undefined4 *)(unsigned)ar4_00 = 0xf0000000;
        CacheBlockWriteBack(ar4_00);
        uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        if (cVar29 == '\0') {
          uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(ar4_00,ar5,ar6,ar7));
        dVar20 = dVar24;
        if (cVar29 == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar24) >> 0x20),uVar5);
        }
        *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar4;
        uVar5 = (undefined4)(D2U(dVar19) >> 0x20);
        fVar18 = F32HI(dVar20);
        if (cVar28 == '\0') {
          dVar19 = CONCAT44D(uVar5,(float)(int)*psVar14 * fVar18);
        }
        else {
          dVar19 = CONCAT44D(uVar5,(float)(int)*psVar14) * dVar20;
        }
        if (cVar29 == '\0') {
          *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar19,0);
        }
        else {
          ar4_00[4] = in_xd2;
        }
        ar5 = (double *)(unsigned)((int)ar4_00 + 0x24);
        if (cVar28 == '\0') {
          fVar18 = (float)(int)psVar14[1] * fVar18;
        }
        else {
          fVar18 = SUB84(CONCAT44D((int)(D2U(dVar19) >> 0x20),(float)(int)psVar14[1]) *
                         dVar20,0);
        }
        if (cVar29 == '\0') {
          *(float *)(unsigned)ar5 = fVar18;
        }
        else {
          *ar5 = in_xd2;
        }
        CacheBlockWriteBack(ar4_00 + 4);
        if (cVar29 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(in_dr0,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),fVar18);
          pdVar8 = ar4_00 + 1;
        }
        else {
          in_dr0 = *ar4_00;
          in_dr2 = ar4_00[1];
          pdVar8 = ar4_00 + 2;
        }
        if (cVar29 == '\0') {
          uVar5 = *(undefined4 *)(unsigned)(pdVar8 + 2);
          in_dr4 = CONCAT44D(uVar5,SUB84(dVar20,0));
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),uVar23);
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar5;
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
        pdVar9 = unaff_r8;
        psVar15 = psVar14;
      }
      else {
        in_dr2 = (double)((ulonglong)uVar7 << 0x20);
        if (cVar28 == '\0') {
          bVar27 = fVar18 < 0.0;
        }
        else {
          bVar27 = in_dr4 < in_dr2;
        }
        psVar15 = psVar14 + 2;
        if (bVar27) {
          *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          if (cVar29 == '\0') {
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          }
          uVar5 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(pdVar8,ar5,ar6,ar7));
          dVar19 = dVar24;
          if (cVar29 == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar24) >> 0x20),uVar23);
          }
          *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar5;
          uVar23 = (undefined4)((ulonglong)in_dr2 >> 0x20);
          fVar18 = F32HI(dVar19);
          if (cVar28 == '\0') {
            dVar20 = CONCAT44D(uVar23,(float)(int)*psVar14 * fVar18);
          }
          else {
            dVar20 = CONCAT44D(uVar23,(float)(int)*psVar14) * dVar19;
          }
          if (cVar29 == '\0') {
            *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar20,0);
          }
          else {
            pdVar8[4] = in_xd2;
          }
          fVar17 = (float)(int)psVar14[1];
          if (cVar28 == '\0') {
            fVar17 = fVar17 * fVar18;
          }
          else {
            fVar17 = SUB84(CONCAT44D((int)(D2U(dVar20) >> 0x20),fVar17) * dVar19,0);
          }
          if (cVar29 == '\0') {
            *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar17;
          }
          else {
            *(double *)(unsigned)((int)pdVar8 + 0x24) = in_xd2;
          }
          CacheBlockWriteBack(pdVar8 + 4);
          if (cVar29 == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(in_dr0,0));
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),fVar17);
            pdVar8 = pdVar8 + 1;
          }
          else {
            dVar19 = *pdVar8;
            dVar21 = pdVar8[1];
            pdVar8 = pdVar8 + 2;
          }
          if (cVar29 == '\0') {
            uVar23 = *(undefined4 *)(unsigned)(pdVar8 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar21) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            dVar20 = pdVar8[2];
            unaff_r8[3] = pdVar8[3];
            unaff_r8[2] = dVar20;
            unaff_r8[1] = dVar21;
            *unaff_r8 = dVar19;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
          if (cVar29 == '\0') {
            uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar23 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(ar4_00,psVar14 + 1,ar6,ar7));
          uVar16 = SUB84(dVar19,0);
          dVar20 = dVar24;
          if (cVar29 == '\0') {
            dVar20 = CONCAT44D((int)(D2U(dVar24) >> 0x20),uVar5);
          }
          psVar15 = psVar14 + 4;
          *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar4;
          uVar5 = (undefined4)(D2U(dVar21) >> 0x20);
          fVar18 = F32HI(dVar20);
          if (cVar28 == '\0') {
            dVar19 = CONCAT44D(uVar5,(float)(int)psVar14[2] * fVar18);
          }
          else {
            dVar19 = CONCAT44D(uVar5,(float)(int)psVar14[2]) * dVar20;
          }
          if (cVar29 == '\0') {
            *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar19,0);
          }
          else {
            ar4_00[4] = in_xd2;
          }
          ar5 = (double *)(unsigned)((int)ar4_00 + 0x24);
          if (cVar28 == '\0') {
            fVar18 = (float)(int)psVar14[3] * fVar18;
          }
          else {
            fVar18 = SUB84(CONCAT44D((int)(D2U(dVar19) >> 0x20),(float)(int)psVar14[3])
                           * dVar20,0);
          }
          if (cVar29 == '\0') {
            *(float *)(unsigned)ar5 = fVar18;
          }
          else {
            *ar5 = in_xd2;
          }
LAB_8c245bd8:
          CacheBlockWriteBack(ar4_00 + 4);
          if (cVar29 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,uVar16);
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),fVar18);
            pdVar8 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            in_dr2 = ar4_00[1];
            pdVar8 = ar4_00 + 2;
          }
          if (cVar29 == '\0') {
            uVar5 = *(undefined4 *)(unsigned)(pdVar8 + 2);
            in_dr4 = CONCAT44D(uVar5,SUB84(dVar20,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),uVar23);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar5;
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
      }
      uVar23 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      if (cVar29 == '\0') {
        in_dr4 = (double)(D2U(dVar25) >> 0x20);
        uVar26 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(dVar25,0));
      }
      else {
        uVar26 = *(undefined8 *)(unsigned)((int)pdVar10 + 4);
      }
      uVar5 = 8;
      if (cVar29 == '\0') {
        uVar4 = SUB84(dVar24,0);
        dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),*(undefined4 *)(unsigned)(pdVar10 + 1));
        in_xd12 = dVar22;
        in_dr6 = CONCAT44D(uVar4,SUB84(in_dr6,0));
      }
      else {
        in_xd12 = pdVar10[1];
        in_dr6 = dVar22;
      }
      iVar6 = iVar6 + -1;
      dVar25 = CONCAT44D((int)((ulonglong)uVar26 >> 0x20),-(float)uVar26);
      pdVar8 = ar4_00;
      ar4_00 = pdVar10;
      psVar14 = psVar15;
      dVar22 = in_xd12;
    } while (iVar6 != 0);
    psVar14 = psVar15 + 4;
    if (pdVar9 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
      CacheBlockWriteBack(pdVar10);
      uVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
      uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
      if (cVar29 == '\0') {
        uVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
      }
      uVar5 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(pdVar10,ar5,ar6,ar7));
      dVar22 = dVar24;
      if (cVar29 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar24) >> 0x20),uVar16);
      }
      *(undefined4 *)(unsigned)(pdVar10 + 5) = uVar5;
      ar5 = (double *)(unsigned)(psVar15 + 1);
      psVar14 = psVar15 + 2;
      fVar18 = F32HI(dVar22);
      if (cVar28 == '\0') {
        dVar25 = CONCAT44D(uVar23,(float)(int)*psVar15 * fVar18);
      }
      else {
        dVar25 = CONCAT44D(uVar23,(float)(int)*psVar15) * dVar22;
      }
      if (cVar29 == '\0') {
        *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar25,0);
      }
      else {
        pdVar10[4] = in_xd2;
      }
      if (cVar28 == '\0') {
        fVar18 = (float)(int)*(short *)(unsigned)ar5 * fVar18;
      }
      else {
        fVar18 = SUB84(CONCAT44D((int)(D2U(dVar25) >> 0x20),(float)(int)*(short *)(unsigned)ar5)
                       * dVar22,0);
      }
      if (cVar29 == '\0') {
        *(float *)(unsigned)((int)pdVar10 + 0x24) = fVar18;
      }
      else {
        *(double *)(unsigned)((int)pdVar10 + 0x24) = in_xd2;
      }
      CacheBlockWriteBack(pdVar10 + 4);
      if (cVar29 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(in_dr0,0));
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),fVar18);
        pdVar10 = pdVar10 + 1;
      }
      else {
        in_dr0 = *pdVar10;
        in_dr2 = pdVar10[1];
        pdVar10 = pdVar10 + 2;
      }
      if (cVar29 == '\0') {
        uVar23 = *(undefined4 *)(unsigned)(pdVar10 + 2);
        in_dr4 = CONCAT44D(uVar23,SUB84(dVar22,0));
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 0x14),uVar4);
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar23;
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
    (*(uint *)(fr0_ - 0x34)) = (*(uint *)(fr0_ - 0x34)) - 1;
    if ((*(uint *)(fr0_ - 0x34)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x3c));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + (*(int *)(fr0_ - 0x3c));
      return uVar5;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2458f6\n.set _FUN_8c2458f6, _FUN_8c2458f6_def\n");
