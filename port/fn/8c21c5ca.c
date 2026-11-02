#include "../decls.h"
undefined4 * FUN_8c21c5ca_def(int ar4,int ar5,int ar6,int *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  double in_dr0;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  undefined4 uVar12;
  double dVar11;
  float fVar13;
  undefined4 in_fr5;
  uint uVar14;
  float fVar15;
  float fVar16;
  double in_dr6;
  float fVar17;
  undefined4 in_fr9;
  double dVar18;
  double dVar19;
  undefined4 in_fr11;
  double dVar20;
  undefined4 uVar21;
  undefined8 in_dr12;
  float fVar22;
  double in_xd0;
  double in_xd2;
  double dVar23;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  double in_xd10;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 auStack_24 [3];
  undefined8 uStack_18;
  
  if (in_FPSCR_SZ == '\0') {
    puVar6 = (undefined8 *)((int)&uStack_18 + 4);
    uStack_18 = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(undefined4)uStack_18);
  }
  else {
    puVar6 = &uStack_18;
    uStack_18 = in_dr12;
  }
  *(undefined4 *)((int)puVar6 + -4) = in_PR;
  FUN_8c010794(8,(undefined1 *)((int)puVar6 + -0xc),&DAT_8c26d7a0);
  uVar21 = (undefined4)in_dr12;
  iVar1 = libgcc_divide_helper_0106dc(ar5 + ar6 + -1,ar6);
  iVar3 = iVar1 * 0x10 + ar4;
  piVar4 = (int *)(ar5 * 0x10 + ar4);
  iVar1 = libgcc_divide_helper_0106dc(ar5 + 1,ar6);
  piVar5 = (int *)(iVar1 * 0x10 + ar4);
  iVar1 = libgcc_divide_helper_0106dc(ar5 + 2,ar6);
  iVar1 = ar4 + iVar1 * 0x10;
  fVar9 = (float)(*piVar5 - *piVar4);
  dVar10 = (double)(ulonglong)(uint)fVar9;
  dVar20 = in_xd2;
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(fVar9,in_fr5);
  }
  uVar14 = (uint)((ulonglong)dVar20 >> 0x20);
  dVar23 = dVar20;
  if (in_FPSCR_PR != '\0' || 0.0 <= fVar9) {
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)(ulonglong)uVar14;
      dVar23 = in_xd2;
    }
  }
  else {
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)(ulonglong)uVar14;
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      dVar23 = in_xd2;
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)(ulonglong)(uint)(SUB84(dVar10,0) + SUB84(in_dr0,0));
    }
    else {
      dVar10 = dVar10 + in_dr0;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar6 + -8) = SUB84(dVar10,0);
  }
  else {
    *(double *)((int)puVar6 + -8) = dVar23;
  }
  iVar2 = *piVar4;
  fVar9 = (float)iVar2;
  dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar9);
  if (iVar2 < 0) {
    if (in_FPSCR_PR == '\0') {
      dVar10 = (double)CONCAT44(0x4f800000,fVar9 + 4.2949673e+09);
    }
    else {
      dVar10 = (double)CONCAT44(0x4f800000,fVar9) + (double)CONCAT44(0x4f800000,fVar9);
    }
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),_DAT_8c4aad54);
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4aad58,_DAT_8c4aad54);
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr0,0) - SUB84(dVar10,0);
  }
  else {
    fVar9 = SUB84(in_dr0 - dVar10,0);
  }
  iVar2 = (uint)(0 < *piVar5 - iVar2) * 4;
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                              *(undefined4 *)((int)puVar6 + iVar2 + -0xc));
    in_xd0 = (double)CONCAT44(fVar9,SUB84(dVar20,0));
  }
  else {
    dVar23 = *(double *)((int)puVar6 + iVar2 + -0xc);
  }
  if (in_FPSCR_PR == '\0') {
    in_xd0 = (double)CONCAT44((float)((ulonglong)in_xd0 >> 0x20) / SUB84(dVar10,0),SUB84(in_xd0,0));
  }
  else {
    in_xd0 = in_xd0 / dVar10;
  }
  uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
  dVar10 = (double)CONCAT44(uVar12,0x3f800000);
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44(uVar12,0x40000000);
  }
  else {
    dVar10 = dVar10 + dVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(0x3f000000,in_fr11);
    uVar12 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = (double)CONCAT44(uVar12,uVar12);
  }
  else {
    dVar20 = 0.1250000293366611;
    in_xd4 = in_xd0;
  }
  if (in_FPSCR_PR == '\0') {
    fVar15 = (float)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = (double)CONCAT44(fVar15,SUB84(in_xd0,0) * fVar15);
  }
  else {
    in_xd0 = in_xd0 * in_xd0;
  }
  fVar17 = (float)((ulonglong)in_xd0 >> 0x20);
  fVar15 = SUB84(in_xd0,0);
  dVar18 = in_xd4;
  dVar7 = in_xd0;
  if (in_FPSCR_SZ == '\0') {
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),fVar17);
    dVar18 = (double)CONCAT44(fVar15,in_fr9);
    dVar7 = in_xd6;
  }
  if (in_FPSCR_PR == '\0') {
    dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) * SUB84(dVar10,0),SUB84(dVar18,0));
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr6,0) * fVar15);
  }
  else {
    dVar18 = dVar18 * dVar10;
    in_dr6 = in_dr6 * in_xd0;
  }
  uVar12 = (undefined4)((ulonglong)dVar18 >> 0x20);
  dVar11 = dVar18;
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(uVar12,SUB84(dVar10,0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - fVar17,SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 - in_xd0;
  }
  fVar16 = SUB84(in_dr6,0);
  dVar10 = dVar7;
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar16);
    dVar10 = in_xd10;
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) - fVar16,SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 - in_dr6;
  }
  dVar8 = dVar11;
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(uVar12,(int)((ulonglong)dVar11 >> 0x20));
    dVar8 = in_xd8;
  }
  fVar22 = (float)((ulonglong)dVar20 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),SUB84(dVar18,0) * fVar22);
  }
  else {
    dVar18 = dVar18 * dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(0x3fc00000,SUB84(dVar11,0));
  }
  else {
    dVar11 = 8.000001899898052;
  }
  if (in_FPSCR_SZ == '\0') {
    fVar9 = 2.5;
  }
  fVar13 = (float)((ulonglong)dVar11 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    dVar20 = (double)CONCAT44(fVar22,SUB84(dVar20,0) * fVar13);
  }
  else {
    dVar20 = dVar20 * dVar11;
  }
  if (in_FPSCR_SZ == '\0') {
    in_xd4 = (double)CONCAT44(fVar15,fVar9);
  }
  fVar9 = (float)((ulonglong)dVar20 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    in_xd4 = (double)CONCAT44((float)((ulonglong)in_xd4 >> 0x20) * SUB84(in_xd4,0),SUB84(in_xd4,0));
    in_xd0 = (double)CONCAT44(fVar17 * fVar9,fVar15);
  }
  else {
    in_xd4 = in_xd4 * in_xd4;
    in_xd0 = in_xd0 * dVar20;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44(fVar13,SUB84(dVar20,0));
    dVar10 = dVar23;
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = fVar16 - SUB84(in_xd0,0);
  }
  else {
    fVar16 = SUB84(in_dr6 - in_xd0,0);
  }
  if (in_FPSCR_PR == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                              SUB84(dVar11,0) - (float)((ulonglong)in_xd4 >> 0x20));
    in_xd0 = (double)CONCAT44((float)((ulonglong)in_xd0 >> 0x20) - SUB84(dVar20,0),SUB84(in_xd0,0));
  }
  else {
    dVar11 = dVar11 - in_xd4;
    in_xd0 = in_xd0 - dVar20;
  }
  dVar23 = dVar10;
  if (in_FPSCR_SZ == '\0') {
    dVar23 = (double)CONCAT44(SUB84(dVar11,0),fVar16);
  }
  if (in_FPSCR_PR == '\0') {
    dVar23 = (double)CONCAT44((float)((ulonglong)dVar23 >> 0x20) + 1.0,SUB84(dVar23,0));
  }
  else {
    dVar23 = dVar23 + (double)CONCAT44(0x3f800000,SUB84(in_xd4,0));
  }
  fVar15 = (float)((ulonglong)dVar18 >> 0x20);
  dVar19 = in_xd0;
  if (in_FPSCR_SZ == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fVar15);
    fVar15 = (float)((ulonglong)dVar10 >> 0x20);
    dVar19 = (double)CONCAT44((int)((ulonglong)in_xd0 >> 0x20),SUB84(dVar18,0));
  }
  if (in_FPSCR_PR == '\0') {
    dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar11,0),SUB84(dVar19,0));
  }
  else {
    dVar19 = dVar19 + dVar11;
  }
  fVar17 = (float)((ulonglong)dVar23 >> 0x20);
  dVar10 = dVar23;
  if (in_FPSCR_SZ == '\0') {
    dVar10 = (double)CONCAT44(fVar17,uVar21);
  }
  if (in_FPSCR_PR == '\0') {
    dVar18 = (double)CONCAT44((float)(uint)piVar5[1],(float)*(int *)(iVar1 + 4));
  }
  else {
    dVar18 = (double)piVar5[1];
  }
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(SUB84(dVar23,0),SUB84(in_xd0,0));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = (float)((ulonglong)dVar7 >> 0x20) * fVar9;
  }
  else {
    fVar9 = (float)((ulonglong)(dVar7 * dVar20) >> 0x20);
  }
  if (in_FPSCR_PR == '\0') {
    fVar16 = (float)(uint)piVar4[1];
    dVar20 = (double)CONCAT44(fVar16,(float)*(int *)(iVar3 + 4));
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) * fVar16,SUB84(dVar10,0));
  }
  else {
    dVar20 = (double)piVar4[1];
    dVar10 = dVar10 * dVar20;
  }
  uVar21 = SUB84(dVar19,0);
  dVar7 = dVar8;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(uVar21,SUB84(dVar20,0));
  }
  fVar16 = (float)((ulonglong)dVar19 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar22 = fVar9 * SUB84(dVar18,0) +
             fVar16 * (float)((ulonglong)dVar18 >> 0x20) +
             (float)((ulonglong)dVar7 >> 0x20) * SUB84(dVar7,0) + (float)((ulonglong)dVar10 >> 0x20)
    ;
    dVar10 = (double)CONCAT44(fVar22,SUB84(dVar10,0));
    iVar2 = (int)fVar22;
  }
  else {
    iVar2 = (int)dVar10;
  }
  dVar20 = dVar23;
  if (in_FPSCR_SZ == '\0') {
    dVar20 = (double)CONCAT44(fVar17,SUB84(dVar10,0));
  }
  *ar7 = iVar2;
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44((float)(uint)piVar5[2],(float)*(int *)(iVar1 + 8));
  }
  else {
    dVar10 = (double)piVar5[2];
  }
  if (in_FPSCR_PR == '\0') {
    fVar22 = (float)(uint)piVar4[2];
    dVar7 = (double)CONCAT44(fVar22,(float)*(int *)(iVar3 + 8));
    dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) * fVar22,SUB84(dVar20,0));
  }
  else {
    dVar7 = (double)piVar4[2];
    dVar20 = dVar20 * dVar7;
  }
  dVar18 = dVar8;
  if (in_FPSCR_SZ == '\0') {
    dVar18 = (double)CONCAT44(uVar21,SUB84(dVar7,0));
  }
  if (in_FPSCR_PR == '\0') {
    iVar2 = (int)(fVar9 * SUB84(dVar10,0) +
                 fVar16 * (float)((ulonglong)dVar10 >> 0x20) +
                 (float)((ulonglong)dVar18 >> 0x20) * SUB84(dVar18,0) +
                 (float)((ulonglong)dVar20 >> 0x20));
  }
  else {
    iVar2 = (int)dVar20;
  }
  ar7[1] = iVar2;
  if (in_FPSCR_SZ == '\0') {
    fVar15 = (float)*(int *)(iVar1 + 0xc);
  }
  if (in_FPSCR_PR == '\0') {
    dVar10 = (double)CONCAT44((float)(uint)piVar5[3],(float)*(int *)(iVar1 + 0xc));
  }
  else {
    dVar10 = (double)piVar5[3];
  }
  if (in_FPSCR_PR == '\0') {
    fVar22 = (float)(uint)piVar4[3];
    dVar20 = (double)CONCAT44(fVar22,(float)*(int *)(iVar3 + 0xc));
    fVar17 = fVar17 * fVar22;
  }
  else {
    dVar20 = (double)piVar4[3];
    fVar17 = (float)((ulonglong)(dVar23 * dVar20) >> 0x20);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar8 = (double)CONCAT44(uVar21,SUB84(dVar20,0));
  }
  if (in_FPSCR_PR == '\0') {
    fVar17 = (float)((ulonglong)dVar8 >> 0x20) * SUB84(dVar8,0) + fVar17;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar19 = (double)((ulonglong)(uint)fVar16 << 0x20);
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar17);
  }
  if (in_FPSCR_PR == '\0') {
    iVar1 = (int)(fVar9 * fVar15 +
                 (float)((ulonglong)dVar19 >> 0x20) * (float)((ulonglong)dVar10 >> 0x20) +
                 SUB84(dVar10,0));
  }
  else {
    iVar1 = (int)dVar10;
  }
  ar7[2] = iVar1;
  return &DAT_8c21c76c;
}

__asm__(".globl _FUN_8c21c5ca\n.set _FUN_8c21c5ca, _FUN_8c21c5ca_def\n");
