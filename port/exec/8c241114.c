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
undefined4 FUN_8c241114_def(int ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c241114";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  double *ar5_00;
  double *unaff_r8 = 0;
  double *pdVar6;
  double *ar4_00;
  double *pdVar7;
  double *pdVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  short *psVar12;
  short *psVar13;
  undefined4 uVar14;
  double in_dr0 = 0;
  float fVar15;
  double dVar16;
  float fVar18;
  double dVar17;
  double in_dr4 = 0;
  double dVar19;
  undefined4 uVar20;
  undefined4 in_fr13 = 0;
  double dVar21;
  double in_dr14 = 0;
  double dVar22;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar23;
  char cVar24;
  char cVar25;
  
  cVar25 = '\0';
  cVar24 = '\0';
  dVar21 = CONCAT44D(0x3b800000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  psVar12 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
  puVar9 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x30)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(uint *)(fr0_ - 0x3c)) = 0;
  (*(int *)(fr0_ - 0x34)) = 0;
  do {
    uVar20 = SUB84(in_dr14,0);
    puVar10 = puVar9 + 1;
    uVar5 = (uint)*puVar9;
    if (cVar25 == '\0') {
      uVar20 = 0x3f800000;
    }
    if ((*puVar9 & 0x8000) != 0) {
      uVar5 = uVar5 & 0x7fff;
      if (cVar24 == '\0') {
        uVar3 = 0xbf800000;
      }
      else {
        uVar3 = (undefined4)((ulonglong)-CONCAT44D(0x3f800000,SUB84(in_dr4,0)) >> 0x20);
      }
      if (cVar25 == '\0') {
        uVar20 = uVar3;
      }
    }
    (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + uVar5;
    iVar4 = uVar5 - 2;
    puVar11 = puVar9 + 2;
    puVar9 = puVar9 + 3;
    ar4_00 = (double *)(unsigned)((uint)*puVar11 * 0x40 + iVar2);
    pdVar6 = (double *)(unsigned)((uint)*puVar10 * 0x40 + iVar2);
    pdVar7 = unaff_r8;
    if (cVar25 == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)((int)ar4_00 + 4));
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 1),uVar20);
      in_dr4 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),*(undefined4 *)(unsigned)(pdVar6 + 1));
      dVar22 = in_xd12;
    }
    else {
      in_dr4 = *(double *)(unsigned)((int)pdVar6 + 4);
      in_dr14 = ar4_00[1];
      dVar22 = *(double *)(unsigned)((int)ar4_00 + 4);
    }
    do {
      uVar1 = *puVar9;
      puVar9 = puVar9 + 1;
      pdVar8 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar2);
      if (cVar25 == '\0') {
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),SUB84(dVar21,0));
      }
      else {
        dVar16 = pdVar8[1];
        in_xd2 = dVar22;
      }
      fVar18 = F32HI(in_dr14);
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(F32HI(dVar16) - fVar18,
                                  F32LO(dVar16) - F32HI(in_dr4));
      }
      else {
        dVar16 = (dVar16 - in_dr4) - in_dr14;
      }
      if (cVar25 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)((int)pdVar8 + 4))
        ;
      }
      if (cVar24 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar21)
                                 );
        fVar15 = F32LO(dVar16) * F32HI(dVar16);
      }
      else {
        in_dr0 = in_dr0 - dVar21;
        fVar15 = SUB84(dVar16 * dVar16,0);
      }
      dVar16 = in_dr14;
      if (cVar25 == '\0') {
        dVar16 = CONCAT44D(fVar18,fVar15);
      }
      if (cVar24 == '\0') {
        fVar18 = (F32HI(dVar16) - F32LO(in_dr4)) * F32LO(in_dr0);
        dVar16 = CONCAT44D(fVar18,F32LO(dVar16) - fVar18);
      }
      else {
        dVar16 = (dVar16 - in_dr4) * in_dr0;
        dVar16 = dVar16 - dVar16;
      }
      dVar19 = in_xd2;
      if (cVar25 == '\0') {
        dVar19 = CONCAT44D(SUB84(dVar16,0),SUB84(in_dr4,0));
      }
      if (cVar24 == '\0') {
        dVar19 = CONCAT44D(F32HI(dVar19) * F32LO(in_dr14),
                                  SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 * in_dr14;
      }
      uVar5 = (uint)(D2U(dVar16) >> 0x20);
      fVar18 = F32HI(dVar19);
      if (pdVar7 < unaff_r8) {
        dVar16 = (double)((ulonglong)uVar5 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar18 < 0.0;
        }
        else {
          bVar23 = dVar19 < dVar16;
        }
        if (bVar23) {
          *(undefined4 *)(unsigned)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          if (cVar25 == '\0') {
            uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          }
          uVar3 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(ar4_00,ar5,ar6,ar7));
          uVar14 = SUB84(in_dr0,0);
          dVar19 = dVar21;
          if (cVar25 == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar20);
          }
          psVar13 = psVar12 + 2;
          *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar3;
          ar5 = (double *)(unsigned)(psVar12 + 1);
          uVar20 = (undefined4)(D2U(dVar16) >> 0x20);
          fVar18 = F32HI(dVar19);
          if (cVar24 == '\0') {
            dVar16 = CONCAT44D(uVar20,(float)(int)*psVar12 * fVar18);
          }
          else {
            dVar16 = CONCAT44D(uVar20,(float)(int)*psVar12) * dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar16,0);
          }
          else {
            ar4_00[4] = in_xd2;
          }
          if (cVar24 == '\0') {
            fVar18 = (float)(int)*(short *)(unsigned)ar5 * fVar18;
          }
          else {
            fVar18 = SUB84(CONCAT44D((int)(D2U(dVar16) >> 0x20),
                                            (float)(int)*(short *)(unsigned)ar5) * dVar19,0);
          }
          if (cVar25 == '\0') {
            *(float *)(unsigned)((int)ar4_00 + 0x24) = fVar18;
          }
          else {
            *(double *)(unsigned)((int)ar4_00 + 0x24) = in_xd2;
          }
          goto LAB_8c24139c;
        }
        *(undefined4 *)(unsigned)ar4_00 = 0xf0000000;
        CacheBlockWriteBack(ar4_00);
        uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar25 == '\0') {
          uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(ar4_00,ar5,ar6,ar7));
        dVar19 = dVar21;
        if (cVar25 == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar20);
        }
        *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar3;
        ar5 = (double *)(unsigned)(psVar12 + 1);
        uVar20 = (undefined4)(D2U(dVar16) >> 0x20);
        fVar18 = F32HI(dVar19);
        if (cVar24 == '\0') {
          dVar16 = CONCAT44D(uVar20,(float)(int)*psVar12 * fVar18);
        }
        else {
          dVar16 = CONCAT44D(uVar20,(float)(int)*psVar12) * dVar19;
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar16,0);
        }
        else {
          ar4_00[4] = in_xd2;
        }
        if (cVar24 == '\0') {
          fVar18 = (float)(int)*(short *)(unsigned)ar5 * fVar18;
        }
        else {
          fVar18 = SUB84(CONCAT44D((int)(D2U(dVar16) >> 0x20),(float)(int)*(short *)(unsigned)ar5
                                         ) * dVar19,0);
        }
        if (cVar25 == '\0') {
          *(float *)(unsigned)((int)ar4_00 + 0x24) = fVar18;
        }
        else {
          *(double *)(unsigned)((int)ar4_00 + 0x24) = in_xd2;
        }
        CacheBlockWriteBack(ar4_00 + 4);
        if (cVar25 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(in_dr0,0));
          dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),fVar18);
          pdVar6 = ar4_00 + 1;
        }
        else {
          in_dr0 = *ar4_00;
          dVar16 = ar4_00[1];
          pdVar6 = ar4_00 + 2;
        }
        if (cVar25 == '\0') {
          uVar20 = *(undefined4 *)(unsigned)(pdVar6 + 2);
          dVar19 = CONCAT44D(uVar20,SUB84(dVar19,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar16) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar19 = pdVar6[2];
          unaff_r8[3] = pdVar6[3];
          unaff_r8[2] = dVar19;
          unaff_r8[1] = dVar16;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
        (*(uint *)(fr0_ - 0x3c)) = (int)unaff_r8 + (*(uint *)(fr0_ - 0x3c)) + (0x20 - (int)pdVar7);
        pdVar7 = unaff_r8;
        psVar13 = psVar12;
      }
      else {
        dVar16 = (double)((ulonglong)uVar5 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar18 < 0.0;
        }
        else {
          bVar23 = dVar19 < dVar16;
        }
        psVar13 = psVar12 + 2;
        if (bVar23) {
          *(undefined4 *)(unsigned)pdVar6 = 0xe0000000;
          CacheBlockWriteBack(pdVar6);
          uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          if (cVar25 == '\0') {
            uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          }
          uVar3 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(pdVar6,ar5,ar6,ar7));
          dVar19 = dVar21;
          if (cVar25 == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar20);
          }
          *(undefined4 *)(unsigned)(pdVar6 + 5) = uVar3;
          uVar20 = (undefined4)(D2U(dVar16) >> 0x20);
          fVar18 = F32HI(dVar19);
          if (cVar24 == '\0') {
            dVar16 = CONCAT44D(uVar20,(float)(int)*psVar12 * fVar18);
          }
          else {
            dVar16 = CONCAT44D(uVar20,(float)(int)*psVar12) * dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)(unsigned)(pdVar6 + 4) = SUB84(dVar16,0);
          }
          else {
            pdVar6[4] = in_xd2;
          }
          ar5_00 = (double *)(unsigned)((int)pdVar6 + 0x24);
          if (cVar24 == '\0') {
            fVar18 = (float)(int)psVar12[1] * fVar18;
          }
          else {
            fVar18 = SUB84(CONCAT44D((int)(D2U(dVar16) >> 0x20),(float)(int)psVar12[1])
                           * dVar19,0);
          }
          if (cVar25 == '\0') {
            *(float *)(unsigned)ar5_00 = fVar18;
          }
          else {
            *ar5_00 = in_xd2;
          }
          CacheBlockWriteBack(pdVar6 + 4);
          if (cVar25 == '\0') {
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(in_dr0,0));
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),fVar18);
            pdVar6 = pdVar6 + 1;
          }
          else {
            dVar16 = *pdVar6;
            dVar17 = pdVar6[1];
            pdVar6 = pdVar6 + 2;
          }
          if (cVar25 == '\0') {
            uVar20 = *(undefined4 *)(unsigned)(pdVar6 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar17) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar16) >> 0x20);
          }
          else {
            dVar19 = pdVar6[2];
            unaff_r8[3] = pdVar6[3];
            unaff_r8[2] = dVar19;
            unaff_r8[1] = dVar17;
            *unaff_r8 = dVar16;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          if (cVar25 == '\0') {
            uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          }
          uVar3 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(ar4_00,ar5_00,ar6,ar7));
          uVar14 = SUB84(dVar16,0);
          dVar19 = dVar21;
          if (cVar25 == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar20);
          }
          psVar13 = psVar12 + 4;
          *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar3;
          uVar20 = (undefined4)(D2U(dVar17) >> 0x20);
          fVar18 = F32HI(dVar19);
          if (cVar24 == '\0') {
            dVar16 = CONCAT44D(uVar20,(float)(int)psVar12[2] * fVar18);
          }
          else {
            dVar16 = CONCAT44D(uVar20,(float)(int)psVar12[2]) * dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar16,0);
          }
          else {
            ar4_00[4] = in_xd2;
          }
          ar5 = (double *)(unsigned)((int)ar4_00 + 0x24);
          if (cVar24 == '\0') {
            fVar18 = (float)(int)psVar12[3] * fVar18;
          }
          else {
            fVar18 = SUB84(CONCAT44D((int)(D2U(dVar16) >> 0x20),(float)(int)psVar12[3])
                           * dVar19,0);
          }
          if (cVar25 == '\0') {
            *(float *)(unsigned)ar5 = fVar18;
          }
          else {
            *ar5 = in_xd2;
          }
