#include "../decls.h"
int FUN_8c240222_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 *unaff_r8;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  float fVar18;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined8 in_dr6;
  undefined8 uVar21;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd2;
  bool bVar22;
  char cVar23;
  char cVar24;
  uint uStack_24;
  
  cVar24 = '\0';
  cVar23 = '\0';
  noop_23d694(ar4,ar5,ar6,ar7,ar5);
  iVar1 = _DAT_8c4aa510;
  iVar6 = 0;
  puVar8 = *(ushort **)(ar4 + 4);
  uStack_24 = (uint)*(ushort *)(ar4 + 2);
  do {
    iVar6 = iVar6 + (*puVar8 & 0x7fff);
    iVar10 = (*puVar8 & 0x7fff) - 1;
    puVar9 = puVar8 + 1;
    do {
      puVar8 = puVar9;
      puVar9 = puVar8 + 1;
      puVar11 = (undefined8 *)((uint)*puVar8 * 0x40 + iVar1);
      iVar2 = (uint)*puVar9 * 0x40 + iVar1 + 0x20;
      if (cVar24 == '\0') {
        uVar13 = CONCAT44(*(undefined4 *)(puVar11 + 2),*(undefined4 *)((int)puVar11 + 0x14));
        uVar14 = (ulonglong)*(uint *)(puVar11 + 3) << 0x20;
        uVar19 = CONCAT44(*(undefined4 *)(puVar11 + 6),*(undefined4 *)((int)puVar11 + 0x34));
        uVar21 = CONCAT44(*(undefined4 *)(puVar11 + 7),(int)in_dr6);
      }
      else {
        uVar13 = puVar11[2];
        uVar14 = puVar11[4];
        uVar19 = puVar11[6];
        uVar21 = puVar11[8];
      }
      uVar14 = uVar14 & 0xffffffff00000000;
                    
      if (cVar23 == '\0') {
        fVar18 = (float)uVar13 * (float)uVar19 +
                 (float)((ulonglong)uVar13 >> 0x20) * (float)((ulonglong)uVar19 >> 0x20) +
                 (float)uVar21 * 0.0 + (float)(uVar14 >> 0x20) * (float)((ulonglong)uVar21 >> 0x20);
      }
      dVar15 = in_xd2;
      if (cVar24 == '\0') {
        in_fr15 = (float)uVar14;
        dVar15 = (double)CONCAT44(in_fr15,(float)uVar13);
      }
      uVar20 = SUB84(dVar15,0);
      dVar15 = (double)(uVar14 & 0xffffffff00000000);
      if (cVar23 == '\0') {
        bVar22 = 0.0 < in_fr15;
      }
      else {
        bVar22 = dVar15 < (double)CONCAT44(in_fr14,in_fr15);
      }
      uVar7 = 0x8000;
      if (!bVar22) {
        uVar7 = 0;
      }
      *(undefined4 *)puVar11 = 0xe0000000;
      CacheBlockWriteBack(puVar11);
      if (*(uint *)((int)puVar11 + 0x3c) != (ar5 | uVar7)) {
        *(uint *)((int)puVar11 + 0x3c) = ar5 | uVar7;
        iVar2 = FUN_8c23bae2(&DAT_8c4c2620,puVar11 + 2,puVar11 + 6,uVar7);
        if (cVar24 == '\0') {
          *(undefined4 *)(puVar11 + 4) = _DAT_8c4c2620;
          pdVar4 = (double *)&DAT_8c4c2638;
          pdVar3 = (double *)&DAT_8c4c2628;
          dVar15 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
        }
        else {
          puVar11[4] = CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
          in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
          pdVar4 = (double *)&DAT_8c4c263c;
          pdVar3 = (double *)&DAT_8c4c2630;
          dVar15 = _DAT_8c4c2628;
        }
        if (cVar23 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 + dVar15;
        }
        if (cVar24 == '\0') {
          *(int *)((int)puVar11 + 0x24) = (int)((ulonglong)dVar15 >> 0x20);
          pdVar5 = (double *)((int)pdVar4 + 4);
          dVar15 = (double)CONCAT44(*(undefined4 *)pdVar3,*(undefined4 *)pdVar4);
          pdVar3 = (double *)((int)pdVar3 + 4);
        }
        else {
          *(double *)((int)puVar11 + 0x24) = dVar15;
          in_xd2 = *pdVar4;
          pdVar5 = pdVar4 + 1;
          dVar15 = *pdVar3;
          pdVar3 = pdVar3 + 1;
        }
        if (cVar23 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 + dVar15;
        }
        if (cVar24 == '\0') {
          *(int *)(puVar11 + 5) = (int)((ulonglong)dVar15 >> 0x20);
          dVar15 = (double)CONCAT44(*(undefined4 *)pdVar3,*(undefined4 *)pdVar5);
        }
        else {
          puVar11[5] = dVar15;
          dVar15 = *pdVar3;
          in_xd2 = *pdVar5;
        }
        pdVar4 = (double *)((int)puVar11 + 0x2c);
        if (cVar23 == '\0') {
          dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + SUB84(dVar15,0),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 + dVar15;
        }
        if (cVar24 == '\0') {
          *(int *)pdVar4 = (int)((ulonglong)dVar15 >> 0x20);
        }
        else {
          *pdVar4 = dVar15;
        }
        CacheBlockWriteBack(pdVar4);
      }
      if (cVar24 == '\0') {
        uVar13 = CONCAT44(*(undefined4 *)puVar11,uVar20);
        uVar19 = CONCAT44(*(undefined4 *)((int)puVar11 + 4),SUB84(dVar15,0));
        puVar11 = puVar11 + 1;
      }
      else {
        uVar13 = *puVar11;
        uVar19 = puVar11[1];
        puVar11 = puVar11 + 2;
      }
      if (cVar24 == '\0') {
        uVar20 = *(undefined4 *)(puVar11 + 2);
        in_dr6 = CONCAT44(*(undefined4 *)((int)puVar11 + 0x14),(int)uVar21);
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)puVar11 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar20;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)uVar19 >> 0x20);
        *(int *)(unaff_r8 + 2) = (int)((ulonglong)uVar13 >> 0x20);
        puVar11 = unaff_r8 + 2;
      }
      else {
        uVar21 = puVar11[2];
        in_dr6 = puVar11[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = uVar21;
        unaff_r8[1] = uVar19;
        *unaff_r8 = uVar13;
        puVar11 = unaff_r8;
      }
      unaff_r8 = puVar11 + 4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    puVar8 = puVar8 + 2;
    puVar12 = (undefined8 *)((uint)*puVar9 * 0x40 + iVar1);
    if (cVar24 == '\0') {
      uVar13 = CONCAT44(*(undefined4 *)(puVar12 + 2),*(undefined4 *)((int)puVar12 + 0x14));
      uVar14 = (ulonglong)*(uint *)(puVar12 + 3) << 0x20;
      uVar19 = CONCAT44(*(undefined4 *)(puVar12 + 6),*(undefined4 *)((int)puVar12 + 0x34));
      uVar21 = CONCAT44(*(undefined4 *)(puVar12 + 7),(int)in_dr6);
    }
    else {
      uVar13 = puVar12[2];
      uVar14 = puVar12[4];
      uVar19 = puVar12[6];
      uVar21 = puVar12[8];
    }
    uVar14 = uVar14 & 0xffffffff00000000;
                    
    if (cVar23 == '\0') {
      fVar18 = (float)uVar13 * (float)uVar19 +
               (float)((ulonglong)uVar13 >> 0x20) * (float)((ulonglong)uVar19 >> 0x20) +
               (float)uVar21 * 0.0 + (float)(uVar14 >> 0x20) * (float)((ulonglong)uVar21 >> 0x20);
    }
    dVar15 = in_xd2;
    if (cVar24 == '\0') {
      dVar15 = (double)CONCAT44((int)uVar14,(float)uVar13);
    }
    dVar17 = (double)(uVar14 & 0xffffffff00000000);
    dVar16 = dVar15;
    if (cVar24 == '\0') {
      dVar16 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),(float)uVar19);
    }
    if (cVar23 == '\0') {
      bVar22 = 0.0 < (float)((ulonglong)dVar16 >> 0x20);
    }
    else {
      bVar22 = dVar17 < dVar16;
    }
    uVar7 = 0x8000;
    if (!bVar22) {
      uVar7 = 0;
    }
    *(undefined4 *)puVar12 = 0xf0000000;
    CacheBlockWriteBack(puVar12);
    if (*(uint *)((int)puVar12 + 0x3c) != (ar5 | uVar7)) {
      *(uint *)((int)puVar12 + 0x3c) = ar5 | uVar7;
      iVar2 = FUN_8c23bae2(&DAT_8c4c2620,puVar12 + 2,puVar12 + 6,uVar7);
      if (cVar24 == '\0') {
        *(undefined4 *)(puVar12 + 4) = _DAT_8c4c2620;
        pdVar4 = (double *)&DAT_8c4c2628;
        pdVar3 = (double *)&DAT_8c4c2638;
        dVar16 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
      }
      else {
        puVar12[4] = CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
        pdVar4 = (double *)&DAT_8c4c2630;
        in_xd2 = (double)CONCAT44(_DAT_8c4c2638,_DAT_8c4c2634);
        pdVar3 = (double *)&DAT_8c4c263c;
        dVar16 = _DAT_8c4c2628;
      }
      if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 + dVar16;
      }
      if (cVar24 == '\0') {
        *(int *)((int)puVar12 + 0x24) = (int)((ulonglong)dVar16 >> 0x20);
        pdVar5 = (double *)((int)pdVar4 + 4);
        dVar16 = (double)CONCAT44(*(undefined4 *)pdVar4,*(undefined4 *)pdVar3);
        pdVar3 = (double *)((int)pdVar3 + 4);
      }
      else {
        *(double *)((int)puVar12 + 0x24) = dVar16;
        dVar16 = *pdVar4;
        pdVar5 = pdVar4 + 1;
        in_xd2 = *pdVar3;
        pdVar3 = pdVar3 + 1;
      }
      if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 + dVar16;
      }
      if (cVar24 == '\0') {
        *(int *)(puVar12 + 5) = (int)((ulonglong)dVar16 >> 0x20);
        dVar17 = (double)CONCAT44(*(undefined4 *)pdVar5,*(undefined4 *)pdVar3);
      }
      else {
        puVar12[5] = dVar16;
        dVar17 = *pdVar5;
        in_xd2 = *pdVar3;
      }
      pdVar4 = (double *)((int)puVar12 + 0x2c);
      if (cVar23 == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) + SUB84(dVar17,0),
                                  SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 + dVar17;
      }
      if (cVar24 == '\0') {
        *(int *)pdVar4 = (int)((ulonglong)dVar17 >> 0x20);
      }
      else {
        *pdVar4 = dVar17;
      }
      CacheBlockWriteBack(pdVar4);
    }
    if (cVar24 == '\0') {
      uVar13 = CONCAT44(*(undefined4 *)puVar12,SUB84(dVar15,0));
      uVar19 = CONCAT44(*(undefined4 *)((int)puVar12 + 4),SUB84(dVar17,0));
      puVar12 = puVar12 + 1;
    }
    else {
      uVar13 = *puVar12;
      uVar19 = puVar12[1];
      puVar12 = puVar12 + 2;
    }
    if (cVar24 == '\0') {
      uVar20 = *(undefined4 *)(puVar12 + 2);
      in_dr6 = CONCAT44(*(undefined4 *)((int)puVar12 + 0x14),(int)uVar21);
      *(undefined4 *)((int)puVar11 + 0x3c) = *(undefined4 *)((int)puVar12 + 0x14);
      *(undefined4 *)(puVar11 + 7) = uVar20;
      *(int *)((int)puVar11 + 0x34) = (int)((ulonglong)uVar19 >> 0x20);
      puVar11 = puVar11 + 6;
      *(int *)puVar11 = (int)((ulonglong)uVar13 >> 0x20);
    }
    else {
      uVar21 = puVar12[2];
      in_dr6 = puVar12[3];
      puVar11[7] = in_dr6;
      puVar11[6] = uVar21;
      puVar11[5] = uVar19;
      puVar11 = puVar11 + 4;
      *puVar11 = uVar13;
    }
    unaff_r8 = puVar11 + 4;
    uStack_24 = uStack_24 - 1;
  } while (uStack_24 != 0);
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar6;
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar6;
  return iVar2;
}

__asm__(".globl _FUN_8c240222\n.set _FUN_8c240222, _FUN_8c240222_def\n");
