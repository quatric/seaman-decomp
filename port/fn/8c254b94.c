#include "../decls.h"
undefined4 * FUN_8c254b94_def(int ar4,int ar5,int ar6,int *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  double in_dr0;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar11;
  double dVar10;
  float fVar12;
  undefined4 in_fr5;
  uint uVar13;
  float fVar14;
  float fVar15;
  double in_dr6;
  float fVar16;
  undefined4 in_fr9;
  double dVar17;
  double dVar18;
  undefined4 in_fr11;
  double dVar19;
  undefined4 uVar20;
  undefined8 in_dr12;
  float fVar21;
  double in_xd0;
  double in_xd2;
  double dVar22;
  double in_xd4;
  double in_xd6;
  double in_xd8;
  double in_xd10;
  undefined4 in_PR;
  char cVar23;
  char cVar24;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar24 = '\0';
  cVar23 = '\0';
  uStack_14 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  uStack_18 = in_PR;
  FUN_8c010794(8,auStack_20,&DAT_8c271d88);
  uVar20 = (undefined4)in_dr12;
  iVar1 = libgcc_divide_helper_0106dc(ar5 + ar6 + -1,ar6);
  iVar3 = iVar1 * 0x10 + ar4;
  piVar4 = (int *)(ar5 * 0x10 + ar4);
  iVar1 = libgcc_divide_helper_0106dc(ar5 + 1,ar6);
  piVar5 = (int *)(iVar1 * 0x10 + ar4);
  iVar1 = libgcc_divide_helper_0106dc(ar5 + 2,ar6);
  iVar1 = ar4 + iVar1 * 0x10;
  fVar8 = (float)(*piVar5 - *piVar4);
  dVar9 = (double)(ulonglong)(uint)fVar8;
  dVar19 = in_xd2;
  if (cVar24 == '\0') {
    dVar19 = (double)CONCAT44(fVar8,in_fr5);
  }
  uVar13 = (uint)((ulonglong)dVar19 >> 0x20);
  dVar22 = dVar19;
  if (cVar23 != '\0' || 0.0 <= fVar8) {
    if (cVar24 == '\0') {
      dVar9 = (double)(ulonglong)uVar13;
      dVar22 = in_xd2;
    }
  }
  else {
    if (cVar24 == '\0') {
      dVar9 = (double)(ulonglong)uVar13;
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      dVar22 = in_xd2;
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar23 == '\0') {
      dVar9 = (double)(ulonglong)(uint)(SUB84(dVar9,0) + SUB84(in_dr0,0));
    }
    else {
      dVar9 = dVar9 + in_dr0;
    }
  }
  if (cVar24 == '\0') {
    stack0xffffffe4 = (double)CONCAT44(uStack_18,SUB84(dVar9,0));
  }
  else {
    stack0xffffffe4 = dVar22;
  }
  iVar2 = *piVar4;
  fVar8 = (float)iVar2;
  dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar8);
  if (iVar2 < 0) {
    if (cVar23 == '\0') {
      dVar9 = (double)CONCAT44(0x4f800000,fVar8 + 4.2949673e+09);
    }
    else {
      dVar9 = (double)CONCAT44(0x4f800000,fVar8) + (double)CONCAT44(0x4f800000,fVar8);
    }
  }
  if (cVar24 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),_DAT_8c4aad54);
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4aad58,_DAT_8c4aad54);
  }
  if (cVar23 == '\0') {
    fVar8 = SUB84(in_dr0,0) - SUB84(dVar9,0);
  }
  else {
    fVar8 = SUB84(in_dr0 - dVar9,0);
  }
  iVar2 = (uint)(0 < *piVar5 - iVar2) * 4;
  if (cVar24 == '\0') {
    dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),*(undefined4 *)(auStack_20 + iVar2));
    in_xd0 = (double)CONCAT44(fVar8,SUB84(dVar19,0));
  }
  else {
    dVar22 = *(double *)(auStack_20 + iVar2);
  }
  if (cVar23 == '\0') {
    in_xd0 = (double)CONCAT44((float)((ulonglong)in_xd0 >> 0x20) / SUB84(dVar9,0),SUB84(in_xd0,0));
  }
  else {
    in_xd0 = in_xd0 / dVar9;
  }
  uVar11 = (undefined4)((ulonglong)dVar9 >> 0x20);
  dVar9 = (double)CONCAT44(uVar11,0x3f800000);
  if (cVar23 == '\0') {
    dVar9 = (double)CONCAT44(uVar11,0x40000000);
  }
  else {
    dVar9 = dVar9 + dVar9;
  }
  if (cVar24 == '\0') {
    dVar19 = (double)CONCAT44(0x3f000000,in_fr11);
    uVar11 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = (double)CONCAT44(uVar11,uVar11);
  }
  else {
    dVar19 = 0.1250000293366611;
    in_xd4 = in_xd0;
  }
  if (cVar23 == '\0') {
    fVar14 = (float)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = (double)CONCAT44(fVar14,SUB84(in_xd0,0) * fVar14);
  }
  else {
    in_xd0 = in_xd0 * in_xd0;
  }
  fVar16 = (float)((ulonglong)in_xd0 >> 0x20);
  fVar14 = SUB84(in_xd0,0);
  dVar17 = in_xd4;
  dVar6 = in_xd0;
  if (cVar24 == '\0') {
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),fVar16);
    dVar17 = (double)CONCAT44(fVar14,in_fr9);
    dVar6 = in_xd6;
  }
  if (cVar23 == '\0') {
    dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar9,0),SUB84(dVar17,0));
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr6,0) * fVar14);
  }
  else {
    dVar17 = dVar17 * dVar9;
    in_dr6 = in_dr6 * in_xd0;
  }
  uVar11 = (undefined4)((ulonglong)dVar17 >> 0x20);
  dVar10 = dVar17;
  if (cVar24 == '\0') {
    dVar10 = (double)CONCAT44(uVar11,SUB84(dVar9,0));
  }
  if (cVar23 == '\0') {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) - fVar16,SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 - in_xd0;
  }
  fVar15 = SUB84(in_dr6,0);
  dVar9 = dVar6;
  if (cVar24 == '\0') {
    dVar19 = (double)CONCAT44((int)((ulonglong)dVar19 >> 0x20),fVar15);
    dVar9 = in_xd10;
  }
  if (cVar23 == '\0') {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) - fVar15,SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 - in_dr6;
  }
  dVar7 = dVar10;
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(uVar11,(int)((ulonglong)dVar10 >> 0x20));
    dVar7 = in_xd8;
  }
  fVar21 = (float)((ulonglong)dVar19 >> 0x20);
  if (cVar23 == '\0') {
    dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),SUB84(dVar17,0) * fVar21);
  }
  else {
    dVar17 = dVar17 * dVar19;
  }
  if (cVar24 == '\0') {
    dVar10 = (double)CONCAT44(0x3fc00000,SUB84(dVar10,0));
  }
  else {
    dVar10 = 8.000001899898052;
  }
  if (cVar24 == '\0') {
    fVar8 = 2.5;
  }
  fVar12 = (float)((ulonglong)dVar10 >> 0x20);
  if (cVar23 == '\0') {
    dVar19 = (double)CONCAT44(fVar21,SUB84(dVar19,0) * fVar12);
  }
  else {
    dVar19 = dVar19 * dVar10;
  }
  if (cVar24 == '\0') {
    in_xd4 = (double)CONCAT44(fVar14,fVar8);
  }
  fVar8 = (float)((ulonglong)dVar19 >> 0x20);
  if (cVar23 == '\0') {
    in_xd4 = (double)CONCAT44((float)((ulonglong)in_xd4 >> 0x20) * SUB84(in_xd4,0),SUB84(in_xd4,0));
    in_xd0 = (double)CONCAT44(fVar16 * fVar8,fVar14);
  }
  else {
    in_xd4 = in_xd4 * in_xd4;
    in_xd0 = in_xd0 * dVar19;
  }
  if (cVar24 == '\0') {
    dVar10 = (double)CONCAT44(fVar12,SUB84(dVar19,0));
    dVar9 = dVar22;
  }
  if (cVar23 == '\0') {
    fVar15 = fVar15 - SUB84(in_xd0,0);
  }
  else {
    fVar15 = SUB84(in_dr6 - in_xd0,0);
  }
  if (cVar23 == '\0') {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),
                              SUB84(dVar10,0) - (float)((ulonglong)in_xd4 >> 0x20));
    in_xd0 = (double)CONCAT44((float)((ulonglong)in_xd0 >> 0x20) - SUB84(dVar19,0),SUB84(in_xd0,0));
  }
  else {
    dVar10 = dVar10 - in_xd4;
    in_xd0 = in_xd0 - dVar19;
  }
  dVar22 = dVar9;
  if (cVar24 == '\0') {
    dVar22 = (double)CONCAT44(SUB84(dVar10,0),fVar15);
  }
  if (cVar23 == '\0') {
    dVar22 = (double)CONCAT44((float)((ulonglong)dVar22 >> 0x20) + 1.0,SUB84(dVar22,0));
  }
  else {
    dVar22 = dVar22 + (double)CONCAT44(0x3f800000,SUB84(in_xd4,0));
  }
  fVar14 = (float)((ulonglong)dVar17 >> 0x20);
  dVar18 = in_xd0;
  if (cVar24 == '\0') {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),fVar14);
    fVar14 = (float)((ulonglong)dVar9 >> 0x20);
    dVar18 = (double)CONCAT44((int)((ulonglong)in_xd0 >> 0x20),SUB84(dVar17,0));
  }
  if (cVar23 == '\0') {
    dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) + SUB84(dVar10,0),SUB84(dVar18,0));
  }
  else {
    dVar18 = dVar18 + dVar10;
  }
  fVar16 = (float)((ulonglong)dVar22 >> 0x20);
  dVar9 = dVar22;
  if (cVar24 == '\0') {
    dVar9 = (double)CONCAT44(fVar16,uVar20);
  }
  if (cVar23 == '\0') {
    dVar17 = (double)CONCAT44((float)(uint)piVar5[1],(float)*(int *)(iVar1 + 4));
  }
  else {
    dVar17 = (double)piVar5[1];
  }
  if (cVar24 == '\0') {
    dVar6 = (double)CONCAT44(SUB84(dVar22,0),SUB84(in_xd0,0));
  }
  if (cVar23 == '\0') {
    fVar8 = (float)((ulonglong)dVar6 >> 0x20) * fVar8;
  }
  else {
    fVar8 = (float)((ulonglong)(dVar6 * dVar19) >> 0x20);
  }
  if (cVar23 == '\0') {
    fVar15 = (float)(uint)piVar4[1];
    dVar19 = (double)CONCAT44(fVar15,(float)*(int *)(iVar3 + 4));
    dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) * fVar15,SUB84(dVar9,0));
  }
  else {
    dVar19 = (double)piVar4[1];
    dVar9 = dVar9 * dVar19;
  }
  uVar20 = SUB84(dVar18,0);
  dVar6 = dVar7;
  if (cVar24 == '\0') {
    dVar6 = (double)CONCAT44(uVar20,SUB84(dVar19,0));
  }
  fVar15 = (float)((ulonglong)dVar18 >> 0x20);
  if (cVar23 == '\0') {
    fVar21 = fVar8 * SUB84(dVar17,0) +
             fVar15 * (float)((ulonglong)dVar17 >> 0x20) +
             (float)((ulonglong)dVar6 >> 0x20) * SUB84(dVar6,0) + (float)((ulonglong)dVar9 >> 0x20);
    dVar9 = (double)CONCAT44(fVar21,SUB84(dVar9,0));
    iVar2 = (int)fVar21;
  }
  else {
    iVar2 = (int)dVar9;
  }
  dVar19 = dVar22;
  if (cVar24 == '\0') {
    dVar19 = (double)CONCAT44(fVar16,SUB84(dVar9,0));
  }
  *ar7 = iVar2;
  if (cVar23 == '\0') {
    dVar9 = (double)CONCAT44((float)(uint)piVar5[2],(float)*(int *)(iVar1 + 8));
  }
  else {
    dVar9 = (double)piVar5[2];
  }
  if (cVar23 == '\0') {
    fVar21 = (float)(uint)piVar4[2];
    dVar6 = (double)CONCAT44(fVar21,(float)*(int *)(iVar3 + 8));
    dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) * fVar21,SUB84(dVar19,0));
  }
  else {
    dVar6 = (double)piVar4[2];
    dVar19 = dVar19 * dVar6;
  }
  dVar17 = dVar7;
  if (cVar24 == '\0') {
    dVar17 = (double)CONCAT44(uVar20,SUB84(dVar6,0));
  }
  if (cVar23 == '\0') {
    iVar2 = (int)(fVar8 * SUB84(dVar9,0) +
                 fVar15 * (float)((ulonglong)dVar9 >> 0x20) +
                 (float)((ulonglong)dVar17 >> 0x20) * SUB84(dVar17,0) +
                 (float)((ulonglong)dVar19 >> 0x20));
  }
  else {
    iVar2 = (int)dVar19;
  }
  ar7[1] = iVar2;
  if (cVar24 == '\0') {
    fVar14 = (float)*(int *)(iVar1 + 0xc);
  }
  if (cVar23 == '\0') {
    dVar9 = (double)CONCAT44((float)(uint)piVar5[3],(float)*(int *)(iVar1 + 0xc));
  }
  else {
    dVar9 = (double)piVar5[3];
  }
  if (cVar23 == '\0') {
    fVar21 = (float)(uint)piVar4[3];
    dVar19 = (double)CONCAT44(fVar21,(float)*(int *)(iVar3 + 0xc));
    fVar16 = fVar16 * fVar21;
  }
  else {
    dVar19 = (double)piVar4[3];
    fVar16 = (float)((ulonglong)(dVar22 * dVar19) >> 0x20);
  }
  if (cVar24 == '\0') {
    dVar7 = (double)CONCAT44(uVar20,SUB84(dVar19,0));
  }
  if (cVar23 == '\0') {
    fVar16 = (float)((ulonglong)dVar7 >> 0x20) * SUB84(dVar7,0) + fVar16;
  }
  if (cVar24 == '\0') {
    dVar18 = (double)((ulonglong)(uint)fVar15 << 0x20);
    dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar16);
  }
  if (cVar23 == '\0') {
    iVar1 = (int)(fVar8 * fVar14 +
                 (float)((ulonglong)dVar18 >> 0x20) * (float)((ulonglong)dVar9 >> 0x20) +
                 SUB84(dVar9,0));
  }
  else {
    iVar1 = (int)dVar9;
  }
  ar7[2] = iVar1;
  return &DAT_8c254e64;
}

__asm__(".globl _FUN_8c254b94\n.set _FUN_8c254b94, _FUN_8c254b94_def\n");
