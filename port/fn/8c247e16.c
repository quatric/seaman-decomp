#include "../decls.h"
uint FUN_8c247e16_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  double *pdVar5;
  code *UNRECOVERED_JUMPTABLE;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  double *unaff_r8;
  double *pdVar12;
  ushort *puVar13;
  ushort *puVar14;
  double in_dr0;
  double dVar15;
  double dVar16;
  float fVar17;
  double in_dr2;
  uint uVar18;
  double in_dr4;
  double dVar19;
  float fVar21;
  undefined4 uVar22;
  bool bVar23;
  char cVar24;
  char cVar25;
  uint uStack_40;
  uint uStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_20;
  undefined4 uVar20;
  
  cVar25 = '\0';
  cVar24 = '\0';
  uVar1 = *ar4;
  uVar2 = (uint)(uVar1 & 0x3fff);
  puVar13 = *(ushort **)(ar4 + 2);
  uVar3 = uVar1 & 0xc000;
  if ((uVar1 & 0xc000) == 0) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 3;
    iStack_2c = 0;
    while( true ) {
      uVar20 = SUB84(in_dr2,0);
      uVar3 = (uint)ar4[1];
      if ((int)uVar3 <= iStack_2c) break;
      pdVar5 = (double *)((uint)*puVar13 * 0x40 + _DAT_8c4aa510);
      puVar14 = puVar13 + 2;
      pdVar4 = (double *)((uint)puVar13[1] * 0x40 + _DAT_8c4aa510);
      if (cVar25 == '\0') {
        dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),SUB84(in_dr4,0));
      }
      else {
        dVar19 = *(double *)((int)pdVar4 + 4);
      }
      puVar13 = puVar13 + 3;
      if (cVar25 == '\0') {
        uVar20 = *(undefined4 *)((int)pdVar5 + 4);
      }
      uVar22 = (undefined4)((ulonglong)dVar19 >> 0x20);
      dVar16 = dVar19;
      if (cVar25 == '\0') {
        dVar16 = (double)CONCAT44(uVar22,uVar20);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 - dVar16;
      }
      pdVar6 = (double *)((uint)*puVar14 * 0x40 + _DAT_8c4aa510);
      if (cVar25 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)(pdVar6 + 1));
        dVar19 = (double)CONCAT44(uVar22,*(undefined4 *)(pdVar4 + 1));
      }
      fVar21 = SUB84(dVar19,0);
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0) - fVar21);
      }
      else {
        dVar16 = dVar16 - dVar19;
      }
      if (cVar25 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar21);
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * SUB84(dVar16,0),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 * dVar16;
      }
      if (cVar25 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)(pdVar5 + 1));
      }
      if (cVar24 == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar16,0)
                                 );
      }
      else {
        dVar15 = in_dr0 - dVar16;
      }
      if (cVar25 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)((int)pdVar6 + 4))
        ;
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                  SUB84(dVar16,0) - (float)((ulonglong)dVar19 >> 0x20));
      }
      else {
        dVar16 = dVar16 - dVar19;
      }
      uVar3 = (uint)((ulonglong)dVar16 >> 0x20);
      dVar19 = dVar16;
      if (cVar25 == '\0') {
        dVar19 = (double)CONCAT44(uVar3,fVar21);
      }
      uStack_38 = 0;
      if (cVar24 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) * SUB84(dVar16,0)
                                 );
      }
      else {
        in_dr0 = dVar15 * dVar16;
      }
      in_dr2 = (double)((ulonglong)uVar3 << 0x20);
      if (cVar24 == '\0') {
        fVar21 = (float)((ulonglong)dVar19 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar21,SUB84(dVar19,0));
        bVar23 = 0.0 < fVar21;
      }
      else {
        in_dr4 = dVar19 - in_dr0;
        bVar23 = in_dr2 < in_dr4;
      }
      uVar20 = SUB84(in_dr4,0);
      if (bVar23) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          uStack_38 = 0x8000;
          goto LAB_8c247f42;
        }
      }
      else {
LAB_8c247f42:
        *(undefined4 *)pdVar5 = 0xe0000000;
        CacheBlockWriteBack(pdVar5);
        if (*(uint *)((int)pdVar5 + 0x3c) != (uVar2 | uStack_38)) {
          *(uint *)((int)pdVar5 + 0x3c) = uVar2 | uStack_38;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar5 + 2,pdVar5 + 6,uStack_38);
          if (cVar25 == '\0') {
            *(undefined4 *)(pdVar5 + 4) = _DAT_8c4c2620;
            pdVar12 = (double *)&DAT_8c4c2628;
            puVar10 = (undefined4 *)&DAT_8c4c2638;
            dVar19 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
          }
          else {
            pdVar5[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
            pdVar12 = (double *)&DAT_8c4c2630;
            puVar10 = (undefined4 *)&DAT_8c4c263c;
            dVar19 = _DAT_8c4c2628;
          }
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)((int)pdVar5 + 0x24) = (int)((ulonglong)dVar19 >> 0x20);
            puVar9 = puVar10 + 1;
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar12,*puVar10);
            pdVar12 = (double *)((int)pdVar12 + 4);
          }
          else {
            *(double *)((int)pdVar5 + 0x24) = dVar19;
            puVar9 = puVar10 + 2;
            dVar19 = *pdVar12;
            pdVar12 = pdVar12 + 1;
          }
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)(pdVar5 + 5) = (int)((ulonglong)dVar19 >> 0x20);
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar12,*puVar9);
          }
          else {
            pdVar5[5] = dVar19;
            dVar19 = *pdVar12;
          }
          pdVar12 = (double *)((int)pdVar5 + 0x2c);
          if (cVar24 == '\0') {
            in_dr2 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            in_dr2 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)pdVar12 = (int)((ulonglong)in_dr2 >> 0x20);
          }
          else {
            *pdVar12 = in_dr2;
          }
          CacheBlockWriteBack(pdVar12);
        }
        if (cVar25 == '\0') {
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(in_dr0,0));
          dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),SUB84(in_dr2,0));
          pdVar5 = pdVar5 + 1;
        }
        else {
          dVar19 = *pdVar5;
          dVar16 = pdVar5[1];
          pdVar5 = pdVar5 + 2;
        }
        if (cVar25 == '\0') {
          uVar22 = *(undefined4 *)(pdVar5 + 2);
          dVar15 = (double)CONCAT44(uVar22,uVar20);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar5 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar22;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar16 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar19 >> 0x20);
        }
        else {
          dVar15 = pdVar5[2];
          unaff_r8[3] = pdVar5[3];
          unaff_r8[2] = dVar15;
          unaff_r8[1] = dVar16;
          *unaff_r8 = dVar19;
        }
        uVar20 = SUB84(dVar15,0);
        *(undefined4 *)pdVar4 = 0xe0000000;
        CacheBlockWriteBack(pdVar4);
        if (*(uint *)((int)pdVar4 + 0x3c) != (uVar2 | uStack_38)) {
          *(uint *)((int)pdVar4 + 0x3c) = uVar2 | uStack_38;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar4 + 2,pdVar4 + 6,uStack_38);
          if (cVar25 == '\0') {
            *(undefined4 *)(pdVar4 + 4) = _DAT_8c4c2620;
            pdVar5 = (double *)&DAT_8c4c2628;
            puVar10 = (undefined4 *)&DAT_8c4c2638;
            dVar16 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
          }
          else {
            pdVar4[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
            pdVar5 = (double *)&DAT_8c4c2630;
            puVar10 = (undefined4 *)&DAT_8c4c263c;
            dVar16 = _DAT_8c4c2628;
          }
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar16;
          }
          if (cVar25 == '\0') {
            *(int *)((int)pdVar4 + 0x24) = (int)((ulonglong)dVar16 >> 0x20);
            puVar9 = puVar10 + 1;
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar10);
            pdVar5 = (double *)((int)pdVar5 + 4);
          }
          else {
            *(double *)((int)pdVar4 + 0x24) = dVar16;
            puVar9 = puVar10 + 2;
            dVar16 = *pdVar5;
            pdVar5 = pdVar5 + 1;
          }
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar16;
          }
          if (cVar25 == '\0') {
            *(int *)(pdVar4 + 5) = (int)((ulonglong)dVar16 >> 0x20);
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar9);
          }
          else {
            pdVar4[5] = dVar16;
            dVar16 = *pdVar5;
          }
          pdVar5 = (double *)((int)pdVar4 + 0x2c);
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar16;
          }
          if (cVar25 == '\0') {
            *(int *)pdVar5 = (int)((ulonglong)dVar16 >> 0x20);
          }
          else {
            *pdVar5 = dVar16;
          }
          CacheBlockWriteBack(pdVar5);
        }
        if (cVar25 == '\0') {
          dVar19 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(dVar19,0));
          dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),SUB84(dVar16,0));
          pdVar4 = pdVar4 + 1;
        }
        else {
          dVar19 = *pdVar4;
          dVar16 = pdVar4[1];
          pdVar4 = pdVar4 + 2;
        }
        if (cVar25 == '\0') {
          uVar22 = *(undefined4 *)(pdVar4 + 2);
          dVar15 = (double)CONCAT44(uVar22,uVar20);
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar4 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar22;
          *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar16 >> 0x20);
          pdVar4 = unaff_r8 + 6;
          *(int *)pdVar4 = (int)((ulonglong)dVar19 >> 0x20);
        }
        else {
          dVar15 = pdVar4[2];
          unaff_r8[7] = pdVar4[3];
          unaff_r8[6] = dVar15;
          unaff_r8[5] = dVar16;
          pdVar4 = unaff_r8 + 4;
          *pdVar4 = dVar19;
        }
        uVar20 = SUB84(dVar15,0);
        *(undefined4 *)pdVar6 = 0xf0000000;
        CacheBlockWriteBack(pdVar6);
        if (*(uint *)((int)pdVar6 + 0x3c) != (uVar2 | uStack_38)) {
          *(uint *)((int)pdVar6 + 0x3c) = uVar2 | uStack_38;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar6 + 2,pdVar6 + 6,uStack_38);
          if (cVar25 == '\0') {
            *(undefined4 *)(pdVar6 + 4) = _DAT_8c4c2620;
            puVar10 = (undefined4 *)&DAT_8c4c2638;
            pdVar5 = (double *)&DAT_8c4c2628;
            dVar16 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
          }
          else {
            pdVar6[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
            puVar10 = (undefined4 *)&DAT_8c4c263c;
            pdVar5 = (double *)&DAT_8c4c2630;
            dVar16 = _DAT_8c4c2628;
          }
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar16;
          }
          if (cVar25 == '\0') {
            *(int *)((int)pdVar6 + 0x24) = (int)((ulonglong)dVar16 >> 0x20);
            puVar9 = puVar10 + 1;
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar10);
            pdVar5 = (double *)((int)pdVar5 + 4);
          }
          else {
            *(double *)((int)pdVar6 + 0x24) = dVar16;
            puVar9 = puVar10 + 2;
            dVar16 = *pdVar5;
            pdVar5 = pdVar5 + 1;
          }
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar16;
          }
          if (cVar25 == '\0') {
            *(int *)(pdVar6 + 5) = (int)((ulonglong)dVar16 >> 0x20);
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar9);
          }
          else {
            pdVar6[5] = dVar16;
            dVar16 = *pdVar5;
          }
          pdVar5 = (double *)((int)pdVar6 + 0x2c);
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar16;
          }
          if (cVar25 == '\0') {
            *(int *)pdVar5 = (int)((ulonglong)dVar16 >> 0x20);
          }
          else {
            *pdVar5 = dVar16;
          }
          CacheBlockWriteBack(pdVar5);
        }
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(dVar19,0));
          in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 4),SUB84(dVar16,0));
          pdVar6 = pdVar6 + 1;
        }
        else {
          in_dr0 = *pdVar6;
          in_dr2 = pdVar6[1];
          pdVar6 = pdVar6 + 2;
        }
        if (cVar25 == '\0') {
          uVar22 = *(undefined4 *)(pdVar6 + 2);
          in_dr4 = (double)CONCAT44(uVar22,uVar20);
          *(undefined4 *)((int)pdVar4 + 0x3c) = *(undefined4 *)((int)pdVar6 + 0x14);
          *(undefined4 *)(pdVar4 + 7) = uVar22;
          *(int *)((int)pdVar4 + 0x34) = (int)((ulonglong)in_dr2 >> 0x20);
          pdVar4 = pdVar4 + 6;
          *(int *)pdVar4 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar6[2];
          pdVar4[7] = pdVar6[3];
          pdVar4[6] = in_dr4;
          pdVar4[5] = in_dr2;
          pdVar4 = pdVar4 + 4;
          *pdVar4 = in_dr0;
        }
        unaff_r8 = pdVar4 + 4;
        _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
      }
      iStack_2c = iStack_2c + 1;
    }
  }
  else if (uVar3 == 0x4000) {
    _DAT_8c4aa51c = _DAT_8c4aa51c + (uint)ar4[1] * 4;
    for (iStack_20 = 0; uVar3 = (uint)ar4[1], iStack_20 < (int)uVar3; iStack_20 = iStack_20 + 1) {
      pdVar6 = (double *)((uint)*puVar13 * 0x40 + _DAT_8c4aa510);
      pdVar5 = (double *)((uint)puVar13[1] * 0x40 + _DAT_8c4aa510);
      puVar14 = puVar13 + 3;
      pdVar12 = (double *)((uint)puVar13[2] * 0x40 + _DAT_8c4aa510);
      puVar13 = puVar13 + 4;
      pdVar4 = (double *)((uint)*puVar14 * 0x40 + _DAT_8c4aa510);
      if (cVar25 == '\0') {
        uVar20 = *(undefined4 *)((int)pdVar5 + 4);
        dVar19 = (double)CONCAT44(uVar20,*(undefined4 *)((int)pdVar6 + 4));
        dVar16 = (double)CONCAT44(uVar20,SUB84(in_dr4,0));
      }
      else {
        dVar19 = *(double *)((int)pdVar5 + 4);
        uVar20 = (undefined4)((ulonglong)dVar19 >> 0x20);
        dVar16 = dVar19;
      }
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) - SUB84(dVar19,0),
                                  SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 - dVar19;
      }
      if (cVar25 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)(pdVar12 + 1));
        dVar16 = (double)CONCAT44(uVar20,*(undefined4 *)(pdVar5 + 1));
      }
      fVar21 = SUB84(dVar16,0);
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),SUB84(dVar19,0) - fVar21);
      }
      else {
        dVar19 = dVar19 - dVar16;
      }
      if (cVar25 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar21);
      }
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * SUB84(dVar19,0),
                                  SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 * dVar19;
      }
      if (cVar25 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)(pdVar6 + 1));
      }
      if (cVar24 == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar19,0)
                                 );
      }
      else {
        dVar15 = in_dr0 - dVar19;
      }
      if (cVar25 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)((int)pdVar12 + 4)
                                 );
      }
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),
                                  SUB84(dVar19,0) - (float)((ulonglong)dVar16 >> 0x20));
      }
      else {
        dVar19 = dVar19 - dVar16;
      }
      uVar3 = (uint)((ulonglong)dVar19 >> 0x20);
      dVar16 = dVar19;
      if (cVar25 == '\0') {
        dVar16 = (double)CONCAT44(uVar3,fVar21);
      }
      uStack_38 = 0;
      if (cVar24 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) * SUB84(dVar19,0)
                                 );
      }
      else {
        in_dr0 = dVar15 * dVar19;
      }
      dVar19 = (double)((ulonglong)uVar3 << 0x20);
      if (cVar24 == '\0') {
        fVar21 = (float)((ulonglong)dVar16 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar21,SUB84(dVar16,0));
        bVar23 = 0.0 < fVar21;
      }
      else {
        in_dr4 = dVar16 - in_dr0;
        bVar23 = dVar19 < in_dr4;
      }
      uVar20 = SUB84(in_dr4,0);
      if (bVar23) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          uStack_38 = 0x8000;
          goto LAB_8c248192;
        }
      }
      else {
LAB_8c248192:
        *(undefined4 *)pdVar6 = 0xe0000000;
        CacheBlockWriteBack(pdVar6);
        if (*(uint *)((int)pdVar6 + 0x3c) != (uVar2 | uStack_38)) {
          *(uint *)((int)pdVar6 + 0x3c) = uVar2 | uStack_38;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar6 + 2,pdVar6 + 6,uStack_38);
          if (cVar25 == '\0') {
            *(undefined4 *)(pdVar6 + 4) = _DAT_8c4c2620;
            pdVar7 = (double *)&DAT_8c4c2628;
            puVar10 = (undefined4 *)&DAT_8c4c2638;
            dVar19 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
          }
          else {
            pdVar6[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
            pdVar7 = (double *)&DAT_8c4c2630;
            puVar10 = (undefined4 *)&DAT_8c4c263c;
            dVar19 = _DAT_8c4c2628;
          }
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)((int)pdVar6 + 0x24) = (int)((ulonglong)dVar19 >> 0x20);
            puVar9 = puVar10 + 1;
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar7,*puVar10);
            pdVar7 = (double *)((int)pdVar7 + 4);
          }
          else {
            *(double *)((int)pdVar6 + 0x24) = dVar19;
            puVar9 = puVar10 + 2;
            dVar19 = *pdVar7;
            pdVar7 = pdVar7 + 1;
          }
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)(pdVar6 + 5) = (int)((ulonglong)dVar19 >> 0x20);
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar7,*puVar9);
          }
          else {
            pdVar6[5] = dVar19;
            dVar19 = *pdVar7;
          }
          pdVar7 = (double *)((int)pdVar6 + 0x2c);
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)pdVar7 = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            *pdVar7 = dVar19;
          }
          CacheBlockWriteBack(pdVar7);
        }
        if (cVar25 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(in_dr0,0));
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 4),SUB84(dVar19,0));
          pdVar6 = pdVar6 + 1;
        }
        else {
          dVar16 = *pdVar6;
          dVar19 = pdVar6[1];
          pdVar6 = pdVar6 + 2;
        }
        if (cVar25 == '\0') {
          uVar22 = *(undefined4 *)(pdVar6 + 2);
          dVar15 = (double)CONCAT44(uVar22,uVar20);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar6 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar22;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar19 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)dVar16 >> 0x20);
        }
        else {
          dVar15 = pdVar6[2];
          unaff_r8[3] = pdVar6[3];
          unaff_r8[2] = dVar15;
          unaff_r8[1] = dVar19;
          *unaff_r8 = dVar16;
        }
        uVar20 = SUB84(dVar15,0);
        *(undefined4 *)pdVar5 = 0xe0000000;
        CacheBlockWriteBack(pdVar5);
        if (*(uint *)((int)pdVar5 + 0x3c) != (uVar2 | uStack_38)) {
          *(uint *)((int)pdVar5 + 0x3c) = uVar2 | uStack_38;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar5 + 2,pdVar5 + 6,uStack_38);
          if (cVar25 == '\0') {
            *(undefined4 *)(pdVar5 + 4) = _DAT_8c4c2620;
            pdVar6 = (double *)&DAT_8c4c2628;
            puVar10 = (undefined4 *)&DAT_8c4c2638;
            dVar19 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
          }
          else {
            pdVar5[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
            pdVar6 = (double *)&DAT_8c4c2630;
            puVar10 = (undefined4 *)&DAT_8c4c263c;
            dVar19 = _DAT_8c4c2628;
          }
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)((int)pdVar5 + 0x24) = (int)((ulonglong)dVar19 >> 0x20);
            puVar9 = puVar10 + 1;
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar6,*puVar10);
            pdVar6 = (double *)((int)pdVar6 + 4);
          }
          else {
            *(double *)((int)pdVar5 + 0x24) = dVar19;
            puVar9 = puVar10 + 2;
            dVar19 = *pdVar6;
            pdVar6 = pdVar6 + 1;
          }
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)(pdVar5 + 5) = (int)((ulonglong)dVar19 >> 0x20);
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar6,*puVar9);
          }
          else {
            pdVar5[5] = dVar19;
            dVar19 = *pdVar6;
          }
          pdVar6 = (double *)((int)pdVar5 + 0x2c);
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)pdVar6 = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            *pdVar6 = dVar19;
          }
          CacheBlockWriteBack(pdVar6);
        }
        if (cVar25 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar16,0));
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),SUB84(dVar19,0));
          pdVar5 = pdVar5 + 1;
        }
        else {
          dVar16 = *pdVar5;
          dVar19 = pdVar5[1];
          pdVar5 = pdVar5 + 2;
        }
        if (cVar25 == '\0') {
          uVar22 = *(undefined4 *)(pdVar5 + 2);
          dVar15 = (double)CONCAT44(uVar22,uVar20);
          *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)pdVar5 + 0x14);
          *(undefined4 *)(unaff_r8 + 7) = uVar22;
          *(int *)((int)unaff_r8 + 0x34) = (int)((ulonglong)dVar19 >> 0x20);
          pdVar5 = unaff_r8 + 6;
          *(int *)pdVar5 = (int)((ulonglong)dVar16 >> 0x20);
        }
        else {
          dVar15 = pdVar5[2];
          unaff_r8[7] = pdVar5[3];
          unaff_r8[6] = dVar15;
          unaff_r8[5] = dVar19;
          pdVar5 = unaff_r8 + 4;
          *pdVar5 = dVar16;
        }
        uVar20 = SUB84(dVar15,0);
        *(undefined4 *)pdVar12 = 0xe0000000;
        CacheBlockWriteBack(pdVar12);
        if (*(uint *)((int)pdVar12 + 0x3c) != (uVar2 | uStack_38)) {
          *(uint *)((int)pdVar12 + 0x3c) = uVar2 | uStack_38;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar12 + 2,pdVar12 + 6,uStack_38);
          if (cVar25 == '\0') {
            *(undefined4 *)(pdVar12 + 4) = _DAT_8c4c2620;
            puVar10 = (undefined4 *)&DAT_8c4c2638;
            pdVar6 = (double *)&DAT_8c4c2628;
            dVar19 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
          }
          else {
            pdVar12[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
            puVar10 = (undefined4 *)&DAT_8c4c263c;
            pdVar6 = (double *)&DAT_8c4c2630;
            dVar19 = _DAT_8c4c2628;
          }
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)((int)pdVar12 + 0x24) = (int)((ulonglong)dVar19 >> 0x20);
            puVar9 = puVar10 + 1;
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar6,*puVar10);
            pdVar6 = (double *)((int)pdVar6 + 4);
          }
          else {
            *(double *)((int)pdVar12 + 0x24) = dVar19;
            puVar9 = puVar10 + 2;
            dVar19 = *pdVar6;
            pdVar6 = pdVar6 + 1;
          }
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)(pdVar12 + 5) = (int)((ulonglong)dVar19 >> 0x20);
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar6,*puVar9);
          }
          else {
            pdVar12[5] = dVar19;
            dVar19 = *pdVar6;
          }
          pdVar6 = (double *)((int)pdVar12 + 0x2c);
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)pdVar6 = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            *pdVar6 = dVar19;
          }
          CacheBlockWriteBack(pdVar6);
        }
        if (cVar25 == '\0') {
          dVar16 = (double)CONCAT44(*(undefined4 *)pdVar12,SUB84(dVar16,0));
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar12 + 4),SUB84(dVar19,0));
          pdVar12 = pdVar12 + 1;
        }
        else {
          dVar16 = *pdVar12;
          dVar19 = pdVar12[1];
          pdVar12 = pdVar12 + 2;
        }
        if (cVar25 == '\0') {
          uVar22 = *(undefined4 *)(pdVar12 + 2);
          dVar15 = (double)CONCAT44(uVar22,uVar20);
          *(undefined4 *)((int)pdVar5 + 0x3c) = *(undefined4 *)((int)pdVar12 + 0x14);
          *(undefined4 *)(pdVar5 + 7) = uVar22;
          *(int *)((int)pdVar5 + 0x34) = (int)((ulonglong)dVar19 >> 0x20);
          pdVar5 = pdVar5 + 6;
          *(int *)pdVar5 = (int)((ulonglong)dVar16 >> 0x20);
        }
        else {
          dVar15 = pdVar12[2];
          pdVar5[7] = pdVar12[3];
          pdVar5[6] = dVar15;
          pdVar5[5] = dVar19;
          pdVar5 = pdVar5 + 4;
          *pdVar5 = dVar16;
        }
        uVar20 = SUB84(dVar15,0);
        *(undefined4 *)pdVar4 = 0xf0000000;
        CacheBlockWriteBack(pdVar4);
        if (*(uint *)((int)pdVar4 + 0x3c) != (uVar2 | uStack_38)) {
          *(uint *)((int)pdVar4 + 0x3c) = uVar2 | uStack_38;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar4 + 2,pdVar4 + 6,uStack_38);
          if (cVar25 == '\0') {
            *(undefined4 *)(pdVar4 + 4) = _DAT_8c4c2620;
            puVar10 = (undefined4 *)&DAT_8c4c2638;
            pdVar6 = (double *)&DAT_8c4c2628;
            dVar19 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
          }
          else {
            pdVar4[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
            puVar10 = (undefined4 *)&DAT_8c4c263c;
            pdVar6 = (double *)&DAT_8c4c2630;
            dVar19 = _DAT_8c4c2628;
          }
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)((int)pdVar4 + 0x24) = (int)((ulonglong)dVar19 >> 0x20);
            puVar9 = puVar10 + 1;
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar6,*puVar10);
            pdVar6 = (double *)((int)pdVar6 + 4);
          }
          else {
            *(double *)((int)pdVar4 + 0x24) = dVar19;
            puVar9 = puVar10 + 2;
            dVar19 = *pdVar6;
            pdVar6 = pdVar6 + 1;
          }
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)(pdVar4 + 5) = (int)((ulonglong)dVar19 >> 0x20);
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar6,*puVar9);
          }
          else {
            pdVar4[5] = dVar19;
            dVar19 = *pdVar6;
          }
          pdVar6 = (double *)((int)pdVar4 + 0x2c);
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)pdVar6 = (int)((ulonglong)dVar19 >> 0x20);
          }
          else {
            *pdVar6 = dVar19;
          }
          CacheBlockWriteBack(pdVar6);
        }
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar4,SUB84(dVar16,0));
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),SUB84(dVar19,0));
          pdVar4 = pdVar4 + 1;
        }
        else {
          in_dr0 = *pdVar4;
          dVar19 = pdVar4[1];
          pdVar4 = pdVar4 + 2;
        }
        if (cVar25 == '\0') {
          uVar22 = *(undefined4 *)(pdVar4 + 2);
          in_dr4 = (double)CONCAT44(uVar22,uVar20);
          *(undefined4 *)((int)pdVar5 + 0x3c) = *(undefined4 *)((int)pdVar4 + 0x14);
          *(undefined4 *)(pdVar5 + 7) = uVar22;
          *(int *)((int)pdVar5 + 0x34) = (int)((ulonglong)dVar19 >> 0x20);
          pdVar5 = pdVar5 + 6;
          *(int *)pdVar5 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar4[2];
          pdVar5[7] = pdVar4[3];
          pdVar5[6] = in_dr4;
          pdVar5[5] = dVar19;
          pdVar5 = pdVar5 + 4;
          *pdVar5 = in_dr0;
        }
        unaff_r8 = pdVar5 + 4;
        _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
      }
    }
  }
  else if (uVar3 == 0x8000) {
    for (iStack_30 = 0; uVar3 = (uint)ar4[1], iStack_30 < (int)uVar3; iStack_30 = iStack_30 + 1) {
      puVar14 = puVar13 + 1;
      uVar3 = (uint)*puVar13;
      _DAT_8c4aa51c = _DAT_8c4aa51c + uVar3;
      iVar8 = (uint)puVar13[2] * 0x40 + _DAT_8c4aa510;
      if (cVar25 == '\0') {
        dVar19 = (double)CONCAT44(*(undefined4 *)(iVar8 + 4),SUB84(in_dr4,0));
      }
      else {
        dVar19 = *(double *)(iVar8 + 4);
      }
      iVar11 = (uint)*puVar14 * 0x40 + _DAT_8c4aa510;
      uVar20 = (undefined4)((ulonglong)dVar19 >> 0x20);
      dVar16 = dVar19;
      if (cVar25 == '\0') {
        dVar16 = (double)CONCAT44(uVar20,*(undefined4 *)(iVar11 + 4));
      }
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) - SUB84(dVar16,0),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 - dVar16;
      }
      if (cVar25 == '\0') {
        dVar19 = (double)CONCAT44(uVar20,*(undefined4 *)(iVar8 + 8));
      }
      iVar8 = (uint)puVar13[3] * 0x40 + _DAT_8c4aa510;
      fVar21 = SUB84(dVar19,0);
      if (cVar25 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)(iVar8 + 8));
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),fVar21);
      }
      if (cVar24 == '\0') {
        fVar17 = SUB84(dVar16,0) - fVar21;
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) * fVar17,fVar17);
      }
      else {
        dVar16 = (dVar16 - dVar19) * (dVar16 - dVar19);
      }
      if (cVar25 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)(iVar11 + 8));
      }
      if (cVar24 == '\0') {
        dVar15 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - SUB84(dVar16,0)
                                 );
      }
      else {
        dVar15 = in_dr0 - dVar16;
      }
      if (cVar25 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),*(undefined4 *)(iVar8 + 4));
      }
      uStack_40 = 0;
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                  SUB84(dVar16,0) - (float)((ulonglong)dVar19 >> 0x20));
      }
      else {
        dVar16 = dVar16 - dVar19;
      }
      uVar18 = (uint)((ulonglong)dVar16 >> 0x20);
      dVar19 = dVar16;
      if (cVar25 == '\0') {
        dVar19 = (double)CONCAT44(uVar18,fVar21);
      }
      if (cVar24 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),SUB84(dVar15,0) * SUB84(dVar16,0)
                                 );
      }
      else {
        in_dr0 = dVar15 * dVar16;
      }
      dVar16 = (double)((ulonglong)uVar18 << 0x20);
      if (cVar24 == '\0') {
        fVar21 = (float)((ulonglong)dVar19 >> 0x20) - SUB84(in_dr0,0);
        in_dr4 = (double)CONCAT44(fVar21,SUB84(dVar19,0));
        bVar23 = 0.0 < fVar21;
      }
      else {
        in_dr4 = dVar19 - in_dr0;
        bVar23 = dVar16 < in_dr4;
      }
      uVar20 = SUB84(in_dr4,0);
      if (bVar23) {
        if ((_DAT_8c4ab308 & 0x800000) != 0) {
          uStack_40 = 0x8000;
          goto LAB_8c248420;
        }
        puVar13 = puVar14 + uVar3;
      }
      else {
LAB_8c248420:
        _DAT_8c4aa520 = _DAT_8c4aa520 + uVar3;
        iStack_2c = 0;
        if (0 < (int)(uVar3 - 1)) {
          do {
            uVar22 = SUB84(in_dr4,0);
            uVar20 = SUB84(in_dr0,0);
            uVar1 = *puVar14;
            puVar14 = puVar14 + 1;
            pdVar4 = (double *)((uint)uVar1 * 0x40 + _DAT_8c4aa510);
            *(undefined4 *)pdVar4 = 0xe0000000;
            CacheBlockWriteBack(pdVar4);
            if (*(uint *)((int)pdVar4 + 0x3c) != (uVar2 | uStack_40)) {
              *(uint *)((int)pdVar4 + 0x3c) = uVar2 | uStack_40;
              FUN_8c23bae2(&DAT_8c4c2620,pdVar4 + 2,pdVar4 + 6,uStack_40);
              if (cVar25 == '\0') {
                *(undefined4 *)(pdVar4 + 4) = _DAT_8c4c2620;
                puVar10 = (undefined4 *)&DAT_8c4c2638;
                pdVar5 = (double *)&DAT_8c4c2628;
                dVar19 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
              }
              else {
                pdVar4[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
                puVar10 = (undefined4 *)&DAT_8c4c263c;
                pdVar5 = (double *)&DAT_8c4c2630;
                dVar19 = _DAT_8c4c2628;
              }
              if (cVar24 == '\0') {
                dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                          SUB84(dVar19,0));
              }
              else {
                dVar19 = dVar19 + dVar19;
              }
              if (cVar25 == '\0') {
                *(int *)((int)pdVar4 + 0x24) = (int)((ulonglong)dVar19 >> 0x20);
                puVar9 = puVar10 + 1;
                dVar19 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar10);
                pdVar5 = (double *)((int)pdVar5 + 4);
              }
              else {
                *(double *)((int)pdVar4 + 0x24) = dVar19;
                puVar9 = puVar10 + 2;
                dVar19 = *pdVar5;
                pdVar5 = pdVar5 + 1;
              }
              if (cVar24 == '\0') {
                dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                          SUB84(dVar19,0));
              }
              else {
                dVar19 = dVar19 + dVar19;
              }
              if (cVar25 == '\0') {
                *(int *)(pdVar4 + 5) = (int)((ulonglong)dVar19 >> 0x20);
                dVar16 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar9);
              }
              else {
                pdVar4[5] = dVar19;
                dVar16 = *pdVar5;
              }
              pdVar5 = (double *)((int)pdVar4 + 0x2c);
              if (cVar24 == '\0') {
                dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                          SUB84(dVar16,0));
              }
              else {
                dVar16 = dVar16 + dVar16;
              }
              if (cVar25 == '\0') {
                *(int *)pdVar5 = (int)((ulonglong)dVar16 >> 0x20);
              }
              else {
                *pdVar5 = dVar16;
              }
              CacheBlockWriteBack(pdVar5);
            }
            if (cVar25 == '\0') {
              in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar4,uVar20);
              dVar16 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),SUB84(dVar16,0));
              pdVar4 = pdVar4 + 1;
            }
            else {
              in_dr0 = *pdVar4;
              dVar16 = pdVar4[1];
              pdVar4 = pdVar4 + 2;
            }
            if (cVar25 == '\0') {
              uVar20 = *(undefined4 *)(pdVar4 + 2);
              in_dr4 = (double)CONCAT44(uVar20,uVar22);
              *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0x14);
              *(undefined4 *)(unaff_r8 + 3) = uVar20;
              *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar16 >> 0x20);
              unaff_r8 = unaff_r8 + 2;
              *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              in_dr4 = pdVar4[2];
              unaff_r8[3] = pdVar4[3];
              unaff_r8[2] = in_dr4;
              unaff_r8[1] = dVar16;
              *unaff_r8 = in_dr0;
            }
            uVar20 = SUB84(in_dr4,0);
            unaff_r8 = unaff_r8 + 4;
            iStack_2c = iStack_2c + 1;
          } while (iStack_2c < (int)(uVar3 - 1));
        }
        uVar22 = SUB84(in_dr0,0);
        puVar13 = puVar14 + 1;
        pdVar4 = (double *)((uint)*puVar14 * 0x40 + _DAT_8c4aa510);
        *(undefined4 *)pdVar4 = 0xf0000000;
        CacheBlockWriteBack(pdVar4);
        if (*(uint *)((int)pdVar4 + 0x3c) != (uVar2 | uStack_40)) {
          *(uint *)((int)pdVar4 + 0x3c) = uVar2 | uStack_40;
          FUN_8c23bae2(&DAT_8c4c2620,pdVar4 + 2,pdVar4 + 6,uStack_40);
          if (cVar25 == '\0') {
            *(undefined4 *)(pdVar4 + 4) = _DAT_8c4c2620;
            puVar10 = (undefined4 *)&DAT_8c4c2638;
            pdVar5 = (double *)&DAT_8c4c2628;
            dVar19 = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2634);
          }
          else {
            pdVar4[4] = (double)CONCAT44(_DAT_8c4c2624,_DAT_8c4c2620);
            puVar10 = (undefined4 *)&DAT_8c4c263c;
            pdVar5 = (double *)&DAT_8c4c2630;
            dVar19 = _DAT_8c4c2628;
          }
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)((int)pdVar4 + 0x24) = (int)((ulonglong)dVar19 >> 0x20);
            puVar9 = puVar10 + 1;
            dVar19 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar10);
            pdVar5 = (double *)((int)pdVar5 + 4);
          }
          else {
            *(double *)((int)pdVar4 + 0x24) = dVar19;
            puVar9 = puVar10 + 2;
            dVar19 = *pdVar5;
            pdVar5 = pdVar5 + 1;
          }
          if (cVar24 == '\0') {
            dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar19,0),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (cVar25 == '\0') {
            *(int *)(pdVar4 + 5) = (int)((ulonglong)dVar19 >> 0x20);
            dVar16 = (double)CONCAT44(*(undefined4 *)pdVar5,*puVar9);
          }
          else {
            pdVar4[5] = dVar19;
            dVar16 = *pdVar5;
          }
          pdVar5 = (double *)((int)pdVar4 + 0x2c);
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) + SUB84(dVar16,0),
                                      SUB84(dVar16,0));
          }
          else {
            dVar16 = dVar16 + dVar16;
          }
          if (cVar25 == '\0') {
            *(int *)pdVar5 = (int)((ulonglong)dVar16 >> 0x20);
          }
          else {
            *pdVar5 = dVar16;
          }
          CacheBlockWriteBack(pdVar5);
        }
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar4,uVar22);
          dVar19 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),SUB84(dVar16,0));
          pdVar4 = pdVar4 + 1;
        }
        else {
          in_dr0 = *pdVar4;
          dVar19 = pdVar4[1];
          pdVar4 = pdVar4 + 2;
        }
        if (cVar25 == '\0') {
          uVar22 = *(undefined4 *)(pdVar4 + 2);
          in_dr4 = (double)CONCAT44(uVar22,uVar20);
          *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0x14);
          *(undefined4 *)(unaff_r8 + 3) = uVar22;
          *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar19 >> 0x20);
          unaff_r8 = unaff_r8 + 2;
          *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          in_dr4 = pdVar4[2];
          unaff_r8[3] = pdVar4[3];
          unaff_r8[2] = in_dr4;
          unaff_r8[1] = dVar19;
          *unaff_r8 = in_dr0;
        }
        unaff_r8 = unaff_r8 + 4;
      }
    }
  }
  else if (uVar3 == 0xc000) {
    if ((_DAT_8c4ab308 & 0x800000) == 0) {
      UNRECOVERED_JUMPTABLE = FUN_8c23efac;
    }
    else {
      UNRECOVERED_JUMPTABLE = FUN_8c23eda6;
    }
                    
                    
    uVar20 = (*UNRECOVERED_JUMPTABLE)(ar4,uVar2);
    return uVar20;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c247e16\n.set _FUN_8c247e16, _FUN_8c247e16_def\n");
