#include "../decls.h"
undefined4 FUN_8c21c1b0_def(int ar4,int ar5,undefined4 ar6,double *ar7)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  double in_dr0;
  double dVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 in_fr5;
  uint uVar13;
  undefined4 in_fr7;
  float fVar14;
  undefined4 in_fr9;
  double in_xd0;
  double in_xd2;
  double dVar15;
  double in_xd4;
  bool bVar16;
  undefined4 in_PR;
  char cVar17;
  char cVar18;
  undefined1 auStack_14 [8];
  undefined4 uStack_c;
  
  cVar18 = '\0';
  cVar17 = '\0';
  uStack_c = in_PR;
  FUN_8c010794(8,auStack_14,&DAT_8c26d780);
  piVar6 = (int *)(ar5 * 0x14 + ar4);
  iVar4 = libgcc_divide_helper_0106dc(ar5 + 1,ar6);
  piVar5 = (int *)(ar4 + iVar4 * 0x14);
  fVar8 = (float)(*piVar5 - *piVar6);
  dVar10 = (double)(ulonglong)(uint)fVar8;
  dVar7 = in_xd2;
  if (cVar18 == '\0') {
    dVar7 = (double)CONCAT44(fVar8,in_fr5);
  }
  uVar13 = (uint)((ulonglong)dVar7 >> 0x20);
  dVar15 = dVar7;
  if (cVar17 != '\0' || 0.0 <= fVar8) {
    if (cVar18 == '\0') {
      dVar10 = (double)(ulonglong)uVar13;
      dVar15 = in_xd2;
    }
  }
  else {
    if (cVar18 == '\0') {
      dVar10 = (double)(ulonglong)uVar13;
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      dVar15 = in_xd2;
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar17 == '\0') {
      dVar10 = (double)(ulonglong)(uint)(SUB84(dVar10,0) + SUB84(in_dr0,0));
    }
    else {
      dVar10 = dVar10 + in_dr0;
    }
  }
  if (cVar18 == '\0') {
    stack0xfffffff0 = (double)CONCAT44(uStack_c,SUB84(dVar10,0));
  }
  else {
    stack0xfffffff0 = dVar15;
  }
  iVar4 = *piVar6;
  fVar8 = (float)iVar4;
  dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar8);
  if (iVar4 < 0) {
    if (cVar17 == '\0') {
      dVar10 = (double)CONCAT44(0x4f800000,fVar8 + 4.2949673e+09);
    }
    else {
      dVar10 = (double)CONCAT44(0x4f800000,fVar8) + (double)CONCAT44(0x4f800000,fVar8);
    }
  }
  if (cVar18 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),_DAT_8c4aad54);
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4aad58,_DAT_8c4aad54);
  }
  if (cVar17 == '\0') {
    fVar8 = SUB84(in_dr0,0) - SUB84(dVar10,0);
  }
  else {
    fVar8 = SUB84(in_dr0 - dVar10,0);
  }
  if (cVar18 == '\0') {
    dVar10 = (double)CONCAT44(piVar6[1],SUB84(dVar10,0));
  }
  else {
    dVar10 = *(double *)(piVar6 + 1);
  }
  iVar4 = (uint)(0 < *piVar5 - iVar4) * 4;
  if (cVar18 == '\0') {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),*(undefined4 *)(auStack_14 + iVar4));
    in_xd0 = (double)CONCAT44(fVar8,SUB84(dVar7,0));
  }
  else {
    dVar15 = *(double *)(auStack_14 + iVar4);
  }
  if (cVar17 == '\0') {
    in_xd0 = (double)CONCAT44((float)((ulonglong)in_xd0 >> 0x20) / SUB84(dVar10,0),SUB84(in_xd0,0));
  }
  else {
    in_xd0 = in_xd0 / dVar10;
  }
  if (cVar18 == '\0') {
    dVar7 = (double)CONCAT44(piVar5[2],fVar8);
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),piVar6[2]);
    in_xd0 = (double)CONCAT44((int)((ulonglong)in_xd0 >> 0x20),0x3f800000);
  }
  else {
    dVar7 = *(double *)(piVar5 + 2);
    dVar15 = *(double *)(piVar6 + 2);
    in_xd4 = (double)CONCAT44(0x3f800000,in_fr9);
  }
  if (cVar17 == '\0') {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                              SUB84(dVar10,0) * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar10 = dVar10 * dVar7;
  }
  if (cVar18 == '\0') {
    fVar8 = (float)(uint)piVar5[1];
  }
  else {
    fVar8 = (float)((ulonglong)*(undefined8 *)(piVar5 + 1) >> 0x20);
  }
  if (cVar17 == '\0') {
    dVar10 = (double)(ulonglong)(uint)(fVar8 * (float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar10,0))
    ;
  }
  if (cVar18 == '\0') {
    uVar11 = CONCAT44(piVar6[3],SUB84(dVar10,0));
    fVar8 = (float)(uint)piVar5[3];
  }
  else {
    uVar11 = *(ulonglong *)(piVar6 + 3);
    fVar8 = (float)((ulonglong)*(undefined8 *)(piVar5 + 3) >> 0x20);
  }
  if (cVar17 == '\0') {
    uVar11 = (ulonglong)(uint)(fVar8 * (float)(uVar11 >> 0x20) + (float)uVar11);
  }
  if (cVar18 == '\0') {
    fVar8 = (float)(uint)piVar5[4];
    uVar11 = CONCAT44(piVar6[4],(int)uVar11);
  }
  else {
    fVar8 = (float)((ulonglong)*(undefined8 *)(piVar5 + 4) >> 0x20);
    uVar11 = *(ulonglong *)(piVar6 + 4);
  }
  if (cVar17 == '\0') {
    fVar14 = (float)(uVar11 >> 0x20);
    uVar11 = CONCAT44(fVar14,fVar8 * fVar14 + (float)uVar11);
  }
  dVar10 = dVar15;
  if (cVar18 == '\0') {
    dVar10 = (double)CONCAT44((int)uVar11,in_fr7);
  }
  if (cVar17 == '\0') {
    bVar16 = (float)((ulonglong)dVar10 >> 0x20) < 0.0;
    fVar8 = (float)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = (double)CONCAT44(fVar8,SUB84(in_xd0,0) - fVar8);
  }
  else {
    bVar16 = dVar10 < (double)(uVar11 & 0xffffffff00000000);
    in_xd0 = in_xd0 - in_xd0;
  }
  if (bVar16) {
    if (cVar17 == '\0') {
      in_xd0 = (double)CONCAT44((float)((ulonglong)in_xd0 >> 0x20) * -1.0,SUB84(in_xd0,0));
    }
    else {
      in_xd0 = in_xd0 * -0.0078125;
    }
  }
  if (cVar18 == '\0') {
    dVar7 = (double)CONCAT44(piVar6[1],piVar5[1]);
    dVar10 = (double)((longlong)in_xd0 << 0x20);
  }
  else {
    dVar15 = *(double *)(piVar5 + 1);
    dVar7 = *(double *)(piVar6 + 1);
    dVar10 = in_xd4;
  }
  fVar14 = (float)((ulonglong)in_xd0 >> 0x20);
  fVar8 = (float)((ulonglong)dVar10 >> 0x20);
  if (cVar17 == '\0') {
    fVar9 = fVar8 * (float)((ulonglong)dVar7 >> 0x20) + SUB84(dVar7,0) * fVar14;
  }
  else {
    fVar9 = SUB84(dVar7 * in_xd0,0);
  }
  pdVar3 = (double *)((int)ar7 + 4);
  pdVar2 = ar7 + 1;
  pdVar1 = (double *)((int)ar7 + 0xc);
  if (cVar18 == '\0') {
    *(float *)ar7 = fVar9;
    dVar10 = (double)CONCAT44(piVar6[2],piVar5[2]);
  }
  else {
    *ar7 = dVar15;
    dVar15 = *(double *)(piVar5 + 2);
    dVar10 = *(double *)(piVar6 + 2);
  }
  if (cVar17 == '\0') {
    fVar9 = fVar8 * (float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar10,0) * fVar14;
  }
  else {
    fVar9 = SUB84(dVar10 * in_xd0,0);
  }
  if (cVar18 == '\0') {
    *(float *)pdVar3 = fVar9;
    dVar10 = (double)CONCAT44(piVar6[3],piVar5[3]);
  }
  else {
    *pdVar3 = dVar15;
    dVar15 = *(double *)(piVar5 + 3);
    dVar10 = *(double *)(piVar6 + 3);
  }
  if (cVar17 == '\0') {
    fVar9 = fVar8 * (float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar10,0) * fVar14;
  }
  else {
    fVar9 = SUB84(dVar10 * in_xd0,0);
  }
  if (cVar18 == '\0') {
    *(float *)pdVar2 = fVar9;
    dVar10 = (double)CONCAT44(piVar6[4],piVar5[4]);
  }
  else {
    *pdVar2 = dVar15;
    dVar15 = *(double *)(piVar5 + 4);
    dVar10 = *(double *)(piVar6 + 4);
  }
  if (cVar17 == '\0') {
    fVar9 = (float)((ulonglong)dVar10 >> 0x20);
    dVar10 = (double)CONCAT44(fVar9,fVar8 * fVar9 + SUB84(dVar10,0) * fVar14);
  }
  else {
    dVar10 = dVar10 * in_xd0;
  }
  if (cVar18 == '\0') {
    *(int *)pdVar1 = SUB84(dVar10,0);
    fVar14 = *(float *)pdVar3;
    fVar8 = *(float *)pdVar2;
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar8);
    fVar9 = fVar14;
    dVar7 = *pdVar3;
  }
  else {
    *pdVar1 = dVar15;
    fVar14 = (float)((ulonglong)*pdVar3 >> 0x20);
    dVar15 = *pdVar2;
    fVar9 = SUB84(dVar15,0);
    fVar8 = (float)((ulonglong)dVar15 >> 0x20);
    dVar7 = dVar15;
  }
  if (cVar17 == '\0') {
    fVar8 = SUB84(dVar10,0) * fVar8;
  }
  else {
    fVar8 = SUB84(dVar10 * dVar7,0);
  }
  if (cVar18 == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)pdVar1,*(undefined4 *)ar7);
  }
  else {
    dVar10 = *pdVar1;
    in_xd4 = *ar7;
  }
  if (cVar17 == '\0') {
    fVar8 = fVar14 * fVar9 + fVar8;
  }
  fVar9 = (float)((ulonglong)dVar10 >> 0x20);
  fVar14 = SUB84(dVar10,0);
  dVar7 = in_xd4;
  if (cVar18 == '\0') {
    dVar10 = (double)((ulonglong)(uint)fVar9 << 0x20);
    dVar7 = (double)CONCAT44(fVar14,fVar8);
  }
  if (cVar17 == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                             (float)((ulonglong)dVar10 >> 0x20) * fVar9 + SUB84(dVar7,0));
  }
  fVar8 = fVar14;
  if (cVar18 != '\0') {
    fVar8 = (float)((ulonglong)in_xd4 >> 0x20);
  }
  if (cVar17 == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar8 * fVar14 + SUB84(dVar7,0));
  }
  dVar10 = dVar15;
  if (cVar18 == '\0') {
    dVar10 = (double)CONCAT44(SUB84(dVar7,0),fVar14);
  }
  if (cVar17 == '\0') {
    dVar10 = (double)CONCAT44(SQRT((float)((ulonglong)dVar10 >> 0x20)),SUB84(dVar10,0));
  }
  else {
    dVar10 = SQRT(dVar10);
  }
  if (cVar18 == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),(int)((ulonglong)dVar10 >> 0x20));
    in_fr9 = SUB84(dVar10,0);
    dVar10 = dVar15;
  }
  if (cVar17 == '\0') {
    fVar8 = 1.0 / SUB84(dVar7,0);
    dVar15 = (double)CONCAT44(fVar8,in_fr9);
    dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) * fVar8,SUB84(dVar7,0));
  }
  else {
    dVar15 = (double)CONCAT44(0x3f800000,in_fr9) / dVar7;
    fVar8 = (float)((ulonglong)dVar15 >> 0x20);
    dVar7 = dVar7 * dVar15;
  }
  uVar12 = (undefined4)((ulonglong)dVar7 >> 0x20);
  if (cVar18 == '\0') {
    *(undefined4 *)ar7 = uVar12;
    dVar7 = (double)CONCAT44(uVar12,*(float *)pdVar3);
  }
  else {
    *ar7 = dVar7;
    dVar10 = *pdVar3;
  }
  if (cVar17 == '\0') {
    fVar14 = SUB84(dVar7,0) * fVar8;
  }
  else {
    fVar14 = SUB84(dVar7 * dVar15,0);
  }
  if (cVar18 == '\0') {
    *(float *)pdVar3 = fVar14;
    dVar7 = (double)CONCAT44(*(float *)pdVar2,fVar14);
  }
  else {
    *pdVar3 = dVar10;
    dVar7 = *pdVar2;
  }
  if (cVar17 == '\0') {
    dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) * fVar8,SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 * dVar15;
  }
  fVar14 = (float)((ulonglong)dVar7 >> 0x20);
  if (cVar18 == '\0') {
    *(float *)pdVar2 = fVar14;
    dVar7 = (double)CONCAT44(fVar14,*(undefined4 *)pdVar1);
  }
  else {
    *pdVar2 = dVar7;
    dVar10 = *pdVar1;
  }
  if (cVar17 == '\0') {
    fVar8 = SUB84(dVar7,0) * fVar8;
  }
  else {
    fVar8 = SUB84(dVar7 * dVar15,0);
  }
  if (cVar18 == '\0') {
    *(float *)pdVar1 = fVar8;
  }
  else {
    *pdVar1 = dVar10;
  }
  return 0x10;
}

__asm__(".globl _FUN_8c21c1b0\n.set _FUN_8c21c1b0, _FUN_8c21c1b0_def\n");
