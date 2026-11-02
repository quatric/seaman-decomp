#include "../decls.h"
undefined4 * FUN_8c24149e_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *ar6_00;
  undefined8 *unaff_r8;
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
  undefined8 in_dr6;
  ulonglong uVar22;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd2;
  double in_xd14;
  bool bVar23;
  char cVar24;
  char cVar25;
  uint uStack_24;
  undefined4 uVar21;
  
  cVar25 = '\0';
  cVar24 = '\0';
  noop_23d694(ar4,ar5,ar6,ar7,ar5);
  iVar2 = _DAT_8c4aa510;
  iVar8 = 0;
  puVar11 = *(ushort **)(ar4 + 4);
  uStack_24 = (uint)*(ushort *)(ar4 + 2);
  do {
    iVar8 = iVar8 + (*puVar11 & 0x7fff);
    iVar10 = (*puVar11 & 0x7fff) - 1;
    puVar11 = puVar11 + 1;
    do {
      puVar12 = puVar11;
      puVar13 = (undefined8 *)((uint)*puVar12 * 0x40 + iVar2);
      if (cVar25 == '\0') {
        uVar14 = CONCAT44(*(undefined4 *)(puVar13 + 2),*(undefined4 *)((int)puVar13 + 0x14));
        uVar16 = (ulonglong)*(uint *)(puVar13 + 3) << 0x20;
        uVar18 = CONCAT44(*(undefined4 *)(puVar13 + 6),*(undefined4 *)((int)puVar13 + 0x34));
        uVar22 = CONCAT44(*(undefined4 *)(puVar13 + 7),(int)in_dr6);
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
                 (float)((ulonglong)uVar14 >> 0x20) * (float)((ulonglong)uVar18 >> 0x20) +
                 (float)uVar22 * 0.0 + (float)(uVar16 >> 0x20) * (float)(uVar22 >> 0x20);
      }
      dVar20 = in_xd2;
      dVar15 = in_xd2;
      if (cVar25 == '\0') {
        in_fr15 = (float)uVar16;
        dVar20 = in_xd14;
        dVar15 = (double)CONCAT44(in_fr15,(float)uVar14);
      }
      uVar21 = SUB84(dVar15,0);
      if (cVar24 == '\0') {
        bVar23 = 0.0 < in_fr15;
      }
      else {
        bVar23 = (double)(uVar16 & 0xffffffff00000000) < (double)CONCAT44(in_fr14,in_fr15);
      }
      uVar9 = 0x8000;
      if (!bVar23) {
        uVar9 = 0;
      }
      *(undefined4 *)puVar13 = 0xe0000000;
      CacheBlockWriteBack(puVar13);
      if (*(uint *)((int)puVar13 + 0x3c) != (ar5 | uVar9)) {
        *(uint *)((int)puVar13 + 0x3c) = ar5 | uVar9;
        puVar5 = &DAT_8c4c2620;
        puVar7 = puVar13 + 6;
        puVar6 = puVar13 + 2;
        FUN_8c23bae2(&DAT_8c4c2620,puVar6,puVar7,uVar9);
        uVar3 = float_to_color_u8(puVar5,puVar6,puVar7,uVar9);
        *(undefined4 *)(puVar13 + 5) = uVar3;
        if (cVar25 == '\0') {
          uVar22 = (ulonglong)_DAT_8c4c263c;
        }
        else {
          uVar22 = CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
        }
        uVar3 = float_to_color_u8(puVar5,puVar6,puVar7,uVar9);
        *(undefined4 *)((int)puVar13 + 0x2c) = uVar3;
      }
      puVar4 = &DAT_8c24164c;
      if (cVar25 == '\0') {
        in_fr15 = 0.5;
        puVar6 = (undefined8 *)((int)puVar13 + 0x34);
        uVar14 = CONCAT44(*(undefined4 *)(puVar13 + 6),0x3f000000);
        dVar15 = (double)CONCAT44(0x3f000000,uVar21);
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
        fVar17 = (float)((ulonglong)uVar14 >> 0x20);
        uVar14 = CONCAT44(fVar17,(float)((ulonglong)dVar15 >> 0x20) * fVar17 + (float)uVar14);
      }
      if (cVar25 == '\0') {
        *(int *)(puVar13 + 4) = (int)uVar14;
        uVar14 = CONCAT44(*(undefined4 *)puVar6,in_fr15);
        dVar15 = (double)CONCAT44(in_fr15,SUB84(dVar15,0));
      }
      else {
        puVar13[4] = in_xd2;
        uVar14 = *puVar6;
        in_xd2 = in_xd14;
        dVar15 = in_xd14;
      }
      pdVar1 = (double *)((int)puVar13 + 0x24);
      if (cVar24 == '\0') {
        fVar17 = (float)((ulonglong)uVar14 >> 0x20);
        uVar14 = CONCAT44(fVar17,(float)((ulonglong)dVar15 >> 0x20) * fVar17 + (float)uVar14);
      }
      if (cVar25 == '\0') {
        *(int *)pdVar1 = (int)uVar14;
      }
      else {
        *pdVar1 = in_xd2;
      }
      CacheBlockWriteBack(pdVar1);
      if (cVar25 == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)puVar13,SUB84(dVar15,0));
        uVar14 = CONCAT44(*(undefined4 *)((int)puVar13 + 4),(int)uVar14);
        puVar13 = puVar13 + 1;
      }
      else {
        uVar18 = *puVar13;
        uVar14 = puVar13[1];
        puVar13 = puVar13 + 2;
      }
      if (cVar25 == '\0') {
        uVar21 = *(undefined4 *)(puVar13 + 2);
        in_dr6 = CONCAT44(*(undefined4 *)((int)puVar13 + 0x14),(int)uVar22);
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)puVar13 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar21;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)uVar14 >> 0x20);
        *(int *)(unaff_r8 + 2) = (int)((ulonglong)uVar18 >> 0x20);
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
    puVar6 = (undefined8 *)((uint)puVar12[1] * 0x40 + iVar2);
    if (cVar25 == '\0') {
      uVar14 = CONCAT44(*(undefined4 *)(puVar6 + 2),*(undefined4 *)((int)puVar6 + 0x14));
      uVar16 = (ulonglong)*(uint *)(puVar6 + 3) << 0x20;
      uVar18 = CONCAT44(*(undefined4 *)(puVar6 + 6),*(undefined4 *)((int)puVar6 + 0x34));
      uVar22 = CONCAT44(*(undefined4 *)(puVar6 + 7),(int)in_dr6);
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
               (float)((ulonglong)uVar14 >> 0x20) * (float)((ulonglong)uVar18 >> 0x20) +
               (float)uVar22 * 0.0 + (float)(uVar16 >> 0x20) * (float)(uVar22 >> 0x20);
    }
    dVar15 = in_xd2;
    if (cVar25 == '\0') {
      dVar15 = (double)CONCAT44((int)uVar16,(float)uVar14);
    }
    dVar20 = dVar15;
    if (cVar25 == '\0') {
      dVar20 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),(float)uVar18);
    }
    if (cVar24 == '\0') {
      bVar23 = 0.0 < (float)((ulonglong)dVar20 >> 0x20);
    }
    else {
      bVar23 = (double)(uVar16 & 0xffffffff00000000) < dVar20;
    }
    uVar9 = 0x8000;
    if (!bVar23) {
      uVar9 = 0;
    }
    *(undefined4 *)puVar6 = 0xf0000000;
    CacheBlockWriteBack(puVar6);
    if (*(uint *)((int)puVar6 + 0x3c) != (ar5 | uVar9)) {
      *(uint *)((int)puVar6 + 0x3c) = ar5 | uVar9;
      puVar5 = &DAT_8c4c2620;
      ar6_00 = puVar6 + 6;
      puVar7 = puVar6 + 2;
      FUN_8c23bae2(&DAT_8c4c2620,puVar7,ar6_00,uVar9);
      uVar21 = float_to_color_u8(puVar5,puVar7,ar6_00,uVar9);
      *(undefined4 *)(puVar6 + 5) = uVar21;
      if (cVar25 == '\0') {
        uVar22 = (ulonglong)_DAT_8c4c263c;
      }
      else {
        uVar22 = CONCAT44(_DAT_8c4c263c,_DAT_8c4c2638);
      }
      puVar4 = (undefined4 *)float_to_color_u8(puVar5,puVar7,ar6_00,uVar9);
      *(undefined4 **)((int)puVar6 + 0x2c) = puVar4;
    }
    if (cVar25 == '\0') {
      puVar7 = (undefined8 *)((int)puVar6 + 0x34);
      uVar14 = CONCAT44(*(undefined4 *)(puVar6 + 6),in_fr15);
      dVar15 = (double)CONCAT44(in_fr15,SUB84(dVar15,0));
    }
    else {
      uVar14 = puVar6[6];
      puVar7 = puVar6 + 7;
      dVar15 = in_xd14;
      in_xd2 = in_xd14;
    }
    if (cVar24 == '\0') {
      fVar17 = (float)((ulonglong)uVar14 >> 0x20);
      uVar14 = CONCAT44(fVar17,(float)((ulonglong)dVar15 >> 0x20) * fVar17 + (float)uVar14);
    }
    if (cVar25 == '\0') {
      *(int *)(puVar6 + 4) = (int)uVar14;
      uVar14 = CONCAT44(*(undefined4 *)puVar7,in_fr15);
      dVar15 = (double)CONCAT44(in_fr15,SUB84(dVar15,0));
    }
    else {
      puVar6[4] = in_xd2;
      uVar14 = *puVar7;
      in_xd2 = in_xd14;
      dVar15 = in_xd14;
    }
    pdVar1 = (double *)((int)puVar6 + 0x24);
    if (cVar24 == '\0') {
      fVar17 = (float)((ulonglong)uVar14 >> 0x20);
      uVar14 = CONCAT44(fVar17,(float)((ulonglong)dVar15 >> 0x20) * fVar17 + (float)uVar14);
    }
    if (cVar25 == '\0') {
      *(int *)pdVar1 = (int)uVar14;
    }
    else {
      *pdVar1 = in_xd2;
    }
    CacheBlockWriteBack(pdVar1);
    if (cVar25 == '\0') {
      uVar18 = CONCAT44(*(undefined4 *)puVar6,SUB84(dVar15,0));
      uVar14 = CONCAT44(*(undefined4 *)((int)puVar6 + 4),(int)uVar14);
      puVar6 = puVar6 + 1;
    }
    else {
      uVar18 = *puVar6;
      uVar14 = puVar6[1];
      puVar6 = puVar6 + 2;
    }
    if (cVar25 == '\0') {
      uVar21 = *(undefined4 *)(puVar6 + 2);
      in_dr6 = CONCAT44(*(undefined4 *)((int)puVar6 + 0x14),(int)uVar22);
      *(undefined4 *)((int)puVar13 + 0x3c) = *(undefined4 *)((int)puVar6 + 0x14);
      *(undefined4 *)(puVar13 + 7) = uVar21;
      *(int *)((int)puVar13 + 0x34) = (int)((ulonglong)uVar14 >> 0x20);
      puVar13 = puVar13 + 6;
      *(int *)puVar13 = (int)((ulonglong)uVar18 >> 0x20);
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
    uStack_24 = uStack_24 - 1;
  } while (uStack_24 != 0);
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar8;
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar8;
  return puVar4;
}

__asm__(".globl _FUN_8c24149e\n.set _FUN_8c24149e, _FUN_8c24149e_def\n");
