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
int FUN_8c23eda6_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23eda6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 *unaff_r8 = 0;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  float fVar17;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined8 in_dr6 = 0;
  undefined8 uVar20;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd2 = 0;
  bool bVar21;
  char cVar22;
  char cVar23;
  int iVar24;
  
  cVar23 = '\0';
  cVar22 = '\0';
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  puVar8 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x24)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  iVar24 = 0;
  do {
    iVar24 = iVar24 + (*puVar8 & 0x7fff);
    iVar7 = (*puVar8 & 0x7fff) - 1;
    puVar9 = puVar8 + 1;
    do {
      puVar8 = puVar9;
      puVar9 = puVar8 + 1;
      puVar10 = (undefined8 *)(unsigned)((uint)*puVar8 * 0x40 + iVar1);
      iVar2 = (uint)*puVar9 * 0x40 + iVar1 + 0x20;
      if (cVar23 == '\0') {
        uVar12 = CONCAT44(*(undefined4 *)(unsigned)(puVar10 + 2),*(undefined4 *)(unsigned)((int)puVar10 + 0x14));
        uVar13 = (ulonglong)*(uint *)(unsigned)(puVar10 + 3) << 0x20;
        uVar18 = CONCAT44(*(undefined4 *)(unsigned)(puVar10 + 6),*(undefined4 *)(unsigned)((int)puVar10 + 0x34));
        uVar20 = CONCAT44(*(undefined4 *)(unsigned)(puVar10 + 7),(int)in_dr6);
      }
      else {
        uVar12 = puVar10[2];
        uVar13 = puVar10[4];
        uVar18 = puVar10[6];
        uVar20 = puVar10[8];
      }
      uVar13 = uVar13 & 0xffffffff00000000;
                    
      if (cVar22 == '\0') {
        fVar17 = (float)uVar12 * (float)uVar18 +
                 F32HI(uVar12) * F32HI(uVar18) +
                 (float)uVar20 * 0.0 + (float)(uVar13 >> 0x20) * F32HI(uVar20);
      }
      dVar14 = in_xd2;
      if (cVar23 == '\0') {
        in_fr15 = (float)uVar13;
        dVar14 = CONCAT44D(in_fr15,(float)uVar12);
      }
      uVar19 = SUB84(dVar14,0);
      dVar14 = (double)(uVar13 & 0xffffffff00000000);
      if (cVar22 == '\0') {
        bVar21 = 0.0 < in_fr15;
      }
      else {
        bVar21 = dVar14 < CONCAT44D(in_fr14,in_fr15);
      }
      uVar6 = 0x8000;
      if (!bVar21) {
        uVar6 = 0;
      }
      *(undefined4 *)(unsigned)puVar10 = 0xe0000000;
      CacheBlockWriteBack(puVar10);
      if (*(uint *)(unsigned)((int)puVar10 + 0x3c) != (uVar6 | ar5)) {
        *(uint *)(unsigned)((int)puVar10 + 0x3c) = uVar6 | ar5;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar10 + 2,puVar10 + 6,uVar6));
        if (cVar23 == '\0') {
          *(undefined4 *)(unsigned)(puVar10 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
          pdVar4 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2638);
          pdVar3 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2628);
          dVar14 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
        }
        else {
          puVar10[4] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
          in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
          pdVar4 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c263c);
          pdVar3 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
          dVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
        }
        if (cVar22 == '\0') {
          dVar14 = CONCAT44D(F32HI(dVar14) + F32LO(dVar14),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 + dVar14;
        }
        if (cVar23 == '\0') {
          *(int *)(unsigned)((int)puVar10 + 0x24) = (int)(D2U(dVar14) >> 0x20);
          pdVar5 = (double *)(unsigned)((int)pdVar4 + 4);
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,*(undefined4 *)(unsigned)pdVar4);
          pdVar3 = (double *)(unsigned)((int)pdVar3 + 4);
        }
        else {
          *(double *)(unsigned)((int)puVar10 + 0x24) = dVar14;
          in_xd2 = *pdVar4;
          pdVar5 = pdVar4 + 1;
          dVar14 = *pdVar3;
          pdVar3 = pdVar3 + 1;
        }
        if (cVar22 == '\0') {
          dVar14 = CONCAT44D(F32HI(dVar14) + F32LO(dVar14),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 + dVar14;
        }
        if (cVar23 == '\0') {
          *(int *)(unsigned)(puVar10 + 5) = (int)(D2U(dVar14) >> 0x20);
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,*(undefined4 *)(unsigned)pdVar5);
        }
        else {
          puVar10[5] = dVar14;
          dVar14 = *pdVar3;
          in_xd2 = *pdVar5;
        }
        pdVar4 = (double *)(unsigned)((int)puVar10 + 0x2c);
        if (cVar22 == '\0') {
          dVar14 = CONCAT44D(F32HI(dVar14) + F32LO(dVar14),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 + dVar14;
        }
        if (cVar23 == '\0') {
          *(int *)(unsigned)pdVar4 = (int)(D2U(dVar14) >> 0x20);
        }
        else {
          *pdVar4 = dVar14;
        }
        CacheBlockWriteBack(pdVar4);
      }
      if (cVar23 == '\0') {
        uVar12 = CONCAT44(*(undefined4 *)(unsigned)puVar10,uVar19);
        uVar18 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar10 + 4),SUB84(dVar14,0));
        puVar10 = puVar10 + 1;
      }
      else {
        uVar12 = *puVar10;
        uVar18 = puVar10[1];
        puVar10 = puVar10 + 2;
      }
      if (cVar23 == '\0') {
        uVar19 = *(undefined4 *)(unsigned)(puVar10 + 2);
        in_dr6 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar10 + 0x14),(int)uVar20);
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar10 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar19;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
        *(int *)(unsigned)(unaff_r8 + 2) = (int)((ulonglong)uVar12 >> 0x20);
        puVar10 = unaff_r8 + 2;
      }
      else {
        uVar20 = puVar10[2];
        in_dr6 = puVar10[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = uVar20;
        unaff_r8[1] = uVar18;
        *unaff_r8 = uVar12;
        puVar10 = unaff_r8;
      }
      unaff_r8 = puVar10 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    puVar8 = puVar8 + 2;
    puVar11 = (undefined8 *)(unsigned)((uint)*puVar9 * 0x40 + iVar1);
    if (cVar23 == '\0') {
      uVar12 = CONCAT44(*(undefined4 *)(unsigned)(puVar11 + 2),*(undefined4 *)(unsigned)((int)puVar11 + 0x14));
      uVar13 = (ulonglong)*(uint *)(unsigned)(puVar11 + 3) << 0x20;
      uVar18 = CONCAT44(*(undefined4 *)(unsigned)(puVar11 + 6),*(undefined4 *)(unsigned)((int)puVar11 + 0x34));
      uVar20 = CONCAT44(*(undefined4 *)(unsigned)(puVar11 + 7),(int)in_dr6);
    }
    else {
      uVar12 = puVar11[2];
      uVar13 = puVar11[4];
      uVar18 = puVar11[6];
      uVar20 = puVar11[8];
    }
    uVar13 = uVar13 & 0xffffffff00000000;
                    
    if (cVar22 == '\0') {
      fVar17 = (float)uVar12 * (float)uVar18 +
               F32HI(uVar12) * F32HI(uVar18) +
               (float)uVar20 * 0.0 + (float)(uVar13 >> 0x20) * F32HI(uVar20);
    }
    dVar14 = in_xd2;
    if (cVar23 == '\0') {
      dVar14 = CONCAT44D((int)uVar13,(float)uVar12);
    }
    dVar16 = (double)(uVar13 & 0xffffffff00000000);
    dVar15 = dVar14;
    if (cVar23 == '\0') {
      dVar15 = CONCAT44D((int)(D2U(dVar14) >> 0x20),(float)uVar18);
    }
    if (cVar22 == '\0') {
      bVar21 = 0.0 < F32HI(dVar15);
    }
    else {
      bVar21 = dVar16 < dVar15;
    }
    uVar6 = 0x8000;
    if (!bVar21) {
      uVar6 = 0;
    }
    *(undefined4 *)(unsigned)puVar11 = 0xf0000000;
    CacheBlockWriteBack(puVar11);
    if (*(uint *)(unsigned)((int)puVar11 + 0x3c) != (uVar6 | ar5)) {
      *(uint *)(unsigned)((int)puVar11 + 0x3c) = uVar6 | ar5;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar11 + 2,puVar11 + 6,uVar6));
      if (cVar23 == '\0') {
        *(undefined4 *)(unsigned)(puVar11 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2620);
        pdVar4 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2628);
        pdVar3 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2638);
        dVar15 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
      }
      else {
        puVar11[4] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c2624),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2620));
        pdVar4 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c2630);
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2638),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634));
        pdVar3 = (double *)(unsigned)((undefined1 *)(unsigned)0x8c4c263c);
        dVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2628);
      }
      if (cVar22 == '\0') {
        dVar15 = CONCAT44D(F32HI(dVar15) + F32LO(dVar15),
                                  SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + dVar15;
      }
      if (cVar23 == '\0') {
        *(int *)(unsigned)((int)puVar11 + 0x24) = (int)(D2U(dVar15) >> 0x20);
        pdVar5 = (double *)(unsigned)((int)pdVar4 + 4);
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,*(undefined4 *)(unsigned)pdVar3);
        pdVar3 = (double *)(unsigned)((int)pdVar3 + 4);
      }
      else {
        *(double *)(unsigned)((int)puVar11 + 0x24) = dVar15;
        dVar15 = *pdVar4;
        pdVar5 = pdVar4 + 1;
        in_xd2 = *pdVar3;
        pdVar3 = pdVar3 + 1;
      }
      if (cVar22 == '\0') {
        dVar15 = CONCAT44D(F32HI(dVar15) + F32LO(dVar15),
                                  SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + dVar15;
      }
      if (cVar23 == '\0') {
        *(int *)(unsigned)(puVar11 + 5) = (int)(D2U(dVar15) >> 0x20);
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,*(undefined4 *)(unsigned)pdVar3);
      }
      else {
        puVar11[5] = dVar15;
        dVar16 = *pdVar5;
        in_xd2 = *pdVar3;
      }
      pdVar4 = (double *)(unsigned)((int)puVar11 + 0x2c);
      if (cVar22 == '\0') {
        dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar16),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 + dVar16;
      }
      if (cVar23 == '\0') {
        *(int *)(unsigned)pdVar4 = (int)(D2U(dVar16) >> 0x20);
      }
      else {
        *pdVar4 = dVar16;
      }
      CacheBlockWriteBack(pdVar4);
    }
    if (cVar23 == '\0') {
      uVar12 = CONCAT44(*(undefined4 *)(unsigned)puVar11,SUB84(dVar14,0));
      uVar18 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar11 + 4),SUB84(dVar16,0));
      puVar11 = puVar11 + 1;
    }
    else {
      uVar12 = *puVar11;
      uVar18 = puVar11[1];
      puVar11 = puVar11 + 2;
    }
    if (cVar23 == '\0') {
      uVar19 = *(undefined4 *)(unsigned)(puVar11 + 2);
      in_dr6 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar11 + 0x14),(int)uVar20);
      *(undefined4 *)(unsigned)((int)puVar10 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar11 + 0x14);
      *(undefined4 *)(unsigned)(puVar10 + 7) = uVar19;
      *(int *)(unsigned)((int)puVar10 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
      puVar10 = puVar10 + 6;
      *(int *)(unsigned)puVar10 = (int)((ulonglong)uVar12 >> 0x20);
    }
    else {
      uVar20 = puVar11[2];
      in_dr6 = puVar11[3];
      puVar10[7] = in_dr6;
      puVar10[6] = uVar20;
      puVar10[5] = uVar18;
      puVar10 = puVar10 + 4;
      *puVar10 = uVar12;
    }
    unaff_r8 = puVar10 + 4;
    (*(uint *)(fr0_ - 0x24)) = (*(uint *)(fr0_ - 0x24)) - 1;
  } while ((*(uint *)(fr0_ - 0x24)) != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar24;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar24;
  return iVar2;
}

__asm__(".globl _FUN_8c23eda6\n.set _FUN_8c23eda6, _FUN_8c23eda6_def\n");
