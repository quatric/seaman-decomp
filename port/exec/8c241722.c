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
undefined4 FUN_8c241722_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c241722";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  double *pdVar6;
  double *ar6_00;
  double *unaff_r8 = 0;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  double in_dr0 = 0;
  float fVar14;
  double dVar15;
  float fVar18;
  uint uVar19;
  double dVar16;
  double dVar17;
  double in_dr4 = 0;
  double dVar20;
  undefined4 in_fr13 = 0;
  double dVar21;
  double in_dr14 = 0;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar22;
  char cVar23;
  char cVar24;
  
  cVar24 = '\0';
  cVar23 = '\0';
  dVar21 = CONCAT44D(0x3f000000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  puVar11 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x30)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(uint *)(fr0_ - 0x38)) = 0;
  (*(int *)(fr0_ - 0x34)) = 0;
  do {
    uVar4 = SUB84(in_dr14,0);
    puVar12 = puVar11 + 1;
    (*(uint *)(fr0_ - 0x48)) = (uint)*puVar11;
    if (cVar24 == '\0') {
      uVar4 = 0x3f800000;
    }
    if ((*puVar11 & 0x8000) != 0) {
      (*(uint *)(fr0_ - 0x48)) = (*(uint *)(fr0_ - 0x48)) & 0x7fff;
      if (cVar23 == '\0') {
        uVar3 = 0xbf800000;
      }
      else {
        uVar3 = (undefined4)((ulonglong)-CONCAT44D(0x3f800000,SUB84(in_dr4,0)) >> 0x20);
      }
      if (cVar24 == '\0') {
        uVar4 = uVar3;
      }
    }
    (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + (*(uint *)(fr0_ - 0x48));
    (*(uint *)(fr0_ - 0x48)) = (*(uint *)(fr0_ - 0x48)) - 2;
    puVar13 = puVar11 + 2;
    puVar11 = puVar11 + 3;
    pdVar8 = (double *)(unsigned)((uint)*puVar13 * 0x40 + iVar2);
    pdVar7 = (double *)(unsigned)((uint)*puVar12 * 0x40 + iVar2);
    pdVar9 = unaff_r8;
    if (cVar24 == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar8 + 4));
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),uVar4);
      in_dr4 = *(double *)(unsigned)((int)pdVar7 + 4);
    }
    else {
      in_xd12 = *(double *)(unsigned)((int)pdVar8 + 4);
      in_dr14 = pdVar8[1];
      in_dr4 = pdVar7[1];
    }
    do {
      uVar1 = *puVar11;
      puVar11 = puVar11 + 1;
      pdVar10 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar2);
      if (cVar24 == '\0') {
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 1),SUB84(dVar21,0));
      }
      else {
        dVar15 = pdVar10[1];
        in_xd2 = in_xd12;
      }
      if (cVar23 == '\0') {
        dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) - F32LO(in_dr4)
                                 );
      }
      else {
        dVar15 = dVar15 - in_dr4;
      }
      fVar18 = F32HI(in_dr14);
      if (cVar23 == '\0') {
        dVar15 = CONCAT44D(F32HI(dVar15) - fVar18,SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 - in_dr14;
      }
      if (cVar24 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)((int)pdVar10 + 4)
                                 );
      }
      if (cVar23 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - F32LO(dVar21)
                                 );
        fVar14 = F32LO(dVar15) * F32HI(dVar15);
      }
      else {
        in_dr0 = in_dr0 - dVar21;
        fVar14 = SUB84(dVar15 * dVar15,0);
      }
      dVar15 = in_dr14;
      if (cVar24 == '\0') {
        dVar15 = CONCAT44D(fVar18,fVar14);
      }
      if (cVar23 == '\0') {
        fVar18 = (F32HI(dVar15) - F32HI(in_dr4)) *
                 SUB84(in_dr0,0);
        dVar15 = CONCAT44D(fVar18,F32LO(dVar15) - fVar18);
      }
      else {
        dVar15 = (dVar15 - in_dr4) * in_dr0;
        dVar15 = dVar15 - dVar15;
      }
      dVar20 = in_xd2;
      if (cVar24 == '\0') {
        dVar20 = CONCAT44D(SUB84(dVar15,0),SUB84(in_dr4,0));
      }
      if (cVar23 == '\0') {
        dVar20 = CONCAT44D(F32HI(dVar20) * F32LO(in_dr14),
                                  SUB84(dVar20,0));
      }
      else {
        dVar20 = dVar20 * in_dr14;
      }
      uVar19 = (uint)(D2U(dVar15) >> 0x20);
      fVar18 = F32HI(dVar20);
      if (pdVar9 < unaff_r8) {
        if (cVar23 == '\0') {
          bVar22 = fVar18 < 0.0;
        }
        else {
          bVar22 = dVar20 < (double)((ulonglong)uVar19 << 0x20);
        }
        if (bVar22) {
          *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(int *)(unsigned)((int)pdVar8 + 0x3c) != ar5) {
            pdVar7 = pdVar8 + 2;
            *(int *)(unsigned)((int)pdVar8 + 0x3c) = ar5;
            uVar3 = 0;
            pdVar6 = pdVar8 + 6;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar6,0));
            uVar4 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar3));
            *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar4;
            if (cVar24 == '\0') {
              dVar20 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            else {
              dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
            }
            uVar4 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar3));
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar4;
          }
          uVar4 = (undefined4)(D2U(dVar21) >> 0x20);
          if (cVar24 == '\0') {
            pdVar7 = (double *)(unsigned)((int)pdVar8 + 0x34);
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar4);
            dVar17 = CONCAT44D(uVar4,SUB84(in_dr0,0));
          }
          else {
            dVar15 = pdVar8[6];
            pdVar7 = pdVar8 + 7;
            dVar17 = dVar21;
            in_xd2 = dVar21;
          }
          if (cVar23 == '\0') {
            dVar15 = (double)(ulonglong)
                             (uint)(F32HI(dVar17) *
                                    F32HI(dVar15) + F32LO(dVar15));
          }
          if (cVar24 == '\0') {
            *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar15,0);
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar4);
            dVar15 = CONCAT44D(uVar4,SUB84(dVar17,0));
            dVar20 = CONCAT44D(uVar4,SUB84(dVar20,0));
          }
          else {
            pdVar8[4] = in_xd2;
            dVar16 = *pdVar7;
            in_xd2 = dVar21;
            dVar15 = dVar21;
            dVar20 = dVar21;
          }
          uVar4 = SUB84(dVar20,0);
          pdVar7 = (double *)(unsigned)((int)pdVar8 + 0x24);
          if (cVar23 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)(F32HI(dVar15) *
                                    F32HI(dVar16) + F32LO(dVar16));
          }
          uVar3 = SUB84(dVar16,0);
          if (cVar24 == '\0') {
            *(undefined4 *)(unsigned)pdVar7 = uVar3;
          }
          else {
            *pdVar7 = in_xd2;
          }
          CacheBlockWriteBack(pdVar7);
          goto LAB_8c241ab6;
        }
        *(undefined4 *)(unsigned)pdVar8 = 0xf0000000;
        CacheBlockWriteBack(pdVar8);
        if (*(int *)(unsigned)((int)pdVar8 + 0x3c) != ar5) {
          pdVar7 = pdVar8 + 2;
          *(int *)(unsigned)((int)pdVar8 + 0x3c) = ar5;
          uVar3 = 0;
          pdVar6 = pdVar8 + 6;
          puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
          (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar6,0));
          uVar4 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar3));
          *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar4;
          if (cVar24 == '\0') {
            dVar20 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
          }
          else {
            dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
          }
          uVar4 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar3));
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar4;
        }
        uVar4 = (undefined4)(D2U(dVar21) >> 0x20);
        if (cVar24 == '\0') {
          pdVar7 = (double *)(unsigned)((int)pdVar8 + 0x34);
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar4);
          dVar17 = CONCAT44D(uVar4,SUB84(in_dr0,0));
        }
        else {
          dVar15 = pdVar8[6];
          pdVar7 = pdVar8 + 7;
          dVar17 = dVar21;
          in_xd2 = dVar21;
        }
        if (cVar23 == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)(F32HI(dVar17) *
                                  F32HI(dVar15) + F32LO(dVar15));
        }
        if (cVar24 == '\0') {
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar15,0);
          dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar4);
          dVar15 = CONCAT44D(uVar4,SUB84(dVar17,0));
          dVar20 = CONCAT44D(uVar4,SUB84(dVar20,0));
        }
        else {
          pdVar8[4] = in_xd2;
          dVar16 = *pdVar7;
          in_xd2 = dVar21;
          dVar15 = dVar21;
          dVar20 = dVar21;
        }
        pdVar7 = (double *)(unsigned)((int)pdVar8 + 0x24);
        if (cVar23 == '\0') {
          dVar16 = (double)(ulonglong)
                           (uint)(F32HI(dVar15) *
                                  F32HI(dVar16) + F32LO(dVar16));
        }
        if (cVar24 == '\0') {
          *(int *)(unsigned)pdVar7 = SUB84(dVar16,0);
        }
        else {
          *pdVar7 = in_xd2;
        }
        CacheBlockWriteBack(pdVar7);
        if (cVar24 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar15,0));
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),SUB84(dVar16,0));
          pdVar7 = pdVar8 + 1;
        }
        else {
          in_dr0 = *pdVar8;
          dVar15 = pdVar8[1];
          pdVar7 = pdVar8 + 2;
        }
        if (cVar24 == '\0') {
          uVar4 = *(undefined4 *)(unsigned)(pdVar7 + 2);
          dVar20 = CONCAT44D(uVar4,SUB84(dVar20,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar4;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar15) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar20 = pdVar7[2];
          unaff_r8[3] = pdVar7[3];
          unaff_r8[2] = dVar20;
          unaff_r8[1] = dVar15;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
        (*(uint *)(fr0_ - 0x38)) = (int)unaff_r8 + (*(uint *)(fr0_ - 0x38)) + (0x20 - (int)pdVar9);
        pdVar9 = unaff_r8;
      }
      else {
        if (cVar23 == '\0') {
          bVar22 = fVar18 < 0.0;
        }
        else {
          bVar22 = dVar20 < (double)((ulonglong)uVar19 << 0x20);
        }
        if (bVar22) {
          *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
          CacheBlockWriteBack(pdVar7);
          if (*(int *)(unsigned)((int)pdVar7 + 0x3c) != ar5) {
            pdVar6 = pdVar7 + 2;
            *(int *)(unsigned)((int)pdVar7 + 0x3c) = ar5;
            uVar3 = 0;
            ar6_00 = pdVar7 + 6;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar6,ar6_00,0));
            uVar4 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar6,ar6_00,uVar3));
            *(undefined4 *)(unsigned)(pdVar7 + 5) = uVar4;
            if (cVar24 == '\0') {
              dVar20 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            else {
              dVar20 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
            }
            uVar4 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar6,ar6_00,uVar3));
            *(undefined4 *)(unsigned)((int)pdVar7 + 0x2c) = uVar4;
          }
          uVar4 = (undefined4)(D2U(dVar21) >> 0x20);
          if (cVar24 == '\0') {
            pdVar6 = (double *)(unsigned)((int)pdVar7 + 0x34);
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar7 + 6),uVar4);
            dVar17 = CONCAT44D(uVar4,SUB84(in_dr0,0));
          }
          else {
            dVar15 = pdVar7[6];
            pdVar6 = pdVar7 + 7;
            dVar17 = dVar21;
            in_xd2 = dVar21;
          }
          if (cVar23 == '\0') {
            dVar15 = (double)(ulonglong)
                             (uint)(F32HI(dVar17) *
                                    F32HI(dVar15) + F32LO(dVar15));
          }
          if (cVar24 == '\0') {
            *(int *)(unsigned)(pdVar7 + 4) = SUB84(dVar15,0);
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,uVar4);
            dVar15 = CONCAT44D(uVar4,SUB84(dVar17,0));
            dVar20 = CONCAT44D(uVar4,SUB84(dVar20,0));
          }
          else {
            pdVar7[4] = in_xd2;
            dVar16 = *pdVar6;
            in_xd2 = dVar21;
            dVar15 = dVar21;
            dVar20 = dVar21;
          }
          pdVar6 = (double *)(unsigned)((int)pdVar7 + 0x24);
          if (cVar23 == '\0') {
            dVar16 = (double)(ulonglong)
                             (uint)(F32HI(dVar15) *
                                    F32HI(dVar16) + F32LO(dVar16));
          }
          if (cVar24 == '\0') {
            *(int *)(unsigned)pdVar6 = SUB84(dVar16,0);
          }
          else {
            *pdVar6 = in_xd2;
          }
          CacheBlockWriteBack(pdVar6);
          if (cVar24 == '\0') {
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar15,0));
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 4),SUB84(dVar16,0));
            pdVar7 = pdVar7 + 1;
          }
          else {
            dVar15 = *pdVar7;
            dVar17 = pdVar7[1];
            pdVar7 = pdVar7 + 2;
          }
          if (cVar24 == '\0') {
            uVar4 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            dVar20 = CONCAT44D(uVar4,SUB84(dVar20,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar4;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar17) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)(D2U(dVar15) >> 0x20);
          }
          else {
            dVar20 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar20;
            unaff_r8[1] = dVar17;
            *unaff_r8 = dVar15;
          }
          uVar19 = SUB84(dVar20,0);
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (*(int *)(unsigned)((int)pdVar8 + 0x3c) != ar5) {
            pdVar7 = pdVar8 + 2;
            *(int *)(unsigned)((int)pdVar8 + 0x3c) = ar5;
            uVar3 = 0;
            pdVar6 = pdVar8 + 6;
            puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
            (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar6,0));
            uVar4 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar3));
            *(undefined4 *)(unsigned)(pdVar8 + 5) = uVar4;
            uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
            if (cVar24 == '\0') {
              uVar19 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
            }
            uVar4 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar7,pdVar6,uVar3));
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = uVar4;
          }
          uVar4 = (undefined4)(D2U(dVar21) >> 0x20);
          if (cVar24 == '\0') {
            pdVar7 = (double *)(unsigned)((int)pdVar8 + 0x34);
            dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 6),uVar4);
            dVar15 = CONCAT44D(uVar4,SUB84(dVar15,0));
          }
          else {
            dVar20 = pdVar8[6];
            pdVar7 = pdVar8 + 7;
            dVar15 = dVar21;
            in_xd2 = dVar21;
          }
          if (cVar23 == '\0') {
            dVar20 = (double)(ulonglong)
                             (uint)(F32HI(dVar15) *
                                    F32HI(dVar20) + F32LO(dVar20));
          }
          if (cVar24 == '\0') {
            *(int *)(unsigned)(pdVar8 + 4) = SUB84(dVar20,0);
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar4);
            dVar15 = CONCAT44D(uVar4,SUB84(dVar15,0));
            dVar20 = CONCAT44D(uVar4,uVar19);
          }
          else {
            pdVar8[4] = in_xd2;
            dVar17 = *pdVar7;
            in_xd2 = dVar21;
            dVar15 = dVar21;
            dVar20 = dVar21;
          }
          uVar4 = SUB84(dVar20,0);
          pdVar7 = (double *)(unsigned)((int)pdVar8 + 0x24);
          if (cVar23 == '\0') {
            dVar17 = (double)(ulonglong)
                             (uint)(F32HI(dVar15) *
                                    F32HI(dVar17) + F32LO(dVar17));
          }
          uVar3 = SUB84(dVar17,0);
          if (cVar24 == '\0') {
            *(undefined4 *)(unsigned)pdVar7 = uVar3;
          }
          else {
            *pdVar7 = in_xd2;
          }
          CacheBlockWriteBack(pdVar7);
