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
undefined4 FUN_8c247280_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c247280";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  double *unaff_r8 = 0;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  double in_dr0 = 0;
  float fVar13;
  double in_dr2 = 0;
  double dVar14;
  undefined8 uVar15;
  double in_dr4 = 0;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double in_dr6 = 0;
  undefined4 in_fr13 = 0;
  float fVar19;
  double dVar20;
  double in_dr14 = 0;
  float fVar22;
  double dVar21;
  double in_xd2 = 0;
  double in_xd12 = 0;
  bool bVar23;
  char cVar24;
  char cVar25;
  
  cVar25 = '\0';
  cVar24 = '\0';
  dVar20 = CONCAT44D(0x3f800000,in_fr13);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000;
  puVar10 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x34)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  (*(int *)(fr0_ - 0x38)) = 0;
  do {
    uVar18 = SUB84(in_dr14,0);
    puVar11 = puVar10 + 1;
    uVar5 = (uint)*puVar10;
    uVar17 = (undefined4)(D2U(dVar20) >> 0x20);
    if (cVar25 == '\0') {
      uVar18 = uVar17;
    }
    if ((*puVar10 & 0x8000) != 0) {
      uVar5 = uVar5 & 0x7fff;
      uVar18 = 0xbf800000;
    }
    (*(int *)(fr0_ - 0x38)) = (*(int *)(fr0_ - 0x38)) + uVar5;
    iVar4 = uVar5 - 2;
    puVar12 = puVar10 + 2;
    puVar10 = puVar10 + 3;
    pdVar8 = (double *)(unsigned)((uint)*puVar12 * 0x40 + iVar3);
    pdVar6 = (double *)(unsigned)((uint)*puVar11 * 0x40 + iVar3);
    pdVar7 = unaff_r8;
    if (cVar25 == '\0') {
      dVar20 = CONCAT44D(uVar17,*(undefined4 *)(unsigned)((int)pdVar8 + 4));
      in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),SUB84(in_dr6,0));
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 1),uVar18);
      in_dr4 = (double)(ulonglong)*(uint *)(unsigned)(pdVar6 + 1);
      dVar21 = in_xd12;
    }
    else {
      in_dr6 = *(double *)(unsigned)((int)pdVar6 + 4);
      in_dr14 = pdVar8[1];
      dVar21 = *(double *)(unsigned)((int)pdVar8 + 4);
    }
    do {
      uVar1 = *puVar10;
      puVar10 = puVar10 + 1;
      pdVar9 = (double *)(unsigned)((uint)uVar1 * 0x40 + iVar3);
      uVar18 = (undefined4)(D2U(dVar20) >> 0x20);
      dVar16 = dVar20;
      if (cVar25 == '\0') {
        dVar16 = CONCAT44D(uVar18,SUB84(in_dr4,0));
      }
      fVar19 = F32LO(dVar20);
      fVar22 = F32HI(in_dr14);
      if ((*(uint *)(unsigned)pdVar6 & *(uint *)(unsigned)pdVar8 & *(uint *)(unsigned)pdVar9 & 0x3f) == 0) {
        if (cVar25 == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 1),fVar19);
        }
        else {
          dVar14 = pdVar9[1];
          in_xd2 = dVar21;
        }
        if (cVar24 == '\0') {
          dVar14 = CONCAT44D(F32HI(dVar14) - fVar22,
                                    F32LO(dVar14) - F32HI(in_dr6));
        }
        else {
          dVar14 = (dVar14 - in_dr6) - in_dr14;
        }
        if (cVar25 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar9 + 4));
        }
        if (cVar24 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - fVar19);
          fVar13 = F32LO(dVar14) * F32HI(dVar14);
        }
        else {
          in_dr0 = in_dr0 - dVar20;
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        dVar14 = in_dr14;
        if (cVar25 == '\0') {
          dVar14 = CONCAT44D(fVar22,fVar13);
        }
        if (cVar24 == '\0') {
          fVar13 = (F32HI(dVar14) - F32LO(dVar16)) * F32LO(in_dr0);
          in_dr2 = CONCAT44D(fVar13,F32LO(dVar14) - fVar13);
        }
        else {
          in_dr2 = (dVar14 - dVar16) * in_dr0;
          in_dr2 = in_dr2 - in_dr2;
        }
        dVar14 = in_xd2;
        if (cVar25 == '\0') {
          dVar14 = CONCAT44D(SUB84(in_dr2,0),SUB84(dVar16,0));
        }
        if (cVar24 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar14) * F32LO(in_dr14),
                                    SUB84(dVar14,0));
        }
        else {
          dVar16 = dVar14 * in_dr14;
        }
        in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
        if (cVar24 == '\0') {
          bVar23 = 0.0 < F32HI(dVar16);
        }
        else {
          bVar23 = in_dr2 < dVar16;
        }
        if ((bVar23) && (uVar2 != 0)) {
          if (cVar24 == '\0') {
            dVar16 = CONCAT44D(0xbf800000,SUB84(dVar16,0));
          }
          else {
            dVar16 = -CONCAT44D(0x3f800000,SUB84(dVar16,0));
          }
        }
      }
      uVar5 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar13 = F32HI(dVar16);
      if (pdVar7 < unaff_r8) {
        if (cVar24 == '\0') {
          bVar23 = fVar13 < 0.0;
        }
        else {
          bVar23 = dVar16 < (double)((ulonglong)uVar5 << 0x20);
        }
        if (bVar23) {
          *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (cVar25 == '\0') {
            *(undefined4 *)(unsigned)(pdVar8 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar8 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar15 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar17);
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar8[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar8 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            pdVar8[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar8 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          uVar17 = (undefined4)uVar15;
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar8 + 0x2c));
LAB_8c2474ac:
          if (cVar25 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(in_dr0,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),uVar17);
            pdVar6 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            pdVar6 = pdVar8 + 2;
          }
          if (cVar25 == '\0') {
            uVar17 = *(undefined4 *)(unsigned)(pdVar6 + 2);
            dVar16 = CONCAT44D(uVar17,SUB84(dVar16,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar17;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar16 = pdVar6[2];
            in_dr6 = pdVar6[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar16;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          *(undefined4 *)(unsigned)pdVar8 = 0xf0000000;
          CacheBlockWriteBack(pdVar8);
          if (cVar25 == '\0') {
            *(undefined4 *)(unsigned)(pdVar8 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar8 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar15 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar17);
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar8[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar8 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            pdVar8[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar8 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar8 + 0x2c));
          if (cVar25 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,SUB84(in_dr0,0));
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 4),(int)uVar15);
            pdVar6 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            pdVar6 = pdVar8 + 2;
          }
          if (cVar25 == '\0') {
            uVar17 = *(undefined4 *)(unsigned)(pdVar6 + 2);
            dVar16 = CONCAT44D(uVar17,SUB84(dVar16,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar17;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar16 = pdVar6[2];
            in_dr6 = pdVar6[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar16;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          pdVar7 = unaff_r8;
        }
      }
      else {
        in_dr2 = (double)((ulonglong)uVar5 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar13 < 0.0;
        }
        else {
          bVar23 = dVar16 < in_dr2;
        }
        if (bVar23) {
          *(undefined4 *)(unsigned)pdVar6 = 0xe0000000;
          CacheBlockWriteBack(pdVar6);
          if (cVar25 == '\0') {
            *(undefined4 *)(unsigned)(pdVar6 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar6 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar6 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar15 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar17);
            *(undefined4 *)(unsigned)((int)pdVar6 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar6[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar6 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            pdVar6[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar6 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar6 + 0x2c));
          if (cVar25 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(in_dr0,0));
            dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),(int)uVar15);
            pdVar6 = pdVar6 + 1;
          }
          else {
            in_dr0 = *pdVar6;
            dVar14 = pdVar6[1];
            pdVar6 = pdVar6 + 2;
          }
          if (cVar25 == '\0') {
            uVar17 = *(undefined4 *)(unsigned)(pdVar6 + 2);
            dVar16 = CONCAT44D(uVar17,SUB84(dVar16,0));
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x14);
            *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar17;
            *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)(D2U(dVar14) >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)(unsigned)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar16 = pdVar6[2];
            in_dr6 = pdVar6[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar16;
            unaff_r8[1] = dVar14;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)(unsigned)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (cVar25 == '\0') {
            *(undefined4 *)(unsigned)(pdVar8 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            uVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            *(undefined4 *)(unsigned)(pdVar8 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            uVar15 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar17);
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
          }
          else {
            pdVar8[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
            *(ulonglong *)(unsigned)((int)pdVar8 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
            in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            pdVar8[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
            uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
            *(undefined8 *)(unsigned)((int)pdVar8 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
          }
          uVar17 = (undefined4)uVar15;
          CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar8 + 0x2c));
          goto LAB_8c2474ac;
        }
      }
      if (cVar25 == '\0') {
        dVar20 = CONCAT44D(uVar18,*(undefined4 *)(unsigned)((int)pdVar9 + 4));
        in_xd12 = dVar21;
        in_dr6 = CONCAT44D(fVar19,SUB84(in_dr6,0));
      }
      else {
        in_xd12 = *(double *)(unsigned)((int)pdVar9 + 4);
        in_dr6 = dVar21;
      }
      if (cVar25 == '\0') {
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 1),SUB84(in_dr14,0));
        in_dr4 = (double)(ulonglong)(uint)fVar22;
      }
      else {
        dVar21 = pdVar9[1];
        in_dr4 = dVar16;
      }
      iVar4 = iVar4 + -1;
      in_dr14 = CONCAT44D((int)(D2U(dVar21) >> 0x20),-SUB84(dVar21,0));
      pdVar6 = pdVar8;
      pdVar8 = pdVar9;
      dVar21 = in_xd12;
    } while (iVar4 != 0);
    if (pdVar7 < unaff_r8) {
      *(undefined4 *)(unsigned)pdVar9 = 0xf0000000;
      CacheBlockWriteBack(pdVar9);
      if (cVar25 == '\0') {
        *(undefined4 *)(unsigned)(pdVar9 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        *(undefined4 *)(unsigned)((int)pdVar9 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        *(undefined4 *)(unsigned)(pdVar9 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        uVar15 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar18);
        *(undefined4 *)(unsigned)((int)pdVar9 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
      }
      else {
        pdVar9[4] = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
        *(ulonglong *)(unsigned)((int)pdVar9 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
        in_xd2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
        pdVar9[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
        uVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
        *(undefined8 *)(unsigned)((int)pdVar9 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
      }
      CacheBlockWriteBack((undefined4 *)(unsigned)((int)pdVar9 + 0x2c));
      if (cVar25 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),(int)uVar15);
        pdVar9 = pdVar9 + 1;
      }
      else {
        in_dr0 = *pdVar9;
        in_dr2 = pdVar9[1];
        pdVar9 = pdVar9 + 2;
      }
      if (cVar25 == '\0') {
        uVar18 = *(undefined4 *)(unsigned)(pdVar9 + 2);
        in_dr4 = CONCAT44D(uVar18,SUB84(in_dr4,0));
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 0x14),SUB84(in_dr6,0));
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar9 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar18;
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
    (*(uint *)(fr0_ - 0x34)) = (*(uint *)(fr0_ - 0x34)) - 1;
    if ((*(uint *)(fr0_ - 0x34)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (*(int *)(fr0_ - 0x38));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + (*(int *)(fr0_ - 0x38));
      return 8;
    }
  } while( true );
}

__asm__(".globl _FUN_8c247280\n.set _FUN_8c247280, _FUN_8c247280_def\n");
