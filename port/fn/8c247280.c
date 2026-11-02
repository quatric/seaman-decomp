#include "../decls.h"
undefined4 FUN_8c247280_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  double *unaff_r8;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  double in_dr0;
  float fVar13;
  double in_dr2;
  double dVar14;
  undefined8 uVar15;
  double in_dr4;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double in_dr6;
  undefined4 in_fr13;
  float fVar19;
  double dVar20;
  double in_dr14;
  float fVar22;
  double dVar21;
  double in_xd2;
  double in_xd12;
  bool bVar23;
  char cVar24;
  char cVar25;
  undefined4 in_stack_ffffffc0;
  int iStack_38;
  uint uStack_34;
  
  cVar25 = '\0';
  cVar24 = '\0';
  dVar20 = (double)CONCAT44(0x3f800000,in_fr13);
  noop_23d694(ar4,ar5,ar6,ar7,in_stack_ffffffc0);
  iVar3 = _DAT_8c4aa510;
  uVar2 = _DAT_8c4ab308 & 0x800000;
  puVar10 = *(ushort **)(ar4 + 4);
  uStack_34 = (uint)*(ushort *)(ar4 + 2);
  iStack_38 = 0;
  do {
    uVar18 = SUB84(in_dr14,0);
    puVar11 = puVar10 + 1;
    uVar5 = (uint)*puVar10;
    uVar17 = (undefined4)((ulonglong)dVar20 >> 0x20);
    if (cVar25 == '\0') {
      uVar18 = uVar17;
    }
    if ((*puVar10 & 0x8000) != 0) {
      uVar5 = uVar5 & 0x7fff;
      uVar18 = 0xbf800000;
    }
    iStack_38 = iStack_38 + uVar5;
    iVar4 = uVar5 - 2;
    puVar12 = puVar10 + 2;
    puVar10 = puVar10 + 3;
    pdVar8 = (double *)((uint)*puVar12 * 0x40 + iVar3);
    pdVar6 = (double *)((uint)*puVar11 * 0x40 + iVar3);
    pdVar7 = unaff_r8;
    if (cVar25 == '\0') {
      dVar20 = (double)CONCAT44(uVar17,*(undefined4 *)((int)pdVar8 + 4));
      in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 4),SUB84(in_dr6,0));
      in_dr14 = (double)CONCAT44(*(undefined4 *)(pdVar8 + 1),uVar18);
      in_dr4 = (double)(ulonglong)*(uint *)(pdVar6 + 1);
      dVar21 = in_xd12;
    }
    else {
      in_dr6 = *(double *)((int)pdVar6 + 4);
      in_dr14 = pdVar8[1];
      dVar21 = *(double *)((int)pdVar8 + 4);
    }
    do {
      uVar1 = *puVar10;
      puVar10 = puVar10 + 1;
      pdVar9 = (double *)((uint)uVar1 * 0x40 + iVar3);
      uVar18 = (undefined4)((ulonglong)dVar20 >> 0x20);
      dVar16 = dVar20;
      if (cVar25 == '\0') {
        dVar16 = (double)CONCAT44(uVar18,SUB84(in_dr4,0));
      }
      fVar19 = SUB84(dVar20,0);
      fVar22 = (float)((ulonglong)in_dr14 >> 0x20);
      if ((*(uint *)pdVar6 & *(uint *)pdVar8 & *(uint *)pdVar9 & 0x3f) == 0) {
        if (cVar25 == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 1),fVar19);
        }
        else {
          dVar14 = pdVar9[1];
          in_xd2 = dVar21;
        }
        if (cVar24 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) - fVar22,
                                    SUB84(dVar14,0) - (float)((ulonglong)in_dr6 >> 0x20));
        }
        else {
          dVar14 = (dVar14 - in_dr6) - in_dr14;
        }
        if (cVar25 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)((int)pdVar9 + 4));
        }
        if (cVar24 == '\0') {
          in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - fVar19);
          fVar13 = SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          in_dr0 = in_dr0 - dVar20;
          fVar13 = SUB84(dVar14 * dVar14,0);
        }
        dVar14 = in_dr14;
        if (cVar25 == '\0') {
          dVar14 = (double)CONCAT44(fVar22,fVar13);
        }
        if (cVar24 == '\0') {
          fVar13 = ((float)((ulonglong)dVar14 >> 0x20) - SUB84(dVar16,0)) * SUB84(in_dr0,0);
          in_dr2 = (double)CONCAT44(fVar13,SUB84(dVar14,0) - fVar13);
        }
        else {
          in_dr2 = (dVar14 - dVar16) * in_dr0;
          in_dr2 = in_dr2 - in_dr2;
        }
        dVar14 = in_xd2;
        if (cVar25 == '\0') {
          dVar14 = (double)CONCAT44(SUB84(in_dr2,0),SUB84(dVar16,0));
        }
        if (cVar24 == '\0') {
          dVar16 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) * SUB84(in_dr14,0),
                                    SUB84(dVar14,0));
        }
        else {
          dVar16 = dVar14 * in_dr14;
        }
        in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
        if (cVar24 == '\0') {
          bVar23 = 0.0 < (float)((ulonglong)dVar16 >> 0x20);
        }
        else {
          bVar23 = in_dr2 < dVar16;
        }
        if ((bVar23) && (uVar2 != 0)) {
          if (cVar24 == '\0') {
            dVar16 = (double)CONCAT44(0xbf800000,SUB84(dVar16,0));
          }
          else {
            dVar16 = -(double)CONCAT44(0x3f800000,SUB84(dVar16,0));
          }
        }
      }
      uVar5 = (uint)((ulonglong)in_dr2 >> 0x20);
      fVar13 = (float)((ulonglong)dVar16 >> 0x20);
      if (pdVar7 < unaff_r8) {
        if (cVar24 == '\0') {
          bVar23 = fVar13 < 0.0;
        }
        else {
          bVar23 = dVar16 < (double)((ulonglong)uVar5 << 0x20);
        }
        if (bVar23) {
          *(undefined4 *)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (cVar25 == '\0') {
            *(undefined4 *)(pdVar8 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)pdVar8 + 0x24) = _DAT_8c4c11b4;
            uVar17 = _DAT_8c4c11b8;
            *(undefined4 *)(pdVar8 + 5) = _DAT_8c4c11b8;
            uVar15 = CONCAT44(_DAT_8c4c11bc,uVar17);
            *(undefined4 *)((int)pdVar8 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            pdVar8[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)pdVar8 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            pdVar8[5] = _DAT_8c4c11c0;
            uVar15 = _DAT_8c4c11c8;
            *(undefined8 *)((int)pdVar8 + 0x2c) = _DAT_8c4c11c8;
          }
          uVar17 = (undefined4)uVar15;
          CacheBlockWriteBack((undefined4 *)((int)pdVar8 + 0x2c));
LAB_8c2474ac:
          if (cVar25 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr0,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),uVar17);
            pdVar6 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            pdVar6 = pdVar8 + 2;
          }
          if (cVar25 == '\0') {
            uVar17 = *(undefined4 *)(pdVar6 + 2);
            dVar16 = (double)CONCAT44(uVar17,SUB84(dVar16,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar6 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar17;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar16 = pdVar6[2];
            in_dr6 = pdVar6[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar16;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          *(undefined4 *)pdVar8 = 0xf0000000;
          CacheBlockWriteBack(pdVar8);
          if (cVar25 == '\0') {
            *(undefined4 *)(pdVar8 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)pdVar8 + 0x24) = _DAT_8c4c11b4;
            uVar17 = _DAT_8c4c11b8;
            *(undefined4 *)(pdVar8 + 5) = _DAT_8c4c11b8;
            uVar15 = CONCAT44(_DAT_8c4c11bc,uVar17);
            *(undefined4 *)((int)pdVar8 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            pdVar8[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)pdVar8 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            pdVar8[5] = _DAT_8c4c11c0;
            uVar15 = _DAT_8c4c11c8;
            *(undefined8 *)((int)pdVar8 + 0x2c) = _DAT_8c4c11c8;
          }
          CacheBlockWriteBack((undefined4 *)((int)pdVar8 + 0x2c));
          if (cVar25 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar8,SUB84(in_dr0,0));
            in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar8 + 4),(int)uVar15);
            pdVar6 = pdVar8 + 1;
          }
          else {
            in_dr0 = *pdVar8;
            in_dr2 = pdVar8[1];
            pdVar6 = pdVar8 + 2;
          }
          if (cVar25 == '\0') {
            uVar17 = *(undefined4 *)(pdVar6 + 2);
            dVar16 = (double)CONCAT44(uVar17,SUB84(dVar16,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar6 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar17;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar16 = pdVar6[2];
            in_dr6 = pdVar6[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar16;
            unaff_r8[1] = in_dr2;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          pdVar7 = unaff_r8;
        }
      }
      else {
        in_dr2 = (double)((ulonglong)uVar5 << 0x20);
        if (cVar24 == '\0') {
          bVar23 = fVar13 < 0.0;
        }
        else {
          bVar23 = dVar16 < in_dr2;
        }
        if (bVar23) {
          *(undefined4 *)pdVar6 = 0xe0000000;
          CacheBlockWriteBack(pdVar6);
          if (cVar25 == '\0') {
            *(undefined4 *)(pdVar6 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)pdVar6 + 0x24) = _DAT_8c4c11b4;
            uVar17 = _DAT_8c4c11b8;
            *(undefined4 *)(pdVar6 + 5) = _DAT_8c4c11b8;
            uVar15 = CONCAT44(_DAT_8c4c11bc,uVar17);
            *(undefined4 *)((int)pdVar6 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            pdVar6[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)pdVar6 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            pdVar6[5] = _DAT_8c4c11c0;
            uVar15 = _DAT_8c4c11c8;
            *(undefined8 *)((int)pdVar6 + 0x2c) = _DAT_8c4c11c8;
          }
          CacheBlockWriteBack((undefined4 *)((int)pdVar6 + 0x2c));
          if (cVar25 == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar6,SUB84(in_dr0,0));
            dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 4),(int)uVar15);
            pdVar6 = pdVar6 + 1;
          }
          else {
            in_dr0 = *pdVar6;
            dVar14 = pdVar6[1];
            pdVar6 = pdVar6 + 2;
          }
          if (cVar25 == '\0') {
            uVar17 = *(undefined4 *)(pdVar6 + 2);
            dVar16 = (double)CONCAT44(uVar17,SUB84(dVar16,0));
            in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar6 + 0x14),SUB84(in_dr6,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar6 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar17;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar14 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar16 = pdVar6[2];
            in_dr6 = pdVar6[3];
            unaff_r8[3] = in_dr6;
            unaff_r8[2] = dVar16;
            unaff_r8[1] = dVar14;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)pdVar8 = 0xe0000000;
          CacheBlockWriteBack(pdVar8);
          if (cVar25 == '\0') {
            *(undefined4 *)(pdVar8 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)pdVar8 + 0x24) = _DAT_8c4c11b4;
            uVar17 = _DAT_8c4c11b8;
            *(undefined4 *)(pdVar8 + 5) = _DAT_8c4c11b8;
            uVar15 = CONCAT44(_DAT_8c4c11bc,uVar17);
            *(undefined4 *)((int)pdVar8 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            pdVar8[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)pdVar8 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            pdVar8[5] = _DAT_8c4c11c0;
            uVar15 = _DAT_8c4c11c8;
            *(undefined8 *)((int)pdVar8 + 0x2c) = _DAT_8c4c11c8;
          }
          uVar17 = (undefined4)uVar15;
          CacheBlockWriteBack((undefined4 *)((int)pdVar8 + 0x2c));
          goto LAB_8c2474ac;
        }
      }
      if (cVar25 == '\0') {
        dVar20 = (double)CONCAT44(uVar18,*(undefined4 *)((int)pdVar9 + 4));
        in_xd12 = dVar21;
        in_dr6 = (double)CONCAT44(fVar19,SUB84(in_dr6,0));
      }
      else {
        in_xd12 = *(double *)((int)pdVar9 + 4);
        in_dr6 = dVar21;
      }
      if (cVar25 == '\0') {
        dVar21 = (double)CONCAT44(*(undefined4 *)(pdVar9 + 1),SUB84(in_dr14,0));
        in_dr4 = (double)(ulonglong)(uint)fVar22;
      }
      else {
        dVar21 = pdVar9[1];
        in_dr4 = dVar16;
      }
      iVar4 = iVar4 + -1;
      in_dr14 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),-SUB84(dVar21,0));
      pdVar6 = pdVar8;
      pdVar8 = pdVar9;
      dVar21 = in_xd12;
    } while (iVar4 != 0);
    if (pdVar7 < unaff_r8) {
      *(undefined4 *)pdVar9 = 0xf0000000;
      CacheBlockWriteBack(pdVar9);
      if (cVar25 == '\0') {
        *(undefined4 *)(pdVar9 + 4) = _DAT_8c4c11b0;
        *(undefined4 *)((int)pdVar9 + 0x24) = _DAT_8c4c11b4;
        uVar18 = _DAT_8c4c11b8;
        *(undefined4 *)(pdVar9 + 5) = _DAT_8c4c11b8;
        uVar15 = CONCAT44(_DAT_8c4c11bc,uVar18);
        *(undefined4 *)((int)pdVar9 + 0x2c) = _DAT_8c4c11bc;
      }
      else {
        pdVar9[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
        *(ulonglong *)((int)pdVar9 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
        in_xd2 = _DAT_8c4c11c0;
        pdVar9[5] = _DAT_8c4c11c0;
        uVar15 = _DAT_8c4c11c8;
        *(undefined8 *)((int)pdVar9 + 0x2c) = _DAT_8c4c11c8;
      }
      CacheBlockWriteBack((undefined4 *)((int)pdVar9 + 0x2c));
      if (cVar25 == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar9,SUB84(in_dr0,0));
        in_dr2 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 4),(int)uVar15);
        pdVar9 = pdVar9 + 1;
      }
      else {
        in_dr0 = *pdVar9;
        in_dr2 = pdVar9[1];
        pdVar9 = pdVar9 + 2;
      }
      if (cVar25 == '\0') {
        uVar18 = *(undefined4 *)(pdVar9 + 2);
        in_dr4 = (double)CONCAT44(uVar18,SUB84(in_dr4,0));
        in_dr6 = (double)CONCAT44(*(undefined4 *)((int)pdVar9 + 0x14),SUB84(in_dr6,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar9 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar18;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)in_dr2 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar9[2];
        in_dr6 = pdVar9[3];
        unaff_r8[3] = in_dr6;
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = in_dr2;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
    }
    uStack_34 = uStack_34 - 1;
    if (uStack_34 == 0) {
      _DAT_8c4aa51c = _DAT_8c4aa51c + iStack_38;
      _DAT_8c4aa520 = _DAT_8c4aa520 + iStack_38;
      return 8;
    }
  } while( true );
}

__asm__(".globl _FUN_8c247280\n.set _FUN_8c247280, _FUN_8c247280_def\n");
