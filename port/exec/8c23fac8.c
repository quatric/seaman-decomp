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
undefined4 * FUN_8c23fac8_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23fac8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  double *pdVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *ar6_00;
  undefined8 *unaff_r8 = 0;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  double dVar14;
  ulonglong uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 in_dr6 = 0;
  ulonglong uVar21;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd2 = 0;
  double in_xd14 = 0;
  bool bVar22;
  char cVar23;
  char cVar24;
  int iVar25;
  undefined4 uVar20;
  
  cVar24 = '\0';
  cVar23 = '\0';
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  puVar10 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x24)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  iVar25 = 0;
  do {
    iVar25 = iVar25 + (*puVar10 & 0x7fff);
    iVar9 = (*puVar10 & 0x7fff) - 1;
    puVar10 = puVar10 + 1;
    do {
      puVar11 = puVar10;
      puVar12 = (undefined8 *)(unsigned)((uint)*puVar11 * 0x40 + iVar2);
      if (cVar24 == '\0') {
        uVar13 = CONCAT44(*(undefined4 *)(unsigned)(puVar12 + 2),*(undefined4 *)(unsigned)((int)puVar12 + 0x14));
        uVar15 = (ulonglong)*(uint *)(unsigned)(puVar12 + 3) << 0x20;
        uVar17 = CONCAT44(*(undefined4 *)(unsigned)(puVar12 + 6),*(undefined4 *)(unsigned)((int)puVar12 + 0x34));
        uVar21 = CONCAT44(*(undefined4 *)(unsigned)(puVar12 + 7),(int)in_dr6);
      }
      else {
        uVar13 = puVar12[2];
        uVar15 = puVar12[4];
        uVar17 = puVar12[6];
        uVar21 = puVar12[8];
      }
      uVar15 = uVar15 & 0xffffffff00000000;
                    
      if (cVar23 == '\0') {
        fVar16 = (float)uVar13 * (float)uVar17 +
                 F32HI(uVar13) * F32HI(uVar17) +
                 (float)uVar21 * 0.0 + (float)(uVar15 >> 0x20) * (float)(uVar21 >> 0x20);
      }
      dVar19 = in_xd2;
      dVar14 = in_xd2;
      if (cVar24 == '\0') {
        in_fr15 = (float)uVar15;
        dVar19 = in_xd14;
        dVar14 = CONCAT44D(in_fr15,(float)uVar13);
      }
      uVar20 = SUB84(dVar14,0);
      if (cVar23 == '\0') {
        bVar22 = 0.0 < in_fr15;
      }
      else {
        bVar22 = (double)(uVar15 & 0xffffffff00000000) < CONCAT44D(in_fr14,in_fr15);
      }
      uVar8 = 0x8000;
      if (!bVar22) {
        uVar8 = 0;
      }
      *(undefined4 *)(unsigned)puVar12 = 0xe0000000;
      CacheBlockWriteBack(puVar12);
      if (*(uint *)(unsigned)((int)puVar12 + 0x3c) != (uVar8 | ar5)) {
        *(uint *)(unsigned)((int)puVar12 + 0x3c) = uVar8 | ar5;
        puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
        puVar7 = puVar12 + 6;
        puVar6 = puVar12 + 2;
        (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar6,puVar7,uVar8));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 36)), float_to_color_u8(puVar5,puVar6,puVar7,uVar8));
        *(undefined4 *)(unsigned)(puVar12 + 5) = uVar3;
        if (cVar24 == '\0') {
          uVar21 = (ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
        }
        else {
          uVar21 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 36)), float_to_color_u8(puVar5,puVar6,puVar7,uVar8));
        *(undefined4 *)(unsigned)((int)puVar12 + 0x2c) = uVar3;
      }
      puVar4 = ((undefined4 *)(unsigned)0x8c23fc7c);
      if (cVar24 == '\0') {
        in_fr15 = 0.5;
        puVar6 = (undefined8 *)(unsigned)((int)puVar12 + 0x34);
        uVar13 = CONCAT44(*(undefined4 *)(unsigned)(puVar12 + 6),0x3f000000);
        dVar14 = CONCAT44D(0x3f000000,uVar20);
        in_xd14 = dVar19;
      }
      else {
        in_xd2 = 7.57221068030812e-86;
        uVar13 = puVar12[6];
        puVar6 = puVar12 + 7;
        dVar14 = in_xd2;
        in_xd14 = in_xd2;
      }
      if (cVar23 == '\0') {
        fVar16 = F32HI(uVar13);
        uVar13 = CONCAT44(fVar16,F32HI(dVar14) * fVar16 + (float)uVar13);
      }
      if (cVar24 == '\0') {
        *(int *)(unsigned)(puVar12 + 4) = (int)uVar13;
        uVar13 = CONCAT44(*(undefined4 *)(unsigned)puVar6,in_fr15);
        dVar14 = CONCAT44D(in_fr15,SUB84(dVar14,0));
      }
      else {
        puVar12[4] = in_xd2;
        uVar13 = *puVar6;
        in_xd2 = in_xd14;
        dVar14 = in_xd14;
      }
      pdVar1 = (double *)(unsigned)((int)puVar12 + 0x24);
      if (cVar23 == '\0') {
        fVar16 = F32HI(uVar13);
        uVar13 = CONCAT44(fVar16,F32HI(dVar14) * fVar16 + (float)uVar13);
      }
      if (cVar24 == '\0') {
        *(int *)(unsigned)pdVar1 = (int)uVar13;
      }
      else {
        *pdVar1 = in_xd2;
      }
      CacheBlockWriteBack(pdVar1);
      if (cVar24 == '\0') {
        uVar17 = CONCAT44(*(undefined4 *)(unsigned)puVar12,SUB84(dVar14,0));
        uVar13 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar12 + 4),(int)uVar13);
        puVar12 = puVar12 + 1;
      }
      else {
        uVar17 = *puVar12;
        uVar13 = puVar12[1];
        puVar12 = puVar12 + 2;
      }
      if (cVar24 == '\0') {
        uVar20 = *(undefined4 *)(unsigned)(puVar12 + 2);
        in_dr6 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar12 + 0x14),(int)uVar21);
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar12 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar20;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)uVar13 >> 0x20);
        *(int *)(unsigned)(unaff_r8 + 2) = (int)((ulonglong)uVar17 >> 0x20);
        puVar12 = unaff_r8 + 2;
      }
      else {
        uVar18 = puVar12[2];
        in_dr6 = puVar12[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = uVar18;
        unaff_r8[1] = uVar13;
        *unaff_r8 = uVar17;
        puVar12 = unaff_r8;
      }
      unaff_r8 = puVar12 + 4;
      iVar9 = iVar9 + -1;
      puVar10 = puVar11 + 1;
    } while (iVar9 != 0);
    puVar10 = puVar11 + 2;
    puVar6 = (undefined8 *)(unsigned)((uint)puVar11[1] * 0x40 + iVar2);
    if (cVar24 == '\0') {
      uVar13 = CONCAT44(*(undefined4 *)(unsigned)(puVar6 + 2),*(undefined4 *)(unsigned)((int)puVar6 + 0x14));
      uVar15 = (ulonglong)*(uint *)(unsigned)(puVar6 + 3) << 0x20;
      uVar17 = CONCAT44(*(undefined4 *)(unsigned)(puVar6 + 6),*(undefined4 *)(unsigned)((int)puVar6 + 0x34));
      uVar21 = CONCAT44(*(undefined4 *)(unsigned)(puVar6 + 7),(int)in_dr6);
    }
    else {
      uVar13 = puVar6[2];
      uVar15 = puVar6[4];
      uVar17 = puVar6[6];
      uVar21 = puVar6[8];
    }
    uVar15 = uVar15 & 0xffffffff00000000;
                    
    if (cVar23 == '\0') {
      fVar16 = (float)uVar13 * (float)uVar17 +
               F32HI(uVar13) * F32HI(uVar17) +
               (float)uVar21 * 0.0 + (float)(uVar15 >> 0x20) * (float)(uVar21 >> 0x20);
    }
    dVar14 = in_xd2;
    if (cVar24 == '\0') {
      dVar14 = CONCAT44D((int)uVar15,(float)uVar13);
    }
    dVar19 = dVar14;
    if (cVar24 == '\0') {
      dVar19 = CONCAT44D((int)(D2U(dVar14) >> 0x20),(float)uVar17);
    }
    if (cVar23 == '\0') {
      bVar22 = 0.0 < F32HI(dVar19);
    }
    else {
      bVar22 = (double)(uVar15 & 0xffffffff00000000) < dVar19;
    }
    uVar8 = 0x8000;
    if (!bVar22) {
      uVar8 = 0;
    }
    *(undefined4 *)(unsigned)puVar6 = 0xf0000000;
    CacheBlockWriteBack(puVar6);
    if (*(uint *)(unsigned)((int)puVar6 + 0x3c) != (uVar8 | ar5)) {
      *(uint *)(unsigned)((int)puVar6 + 0x3c) = uVar8 | ar5;
      puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
      ar6_00 = puVar6 + 6;
      puVar7 = puVar6 + 2;
      (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar7,ar6_00,uVar8));
      uVar20 = (vsp = ((unsigned long)(fr0_ - 36)), float_to_color_u8(puVar5,puVar7,ar6_00,uVar8));
      *(undefined4 *)(unsigned)(puVar6 + 5) = uVar20;
      if (cVar24 == '\0') {
        uVar21 = (ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
      }
      else {
        uVar21 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
      }
      puVar4 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 36)), float_to_color_u8(puVar5,puVar7,ar6_00,uVar8));
      *(unsigned *)(unsigned)((int)puVar6 + 0x2c) = puVar4;
    }
    if (cVar24 == '\0') {
      puVar7 = (undefined8 *)(unsigned)((int)puVar6 + 0x34);
      uVar13 = CONCAT44(*(undefined4 *)(unsigned)(puVar6 + 6),in_fr15);
      dVar14 = CONCAT44D(in_fr15,SUB84(dVar14,0));
    }
    else {
      uVar13 = puVar6[6];
      puVar7 = puVar6 + 7;
      dVar14 = in_xd14;
      in_xd2 = in_xd14;
    }
    if (cVar23 == '\0') {
      fVar16 = F32HI(uVar13);
      uVar13 = CONCAT44(fVar16,F32HI(dVar14) * fVar16 + (float)uVar13);
    }
    if (cVar24 == '\0') {
      *(int *)(unsigned)(puVar6 + 4) = (int)uVar13;
      uVar13 = CONCAT44(*(undefined4 *)(unsigned)puVar7,in_fr15);
      dVar14 = CONCAT44D(in_fr15,SUB84(dVar14,0));
    }
    else {
      puVar6[4] = in_xd2;
      uVar13 = *puVar7;
      in_xd2 = in_xd14;
      dVar14 = in_xd14;
    }
    pdVar1 = (double *)(unsigned)((int)puVar6 + 0x24);
    if (cVar23 == '\0') {
      fVar16 = F32HI(uVar13);
      uVar13 = CONCAT44(fVar16,F32HI(dVar14) * fVar16 + (float)uVar13);
    }
    if (cVar24 == '\0') {
      *(int *)(unsigned)pdVar1 = (int)uVar13;
    }
    else {
      *pdVar1 = in_xd2;
    }
    CacheBlockWriteBack(pdVar1);
    if (cVar24 == '\0') {
      uVar17 = CONCAT44(*(undefined4 *)(unsigned)puVar6,SUB84(dVar14,0));
      uVar13 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar6 + 4),(int)uVar13);
      puVar6 = puVar6 + 1;
    }
    else {
      uVar17 = *puVar6;
      uVar13 = puVar6[1];
      puVar6 = puVar6 + 2;
    }
    if (cVar24 == '\0') {
      uVar20 = *(undefined4 *)(unsigned)(puVar6 + 2);
      in_dr6 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar6 + 0x14),(int)uVar21);
      *(undefined4 *)(unsigned)((int)puVar12 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar6 + 0x14);
      *(undefined4 *)(unsigned)(puVar12 + 7) = uVar20;
      *(int *)(unsigned)((int)puVar12 + 0x34) = (int)((ulonglong)uVar13 >> 0x20);
      puVar12 = puVar12 + 6;
      *(int *)(unsigned)puVar12 = (int)((ulonglong)uVar17 >> 0x20);
    }
    else {
      uVar18 = puVar6[2];
      in_dr6 = puVar6[3];
      puVar12[7] = in_dr6;
      puVar12[6] = uVar18;
      puVar12[5] = uVar13;
      puVar12 = puVar12 + 4;
      *puVar12 = uVar17;
    }
    unaff_r8 = puVar12 + 4;
    (*(uint *)(fr0_ - 0x24)) = (*(uint *)(fr0_ - 0x24)) - 1;
  } while ((*(uint *)(fr0_ - 0x24)) != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar25;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar25;
  return puVar4;
}

__asm__(".globl _FUN_8c23fac8\n.set _FUN_8c23fac8, _FUN_8c23fac8_def\n");
