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
undefined4 * FUN_8c24149e_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c24149e";
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
  int iVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  double dVar15;
  ulonglong uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 in_dr6 = 0;
  ulonglong uVar22;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd2 = 0;
  double in_xd14 = 0;
  bool bVar23;
  char cVar24;
  char cVar25;
  undefined4 uVar21;
  
  cVar25 = '\0';
  cVar24 = '\0';
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  iVar8 = 0;
  puVar11 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  (*(uint *)(fr0_ - 0x24)) = (uint)*(ushort *)(unsigned)(ar4 + 2);
  do {
    iVar8 = iVar8 + (*puVar11 & 0x7fff);
    iVar10 = (*puVar11 & 0x7fff) - 1;
    puVar11 = puVar11 + 1;
    do {
      puVar12 = puVar11;
      puVar13 = (undefined8 *)(unsigned)((uint)*puVar12 * 0x40 + iVar2);
      if (cVar25 == '\0') {
        uVar14 = CONCAT44(*(undefined4 *)(unsigned)(puVar13 + 2),*(undefined4 *)(unsigned)((int)puVar13 + 0x14));
        uVar16 = (ulonglong)*(uint *)(unsigned)(puVar13 + 3) << 0x20;
        uVar18 = CONCAT44(*(undefined4 *)(unsigned)(puVar13 + 6),*(undefined4 *)(unsigned)((int)puVar13 + 0x34));
        uVar22 = CONCAT44(*(undefined4 *)(unsigned)(puVar13 + 7),(int)in_dr6);
      }
      else {
        uVar14 = puVar13[2];
        uVar16 = puVar13[4];
        uVar18 = puVar13[6];
        uVar22 = puVar13[8];
      }
      uVar16 = uVar16 & 0xffffffff00000000;
                    
      if (cVar24 == '\0') {
        fVar17 = (float)uVar14 * (float)uVar18 +
                 F32HI(uVar14) * F32HI(uVar18) +
                 (float)uVar22 * 0.0 + (float)(uVar16 >> 0x20) * (float)(uVar22 >> 0x20);
      }
      dVar20 = in_xd2;
      dVar15 = in_xd2;
      if (cVar25 == '\0') {
        in_fr15 = (float)uVar16;
        dVar20 = in_xd14;
        dVar15 = CONCAT44D(in_fr15,(float)uVar14);
      }
      uVar21 = SUB84(dVar15,0);
      if (cVar24 == '\0') {
        bVar23 = 0.0 < in_fr15;
      }
      else {
        bVar23 = (double)(uVar16 & 0xffffffff00000000) < CONCAT44D(in_fr14,in_fr15);
      }
      uVar9 = 0x8000;
      if (!bVar23) {
        uVar9 = 0;
      }
      *(undefined4 *)(unsigned)puVar13 = 0xe0000000;
      CacheBlockWriteBack(puVar13);
      if (*(uint *)(unsigned)((int)puVar13 + 0x3c) != (ar5 | uVar9)) {
        *(uint *)(unsigned)((int)puVar13 + 0x3c) = ar5 | uVar9;
        puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
        puVar7 = puVar13 + 6;
        puVar6 = puVar13 + 2;
        (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar6,puVar7,uVar9));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 36)), float_to_color_u8(puVar5,puVar6,puVar7,uVar9));
        *(undefined4 *)(unsigned)(puVar13 + 5) = uVar3;
        if (cVar25 == '\0') {
          uVar22 = (ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
        }
        else {
          uVar22 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 36)), float_to_color_u8(puVar5,puVar6,puVar7,uVar9));
        *(undefined4 *)(unsigned)((int)puVar13 + 0x2c) = uVar3;
      }
      puVar4 = ((undefined4 *)(unsigned)0x8c24164c);
      if (cVar25 == '\0') {
        in_fr15 = 0.5;
        puVar6 = (undefined8 *)(unsigned)((int)puVar13 + 0x34);
        uVar14 = CONCAT44(*(undefined4 *)(unsigned)(puVar13 + 6),0x3f000000);
        dVar15 = CONCAT44D(0x3f000000,uVar21);
        in_xd14 = dVar20;
      }
      else {
        in_xd2 = -3.105036913332572e+231;
        uVar14 = puVar13[6];
        puVar6 = puVar13 + 7;
        dVar15 = in_xd2;
        in_xd14 = in_xd2;
      }
      if (cVar24 == '\0') {
        fVar17 = F32HI(uVar14);
        uVar14 = CONCAT44(fVar17,F32HI(dVar15) * fVar17 + (float)uVar14);
      }
      if (cVar25 == '\0') {
        *(int *)(unsigned)(puVar13 + 4) = (int)uVar14;
        uVar14 = CONCAT44(*(undefined4 *)(unsigned)puVar6,in_fr15);
        dVar15 = CONCAT44D(in_fr15,SUB84(dVar15,0));
      }
      else {
        puVar13[4] = in_xd2;
        uVar14 = *puVar6;
        in_xd2 = in_xd14;
        dVar15 = in_xd14;
      }
      pdVar1 = (double *)(unsigned)((int)puVar13 + 0x24);
      if (cVar24 == '\0') {
        fVar17 = F32HI(uVar14);
        uVar14 = CONCAT44(fVar17,F32HI(dVar15) * fVar17 + (float)uVar14);
      }
      if (cVar25 == '\0') {
        *(int *)(unsigned)pdVar1 = (int)uVar14;
      }
      else {
        *pdVar1 = in_xd2;
      }
      CacheBlockWriteBack(pdVar1);
      if (cVar25 == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)(unsigned)puVar13,SUB84(dVar15,0));
        uVar14 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar13 + 4),(int)uVar14);
        puVar13 = puVar13 + 1;
      }
      else {
        uVar18 = *puVar13;
        uVar14 = puVar13[1];
        puVar13 = puVar13 + 2;
      }
      if (cVar25 == '\0') {
        uVar21 = *(undefined4 *)(unsigned)(puVar13 + 2);
        in_dr6 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar13 + 0x14),(int)uVar22);
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar13 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar21;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)uVar14 >> 0x20);
        *(int *)(unsigned)(unaff_r8 + 2) = (int)((ulonglong)uVar18 >> 0x20);
        puVar13 = unaff_r8 + 2;
      }
      else {
        uVar19 = puVar13[2];
        in_dr6 = puVar13[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = uVar19;
        unaff_r8[1] = uVar14;
        *unaff_r8 = uVar18;
        puVar13 = unaff_r8;
      }
      unaff_r8 = puVar13 + 4;
      iVar10 = iVar10 + -1;
      puVar11 = puVar12 + 1;
    } while (iVar10 != 0);
    puVar11 = puVar12 + 2;
    puVar6 = (undefined8 *)(unsigned)((uint)puVar12[1] * 0x40 + iVar2);
    if (cVar25 == '\0') {
      uVar14 = CONCAT44(*(undefined4 *)(unsigned)(puVar6 + 2),*(undefined4 *)(unsigned)((int)puVar6 + 0x14));
      uVar16 = (ulonglong)*(uint *)(unsigned)(puVar6 + 3) << 0x20;
      uVar18 = CONCAT44(*(undefined4 *)(unsigned)(puVar6 + 6),*(undefined4 *)(unsigned)((int)puVar6 + 0x34));
      uVar22 = CONCAT44(*(undefined4 *)(unsigned)(puVar6 + 7),(int)in_dr6);
    }
    else {
      uVar14 = puVar6[2];
      uVar16 = puVar6[4];
      uVar18 = puVar6[6];
      uVar22 = puVar6[8];
    }
    uVar16 = uVar16 & 0xffffffff00000000;
                    
    if (cVar24 == '\0') {
      fVar17 = (float)uVar14 * (float)uVar18 +
               F32HI(uVar14) * F32HI(uVar18) +
               (float)uVar22 * 0.0 + (float)(uVar16 >> 0x20) * (float)(uVar22 >> 0x20);
    }
    dVar15 = in_xd2;
    if (cVar25 == '\0') {
      dVar15 = CONCAT44D((int)uVar16,(float)uVar14);
    }
    dVar20 = dVar15;
    if (cVar25 == '\0') {
      dVar20 = CONCAT44D((int)(D2U(dVar15) >> 0x20),(float)uVar18);
    }
    if (cVar24 == '\0') {
      bVar23 = 0.0 < F32HI(dVar20);
    }
    else {
      bVar23 = (double)(uVar16 & 0xffffffff00000000) < dVar20;
    }
    uVar9 = 0x8000;
    if (!bVar23) {
      uVar9 = 0;
    }
    *(undefined4 *)(unsigned)puVar6 = 0xf0000000;
    CacheBlockWriteBack(puVar6);
    if (*(uint *)(unsigned)((int)puVar6 + 0x3c) != (ar5 | uVar9)) {
      *(uint *)(unsigned)((int)puVar6 + 0x3c) = ar5 | uVar9;
      puVar5 = ((undefined1 *)(unsigned)0x8c4c2620);
      ar6_00 = puVar6 + 6;
      puVar7 = puVar6 + 2;
      (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c23bae2(((undefined1 *)(unsigned)0x8c4c2620),puVar7,ar6_00,uVar9));
      uVar21 = (vsp = ((unsigned long)(fr0_ - 36)), float_to_color_u8(puVar5,puVar7,ar6_00,uVar9));
      *(undefined4 *)(unsigned)(puVar6 + 5) = uVar21;
      if (cVar25 == '\0') {
        uVar22 = (ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4c263c);
      }
      else {
        uVar22 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c263c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c2638));
      }
      puVar4 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 36)), float_to_color_u8(puVar5,puVar7,ar6_00,uVar9));
      *(unsigned *)(unsigned)((int)puVar6 + 0x2c) = puVar4;
    }
    if (cVar25 == '\0') {
      puVar7 = (undefined8 *)(unsigned)((int)puVar6 + 0x34);
      uVar14 = CONCAT44(*(undefined4 *)(unsigned)(puVar6 + 6),in_fr15);
      dVar15 = CONCAT44D(in_fr15,SUB84(dVar15,0));
    }
    else {
      uVar14 = puVar6[6];
      puVar7 = puVar6 + 7;
      dVar15 = in_xd14;
      in_xd2 = in_xd14;
    }
    if (cVar24 == '\0') {
      fVar17 = F32HI(uVar14);
      uVar14 = CONCAT44(fVar17,F32HI(dVar15) * fVar17 + (float)uVar14);
    }
    if (cVar25 == '\0') {
      *(int *)(unsigned)(puVar6 + 4) = (int)uVar14;
      uVar14 = CONCAT44(*(undefined4 *)(unsigned)puVar7,in_fr15);
      dVar15 = CONCAT44D(in_fr15,SUB84(dVar15,0));
    }
    else {
      puVar6[4] = in_xd2;
      uVar14 = *puVar7;
      in_xd2 = in_xd14;
      dVar15 = in_xd14;
    }
    pdVar1 = (double *)(unsigned)((int)puVar6 + 0x24);
    if (cVar24 == '\0') {
      fVar17 = F32HI(uVar14);
      uVar14 = CONCAT44(fVar17,F32HI(dVar15) * fVar17 + (float)uVar14);
    }
    if (cVar25 == '\0') {
      *(int *)(unsigned)pdVar1 = (int)uVar14;
    }
    else {
      *pdVar1 = in_xd2;
    }
    CacheBlockWriteBack(pdVar1);
    if (cVar25 == '\0') {
      uVar18 = CONCAT44(*(undefined4 *)(unsigned)puVar6,SUB84(dVar15,0));
      uVar14 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar6 + 4),(int)uVar14);
      puVar6 = puVar6 + 1;
    }
    else {
      uVar18 = *puVar6;
      uVar14 = puVar6[1];
      puVar6 = puVar6 + 2;
    }
    if (cVar25 == '\0') {
      uVar21 = *(undefined4 *)(unsigned)(puVar6 + 2);
      in_dr6 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar6 + 0x14),(int)uVar22);
      *(undefined4 *)(unsigned)((int)puVar13 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar6 + 0x14);
      *(undefined4 *)(unsigned)(puVar13 + 7) = uVar21;
      *(int *)(unsigned)((int)puVar13 + 0x34) = (int)((ulonglong)uVar14 >> 0x20);
      puVar13 = puVar13 + 6;
      *(int *)(unsigned)puVar13 = (int)((ulonglong)uVar18 >> 0x20);
    }
    else {
      uVar19 = puVar6[2];
      in_dr6 = puVar6[3];
      puVar13[7] = in_dr6;
      puVar13[6] = uVar19;
      puVar13[5] = uVar14;
      puVar13 = puVar13 + 4;
      *puVar13 = uVar18;
    }
    unaff_r8 = puVar13 + 4;
    (*(uint *)(fr0_ - 0x24)) = (*(uint *)(fr0_ - 0x24)) - 1;
  } while ((*(uint *)(fr0_ - 0x24)) != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar8;
  return puVar4;
}

__asm__(".globl _FUN_8c24149e\n.set _FUN_8c24149e, _FUN_8c24149e_def\n");