LAB_8c24139c:
          CacheBlockWriteBack(ar4_00 + 4);
          if (cVar25 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,uVar14);
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),fVar18);
            pdVar6 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            dVar16 = ar4_00[1];
            pdVar6 = ar4_00 + 2;
          }
          if (cVar25 == '\0') {
            uVar20 = *(undefined4 *)(unsigned)(pdVar6 + 2);
            dVar19 = CONCAT44D(uVar20,SUB84(dVar19,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar16) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar19 = pdVar6[2];
            unaff_r8[3] = pdVar6[3];
            unaff_r8[2] = dVar19;
            unaff_r8[1] = dVar16;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
      }
      uVar20 = (undefined4)(D2U(dVar16) >> 0x20);
      if (cVar25 == '\0') {
        uVar3 = SUB84(dVar21,0);
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar8 + 4))
        ;
        in_xd12 = dVar22;
        in_dr4 = CONCAT44D(uVar3,SUB84(dVar19,0));
      }
      else {
        in_xd12 = *(double *)(unsigned)((int)pdVar8 + 4);
        in_dr4 = dVar22;
      }
      uVar3 = 8;
      if (cVar25 == '\0') {
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),(int)((ulonglong)in_dr14 >> 0x20)
                                 );
        dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),SUB84(in_dr14,0));
      }
      else {
        dVar22 = pdVar8[1];
      }
      iVar4 = iVar4 + -1;
      in_dr14 = CONCAT44D((int)(D2U(dVar22) >> 0x20),-SUB84(dVar22,0));
      pdVar6 = ar4_00;
      ar4_00 = pdVar8;
      psVar12 = psVar13;
      dVar22 = in_xd12;
    } while (iVar4 != 0);
    psVar12 = psVar13 + 4;
    if (pdVar7 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar8 = 0xf0000000;
      CacheBlockWriteBack(pdVar8);
      uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
      if (cVar25 == '\0') {
        uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 68)), float_to_color_u8(pdVar8,ar5,ar6,ar7));
      dVar22 = dVar21;
      if (cVar25 == '\0') {
        dVar22 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar14);
      }
      *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar3;
      ar5 = (double *)(unsigned)(psVar13 + 1);
      psVar12 = psVar13 + 2;
      fVar18 = F32HI(dVar22);
      if (cVar24 == '\0') {
        dVar16 = CONCAT44D(uVar20,(float)(int)*psVar13 * fVar18);
      }
      else {
        dVar16 = CONCAT44D(uVar20,(float)(int)*psVar13) * dVar22;
      }
      if (cVar25 == '\0') {
        *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar16,0);
      }
      else {
        pdVar8[4] = in_xd2;
      }
      if (cVar24 == '\0') {
        fVar18 = (float)(int)*(short *)(unsigned)ar5 * fVar18;
      }
      else {
        fVar18 = SUB84(CONCAT44D((int)(D2U(dVar16) >> 0x20),(float)(int)*(short *)(unsigned)ar5)
                       * dVar22,0);
      }
      if (cVar25 == '\0') {
        *(float *)(unsigned)((int)pdVar8 + 0x24) = fVar18;
      }
      else {
        *(double *)(unsigned)((int)pdVar8 + 0x24) = in_xd2;
      }
      CacheBlockWriteBack(pdVar8 + 4);
      if (cVar25 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(in_dr0,0));
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),fVar18);
        pdVar8 = pdVar8 + 1;
      }
      else {
        in_dr0 = *pdVar8;
        dVar16 = pdVar8[1];
        pdVar8 = pdVar8 + 2;
      }
      if (cVar25 == '\0') {
        uVar20 = *(undefined4 *)(unsigned)(pdVar8 + 2);
        in_dr4 = CONCAT44D(uVar20,SUB84(dVar22,0));
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar16) >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar8[2];
        unaff_r8[3] = pdVar8[3];
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = dVar16;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
      (*(uint *)(fr0_ - 0x3c)) = (int)unaff_r8 + (*(uint *)(fr0_ - 0x3c)) + (0x20 - (int)pdVar7);
    }
    (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) - 1;
    if ((*(uint *)(fr0_ - 0x30)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + ((*(uint *)(fr0_ - 0x3c)) >> 5);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x34));
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c241114\n.set _FUN_8c241114, _FUN_8c241114_def\n");
