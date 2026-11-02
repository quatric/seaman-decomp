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
undefined4 FUN_8c24296c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c24296c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *unaff_r8 = 0;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  double in_dr0 = 0;
  float fVar15;
  double in_dr2 = 0;
  double dVar16;
  uint uVar17;
  double in_dr4 = 0;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double in_dr6 = 0;
  undefined4 in_fr13 = 0;
  double dVar21;
  double in_dr14 = 0;
  undefined8 uVar22;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar23;
  char cVar24;
  char cVar25;
  uint uVar26;
  
  cVar25 = '\0';
  cVar24 = '\0';
  dVar21 = CONCAT44D(0x3f800000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x8000;
  }
  puVar12 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x30)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(int *)(fr0_ - 0x38)) = 0;
  do {
    uVar19 = SUB84(in_dr14,0);
    puVar13 = puVar12 + 1;
    (*(uint *)(fr0_ - 0x40)) = (uint)*puVar12;
    uVar3 = (undefined4)(D2U(dVar21) >> 0x20);
    if (cVar25 == '\0') {
      uVar19 = uVar3;
    }
    if ((*puVar12 & 0x8000) != 0) {
      (*(uint *)(fr0_ - 0x40)) = (*(uint *)(fr0_ - 0x40)) & 0x7fff;
      uVar19 = 0xbf800000;
    }
    (*(int *)(fr0_ - 0x38)) = (*(int *)(fr0_ - 0x38)) + (*(uint *)(fr0_ - 0x40));
    (*(uint *)(fr0_ - 0x40)) = (*(uint *)(fr0_ - 0x40)) - 2;
    puVar14 = puVar12 + 2;
    puVar12 = puVar12 + 3;
    pdVar10 = (double *)(unsigned)((uint)*puVar14 * 0x40 + iVar2);
    pdVar9 = (double *)(unsigned)((uint)*puVar13 * 0x40 + iVar2);
    pdVar6 = unaff_r8;
    if (cVar25 == '\0') {
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),uVar19);
      in_dr4 = (double)(ulonglong)*(uint *)(unsigned)((int)pdVar9 + 4);
      dVar21 = CONCAT44D(uVar3,*(undefined4 *)(unsigned)(pdVar10 + 1));
      in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 1),SUB84(in_dr6,0));
    }
    else {
      in_dr14 = *(double *)(unsigned)((int)pdVar10 + 4);
      in_xd12 = pdVar10[1];
      in_dr6 = pdVar9[1];
    }
    do {
      uVar1 = *puVar12;
      puVar12 = puVar12 + 1;
      pdVar11 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar2);
      uVar26 = 0;
      dVar18 = dVar21;
      if (cVar25 == '\0') {
        dVar18 = CONCAT44D((int)(D2U(dVar21) >> 0x20),SUB84(in_dr4,0));
      }
      if ((*(uint *)(unsigned)pdVar9 & *(uint *)(unsigned)pdVar10 & *(uint *)(unsigned)pdVar11 & 0x3f) == 0) {
        fVar15 = F32HI(in_dr14);
        if (cVar25 == '\0') {
          dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + 1),fVar15);
        }
        else {
          dVar16 = pdVar11[1];
          in_xd2 = in_dr14;
        }
        if (cVar24 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) - F32LO(dVar21),
                                    F32LO(dVar16) - F32LO(dVar18));
        }
        else {
          dVar16 = (dVar16 - dVar18) - dVar21;
        }
        if (cVar25 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar11 + 4));
        }
        if (cVar24 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - fVar15);
          fVar15 = F32LO(dVar16) * F32HI(dVar16);
        }
        else {
          in_dr0 = in_dr0 - in_dr14;
          fVar15 = SUB84(dVar16 * dVar16,0);
        }
        dVar16 = in_xd12;
        if (cVar25 == '\0') {
          dVar16 = CONCAT44D(SUB84(dVar21,0),fVar15);
        }
        if (cVar24 == '\0') {
          fVar15 = (F32HI(dVar16) - F32HI(in_dr6)) *
                   SUB84(in_dr0,0);
          in_dr2 = CONCAT44D(fVar15,F32LO(dVar16) - fVar15);
        }
        else {
          in_dr2 = (dVar16 - in_dr6) * in_dr0;
          in_dr2 = in_dr2 - in_dr2;
        }
        dVar16 = in_xd2;
        if (cVar25 == '\0') {
          dVar16 = CONCAT44D(SUB84(in_dr2,0),SUB84(dVar18,0));
        }
        if (cVar24 == '\0') {
          dVar18 = CONCAT44D(F32HI(dVar16) * F32LO(in_dr14),
                                    SUB84(dVar16,0));
        }
        else {
          dVar18 = dVar16 * in_dr14;
        }
        in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
        if (cVar24 == '\0') {
          bVar23 = 0.0 < F32HI(dVar18);
        }
        else {
          bVar23 = in_dr2 < dVar18;
        }
        if ((bVar23) && (uVar4 != 0)) {
          uVar26 = uVar4;
          if (cVar24 == '\0') {
            dVar18 = CONCAT44D(0xbf800000,SUB84(dVar18,0));
          }
          else {
            dVar18 = -CONCAT44D(0x3f800000,SUB84(dVar18,0));
          }
        }
      }
      uVar17 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar15 = F32HI(dVar18);
      if (pdVar6 < unaff_r8) {
        dVar16 = (double)((ulonglong)uVar17 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar15 < 0.0;
        }
        else {
          bVar23 = dVar18 < dVar16;
        }
        if (bVar23) {
          *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
          CacheBlockWriteBack(pdVar10);
          if (*(uint *)(unsigned)((int)pdVar10 + 0x3c) != (ar5 | uVar26)) {
            *(uint *)(unsigned)((int)pdVar10 + 0x3c) = ar5 | uVar26;
            (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar10 + 2,pdVar10 + 6,uVar26));
            if (cVar25 == '\0') {
              *(undefined4 *)(unsigned)(pdVar10 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
              pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2638);
              pdVar7 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2628);
              dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
            }
            else {
              pdVar10[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
              in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
              pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c263c);
              pdVar7 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
              dVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            }
            if (cVar24 == '\0') {
              dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)(unsigned)((int)pdVar10 + 0x24) = (int)(D2U(dVar16) >> 0x20);
              pdVar5 = (double *)(unsigned)((int)pdVar9 + 4);
              dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,*(undefined4 *)(unsigned)pdVar9);
              pdVar7 = (double *)(unsigned)((int)pdVar7 + 4);
            }
            else {
              *(double *)(unsigned)((int)pdVar10 + 0x24) = dVar16;
              in_xd2 = *pdVar9;
              pdVar5 = pdVar9 + 1;
              dVar16 = *pdVar7;
              pdVar7 = pdVar7 + 1;
            }
            if (cVar24 == '\0') {
              dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)(unsigned)(pdVar10 + 5) = (int)(D2U(dVar16) >> 0x20);
              dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,*(undefined4 *)(unsigned)pdVar5);
            }
            else {
              pdVar10[5] = dVar16;
              dVar16 = *pdVar7;
              in_xd2 = *pdVar5;
            }
            pdVar9 = (double *)(unsigned)((int)pdVar10 + 0x2c);
            if (cVar24 == '\0') {
              dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)(unsigned)pdVar9 = (int)(D2U(dVar16) >> 0x20);
            }
            else {
              *pdVar9 = dVar16;
            }
            CacheBlockWriteBack(pdVar9);
          }
          goto LAB_8c242c66;
        }
        *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
        CacheBlockWriteBack(pdVar10);
        if (*(uint *)(unsigned)((int)pdVar10 + 0x3c) != (ar5 | uVar26)) {
          *(uint *)(unsigned)((int)pdVar10 + 0x3c) = ar5 | uVar26;
          (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar10 + 2,pdVar10 + 6,uVar26));
          if (cVar25 == '\0') {
            *(undefined4 *)(unsigned)(pdVar10 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
            pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2638);
            pdVar6 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2628);
            dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
          }
          else {
            pdVar10[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
            in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
            pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c263c);
            pdVar6 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
            dVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
          }
          if (cVar24 == '\0') {
            dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar16;
          }
          if (cVar25 == '\0') {
            *(int *)(unsigned)((int)pdVar10 + 0x24) = (int)(D2U(dVar16) >> 0x20);
            pdVar7 = (double *)(unsigned)((int)pdVar9 + 4);
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,*(undefined4 *)(unsigned)pdVar9);
            pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
          }
          else {
            *(double *)(unsigned)((int)pdVar10 + 0x24) = dVar16;
            in_xd2 = *pdVar9;
            pdVar7 = pdVar9 + 1;
            dVar16 = *pdVar6;
            pdVar6 = pdVar6 + 1;
          }
          if (cVar24 == '\0') {
            dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar16;
          }
          if (cVar25 == '\0') {
            *(int *)(unsigned)(pdVar10 + 5) = (int)(D2U(dVar16) >> 0x20);
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,*(undefined4 *)(unsigned)pdVar7);
          }
          else {
            pdVar10[5] = dVar16;
            dVar16 = *pdVar6;
            in_xd2 = *pdVar7;
          }
          pdVar9 = (double *)(unsigned)((int)pdVar10 + 0x2c);
          if (cVar24 == '\0') {
            dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar16;
          }
          if (cVar25 == '\0') {
            *(int *)(unsigned)pdVar9 = (int)(D2U(dVar16) >> 0x20);
          }
          else {
            *pdVar9 = dVar16;
          }
          CacheBlockWriteBack(pdVar9);
        }
        if (cVar25 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(in_dr0,0));
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(dVar16,0));
          pdVar9 = pdVar10 + 1;
        }
        else {
          in_dr0 = *pdVar10;
          in_dr2 = pdVar10[1];
          pdVar9 = pdVar10 + 2;
        }
        if (cVar25 == '\0') {
          uVar19 = *(undefined4 *)(unsigned)(pdVar9 + 2);
          dVar18 = CONCAT44D(uVar19,SUB84(dVar18,0));
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 0x14),SUB84(in_dr6,0));
          *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
          *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
          *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          dVar18 = pdVar9[2];
          in_dr6 = pdVar9[3];
          unaff_r8[3] = in_dr6;
          unaff_r8[2] = dVar18;
          unaff_r8[1] = in_dr2;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
        pdVar6 = unaff_r8;
        dVar16 = in_xd12;
      }
      else {
        in_dr2 = (double)((ulonglong)uVar17 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar15 < 0.0;
        }
        else {
          bVar23 = dVar18 < in_dr2;
        }
        dVar16 = in_xd12;
        if (bVar23) {
          *(undefined4 *)(unsigned)pdVar9 = 0xe0000000;
          CacheBlockWriteBack(pdVar9);
          if (*(uint *)(unsigned)((int)pdVar9 + 0x3c) != (ar5 | uVar26)) {
            *(uint *)(unsigned)((int)pdVar9 + 0x3c) = ar5 | uVar26;
            (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar9 + 2,pdVar9 + 6,uVar26));
            if (cVar25 == '\0') {
              *(undefined4 *)(unsigned)(pdVar9 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
              pdVar7 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2638);
              pdVar5 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2628);
              dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
            }
            else {
              pdVar9[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
              in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
              pdVar7 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c263c);
              pdVar5 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
              dVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            }
            if (cVar24 == '\0') {
              dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)(unsigned)((int)pdVar9 + 0x24) = (int)(D2U(dVar16) >> 0x20);
              pdVar8 = (double *)(unsigned)((int)pdVar7 + 4);
              dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,*(undefined4 *)(unsigned)pdVar7);
              pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
            }
            else {
              *(double *)(unsigned)((int)pdVar9 + 0x24) = dVar16;
              in_xd2 = *pdVar7;
              pdVar8 = pdVar7 + 1;
              dVar16 = *pdVar5;
              pdVar5 = pdVar5 + 1;
            }
            if (cVar24 == '\0') {
              dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)(unsigned)(pdVar9 + 5) = (int)(D2U(dVar16) >> 0x20);
              in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,*(undefined4 *)(unsigned)pdVar8);
            }
            else {
              pdVar9[5] = dVar16;
              in_dr2 = *pdVar5;
              in_xd2 = *pdVar8;
            }
            pdVar7 = (double *)(unsigned)((int)pdVar9 + 0x2c);
            if (cVar24 == '\0') {
              in_dr2 = CONCAT44D(F32HI(in_dr2) + F32LO(in_dr2),
                                        SUB84(in_dr2,0));
            }
            else {
              in_dr2 = in_dr2 + in_dr2;
            }
            if (cVar25 == '\0') {
              *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr2 >> 0x20);
            }
            else {
              *pdVar7 = in_dr2;
            }
            CacheBlockWriteBack(pdVar7);
          }
          if (cVar25 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(in_dr2,0));
            pdVar9 = pdVar9 + 1;
          }
          else {
            in_dr0 = *pdVar9;
            dVar16 = pdVar9[1];
            pdVar9 = pdVar9 + 2;
          }
          if (cVar25 == '\0') {
            uVar19 = *(undefined4 *)(unsigned)(pdVar9 + 2);
            dVar18 = CONCAT44D(uVar19,SUB84(dVar18,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar16) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar18 = pdVar9[2];
            in_dr6 = pdVar9[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar18;
            unaff_r8[1] = dVar16;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
          CacheBlockWriteBack(pdVar10);
          if (*(uint *)(unsigned)((int)pdVar10 + 0x3c) != (ar5 | uVar26)) {
            *(uint *)(unsigned)((int)pdVar10 + 0x3c) = ar5 | uVar26;
            (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar10 + 2,pdVar10 + 6,uVar26));
            if (cVar25 == '\0') {
              *(undefined4 *)(unsigned)(pdVar10 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
              pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2638);
              pdVar7 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2628);
              dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
            }
            else {
              pdVar10[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
              in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
              pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c263c);
              pdVar7 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
              dVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
            }
            if (cVar24 == '\0') {
              dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)(unsigned)((int)pdVar10 + 0x24) = (int)(D2U(dVar16) >> 0x20);
              pdVar5 = (double *)(unsigned)((int)pdVar9 + 4);
              dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,*(undefined4 *)(unsigned)pdVar9);
              pdVar7 = (double *)(unsigned)((int)pdVar7 + 4);
            }
            else {
              *(double *)(unsigned)((int)pdVar10 + 0x24) = dVar16;
              in_xd2 = *pdVar9;
              pdVar5 = pdVar9 + 1;
              dVar16 = *pdVar7;
              pdVar7 = pdVar7 + 1;
            }
            if (cVar24 == '\0') {
              dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)(unsigned)(pdVar10 + 5) = (int)(D2U(dVar16) >> 0x20);
              dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,*(undefined4 *)(unsigned)pdVar5);
            }
            else {
              pdVar10[5] = dVar16;
              dVar16 = *pdVar7;
              in_xd2 = *pdVar5;
            }
            pdVar9 = (double *)(unsigned)((int)pdVar10 + 0x2c);
            if (cVar24 == '\0') {
              dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                        SUB84(dVar16,0));
            }
            else {
              dVar16 = dVar16 + dVar16;
            }
            if (cVar25 == '\0') {
              *(int *)(unsigned)pdVar9 = (int)(D2U(dVar16) >> 0x20);
            }
            else {
              *pdVar9 = dVar16;
            }
            CacheBlockWriteBack(pdVar9);
          }
