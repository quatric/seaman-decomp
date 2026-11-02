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
undefined4 FUN_8c240434_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c240434";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *unaff_r8 = 0;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  double in_dr0 = 0;
  float fVar16;
  double dVar17;
  float fVar18;
  double in_dr4 = 0;
  double dVar19;
  undefined4 uVar20;
  float in_fr13 = 0;
  float fVar21;
  undefined4 in_fr12 = 0;
  double in_dr14 = 0;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar22;
  char cVar23;
  char cVar24;
  
  cVar24 = '\0';
  cVar23 = '\0';
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  puVar13 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x2c)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(uint *)(fr0_ - 0x34)) = 0;
  (*(int *)(fr0_ - 0x30)) = 0;
  do {
    uVar3 = SUB84(in_dr14,0);
    puVar14 = puVar13 + 1;
    uVar5 = (uint)*puVar13;
    if (cVar24 == '\0') {
      uVar3 = 0x3f800000;
    }
    if ((*puVar13 & 0x8000) != 0) {
      uVar5 = uVar5 & 0x7fff;
      if (cVar23 == '\0') {
        uVar20 = 0xbf800000;
      }
      else {
        uVar20 = (undefined4)((ulonglong)-CONCAT44D(0x3f800000,SUB84(in_dr4,0)) >> 0x20);
      }
      if (cVar24 == '\0') {
        uVar3 = uVar20;
      }
    }
    (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) + uVar5;
    iVar4 = uVar5 - 2;
    puVar15 = puVar13 + 2;
    puVar13 = puVar13 + 3;
    pdVar10 = (double *)(unsigned)((uint)*puVar15 * 0x40 + iVar2);
    pdVar9 = (double *)(unsigned)((uint)*puVar14 * 0x40 + iVar2);
    pdVar11 = unaff_r8;
    if (cVar24 == '\0') {
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 1),uVar3);
      in_dr4 = *(double *)(unsigned)((int)pdVar9 + 4);
      fVar21 = *(float *)(unsigned)((int)pdVar10 + 4);
    }
    else {
      in_xd12 = *(double *)(unsigned)((int)pdVar10 + 4);
      in_dr14 = pdVar10[1];
      in_dr4 = pdVar9[1];
      fVar21 = in_fr13;
    }
    do {
      uVar1 = *puVar13;
      puVar13 = puVar13 + 1;
      pdVar12 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar2);
      if (cVar24 == '\0') {
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + 1),fVar21);
      }
      else {
        dVar17 = pdVar12[1];
        in_xd2 = in_xd12;
      }
      if (cVar23 == '\0') {
        dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) - F32LO(in_dr4)
                                 );
      }
      else {
        dVar17 = dVar17 - in_dr4;
      }
      fVar18 = F32HI(in_dr14);
      if (cVar23 == '\0') {
        dVar17 = CONCAT44D(F32HI(dVar17) - fVar18,SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 - in_dr14;
      }
      if (cVar24 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)((int)pdVar12 + 4)
                                 );
      }
      if (cVar23 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - fVar21);
        fVar16 = F32LO(dVar17) * F32HI(dVar17);
      }
      else {
        in_dr0 = in_dr0 - CONCAT44D(in_fr12,fVar21);
        fVar16 = SUB84(dVar17 * dVar17,0);
      }
      dVar17 = in_dr14;
      if (cVar24 == '\0') {
        dVar17 = CONCAT44D(fVar18,fVar16);
      }
      if (cVar23 == '\0') {
        fVar18 = (F32HI(dVar17) - F32HI(in_dr4)) *
                 SUB84(in_dr0,0);
        dVar17 = CONCAT44D(fVar18,F32LO(dVar17) - fVar18);
      }
      else {
        dVar17 = (dVar17 - in_dr4) * in_dr0;
        dVar17 = dVar17 - dVar17;
      }
      dVar19 = in_xd2;
      if (cVar24 == '\0') {
        dVar19 = CONCAT44D(SUB84(dVar17,0),SUB84(in_dr4,0));
      }
      if (cVar23 == '\0') {
        dVar19 = CONCAT44D(F32HI(dVar19) * F32LO(in_dr14),
                                  SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 * in_dr14;
      }
      uVar5 = (uint)(D2U(dVar17) >> 0x20);
      fVar18 = F32HI(dVar19);
      if (pdVar11 < unaff_r8) {
        dVar17 = (double)((ulonglong)uVar5 << 0x20);
        if (cVar23 == '\0') {
          bVar22 = fVar18 < 0.0;
        }
        else {
          bVar22 = dVar19 < dVar17;
        }
        if (bVar22) {
          *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
          CacheBlockWriteBack(pdVar10);
          if (*(int *)(unsigned)((int)pdVar10 + 0x3c) != ar5) {
            *(int *)(unsigned)((int)pdVar10 + 0x3c) = ar5;
            (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar10 + 2,pdVar10 + 6,0));
            if (cVar24 == '\0') {
              *(undefined4 *)(unsigned)(pdVar10 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
              pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2638);
              pdVar8 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2628);
              dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
            }
            else {
              pdVar10[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
              in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
              pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c263c);
              pdVar8 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
              dVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            }
            if (cVar23 == '\0') {
              dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)(unsigned)((int)pdVar10 + 0x24) = (int)(D2U(dVar17) >> 0x20);
              pdVar6 = (double *)(unsigned)((int)pdVar9 + 4);
              dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,*(undefined4 *)(unsigned)pdVar9);
              pdVar8 = (double *)(unsigned)((int)pdVar8 + 4);
            }
            else {
              *(double *)(unsigned)((int)pdVar10 + 0x24) = dVar17;
              in_xd2 = *pdVar9;
              pdVar6 = pdVar9 + 1;
              dVar17 = *pdVar8;
              pdVar8 = pdVar8 + 1;
            }
            if (cVar23 == '\0') {
              dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)(unsigned)(pdVar10 + 5) = (int)(D2U(dVar17) >> 0x20);
              dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,*(undefined4 *)(unsigned)pdVar6);
            }
            else {
              pdVar10[5] = dVar17;
              dVar17 = *pdVar8;
              in_xd2 = *pdVar6;
            }
            pdVar9 = (double *)(unsigned)((int)pdVar10 + 0x2c);
            if (cVar23 == '\0') {
              dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)(unsigned)pdVar9 = (int)(D2U(dVar17) >> 0x20);
            }
            else {
              *pdVar9 = dVar17;
            }
            CacheBlockWriteBack(pdVar9);
          }
          goto LAB_8c2406e2;
        }
        *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
        CacheBlockWriteBack(pdVar10);
        if (*(int *)(unsigned)((int)pdVar10 + 0x3c) != ar5) {
          *(int *)(unsigned)((int)pdVar10 + 0x3c) = ar5;
          (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar10 + 2,pdVar10 + 6,0));
          if (cVar24 == '\0') {
            *(undefined4 *)(unsigned)(pdVar10 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
            pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2638);
            pdVar8 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2628);
            dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
          }
          else {
            pdVar10[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
            pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c263c);
            pdVar8 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
            dVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
          }
          if (cVar23 == '\0') {
            dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                      SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 + dVar17;
          }
          if (cVar24 == '\0') {
            *(int *)(unsigned)((int)pdVar10 + 0x24) = (int)(D2U(dVar17) >> 0x20);
            pdVar6 = (double *)(unsigned)((int)pdVar9 + 4);
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,*(undefined4 *)(unsigned)pdVar9);
            pdVar8 = (double *)(unsigned)((int)pdVar8 + 4);
          }
          else {
            *(double *)(unsigned)((int)pdVar10 + 0x24) = dVar17;
            in_xd2 = *pdVar9;
            pdVar6 = pdVar9 + 1;
            dVar17 = *pdVar8;
            pdVar8 = pdVar8 + 1;
          }
          if (cVar23 == '\0') {
            dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                      SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 + dVar17;
          }
          if (cVar24 == '\0') {
            *(int *)(unsigned)(pdVar10 + 5) = (int)(D2U(dVar17) >> 0x20);
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,*(undefined4 *)(unsigned)pdVar6);
          }
          else {
            pdVar10[5] = dVar17;
            dVar17 = *pdVar8;
            in_xd2 = *pdVar6;
          }
          pdVar9 = (double *)(unsigned)((int)pdVar10 + 0x2c);
          if (cVar23 == '\0') {
            dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                      SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 + dVar17;
          }
          if (cVar24 == '\0') {
            *(int *)(unsigned)pdVar9 = (int)(D2U(dVar17) >> 0x20);
          }
          else {
            *pdVar9 = dVar17;
          }
          CacheBlockWriteBack(pdVar9);
        }
        if (cVar24 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(in_dr0,0));
          dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(dVar17,0));
          pdVar9 = pdVar10 + 1;
        }
        else {
          in_dr0 = *pdVar10;
          dVar17 = pdVar10[1];
          pdVar9 = pdVar10 + 2;
        }
        if (cVar24 == '\0') {
          uVar3 = *(undefined4 *)(unsigned)(pdVar9 + 2);
          dVar19 = CONCAT44D(uVar3,SUB84(dVar19,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar3;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar17) >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar19 = pdVar9[2];
          unaff_r8[3] = pdVar9[3];
          unaff_r8[2] = dVar19;
          unaff_r8[1] = dVar17;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
        (*(uint *)(fr0_ - 0x34)) = (int)unaff_r8 + (*(uint *)(fr0_ - 0x34)) + (0x20 - (int)pdVar11);
        pdVar11 = unaff_r8;
      }
      else {
        dVar17 = (double)((ulonglong)uVar5 << 0x20);
        if (cVar23 == '\0') {
          bVar22 = fVar18 < 0.0;
        }
        else {
          bVar22 = dVar19 < dVar17;
        }
        if (bVar22) {
          *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          if (*(int *)(unsigned)((int)pdVar9 + 0x3c) != ar5) {
            *(int *)(unsigned)((int)pdVar9 + 0x3c) = ar5;
            (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar9 + 2,pdVar9 + 6,0));
            if (cVar24 == '\0') {
              *(undefined4 *)(unsigned)(pdVar9 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
              pdVar8 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2638);
              pdVar6 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2628);
              dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
            }
            else {
              pdVar9[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
              in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
              pdVar8 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c263c);
              pdVar6 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
              dVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            }
            if (cVar23 == '\0') {
              dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)(unsigned)((int)pdVar9 + 0x24) = (int)(D2U(dVar17) >> 0x20);
              pdVar7 = (double *)(unsigned)((int)pdVar8 + 4);
              dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,*(undefined4 *)(unsigned)pdVar8);
              pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
            }
            else {
              *(double *)(unsigned)((int)pdVar9 + 0x24) = dVar17;
              in_xd2 = *pdVar8;
              pdVar7 = pdVar8 + 1;
              dVar17 = *pdVar6;
              pdVar6 = pdVar6 + 1;
            }
            if (cVar23 == '\0') {
              dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)(unsigned)(pdVar9 + 5) = (int)(D2U(dVar17) >> 0x20);
              dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,*(undefined4 *)(unsigned)pdVar7);
            }
            else {
              pdVar9[5] = dVar17;
              dVar17 = *pdVar6;
              in_xd2 = *pdVar7;
            }
            pdVar8 = (double *)(unsigned)((int)pdVar9 + 0x2c);
            if (cVar23 == '\0') {
              dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)(unsigned)pdVar8 = (int)(D2U(dVar17) >> 0x20);
            }
            else {
              *pdVar8 = dVar17;
            }
            CacheBlockWriteBack(pdVar8);
          }
          if (cVar24 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(dVar17,0));
            pdVar9 = pdVar9 + 1;
          }
          else {
            in_dr0 = *pdVar9;
            dVar17 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
          }
          if (cVar24 == '\0') {
            uVar3 = *(undefined4 *)(unsigned)(pdVar9 + 2);
            dVar19 = CONCAT44D(uVar3,SUB84(dVar19,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar3;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar17) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar19 = pdVar9[2];
            unaff_r8[3] = pdVar9[3];
            unaff_r8[2] = dVar19;
            unaff_r8[1] = dVar17;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
          CacheBlockWriteBack(pdVar10);
          if (*(int *)(unsigned)((int)pdVar10 + 0x3c) != ar5) {
            *(int *)(unsigned)((int)pdVar10 + 0x3c) = ar5;
            (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar10 + 2,pdVar10 + 6,0));
            if (cVar24 == '\0') {
              *(undefined4 *)(unsigned)(pdVar10 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
              pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2638);
              pdVar8 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2628);
              dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
            }
            else {
              pdVar10[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
              in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
              pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c263c);
              pdVar8 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
              dVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            }
            if (cVar23 == '\0') {
              dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)(unsigned)((int)pdVar10 + 0x24) = (int)(D2U(dVar17) >> 0x20);
              pdVar6 = (double *)(unsigned)((int)pdVar9 + 4);
              dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,*(undefined4 *)(unsigned)pdVar9);
              pdVar8 = (double *)(unsigned)((int)pdVar8 + 4);
            }
            else {
              *(double *)(unsigned)((int)pdVar10 + 0x24) = dVar17;
              in_xd2 = *pdVar9;
              pdVar6 = pdVar9 + 1;
              dVar17 = *pdVar8;
              pdVar8 = pdVar8 + 1;
            }
            if (cVar23 == '\0') {
              dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)(unsigned)(pdVar10 + 5) = (int)(D2U(dVar17) >> 0x20);
              dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,*(undefined4 *)(unsigned)pdVar6);
            }
            else {
              pdVar10[5] = dVar17;
              dVar17 = *pdVar8;
              in_xd2 = *pdVar6;
            }
            pdVar9 = (double *)(unsigned)((int)pdVar10 + 0x2c);
            if (cVar23 == '\0') {
              dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                        SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
            if (cVar24 == '\0') {
              *(int *)(unsigned)pdVar9 = (int)(D2U(dVar17) >> 0x20);
            }
            else {
              *pdVar9 = dVar17;
            }
            CacheBlockWriteBack(pdVar9);
          }
