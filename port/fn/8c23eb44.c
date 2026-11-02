#include "../decls.h"
int FUN_8c23eb44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  double *pdVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *unaff_r8;
  undefined8 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  double in_dr0;
  float fVar14;
  undefined8 uVar13;
  undefined4 uVar16;
  double dVar17;
  undefined8 uVar18;
  double in_dr4;
  double dVar20;
  float fVar23;
  double dVar21;
  undefined8 uVar22;
  double in_dr6;
  float fVar25;
  double in_xd2;
  double in_xd4;
  double dVar26;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  int aiStack_24 [3];
  undefined4 uVar15;
  undefined4 uVar19;
  undefined4 uVar24;
  
  iVar4 = 0x8c4c11a0;
  puVar3 = 0x8c4c2520;
  pdVar2 = 0x8c4ab31c;
  iVar1 = 0x8c4aa4a8;
  aiStack_24[0] = ar4;
  iVar11 = 0;
  aiStack_24[1] = ar5;
  aiStack_24[2] = ar6;
  iVar7 = 2;
  iVar12 = 0;
  do {
    pdVar5 = 0x8c4ab324;
    iVar9 = iVar11;
    if ((*(uint *)aiStack_24[iVar7] & 1 ^ *(uint *)aiStack_24[iVar12] & 1) == 1) {
      iVar9 = aiStack_24[iVar7];
      iVar7 = aiStack_24[iVar12];
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x18),SUB84(in_dr4,0));
        dVar17 = (double)CONCAT44(*(undefined4 *)(iVar7 + 0x18),*(undefined4 *)0x8c4aa4d4);
      }
      else {
        dVar20 = *(double *)(iVar9 + 0x18);
        in_xd2 = *(undefined4 *)0x8c4aa4d4;
        dVar17 = *(double *)(iVar7 + 0x18);
      }
      fVar23 = (float)((ulonglong)dVar20 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) - fVar23);
      }
      else {
        dVar17 = dVar17 - dVar20;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(fVar23,*(undefined4 *)(iVar9 + 0x10));
        dVar26 = in_xd4;
      }
      else {
        dVar26 = *(double *)(iVar9 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) -
                                  (float)((ulonglong)dVar20 >> 0x20),SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 - dVar20;
      }
      dVar21 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(SUB84(dVar17,0),SUB84(dVar20,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) /
                                  (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar21,0));
      }
      else {
        dVar21 = dVar21 / dVar17;
      }
      fVar23 = SUB84(dVar21,0);
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(fVar23,*(undefined4 *)(iVar7 + 0x10));
      }
      else {
        in_xd2 = *(double *)(iVar7 + 0x10);
        dVar20 = dVar26;
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) - fVar23);
      }
      else {
        dVar20 = dVar20 - dVar21;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar9 + 0x14),SUB84(in_dr6,0));
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(in_dr0,0));
      }
      else {
        in_dr6 = *(double *)(iVar9 + 0x14);
      }
      fVar14 = (float)((ulonglong)dVar21 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44(fVar14 * SUB84(dVar20,0) + (float)((ulonglong)dVar20 >> 0x20),
                                  SUB84(dVar20,0));
      }
      fVar25 = (float)((ulonglong)in_dr6 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),*(undefined4 *)(iVar7 + 0x14));
        in_dr4 = (double)CONCAT44(fVar25,fVar23);
      }
      else {
        in_xd2 = *(double *)(iVar7 + 0x14);
        in_dr4 = in_dr6;
      }
      if (in_FPSCR_PR == '\0') {
        dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),SUB84(dVar20,0) - fVar25);
      }
      else {
        dVar20 = dVar20 - in_dr6;
      }
      in_xd4 = dVar20;
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)((ulonglong)dVar20 >> 0x20))
        ;
        in_xd4 = dVar26;
      }
      if (in_FPSCR_PR == '\0') {
        in_dr4 = (double)CONCAT44(fVar14 * SUB84(dVar20,0) + (float)((ulonglong)in_dr4 >> 0x20),
                                  SUB84(in_dr4,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(*(undefined4 *)0x8c4ab320,SUB84(dVar21,0));
        dVar17 = (double)CONCAT44(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)pdVar2);
      }
      else {
        in_xd2 = *pdVar2;
        dVar20 = *(undefined4 *)0x8c4ab320;
        dVar17 = *(double *)(iVar1 + 0xc);
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                  SUB84(dVar17,0) * (float)((ulonglong)dVar20 >> 0x20));
      }
      else {
        dVar17 = dVar17 * dVar20;
      }
      dVar26 = in_xd4;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = (double)CONCAT44(SUB84(in_dr4,0),SUB84(dVar20,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * SUB84(dVar17,0) +
                                  (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0));
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar3 + iVar11 * 0x20 + 4) = (int)((ulonglong)dVar17 >> 0x20);
        dVar20 = (double)CONCAT44(*(undefined4 *)pdVar5,SUB84(dVar26,0));
        dVar17 = (double)CONCAT44(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)pdVar2);
      }
      else {
        *(double *)((int)puVar3 + iVar11 * 0x20 + 4) = dVar17;
        in_xd2 = *pdVar2;
        dVar20 = *pdVar5;
        dVar17 = *(double *)(iVar1 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                  SUB84(dVar17,0) * (float)((ulonglong)dVar20 >> 0x20));
      }
      else {
        dVar17 = dVar17 * dVar20;
      }
      in_dr0 = in_dr4;
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar20,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar17,0) +
                                  (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0));
      }
      iVar9 = iVar11 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar3 + iVar11 * 4 + 1) = (int)((ulonglong)dVar17 >> 0x20);
        *(undefined4 *)((int)puVar3 + iVar11 * 0x20 + 0xc) = *(undefined4 *)pdVar2;
        *(undefined4 *)(puVar3 + iVar11 * 4 + 2) = *(undefined4 *)(iVar4 + 0x10);
        *(undefined4 *)((int)puVar3 + iVar11 * 0x20 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
        *(undefined4 *)(puVar3 + iVar11 * 4 + 3) = *(undefined4 *)(iVar4 + 0x18);
        *(undefined4 *)((int)puVar3 + iVar11 * 0x20 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
        iVar9 = iVar11 + 1;
      }
      else {
        puVar3[iVar11 * 4 + 1] = dVar17;
        *(double *)((int)puVar3 + iVar11 * 0x20 + 0xc) = *pdVar2;
        puVar3[iVar11 * 4 + 2] = *(undefined8 *)(iVar4 + 0x10);
        *(undefined8 *)((int)puVar3 + iVar11 * 0x20 + 0x14) = *(undefined8 *)(iVar4 + 0x14);
        puVar3[iVar11 * 4 + 3] = *(undefined8 *)(iVar4 + 0x18);
        in_xd2 = *(double *)(iVar4 + 0x1c);
        *(double *)((int)puVar3 + iVar11 * 0x20 + 0x1c) = in_xd2;
      }
    }
    piVar10 = aiStack_24 + iVar12;
    iVar11 = iVar9;
    if ((*(uint *)*piVar10 & 1) == 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar3 + iVar9 * 0x20 + 4) = *(undefined4 *)(*piVar10 + 4);
      }
      else {
        in_xd2 = *(double *)(*piVar10 + 4);
        *(double *)((int)puVar3 + iVar9 * 0x20 + 4) = in_xd2;
      }
      iVar11 = iVar9 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar3 + iVar9 * 4 + 1) = *(undefined4 *)(*piVar10 + 8);
      }
      else {
        in_xd2 = *(double *)(*piVar10 + 8);
        puVar3[iVar9 * 4 + 1] = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar3 + iVar9 * 0x20 + 0xc) = *(undefined4 *)(*piVar10 + 0xc);
        *(undefined4 *)(puVar3 + iVar9 * 4 + 2) = *(undefined4 *)(iVar4 + 0x10);
        *(undefined4 *)((int)puVar3 + iVar9 * 0x20 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
        *(undefined4 *)(puVar3 + iVar9 * 4 + 3) = *(undefined4 *)(iVar4 + 0x18);
        *(undefined4 *)((int)puVar3 + iVar9 * 0x20 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
      }
      else {
        *(undefined8 *)((int)puVar3 + iVar9 * 0x20 + 0xc) = *(undefined8 *)(*piVar10 + 0xc);
        puVar3[iVar9 * 4 + 2] = *(undefined8 *)(iVar4 + 0x10);
        *(undefined8 *)((int)puVar3 + iVar9 * 0x20 + 0x14) = *(undefined8 *)(iVar4 + 0x14);
        puVar3[iVar9 * 4 + 3] = *(undefined8 *)(iVar4 + 0x18);
        in_xd2 = *(double *)(iVar4 + 0x1c);
        *(double *)((int)puVar3 + iVar9 * 0x20 + 0x1c) = in_xd2;
      }
    }
    uVar16 = 0xe0000000;
    piVar10 = 0x8c4aa520;
    iVar9 = iVar12 + 1;
    iVar7 = iVar12;
    iVar12 = iVar9;
  } while (iVar9 < 3);
  if (iVar11 == 3) {
    *(undefined4 *)puVar3 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)puVar3;
      uVar19 = *(undefined4 *)((int)puVar3 + 4);
      uVar24 = *(undefined4 *)(puVar3 + 1);
      *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)puVar3 + 0xc);
      *(undefined4 *)(unaff_r8 + 3) = uVar24;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar19;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = uVar15;
    }
    else {
      uVar13 = *puVar3;
      uVar18 = puVar3[1];
      uVar22 = puVar3[2];
      unaff_r8[3] = puVar3[3];
      unaff_r8[2] = uVar22;
      unaff_r8[1] = uVar18;
      *unaff_r8 = uVar13;
    }
    puVar8 = puVar3 + 4;
    *(undefined4 *)puVar8 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = *(undefined4 *)puVar8;
      uVar15 = *(undefined4 *)((int)puVar3 + 0x24);
      uVar19 = *(undefined4 *)(puVar3 + 5);
      *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)puVar3 + 0x2c);
      *(undefined4 *)(unaff_r8 + 7) = uVar19;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar15;
      puVar8 = unaff_r8 + 6;
      *(undefined4 *)puVar8 = uVar16;
    }
    else {
      uVar13 = *puVar8;
      uVar18 = puVar3[5];
      uVar22 = puVar3[6];
      unaff_r8[7] = puVar3[7];
      unaff_r8[6] = uVar22;
      unaff_r8[5] = uVar18;
      puVar8 = unaff_r8 + 4;
      *puVar8 = uVar13;
    }
    puVar6 = puVar3 + 8;
    *(undefined4 *)puVar6 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = *(undefined4 *)puVar6;
      uVar15 = *(undefined4 *)((int)puVar3 + 0x44);
      uVar19 = *(undefined4 *)(puVar3 + 9);
      *(undefined4 *)((int)puVar8 + 0x3c) = *(undefined4 *)((int)puVar3 + 0x4c);
      *(undefined4 *)(puVar8 + 7) = uVar19;
      *(undefined4 *)((int)puVar8 + 0x34) = uVar15;
      *(undefined4 *)(puVar8 + 6) = uVar16;
    }
    else {
      uVar13 = *puVar6;
      uVar18 = puVar3[9];
      uVar22 = puVar3[10];
      puVar8[7] = puVar3[0xb];
      puVar8[6] = uVar22;
      puVar8[5] = uVar18;
      puVar8[4] = uVar13;
    }
    *piVar10 = *piVar10 + 3;
  }
  else {
    *(undefined4 *)puVar3 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)puVar3;
      uVar19 = *(undefined4 *)((int)puVar3 + 4);
      uVar24 = *(undefined4 *)(puVar3 + 1);
      *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)puVar3 + 0xc);
      *(undefined4 *)(unaff_r8 + 3) = uVar24;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar19;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = uVar15;
    }
    else {
      uVar13 = *puVar3;
      uVar18 = puVar3[1];
      uVar22 = puVar3[2];
      unaff_r8[3] = puVar3[3];
      unaff_r8[2] = uVar22;
      unaff_r8[1] = uVar18;
      *unaff_r8 = uVar13;
    }
    puVar8 = puVar3 + 4;
    *(undefined4 *)puVar8 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)puVar8;
      uVar19 = *(undefined4 *)((int)puVar3 + 0x24);
      uVar24 = *(undefined4 *)(puVar3 + 5);
      *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)puVar3 + 0x2c);
      *(undefined4 *)(unaff_r8 + 7) = uVar24;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar19;
      puVar8 = unaff_r8 + 6;
      *(undefined4 *)puVar8 = uVar15;
    }
    else {
      uVar13 = *puVar8;
      uVar18 = puVar3[5];
      uVar22 = puVar3[6];
      unaff_r8[7] = puVar3[7];
      unaff_r8[6] = uVar22;
      unaff_r8[5] = uVar18;
      puVar8 = unaff_r8 + 4;
      *puVar8 = uVar13;
    }
    puVar6 = puVar3 + 0xc;
    *(undefined4 *)puVar6 = uVar16;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = *(undefined4 *)puVar6;
      uVar15 = *(undefined4 *)((int)puVar3 + 100);
      uVar19 = *(undefined4 *)(puVar3 + 0xd);
      *(undefined4 *)((int)puVar8 + 0x3c) = *(undefined4 *)((int)puVar3 + 0x6c);
      *(undefined4 *)(puVar8 + 7) = uVar19;
      *(undefined4 *)((int)puVar8 + 0x34) = uVar15;
      puVar8 = puVar8 + 6;
      *(undefined4 *)puVar8 = uVar16;
    }
    else {
      uVar13 = *puVar6;
      uVar18 = puVar3[0xd];
      uVar22 = puVar3[0xe];
      puVar8[7] = puVar3[0xf];
      puVar8[6] = uVar22;
      puVar8[5] = uVar18;
      puVar8 = puVar8 + 4;
      *puVar8 = uVar13;
    }
    puVar6 = puVar3 + 8;
    *(undefined4 *)puVar6 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar16 = *(undefined4 *)puVar6;
      uVar15 = *(undefined4 *)((int)puVar3 + 0x44);
      uVar19 = *(undefined4 *)(puVar3 + 9);
      *(undefined4 *)((int)puVar8 + 0x3c) = *(undefined4 *)((int)puVar3 + 0x4c);
      *(undefined4 *)(puVar8 + 7) = uVar19;
      *(undefined4 *)((int)puVar8 + 0x34) = uVar15;
      *(undefined4 *)(puVar8 + 6) = uVar16;
    }
    else {
      uVar13 = *puVar6;
      uVar18 = puVar3[9];
      uVar22 = puVar3[10];
      puVar8[7] = puVar3[0xb];
      puVar8[6] = uVar22;
      puVar8[5] = uVar18;
      puVar8[4] = uVar13;
    }
    *piVar10 = *piVar10 + 4;
  }
  return iVar11;
}

__asm__(".globl _FUN_8c23eb44\n.set _FUN_8c23eb44, _FUN_8c23eb44_def\n");