LAB_8c242c66:
          if (cVar25 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar10,SUB84(in_dr0,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 4),SUB84(dVar16,0));
            pdVar9 = pdVar10 + 1;
          }
          else {
            in_dr0 = *pdVar10;
            in_dr2 = pdVar10[1];
            pdVar9 = pdVar10 + 2;
          }
          if (cVar25 == '\0') {
            uVar19 = *(undefined4 *)(unsigned)(pdVar9 + 2);
            dVar18 = CONCAT44D(uVar19,SUB84(dVar18,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar18 = pdVar9[2];
            in_dr6 = pdVar9[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar18;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          dVar16 = in_xd12;
        }
      }
      if (cVar25 == '\0') {
        uVar19 = (undefined4)((ulonglong)in_dr14 >> 0x20);
        uVar22 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(in_dr14,0));
        in_dr4 = (double)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        uVar19 = SUB84(dVar18,0);
        uVar22 = *(undefined8 *)(unsigned)((int)pdVar11 + 4);
        in_dr4 = dVar18;
      }
      uVar3 = 8;
      if (cVar25 == '\0') {
        uVar20 = SUB84(dVar21,0);
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)(pdVar11 + 1));
        in_xd12 = dVar16;
        in_dr6 = CONCAT44D(uVar20,SUB84(in_dr6,0));
      }
      else {
        in_xd12 = pdVar11[1];
        in_dr6 = dVar16;
      }
      (*(uint *)(fr0_ - 0x40)) = (*(uint *)(fr0_ - 0x40)) + -1;
      in_dr14 = CONCAT44D((int)((ulonglong)uVar22 >> 0x20),-(float)uVar22);
      pdVar9 = pdVar10;
      pdVar10 = pdVar11;
    } while ((*(uint *)(fr0_ - 0x40)) != 0);
    if (pdVar6 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar11 = 0xf0000000;
      CacheBlockWriteBack(pdVar11);
      if (*(uint *)(unsigned)((int)pdVar11 + 0x3c) != (ar5 | uVar26)) {
        *(uint *)(unsigned)((int)pdVar11 + 0x3c) = ar5 | uVar26;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),pdVar11 + 2,pdVar11 + 6,uVar26));
        if (cVar25 == '\0') {
          *(undefined4 *)(unsigned)(pdVar11 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
          pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2638);
          pdVar6 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2628);
          dVar18 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
        }
        else {
          pdVar11[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
          in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
          pdVar9 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c263c);
          pdVar6 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
          dVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
        }
        if (cVar24 == '\0') {
          dVar18 = CONCAT44D(F32HI(dVar18) + F32LO(dVar18),
                                    SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 + dVar18;
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)((int)pdVar11 + 0x24) = (int)(D2U(dVar18) >> 0x20);
          pdVar10 = (double *)(unsigned)((int)pdVar9 + 4);
          dVar18 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,*(undefined4 *)(unsigned)pdVar9);
          pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
        }
        else {
          *(double *)(unsigned)((int)pdVar11 + 0x24) = dVar18;
          in_xd2 = *pdVar9;
          pdVar10 = pdVar9 + 1;
          dVar18 = *pdVar6;
          pdVar6 = pdVar6 + 1;
        }
        if (cVar24 == '\0') {
          dVar18 = CONCAT44D(F32HI(dVar18) + F32LO(dVar18),
                                    SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 + dVar18;
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)(pdVar11 + 5) = (int)(D2U(dVar18) >> 0x20);
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,*(undefined4 *)(unsigned)pdVar10);
        }
        else {
          pdVar11[5] = dVar18;
          in_dr2 = *pdVar6;
          in_xd2 = *pdVar10;
        }
        pdVar9 = (double *)(unsigned)((int)pdVar11 + 0x2c);
        if (cVar24 == '\0') {
          in_dr2 = CONCAT44D(F32HI(in_dr2) + F32LO(in_dr2),
                                    SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + in_dr2;
        }
        if (cVar25 == '\0') {
          *(int *)(unsigned)pdVar9 = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          *pdVar9 = in_dr2;
        }
        CacheBlockWriteBack(pdVar9);
      }
      if (cVar25 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(in_dr0,0));
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 4),SUB84(in_dr2,0));
        pdVar11 = pdVar11 + 1;
      }
      else {
        in_dr0 = *pdVar11;
        in_dr2 = pdVar11[1];
        pdVar11 = pdVar11 + 2;
      }
      if (cVar25 == '\0') {
        uVar20 = *(undefined4 *)(unsigned)(pdVar11 + 2);
        in_dr4 = CONCAT44D(uVar20,uVar19);
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar11 + 0x14),SUB84(in_dr6,0));
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar11 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
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
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x38));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + (*(int *)(fr0_ - 0x38));
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c24296c\n.set _FUN_8c24296c, _FUN_8c24296c_def\n");
