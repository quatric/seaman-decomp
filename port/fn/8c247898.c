#include "../decls.h"
int FUN_8c247898_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 *ar7)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *unaff_r8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  double in_dr0;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar21;
  double in_dr4;
  double dVar22;
  undefined8 uVar23;
  double in_dr6;
  double in_xd2;
  double dVar25;
  double in_xd4;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  int aiStack_24 [3];
  undefined4 uVar20;
  undefined4 uVar24;
  
  puVar7 = 0x8c4c2420;
  pdVar1 = 0x8c4ab31c;
  aiStack_24[0] = ar4;
  aiStack_24[1] = ar5;
  aiStack_24[2] = ar6;
  iVar4 = 2;
  iVar8 = 0;
  iVar10 = 0;
  do {
    pdVar3 = 0x8c4aa4b8;
    pdVar2 = 0x8c4ab324;
    piVar13 = aiStack_24 + iVar10;
    piVar12 = aiStack_24 + iVar4;
    iVar5 = iVar8;
    if ((*(uint *)*piVar12 & 1 ^ *(uint *)*piVar13 & 1) == 1) {
      iVar5 = *piVar12;
      iVar4 = *piVar13;
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x18),SUB84(in_dr4,0));
        dVar17 = (double)CONCAT44(*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)0x8c4aa4d4);
        dVar25 = in_xd2;
      }
      else {
        dVar22 = *(double *)(iVar5 + 0x18);
        dVar25 = *(undefined4 *)0x8c4aa4d4;
        dVar17 = *(double *)(iVar4 + 0x18);
      }
      fVar21 = (float)((ulonglong)dVar22 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) - fVar21,
                                  SUB84(dVar17,0) - fVar21);
      }
      else {
        dVar22 = (dVar17 - dVar22) - dVar22;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar15 = SUB84(dVar22,0);
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(iVar4 + 0x10));
        in_xd2 = dVar25;
        dVar25 = (double)CONCAT44(uVar15,*(undefined4 *)(iVar5 + 0x10));
      }
      else {
        in_xd4 = *(double *)(iVar5 + 0x10);
        in_xd2 = *(double *)(iVar4 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar25 = (double)CONCAT44((float)((ulonglong)dVar25 >> 0x20) /
                                  (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar25,0));
      }
      else {
        dVar25 = dVar25 / dVar22;
      }
      fVar21 = SUB84(dVar25,0);
      dVar17 = in_xd4;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(fVar21,SUB84(in_dr6,0));
      }
      in_dr6 = dVar17;
      if (in_FPSCR_PR == '\0') {
        fVar16 = SUB84(dVar22,0) - fVar21;
      }
      else {
        fVar16 = SUB84(dVar22 - dVar25,0);
      }
      uVar15 = (undefined4)((ulonglong)dVar25 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        fVar21 = *(float *)(iVar5 + 0x14);
        dVar22 = (double)CONCAT44(fVar21,fVar16);
        dVar25 = (double)CONCAT44(uVar15,SUB84(in_dr0,0));
        in_dr4 = (double)CONCAT44(uVar15,fVar21);
      }
      else {
        dVar22 = *(double *)(iVar5 + 0x14);
        in_dr4 = dVar25;
        in_xd4 = dVar22;
      }
      fVar16 = (float)((ulonglong)dVar25 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        in_dr6 = (double)CONCAT44(fVar16 * SUB84(dVar22,0) + (float)((ulonglong)in_dr6 >> 0x20),
                                  SUB84(in_dr6,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),*(undefined4 *)(iVar4 + 0x14));
      }
      else {
        in_xd2 = *(double *)(iVar4 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        fVar21 = SUB84(dVar22,0) - fVar21;
        dVar22 = (double)CONCAT44(fVar16 * fVar21 + (float)((ulonglong)dVar22 >> 0x20),fVar21);
      }
      else {
        dVar22 = dVar22 - in_dr4;
      }
      uVar14 = (undefined4)((ulonglong)dVar22 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44(uVar15,uVar14);
        dVar22 = (double)CONCAT44(uVar14,*(undefined4 *)pdVar1);
        dVar25 = (double)CONCAT44(*(undefined4 *)0x8c4ab320,SUB84(dVar25,0));
      }
      else {
        in_xd2 = *pdVar1;
        dVar25 = *(undefined4 *)0x8c4ab320;
        in_xd4 = dVar22;
      }
      if (in_FPSCR_PR == '\0') {
        fVar21 = SUB84(dVar22,0) * (float)((ulonglong)dVar25 >> 0x20);
      }
      else {
        fVar21 = SUB84(dVar22 * dVar25,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)0x8c4aa4b4,fVar21);
        dVar25 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar25,0));
      }
      else {
        uVar18 = *(undefined4 *)0x8c4aa4b4;
        dVar25 = in_dr6;
      }
      if (in_FPSCR_PR == '\0') {
        uVar18 = CONCAT44((float)((ulonglong)dVar25 >> 0x20) * (float)uVar18 +
                          (float)((ulonglong)uVar18 >> 0x20),(float)uVar18);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar7 + iVar8 * 0x40 + 4) = (int)((ulonglong)uVar18 >> 0x20);
        dVar25 = (double)CONCAT44(*(undefined4 *)pdVar2,SUB84(dVar25,0));
        dVar22 = (double)CONCAT44(*(undefined4 *)pdVar3,*(undefined4 *)pdVar1);
      }
      else {
        *(undefined8 *)((int)puVar7 + iVar8 * 0x40 + 4) = uVar18;
        dVar25 = *pdVar2;
        in_xd2 = *pdVar1;
        dVar22 = *pdVar3;
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                  SUB84(dVar22,0) * (float)((ulonglong)dVar25 >> 0x20));
      }
      else {
        dVar22 = dVar22 * dVar25;
      }
      dVar17 = in_xd4;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(SUB84(in_dr4,0),SUB84(dVar25,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar22,0) +
                                  (float)((ulonglong)dVar22 >> 0x20),SUB84(dVar22,0));
      }
      uVar15 = (undefined4)((ulonglong)in_dr4 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar7 + iVar8 * 8 + 1) = (int)((ulonglong)dVar22 >> 0x20);
        *(undefined4 *)((int)puVar7 + iVar8 * 0x40 + 0xc) = *(undefined4 *)pdVar1;
        in_dr0 = (double)CONCAT44(uVar15,SUB84(dVar17,0));
      }
      else {
        puVar7[iVar8 * 8 + 1] = dVar22;
        in_xd2 = *pdVar1;
        *(double *)((int)puVar7 + iVar8 * 0x40 + 0xc) = in_xd2;
        in_dr0 = in_dr4;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44(uVar15,*(undefined4 *)(*piVar12 + 0x20));
      }
      else {
        in_xd4 = *(double *)(*piVar12 + 0x20);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar25 = (double)CONCAT44(SUB84(in_dr4,0),*(undefined4 *)(*piVar13 + 0x20));
      }
      else {
        in_xd2 = *(double *)(*piVar13 + 0x20);
        dVar25 = in_xd4;
      }
      fVar21 = (float)((ulonglong)in_dr0 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        fVar16 = SUB84(dVar25,0) - SUB84(in_dr4,0);
        dVar25 = (double)CONCAT44(fVar21 * fVar16 + (float)((ulonglong)dVar25 >> 0x20),fVar16);
      }
      else {
        dVar25 = dVar25 - in_dr4;
      }
      iVar5 = iVar8 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar7 + iVar8 * 8 + 2) = (int)((ulonglong)dVar25 >> 0x20);
      }
      else {
        puVar7[iVar8 * 8 + 2] = dVar25;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(*piVar12 + 0x24))
        ;
      }
      else {
        in_xd4 = *(double *)(*piVar12 + 0x24);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar25 = (double)CONCAT44(SUB84(in_dr4,0),*(undefined4 *)(*piVar13 + 0x24));
      }
      else {
        in_xd2 = *(double *)(*piVar13 + 0x24);
        dVar25 = in_xd4;
      }
      if (in_FPSCR_PR == '\0') {
        fVar16 = SUB84(dVar25,0) - SUB84(in_dr4,0);
        dVar25 = (double)CONCAT44(fVar21 * fVar16 + (float)((ulonglong)dVar25 >> 0x20),fVar16);
      }
      else {
        dVar25 = dVar25 - in_dr4;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar7 + iVar8 * 0x40 + 0x14) = (int)((ulonglong)dVar25 >> 0x20);
      }
      else {
        *(double *)((int)puVar7 + iVar8 * 0x40 + 0x14) = dVar25;
      }
      *(undefined4 *)(puVar7 + iVar8 * 8 + 3) = *ar7;
      *(undefined4 *)((int)puVar7 + iVar8 * 0x40 + 0x1c) = ar7[1];
    }
    piVar12 = aiStack_24 + iVar10;
    if ((*(uint *)*piVar12 & 1) == 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar7 + iVar5 * 0x40 + 4) = *(undefined4 *)(*piVar12 + 4);
      }
      else {
        in_xd2 = *(double *)(*piVar12 + 4);
        *(double *)((int)puVar7 + iVar5 * 0x40 + 4) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar7 + iVar5 * 8 + 1) = *(undefined4 *)(*piVar12 + 8);
      }
      else {
        in_xd2 = *(double *)(*piVar12 + 8);
        puVar7[iVar5 * 8 + 1] = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar7 + iVar5 * 0x40 + 0xc) = *(undefined4 *)(*piVar12 + 0xc);
      }
      else {
        in_xd2 = *(double *)(*piVar12 + 0xc);
        *(double *)((int)puVar7 + iVar5 * 0x40 + 0xc) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar7 + iVar5 * 8 + 2) = *(undefined4 *)(*piVar12 + 0x20);
      }
      else {
        in_xd2 = *(double *)(*piVar12 + 0x20);
        puVar7[iVar5 * 8 + 2] = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar7 + iVar5 * 0x40 + 0x14) = *(undefined4 *)(*piVar12 + 0x24);
      }
      else {
        in_xd2 = *(double *)(*piVar12 + 0x24);
        *(double *)((int)puVar7 + iVar5 * 0x40 + 0x14) = in_xd2;
      }
      *(undefined4 *)(puVar7 + iVar5 * 8 + 3) = *ar7;
      *(undefined4 *)((int)puVar7 + iVar5 * 0x40 + 0x1c) = ar7[1];
      iVar5 = iVar5 + 1;
    }
    uVar15 = 0xe0000000;
    piVar12 = 0x8c4aa520;
    iVar11 = iVar10 + 1;
    iVar4 = iVar10;
    iVar8 = iVar5;
    iVar10 = iVar11;
  } while (iVar11 < 3);
  if (iVar5 == 3) {
    *(undefined4 *)puVar7 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = *(undefined4 *)puVar7;
      uVar20 = *(undefined4 *)((int)puVar7 + 4);
      uVar24 = *(undefined4 *)(puVar7 + 1);
      *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)puVar7 + 0xc);
      *(undefined4 *)(unaff_r8 + 3) = uVar24;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar20;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = uVar14;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar7[1];
      uVar23 = puVar7[2];
      unaff_r8[3] = puVar7[3];
      unaff_r8[2] = uVar23;
      unaff_r8[1] = uVar19;
      *unaff_r8 = uVar18;
    }
    puVar9 = puVar7 + 8;
    *(undefined4 *)puVar9 = uVar15;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)puVar9;
      uVar14 = *(undefined4 *)((int)puVar7 + 0x44);
      uVar20 = *(undefined4 *)(puVar7 + 9);
      *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)puVar7 + 0x4c);
      *(undefined4 *)(unaff_r8 + 7) = uVar20;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar14;
      puVar9 = unaff_r8 + 6;
      *(undefined4 *)puVar9 = uVar15;
    }
    else {
      uVar18 = *puVar9;
      uVar19 = puVar7[9];
      uVar23 = puVar7[10];
      unaff_r8[7] = puVar7[0xb];
      unaff_r8[6] = uVar23;
      unaff_r8[5] = uVar19;
      puVar9 = unaff_r8 + 4;
      *puVar9 = uVar18;
    }
    puVar7 = (undefined8 *)((int)0x80 + (int)puVar7);
    *(undefined4 *)puVar7 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)puVar7;
      uVar14 = *(undefined4 *)((int)puVar7 + 4);
      uVar20 = *(undefined4 *)(puVar7 + 1);
      *(undefined4 *)((int)puVar9 + 0x3c) = *(undefined4 *)((int)puVar7 + 0xc);
      *(undefined4 *)(puVar9 + 7) = uVar20;
      *(undefined4 *)((int)puVar9 + 0x34) = uVar14;
      *(undefined4 *)(puVar9 + 6) = uVar15;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar7[1];
      uVar23 = puVar7[2];
      puVar9[7] = puVar7[3];
      puVar9[6] = uVar23;
      puVar9[5] = uVar19;
      puVar9[4] = uVar18;
    }
    *piVar12 = *piVar12 + 3;
  }
  else {
    *(undefined4 *)puVar7 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = *(undefined4 *)puVar7;
      uVar20 = *(undefined4 *)((int)puVar7 + 4);
      uVar24 = *(undefined4 *)(puVar7 + 1);
      *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)puVar7 + 0xc);
      *(undefined4 *)(unaff_r8 + 3) = uVar24;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar20;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = uVar14;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar7[1];
      uVar23 = puVar7[2];
      unaff_r8[3] = puVar7[3];
      unaff_r8[2] = uVar23;
      unaff_r8[1] = uVar19;
      *unaff_r8 = uVar18;
    }
    puVar9 = puVar7 + 8;
    *(undefined4 *)puVar9 = uVar15;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = *(undefined4 *)puVar9;
      uVar20 = *(undefined4 *)((int)puVar7 + 0x44);
      uVar24 = *(undefined4 *)(puVar7 + 9);
      *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)puVar7 + 0x4c);
      *(undefined4 *)(unaff_r8 + 7) = uVar24;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar20;
      puVar9 = unaff_r8 + 6;
      *(undefined4 *)puVar9 = uVar14;
    }
    else {
      uVar18 = *puVar9;
      uVar19 = puVar7[9];
      uVar23 = puVar7[10];
      unaff_r8[7] = puVar7[0xb];
      unaff_r8[6] = uVar23;
      unaff_r8[5] = uVar19;
      puVar9 = unaff_r8 + 4;
      *puVar9 = uVar18;
    }
    puVar6 = (undefined8 *)((int)0xc0 + (int)puVar7);
    *(undefined4 *)puVar6 = uVar15;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)puVar6;
      uVar14 = *(undefined4 *)((int)puVar6 + 4);
      uVar20 = *(undefined4 *)(puVar6 + 1);
      *(undefined4 *)((int)puVar9 + 0x3c) = *(undefined4 *)((int)puVar6 + 0xc);
      *(undefined4 *)(puVar9 + 7) = uVar20;
      *(undefined4 *)((int)puVar9 + 0x34) = uVar14;
      puVar9 = puVar9 + 6;
      *(undefined4 *)puVar9 = uVar15;
    }
    else {
      uVar18 = *puVar6;
      uVar19 = puVar6[1];
      uVar23 = puVar6[2];
      puVar9[7] = puVar6[3];
      puVar9[6] = uVar23;
      puVar9[5] = uVar19;
      puVar9 = puVar9 + 4;
      *puVar9 = uVar18;
    }
    puVar7 = (undefined8 *)((int)0x80 + (int)puVar7);
    *(undefined4 *)puVar7 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)puVar7;
      uVar14 = *(undefined4 *)((int)puVar7 + 4);
      uVar20 = *(undefined4 *)(puVar7 + 1);
      *(undefined4 *)((int)puVar9 + 0x3c) = *(undefined4 *)((int)puVar7 + 0xc);
      *(undefined4 *)(puVar9 + 7) = uVar20;
      *(undefined4 *)((int)puVar9 + 0x34) = uVar14;
      *(undefined4 *)(puVar9 + 6) = uVar15;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar7[1];
      uVar23 = puVar7[2];
      puVar9[7] = puVar7[3];
      puVar9[6] = uVar23;
      puVar9[5] = uVar19;
      puVar9[4] = uVar18;
    }
    *piVar12 = *piVar12 + 4;
  }
  return iVar5;
}

__asm__(".globl _FUN_8c247898\n.set _FUN_8c247898, _FUN_8c247898_def\n");
