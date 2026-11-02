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
int FUN_8c2420fe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2420fe";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined8 *unaff_r8 = 0;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 in_dr0 = 0;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar13;
  undefined4 uVar12;
  
  cVar13 = '\0';
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_23d694(ar4,ar5,ar6,ar7); });
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
  iVar4 = 0;
  puVar6 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  uVar3 = (uint)*(ushort *)(unsigned)(ar4 + 2);
  do {
    iVar4 = iVar4 + (*puVar6 & 0x7fff);
    iVar5 = (*puVar6 & 0x7fff) - 1;
    puVar7 = puVar6 + 1;
    do {
      puVar6 = puVar7;
      puVar7 = puVar6 + 1;
      uVar1 = *puVar7;
      puVar8 = (undefined8 *)(unsigned)((uint)*puVar6 * 0x40 + iVar2);
      *(undefined4 *)(unsigned)puVar8 = 0xe0000000;
      CacheBlockWriteBack(puVar8);
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(puVar8 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        *(undefined4 *)(unsigned)((int)puVar8 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        uVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        *(undefined4 *)(unsigned)(puVar8 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        uVar10 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar12);
        *(undefined4 *)(unsigned)((int)puVar8 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
      }
      else {
        puVar8[4] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
        *(ulonglong *)(unsigned)((int)puVar8 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
        puVar8[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
        uVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
        *(undefined8 *)(unsigned)((int)puVar8 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
      }
      CacheBlockWriteBack((undefined4 *)(unsigned)((int)puVar8 + 0x2c));
      if (cVar13 == '\0') {
        in_dr0 = CONCAT44(*(undefined4 *)(unsigned)puVar8,(int)in_dr0);
        uVar10 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar8 + 4),(int)uVar10);
        puVar8 = puVar8 + 1;
      }
      else {
        in_dr0 = *puVar8;
        uVar10 = puVar8[1];
        puVar8 = puVar8 + 2;
      }
      if (cVar13 == '\0') {
        uVar12 = *(undefined4 *)(unsigned)(puVar8 + 2);
        *(undefined4 *)(unsigned)((int)unaff_r8 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar8 + 0x14);
        *(undefined4 *)(unsigned)(unaff_r8 + 3) = uVar12;
        *(int *)(unsigned)((int)unaff_r8 + 0x14) = (int)((ulonglong)uVar10 >> 0x20);
        *(int *)(unsigned)(unaff_r8 + 2) = (int)((ulonglong)in_dr0 >> 0x20);
        puVar8 = unaff_r8 + 2;
      }
      else {
        uVar11 = puVar8[2];
        unaff_r8[3] = puVar8[3];
        unaff_r8[2] = uVar11;
        unaff_r8[1] = uVar10;
        *unaff_r8 = in_dr0;
        puVar8 = unaff_r8;
      }
      unaff_r8 = puVar8 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar6 = puVar6 + 2;
    puVar9 = (undefined8 *)(unsigned)((uint)*puVar7 * 0x40 + iVar2);
    *(undefined4 *)(unsigned)puVar9 = 0xf0000000;
    CacheBlockWriteBack(puVar9);
    if (cVar13 == '\0') {
      *(undefined4 *)(unsigned)(puVar9 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x24) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
      uVar12 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
      *(undefined4 *)(unsigned)(puVar9 + 5) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
      uVar10 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),uVar12);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
    }
    else {
      puVar9[4] = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
      *(ulonglong *)(unsigned)((int)puVar9 + 0x24) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8));
      puVar9[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0);
      uVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
      *(undefined8 *)(unsigned)((int)puVar9 + 0x2c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8);
    }
    CacheBlockWriteBack((undefined4 *)(unsigned)((int)puVar9 + 0x2c));
    if (cVar13 == '\0') {
      in_dr0 = CONCAT44(*(undefined4 *)(unsigned)puVar9,(int)in_dr0);
      uVar10 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar9 + 4),(int)uVar10);
      puVar9 = puVar9 + 1;
    }
    else {
      in_dr0 = *puVar9;
      uVar10 = puVar9[1];
      puVar9 = puVar9 + 2;
    }
    if (cVar13 == '\0') {
      uVar12 = *(undefined4 *)(unsigned)(puVar9 + 2);
      *(undefined4 *)(unsigned)((int)puVar8 + 0x3c) = *(undefined4 *)(unsigned)((int)puVar9 + 0x14);
      *(undefined4 *)(unsigned)(puVar8 + 7) = uVar12;
      *(int *)(unsigned)((int)puVar8 + 0x34) = (int)((ulonglong)uVar10 >> 0x20);
      puVar8 = puVar8 + 6;
      *(int *)(unsigned)puVar8 = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      uVar11 = puVar9[2];
      puVar8[7] = puVar9[3];
      puVar8[6] = uVar11;
      puVar8[5] = uVar10;
      puVar8 = puVar8 + 4;
      *puVar8 = in_dr0;
    }
    unaff_r8 = puVar8 + 4;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar4;
  return (uint)uVar1 * 0x40 + iVar2 + 0x20;
}

__asm__(".globl _FUN_8c2420fe\n.set _FUN_8c2420fe, _FUN_8c2420fe_def\n");
