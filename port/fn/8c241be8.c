#include "../decls.h"
undefined4 FUN_8c241be8_def(int ar4,ulonglong *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *unaff_r8;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 in_dr0;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 in_fr15;
  undefined8 in_xd2;
  undefined8 in_xd14;
  undefined8 uVar16;
  undefined4 in_PR;
  char cVar17;
  char cVar18;
  
  cVar18 = '\0';
  cVar17 = '\0';
  noop_23d694(ar4,ar5,ar6,ar7,in_PR);
  iVar2 = _DAT_8c4aa510;
  iVar6 = 0;
  puVar8 = *(ushort **)(ar4 + 4);
  uVar5 = (uint)*(ushort *)(ar4 + 2);
  do {
    iVar6 = iVar6 + (*puVar8 & 0x7fff);
    iVar7 = (*puVar8 & 0x7fff) - 1;
    puVar8 = puVar8 + 1;
    uVar16 = in_xd2;
    do {
      puVar9 = puVar8;
      uVar12 = (undefined4)in_dr0;
      puVar10 = (undefined8 *)((uint)*puVar9 * 0x40 + iVar2);
      *(undefined4 *)puVar10 = 0xe0000000;
      CacheBlockWriteBack(puVar10);
      uVar3 = float_to_color_u8(puVar10,ar5,ar6,ar7);
      *(undefined4 *)(puVar10 + 5) = uVar3;
      if (cVar18 == '\0') {
        in_fr15 = 0x3f000000;
        ar5 = (ulonglong *)((int)puVar10 + 0x34);
        uVar13 = CONCAT44((int)puVar10[6],0x3f000000);
        uVar14 = CONCAT44(0x3f000000,uVar12);
      }
      else {
        uVar16 = 0xf00000003f000000;
        uVar13 = puVar10[6];
        ar5 = puVar10 + 7;
        uVar14 = uVar16;
        in_xd14 = uVar16;
      }
      if (cVar17 == '\0') {
        uVar13 = (ulonglong)
                 (uint)((float)((ulonglong)uVar14 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13
                       );
      }
      if (cVar18 == '\0') {
        *(int *)(puVar10 + 4) = (int)uVar13;
        uVar13 = CONCAT44((int)*ar5,in_fr15);
        uVar14 = CONCAT44(in_fr15,(int)uVar14);
      }
      else {
        puVar10[4] = uVar16;
        uVar13 = *ar5;
        uVar16 = in_xd14;
        uVar14 = in_xd14;
      }
      puVar11 = (undefined8 *)((int)puVar10 + 0x24);
      if (cVar17 == '\0') {
        uVar13 = (ulonglong)
                 (uint)((float)((ulonglong)uVar14 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13
                       );
      }
      if (cVar18 == '\0') {
        *(int *)puVar11 = (int)uVar13;
      }
      else {
        *puVar11 = uVar16;
      }
      CacheBlockWriteBack(puVar11);
      if (cVar18 == '\0') {
        in_dr0 = CONCAT44(*(undefined4 *)puVar10,(int)uVar14);
        uVar14 = CONCAT44(*(undefined4 *)((int)puVar10 + 4),(int)uVar13);
        puVar10 = puVar10 + 1;
      }
      else {
        in_dr0 = *puVar10;
        uVar14 = puVar10[1];
        puVar10 = puVar10 + 2;
      }
      if (cVar18 == '\0') {
        uVar3 = *(undefined4 *)(puVar10 + 2);
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)puVar10 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar3;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)uVar14 >> 0x20);
        *(int *)(unaff_r8 + 2) = (int)((ulonglong)in_dr0 >> 0x20);
        puVar10 = unaff_r8 + 2;
      }
      else {
        uVar15 = puVar10[2];
        unaff_r8[3] = puVar10[3];
        unaff_r8[2] = uVar15;
        unaff_r8[1] = uVar14;
        *unaff_r8 = in_dr0;
        puVar10 = unaff_r8;
      }
      unaff_r8 = puVar10 + 4;
      iVar7 = iVar7 + -1;
      puVar8 = puVar9 + 1;
    } while (iVar7 != 0);
    puVar8 = puVar9 + 2;
    puVar11 = (undefined8 *)((uint)puVar9[1] * 0x40 + iVar2);
    *(undefined4 *)puVar11 = 0xf0000000;
    CacheBlockWriteBack(puVar11);
    uVar3 = _DAT_8c4c11b0;
    if (cVar18 == '\0') {
      uVar3 = _DAT_8c4c11b4;
    }
    uVar4 = float_to_color_u8(puVar11,ar5,ar6,ar7);
    uVar12 = (undefined4)uVar14;
    in_xd2 = in_xd14;
    uVar14 = in_xd14;
    uVar15 = in_xd14;
    if (cVar18 == '\0') {
      in_xd2 = CONCAT44(in_fr15,uVar3);
      uVar14 = uVar16;
      uVar12 = in_fr15;
      uVar15 = CONCAT44(in_fr15,(int)in_dr0);
    }
    *(undefined4 *)(puVar11 + 5) = uVar4;
    if (cVar18 == '\0') {
      uVar13 = CONCAT44((int)puVar11[6],uVar12);
      ar5 = (ulonglong *)((int)puVar11 + 0x34);
    }
    else {
      uVar13 = puVar11[6];
      ar5 = puVar11 + 7;
    }
    if (cVar17 == '\0') {
      uVar13 = (ulonglong)
               (uint)((float)((ulonglong)uVar15 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);
    }
    uVar3 = (undefined4)((ulonglong)in_xd2 >> 0x20);
    if (cVar18 == '\0') {
      *(int *)(puVar11 + 4) = (int)uVar13;
      uVar13 = CONCAT44((int)*ar5,uVar3);
      in_xd2 = uVar14;
      uVar16 = CONCAT44(uVar3,(int)uVar15);
    }
    else {
      puVar11[4] = uVar14;
      uVar13 = *ar5;
      uVar16 = in_xd2;
    }
    puVar1 = (undefined8 *)((int)puVar11 + 0x24);
    if (cVar17 == '\0') {
      uVar13 = (ulonglong)
               (uint)((float)((ulonglong)uVar16 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);
    }
    if (cVar18 == '\0') {
      *(int *)puVar1 = (int)uVar13;
    }
    else {
      *puVar1 = in_xd2;
    }
    CacheBlockWriteBack(puVar1);
    if (cVar18 == '\0') {
      in_dr0 = CONCAT44(*(undefined4 *)puVar11,(int)uVar16);
      uVar16 = CONCAT44(*(undefined4 *)((int)puVar11 + 4),(int)uVar13);
      puVar11 = puVar11 + 1;
    }
    else {
      in_dr0 = *puVar11;
      uVar16 = puVar11[1];
      puVar11 = puVar11 + 2;
    }
    if (cVar18 == '\0') {
      uVar3 = *(undefined4 *)(puVar11 + 2);
      *(undefined4 *)((int)puVar10 + 0x3c) = *(undefined4 *)((int)puVar11 + 0x14);
      *(undefined4 *)(puVar10 + 7) = uVar3;
      *(int *)((int)puVar10 + 0x34) = (int)((ulonglong)uVar16 >> 0x20);
      puVar10 = puVar10 + 6;
      *(int *)puVar10 = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      uVar14 = puVar11[2];
      puVar10[7] = puVar11[3];
      puVar10[6] = uVar14;
      puVar10[5] = uVar16;
      puVar10 = puVar10 + 4;
      *puVar10 = in_dr0;
    }
    unaff_r8 = puVar10 + 4;
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar6;
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar6;
  return uVar4;
}

__asm__(".globl _FUN_8c241be8\n.set _FUN_8c241be8, _FUN_8c241be8_def\n");
