#include "../decls.h"
int FUN_8c24763c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined8 *ar7)

{
  double *pdVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *unaff_r8;
  undefined8 *puVar10;
  int *piVar11;
  int iVar12;
  double in_dr0;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double in_dr4;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  double in_dr6;
  float fVar25;
  double in_xd2;
  double in_xd4;
  double dVar26;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  int aiStack_20 [3];
  undefined4 uVar20;
  undefined4 uVar24;
  
  puVar2 = 0x8c4c2520;
  pdVar1 = 0x8c4ab31c;
  aiStack_20[0] = ar4;
  aiStack_20[1] = ar5;
  aiStack_20[2] = ar6;
  iVar5 = 2;
  iVar8 = 0;
  iVar12 = 0;
  do {
    pdVar4 = 0x8c4aa4b8;
    pdVar3 = 0x8c4ab324;
    iVar6 = iVar12;
    if ((*(uint *)aiStack_20[iVar5] & 1 ^ *(uint *)aiStack_20[iVar8] & 1) == 1) {
      iVar6 = aiStack_20[iVar5];
      iVar5 = aiStack_20[iVar8];
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x18),SUB84(in_dr4,0));
        dVar17 = (double)CONCAT44(*(undefined4 *)(iVar5 + 0x18),*(undefined4 *)0x8c4aa4d4);
      }
      else {
        in_xd2 = *(undefined4 *)0x8c4aa4d4;
        dVar21 = *(double *)(iVar6 + 0x18);
        dVar17 = *(double *)(iVar5 + 0x18);
      }
      fVar16 = (float)((ulonglong)dVar21 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) - fVar16);
      }
      else {
        dVar17 = dVar17 - dVar21;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(fVar16,*(undefined4 *)(iVar6 + 0x10));
        dVar26 = in_xd4;
      }
      else {
        dVar26 = *(double *)(iVar6 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) -
                                  (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar17,0));
      }
      else {
        dVar17 = dVar17 - dVar21;
      }
      dVar22 = in_xd2;
      if (in_FPSCR_SZ == '\0') {
        dVar22 = (double)CONCAT44(SUB84(dVar17,0),SUB84(dVar21,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) /
                                  (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar22,0));
      }
      else {
        dVar22 = dVar22 / dVar17;
      }
      fVar16 = SUB84(dVar22,0);
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(fVar16,*(undefined4 *)(iVar5 + 0x10));
      }
      else {
        in_xd2 = *(double *)(iVar5 + 0x10);
        dVar21 = dVar26;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) - fVar16);
      }
      else {
        dVar21 = dVar21 - dVar22;
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr6 = (double)CONCAT44(*(undefined4 *)(iVar6 + 0x14),SUB84(in_dr6,0));
        dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),SUB84(in_dr0,0));
      }
      else {
        in_dr6 = *(double *)(iVar6 + 0x14);
      }
      fVar13 = (float)((ulonglong)dVar22 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44(fVar13 * SUB84(dVar21,0) + (float)((ulonglong)dVar21 >> 0x20),
                                  SUB84(dVar21,0));
      }
      fVar25 = (float)((ulonglong)in_dr6 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)(iVar5 + 0x14));
        in_dr4 = (double)CONCAT44(fVar25,fVar16);
      }
      else {
        in_xd2 = *(double *)(iVar5 + 0x14);
        in_dr4 = in_dr6;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0) - fVar25);
      }
      else {
        dVar21 = dVar21 - in_dr6;
      }
      uVar15 = (undefined4)((ulonglong)dVar21 >> 0x20);
      in_xd4 = dVar21;
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),uVar15);
        in_xd4 = dVar26;
      }
      if (in_FPSCR_PR == '\0') {
        in_dr4 = (double)CONCAT44(fVar13 * SUB84(dVar21,0) + (float)((ulonglong)in_dr4 >> 0x20),
                                  SUB84(in_dr4,0));
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = (double)CONCAT44(uVar15,*(undefined4 *)pdVar1);
        dVar17 = (double)CONCAT44(*(undefined4 *)0x8c4ab320,SUB84(dVar22,0));
      }
      else {
        in_xd2 = *pdVar1;
        dVar17 = *(undefined4 *)0x8c4ab320;
      }
      if (in_FPSCR_PR == '\0') {
        fVar16 = SUB84(dVar21,0) * (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        fVar16 = SUB84(dVar21 * dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)0x8c4aa4b4,fVar16);
        dVar21 = (double)CONCAT44(SUB84(in_dr4,0),SUB84(dVar17,0));
      }
      else {
        uVar18 = *(undefined4 *)0x8c4aa4b4;
        dVar21 = in_xd4;
      }
      if (in_FPSCR_PR == '\0') {
        uVar18 = CONCAT44((float)((ulonglong)dVar21 >> 0x20) * (float)uVar18 +
                          (float)((ulonglong)uVar18 >> 0x20),(float)uVar18);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)puVar2 + iVar12 * 0x20 + 4) = (int)((ulonglong)uVar18 >> 0x20);
        dVar21 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(dVar21,0));
        dVar17 = (double)CONCAT44(*(undefined4 *)pdVar4,*(undefined4 *)pdVar1);
      }
      else {
        *(undefined8 *)((int)puVar2 + iVar12 * 0x20 + 4) = uVar18;
        dVar21 = *pdVar3;
        in_xd2 = *pdVar1;
        dVar17 = *pdVar4;
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                  SUB84(dVar17,0) * (float)((ulonglong)dVar21 >> 0x20));
      }
      else {
        dVar17 = dVar17 * dVar21;
      }
      in_dr0 = in_dr4;
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar21,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar17 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar17,0) +
                                  (float)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0));
      }
      iVar6 = iVar12 + 1;
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar2 + iVar12 * 4 + 1) = (int)((ulonglong)dVar17 >> 0x20);
        *(undefined4 *)((int)puVar2 + iVar12 * 0x20 + 0xc) = *(undefined4 *)pdVar1;
        *(undefined4 *)(puVar2 + iVar12 * 4 + 2) = *(undefined4 *)ar7;
        *(undefined4 *)((int)puVar2 + iVar12 * 0x20 + 0x14) = *(undefined4 *)((int)ar7 + 4);
        *(undefined4 *)(puVar2 + iVar12 * 4 + 3) = *(undefined4 *)(ar7 + 1);
        *(undefined4 *)((int)puVar2 + iVar12 * 0x20 + 0x1c) = *(undefined4 *)((int)ar7 + 0xc);
        iVar6 = iVar12 + 1;
      }
      else {
        puVar2[iVar12 * 4 + 1] = dVar17;
        *(double *)((int)puVar2 + iVar12 * 0x20 + 0xc) = *pdVar1;
        puVar2[iVar12 * 4 + 2] = *ar7;
        *(undefined8 *)((int)puVar2 + iVar12 * 0x20 + 0x14) = *(undefined8 *)((int)ar7 + 4);
        puVar2[iVar12 * 4 + 3] = ar7[1];
        in_xd2 = *(double *)((int)ar7 + 0xc);
        *(double *)((int)puVar2 + iVar12 * 0x20 + 0x1c) = in_xd2;
      }
    }
    piVar11 = aiStack_20 + iVar8;
    if ((*(uint *)*piVar11 & 1) == 0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar2 + iVar6 * 0x20 + 4) = *(undefined4 *)(*piVar11 + 4);
      }
      else {
        in_xd2 = *(double *)(*piVar11 + 4);
        *(double *)((int)puVar2 + iVar6 * 0x20 + 4) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar2 + iVar6 * 4 + 1) = *(undefined4 *)(*piVar11 + 8);
      }
      else {
        in_xd2 = *(double *)(*piVar11 + 8);
        puVar2[iVar6 * 4 + 1] = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)((int)puVar2 + iVar6 * 0x20 + 0xc) = *(undefined4 *)(*piVar11 + 0xc);
        *(undefined4 *)(puVar2 + iVar6 * 4 + 2) = *(undefined4 *)ar7;
        *(undefined4 *)((int)puVar2 + iVar6 * 0x20 + 0x14) = *(undefined4 *)((int)ar7 + 4);
        *(undefined4 *)(puVar2 + iVar6 * 4 + 3) = *(undefined4 *)(ar7 + 1);
        *(undefined4 *)((int)puVar2 + iVar6 * 0x20 + 0x1c) = *(undefined4 *)((int)ar7 + 0xc);
      }
      else {
        *(undefined8 *)((int)puVar2 + iVar6 * 0x20 + 0xc) = *(undefined8 *)(*piVar11 + 0xc);
        puVar2[iVar6 * 4 + 2] = *ar7;
        *(undefined8 *)((int)puVar2 + iVar6 * 0x20 + 0x14) = *(undefined8 *)((int)ar7 + 4);
        puVar2[iVar6 * 4 + 3] = ar7[1];
        in_xd2 = *(double *)((int)ar7 + 0xc);
        *(double *)((int)puVar2 + iVar6 * 0x20 + 0x1c) = in_xd2;
      }
      iVar6 = iVar6 + 1;
    }
    uVar15 = 0xe0000000;
    piVar11 = 0x8c4aa520;
    iVar9 = iVar8 + 1;
    iVar5 = iVar8;
    iVar8 = iVar9;
    iVar12 = iVar6;
  } while (iVar9 < 3);
  if (iVar6 == 3) {
    *(undefined4 *)puVar2 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = *(undefined4 *)puVar2;
      uVar20 = *(undefined4 *)((int)puVar2 + 4);
      uVar24 = *(undefined4 *)(puVar2 + 1);
      *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)puVar2 + 0xc);
      *(undefined4 *)(unaff_r8 + 3) = uVar24;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar20;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = uVar14;
    }
    else {
      uVar18 = *puVar2;
      uVar19 = puVar2[1];
      uVar23 = puVar2[2];
      unaff_r8[3] = puVar2[3];
      unaff_r8[2] = uVar23;
      unaff_r8[1] = uVar19;
      *unaff_r8 = uVar18;
    }
    puVar10 = puVar2 + 4;
    *(undefined4 *)puVar10 = uVar15;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)puVar10;
      uVar14 = *(undefined4 *)((int)puVar2 + 0x24);
      uVar20 = *(undefined4 *)(puVar2 + 5);
      *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)puVar2 + 0x2c);
      *(undefined4 *)(unaff_r8 + 7) = uVar20;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar14;
      puVar10 = unaff_r8 + 6;
      *(undefined4 *)puVar10 = uVar15;
    }
    else {
      uVar18 = *puVar10;
      uVar19 = puVar2[5];
      uVar23 = puVar2[6];
      unaff_r8[7] = puVar2[7];
      unaff_r8[6] = uVar23;
      unaff_r8[5] = uVar19;
      puVar10 = unaff_r8 + 4;
      *puVar10 = uVar18;
    }
    puVar7 = puVar2 + 8;
    *(undefined4 *)puVar7 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)puVar7;
      uVar14 = *(undefined4 *)((int)puVar2 + 0x44);
      uVar20 = *(undefined4 *)(puVar2 + 9);
      *(undefined4 *)((int)puVar10 + 0x3c) = *(undefined4 *)((int)puVar2 + 0x4c);
      *(undefined4 *)(puVar10 + 7) = uVar20;
      *(undefined4 *)((int)puVar10 + 0x34) = uVar14;
      *(undefined4 *)(puVar10 + 6) = uVar15;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar2[9];
      uVar23 = puVar2[10];
      puVar10[7] = puVar2[0xb];
      puVar10[6] = uVar23;
      puVar10[5] = uVar19;
      puVar10[4] = uVar18;
    }
    *piVar11 = *piVar11 + 3;
  }
  else {
    *(undefined4 *)puVar2 = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = *(undefined4 *)puVar2;
      uVar20 = *(undefined4 *)((int)puVar2 + 4);
      uVar24 = *(undefined4 *)(puVar2 + 1);
      *(undefined4 *)((int)unaff_r8 + 0x1c) = *(undefined4 *)((int)puVar2 + 0xc);
      *(undefined4 *)(unaff_r8 + 3) = uVar24;
      *(undefined4 *)((int)unaff_r8 + 0x14) = uVar20;
      unaff_r8 = unaff_r8 + 2;
      *(undefined4 *)unaff_r8 = uVar14;
    }
    else {
      uVar18 = *puVar2;
      uVar19 = puVar2[1];
      uVar23 = puVar2[2];
      unaff_r8[3] = puVar2[3];
      unaff_r8[2] = uVar23;
      unaff_r8[1] = uVar19;
      *unaff_r8 = uVar18;
    }
    puVar10 = puVar2 + 4;
    *(undefined4 *)puVar10 = uVar15;
    if (in_FPSCR_SZ == '\0') {
      uVar14 = *(undefined4 *)puVar10;
      uVar20 = *(undefined4 *)((int)puVar2 + 0x24);
      uVar24 = *(undefined4 *)(puVar2 + 5);
      *(undefined4 *)((int)unaff_r8 + 0x3c) = *(undefined4 *)((int)puVar2 + 0x2c);
      *(undefined4 *)(unaff_r8 + 7) = uVar24;
      *(undefined4 *)((int)unaff_r8 + 0x34) = uVar20;
      puVar10 = unaff_r8 + 6;
      *(undefined4 *)puVar10 = uVar14;
    }
    else {
      uVar18 = *puVar10;
      uVar19 = puVar2[5];
      uVar23 = puVar2[6];
      unaff_r8[7] = puVar2[7];
      unaff_r8[6] = uVar23;
      unaff_r8[5] = uVar19;
      puVar10 = unaff_r8 + 4;
      *puVar10 = uVar18;
    }
    puVar7 = puVar2 + 0xc;
    *(undefined4 *)puVar7 = uVar15;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)puVar7;
      uVar14 = *(undefined4 *)((int)puVar2 + 100);
      uVar20 = *(undefined4 *)(puVar2 + 0xd);
      *(undefined4 *)((int)puVar10 + 0x3c) = *(undefined4 *)((int)puVar2 + 0x6c);
      *(undefined4 *)(puVar10 + 7) = uVar20;
      *(undefined4 *)((int)puVar10 + 0x34) = uVar14;
      puVar10 = puVar10 + 6;
      *(undefined4 *)puVar10 = uVar15;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar2[0xd];
      uVar23 = puVar2[0xe];
      puVar10[7] = puVar2[0xf];
      puVar10[6] = uVar23;
      puVar10[5] = uVar19;
      puVar10 = puVar10 + 4;
      *puVar10 = uVar18;
    }
    puVar7 = puVar2 + 8;
    *(undefined4 *)puVar7 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar15 = *(undefined4 *)puVar7;
      uVar14 = *(undefined4 *)((int)puVar2 + 0x44);
      uVar20 = *(undefined4 *)(puVar2 + 9);
      *(undefined4 *)((int)puVar10 + 0x3c) = *(undefined4 *)((int)puVar2 + 0x4c);
      *(undefined4 *)(puVar10 + 7) = uVar20;
      *(undefined4 *)((int)puVar10 + 0x34) = uVar14;
      *(undefined4 *)(puVar10 + 6) = uVar15;
    }
    else {
      uVar18 = *puVar7;
      uVar19 = puVar2[9];
      uVar23 = puVar2[10];
      puVar10[7] = puVar2[0xb];
      puVar10[6] = uVar23;
      puVar10[5] = uVar19;
      puVar10[4] = uVar18;
    }
    *piVar11 = *piVar11 + 4;
  }
  return iVar6;
}

__asm__(".globl _FUN_8c24763c\n.set _FUN_8c24763c, _FUN_8c24763c_def\n");
