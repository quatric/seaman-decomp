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
undefined4 FUN_8c241d90_def(int ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c241d90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  ushort uVar1;
  double *pdVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  double *ar5_00;
  double *unaff_r8 = 0;
  double *pdVar7;
  double *ar4_00;
  double *pdVar8;
  double *pdVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  double in_dr0 = 0;
  float fVar13;
  undefined4 uVar14;
  double dVar15;
  float fVar18;
  double dVar16;
  double dVar17;
  double in_dr4 = 0;
  double dVar19;
  undefined4 uVar20;
  undefined4 in_fr13 = 0;
  double dVar21;
  undefined4 uVar22;
  double in_dr14 = 0;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar23;
  char cVar24;
  char cVar25;
  
  cVar25 = '\0';
  cVar24 = '\0';
  dVar21 = CONCAT44D(0x3f000000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  puVar10 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x30)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(uint *)(fr0_ - 0x38)) = 0;
  (*(int *)(fr0_ - 0x34)) = 0;
  do {
    uVar20 = SUB84(in_dr14,0);
    puVar11 = puVar10 + 1;
    uVar6 = (uint)*puVar10;
    if (cVar25 == '\0') {
      uVar20 = 0x3f800000;
    }
    if ((*puVar10 & 0x8000) != 0) {
      uVar6 = uVar6 & 0x7fff;
      if (cVar24 == '\0') {
        uVar14 = 0xbf800000;
      }
      else {
        uVar14 = (undefined4)((ulonglong)-CONCAT44D(0x3f800000,SUB84(in_dr4,0)) >> 0x20);
      }
      if (cVar25 == '\0') {
        uVar20 = uVar14;
      }
    }
    (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + uVar6;
    iVar5 = uVar6 - 2;
    puVar12 = puVar10 + 2;
    puVar10 = puVar10 + 3;
    ar4_00 = (double *)(unsigned)((uint)*puVar12 * 0x40 + iVar3);
    pdVar7 = (double *)(unsigned)((uint)*puVar11 * 0x40 + iVar3);
    pdVar8 = unaff_r8;
    if (cVar25 == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)((int)ar4_00 + 4));
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 1),uVar20);
      in_dr4 = *(double *)(unsigned)((int)pdVar7 + 4);
    }
    else {
      in_xd12 = *(double *)(unsigned)((int)ar4_00 + 4);
      in_dr14 = ar4_00[1];
      in_dr4 = pdVar7[1];
    }
    do {
      uVar1 = *puVar10;
      puVar10 = puVar10 + 1;
      pdVar9 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar3);
      if (cVar25 == '\0') {
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 1),SUB84(dVar21,0));
      }
      else {
        dVar15 = pdVar9[1];
        in_xd2 = in_xd12;
      }
      if (cVar24 == '\0') {
        dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) - F32LO(in_dr4)
                                 );
      }
      else {
        dVar15 = dVar15 - in_dr4;
      }
      fVar18 = F32HI(in_dr14);
      if (cVar24 == '\0') {
        dVar15 = CONCAT44D(F32HI(dVar15) - fVar18,SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 - in_dr14;
      }
      if (cVar25 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)((int)pdVar9 + 4))
        ;
      }
      if (cVar24 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar21)
                                 );
        fVar13 = F32LO(dVar15) * F32HI(dVar15);
      }
      else {
        in_dr0 = in_dr0 - dVar21;
        fVar13 = SUB84(dVar15 * dVar15,0);
      }
      dVar15 = in_dr14;
      if (cVar25 == '\0') {
        dVar15 = CONCAT44D(fVar18,fVar13);
      }
      if (cVar24 == '\0') {
        fVar18 = (F32HI(dVar15) - F32HI(in_dr4)) *
                 SUB84(in_dr0,0);
        dVar15 = CONCAT44D(fVar18,F32LO(dVar15) - fVar18);
      }
      else {
        dVar15 = (dVar15 - in_dr4) * in_dr0;
        dVar15 = dVar15 - dVar15;
      }
      dVar19 = in_xd2;
      if (cVar25 == '\0') {
        dVar19 = CONCAT44D(SUB84(dVar15,0),SUB84(in_dr4,0));
      }
      if (cVar24 == '\0') {
        dVar19 = CONCAT44D(F32HI(dVar19) * F32LO(in_dr14),
                                  SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 * in_dr14;
      }
      uVar6 = (uint)(D2U(dVar15) >> 0x20);
      fVar18 = F32HI(dVar19);
      if (pdVar8 < unaff_r8) {
        dVar15 = (double)((ulonglong)uVar6 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar18 < 0.0;
        }
        else {
          bVar23 = dVar19 < dVar15;
        }
        if (bVar23) {
          *(undefined4 *)(unsigned)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          if (cVar25 == '\0') {
            uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(ar4_00,ar5,ar6,ar7));
          uVar14 = SUB84(dVar15,0);
          uVar22 = (undefined4)(D2U(dVar21) >> 0x20);
          dVar16 = dVar21;
          dVar15 = dVar21;
          dVar19 = dVar21;
          if (cVar25 == '\0') {
            dVar16 = CONCAT44D(uVar22,uVar20);
            dVar15 = in_xd2;
            uVar14 = uVar22;
            dVar19 = CONCAT44D(uVar22,SUB84(in_dr0,0));
          }
          *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar4;
          if (cVar25 == '\0') {
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 6),uVar14);
            ar5 = (double *)(unsigned)((int)ar4_00 + 0x34);
          }
          else {
            dVar17 = ar4_00[6];
            ar5 = ar4_00 + 7;
          }
          if (cVar24 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)(F32HI(dVar19) *
                                    F32HI(dVar17) + F32LO(dVar17));
          }
          uVar20 = (undefined4)(D2U(dVar16) >> 0x20);
          if (cVar25 == '\0') {
            *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar17,0);
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar20);
            in_xd2 = dVar15;
            dVar15 = CONCAT44D(uVar20,SUB84(dVar19,0));
          }
          else {
            ar4_00[4] = dVar15;
            dVar17 = *ar5;
            in_xd2 = dVar16;
            dVar15 = dVar16;
          }
          pdVar7 = (double *)(unsigned)((int)ar4_00 + 0x24);
          if (cVar24 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)(F32HI(dVar15) *
                                    F32HI(dVar17) + F32LO(dVar17));
          }
          uVar20 = SUB84(dVar17,0);
          if (cVar25 == '\0') {
            *(undefined4 *)(unsigned)pdVar7 = uVar20;
          }
          else {
            *pdVar7 = in_xd2;
          }
          CacheBlockWriteBack(pdVar7);
          goto LAB_8c242008;
        }
        *(undefined4 *)(unsigned)ar4_00 = 0xf0000000;
        CacheBlockWriteBack(ar4_00);
        uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        if (cVar25 == '\0') {
          uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        }
        uVar4 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(ar4_00,ar5,ar6,ar7));
        uVar14 = SUB84(dVar15,0);
        uVar22 = (undefined4)(D2U(dVar21) >> 0x20);
        dVar16 = dVar21;
        dVar15 = dVar21;
        dVar19 = dVar21;
        if (cVar25 == '\0') {
          dVar16 = CONCAT44D(uVar22,uVar20);
          dVar15 = in_xd2;
          uVar14 = uVar22;
          dVar19 = CONCAT44D(uVar22,SUB84(in_dr0,0));
        }
        *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar4;
        if (cVar25 == '\0') {
          dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 6),uVar14);
          ar5 = (double *)(unsigned)((int)ar4_00 + 0x34);
        }
        else {
          dVar17 = ar4_00[6];
          ar5 = ar4_00 + 7;
        }
        if (cVar24 == '\0') {
          dVar17 = (double)(ulonglong)
                           (uint)(F32HI(dVar19) *
                                  F32HI(dVar17) + F32LO(dVar17));
        }
        uVar20 = (undefined4)(D2U(dVar16) >> 0x20);
        if (cVar25 == '\0') {
          *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar17,0);
          dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar20);
          in_xd2 = dVar15;
          dVar15 = CONCAT44D(uVar20,SUB84(dVar19,0));
        }
        else {
          ar4_00[4] = dVar15;
          dVar17 = *ar5;
          in_xd2 = dVar16;
          dVar15 = dVar16;
        }
        pdVar7 = (double *)(unsigned)((int)ar4_00 + 0x24);
        if (cVar24 == '\0') {
          dVar17 = (double)(ulonglong)
                           (uint)(F32HI(dVar15) *
                                  F32HI(dVar17) + F32LO(dVar17));
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)pdVar7 = SUB84(dVar17,0);
        }
        else {
          *pdVar7 = in_xd2;
        }
        CacheBlockWriteBack(pdVar7);
        if (cVar25 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(dVar15,0));
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),SUB84(dVar17,0));
          pdVar7 = ar4_00 + 1;
        }
        else {
          in_dr0 = *ar4_00;
          dVar15 = ar4_00[1];
          pdVar7 = ar4_00 + 2;
        }
        if (cVar25 == '\0') {
          uVar20 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          dVar19 = CONCAT44D(uVar20,SUB84(dVar16,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar15) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar19 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar19;
          unaff_r8[1] = dVar15;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
        (*(uint *)(fr0_ - 0x38)) = (int)unaff_r8 + (*(uint *)(fr0_ - 0x38)) + (0x20 - (int)pdVar8);
        pdVar8 = unaff_r8;
      }
      else {
        dVar15 = (double)((ulonglong)uVar6 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar18 < 0.0;
        }
        else {
          bVar23 = dVar19 < dVar15;
        }
        if (bVar23) {
          *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
          CacheBlockWriteBack(pdVar7);
          uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          if (cVar25 == '\0') {
            uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(pdVar7,ar5,ar6,ar7));
          uVar14 = SUB84(dVar15,0);
          uVar22 = (undefined4)(D2U(dVar21) >> 0x20);
          dVar17 = dVar21;
          dVar15 = dVar21;
          dVar19 = dVar21;
          if (cVar25 == '\0') {
            dVar17 = CONCAT44D(uVar22,uVar20);
            dVar15 = in_xd2;
            uVar14 = uVar22;
            dVar19 = CONCAT44D(uVar22,SUB84(in_dr0,0));
          }
          *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar4;
          if (cVar25 == '\0') {
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),uVar14);
            ar5_00 = (double *)(unsigned)((int)pdVar7 + 0x34);
          }
          else {
            dVar16 = pdVar7[6];
            ar5_00 = pdVar7 + 7;
          }
          if (cVar24 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)(F32HI(dVar19) *
                                    F32HI(dVar16) + F32LO(dVar16));
          }
          uVar20 = (undefined4)(D2U(dVar17) >> 0x20);
          if (cVar25 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar16,0);
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,uVar20);
            dVar17 = dVar15;
            dVar15 = CONCAT44D(uVar20,SUB84(dVar19,0));
          }
          else {
            pdVar7[4] = dVar15;
            dVar16 = *ar5_00;
            dVar15 = dVar17;
          }
          pdVar2 = (double *)(unsigned)((int)pdVar7 + 0x24);
          if (cVar24 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)(F32HI(dVar15) *
                                    F32HI(dVar16) + F32LO(dVar16));
          }
          if (cVar25 == '\0') {
            *(int *)(unsigned)pdVar2 = SUB84(dVar16,0);
          }
          else {
            *pdVar2 = dVar17;
          }
          CacheBlockWriteBack(pdVar2);
          if (cVar25 == '\0') {
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar15,0));
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(dVar16,0));
            pdVar7 = pdVar7 + 1;
          }
          else {
            dVar15 = *pdVar7;
            dVar19 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar25 == '\0') {
            uVar20 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar19) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar15) >> 0x20);
          }
          else {
            dVar16 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar16;
            unaff_r8[1] = dVar19;
            *unaff_r8 = dVar15;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)ar4_00 = 0xe0000000;
          CacheBlockWriteBack(ar4_00);
          uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
          if (cVar25 == '\0') {
            uVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(ar4_00,ar5_00,ar6,ar7));
          uVar14 = SUB84(dVar19,0);
          uVar22 = (undefined4)(D2U(dVar21) >> 0x20);
          dVar16 = dVar21;
          in_xd2 = dVar21;
          dVar19 = dVar21;
          if (cVar25 == '\0') {
            dVar16 = CONCAT44D(uVar22,uVar20);
            in_xd2 = dVar17;
            uVar14 = uVar22;
            dVar19 = CONCAT44D(uVar22,SUB84(dVar15,0));
          }
          *(undefined4 *)(unsigned)(ar4_00 + 5) = uVar4;
          if (cVar25 == '\0') {
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(ar4_00 + 6),uVar14);
            ar5 = (double *)(unsigned)((int)ar4_00 + 0x34);
          }
          else {
            dVar15 = ar4_00[6];
            ar5 = ar4_00 + 7;
          }
          if (cVar24 == '\0') {
            dVar15 = (double)(ulonglong)
                             (uint)(F32HI(dVar19) *
                                    F32HI(dVar15) + F32LO(dVar15));
          }
          uVar20 = (undefined4)(D2U(dVar16) >> 0x20);
          if (cVar25 == '\0') {
            *(int *)(unsigned)(ar4_00 + 4) = SUB84(dVar15,0);
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar20);
            dVar15 = CONCAT44D(uVar20,SUB84(dVar19,0));
          }
          else {
            ar4_00[4] = in_xd2;
            dVar17 = *ar5;
            in_xd2 = dVar16;
            dVar15 = dVar16;
          }
          pdVar7 = (double *)(unsigned)((int)ar4_00 + 0x24);
          if (cVar24 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)(F32HI(dVar15) *
                                    F32HI(dVar17) + F32LO(dVar17));
          }
          uVar20 = SUB84(dVar17,0);
          if (cVar25 == '\0') {
            *(undefined4 *)(unsigned)pdVar7 = uVar20;
          }
          else {
            *pdVar7 = in_xd2;
          }
          CacheBlockWriteBack(pdVar7);
