#include "../decls.h"
int FUN_8c23e228_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *unaff_r8;
  undefined8 *puVar10;
  int *piVar11;
  int *piVar12;
  double in_dr0;
  double dVar13;
  float fVar14;
  uint uVar15;
  double in_dr2;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar20;
  double dVar19;
  undefined4 uVar21;
  double in_xd2;
  double in_xd4;
  double dVar22;
  char cVar23;
  char cVar24;
  int aiStack_28 [4];
  
  cVar24 = '\0';
  cVar23 = '\0';
  dVar17 = (double)(ulonglong)_DAT_8c4c11bc;
  dVar19 = (double)(ulonglong)_DAT_8c4c11b4;
  aiStack_28[0] = ar4;
  aiStack_28[1] = ar5;
  aiStack_28[2] = ar6;
  uVar5 = float_to_color_u8(ar4,ar5,ar6,ar7);
  iVar9 = 0;
  iVar6 = 0;
  iVar8 = 2;
  do {
    iVar7 = iVar6;
    piVar12 = aiStack_28 + iVar7;
    piVar11 = aiStack_28 + iVar8;
    if ((*(uint *)*piVar11 & 1 ^ *(uint *)*piVar12 & 1) == 1) {
      iVar6 = *piVar11;
      iVar8 = *piVar12;
      if (cVar24 == '\0') {
        dVar18 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x18),SUB84(dVar19,0));
        dVar16 = (double)CONCAT44(*(undefined4 *)(iVar8 + 0x18),_DAT_8c4aa4d4);
      }
      else {
        in_xd2 = (double)CONCAT44(_DAT_8c4aa4d8,_DAT_8c4aa4d4);
        dVar18 = *(double *)(iVar6 + 0x18);
        dVar16 = *(double *)(iVar8 + 0x18);
      }
      fVar20 = (float)((ulonglong)dVar18 >> 0x20);
      if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0) - fVar20);
      }
      else {
        dVar16 = dVar16 - dVar18;
      }
      if (cVar24 == '\0') {
        dVar18 = (double)CONCAT44(fVar20,*(undefined4 *)(iVar6 + 0x10));
        dVar22 = in_xd4;
      }
      else {
        dVar22 = *(double *)(iVar6 + 0x10);
      }
      if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar16 >> 0x20) -
                                  (float)((ulonglong)dVar18 >> 0x20),SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 - dVar18;
      }
      dVar19 = in_xd2;
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44(SUB84(dVar16,0),SUB84(dVar18,0));
      }
      if (cVar23 == '\0') {
        dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) /
                                  (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar19,0));
      }
      else {
        dVar19 = dVar19 / dVar16;
      }
      if (cVar24 == '\0') {
        dVar18 = (double)CONCAT44(SUB84(dVar19,0),*(undefined4 *)(iVar8 + 0x10));
      }
      else {
        in_xd2 = *(double *)(iVar8 + 0x10);
        dVar18 = dVar22;
      }
      if (cVar23 == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),SUB84(dVar18,0) - SUB84(dVar19,0)
                                 );
      }
      else {
        dVar18 = dVar18 - dVar19;
      }
      uVar21 = (undefined4)((ulonglong)dVar19 >> 0x20);
      if (cVar24 == '\0') {
        dVar16 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x14),SUB84(dVar17,0));
        dVar13 = (double)CONCAT44(uVar21,SUB84(in_dr0,0));
      }
      else {
        dVar16 = *(double *)(iVar6 + 0x14);
        dVar13 = dVar19;
      }
      fVar20 = (float)((ulonglong)dVar13 >> 0x20);
      if (cVar23 == '\0') {
        dVar18 = (double)CONCAT44(fVar20 * SUB84(dVar18,0) + (float)((ulonglong)dVar18 >> 0x20),
                                  SUB84(dVar18,0));
      }
      if (cVar24 == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),*(undefined4 *)(iVar8 + 0x14));
      }
      else {
        in_xd2 = *(double *)(iVar8 + 0x14);
      }
      fVar14 = (float)((ulonglong)dVar16 >> 0x20);
      if (cVar23 == '\0') {
        dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),SUB84(dVar18,0) - fVar14);
      }
      else {
        dVar18 = dVar18 - dVar16;
      }
      in_xd4 = dVar18;
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44(uVar21,(int)((ulonglong)dVar18 >> 0x20));
        in_xd4 = dVar22;
      }
      iVar6 = iVar9 * 0x40;
      dVar17 = dVar16;
      if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44(fVar14,SUB84(dVar18,0));
      }
      if (cVar23 == '\0') {
        dVar17 = (double)CONCAT44(fVar20 * SUB84(dVar17,0) + (float)((ulonglong)dVar17 >> 0x20),
                                  SUB84(dVar17,0));
      }
      if (cVar24 == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar16,0));
        dVar18 = (double)CONCAT44(_DAT_8c4ab320,SUB84(dVar13,0));
        dVar16 = (double)CONCAT44(_DAT_8c4aa4b4,_DAT_8c4ab31c);
      }
      else {
        in_xd2 = (double)CONCAT44(_DAT_8c4ab320,_DAT_8c4ab31c);
        dVar18 = (double)CONCAT44(_DAT_8c4ab324,_DAT_8c4ab320);
        dVar16 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
      }
      if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                  SUB84(dVar16,0) * (float)((ulonglong)dVar18 >> 0x20));
      }
      else {
        dVar16 = dVar16 * dVar18;
      }
      dVar22 = in_xd4;
      if (cVar24 == '\0') {
        dVar22 = (double)CONCAT44(SUB84(dVar19,0),SUB84(dVar18,0));
      }
      if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar16,0) +
                                  (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0));
      }
      if (cVar24 == '\0') {
        *(int *)(&DAT_8c4c2424 + iVar6) = (int)((ulonglong)dVar16 >> 0x20);
        dVar18 = (double)CONCAT44(_DAT_8c4ab324,SUB84(dVar22,0));
        dVar16 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4ab31c);
      }
      else {
        *(double *)(&DAT_8c4c2424 + iVar6) = dVar16;
        dVar18 = (double)CONCAT44(_DAT_8c4ab328,_DAT_8c4ab324);
        in_xd2 = (double)CONCAT44(_DAT_8c4ab320,_DAT_8c4ab31c);
        dVar16 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
      }
      if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                  SUB84(dVar16,0) * (float)((ulonglong)dVar18 >> 0x20));
      }
      else {
        dVar16 = dVar16 * dVar18;
      }
      dVar22 = dVar17;
      if (cVar24 == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar18,0));
      }
      if (cVar23 == '\0') {
        dVar16 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) * SUB84(dVar16,0) +
                                  (float)((ulonglong)dVar16 >> 0x20),SUB84(dVar16,0));
      }
      uVar21 = (undefined4)((ulonglong)dVar19 >> 0x20);
      if (cVar24 == '\0') {
        *(int *)(&DAT_8c4c2428 + iVar6) = (int)((ulonglong)dVar16 >> 0x20);
        *(undefined4 *)(&DAT_8c4c242c + iVar6) = _DAT_8c4ab31c;
        in_dr0 = (double)CONCAT44(uVar21,SUB84(dVar22,0));
      }
      else {
        *(double *)(&DAT_8c4c2428 + iVar6) = dVar16;
        in_xd2 = (double)CONCAT44(_DAT_8c4ab320,_DAT_8c4ab31c);
        *(double *)(&DAT_8c4c242c + iVar6) = in_xd2;
        in_dr0 = dVar19;
      }
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44(uVar21,*(undefined4 *)(*piVar11 + 0x20));
      }
      else {
        in_xd4 = *(double *)(*piVar11 + 0x20);
      }
      if (cVar24 == '\0') {
        dVar18 = (double)CONCAT44(SUB84(dVar19,0),*(undefined4 *)(*piVar12 + 0x20));
      }
      else {
        in_xd2 = *(double *)(*piVar12 + 0x20);
        dVar18 = in_xd4;
      }
      fVar20 = (float)((ulonglong)in_dr0 >> 0x20);
      if (cVar23 == '\0') {
        fVar14 = SUB84(dVar18,0) - SUB84(dVar19,0);
        dVar18 = (double)CONCAT44(fVar20 * fVar14 + (float)((ulonglong)dVar18 >> 0x20),fVar14);
      }
      else {
        dVar18 = dVar18 - dVar19;
      }
      iVar9 = iVar9 + 1;
      if (cVar24 == '\0') {
        *(int *)(&DAT_8c4c2430 + iVar6) = (int)((ulonglong)dVar18 >> 0x20);
      }
      else {
        *(double *)(&DAT_8c4c2430 + iVar6) = dVar18;
      }
      if (cVar24 == '\0') {
        dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),*(undefined4 *)(*piVar11 + 0x24))
        ;
      }
      else {
        in_xd4 = *(double *)(*piVar11 + 0x24);
      }
      if (cVar24 == '\0') {
        in_dr2 = (double)CONCAT44(SUB84(dVar19,0),*(undefined4 *)(*piVar12 + 0x24));
      }
      else {
        in_xd2 = *(double *)(*piVar12 + 0x24);
        in_dr2 = in_xd4;
      }
      if (cVar23 == '\0') {
        fVar14 = SUB84(in_dr2,0) - SUB84(dVar19,0);
        in_dr2 = (double)CONCAT44(fVar20 * fVar14 + (float)((ulonglong)in_dr2 >> 0x20),fVar14);
      }
      else {
        in_dr2 = in_dr2 - dVar19;
      }
      if (cVar24 == '\0') {
        *(int *)(iVar6 + -0x73b3dbcc) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(iVar6 + -0x73b3dbcc) = in_dr2;
      }
      *(undefined4 *)(&DAT_8c4c2438 + iVar6) = uVar5;
    }
    piVar11 = aiStack_28 + iVar7;
    if ((*(uint *)*piVar11 & 1) == 0) {
      if (cVar24 == '\0') {
        in_dr2 = (double)(ulonglong)*(uint *)(*piVar11 + 4);
      }
      else {
        in_xd2 = *(double *)(*piVar11 + 4);
      }
      iVar6 = iVar9 * 0x40;
      if (cVar24 == '\0') {
        *(int *)(&DAT_8c4c2424 + iVar6) = SUB84(in_dr2,0);
      }
      else {
        *(double *)(&DAT_8c4c2424 + iVar6) = in_xd2;
      }
      iVar9 = iVar9 + 1;
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(*piVar11 + 8);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(&DAT_8c4c2428 + iVar6) = uVar15;
      }
      else {
        in_xd2 = *(double *)(*piVar11 + 8);
        *(double *)(&DAT_8c4c2428 + iVar6) = in_xd2;
      }
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(*piVar11 + 0xc);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(&DAT_8c4c242c + iVar6) = uVar15;
      }
      else {
        in_xd2 = *(double *)(*piVar11 + 0xc);
        *(double *)(&DAT_8c4c242c + iVar6) = in_xd2;
      }
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(*piVar11 + 0x20);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(&DAT_8c4c2430 + iVar6) = uVar15;
      }
      else {
        in_xd2 = *(double *)(*piVar11 + 0x20);
        *(double *)(&DAT_8c4c2430 + iVar6) = in_xd2;
      }
      if (cVar24 == '\0') {
        uVar15 = *(uint *)(*piVar11 + 0x24);
        in_dr2 = (double)(ulonglong)uVar15;
        *(uint *)(iVar6 + -0x73b3dbcc) = uVar15;
      }
      else {
        in_xd2 = *(double *)(*piVar11 + 0x24);
        *(double *)(iVar6 + -0x73b3dbcc) = in_xd2;
      }
      *(undefined4 *)(&DAT_8c4c2438 + iVar6) = uVar5;
    }
    uVar4 = _DAT_8c4c2430;
    uVar3 = _DAT_8c4c2428;
    uVar21 = _DAT_8c4c2424;
    iVar6 = iVar7 + 1;
    iVar8 = iVar7;
  } while (iVar7 + 1 < 3);
  if (iVar9 == 3) {
    _DAT_8c4c2420 = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)unaff_r8 + 0x1c) = _DAT_8c4c242c;
      *(undefined4 *)(unaff_r8 + 3) = uVar3;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar21;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2424,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c242c,_DAT_8c4c2428);
      unaff_r8[3] = _DAT_8c4c2438;
      unaff_r8[2] = uVar4;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    uVar4 = _DAT_8c4c2470;
    uVar21 = _DAT_8c4c2468;
    uVar5 = _DAT_8c4c2464;
    _DAT_8c4c2460 = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)unaff_r8 + 0x3c) = _DAT_8c4c246c;
      *(undefined4 *)(unaff_r8 + 7) = uVar21;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar5;
      puVar10 = unaff_r8 + 6;
      *(undefined4 *)puVar10 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2464,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c246c,_DAT_8c4c2468);
      unaff_r8[7] = _DAT_8c4c2478;
      unaff_r8[6] = uVar4;
      unaff_r8[5] = uVar2;
      puVar10 = unaff_r8 + 4;
      *puVar10 = uVar1;
    }
    uVar4 = _DAT_8c4c24b0;
    uVar21 = _DAT_8c4c24a8;
    uVar5 = _DAT_8c4c24a4;
    _DAT_8c4c24a0 = 0xf0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)puVar10 + 0x3c) = _DAT_8c4c24ac;
      *(undefined4 *)(puVar10 + 7) = uVar21;
      *(undefined4 *)((int)puVar10 + 0x34) = uVar5;
      *(undefined4 *)(puVar10 + 6) = 0xf0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c24a4,0xf0000000);
      uVar2 = CONCAT44(_DAT_8c4c24ac,_DAT_8c4c24a8);
      puVar10[7] = _DAT_8c4c24b8;
      puVar10[6] = uVar4;
      puVar10[5] = uVar2;
      puVar10[4] = uVar1;
    }
    _DAT_8c4aa520 = _DAT_8c4aa520 + 3;
  }
  else {
    _DAT_8c4c2420 = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)unaff_r8 + 0x1c) = _DAT_8c4c242c;
      *(undefined4 *)(unaff_r8 + 3) = uVar3;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar21;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2424,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c242c,_DAT_8c4c2428);
      unaff_r8[3] = _DAT_8c4c2438;
      unaff_r8[2] = uVar4;
      unaff_r8[1] = uVar2;
      *unaff_r8 = uVar1;
    }
    uVar4 = _DAT_8c4c2470;
    uVar21 = _DAT_8c4c2468;
    uVar5 = _DAT_8c4c2464;
    _DAT_8c4c2460 = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)unaff_r8 + 0x3c) = _DAT_8c4c246c;
      *(undefined4 *)(unaff_r8 + 7) = uVar21;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar5;
      puVar10 = unaff_r8 + 6;
      *(undefined4 *)puVar10 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c2464,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c246c,_DAT_8c4c2468);
      unaff_r8[7] = _DAT_8c4c2478;
      unaff_r8[6] = uVar4;
      unaff_r8[5] = uVar2;
      puVar10 = unaff_r8 + 4;
      *puVar10 = uVar1;
    }
    uVar4 = _DAT_8c4c24f0;
    uVar21 = _DAT_8c4c24e8;
    uVar5 = _DAT_8c4c24e4;
    _DAT_8c4c24e0 = 0xe0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)puVar10 + 0x3c) = _DAT_8c4c24ec;
      *(undefined4 *)(puVar10 + 7) = uVar21;
      *(undefined4 *)((int)puVar10 + 0x34) = uVar5;
      puVar10 = puVar10 + 6;
      *(undefined4 *)puVar10 = 0xe0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c24e4,0xe0000000);
      uVar2 = CONCAT44(_DAT_8c4c24ec,_DAT_8c4c24e8);
      puVar10[7] = _DAT_8c4c24f8;
      puVar10[6] = uVar4;
      puVar10[5] = uVar2;
      puVar10 = puVar10 + 4;
      *puVar10 = uVar1;
    }
    uVar4 = _DAT_8c4c24b0;
    uVar21 = _DAT_8c4c24a8;
    uVar5 = _DAT_8c4c24a4;
    _DAT_8c4c24a0 = 0xf0000000;
    if (cVar24 == '\0') {
      *(undefined4 *)((int)puVar10 + 0x3c) = _DAT_8c4c24ac;
      *(undefined4 *)(puVar10 + 7) = uVar21;
      *(undefined4 *)((int)puVar10 + 0x34) = uVar5;
      *(undefined4 *)(puVar10 + 6) = 0xf0000000;
    }
    else {
      uVar1 = CONCAT44(_DAT_8c4c24a4,0xf0000000);
      uVar2 = CONCAT44(_DAT_8c4c24ac,_DAT_8c4c24a8);
      puVar10[7] = _DAT_8c4c24b8;
      puVar10[6] = uVar4;
      puVar10[5] = uVar2;
      puVar10[4] = uVar1;
    }
    _DAT_8c4aa520 = _DAT_8c4aa520 + 4;
  }
  return iVar9;
}

__asm__(".globl _FUN_8c23e228\n.set _FUN_8c23e228, _FUN_8c23e228_def\n");
