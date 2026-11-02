#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c123602_def(undefined4 ar4,undefined4 ar5,uint ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c123602";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  char cVar1;
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_r14 = 0;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar12;
  double dVar11;
  float fVar13;
  undefined4 in_fr5 = 0;
  float fVar14;
  undefined8 in_dr12 = 0;
  undefined8 in_dr14 = 0;
  double in_xd2 = 0;
  double in_xd14 = 0;
  bool bVar15;
  undefined4 in_PR = 0;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  byte in_FPSCR_CAUSE = 0;
  byte bVar20;
  byte in_FPSCR_DN = 0;
  byte bVar21;
  byte in_FPSCR_PR = 0;
  byte bVar22;
  byte in_FPSCR_SZ = 0;
  byte bVar23;
  
  if (in_FPSCR_SZ == 0) {
    (*(undefined8 *)(fr0_ - 0x18)) = CONCAT44D((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x18)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x18))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar8 = &(*(undefined8 *)(fr0_ - 0x20));
    (*(undefined8 *)(fr0_ - 0x20)) = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar8 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x30));
    (*(undefined8 *)(fr0_ - 0x18)) = in_xd14;
    (*(undefined8 *)(fr0_ - 0x20)) = in_dr14;
  }
  *(undefined4 *)(unsigned)((int)puVar8 + -4) = in_PR;
  if (in_FPSCR_SZ == 0) {
    dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 + 0x2c),*(undefined4 *)(unsigned)(in_r0 + unaff_r14));
  }
  else {
    in_xd2 = *(double *)(unsigned)(in_r0 + unaff_r14);
    dVar10 = *(double *)(unsigned)(unaff_r14 + 0x2c);
  }
  if (in_FPSCR_PR == 0) {
    dVar10 = CONCAT44D(F32HI(dVar10) + F32LO(dVar10),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 + dVar10;
  }
  if (in_FPSCR_SZ == 0) {
    dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),*(undefined4 *)(unsigned)(unaff_r14 + 0x3c));
  }
  else {
    in_xd2 = *(double *)(unsigned)(unaff_r14 + 0x3c);
  }
  if (in_FPSCR_PR == 0) {
    dVar10 = CONCAT44D(F32HI(dVar10) + F32LO(dVar10),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 + dVar10;
  }
  if (in_FPSCR_SZ == 0) {
    uVar12 = (undefined4)(D2U(dVar10) >> 0x20);
    dVar10 = CONCAT44D(uVar12,(int)in_dr14);
    dVar11 = CONCAT44D(uVar12,*(undefined4 *)(unsigned)(0x4b0 + unaff_r14));
  }
  else {
    in_xd2 = *(double *)(unsigned)(0x4b0 + unaff_r14);
    dVar11 = dVar10;
  }
  if (in_FPSCR_PR == 0) {
    dVar10 = CONCAT44D(F32HI(dVar10) - F32LO(dVar11),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 - dVar11;
  }
  uVar6 = 0;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c123594(ar4,0,ar6,ar7));
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
  fVar13 = F32HI(dVar10);
  *(short *)(unsigned)(iVar3 + unaff_r14) = (short)uVar2;
  *(undefined4 *)(unsigned)(iVar3 + 0x12 + unaff_r14) = 0;
  if ((char)uVar18 == '\0') {
    dVar10 = CONCAT44D(fVar13,(float)uVar7);
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
    dVar9 = CONCAT44D((*(undefined1 *)(unsigned)0x8c1236fc),(*(undefined1 *)(unsigned)0x8c123700));
  }
  else {
    dVar9 = CONCAT44D((*(undefined1 *)(unsigned)0x8c123700),(*(undefined1 *)(unsigned)0x8c1236fc));
  }
  if (bVar22 == 0) {
    fVar13 = ABS(F32HI(dVar11));
    dVar11 = CONCAT44D(fVar13,SUB84(dVar11,0));
    bVar15 = F32HI(dVar9) < fVar13;
  }
  else {
    dVar11 = ABS(dVar11);
    fVar13 = F32HI(dVar11);
    bVar15 = dVar9 < dVar11;
  }
  uVar18 = uVar7;
  if (bVar15) {
    uVar16 = (uVar2 << 0x13 | uVar16 << 0x14) & 0xffe7ffff;
    if (bVar23 == 0) {
      dVar11 = CONCAT44D(fVar13,*(undefined4 *)(unsigned)(0x4c4 + unaff_r14));
    }
    uVar2 = (uVar16 & 0x80000) >> 0x13;
    cVar1 = (char)uVar2;
    uVar16 = uVar16 >> 0x14;
    if (cVar1 == '\0') {
      fVar13 = F32LO(dVar11) * F32HI(dVar10);
    }
    else {
      fVar13 = SUB84(dVar11 * dVar10,0);
    }
    if ((char)uVar16 == '\0') {
      dVar11 = CONCAT44D((*(undefined1 *)(unsigned)0x8c123704),fVar13);
      in_xd2 = CONCAT44D(SUB84(dVar10,0),(*(undefined1 *)(unsigned)0x8c123708));
    }
    else {
      dVar11 = CONCAT44D((*(undefined1 *)(unsigned)0x8c123708),(*(undefined1 *)(unsigned)0x8c123704));
    }
    if (cVar1 == '\0') {
      fVar13 = F32HI(dVar11);
      dVar11 = CONCAT44D(fVar13,F32LO(dVar11) * fVar13);
    }
    else {
      dVar11 = dVar11 * dVar11;
    }
    uVar12 = (undefined4)(D2U(dVar11) >> 0x20);
    if (cVar1 == '\0') {
      fVar13 = -F32LO(dVar11) + F32LO(in_xd2);
      dVar11 = CONCAT44D(uVar12,fVar13);
      fVar13 = F32HI(in_xd2) * fVar13;
      dVar9 = CONCAT44D(fVar13,SUB84(in_xd2,0));
      uVar18 = (uint)fVar13;
    }
    else {
      dVar11 = CONCAT44D(uVar12,-SUB84(dVar11,0)) + in_xd2;
      dVar9 = in_xd2 * dVar11;
      uVar18 = (uint)dVar9;
    }
    if ((int)uVar17 < (int)uVar18) {
      uVar18 = uVar17;
    }
    iVar3 = (int)0x4c0;
    uVar6 = uVar18;
    if (*(short *)(unsigned)(iVar3 + unaff_r14) != 0) {
      ar6 = (uint)*(ushort *)(unsigned)(iVar3 + unaff_r14);
      ar7 = (uint)*(ushort *)(unsigned)(iVar3 + 2 + unaff_r14);
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
    uVar18 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c123594(unaff_r14,uVar6,ar6,ar7));
    uVar18 = uVar18 & 0xffff;
    if (uVar18 == 0) {
      *(undefined4 *)(unsigned)(0x4cc + unaff_r14) = 1;
      return 0;
    }
  }
  fVar13 = F32LO(dVar9);
  uVar12 = (undefined4)(D2U(dVar11) >> 0x20);
  if (*(short *)(unsigned)(0x4c0 + unaff_r14) != 0) {
    *(undefined2 *)(unsigned)(0x4b4 + unaff_r14) = 0;
    return 0;
  }
  uVar16 = ((uint)bVar20 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar22 << 0x13 | (uint)bVar23 << 0x14
           ) & 0xffe7ffff;
  bVar20 = 0;
  bVar21 = 0;
  bVar22 = (byte)((uVar16 & 0x80000) >> 0x13);
  bVar23 = (byte)((uVar16 & 0x100000) >> 0x14);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013dec(uVar18 - uVar7,uVar6,ar6,ar7));
  uVar16 = ((uint)bVar20 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar22 << 0x13 | (uint)bVar23 << 0x14
           ) & 0xffe7ffff;
  dVar11 = CONCAT44D(uVar12,0x3c23d70a);
  uVar6 = (uVar16 & 0x80000) >> 0x13;
  uVar16 = (uVar16 & 0x100000) >> 0x14;
  cVar1 = (char)uVar16;
  if ((char)uVar6 == '\0') {
    iVar19 = (int)(F32LO(dVar10) * 0x3c23d70a);
  }
  else {
    iVar19 = (int)(dVar10 * dVar11);
  }
  if (iVar19 < iVar3) {
    *(undefined2 *)(unsigned)(0x4b4 + unaff_r14) = 0;
  }
  if (*(ushort *)(unsigned)(0x4b4 + unaff_r14) < 0xb) {
    return 0;
  }
  iVar3 = (int)0x4c0;
  *(short *)(unsigned)(iVar3 + unaff_r14) = (short)uVar18;
  *(undefined2 *)(unsigned)(iVar3 + -0xc + unaff_r14) = 0;
  if (cVar1 == '\0') {
    dVar11 = (double)(ulonglong)*(uint *)(unsigned)(unaff_r14 + 0x38);
  }
  uVar16 = (uVar6 << 0x13 | uVar16 << 0x14) & 0xffe7ffff;
  if (cVar1 == '\0') {
    dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 + 0x2c),SUB84(dVar11,0));
  }
  else {
    dVar10 = *(double *)(unsigned)(unaff_r14 + 0x2c);
  }
  uVar6 = (uVar16 & 0x80000) >> 0x13;
  bVar20 = (byte)uVar6;
  uVar16 = uVar16 >> 0x14;
  bVar21 = (byte)uVar16;
  if (bVar20 == 0) {
    dVar10 = CONCAT44D(F32HI(dVar10) + F32LO(dVar10),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 + dVar10;
  }
  if (bVar21 == 0) {
    dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),*(undefined4 *)(unsigned)(unaff_r14 + 0x3c));
  }
  dVar11 = dVar10;
  if (bVar21 == 0) {
    dVar11 = CONCAT44D((int)(D2U(dVar10) >> 0x20),in_fr5);
  }
  if (bVar20 == 0) {
    fVar14 = F32HI(dVar11) + F32LO(dVar10);
  }
  else {
    fVar14 = (float)((ulonglong)(dVar11 + dVar10) >> 0x20);
  }
  if (*(ushort *)(unsigned)(0x4c0 + unaff_r14) == uVar17) {
    uVar17 = uVar6 << 0x13 | uVar16 << 0x14 | 0x80000 & 0x3fffff;
    bVar20 = (byte)((uVar17 & 0x80000) >> 0x13);
    bVar21 = (byte)((uVar17 & 0x100000) >> 0x14);
    if (bVar21 == 0) {
      fVar13 = *(float *)(unsigned)(0x4b0 + unaff_r14);
    }
    dVar10 = (double)fVar13;
    if (bVar21 == 0) {
      dVar11 = CONCAT44D((*(undefined1 *)(unsigned)0x8c123810),(*(undefined1 *)(unsigned)0x8c123814));
    }
    else {
      dVar11 = CONCAT44D((*(undefined1 *)(unsigned)0x8c123814),(*(undefined1 *)(unsigned)0x8c123810));
    }
    if (bVar20 == 0) {
      fVar13 = F32HI(dVar10) + F32HI(dVar11);
      dVar10 = CONCAT44D(fVar13,SUB84(dVar10,0));
      bVar15 = (float)((ulonglong)(double)fVar14 >> 0x20) < fVar13;
    }
    else {
      dVar10 = dVar10 + dVar11;
      bVar15 = (double)fVar14 < dVar10;
    }
    fVar13 = F32LO(dVar10);
    if (bVar15) goto LAB_8c1237c2;
  }
  if ((int)0x199b <= (int)(uint)*(ushort *)(unsigned)(0x4c0 + unaff_r14)) {
    return 0;
  }
  uVar17 = (uint)bVar20 << 0x13 | (uint)bVar21 << 0x14 | 0x80000 & 0x3fffff;
  cVar1 = (char)((uVar17 & 0x100000) >> 0x14);
  if (cVar1 == '\0') {
    fVar13 = *(float *)(unsigned)(0x4b0 + unaff_r14);
  }
  if (cVar1 == '\0') {
    dVar10 = CONCAT44D((*(undefined1 *)(unsigned)0x8c123818),(*(undefined1 *)(unsigned)0x8c123814));
  }
  else {
    dVar10 = CONCAT44D(0,(*(undefined1 *)(unsigned)0x8c123818));
  }
  if ((char)((uVar17 & 0x80000) >> 0x13) == '\0') {
    bVar15 = (float)((ulonglong)(double)fVar13 >> 0x20) + F32HI(dVar10) <
             (float)((ulonglong)(double)fVar14 >> 0x20);
  }
  else {
    bVar15 = (double)fVar13 + dVar10 < (double)fVar14;
  }
  if (!bVar15) {
    return 0;
  }
LAB_8c1237c2:
  uVar17 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c12357c(unaff_r14,5,ar6,ar7));
  if ((uVar17 & 0xff) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c123602\n.set _FUN_8c123602, _FUN_8c123602_def\n");