LAB_8c2406e2:
          if (cVar24 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(in_dr0,0));
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(dVar17,0));
            pdVar9 = pdVar10 + 1;
          }
          else {
            in_dr0 = *pdVar10;
            dVar17 = pdVar10[1];
            pdVar9 = pdVar10 + 2;
          }
          if (cVar24 == '\0') {
            uVar3 = *(undefined4 *)(unsigned)(pdVar9 + 2);
            dVar19 = CONCAT44D(uVar3,SUB84(dVar19,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar3;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar17) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar19 = pdVar9[2];
            unaff_r8[3] = pdVar9[3];
            unaff_r8[2] = dVar19;
            unaff_r8[1] = dVar17;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
      }
      fVar18 = F32LO(dVar19);
      if (cVar24 == '\0') {
        in_fr13 = *(float *)(unsigned)((int)pdVar12 + 4);
        fVar18 = fVar21;
      }
      else {
        in_xd12 = *(double *)(unsigned)((int)pdVar12 + 4);
        in_fr13 = fVar21;
      }
      uVar3 = 8;
      if (cVar24 == '\0') {
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + 1),SUB84(in_dr14,0));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),fVar18);
      }
      else {
        dVar19 = pdVar12[1];
        in_dr4 = in_dr14;
      }
      iVar4 = iVar4 + -1;
      in_dr14 = CONCAT44D((int)(D2U(dVar19) >> 0x20),-SUB84(dVar19,0));
      pdVar9 = pdVar10;
      pdVar10 = pdVar12;
      fVar21 = in_fr13;
    } while (iVar4 != 0);
    if (pdVar11 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar12 = 0xf0000000;
      CacheBlockWriteBack(pdVar12);
      if (*(int *)(unsigned)((int)pdVar12 + 0x3c) != ar5) {
        *(int *)(unsigned)((int)pdVar12 + 0x3c) = ar5;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar12 + 2,pdVar12 + 6,0));
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(pdVar12 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
          pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2638);
          pdVar10 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2628);
          dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
        }
        else {
          pdVar12[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
          in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
          pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c263c);
          pdVar10 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
          dVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
        }
        if (cVar23 == '\0') {
          dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                    SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 + dVar17;
        }
        if (cVar24 == '\0') {
          *(int *)(unsigned)((int)pdVar12 + 0x24) = (int)(D2U(dVar17) >> 0x20);
          pdVar8 = (double *)(unsigned)((int)pdVar9 + 4);
          dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,*(undefined4 *)(unsigned)pdVar9);
          pdVar10 = (double *)(unsigned)((int)pdVar10 + 4);
        }
        else {
          *(double *)(unsigned)((int)pdVar12 + 0x24) = dVar17;
          in_xd2 = *pdVar9;
          pdVar8 = pdVar9 + 1;
          dVar17 = *pdVar10;
          pdVar10 = pdVar10 + 1;
        }
        if (cVar23 == '\0') {
          dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                    SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 + dVar17;
        }
        if (cVar24 == '\0') {
          *(int *)(unsigned)(pdVar12 + 5) = (int)(D2U(dVar17) >> 0x20);
          dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,*(undefined4 *)(unsigned)pdVar8);
        }
        else {
          pdVar12[5] = dVar17;
          dVar17 = *pdVar10;
          in_xd2 = *pdVar8;
        }
        pdVar9 = (double *)(unsigned)((int)pdVar12 + 0x2c);
        if (cVar23 == '\0') {
          dVar17 = CONCAT44D(F32HI(dVar17) + F32LO(dVar17),
                                    SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 + dVar17;
        }
        if (cVar24 == '\0') {
          *(int *)(unsigned)pdVar9 = (int)(D2U(dVar17) >> 0x20);
        }
        else {
          *pdVar9 = dVar17;
        }
        CacheBlockWriteBack(pdVar9);
      }
      if (cVar24 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar12,SUB84(in_dr0,0));
        dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + 4),SUB84(dVar17,0));
        pdVar12 = pdVar12 + 1;
      }
      else {
        in_dr0 = *pdVar12;
        dVar17 = pdVar12[1];
        pdVar12 = pdVar12 + 2;
      }
      if (cVar24 == '\0') {
        uVar20 = *(undefined4 *)(unsigned)(pdVar12 + 2);
        in_dr4 = CONCAT44D(uVar20,SUB84(in_dr4,0));
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar12 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar17) >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar12[2];
        unaff_r8[3] = pdVar12[3];
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = dVar17;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
      (*(uint *)(fr0_ - 0x34)) = (int)unaff_r8 + (*(uint *)(fr0_ - 0x34)) + (0x20 - (int)pdVar11);
    }
    (*(uint *)(fr0_ - 0x2c)) = (*(uint *)(fr0_ - 0x2c)) - 1;
    if ((*(uint *)(fr0_ - 0x2c)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + ((*(uint *)(fr0_ - 0x34)) >> 5);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x30));
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c240434\n.set _FUN_8c240434, _FUN_8c240434_def\n");
