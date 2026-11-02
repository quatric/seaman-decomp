#include "../decls.h"
undefined4 FUN_8c123602_def(undefined4 ar4,undefined4 ar5,uint ar6,uint ar7)

{
  char cVar1;
  int in_r0;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_r14;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar12;
  double dVar11;
  float fVar13;
  undefined4 in_fr5;
  float fVar14;
  undefined8 in_dr12;
  undefined8 in_dr14;
  double in_xd2;
  double in_xd14;
  bool bVar15;
  undefined4 in_PR;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  byte in_FPSCR_CAUSE;
  byte bVar20;
  byte in_FPSCR_DN;
  byte bVar21;
  byte in_FPSCR_PR;
  byte bVar22;
  byte in_FPSCR_SZ;
  byte bVar23;
  undefined1 auStack_30 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (in_FPSCR_SZ == 0) {
    uStack_18 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_18);
                    
    (*(uint*)((uchar*)&uStack_18+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar8 = &uStack_20;
    uStack_20 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar8 = (undefined8 *)auStack_30;
    uStack_18 = in_xd14;
    uStack_20 = in_dr14;
  }
  *(undefined4 *)((int)puVar8 + -4) = in_PR;
  if (in_FPSCR_SZ == 0) {
    dVar10 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x2c),*(undefined4 *)(in_r0 + unaff_r14));
  }
  else {
    in_xd2 = *(double *)(in_r0 + unaff_r14);
    dVar10 = *(double *)(unaff_r14 + 0x2c);
  }
  if (in_FPSCR_PR == 0) {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar10,0),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 + dVar10;
  }
  if (in_FPSCR_SZ == 0) {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),*(undefined4 *)(unaff_r14 + 0x3c));
  }
  else {
    in_xd2 = *(double *)(unaff_r14 + 0x3c);
  }
  if (in_FPSCR_PR == 0) {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar10,0),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 + dVar10;
  }
  if (in_FPSCR_SZ == 0) {
    uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
    dVar10 = (double)CONCAT44(uVar12,(int)in_dr14);
    dVar11 = (double)CONCAT44(uVar12,*(undefined4 *)(0x4b0 + unaff_r14));
  }
  else {
    in_xd2 = *(double *)(0x4b0 + unaff_r14);
    dVar11 = dVar10;
  }
  if (in_FPSCR_PR == 0) {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) - SUB84(dVar11,0),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 - dVar11;
  }
  uVar6 = 0;
  uVar2 = FUN_8c123594(ar4,0,ar6,ar7);
  uVar16 = 0x80000;
  uVar17 = 0xffff;
  uVar7 = uVar2 & 0xffff;
  if (uVar7 == 0) {
    return 0;
  }
  uVar4 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  uVar18 = (uVar4 & 0x100000) >> 0x14;
  iVar3 = (int)0x4ba;
  fVar13 = (float)((ulonglong)dVar10 >> 0x20);
  *(short *)(iVar3 + unaff_r14) = (short)uVar2;
  *(undefined4 *)(iVar3 + 0x12 + unaff_r14) = 0;
  if ((char)uVar18 == '\0') {
    dVar10 = (double)CONCAT44(fVar13,(float)uVar7);
    in_xd2 = in_xd14;
  }
  uVar16 = uVar4 & 0x80000 | uVar18 << 0x14 | uVar16 & 0x3fffff;
  bVar20 = 0;
  bVar21 = 0;
  uVar2 = (uVar16 & 0x80000) >> 0x13;
  bVar22 = (byte)uVar2;
  uVar16 = (uVar16 & 0x100000) >> 0x14;
  bVar23 = (byte)uVar16;
  dVar11 = (double)fVar13;
  if (bVar23 == 0) {
    dVar9 = (double)CONCAT44(DAT_8c1236fc,DAT_8c123700);
  }
  else {
    dVar9 = (double)CONCAT44(DAT_8c123700,DAT_8c1236fc);
  }
  if (bVar22 == 0) {
    fVar13 = ABS((float)((ulonglong)dVar11 >> 0x20));
    dVar11 = (double)CONCAT44(fVar13,SUB84(dVar11,0));
    bVar15 = (float)((ulonglong)dVar9 >> 0x20) < fVar13;
  }
  else {
    dVar11 = ABS(dVar11);
    fVar13 = (float)((ulonglong)dVar11 >> 0x20);
    bVar15 = dVar9 < dVar11;
  }
  uVar18 = uVar7;
  if (bVar15) {
    uVar16 = (uVar2 << 0x13 | uVar16 << 0x14) & 0xffe7ffff;
    if (bVar23 == 0) {
      dVar11 = (double)CONCAT44(fVar13,*(undefined4 *)(0x4c4 + unaff_r14));
    }
    uVar2 = (uVar16 & 0x80000) >> 0x13;
    cVar1 = (char)uVar2;
    uVar16 = uVar16 >> 0x14;
    if (cVar1 == '\0') {
      fVar13 = SUB84(dVar11,0) * (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar11 * dVar10,0);
    }
    if ((char)uVar16 == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c123704,fVar13);
      in_xd2 = (double)CONCAT44(SUB84(dVar10,0),DAT_8c123708);
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c123708,DAT_8c123704);
    }
    if (cVar1 == '\0') {
      fVar13 = (float)((ulonglong)dVar11 >> 0x20);
      dVar11 = (double)CONCAT44(fVar13,SUB84(dVar11,0) * fVar13);
    }
    else {
      dVar11 = dVar11 * dVar11;
    }
    uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
    if (cVar1 == '\0') {
      fVar13 = -SUB84(dVar11,0) + SUB84(in_xd2,0);
      dVar11 = (double)CONCAT44(uVar12,fVar13);
      fVar13 = (float)((ulonglong)in_xd2 >> 0x20) * fVar13;
      dVar9 = (double)CONCAT44(fVar13,SUB84(in_xd2,0));
      uVar18 = (uint)fVar13;
    }
    else {
      dVar11 = (double)CONCAT44(uVar12,-SUB84(dVar11,0)) + in_xd2;
      dVar9 = in_xd2 * dVar11;
      uVar18 = (uint)dVar9;
    }
    if ((int)uVar17 < (int)uVar18) {
      uVar18 = uVar17;
    }
    iVar3 = (int)0x4c0;
    uVar6 = uVar18;
    if (*(short *)(iVar3 + unaff_r14) != 0) {
      ar6 = (uint)*(ushort *)(iVar3 + unaff_r14);
      ar7 = (uint)*(ushort *)(iVar3 + 2 + unaff_r14);
      uVar5 = ar6 - ar7;
      uVar4 = uVar5;
      if ((int)uVar5 < (int)uVar18) {
        uVar4 = uVar18;
      }
      uVar6 = ar7 + ar6;
      if (((int)uVar4 < (int)uVar6) && (uVar6 = uVar18, (int)uVar18 <= (int)uVar5)) {
        uVar6 = uVar5;
      }
    }
    uVar16 = (uVar2 << 0x13 | uVar16 << 0x14) & 0xffe7ffff;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = (byte)((uVar16 & 0x80000) >> 0x13);
    bVar23 = (byte)(uVar16 >> 0x14);
    uVar18 = FUN_8c123594(unaff_r14,uVar6,ar6,ar7);
    uVar18 = uVar18 & 0xffff;
    if (uVar18 == 0) {
      *(undefined4 *)(0x4cc + unaff_r14) = 1;
      return 0;
    }
  }
  fVar13 = SUB84(dVar9,0);
  uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
  if (*(short *)(0x4c0 + unaff_r14) != 0) {
    *(undefined2 *)(0x4b4 + unaff_r14) = 0;
    return 0;
  }
  uVar16 = ((uint)bVar20 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar22 << 0x13 | (uint)bVar23 << 0x14
           ) & 0xffe7ffff;
  bVar20 = 0;
  bVar21 = 0;
  bVar22 = (byte)((uVar16 & 0x80000) >> 0x13);
  bVar23 = (byte)((uVar16 & 0x100000) >> 0x14);
  iVar3 = FUN_8c013dec(uVar18 - uVar7,uVar6,ar6,ar7);
  uVar16 = ((uint)bVar20 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar22 << 0x13 | (uint)bVar23 << 0x14
           ) & 0xffe7ffff;
  dVar11 = (double)CONCAT44(uVar12,0x3c23d70a);
  uVar6 = (uVar16 & 0x80000) >> 0x13;
  uVar16 = (uVar16 & 0x100000) >> 0x14;
  cVar1 = (char)uVar16;
  if ((char)uVar6 == '\0') {
    iVar19 = (int)(SUB84(dVar10,0) * 0x3c23d70a);
  }
  else {
    iVar19 = (int)(dVar10 * dVar11);
  }
  if (iVar19 < iVar3) {
    *(undefined2 *)(0x4b4 + unaff_r14) = 0;
  }
  if (*(ushort *)(0x4b4 + unaff_r14) < 0xb) {
    return 0;
  }
  iVar3 = (int)0x4c0;
  *(short *)(iVar3 + unaff_r14) = (short)uVar18;
  *(undefined2 *)(iVar3 + -0xc + unaff_r14) = 0;
  if (cVar1 == '\0') {
    dVar11 = (double)(ulonglong)*(uint *)(unaff_r14 + 0x38);
  }
  uVar16 = (uVar6 << 0x13 | uVar16 << 0x14) & 0xffe7ffff;
  if (cVar1 == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x2c),SUB84(dVar11,0));
  }
  else {
    dVar10 = *(double *)(unaff_r14 + 0x2c);
  }
  uVar6 = (uVar16 & 0x80000) >> 0x13;
  bVar20 = (byte)uVar6;
  uVar16 = uVar16 >> 0x14;
  bVar21 = (byte)uVar16;
  if (bVar20 == 0) {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar10,0),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 + dVar10;
  }
  if (bVar21 == 0) {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),*(undefined4 *)(unaff_r14 + 0x3c));
  }
  dVar11 = dVar10;
  if (bVar21 == 0) {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),in_fr5);
  }
  if (bVar20 == 0) {
    fVar14 = (float)((ulonglong)dVar11 >> 0x20) + SUB84(dVar10,0);
  }
  else {
    fVar14 = (float)((ulonglong)(dVar11 + dVar10) >> 0x20);
  }
  if (*(ushort *)(0x4c0 + unaff_r14) == uVar17) {
    uVar17 = uVar6 << 0x13 | uVar16 << 0x14 | 0x80000 & 0x3fffff;
    bVar20 = (byte)((uVar17 & 0x80000) >> 0x13);
    bVar21 = (byte)((uVar17 & 0x100000) >> 0x14);
    if (bVar21 == 0) {
      fVar13 = *(float *)(0x4b0 + unaff_r14);
    }
    dVar10 = (double)fVar13;
    if (bVar21 == 0) {
      dVar11 = (double)CONCAT44(DAT_8c123810,DAT_8c123814);
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c123814,DAT_8c123810);
    }
    if (bVar20 == 0) {
      fVar13 = (float)((ulonglong)dVar10 >> 0x20) + (float)((ulonglong)dVar11 >> 0x20);
      dVar10 = (double)CONCAT44(fVar13,SUB84(dVar10,0));
      bVar15 = (float)((ulonglong)(double)fVar14 >> 0x20) < fVar13;
    }
    else {
      dVar10 = dVar10 + dVar11;
      bVar15 = (double)fVar14 < dVar10;
    }
    fVar13 = SUB84(dVar10,0);
    if (bVar15) goto LAB_8c1237c2;
  }
  if ((int)0x199b <= (int)(uint)*(ushort *)(0x4c0 + unaff_r14)) {
    return 0;
  }
  uVar17 = (uint)bVar20 << 0x13 | (uint)bVar21 << 0x14 | 0x80000 & 0x3fffff;
  cVar1 = (char)((uVar17 & 0x100000) >> 0x14);
  if (cVar1 == '\0') {
    fVar13 = *(float *)(0x4b0 + unaff_r14);
  }
  if (cVar1 == '\0') {
    dVar10 = (double)CONCAT44(DAT_8c123818,DAT_8c123814);
  }
  else {
    dVar10 = (double)CONCAT44(0,DAT_8c123818);
  }
  if ((char)((uVar17 & 0x80000) >> 0x13) == '\0') {
    bVar15 = (float)((ulonglong)(double)fVar13 >> 0x20) + (float)((ulonglong)dVar10 >> 0x20) <
             (float)((ulonglong)(double)fVar14 >> 0x20);
  }
  else {
    bVar15 = (double)fVar13 + dVar10 < (double)fVar14;
  }
  if (!bVar15) {
    return 0;
  }
LAB_8c1237c2:
  uVar17 = FUN_8c12357c(unaff_r14,5,ar6,ar7);
  if ((uVar17 & 0xff) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c123602\n.set _FUN_8c123602, _FUN_8c123602_def\n");