LAB_8c241ab6:
          if (cVar24 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(dVar15,0));
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),uVar3);
            pdVar7 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            dVar15 = pdVar8[1];
            pdVar7 = pdVar8 + 2;
          }
          if (cVar24 == '\0') {
            uVar3 = *(undefined4 *)(unsigned)(pdVar7 + 2);
            dVar20 = CONCAT44D(uVar3,uVar4);
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar3;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar15) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar20 = pdVar7[2];
            unaff_r8[3] = pdVar7[3];
            unaff_r8[2] = dVar20;
            unaff_r8[1] = dVar15;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
      }
      uVar4 = SUB84(dVar20,0);
      if (cVar24 == '\0') {
        uVar4 = SUB84(dVar21,0);
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar10 + 4)
                                 );
      }
      else {
        in_xd12 = *(double *)(unsigned)((int)pdVar10 + 4);
      }
      uVar3 = 8;
      if (cVar24 == '\0') {
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 1),SUB84(in_dr14,0));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),uVar4);
      }
      else {
        dVar15 = pdVar10[1];
        in_dr4 = in_dr14;
      }
      (*(uint *)(fr0_ - 0x48)) = (*(uint *)(fr0_ - 0x48)) + -1;
      in_dr14 = CONCAT44D((int)(D2U(dVar15) >> 0x20),-SUB84(dVar15,0));
      pdVar7 = pdVar8;
      pdVar8 = pdVar10;
    } while ((*(uint *)(fr0_ - 0x48)) != 0);
    if (pdVar9 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
      CacheBlockWriteBack(pdVar10);
      if (*(int *)(unsigned)((int)pdVar10 + 0x3c) != ar5) {
        pdVar7 = pdVar10 + 2;
        *(int *)(unsigned)((int)pdVar10 + 0x3c) = ar5;
        uVar3 = 0;
        pdVar8 = pdVar10 + 6;
        puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
        (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar7,pdVar8,0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar7,pdVar8,uVar3));
        *(undefined4 *)(unsigned)(pdVar10 + 5) = uVar4;
        if (cVar24 == '\0') {
          in_dr4 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
        }
        else {
          in_dr4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), float_to_color_u8(puVar5,pdVar7,pdVar8,uVar3));
        *(undefined4 *)(unsigned)((int)pdVar10 + 0x2c) = uVar3;
      }
      uVar4 = (undefined4)(D2U(dVar21) >> 0x20);
      if (cVar24 == '\0') {
        pdVar7 = (double *)(unsigned)((int)pdVar10 + 0x34);
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 6),uVar4);
        dVar20 = CONCAT44D(uVar4,SUB84(in_dr0,0));
      }
      else {
        dVar15 = pdVar10[6];
        pdVar7 = pdVar10 + 7;
        dVar20 = dVar21;
        in_xd2 = dVar21;
      }
      if (cVar23 == '\0') {
        dVar15 = (double)(ulonglong)
                         (uint)(F32HI(dVar20) *
                                F32HI(dVar15) + F32LO(dVar15));
      }
      if (cVar24 == '\0') {
        *(int *)(unsigned)(pdVar10 + 4) = SUB84(dVar15,0);
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,uVar4);
        dVar15 = CONCAT44D(uVar4,SUB84(dVar20,0));
        dVar20 = CONCAT44D(uVar4,SUB84(in_dr4,0));
      }
      else {
        pdVar10[4] = in_xd2;
        dVar17 = *pdVar7;
        in_xd2 = dVar21;
        dVar15 = dVar21;
        dVar20 = dVar21;
      }
      pdVar7 = (double *)(unsigned)((int)pdVar10 + 0x24);
      if (cVar23 == '\0') {
        dVar17 = (double)(ulonglong)
                         (uint)(F32HI(dVar15) *
                                F32HI(dVar17) + F32LO(dVar17));
      }
      if (cVar24 == '\0') {
        *(int *)(unsigned)pdVar7 = SUB84(dVar17,0);
      }
      else {
        *pdVar7 = in_xd2;
      }
      CacheBlockWriteBack(pdVar7);
      if (cVar24 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(dVar15,0));
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(dVar17,0));
        pdVar10 = pdVar10 + 1;
      }
      else {
        in_dr0 = *pdVar10;
        dVar15 = pdVar10[1];
        pdVar10 = pdVar10 + 2;
      }
      if (cVar24 == '\0') {
        uVar4 = *(undefined4 *)(unsigned)(pdVar10 + 2);
        in_dr4 = CONCAT44D(uVar4,SUB84(dVar20,0));
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar10 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar4;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar15) >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar10[2];
        unaff_r8[3] = pdVar10[3];
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = dVar15;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
      (*(uint *)(fr0_ - 0x38)) = (int)unaff_r8 + (*(uint *)(fr0_ - 0x38)) + (0x20 - (int)pdVar9);
    }
    (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) - 1;
    if ((*(uint *)(fr0_ - 0x30)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + ((*(uint *)(fr0_ - 0x38)) >> 5);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x34));
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c241722\n.set _FUN_8c241722, _FUN_8c241722_def\n");
