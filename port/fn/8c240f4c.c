#include "../decls.h"
undefined4 FUN_8c240f4c_def(int ar4,short *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *unaff_r8;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  short *psVar9;
  short *psVar10;
  ushort *puVar11;
  ushort *puVar12;
  undefined8 in_dr0;
  float fVar13;
  float fVar14;
  undefined8 in_dr2;
  undefined4 uVar16;
  double dVar15;
  undefined8 uVar17;
  undefined4 in_fr15;
  undefined8 in_xd2;
  double in_xd14;
  double dVar19;
  char cVar20;
  char cVar21;
  undefined4 in_stack_ffffffdc;
  undefined4 uVar18;
  
  cVar21 = '\0';
  cVar20 = '\0';
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffdc);
  iVar1 = _DAT_8c4aa510;
  iVar5 = 0;
  uVar2 = (uint)*(ushort *)(ar4 + 2);
  psVar9 = *(short **)(ar4 + 0x14);
  puVar11 = *(ushort **)(ar4 + 4);
  do {
    iVar5 = iVar5 + (*puVar11 & 0x7fff);
    iVar6 = (*puVar11 & 0x7fff) - 1;
    puVar11 = puVar11 + 1;
    do {
      puVar12 = puVar11;
      psVar10 = psVar9;
      uVar4 = (undefined4)in_dr0;
      uVar16 = (undefined4)((ulonglong)in_dr2 >> 0x20);
      puVar7 = (undefined8 *)((uint)*puVar12 * 0x40 + iVar1);
      *(undefined4 *)puVar7 = 0xe0000000;
      CacheBlockWriteBack(puVar7);
      uVar18 = _DAT_8c4c11b0;
      if (cVar21 == '\0') {
        uVar18 = _DAT_8c4c11b4;
      }
      uVar3 = float_to_color_u8(puVar7,ar5,ar6,ar7);
      *(undefined4 *)(puVar7 + 5) = uVar3;
      ar5 = psVar10 + 1;
      if (cVar21 == '\0') {
        in_fr15 = 0x3b800000;
        dVar19 = (double)CONCAT44(0x3b800000,uVar18);
      }
      else {
        dVar19 = -3.105036872847508e+231;
        in_xd14 = dVar19;
      }
      fVar13 = (float)((ulonglong)dVar19 >> 0x20);
      if (cVar20 == '\0') {
        dVar15 = (double)CONCAT44(uVar16,(float)(int)*psVar10 * fVar13);
      }
      else {
        dVar15 = (double)CONCAT44(uVar16,(float)(int)*psVar10) * dVar19;
      }
      if (cVar21 == '\0') {
        *(int *)(puVar7 + 4) = SUB84(dVar15,0);
      }
      else {
        puVar7[4] = in_xd2;
      }
      if (cVar20 == '\0') {
        fVar13 = (float)(int)*ar5 * fVar13;
      }
      else {
        fVar13 = SUB84((double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),(float)(int)*ar5) * dVar19,
                       0);
      }
      if (cVar21 == '\0') {
        *(float *)((int)puVar7 + 0x24) = fVar13;
      }
      else {
        *(undefined8 *)((int)puVar7 + 0x24) = in_xd2;
      }
      CacheBlockWriteBack(puVar7 + 4);
      if (cVar21 == '\0') {
        in_dr0 = CONCAT44(*(undefined4 *)puVar7,uVar4);
        in_dr2 = CONCAT44(*(undefined4 *)((int)puVar7 + 4),fVar13);
        puVar7 = puVar7 + 1;
      }
      else {
        in_dr0 = *puVar7;
        in_dr2 = puVar7[1];
        puVar7 = puVar7 + 2;
      }
      if (cVar21 == '\0') {
        uVar18 = *(undefined4 *)(puVar7 + 2);
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)puVar7 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar18;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
        *(int *)(unaff_r8 + 2) = (int)((ulonglong)in_dr0 >> 0x20);
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
    puVar8 = (undefined8 *)((uint)puVar12[1] * 0x40 + iVar1);
    *(undefined4 *)puVar8 = 0xf0000000;
    CacheBlockWriteBack(puVar8);
    uVar18 = _DAT_8c4c11b0;
    if (cVar21 == '\0') {
      uVar18 = _DAT_8c4c11b4;
    }
    uVar4 = float_to_color_u8(puVar8,ar5,ar6,ar7);
    dVar19 = in_xd14;
    if (cVar21 == '\0') {
      dVar19 = (double)CONCAT44(in_fr15,uVar18);
    }
    *(undefined4 *)(puVar8 + 5) = uVar4;
    ar5 = psVar10 + 3;
    psVar9 = psVar10 + 4;
    uVar18 = (undefined4)((ulonglong)in_dr2 >> 0x20);
    fVar13 = (float)(int)psVar10[2];
    fVar14 = (float)((ulonglong)dVar19 >> 0x20);
    if (cVar20 == '\0') {
      dVar15 = (double)CONCAT44(uVar18,fVar13 * fVar14);
    }
    else {
      dVar15 = (double)CONCAT44(uVar18,fVar13) * dVar19;
    }
    if (cVar21 == '\0') {
      *(int *)(puVar8 + 4) = SUB84(dVar15,0);
    }
    else {
      puVar8[4] = in_xd2;
    }
    if (cVar20 == '\0') {
      fVar14 = (float)(int)*ar5 * fVar14;
    }
    else {
      fVar14 = SUB84((double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),(float)(int)*ar5) * dVar19,0)
      ;
    }
    if (cVar21 == '\0') {
      *(float *)((int)puVar8 + 0x24) = fVar14;
    }
    else {
      *(undefined8 *)((int)puVar8 + 0x24) = in_xd2;
    }
    CacheBlockWriteBack(puVar8 + 4);
    if (cVar21 == '\0') {
      in_dr0 = CONCAT44(*(undefined4 *)puVar8,(int)in_dr0);
      in_dr2 = CONCAT44(*(undefined4 *)((int)puVar8 + 4),fVar14);
      puVar8 = puVar8 + 1;
    }
    else {
      in_dr0 = *puVar8;
      in_dr2 = puVar8[1];
      puVar8 = puVar8 + 2;
    }
    if (cVar21 == '\0') {
      uVar18 = *(undefined4 *)(puVar8 + 2);
      *(undefined4 *)((int)puVar7 + 0x3c) = *(undefined4 *)((int)puVar8 + 0x14);
      *(undefined4 *)(puVar7 + 7) = uVar18;
      *(int *)((int)puVar7 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
      puVar7 = puVar7 + 6;
      *(int *)puVar7 = (int)((ulonglong)in_dr0 >> 0x20);
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
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar5;
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar5;
  return uVar4;
}

__asm__(".globl _FUN_8c240f4c\n.set _FUN_8c240f4c, _FUN_8c240f4c_def\n");
