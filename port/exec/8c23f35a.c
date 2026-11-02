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
undefined4 * FUN_8c23f35a_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23f35a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *ar6_00;
  undefined8 *unaff_r8 = 0;
  uint uVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  double dVar15;
  float fVar16;
  ulonglong uVar17;
  float fVar20;
  double dVar18;
  double dVar19;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  undefined8 in_dr6 = 0;
  ulonglong uVar25;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd2 = 0;
  double in_xd14 = 0;
  bool bVar26;
  char cVar27;
  char cVar28;
  int iVar29;
  undefined4 uVar24;
  
  cVar28 = '\0';
  cVar27 = '\0';
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  puVar10 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x24)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  psVar8 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
  iVar29 = 0;
  do {
    iVar29 = iVar29 + (*puVar10 & 0x7fff);
    iVar7 = (*puVar10 & 0x7fff) - 1;
    puVar10 = puVar10 + 1;
    do {
      puVar11 = puVar10;
      psVar9 = psVar8;
      puVar12 = (undefined8 *)(unsigned)((uint)*puVar11 * 0x40 + iVar1);
      if (cVar28 == '\0') {
        uVar14 = CONCAT44(*(undefined4 *)(unsigned)(puVar12 + 2),*(undefined4 *)(unsigned)((int)puVar12 + 0x14));
        uVar17 = (ulonglong)*(uint *)(unsigned)(puVar12 + 3) << 0x20;
        uVar21 = CONCAT44(*(undefined4 *)(unsigned)(puVar12 + 6),*(undefined4 *)(unsigned)((int)puVar12 + 0x34));
        uVar25 = CONCAT44(*(undefined4 *)(unsigned)(puVar12 + 7),(int)in_dr6);
      }
      else {
        uVar14 = puVar12[2];
        uVar17 = puVar12[4];
        uVar21 = puVar12[6];
        uVar25 = puVar12[8];
      }
      fVar16 = (float)uVar21;
      uVar17 = uVar17 & 0xffffffff00000000;
                    
      if (cVar27 == '\0') {
        fVar20 = (float)uVar14 * fVar16 +
                 F32HI(uVar14) * F32HI(uVar21) +
                 (float)uVar25 * 0.0 + (float)(uVar17 >> 0x20) * (float)(uVar25 >> 0x20);
      }
      dVar18 = in_xd2;
      dVar15 = in_xd2;
      if (cVar28 == '\0') {
        in_fr15 = (float)uVar17;
        dVar18 = in_xd14;
        dVar15 = CONCAT44D(in_fr15,(float)uVar14);
      }
      in_xd14 = dVar18;
      uVar24 = SUB84(dVar15,0);
      dVar15 = (double)(uVar17 & 0xffffffff00000000);
      if (cVar27 == '\0') {
        bVar26 = 0.0 < in_fr15;
      }
      else {
        bVar26 = dVar15 < CONCAT44D(in_fr14,in_fr15);
      }
      uVar6 = 0x8000;
      if (!bVar26) {
        uVar6 = 0;
      }
      *(undefined4 *)(unsigned)puVar12 = 0xe0000000;
      CacheBlockWriteBack(puVar12);
      if (*(uint *)(unsigned)((int)puVar12 + 0x3c) != (ar5 | uVar6)) {
        *(uint *)(unsigned)((int)puVar12 + 0x3c) = ar5 | uVar6;
        puVar4 = ((undefined1 *)(unsigned)0x8c4c2620);
        puVar5 = puVar12 + 6;
        puVar13 = puVar12 + 2;
        (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar13,puVar5,uVar6));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 44)), float_to_color_u8(puVar4,puVar13,puVar5,uVar6));
        *(undefined4 *)(unsigned)(puVar12 + 5) = uVar2;
        if (cVar28 == '\0') {
          uVar25 = (ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
          fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
        }
        else {
          uVar25 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
          fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c2630);
        }
        uVar2 = (vsp = ((unsigned long)(fr0_ - 44)), float_to_color_u8(puVar4,puVar13,puVar5,uVar6));
        *(undefined4 *)(unsigned)((int)puVar12 + 0x2c) = uVar2;
      }
      puVar3 = ((undefined4 *)(unsigned)0x8c23f504);
      if (cVar28 == '\0') {
        in_fr15 = 0.00390625;
      }
      else {
        in_xd14 = 7.572216732779312e-86;
      }
      uVar2 = (undefined4)(D2U(dVar15) >> 0x20);
      dVar15 = in_xd14;
      if (cVar28 == '\0') {
        dVar15 = CONCAT44D(in_fr15,fVar16);
      }
      fVar16 = F32HI(dVar15);
      if (cVar27 == '\0') {
        dVar18 = CONCAT44D(uVar2,(float)(int)*psVar9 * fVar16);
      }
      else {
        dVar18 = CONCAT44D(uVar2,(float)(int)*psVar9) * dVar15;
      }
      if (cVar28 == '\0') {
        *(int *)(unsigned)(puVar12 + 4) = SUB84(dVar18,0);
      }
      else {
        puVar12[4] = in_xd2;
      }
      if (cVar27 == '\0') {
        fVar16 = (float)(int)psVar9[1] * fVar16;
      }
      else {
        fVar16 = SUB84(CONCAT44D((int)(D2U(dVar18) >> 0x20),(float)(int)psVar9[1]) *
                       dVar15,0);
      }
      if (cVar28 == '\0') {
        *(float *)(unsigned)((int)puVar12 + 0x24) = fVar16;
      }
      else {
        *(double *)(unsigned)((int)puVar12 + 0x24) = in_xd2;
      }
      CacheBlockWriteBack(puVar12 + 4);
      if (cVar28 == '\0') {
        uVar14 = CONCAT44(*(undefined4 *)(unsigned)puVar12,uVar24);
        uVar21 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar12 + 4),fVar16);
        puVar12 = puVar12 + 1;
      }
      else {
        uVar14 = *puVar12;
        uVar21 = puVar12[1];
        puVar12 = puVar12 + 2;
      }
      if (cVar28 == '\0') {
        uVar24 = *(undefined4 *)(unsigned)(puVar12 + 2);
        in_dr6 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar12 + 0x14),(int)uVar25);
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar12 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar24;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)uVar21 >> 0x20);
        *(int *)(unsigned)(unaff_r8 + 2) = (int)((ulonglong)uVar14 >> 0x20);
        puVar12 = unaff_r8 + 2;
      }
      else {
        uVar22 = puVar12[2];
        in_dr6 = puVar12[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = uVar22;
        unaff_r8[1] = uVar21;
        *unaff_r8 = uVar14;
        puVar12 = unaff_r8;
      }
      unaff_r8 = puVar12 + 4;
      iVar7 = iVar7 + -1;
      psVar8 = psVar9 + 2;
      puVar10 = puVar11 + 1;
    } while (iVar7 != 0);
    puVar10 = puVar11 + 2;
    puVar13 = (undefined8 *)(unsigned)((uint)puVar11[1] * 0x40 + iVar1);
    if (cVar28 == '\0') {
      uVar14 = CONCAT44(*(undefined4 *)(unsigned)(puVar13 + 2),*(undefined4 *)(unsigned)((int)puVar13 + 0x14));
      uVar17 = (ulonglong)*(uint *)(unsigned)(puVar13 + 3) << 0x20;
      uVar21 = CONCAT44(*(undefined4 *)(unsigned)(puVar13 + 6),*(undefined4 *)(unsigned)((int)puVar13 + 0x34));
      uVar25 = CONCAT44(*(undefined4 *)(unsigned)(puVar13 + 7),(int)in_dr6);
    }
    else {
      uVar14 = puVar13[2];
      uVar17 = puVar13[4];
      uVar21 = puVar13[6];
      uVar25 = puVar13[8];
    }
    uVar17 = uVar17 & 0xffffffff00000000;
                    
    if (cVar27 == '\0') {
      fVar16 = (float)uVar14 * (float)uVar21 +
               F32HI(uVar14) * F32HI(uVar21) +
               (float)uVar25 * 0.0 + (float)(uVar17 >> 0x20) * (float)(uVar25 >> 0x20);
    }
    dVar15 = in_xd2;
    if (cVar28 == '\0') {
      dVar15 = CONCAT44D((int)uVar17,(float)uVar14);
    }
    dVar19 = (double)(uVar17 & 0xffffffff00000000);
    dVar18 = dVar15;
    if (cVar28 == '\0') {
      dVar18 = CONCAT44D((int)(D2U(dVar15) >> 0x20),(float)uVar21);
    }
    if (cVar27 == '\0') {
      bVar26 = 0.0 < F32HI(dVar18);
    }
    else {
      bVar26 = dVar19 < dVar18;
    }
    uVar6 = 0x8000;
    if (!bVar26) {
      uVar6 = 0;
    }
    *(undefined4 *)(unsigned)puVar13 = 0xf0000000;
    CacheBlockWriteBack(puVar13);
    if (*(uint *)(unsigned)((int)puVar13 + 0x3c) != (ar5 | uVar6)) {
      *(uint *)(unsigned)((int)puVar13 + 0x3c) = ar5 | uVar6;
      puVar4 = ((undefined1 *)(unsigned)0x8c4c2620);
      ar6_00 = puVar13 + 6;
      puVar5 = puVar13 + 2;
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar5,ar6_00,uVar6));
      uVar24 = (vsp = ((unsigned long)(fr0_ - 44)), float_to_color_u8(puVar4,puVar5,ar6_00,uVar6));
      *(undefined4 *)(unsigned)(puVar13 + 5) = uVar24;
      if (cVar28 == '\0') {
        uVar25 = (ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
        dVar18 = (double)(ulonglong)(uint)(*(undefined4 *)(unsigned)(unsigned)0x8c4c2634);
      }
      else {
        uVar25 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
        dVar18 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c2634),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2630));
      }
      puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 44)), float_to_color_u8(puVar4,puVar5,ar6_00,uVar6));
      *(unsigned *)(unsigned)((int)puVar13 + 0x2c) = puVar3;
    }
    dVar23 = in_xd14;
    if (cVar28 == '\0') {
      dVar23 = CONCAT44D(in_fr15,SUB84(dVar18,0));
    }
    psVar8 = psVar9 + 4;
    uVar24 = (undefined4)(D2U(dVar19) >> 0x20);
    fVar16 = (float)(int)psVar9[2];
    fVar20 = F32HI(dVar23);
    if (cVar27 == '\0') {
      dVar18 = CONCAT44D(uVar24,fVar16 * fVar20);
    }
    else {
      dVar18 = CONCAT44D(uVar24,fVar16) * dVar23;
    }
    if (cVar28 == '\0') {
      *(int *)(unsigned)(puVar13 + 4) = SUB84(dVar18,0);
    }
    else {
      puVar13[4] = in_xd2;
    }
    if (cVar27 == '\0') {
      fVar20 = (float)(int)psVar9[3] * fVar20;
    }
    else {
      fVar20 = SUB84(CONCAT44D((int)(D2U(dVar18) >> 0x20),(float)(int)psVar9[3]) *
                     dVar23,0);
    }
    if (cVar28 == '\0') {
      *(float *)(unsigned)((int)puVar13 + 0x24) = fVar20;
    }
    else {
      *(double *)(unsigned)((int)puVar13 + 0x24) = in_xd2;
    }
    CacheBlockWriteBack(puVar13 + 4);
    if (cVar28 == '\0') {
      uVar14 = CONCAT44(*(undefined4 *)(unsigned)puVar13,SUB84(dVar15,0));
      uVar21 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar13 + 4),fVar20);
      puVar13 = puVar13 + 1;
    }
    else {
      uVar14 = *puVar13;
      uVar21 = puVar13[1];
      puVar13 = puVar13 + 2;
    }
    if (cVar28 == '\0') {
      uVar24 = *(undefined4 *)(unsigned)(puVar13 + 2);
      in_dr6 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar13 + 0x14),(int)uVar25);
      *(undefined4 *)(unsigned)((int)puVar12 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar13 + 0x14);
      *(undefined4 *)(unsigned)(puVar12 + 7) = uVar24;
      *(int *)(unsigned)((int)puVar12 + 0x34) = (int)((ulonglong)uVar21 >> 0x20);
      puVar12 = puVar12 + 6;
      *(int *)(unsigned)puVar12 = (int)((ulonglong)uVar14 >> 0x20);
    }
    else {
      uVar22 = puVar13[2];
      in_dr6 = puVar13[3];
      puVar12[7] = in_dr6;
      puVar12[6] = uVar22;
      puVar12[5] = uVar21;
      puVar12 = puVar12 + 4;
      *puVar12 = uVar14;
    }
    unaff_r8 = puVar12 + 4;
    (*(uint *)(fr0_ - 0x24)) = (*(uint *)(fr0_ - 0x24)) - 1;
  } while ((*(uint *)(fr0_ - 0x24)) != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar29;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar29;
  return puVar3;
}

__asm__(".globl _FUN_8c23f35a\n.set _FUN_8c23f35a, _FUN_8c23f35a_def\n");
