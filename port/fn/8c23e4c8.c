#include "../decls.h"
int FUN_8c23e4c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *unaff_r8;
  undefined8 *puVar9;
  int *piVar10;
  double in_dr0;
  double dVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  double in_dr2;
  ulonglong uVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  double dVar22;
  double in_xd2;
  double in_xd4;
  char cVar23;
  char cVar24;
  int aiStack_28 [4];
  
  cVar24 = '\0';
  cVar23 = '\0';
  dVar22 = (double)(ulonglong)_DAT_8c4c11bc;
  uVar12 = _DAT_8c4c11b4;
  aiStack_28[0] = ar4;
  aiStack_28[1] = ar5;
  aiStack_28[2] = ar6;
  uVar3 = float_to_color_u8(ar4,ar5,ar6,ar7);
  piVar5 = aiStack_28;
  if (cVar24 == '\0') {
    dVar19 = (double)CONCAT44(0x3f000000,uVar12);
  }
  else {
    dVar19 = -2.198282791852599e+155;
  }
  while (piVar5 < aiStack_28 + 3) {
    iVar4 = *piVar5;
    uVar12 = (undefined4)((ulonglong)dVar19 >> 0x20);
    if (cVar24 == '\0') {
      uVar16 = CONCAT44(*(undefined4 *)(iVar4 + 0x30),uVar12);
      dVar20 = (double)CONCAT44(uVar12,SUB84(in_dr0,0));
    }
    else {
      uVar16 = *(ulonglong *)(iVar4 + 0x30);
      in_xd2 = dVar19;
      dVar20 = dVar19;
    }
    if (cVar23 == '\0') {
      uVar16 = (ulonglong)
               (uint)((float)((ulonglong)dVar20 >> 0x20) * (float)(uVar16 >> 0x20) + (float)uVar16);
    }
    if (cVar24 == '\0') {
      *(int *)(iVar4 + 0x20) = (int)uVar16;
      in_dr0 = (double)CONCAT44(uVar12,SUB84(dVar20,0));
    }
    else {
      *(double *)(iVar4 + 0x20) = in_xd2;
      in_dr0 = dVar19;
    }
    iVar4 = *piVar5;
    if (cVar24 == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)(iVar4 + 0x34),uVar12);
    }
    else {
      in_dr2 = *(double *)(iVar4 + 0x34);
      in_xd2 = dVar19;
    }
    if (cVar23 == '\0') {
      in_dr2 = (double)(ulonglong)
                       (uint)((float)((ulonglong)in_dr0 >> 0x20) *
                              (float)((ulonglong)in_dr2 >> 0x20) + SUB84(in_dr2,0));
    }
    if (cVar24 == '\0') {
      *(int *)(iVar4 + 0x24) = SUB84(in_dr2,0);
      piVar5 = piVar5 + 1;
    }
    else {
      *(double *)(iVar4 + 0x24) = in_xd2;
      piVar5 = piVar5 + 1;
    }
  }
  iVar8 = 0;
  iVar4 = 0;
  iVar7 = 2;
  do {
    iVar6 = iVar4;
    piVar10 = aiStack_28 + iVar6;
    piVar5 = aiStack_28 + iVar7;
    if ((*(uint *)*piVar5 & 1 ^ *(uint *)*piVar10 & 1) == 1) {
      iVar7 = *piVar5;
      iVar4 = *piVar10;
      if (cVar24 == '\0') {
        dVar20 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0x18),SUB84(dVar19,0));
        dVar17 = (double)CONCAT44(*(undefined4 *)(iVar4 + 0x18),_DAT_8c4aa4d4);
        dVar19 = in_xd2;
      }
      else {
        dVar20 = *(double *)(iVar7 + 0x18);
        dVar19 = (double)CONCAT44(_DAT_8c4aa4d8,_DAT_8c4aa4d4);
        dVar17 = *(double *)(iVar4 + 0x18);
      }
      fVar13 = (float)((ulonglong)dVar20 >> 0x20);
      if (cVar23 == '\0') {
        dVar20 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - fVar13,
                                  SUB84(dVar17,0) - fVar13);
      }
      else {
        dVar20 = (dVar17 - dVar20) - dVar20;
      }
      if (cVar24 == '\0') {
        uVar12 = SUB84(dVar20,0);
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(iVar4 + 0x10));
        in_xd2 = dVar19;
        dVar19 = (double)CONCAT44(uVar12,*(undefined4 *)(iVar7 + 0x10));
      }
      else {
        in_xd4 = *(double *)(iVar7 + 0x10);
        in_xd2 = *(double *)(iVar4 + 0x10);
      }
      if (cVar23 == '\0') {
        dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) /
                                  (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 / dVar20;
      }
      dVar17 = in_xd4;
      if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(SUB84(dVar19,0),SUB84(dVar20,0));
      }
      if (cVar23 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) - SUB84(dVar19,0)
                                 );
      }
      else {
        dVar17 = dVar17 - dVar19;
      }
      if (cVar24 == '\0') {
        dVar22 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0x14),SUB84(dVar22,0));
      }
      else {
        dVar22 = *(double *)(iVar7 + 0x14);
      }
      iVar7 = iVar8 * 0x40;
      uVar12 = (undefined4)((ulonglong)dVar19 >> 0x20);
      dVar20 = dVar19;
      if (cVar24 == '\0') {
        dVar20 = (double)CONCAT44(uVar12,SUB84(in_dr0,0));
      }
      fVar13 = (float)((ulonglong)dVar20 >> 0x20);
      if (cVar23 == '\0') {
        dVar17 = (double)CONCAT44(fVar13 * SUB84(dVar17,0) + (float)((ulonglong)dVar17 >> 0x20),
                                  SUB84(dVar17,0));
      }
      if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),*(undefined4 *)(iVar4 + 0x14));
      }
      else {
        in_xd2 = *(double *)(iVar4 + 0x14);
      }
      fVar14 = (float)((ulonglong)dVar22 >> 0x20);
      if (cVar23 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) - fVar14);
      }
      else {
        dVar17 = dVar17 - dVar22;
      }
      dVar11 = dVar22;
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44(uVar12,(int)((ulonglong)dVar17 >> 0x20));
        dVar11 = (double)CONCAT44(fVar14,SUB84(dVar17,0));
        dVar17 = in_xd4;
      }
      in_xd4 = dVar17;
      if (cVar23 == '\0') {
        dVar11 = (double)CONCAT44(fVar13 * SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20),
                                  SUB84(dVar11,0));
      }
      uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
      if (cVar24 == '\0') {
        dVar11 = (double)CONCAT44(uVar12,_DAT_8c4ab31c);
        dVar20 = (double)CONCAT44(_DAT_8c4ab320,SUB84(dVar20,0));
        dVar22 = (double)CONCAT44(uVar12,SUB84(dVar22,0));
      }
      else {
        in_xd2 = (double)CONCAT44(_DAT_8c4ab320,_DAT_8c4ab31c);
        dVar20 = (double)CONCAT44(_DAT_8c4ab324,_DAT_8c4ab320);
        dVar22 = dVar11;
      }
      if (cVar23 == '\0') {
        fVar13 = SUB84(dVar11,0) * (float)((ulonglong)dVar20 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar11 * dVar20,0);
      }
      if (cVar24 == '\0') {
        uVar18 = CONCAT44(_DAT_8c4aa4b4,fVar13);
        dVar20 = (double)CONCAT44(SUB84(dVar19,0),SUB84(dVar20,0));
      }
      else {
        uVar18 = CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
        dVar20 = in_xd4;
      }
      if (cVar23 == '\0') {
        uVar18 = CONCAT44((float)((ulonglong)dVar20 >> 0x20) * (float)uVar18 +
                          (float)((ulonglong)uVar18 >> 0x20),(float)uVar18);
      }
      if (cVar24 == '\0') {
        *(int *)(&DAT_8c4c2424 + iVar7) = (int)((ulonglong)uVar18 >> 0x20);
        dVar20 = (double)CONCAT44(_DAT_8c4ab324,SUB84(dVar20,0));
        dVar17 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4ab31c);
      }
      else {
        *(undefined8 *)(&DAT_8c4c2424 + iVar7) = uVar18;
        in_xd2 = (double)CONCAT44(_DAT_8c4ab320,_DAT_8c4ab31c);
        dVar20 = (double)CONCAT44(_DAT_8c4ab328,_DAT_8c4ab324);
        dVar17 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
      }
      if (cVar23 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                  SUB84(dVar17,0) * (float)((ulonglong)dVar20 >> 0x20));
      }
      else {
        dVar17 = dVar17 * dVar20;
      }
      dVar11 = dVar22;
      if (cVar24 == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(dVar20,0));
      }
      if (cVar23 == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) * SUB84(dVar17,0) +
                                  (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0));
      }
      uVar21 = (undefined4)((ulonglong)dVar19 >> 0x20);
      uVar12 = (undefined4)((ulonglong)dVar17 >> 0x20);
      if (cVar24 == '\0') {
        *(undefined4 *)(&DAT_8c4c2428 + iVar7) = uVar12;
        dVar17 = (double)CONCAT44(uVar12,_DAT_8c4ab31c);
        *(undefined4 *)(&DAT_8c4c242c + iVar7) = _DAT_8c4ab31c;
        in_dr0 = (double)CONCAT44(uVar21,SUB84(dVar11,0));
      }
      else {
        *(double *)(&DAT_8c4c2428 + iVar7) = dVar17;
        in_xd2 = (double)CONCAT44(_DAT_8c4ab320,_DAT_8c4ab31c);
        *(double *)(&DAT_8c4c242c + iVar7) = in_xd2;
        in_dr0 = dVar19;
      }
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44(uVar21,*(undefined4 *)(*piVar5 + 0x20));
      }
      else {
        in_xd4 = *(double *)(*piVar5 + 0x20);
      }
      if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),*(undefined4 *)(*piVar10 + 0x20))
        ;
      }
      else {
        in_xd2 = *(double *)(*piVar10 + 0x20);
      }
      if (cVar23 == '\0') {
        fVar13 = SUB84(dVar17,0) - SUB84(dVar19,0);
      }
      else {
        fVar13 = SUB84(dVar17 - dVar19,0);
      }
      dVar20 = in_xd4;
      if (cVar24 == '\0') {
        dVar20 = (double)CONCAT44(SUB84(dVar19,0),fVar13);
      }
      fVar13 = (float)((ulonglong)in_dr0 >> 0x20);
      if (cVar23 == '\0') {
        dVar20 = (double)CONCAT44(fVar13 * SUB84(dVar20,0) + (float)((ulonglong)dVar20 >> 0x20),
                                  SUB84(dVar20,0));
      }
      iVar8 = iVar8 + 1;
      if (cVar24 == '\0') {
        *(int *)(&DAT_8c4c2430 + iVar7) = (int)((ulonglong)dVar20 >> 0x20);
      }
      else {
        *(double *)(&DAT_8c4c2430 + iVar7) = dVar20;
      }
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)(*piVar5 + 0x24));
      }
      else {
        in_xd4 = *(double *)(*piVar5 + 0x24);
      }
      if (cVar24 == '\0') {
        in_dr2 = (double)CONCAT44(SUB84(dVar19,0),*(undefined4 *)(*piVar10 + 0x24));
      }
      else {
        in_xd2 = *(double *)(*piVar10 + 0x24);
        in_dr2 = in_xd4;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(in_dr2,0) - SUB84(dVar19,0);
        in_dr2 = (double)CONCAT44(fVar13 * fVar14 + (float)((ulonglong)in_dr2 >> 0x20),fVar14);
      }
      else {
        in_dr2 = in_dr2 - dVar19;
      }
      if (cVar24 == '\0') {
        *(int *)(iVar7 + -0x73b3dbcc) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(iVar7 + -0x73b3dbcc) = in_dr2;
      }
      *(undefined4 *)(&DAT_8c4c2438 + iVar7) = uVar3;
    }
    piVar5 = aiStack_28 + iVar6;
    if ((*(uint *)*piVar5 & 1) == 0) {
      if (cVar24 == '\0') {
        in_dr2 = (double)(ulonglong)*(uint *)(*piVar5 + 4);
      }
      else {
        in_xd2 = *(double *)(*piVar5 + 4);
      }
      iVar4 = iVar8 * 0x40;
      if (cVar24 == '\0') {
        *(int *)(&DAT_8c4c2424 + iVar4) = SUB84(in_dr2,0);
      }
      else {
        *(double *)(&DAT_8c4c2424 + iVar4) = in_xd2;
      }
      iVar8 = iVar8 + 1;
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(*piVar5 + 8);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(&DAT_8c4c2428 + iVar4) = uVar15;
      }
      else {
        in_xd2 = *(double *)(*piVar5 + 8);
        *(double *)(&DAT_8c4c2428 + iVar4) = in_xd2;
      }
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(*piVar5 + 0xc);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(&DAT_8c4c242c + iVar4) = uVar15;
      }
      else {
        in_xd2 = *(double *)(*piVar5 + 0xc);
        *(double *)(&DAT_8c4c242c + iVar4) = in_xd2;
      }
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(*piVar5 + 0x20);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(&DAT_8c4c2430 + iVar4) = uVar15;
      }
      else {
        in_xd2 = *(double *)(*piVar5 + 0x20);
        *(double *)(&DAT_8c4c2430 + iVar4) = in_xd2;
      }
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(*piVar5 + 0x24);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(iVar4 + -0x73b3dbcc) = uVar15;
      }
      else {
        in_xd2 = *(double *)(*piVar5 + 0x24);
        *(double *)(iVar4 + -0x73b3dbcc) = in_xd2;
      }
      *(undefined4 *)(&DAT_8c4c2438 + iVar4) = uVar3;
    }
    uVar18 = _DAT_8c4c2430;
    uVar21 = _DAT_8c4c2428;
    uVar12 = _DAT_8c4c2424;
    iVar4 = iVar6 + 1;
    iVar7 = iVar6;
  } while (iVar6 + 1 < 3);
  if (iVar8 == 3) {
    _DAT_8c4c2420 = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)unaff_r8 + 0x1c) = _DAT_8c4c242c;
      *(undefined4 *)(unaff_r8 + 3) = uVar21;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar12;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2424,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c242c,_DAT_8c4c2428);
      unaff_r8[3] = _DAT_8c4c2438;
      unaff_r8[2] = uVar18;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    uVar18 = _DAT_8c4c2470;
    uVar3 = _DAT_8c4c2468;
    uVar12 = _DAT_8c4c2464;
    _DAT_8c4c2460 = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)unaff_r8 + 0x3c) = _DAT_8c4c246c;
      *(undefined4 *)(unaff_r8 + 7) = uVar3;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar12;
      puVar9 = unaff_r8 + 6;
      *(undefined4 *)puVar9 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2464,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c246c,_DAT_8c4c2468);
      unaff_r8[7] = _DAT_8c4c2478;
      unaff_r8[6] = uVar18;
      unaff_r8[5] = uVar2;
      puVar9 = unaff_r8 + 4;
      *puVar9 = uVar1;
    }
    uVar18 = _DAT_8c4c24b0;
    uVar3 = _DAT_8c4c24a8;
    uVar12 = _DAT_8c4c24a4;
    _DAT_8c4c24a0 = 0xf0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)puVar9 + 0x3c) = _DAT_8c4c24ac;
      *(undefined4 *)(puVar9 + 7) = uVar3;
      *(undefined4 *)((int)puVar9 + 0x34) = uVar12;
      *(undefined4 *)(puVar9 + 6) = 0xf0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c24a4,0xf0000000);
      uVar2 = CONCAT44(_DAT_8c4c24ac,_DAT_8c4c24a8);
      puVar9[7] = _DAT_8c4c24b8;
      puVar9[6] = uVar18;
      puVar9[5] = uVar2;
      puVar9[4] = uVar1;
    }
    _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
  }
  else {
    _DAT_8c4c2420 = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)unaff_r8 + 0x1c) = _DAT_8c4c242c;
      *(undefined4 *)(unaff_r8 + 3) = uVar21;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar12;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2424,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c242c,_DAT_8c4c2428);
      unaff_r8[3] = _DAT_8c4c2438;
      unaff_r8[2] = uVar18;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    uVar18 = _DAT_8c4c2470;
    uVar3 = _DAT_8c4c2468;
    uVar12 = _DAT_8c4c2464;
    _DAT_8c4c2460 = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)unaff_r8 + 0x3c) = _DAT_8c4c246c;
      *(undefined4 *)(unaff_r8 + 7) = uVar3;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar12;
      puVar9 = unaff_r8 + 6;
      *(undefined4 *)puVar9 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2464,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c246c,_DAT_8c4c2468);
      unaff_r8[7] = _DAT_8c4c2478;
      unaff_r8[6] = uVar18;
      unaff_r8[5] = uVar2;
      puVar9 = unaff_r8 + 4;
      *puVar9 = uVar1;
    }
    uVar18 = _DAT_8c4c24f0;
    uVar3 = _DAT_8c4c24e8;
    uVar12 = _DAT_8c4c24e4;
    _DAT_8c4c24e0 = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)puVar9 + 0x3c) = _DAT_8c4c24ec;
      *(undefined4 *)(puVar9 + 7) = uVar3;
      *(undefined4 *)((int)puVar9 + 0x34) = uVar12;
      puVar9 = puVar9 + 6;
      *(undefined4 *)puVar9 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c24e4,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c24ec,_DAT_8c4c24e8);
      puVar9[7] = _DAT_8c4c24f8;
      puVar9[6] = uVar18;
      puVar9[5] = uVar2;
      puVar9 = puVar9 + 4;
      *puVar9 = uVar1;
    }
    uVar18 = _DAT_8c4c24b0;
    uVar3 = _DAT_8c4c24a8;
    uVar12 = _DAT_8c4c24a4;
    _DAT_8c4c24a0 = 0xf0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)puVar9 + 0x3c) = _DAT_8c4c24ac;
      *(undefined4 *)(puVar9 + 7) = uVar3;
      *(undefined4 *)((int)puVar9 + 0x34) = uVar12;
      *(undefined4 *)(puVar9 + 6) = 0xf0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c24a4,0xf0000000);
      uVar2 = CONCAT44(_DAT_8c4c24ac,_DAT_8c4c24a8);
      puVar9[7] = _DAT_8c4c24b8;
      puVar9[6] = uVar18;
      puVar9[5] = uVar2;
      puVar9[4] = uVar1;
    }
    _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
  }
  return iVar8;
}

__asm__(".globl _FUN_8c23e4c8\n.set _FUN_8c23e4c8, _FUN_8c23e4c8_def\n");
