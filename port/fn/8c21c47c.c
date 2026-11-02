#include "../decls.h"
undefined4 FUN_8c21c47c_def(int ar4,int ar5,int ar6,double *ar7)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  double in_dr0;
  double dVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  undefined4 in_fr5;
  uint uVar15;
  float fVar16;
  double dVar14;
  float fVar17;
  double in_dr6;
  undefined4 in_fr9;
  double dVar18;
  double dVar19;
  undefined4 in_fr11;
  double dVar20;
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
  undefined1 auStack_1c [8];
  undefined4 uStack_14;
  
  cVar24 = '\0';
  cVar23 = '\0';
  uStack_14 = in_PR;
  FUN_8c010794(8,auStack_1c,&DAT_8c26d798);
  iVar2 = libgcc_divide_helper_0106dc(ar5 + ar6 + -1,ar6);
  iVar4 = iVar2 * 0x10 + ar4;
  piVar5 = (int *)(ar5 * 0x10 + ar4);
  iVar2 = libgcc_divide_helper_0106dc(ar5 + 1,ar6);
  piVar6 = (int *)(iVar2 * 0x10 + ar4);
  iVar2 = libgcc_divide_helper_0106dc(ar5 + 2,ar6);
  iVar2 = ar4 + iVar2 * 0x10;
  fVar8 = (float)(*piVar6 - *piVar5);
  dVar11 = (double)(ulonglong)(uint)fVar8;
  dVar20 = in_xd2;
  if (cVar24 == '\0') {
    dVar20 = (double)CONCAT44(fVar8,in_fr5);
  }
  uVar15 = (uint)((ulonglong)dVar20 >> 0x20);
  dVar22 = dVar20;
  if (cVar23 != '\0' || 0.0 <= fVar8) {
    if (cVar24 == '\0') {
      dVar11 = (double)(ulonglong)uVar15;
      dVar22 = in_xd2;
    }
  }
  else {
    if (cVar24 == '\0') {
      dVar11 = (double)(ulonglong)uVar15;
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      dVar22 = in_xd2;
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar23 == '\0') {
      dVar11 = (double)(ulonglong)(uint)(SUB84(dVar11,0) + SUB84(in_dr0,0));
    }
    else {
      dVar11 = dVar11 + in_dr0;
    }
  }
  if (cVar24 == '\0') {
    stack0xffffffe8 = (double)CONCAT44(uStack_14,SUB84(dVar11,0));
  }
  else {
    stack0xffffffe8 = dVar22;
  }
  iVar3 = *piVar5;
  fVar8 = (float)iVar3;
  dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fVar8);
  if (iVar3 < 0) {
    if (cVar23 == '\0') {
      dVar11 = (double)CONCAT44(0x4f800000,fVar8 + 4.2949673e+09);
    }
    else {
      dVar11 = (double)CONCAT44(0x4f800000,fVar8) + (double)CONCAT44(0x4f800000,fVar8);
    }
  }
  if (cVar24 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),_DAT_8c4aad54);
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4aad58,_DAT_8c4aad54);
  }
  if (cVar23 == '\0') {
    fVar8 = SUB84(in_dr0,0) - SUB84(dVar11,0);
  }
  else {
    fVar8 = SUB84(in_dr0 - dVar11,0);
  }
  iVar3 = (uint)(0 < *piVar6 - iVar3) * 4;
  if (cVar24 == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),*(undefined4 *)(auStack_1c + iVar3));
    in_xd0 = (double)CONCAT44(fVar8,SUB84(dVar20,0));
  }
  else {
    dVar22 = *(double *)(auStack_1c + iVar3);
  }
  if (cVar23 == '\0') {
    in_xd0 = (double)CONCAT44((float)((ulonglong)in_xd0 >> 0x20) / SUB84(dVar11,0),SUB84(in_xd0,0));
  }
  else {
    in_xd0 = in_xd0 / dVar11;
  }
  uVar10 = (undefined4)((ulonglong)dVar11 >> 0x20);
  dVar11 = (double)CONCAT44(uVar10,0x3f800000);
  if (cVar23 == '\0') {
    dVar11 = (double)CONCAT44(uVar10,0x40000000);
  }
  else {
    dVar11 = dVar11 + dVar11;
  }
  if (cVar24 == '\0') {
    dVar20 = (double)CONCAT44(0x3f000000,in_fr11);
    uVar10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = (double)CONCAT44(uVar10,uVar10);
  }
  else {
    dVar20 = 0.1250000293366611;
    in_xd4 = in_xd0;
  }
  if (cVar23 == '\0') {
    fVar16 = (float)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = (double)CONCAT44(fVar16,SUB84(in_xd0,0) * fVar16);
  }
  else {
    in_xd0 = in_xd0 * in_xd0;
  }
  fVar9 = (float)((ulonglong)in_xd0 >> 0x20);
  fVar16 = SUB84(in_xd0,0);
  dVar18 = in_xd4;
  dVar14 = in_xd0;
  if (cVar24 == '\0') {
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),fVar9);
    dVar18 = (double)CONCAT44(fVar16,in_fr9);
    dVar14 = in_xd6;
  }
  if (cVar23 == '\0') {
    dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) * SUB84(dVar11,0),SUB84(dVar18,0));
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr6,0) * fVar16);
  }
  else {
    dVar18 = dVar18 * dVar11;
    in_dr6 = in_dr6 * in_xd0;
  }
  uVar10 = (undefined4)((ulonglong)dVar18 >> 0x20);
  dVar12 = dVar18;
  if (cVar24 == '\0') {
    dVar12 = (double)CONCAT44(uVar10,SUB84(dVar11,0));
  }
  if (cVar23 == '\0') {
    dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) - fVar9,SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 - in_xd0;
  }
  fVar17 = SUB84(in_dr6,0);
  dVar11 = dVar14;
  if (cVar24 == '\0') {
    dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar17);
    dVar11 = in_xd10;
  }
  if (cVar23 == '\0') {
    dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) - fVar17,SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 - in_dr6;
  }
  dVar7 = dVar12;
  if (cVar24 == '\0') {
    dVar18 = (double)CONCAT44(uVar10,(int)((ulonglong)dVar12 >> 0x20));
    dVar7 = in_xd8;
  }
  fVar21 = (float)((ulonglong)dVar20 >> 0x20);
  if (cVar23 == '\0') {
    dVar18 = (double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),SUB84(dVar18,0) * fVar21);
  }
  else {
    dVar18 = dVar18 * dVar20;
  }
  if (cVar24 == '\0') {
    dVar12 = (double)CONCAT44(0x3fc00000,SUB84(dVar12,0));
    fVar8 = 2.5;
  }
  else {
    dVar12 = 8.000001899898052;
  }
  if (cVar23 == '\0') {
    dVar20 = (double)CONCAT44(fVar21,SUB84(dVar20,0) * (float)((ulonglong)dVar12 >> 0x20));
  }
  else {
    dVar20 = dVar20 * dVar12;
  }
  if (cVar24 == '\0') {
    in_xd4 = (double)CONCAT44(fVar16,fVar8);
  }
  fVar8 = (float)((ulonglong)dVar20 >> 0x20);
  if (cVar23 == '\0') {
    in_xd4 = (double)CONCAT44((float)((ulonglong)in_xd4 >> 0x20) * SUB84(in_xd4,0),SUB84(in_xd4,0));
    in_xd0 = (double)CONCAT44(fVar9 * fVar8,fVar16);
  }
  else {
    in_xd4 = in_xd4 * in_xd4;
    in_xd0 = in_xd0 * dVar20;
  }
  if (cVar24 == '\0') {
    dVar12 = (double)((ulonglong)dVar20 & 0xffffffff);
    dVar11 = dVar22;
  }
  if (cVar23 == '\0') {
    fVar17 = fVar17 - SUB84(in_xd0,0);
  }
  else {
    fVar17 = SUB84(in_dr6 - in_xd0,0);
  }
  if (cVar24 == '\0') {
    dVar22 = (double)CONCAT44(*(undefined4 *)(iVar4 + 4),SUB84(dVar12,0));
  }
  else {
    dVar22 = *(double *)(iVar4 + 4);
  }
  if (cVar23 == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              SUB84(dVar22,0) - (float)((ulonglong)in_xd4 >> 0x20));
  }
  else {
    dVar22 = dVar22 - in_xd4;
  }
  if (cVar23 == '\0') {
    in_xd0 = (double)CONCAT44((float)((ulonglong)in_xd0 >> 0x20) - SUB84(dVar20,0),SUB84(in_xd0,0));
  }
  else {
    in_xd0 = in_xd0 - dVar20;
  }
  dVar12 = dVar11;
  if (cVar24 == '\0') {
    dVar12 = (double)CONCAT44(SUB84(dVar22,0),fVar17);
  }
  if (cVar23 == '\0') {
    dVar12 = (double)CONCAT44((float)((ulonglong)dVar12 >> 0x20) + 1.0,SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 + (double)CONCAT44(0x3f800000,SUB84(in_xd4,0));
  }
  dVar19 = in_xd0;
  if (cVar24 == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),(int)((ulonglong)dVar18 >> 0x20));
    dVar19 = (double)CONCAT44((int)((ulonglong)in_xd0 >> 0x20),SUB84(dVar18,0));
    dVar18 = dVar11;
  }
  if (cVar23 == '\0') {
    dVar19 = (double)CONCAT44((float)((ulonglong)dVar19 >> 0x20) + SUB84(dVar22,0),SUB84(dVar19,0));
  }
  else {
    dVar19 = dVar19 + dVar22;
  }
  fVar16 = (float)((ulonglong)dVar12 >> 0x20);
  if (cVar24 == '\0') {
    dVar11 = (double)CONCAT44(piVar5[1],SUB84(in_xd4,0));
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),fVar16);
  }
  else {
    dVar11 = *(double *)(piVar5 + 1);
    dVar18 = dVar12;
  }
  if (cVar23 == '\0') {
    dVar22 = (double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                              SUB84(dVar22,0) * (float)((ulonglong)dVar11 >> 0x20));
  }
  else {
    dVar22 = dVar22 * dVar11;
  }
  dVar1 = dVar7;
  if (cVar24 == '\0') {
    dVar14 = (double)CONCAT44(SUB84(dVar12,0),SUB84(in_xd0,0));
    dVar1 = (double)CONCAT44(SUB84(dVar19,0),SUB84(dVar11,0));
  }
  if (cVar23 == '\0') {
    dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) * fVar8,SUB84(dVar14,0));
    dVar22 = (double)(ulonglong)
                     (uint)((float)((ulonglong)dVar1 >> 0x20) * (float)((ulonglong)dVar22 >> 0x20) +
                           SUB84(dVar22,0));
  }
  else {
    dVar14 = dVar14 * dVar20;
  }
  uVar15 = (uint)((ulonglong)dVar19 >> 0x20);
  if (cVar24 == '\0') {
    uVar13 = CONCAT44(piVar6[1],SUB84(dVar22,0));
    dVar11 = (double)CONCAT44(uVar15,SUB84(dVar1,0));
  }
  else {
    uVar13 = *(ulonglong *)(piVar6 + 1);
    dVar11 = dVar19;
  }
  if (cVar23 == '\0') {
    uVar13 = (ulonglong)
             (uint)((float)((ulonglong)dVar11 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);
  }
  fVar8 = (float)((ulonglong)dVar14 >> 0x20);
  if (cVar24 == '\0') {
    dVar20 = (double)CONCAT44(*(undefined4 *)(iVar2 + 4),(int)uVar13);
    dVar11 = (double)CONCAT44(fVar8,SUB84(dVar11,0));
  }
  else {
    dVar20 = *(double *)(iVar2 + 4);
    dVar11 = dVar14;
  }
  if (cVar23 == '\0') {
    fVar9 = (float)((ulonglong)dVar20 >> 0x20);
    dVar20 = (double)CONCAT44(fVar9,(float)((ulonglong)dVar11 >> 0x20) * fVar9 + SUB84(dVar20,0));
  }
  if (cVar24 == '\0') {
    *(int *)ar7 = SUB84(dVar20,0);
    dVar11 = (double)CONCAT44(piVar5[2],SUB84(dVar11,0));
    dVar20 = (double)CONCAT44((int)((ulonglong)dVar20 >> 0x20),fVar16);
  }
  else {
    *ar7 = dVar18;
    dVar11 = *(double *)(piVar5 + 2);
    dVar18 = dVar12;
  }
  if (cVar23 == '\0') {
    fVar9 = SUB84(dVar20,0) * (float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    fVar9 = SUB84(dVar20 * dVar11,0);
  }
  if (cVar24 == '\0') {
    uVar13 = CONCAT44(*(undefined4 *)(iVar4 + 8),fVar9);
    dVar11 = (double)CONCAT44(SUB84(dVar19,0),SUB84(dVar11,0));
  }
  else {
    uVar13 = *(ulonglong *)(iVar4 + 8);
    dVar11 = dVar7;
  }
  if (cVar23 == '\0') {
    uVar13 = (ulonglong)
             (uint)((float)((ulonglong)dVar11 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);
  }
  if (cVar24 == '\0') {
    uVar13 = CONCAT44(piVar6[2],(int)uVar13);
    dVar11 = (double)CONCAT44(uVar15,SUB84(dVar11,0));
  }
  else {
    uVar13 = *(ulonglong *)(piVar6 + 2);
    dVar11 = dVar19;
  }
  if (cVar23 == '\0') {
    uVar13 = (ulonglong)
             (uint)((float)((ulonglong)dVar11 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);
  }
  if (cVar24 == '\0') {
    uVar13 = CONCAT44(*(undefined4 *)(iVar2 + 8),(int)uVar13);
    dVar14 = (double)CONCAT44(fVar8,SUB84(dVar11,0));
  }
  else {
    uVar13 = *(ulonglong *)(iVar2 + 8);
  }
  if (cVar23 == '\0') {
    uVar13 = (ulonglong)
             (uint)((float)((ulonglong)dVar14 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);
  }
  uVar10 = (undefined4)uVar13;
  if (cVar24 == '\0') {
    *(undefined4 *)((int)ar7 + 4) = uVar10;
    dVar11 = (double)CONCAT44(piVar5[3],SUB84(dVar14,0));
    uVar10 = *(undefined4 *)(iVar4 + 0xc);
  }
  else {
    *(double *)((int)ar7 + 4) = dVar18;
    dVar11 = *(double *)(piVar5 + 3);
    dVar18 = *(double *)(iVar4 + 0xc);
  }
  if (cVar23 == '\0') {
    dVar12 = (double)CONCAT44(fVar16 * (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar12,0));
  }
  else {
    dVar12 = dVar12 * dVar11;
  }
  if (cVar24 == '\0') {
    dVar7 = (double)((longlong)dVar19 << 0x20);
    uVar13 = CONCAT44(piVar6[3],uVar10);
  }
  else {
    uVar13 = *(ulonglong *)(piVar6 + 3);
  }
  if (cVar23 == '\0') {
    dVar12 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) * (float)uVar13 +
                              (float)((ulonglong)dVar12 >> 0x20),SUB84(dVar12,0));
  }
  if (cVar24 == '\0') {
    dVar19 = (double)((ulonglong)uVar15 << 0x20);
    uVar13 = CONCAT44((int)(uVar13 >> 0x20),(int)((ulonglong)dVar12 >> 0x20));
    dVar12 = dVar18;
  }
  if (cVar23 == '\0') {
    uVar13 = (ulonglong)
             (uint)((float)((ulonglong)dVar19 >> 0x20) * (float)(uVar13 >> 0x20) + (float)uVar13);
  }
  if (cVar24 == '\0') {
    uVar13 = CONCAT44(*(undefined4 *)(iVar2 + 0xc),(int)uVar13);
  }
  else {
    uVar13 = *(ulonglong *)(iVar2 + 0xc);
  }
  if (cVar23 == '\0') {
    uVar13 = (ulonglong)(uint)(fVar8 * (float)(uVar13 >> 0x20) + (float)uVar13);
  }
  if (cVar24 == '\0') {
    *(int *)(ar7 + 1) = (int)uVar13;
  }
  else {
    ar7[1] = dVar12;
  }
  return 8;
}

__asm__(".globl _FUN_8c21c47c\n.set _FUN_8c21c47c, _FUN_8c21c47c_def\n");
