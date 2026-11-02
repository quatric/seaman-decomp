#include "../decls.h"
int FUN_8c23eda6_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 *unaff_r8;
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
  undefined8 in_dr6;
  undefined8 uVar20;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd2;
  bool bVar21;
  char cVar22;
  char cVar23;
  int iVar24;
  uint uStack_24;
  
  cVar23 = '\0';
  cVar22 = '\0';
  noop_23d694(ar4,ar5,ar6,ar7,ar4);
  iVar1 = _DAT_8c4aa510;
  puVar8 = *(ushort **)(ar4 + 4);
  uStack_24 = (uint)*(ushort *)(ar4 + 2);
  iVar24 = 0;
  do {
    iVar24 = iVar24 + (*puVar8 & 0x7fff);
    iVar7 = (*puVar8 & 0x7fff) - 1;
    puVar9 = puVar8 + 1;
    do {
      puVar8 = puVar9;
      puVar9 = puVar8 + 1;
      puVar10 = (undefined8 *)((uint)*puVar8 * 0x40 + iVar1);
      iVar2 = (uint)*puVar9 * 0x40 + iVar1 + 0x20;
      if (cVar23 == '\0') {
        uVar12 = CONCAT44(*(undefined4 *)(puVar10 + 2),*(undefined4 *)((int)puVar10 + 0x14));
        uVar13 = (ulonglong)*(uint *)(puVar10 + 3) << 0x20;
        uVar18 = CONCAT44(*(undefined4 *)(puVar10 + 6),*(undefined4 *)((int)puVar10 + 0x34));
        uVar20 = CONCAT44(*(undefined4 *)(puVar10 + 7),(int)in_dr6);
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
                 (float)((ulonglong)uVar12 >> 0x20) * (float)((ulonglong)uVar18 >> 0x20) +
                 (float)uVar20 * 0.0 + (float)(uVar13 >> 0x20) * (float)((ulonglong)uVar20 >> 0x20);
      }
      dVar14 = in_xd2;
      if (cVar23 == '\0') {
        in_fr15 = (float)uVar13;
        dVar14 = (double)CONCAT44(in_fr15,(float)uVar12);
      }
      uVar19 = SUB84(dVar14,0);
      dVar14 = (double)(uVar13 & 0xffffffff00000000);
      if (cVar22 == '\0') {
        bVar21 = 0.0 < in_fr15;
      }
      else {
        bVar21 = dVar14 < (double)CONCAT44(in_fr14,in_fr15);
      }
      uVar6 = 0x8000;
      if (!bVar21) {
        uVar6 = 0;
      }
      *(undefined4 *)puVar10 = 0xe0000000;
      CacheBlockWriteBack(puVar10);
      if (*(uint *)((int)puVar10 + 0x3c) != (uVar6 | ar5)) {
        *(uint *)((int)puVar10 + 0x3c) = uVar6 | ar5;
        iVar2 = FUN_8c23bae2(&DAT_8c4c2620,puVar10 + 2,puVar10 + 6,uVar6);
        if (cVar23 == '\0') {
          *(undefined4 *)(puVar10 + 4) = _DAT_8c4c2620;
          pdVar4 = (double *)&DAT_8c4c2638;
          pdVar3 = (double *)&DAT_8c4c2628;
          dVar14 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
        }
        else {
          puVar10[4] = CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
          pdVar4 = (double *)&DAT_8c4c263c;
          pdVar3 = (double *)&DAT_8c4c2630;
          dVar14 = _DAT_8c4c2628;
        }
        if (cVar22 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + SUB84(dVar14,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 + dVar14;
        }
        if (cVar23 == '\0') {
          *(int *)((int)puVar10 + 0x24) = (int)((ulonglong)dVar14 >> 0x20);
          pdVar5 = (double *)((int)pdVar4 + 4);
          dVar14 = (double)CONCAT44(*(undefined4 *)pdVar3,*(undefined4 *)pdVar4);
          pdVar3 = (double *)((int)pdVar3 + 4);
        }
        else {
          *(double *)((int)puVar10 + 0x24) = dVar14;
          in_xd2 = *pdVar4;
          pdVar5 = pdVar4 + 1;
          dVar14 = *pdVar3;
          pdVar3 = pdVar3 + 1;
        }
        if (cVar22 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + SUB84(dVar14,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 + dVar14;
        }
        if (cVar23 == '\0') {
          *(int *)(puVar10 + 5) = (int)((ulonglong)dVar14 >> 0x20);
          dVar14 = (double)CONCAT44(*(undefined4 *)pdVar3,*(undefined4 *)pdVar5);
        }
        else {
          puVar10[5] = dVar14;
          dVar14 = *pdVar3;
          in_xd2 = *pdVar5;
        }
        pdVar4 = (double *)((int)puVar10 + 0x2c);
        if (cVar22 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + SUB84(dVar14,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 + dVar14;
        }
        if (cVar23 == '\0') {
          *(int *)pdVar4 = (int)((ulonglong)dVar14 >> 0x20);
        }
        else {
          *pdVar4 = dVar14;
        }
        CacheBlockWriteBack(pdVar4);
      }
      if (cVar23 == '\0') {
        uVar12 = CONCAT44(*(undefined4 *)puVar10,uVar19);
        uVar18 = CONCAT44(*(undefined4 *)((int)puVar10 + 4),SUB84(dVar14,0));
        puVar10 = puVar10 + 1;
      }
      else {
        uVar12 = *puVar10;
        uVar18 = puVar10[1];
        puVar10 = puVar10 + 2;
      }
      if (cVar23 == '\0') {
        uVar19 = *(undefined4 *)(puVar10 + 2);
        in_dr6 = CONCAT44(*(undefined4 *)((int)puVar10 + 0x14),(int)uVar20);
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)puVar10 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar19;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
        *(int *)(unaff_r8 + 2) = (int)((ulonglong)uVar12 >> 0x20);
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
    puVar11 = (undefined8 *)((uint)*puVar9 * 0x40 + iVar1);
    if (cVar23 == '\0') {
      uVar12 = CONCAT44(*(undefined4 *)(puVar11 + 2),*(undefined4 *)((int)puVar11 + 0x14));
      uVar13 = (ulonglong)*(uint *)(puVar11 + 3) << 0x20;
      uVar18 = CONCAT44(*(undefined4 *)(puVar11 + 6),*(undefined4 *)((int)puVar11 + 0x34));
      uVar20 = CONCAT44(*(undefined4 *)(puVar11 + 7),(int)in_dr6);
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
               (float)((ulonglong)uVar12 >> 0x20) * (float)((ulonglong)uVar18 >> 0x20) +
               (float)uVar20 * 0.0 + (float)(uVar13 >> 0x20) * (float)((ulonglong)uVar20 >> 0x20);
    }
    dVar14 = in_xd2;
    if (cVar23 == '\0') {
      dVar14 = (double)CONCAT44((int)uVar13,(float)uVar12);
    }
    dVar16 = (double)(uVar13 & 0xffffffff00000000);
    dVar15 = dVar14;
    if (cVar23 == '\0') {
      dVar15 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),(float)uVar18);
    }
    if (cVar22 == '\0') {
      bVar21 = 0.0 < (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      bVar21 = dVar16 < dVar15;
    }
    uVar6 = 0x8000;
    if (!bVar21) {
      uVar6 = 0;
    }
    *(undefined4 *)puVar11 = 0xf0000000;
    CacheBlockWriteBack(puVar11);
    if (*(uint *)((int)puVar11 + 0x3c) != (uVar6 | ar5)) {
      *(uint *)((int)puVar11 + 0x3c) = uVar6 | ar5;
      iVar2 = FUN_8c23bae2(&DAT_8c4c2620,puVar11 + 2,puVar11 + 6,uVar6);
      if (cVar23 == '\0') {
        *(undefined4 *)(puVar11 + 4) = _DAT_8c4c2620;
        pdVar4 = (double *)&DAT_8c4c2628;
        pdVar3 = (double *)&DAT_8c4c2638;
        dVar15 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
      }
      else {
        puVar11[4] = CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
        pdVar4 = (double *)&DAT_8c4c2630;
        in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
        pdVar3 = (double *)&DAT_8c4c263c;
        dVar15 = _DAT_8c4c2628;
      }
      if (cVar22 == '\0') {
        dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0),
                                  SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + dVar15;
      }
      if (cVar23 == '\0') {
        *(int *)((int)puVar11 + 0x24) = (int)((ulonglong)dVar15 >> 0x20);
        pdVar5 = (double *)((int)pdVar4 + 4);
        dVar15 = (double)CONCAT44(*(undefined4 *)pdVar4,*(undefined4 *)pdVar3);
        pdVar3 = (double *)((int)pdVar3 + 4);
      }
      else {
        *(double *)((int)puVar11 + 0x24) = dVar15;
        dVar15 = *pdVar4;
        pdVar5 = pdVar4 + 1;
        in_xd2 = *pdVar3;
        pdVar3 = pdVar3 + 1;
      }
      if (cVar22 == '\0') {
        dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0),
                                  SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + dVar15;
      }
      if (cVar23 == '\0') {
        *(int *)(puVar11 + 5) = (int)((ulonglong)dVar15 >> 0x20);
        dVar16 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar3);
      }
      else {
        puVar11[5] = dVar15;
        dVar16 = *pdVar5;
        in_xd2 = *pdVar3;
      }
      pdVar4 = (double *)((int)puVar11 + 0x2c);
      if (cVar22 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 + dVar16;
      }
      if (cVar23 == '\0') {
        *(int *)pdVar4 = (int)((ulonglong)dVar16 >> 0x20);
      }
      else {
        *pdVar4 = dVar16;
      }
      CacheBlockWriteBack(pdVar4);
    }
    if (cVar23 == '\0') {
      uVar12 = CONCAT44(*(undefined4 *)puVar11,SUB84(dVar14,0));
      uVar18 = CONCAT44(*(undefined4 *)((int)puVar11 + 4),SUB84(dVar16,0));
      puVar11 = puVar11 + 1;
    }
    else {
      uVar12 = *puVar11;
      uVar18 = puVar11[1];
      puVar11 = puVar11 + 2;
    }
    if (cVar23 == '\0') {
      uVar19 = *(undefined4 *)(puVar11 + 2);
      in_dr6 = CONCAT44(*(undefined4 *)((int)puVar11 + 0x14),(int)uVar20);
      *(undefined4 *)((int)puVar10 + 0x3c) = *(undefined4 *)((int)puVar11 + 0x14);
      *(undefined4 *)(puVar10 + 7) = uVar19;
      *(int *)((int)puVar10 + 0x34) = (int)((ulonglong)uVar18 >> 0x20);
      puVar10 = puVar10 + 6;
      *(int *)puVar10 = (int)((ulonglong)uVar12 >> 0x20);
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
    uStack_24 = uStack_24 - 1;
  } while (uStack_24 != 0);
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar24;
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar24;
  return iVar2;
}

__asm__(".globl _FUN_8c23eda6\n.set _FUN_8c23eda6, _FUN_8c23eda6_def\n");
