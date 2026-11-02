#include "../decls.h"
undefined4 FUN_8c242234_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  double *unaff_r8;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  double in_dr0;
  float fVar12;
  double dVar13;
  float fVar15;
  uint uVar16;
  undefined8 uVar14;
  double in_dr4;
  undefined4 uVar18;
  double dVar17;
  undefined4 uVar19;
  float in_fr13;
  undefined4 in_fr12;
  double in_dr14;
  float fVar20;
  double in_xd2;
  double in_xd12;
  undefined8 in_xd14;
  bool bVar21;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [4];
  undefined8 uStack_20;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_20 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_20);
                    
    (*(uint*)((uchar*)&uStack_20+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar11 = auStack_24;
  }
  else {
    puVar11 = auStack_30;
    uStack_20 = in_xd14;
  }
  *(undefined4 *)(puVar11 + -4) = in_PR;
  *(undefined4 *)(puVar11 + -0x10) = ar4;
  noop_23d694(ar4,ar5,ar6,ar7,*(undefined4 *)(puVar11 + -0x14));
  iVar2 = _DAT_8c4aa510;
  puVar8 = *(ushort **)(*(int *)(puVar11 + -0x10) + 4);
  *(uint *)(puVar11 + -8) = (uint)*(ushort *)(*(int *)(puVar11 + -0x10) + 2);
  *(undefined4 *)(puVar11 + -0xc) = 0;
  *(undefined4 *)(puVar11 + -0x10) = 0;
  do {
    uVar19 = SUB84(in_dr14,0);
    uVar1 = *puVar8;
    puVar9 = puVar8 + 1;
    *(uint *)(puVar11 + -0x14) = (uint)uVar1;
    if (in_FPSCR_SZ == '\0') {
      uVar19 = 0x3f800000;
    }
    if ((uVar1 & 0x8000) != 0) {
      if (in_FPSCR_PR == '\0') {
        uVar18 = 0xbf800000;
      }
      else {
        uVar18 = (undefined4)((ulonglong)-(double)CONCAT44(0x3f800000,SUB84(in_dr4,0)) >> 0x20);
      }
      *(uint *)(puVar11 + -0x14) = *(uint *)(puVar11 + -0x14) & 0x7fff;
      if (in_FPSCR_SZ == '\0') {
        uVar19 = uVar18;
      }
    }
    *(int *)(puVar11 + -0x10) = *(int *)(puVar11 + -0x10) + *(int *)(puVar11 + -0x14);
    *(int *)(puVar11 + -0x14) = *(int *)(puVar11 + -0x14) + -2;
    puVar10 = puVar8 + 2;
    puVar8 = puVar8 + 3;
    pdVar5 = (double *)((uint)*puVar10 * 0x40 + iVar2);
    pdVar4 = (double *)((uint)*puVar9 * 0x40 + iVar2);
    pdVar6 = unaff_r8;
    if (in_FPSCR_SZ == '\0') {
      in_fr13 = *(float *)((int)pdVar5 + 4);
      in_dr14 = (double)CONCAT44(*(undefined4 *)(pdVar5 + 1),uVar19);
      in_dr4 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),*(undefined4 *)(pdVar4 + 1));
    }
    else {
      in_xd12 = *(double *)((int)pdVar5 + 4);
      in_dr4 = *(double *)((int)pdVar4 + 4);
      in_dr14 = pdVar5[1];
    }
    do {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 1;
      pdVar7 = (double *)((uint)uVar1 * 0x40 + iVar2);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 1),in_fr13);
      }
      else {
        dVar13 = pdVar7[1];
        in_xd2 = in_xd12;
      }
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),
                                  SUB84(dVar13,0) - (float)((ulonglong)in_dr4 >> 0x20));
      }
      else {
        dVar13 = dVar13 - in_dr4;
      }
      fVar20 = (float)((ulonglong)in_dr14 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) - fVar20,SUB84(dVar13,0));
      }
      else {
        dVar13 = dVar13 - in_dr14;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)((int)pdVar7 + 4))
        ;
      }
      if (in_FPSCR_PR == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),SUB84(in_dr0,0) - in_fr13);
        fVar12 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        in_dr0 = in_dr0 - (double)CONCAT44(in_fr12,in_fr13);
        fVar12 = SUB84(dVar13 * dVar13,0);
      }
      dVar13 = in_dr14;
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(fVar20,fVar12);
      }
      fVar12 = SUB84(in_dr0,0);
      if (in_FPSCR_PR == '\0') {
        fVar15 = ((float)((ulonglong)dVar13 >> 0x20) - SUB84(in_dr4,0)) * fVar12;
        dVar13 = (double)CONCAT44(fVar15,SUB84(dVar13,0) - fVar15);
      }
      else {
        dVar13 = (dVar13 - in_dr4) * in_dr0;
        dVar13 = dVar13 - dVar13;
      }
      dVar17 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(SUB84(dVar13,0),SUB84(in_dr4,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(in_dr14,0),
                                  SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 * in_dr14;
      }
      uVar16 = (uint)((ulonglong)dVar13 >> 0x20);
      fVar15 = (float)((ulonglong)dVar17 >> 0x20);
      if (pdVar6 < unaff_r8) {
        if (in_FPSCR_PR == '\0') {
          bVar21 = fVar15 < 0.0;
        }
        else {
          bVar21 = dVar17 < (double)((ulonglong)uVar16 << 0x20);
        }
        if (bVar21) {
          *(undefined4 *)pdVar5 = 0xe0000000;
          CacheBlockWriteBack(pdVar5);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar5 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)pdVar5 + 0x24) = _DAT_8c4c11b4;
            uVar19 = _DAT_8c4c11b8;
            *(undefined4 *)(pdVar5 + 5) = _DAT_8c4c11b8;
            uVar14 = CONCAT44(_DAT_8c4c11bc,uVar19);
            *(undefined4 *)((int)pdVar5 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            pdVar5[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)pdVar5 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            pdVar5[5] = _DAT_8c4c11c0;
            uVar14 = _DAT_8c4c11c8;
            *(undefined8 *)((int)pdVar5 + 0x2c) = _DAT_8c4c11c8;
          }
          uVar19 = (undefined4)uVar14;
          CacheBlockWriteBack((undefined4 *)((int)pdVar5 + 0x2c));
LAB_8c242424:
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(in_dr0,0));
            dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),uVar19);
            pdVar4 = pdVar5 + 1;
          }
          else {
            in_dr0 = *pdVar5;
            dVar13 = pdVar5[1];
            pdVar4 = pdVar5 + 2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar19 = *(undefined4 *)(pdVar4 + 2);
            dVar17 = (double)CONCAT44(uVar19,SUB84(dVar17,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar19;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar13 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar17 = pdVar4[2];
            unaff_r8[3] = pdVar4[3];
            unaff_r8[2] = dVar17;
            unaff_r8[1] = dVar13;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
        }
        else {
          *(undefined4 *)pdVar5 = 0xf0000000;
          CacheBlockWriteBack(pdVar5);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar5 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)pdVar5 + 0x24) = _DAT_8c4c11b4;
            uVar19 = _DAT_8c4c11b8;
            *(undefined4 *)(pdVar5 + 5) = _DAT_8c4c11b8;
            uVar14 = CONCAT44(_DAT_8c4c11bc,uVar19);
            *(undefined4 *)((int)pdVar5 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            pdVar5[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)pdVar5 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            pdVar5[5] = _DAT_8c4c11c0;
            uVar14 = _DAT_8c4c11c8;
            *(undefined8 *)((int)pdVar5 + 0x2c) = _DAT_8c4c11c8;
          }
          CacheBlockWriteBack((undefined4 *)((int)pdVar5 + 0x2c));
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar12);
            dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + 4),(int)uVar14);
            pdVar4 = pdVar5 + 1;
          }
          else {
            in_dr0 = *pdVar5;
            dVar13 = pdVar5[1];
            pdVar4 = pdVar5 + 2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar19 = *(undefined4 *)(pdVar4 + 2);
            dVar17 = (double)CONCAT44(uVar19,SUB84(dVar17,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar19;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar13 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar17 = pdVar4[2];
            unaff_r8[3] = pdVar4[3];
            unaff_r8[2] = dVar17;
            unaff_r8[1] = dVar13;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          *(int *)(puVar11 + -0xc) = (int)unaff_r8 + *(int *)(puVar11 + -0xc) + (0x20 - (int)pdVar6)
          ;
          pdVar6 = unaff_r8;
        }
      }
      else {
        if (in_FPSCR_PR == '\0') {
          bVar21 = fVar15 < 0.0;
        }
        else {
          bVar21 = dVar17 < (double)((ulonglong)uVar16 << 0x20);
        }
        if (bVar21) {
          *(undefined4 *)pdVar4 = 0xe0000000;
          CacheBlockWriteBack(pdVar4);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar4 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)pdVar4 + 0x24) = _DAT_8c4c11b4;
            uVar19 = _DAT_8c4c11b8;
            *(undefined4 *)(pdVar4 + 5) = _DAT_8c4c11b8;
            uVar14 = CONCAT44(_DAT_8c4c11bc,uVar19);
            *(undefined4 *)((int)pdVar4 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            pdVar4[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)pdVar4 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            pdVar4[5] = _DAT_8c4c11c0;
            uVar14 = _DAT_8c4c11c8;
            *(undefined8 *)((int)pdVar4 + 0x2c) = _DAT_8c4c11c8;
          }
          CacheBlockWriteBack((undefined4 *)((int)pdVar4 + 0x2c));
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar4,fVar12);
            dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar4 + 4),(int)uVar14);
            pdVar4 = pdVar4 + 1;
          }
          else {
            in_dr0 = *pdVar4;
            dVar13 = pdVar4[1];
            pdVar4 = pdVar4 + 2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar19 = *(undefined4 *)(pdVar4 + 2);
            dVar17 = (double)CONCAT44(uVar19,SUB84(dVar17,0));
            *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar4 + 0x14);
            *(undefined4 *)(unaff_r8 + 3) = uVar19;
            *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar13 >> 0x20);
            unaff_r8 = unaff_r8 + 2;
            *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            dVar17 = pdVar4[2];
            unaff_r8[3] = pdVar4[3];
            unaff_r8[2] = dVar17;
            unaff_r8[1] = dVar13;
            *unaff_r8 = in_dr0;
          }
          unaff_r8 = unaff_r8 + 4;
          *(undefined4 *)pdVar5 = 0xe0000000;
          CacheBlockWriteBack(pdVar5);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(pdVar5 + 4) = _DAT_8c4c11b0;
            *(undefined4 *)((int)pdVar5 + 0x24) = _DAT_8c4c11b4;
            uVar19 = _DAT_8c4c11b8;
            *(undefined4 *)(pdVar5 + 5) = _DAT_8c4c11b8;
            uVar14 = CONCAT44(_DAT_8c4c11bc,uVar19);
            *(undefined4 *)((int)pdVar5 + 0x2c) = _DAT_8c4c11bc;
          }
          else {
            pdVar5[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
            *(ulonglong *)((int)pdVar5 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
            in_xd2 = _DAT_8c4c11c0;
            pdVar5[5] = _DAT_8c4c11c0;
            uVar14 = _DAT_8c4c11c8;
            *(undefined8 *)((int)pdVar5 + 0x2c) = _DAT_8c4c11c8;
          }
          uVar19 = (undefined4)uVar14;
          CacheBlockWriteBack((undefined4 *)((int)pdVar5 + 0x2c));
          goto LAB_8c242424;
        }
      }
      in_dr4 = in_xd12;
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44(in_fr13,SUB84(dVar17,0));
      }
      iVar3 = *(int *)(puVar11 + -0x14);
      if (in_FPSCR_SZ == '\0') {
        in_fr13 = *(float *)((int)pdVar7 + 4);
      }
      else {
        in_xd12 = *(double *)((int)pdVar7 + 4);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar20);
        dVar13 = (double)CONCAT44(*(undefined4 *)(pdVar7 + 1),SUB84(in_dr14,0));
      }
      else {
        dVar13 = pdVar7[1];
      }
      in_dr14 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),-SUB84(dVar13,0));
      *(int *)(puVar11 + -0x14) = iVar3 + -1;
      pdVar4 = pdVar5;
      pdVar5 = pdVar7;
    } while (iVar3 + -1 != 0);
    if (pdVar6 < unaff_r8) {
      *(undefined4 *)pdVar7 = 0xf0000000;
      CacheBlockWriteBack(pdVar7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(pdVar7 + 4) = _DAT_8c4c11b0;
        *(undefined4 *)((int)pdVar7 + 0x24) = _DAT_8c4c11b4;
        uVar19 = _DAT_8c4c11b8;
        *(undefined4 *)(pdVar7 + 5) = _DAT_8c4c11b8;
        uVar14 = CONCAT44(_DAT_8c4c11bc,uVar19);
        *(undefined4 *)((int)pdVar7 + 0x2c) = _DAT_8c4c11bc;
      }
      else {
        pdVar7[4] = (double)CONCAT44(_DAT_8c4c11b4,_DAT_8c4c11b0);
        *(ulonglong *)((int)pdVar7 + 0x24) = CONCAT44(_DAT_8c4c11bc,_DAT_8c4c11b8);
        in_xd2 = _DAT_8c4c11c0;
        pdVar7[5] = _DAT_8c4c11c0;
        uVar14 = _DAT_8c4c11c8;
        *(undefined8 *)((int)pdVar7 + 0x2c) = _DAT_8c4c11c8;
      }
      CacheBlockWriteBack((undefined4 *)((int)pdVar7 + 0x2c));
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)pdVar7,SUB84(in_dr0,0));
        dVar13 = (double)CONCAT44(*(undefined4 *)((int)pdVar7 + 4),(int)uVar14);
        pdVar7 = pdVar7 + 1;
      }
      else {
        in_dr0 = *pdVar7;
        dVar13 = pdVar7[1];
        pdVar7 = pdVar7 + 2;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar19 = *(undefined4 *)(pdVar7 + 2);
        in_dr4 = (double)CONCAT44(uVar19,SUB84(in_dr4,0));
        *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)pdVar7 + 0x14);
        *(undefined4 *)(unaff_r8 + 3) = uVar19;
        *(int *)((int)unaff_r8 + 0x14) = (int)((ulonglong)dVar13 >> 0x20);
        unaff_r8 = unaff_r8 + 2;
        *(int *)unaff_r8 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        in_dr4 = pdVar7[2];
        unaff_r8[3] = pdVar7[3];
        unaff_r8[2] = in_dr4;
        unaff_r8[1] = dVar13;
        *unaff_r8 = in_dr0;
      }
      unaff_r8 = unaff_r8 + 4;
      *(int *)(puVar11 + -0xc) = (int)unaff_r8 + *(int *)(puVar11 + -0xc) + (0x20 - (int)pdVar6);
    }
    iVar3 = *(int *)(puVar11 + -8);
    *(int *)(puVar11 + -8) = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      _DAT_8c4aa520 = _DAT_8c4aa520 + (*(uint *)(puVar11 + -0xc) >> 5);
      _DAT_8c4aa51c = _DAT_8c4aa51c + *(int *)(puVar11 + -0x10);
      return 8;
    }
  } while( true );
}

__asm__(".globl _FUN_8c242234\n.set _FUN_8c242234, _FUN_8c242234_def\n");