LAB_8c242008:
          if (cVar25 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(dVar15,0));
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4_00 + 4),uVar20);
            pdVar7 = ar4_00 + 1;
          }
          else {
            in_dr0 = *ar4_00;
            dVar15 = ar4_00[1];
            pdVar7 = ar4_00 + 2;
          }
          if (cVar25 == '\0') {
            uVar20 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            dVar19 = CONCAT44D(uVar20,SUB84(dVar16,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar15) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar19 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar19;
            unaff_r8[1] = dVar15;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
      }
      uVar20 = SUB84(dVar15,0);
      uVar14 = SUB84(dVar19,0);
      if (cVar25 == '\0') {
        uVar14 = SUB84(dVar21,0);
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar9 + 4))
        ;
      }
      else {
        in_xd12 = *(double *)(unsigned)((int)pdVar9 + 4);
      }
      uVar4 = 8;
      if (cVar25 == '\0') {
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 1),SUB84(in_dr14,0));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar14);
      }
      else {
        dVar15 = pdVar9[1];
        in_dr4 = in_dr14;
      }
      iVar5 = iVar5 + -1;
      in_dr14 = CONCAT44D((int)(D2U(dVar15) >> 0x20),-SUB84(dVar15,0));
      pdVar7 = ar4_00;
      ar4_00 = pdVar9;
    } while (iVar5 != 0);
    if (pdVar8 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar9 = 0xf0000000;
      CacheBlockWriteBack(pdVar9);
      uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
      if (cVar25 == '\0') {
        uVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 64)), float_to_color_u8(pdVar9,ar5,ar6,ar7));
      uVar22 = (undefined4)(D2U(dVar21) >> 0x20);
      dVar16 = dVar21;
      dVar15 = dVar21;
      dVar19 = dVar21;
      if (cVar25 == '\0') {
        dVar16 = CONCAT44D(uVar22,uVar14);
        dVar15 = in_xd2;
        uVar20 = uVar22;
        dVar19 = CONCAT44D(uVar22,SUB84(in_dr0,0));
      }
      *(undefined4 *)(unsigned)(pdVar9 + 5) = uVar4;
      if (cVar25 == '\0') {
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 6),uVar20);
        ar5 = (double *)(unsigned)((int)pdVar9 + 0x34);
      }
      else {
        dVar17 = pdVar9[6];
        ar5 = pdVar9 + 7;
      }
      if (cVar24 == '\0') {
        dVar17 = (double)(ulonglong)
                         (uint)(F32HI(dVar19) *
                                F32HI(dVar17) + F32LO(dVar17));
      }
      uVar20 = (undefined4)(D2U(dVar16) >> 0x20);
      if (cVar25 == '\0') {
        *(int *)(unsigned)(pdVar9 + 4) = SUB84(dVar17,0);
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar20);
        in_xd2 = dVar15;
        dVar15 = CONCAT44D(uVar20,SUB84(dVar19,0));
      }
      else {
        pdVar9[4] = dVar15;
        dVar17 = *ar5;
        in_xd2 = dVar16;
        dVar15 = dVar16;
      }
      pdVar7 = (double *)(unsigned)((int)pdVar9 + 0x24);
      if (cVar24 == '\0') {
        dVar17 = (double)(ulonglong)
                         (uint)(F32HI(dVar15) *
                                F32HI(dVar17) + F32LO(dVar17));
      }
      if (cVar25 == '\0') {
        *(int *)(unsigned)pdVar7 = SUB84(dVar17,0);
      }
      else {
        *pdVar7 = in_xd2;
      }
      CacheBlockWriteBack(pdVar7);
      if (cVar25 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar15,0));
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(dVar17,0));
        pdVar9 = pdVar9 + 1;
      }
      else {
        in_dr0 = *pdVar9;
        dVar15 = pdVar9[1];
        pdVar9 = pdVar9 + 2;
      }
      if (cVar25 == '\0') {
        uVar20 = *(undefined4 *)(unsigned)(pdVar9 + 2);
        in_dr4 = CONCAT44D(uVar20,SUB84(dVar16,0));
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar15) >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar9[2];
        unaff_r8[3] = pdVar9[3];
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = dVar15;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
      (*(uint *)(fr0_ - 0x38)) = (int)unaff_r8 + (*(uint *)(fr0_ - 0x38)) + (0x20 - (int)pdVar8);
    }
    (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) - 1;
    if ((*(uint *)(fr0_ - 0x30)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + ((*(uint *)(fr0_ - 0x38)) >> 5);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x34));
      return uVar4;
    }
  } while( true );
}

__asm__(".globl _FUN_8c241d90\n.set _FUN_8c241d90, _FUN_8c241d90_def\n");
