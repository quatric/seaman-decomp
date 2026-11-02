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
undefined4 FUN_8c240f4c_def(int ar4,short *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c240f4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *unaff_r8 = 0;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  short *psVar9;
  short *psVar10;
  ushort *puVar11;
  ushort *puVar12;
  undefined8 in_dr0 = 0;
  float fVar13;
  float fVar14;
  undefined8 in_dr2 = 0;
  undefined4 uVar16;
  double dVar15;
  undefined8 uVar17;
  undefined4 in_fr15 = 0;
  undefined8 in_xd2 = 0;
  double in_xd14 = 0;
  double dVar19;
  char cVar20;
  char cVar21;
  undefined4 uVar18;
  
  cVar21 = '\0';
  cVar20 = '\0';
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  iVar5 = 0;
  uVar2 = (uint)*(ushort *)(unsigned)(ar4 + 2);
  psVar9 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
  puVar11 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  do {
    iVar5 = iVar5 + (*puVar11 & 0x7fff);
    iVar6 = (*puVar11 & 0x7fff) - 1;
    puVar11 = puVar11 + 1;
    do {
      puVar12 = puVar11;
      psVar10 = psVar9;
      uVar4 = (undefined4)in_dr0;
      uVar16 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      puVar7 = (undefined8 *)(unsigned)((uint)*puVar12 * 0x40 + iVar1);
      *(undefined4 *)(unsigned)puVar7 = 0xe0000000;
      CacheBlockWriteBack(puVar7);
      uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
      if (cVar21 == '\0') {
        uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 36)), float_to_color_u8(puVar7,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(puVar7 + 5) = uVar3;
      ar5 = psVar10 + 1;
      if (cVar21 == '\0') {
        in_fr15 = 0x3b800000;
        dVar19 = CONCAT44D(0x3b800000,uVar18);
      }
      else {
        dVar19 = -3.105036872847508e+231;
        in_xd14 = dVar19;
      }
      fVar13 = F32HI(dVar19);
      if (cVar20 == '\0') {
        dVar15 = CONCAT44D(uVar16,(float)(int)*psVar10 * fVar13);
      }
      else {
        dVar15 = CONCAT44D(uVar16,(float)(int)*psVar10) * dVar19;
      }
      if (cVar21 == '\0') {
        *(int *)(unsigned)(puVar7 + 4) = SUB84(dVar15,0);
      }
      else {
        puVar7[4] = in_xd2;
      }
      if (cVar20 == '\0') {
        fVar13 = (float)(int)*ar5 * fVar13;
      }
      else {
        fVar13 = SUB84(CONCAT44D((int)(D2U(dVar15) >> 0x20),(float)(int)*ar5) * dVar19,
                       0);
      }
      if (cVar21 == '\0') {
        *(float *)(unsigned)((int)puVar7 + 0x24) = fVar13;
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar7 + 0x24) = in_xd2;
      }
      CacheBlockWriteBack(puVar7 + 4);
      if (cVar21 == '\0') {
        in_dr0 = CONCAT44(*(undefined4 *)(unsigned)puVar7,uVar4);
        in_dr2 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar7 + 4),fVar13);
        puVar7 = puVar7 + 1;
      }
      else {
        in_dr0 = *puVar7;
        in_dr2 = puVar7[1];
        puVar7 = puVar7 + 2;
      }
      if (cVar21 == '\0') {
        uVar18 = *(undefined4 *)(unsigned)(puVar7 + 2);
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar7 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar18;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
        *(int *)(unsigned)(unaff_r8 + 2) = (int)((ulonglong)in_dr0 >> 0x20);
        puVar7 = unaff_r8 + 2;
      }
      else {
        uVar17 = puVar7[2];
        unaff_r8[3] = puVar7[3];
        unaff_r8[2] = uVar17;
        unaff_r8[1] = in_dr2;
        *unaff_r8 = in_dr0;
        puVar7 = unaff_r8;
      }
      unaff_r8 = puVar7 + 4;
      iVar6 = iVar6 + -1;
      psVar9 = psVar10 + 2;
      puVar11 = puVar12 + 1;
    } while (iVar6 != 0);
    puVar11 = puVar12 + 2;
    puVar8 = (undefined8 *)(unsigned)((uint)puVar12[1] * 0x40 + iVar1);
    *(undefined4 *)(unsigned)puVar8 = 0xf0000000;
    CacheBlockWriteBack(puVar8);
    uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
    if (cVar21 == '\0') {
      uVar18 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
    }
    uVar4 = (vsp = ((unsigned long)(fr0_ - 36)), float_to_color_u8(puVar8,ar5,ar6,ar7));
    dVar19 = in_xd14;
    if (cVar21 == '\0') {
      dVar19 = CONCAT44D(in_fr15,uVar18);
    }
    *(undefined4 *)(unsigned)(puVar8 + 5) = uVar4;
    ar5 = psVar10 + 3;
    psVar9 = psVar10 + 4;
    uVar18 = (undefined4)((ulonglong)in_dr2 >> 0x20);
    fVar13 = (float)(int)psVar10[2];
    fVar14 = F32HI(dVar19);
    if (cVar20 == '\0') {
      dVar15 = CONCAT44D(uVar18,fVar13 * fVar14);
    }
    else {
      dVar15 = CONCAT44D(uVar18,fVar13) * dVar19;
    }
    if (cVar21 == '\0') {
      *(int *)(unsigned)(puVar8 + 4) = SUB84(dVar15,0);
    }
    else {
      puVar8[4] = in_xd2;
    }
    if (cVar20 == '\0') {
      fVar14 = (float)(int)*ar5 * fVar14;
    }
    else {
      fVar14 = SUB84(CONCAT44D((int)(D2U(dVar15) >> 0x20),(float)(int)*ar5) * dVar19,0)
      ;
    }
    if (cVar21 == '\0') {
      *(float *)(unsigned)((int)puVar8 + 0x24) = fVar14;
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar8 + 0x24) = in_xd2;
    }
    CacheBlockWriteBack(puVar8 + 4);
    if (cVar21 == '\0') {
      in_dr0 = CONCAT44(*(undefined4 *)(unsigned)puVar8,(int)in_dr0);
      in_dr2 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar8 + 4),fVar14);
      puVar8 = puVar8 + 1;
    }
    else {
      in_dr0 = *puVar8;
      in_dr2 = puVar8[1];
      puVar8 = puVar8 + 2;
    }
    if (cVar21 == '\0') {
      uVar18 = *(undefined4 *)(unsigned)(puVar8 + 2);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar8 + 0x14);
      *(undefined4 *)(unsigned)(puVar7 + 7) = uVar18;
      *(int *)(unsigned)((int)puVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
      puVar7 = puVar7 + 6;
      *(int *)(unsigned)puVar7 = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      uVar17 = puVar8[2];
      puVar7[7] = puVar8[3];
      puVar7[6] = uVar17;
      puVar7[5] = in_dr2;
      puVar7 = puVar7 + 4;
      *puVar7 = in_dr0;
    }
    unaff_r8 = puVar7 + 4;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar5;
  return uVar4;
}

__asm__(".globl _FUN_8c240f4c\n.set _FUN_8c240f4c, _FUN_8c240f4c_def\n");
