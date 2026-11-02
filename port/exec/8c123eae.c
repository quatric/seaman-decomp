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
undefined4 FUN_8c123eae_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c123eae";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  char cVar1;
  char cVar2;
  uint uVar3;
  short sVar4;
  double *in_r0 = (double *)(unsigned long)vin0;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  short *psVar8;
  float *pfVar9;
  short sVar10;
  int ar5_00;
  short sVar11;
  double *ar6_00;
  int iVar12;
  double *ar7_00;
  double *pdVar13;
  int unaff_r14 = 0;
  undefined8 *puVar14;
  double in_dr0 = 0;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double in_dr2 = 0;
  ulonglong uVar20;
  double dVar21;
  undefined4 uVar22;
  float fVar23;
  double in_dr4 = 0;
  double dVar24;
  float fVar25;
  undefined4 in_fr7 = 0;
  double dVar26;
  double dVar27;
  undefined8 in_dr12 = 0;
  undefined8 in_dr14 = 0;
  float fVar29;
  double dVar28;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar30;
  double dVar31;
  double in_xd4 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar32;
  undefined4 in_PR = 0;
  byte in_FPSCR_CAUSE = 0;
  byte bVar33;
  byte in_FPSCR_DN = 0;
  byte bVar34;
  byte in_FPSCR_PR = 0;
  byte bVar35;
  byte in_FPSCR_SZ = 0;
  byte bVar36;
  
  if (in_FPSCR_SZ == 0) {
    (*(undefined8 *)(fr0_ - 0xc)) = CONCAT44D((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0xc)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar14 = &(*(undefined8 *)(fr0_ - 0x14));
    (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar14 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x24));
    (*(undefined8 *)(fr0_ - 0xc)) = in_xd14;
    (*(undefined8 *)(fr0_ - 0x14)) = in_dr14;
  }
  *(undefined4 *)(unsigned)((int)puVar14 + -4) = in_PR;
  if (in_FPSCR_SZ == 0) {
    in_dr2 = (double)(ulonglong)*(uint *)(unsigned)in_r0;
  }
  else {
    in_xd2 = *in_r0;
  }
  if (in_FPSCR_SZ == 0) {
    *(int *)(unsigned)(0x4a4 + unaff_r14) = SUB84(in_dr2,0);
    dVar28 = CONCAT44D((*(undefined1 *)(unsigned)0x8c123f08),(int)((ulonglong)in_dr4 >> 0x20));
  }
  else {
    *(double *)(unsigned)(0x4a4 + unaff_r14) = in_xd2;
    dVar28 = CONCAT44D((*(uint *)(unsigned)0x8c123f0c),(*(undefined1 *)(unsigned)0x8c123f08));
    in_xd14 = in_dr4;
  }
  if (*(char *)(unsigned)(unaff_r14 + 0x28) == '\0') {
    fVar29 = F32HI(dVar28);
    if (in_FPSCR_SZ == 0) {
      *(float *)(unsigned)(unaff_r14 + 0x38) = fVar29;
      *(int *)(unsigned)(unaff_r14 + 0x3c) = SUB84(dVar28,0);
    }
    else {
      *(double *)(unsigned)(unaff_r14 + 0x38) = dVar28;
      *(double *)(unsigned)(unaff_r14 + 0x3c) = in_xd14;
    }
    if (*(char *)(unsigned)(0x4ac + unaff_r14) == '\0') {
      if (in_FPSCR_SZ == 0) {
        dVar21 = CONCAT44D(SUB84(dVar28,0),*(undefined4 *)(unsigned)(0x4a0 + unaff_r14));
      }
      else {
        in_xd2 = *(double *)(unsigned)(0x4a0 + unaff_r14);
        dVar21 = in_xd14;
      }
      if (in_FPSCR_PR == 0) {
        in_dr2 = CONCAT44D(F32HI(dVar21) + F32LO(dVar21) + fVar29,
                                  SUB84(dVar21,0));
      }
      else {
        in_dr2 = dVar21 + dVar21 + dVar28;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)(unsigned)(unaff_r14 + 0x2c) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(unsigned)(unaff_r14 + 0x2c) = in_dr2;
      }
    }
    else if (in_FPSCR_SZ == 0) {
      uVar15 = *(uint *)(unsigned)(0x4a0 + unaff_r14);
      in_dr2 = (double)(ulonglong)uVar15;
      *(uint *)(unsigned)(unaff_r14 + 0x2c) = uVar15;
    }
    else {
      in_xd2 = *(double *)(unsigned)(0x4a0 + unaff_r14);
      *(double *)(unsigned)(unaff_r14 + 0x2c) = in_xd2;
    }
    fVar29 = 0xffe7ffff;
    uVar16 = (*(undefined1 *)(unsigned)0x8c123ff0);
    if (in_FPSCR_SZ != 0) {
      in_xd2 = CONCAT44D((*(undefined1 *)(unsigned)0x8c123ff4),(*(undefined1 *)(unsigned)0x8c123ff0));
      uVar16 = SUB84(in_dr2,0);
    }
    if (in_FPSCR_SZ == 0) {
      *(undefined4 *)(unsigned)(0x494 + unaff_r14) = uVar16;
      uVar16 = *(undefined4 *)(unsigned)(unaff_r14 + 0x3c);
      fVar17 = (*(undefined1 *)(unsigned)0x8c123ff4);
    }
    else {
      *(double *)(unsigned)(0x494 + unaff_r14) = in_xd2;
      in_xd2 = *(double *)(unsigned)(unaff_r14 + 0x3c);
      fVar17 = 0xffe7ffff;
    }
    uVar15 = 0x80000;
    uVar7 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & (uint)fVar29;
    if (in_FPSCR_SZ == 0) {
      uVar20 = CONCAT44(*(undefined4 *)(unsigned)(unaff_r14 + 0x38),uVar16);
    }
    else {
      uVar20 = *(ulonglong *)(unsigned)(unaff_r14 + 0x38);
    }
    uVar3 = (uVar7 & 0x80000) >> 0x13;
    uVar7 = (uVar7 & 0x100000) >> 0x14;
    if ((char)uVar3 == '\0') {
      uVar20 = (ulonglong)(uint)(fVar17 * (float)(uVar20 >> 0x20) + (float)uVar20);
    }
    if ((char)uVar7 == '\0') {
      *(float *)(unsigned)(unaff_r14 + 0x34) = (float)uVar20;
    }
    else {
      *(double *)(unsigned)(unaff_r14 + 0x34) = in_xd2;
    }
    uVar15 = uVar3 << 0x13 | uVar7 << 0x14 | uVar15 & 0x3fffff;
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    uVar15 = (uVar15 & 0x100000) >> 0x14;
    cVar1 = (char)uVar15;
    dVar21 = (double)(float)uVar20;
    if (cVar1 == '\0') {
      in_dr0 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124000),(*(undefined1 *)(unsigned)0x8c124004));
    }
    else {
      in_dr0 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124004),(*(undefined1 *)(unsigned)0x8c124000));
      in_xd0 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124008),(*(undefined1 *)(unsigned)0x8c124004));
    }
    if ((char)uVar7 == '\0') {
      dVar21 = CONCAT44D(F32HI(dVar21) +
                                F32HI(in_dr0),SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 + in_dr0;
    }
    if (cVar1 == '\0') {
      *(float *)(unsigned)(unaff_r14 + 0x30) = (float)dVar21;
    }
    else {
      *(double *)(unsigned)(unaff_r14 + 0x30) = in_xd2;
    }
    ar6 = (int)0x12c;
    fVar29 = (*(undefined1 *)(unsigned)0x8c124008);
    if (cVar1 != '\0') {
      in_xd2 = CONCAT44D(((void *)(unsigned)0x8c013ff8),(*(undefined1 *)(unsigned)0x8c124008));
      fVar29 = (float)dVar21;
    }
    if (cVar1 == '\0') {
      *(float *)(unsigned)(unaff_r14 + 0x40) = fVar29;
    }
    else {
      *(double *)(unsigned)(unaff_r14 + 0x40) = in_xd2;
    }
    fVar29 = 0xffe7ffff;
    *(undefined2 *)(unsigned)(0x4b4 + unaff_r14) = 0;
    *(undefined1 *)(unsigned)(unaff_r14 + 0x28) = 1;
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & (uint)fVar29;
    ar4 = ar6 + -0x80 + unaff_r14;
    ar5 = 0;
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar15 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)(uVar15 >> 0x14);
    (vsp = ((unsigned long)(fr0_ - 40)), memset(ar4,0,ar6,ar7));
    *(undefined4 *)(unsigned)(0x430 + unaff_r14) = 0;
  }
  fVar29 = (float)in_dr12;
  if (0 < *(short *)(unsigned)(unaff_r14 + 0x48)) {
    if (*(short *)(unsigned)(unaff_r14 + 0x48) != 0) {
      *(undefined1 *)(unsigned)(unaff_r14 + 0x28) = 0;
    }
    *(short *)(unsigned)(unaff_r14 + 0x48) = *(short *)(unsigned)(unaff_r14 + 0x48) + -1;
    return 0x48;
  }
  iVar5 = (int)0x430;
  if (*(uint *)(unsigned)(iVar5 + unaff_r14) < 0x28) {
    *(int *)(unsigned)(iVar5 + unaff_r14) = *(int *)(unsigned)(iVar5 + unaff_r14) + 1;
    uVar15 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
             (uint)in_FPSCR_SZ << 0x14) & (uint)0xffe7ffff;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = (byte)((uVar15 & 0x80000) >> 0x13);
    bVar36 = (byte)((uVar15 & 0x100000) >> 0x14);
    fVar17 = (float)*(int *)(unsigned)(iVar5 + unaff_r14);
    if (*(int *)(unsigned)(iVar5 + unaff_r14) < 0) {
      if (bVar36 == 0) {
        dVar21 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124010),fVar17);
      }
      else {
        dVar21 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124014),(*(undefined1 *)(unsigned)0x8c124010));
      }
      if (bVar35 == 0) {
        fVar17 = F32LO(dVar21) + F32HI(dVar21);
      }
      else {
        fVar17 = SUB84(dVar21 + dVar21,0);
      }
    }
    if (bVar36 == 0) {
      dVar21 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124014),fVar17);
      dVar31 = CONCAT44D(fVar17,SUB84(in_dr4,0));
    }
    else {
      dVar21 = CONCAT44D(((void *)(unsigned)0x8c11fbaa),(*(undefined1 *)(unsigned)0x8c124014));
      dVar31 = in_xd2;
    }
    if (bVar35 == 0) {
      in_dr4 = CONCAT44D(F32HI(dVar31) *
                                F32HI(dVar21),SUB84(dVar31,0));
    }
    else {
      in_dr4 = dVar31 * dVar21;
    }
    (vsp = ((unsigned long)(fr0_ - 40)), thunk_FUN_8c013be8(ar4,ar5,ar6,ar7));
    uVar15 = ((uint)bVar33 << 0xc | (uint)bVar34 << 0x12 | (uint)bVar35 << 0x13 |
             (uint)bVar36 << 0x14) & (uint)0xffe7ffff;
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar15 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)((uVar15 & 0x100000) >> 0x14);
    if (in_FPSCR_PR == 0) {
      sVar11 = (short)(int)F32HI(in_dr0);
    }
    else {
      sVar11 = (short)(int)in_dr0;
    }
  }
  else {
    sVar11 = 5;
    psVar8 = (short *)(unsigned)(*((short *)(unsigned long)*(unsigned *)(unsigned)(0x488 + unaff_r14)) * 2 + 0xac + unaff_r14);
    *psVar8 = *psVar8 + -1;
  }
  if (in_FPSCR_SZ == 0) {
    in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),(*(undefined1 *)(unsigned)0x8c124134));
  }
  else {
    in_xd4 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124138),(*(undefined1 *)(unsigned)0x8c124134));
  }
  uVar15 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
           (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  fVar17 = F32LO(dVar28);
  if (in_FPSCR_SZ == 0) {
    dVar21 = CONCAT44D(fVar17,(*(undefined1 *)(unsigned)0x8c124138));
  }
  else {
    in_xd2 = CONCAT44D(0xffe7ffff,(*(undefined1 *)(unsigned)0x8c124138));
    dVar21 = in_xd14;
  }
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  cVar1 = (char)uVar7;
  uVar15 = (uVar15 & 0x100000) >> 0x14;
  cVar2 = (char)uVar15;
  if (cVar1 == '\0') {
    dVar21 = CONCAT44D(F32HI(dVar21) + F32LO(dVar21),SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar21;
  }
  if (cVar2 == '\0') {
    dVar31 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124144),(*(undefined1 *)(unsigned)0x8c124140));
  }
  else {
    in_xd0 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124144),(*(undefined1 *)(unsigned)0x8c124140));
    dVar31 = CONCAT44D(0xffff,(*(undefined1 *)(unsigned)0x8c124144));
  }
  if (cVar1 == '\0') {
    dVar21 = CONCAT44D((F32HI(dVar21) * F32LO(dVar31)) /
                              F32HI(dVar31),SUB84(dVar21,0));
  }
  else {
    dVar21 = (dVar21 * dVar31) / dVar31;
  }
  dVar30 = dVar21;
  if (cVar2 == '\0') {
    uVar16 = (undefined4)(D2U(dVar21) >> 0x20);
    dVar21 = CONCAT44D(uVar16,uVar16);
    dVar30 = in_xd2;
  }
  if (cVar1 == '\0') {
    fVar18 = F32LO(dVar21) + F32LO(in_dr4);
    dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),fVar18);
    sVar10 = (short)(int)fVar18;
  }
  else {
    dVar21 = dVar21 + in_dr4;
    sVar10 = (short)(int)dVar21;
  }
  if (sVar10 < 0) {
    sVar10 = 0;
  }
  if (0x95 < sVar10) {
    sVar10 = 0x95;
  }
  iVar5 = (int)0x488;
  psVar8 = (short *)(unsigned)(sVar10 * 2 + 0xac + unaff_r14);
  *psVar8 = *psVar8 + 1;
  psVar8 = ((short *)(unsigned long)*(unsigned *)(unsigned)(iVar5 + unaff_r14));
  *(unsigned *)(unsigned)(iVar5 + unaff_r14) = psVar8 + 1;
  *psVar8 = sVar10;
  if (*(int *)(unsigned)(iVar5 + unaff_r14) == *(int *)(unsigned)(iVar5 + -4 + unaff_r14)) {
    *(int *)(unsigned)(0x488 + unaff_r14) = 0x434 + unaff_r14;
  }
  sVar10 = 0;
  psVar8 = (short *)(unsigned)(0xac + unaff_r14);
  do {
    sVar4 = *psVar8;
    psVar8 = psVar8 + 1;
    iVar5 = (int)sVar11;
    sVar10 = sVar10 + sVar4;
  } while (sVar10 < iVar5);
  iVar12 = (int)psVar8 - (0xac + unaff_r14);
  psVar8 = (short *)(unsigned)((int)0x12a + 0xac + unaff_r14);
  ar5_00 = 0;
  ar7_00 = (double *)(unsigned)
           ((((int)(iVar12 + (uint)(iVar12 < 0)) >> 1) + 0xffff & 0xffffU) * 4 +
           0x1d8 + unaff_r14);
  if (cVar2 == '\0') {
    dVar26 = CONCAT44D(*(undefined4 *)(unsigned)ar7_00,in_fr7);
  }
  else {
    dVar26 = *ar7_00;
  }
  do {
    ar5_00 = ar5_00 + *psVar8;
    psVar8 = psVar8 + -1;
  } while ((short)ar5_00 < iVar5);
  if (cVar2 == '\0') {
    dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)(unaff_r14 + 0x3c));
  }
  else {
    dVar30 = *(double *)(unsigned)(unaff_r14 + 0x3c);
  }
  iVar12 = (int)psVar8 - (0xac + unaff_r14);
  ar6_00 = (double *)(unsigned)
           ((((int)(iVar12 + (uint)(iVar12 < 0)) >> 1) + 1U & 0xffff) * 4 + 0x1d8 + unaff_r14
           );
  if (cVar2 == '\0') {
    dVar24 = CONCAT44D(*(undefined4 *)(unsigned)ar6_00,SUB84(in_dr4,0));
  }
  else {
    dVar24 = *ar6_00;
  }
  uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  uVar15 = uVar15 >> 0x14;
  if ((char)uVar7 == '\0') {
    fVar18 = F32HI(dVar26) - F32LO(dVar21);
    dVar26 = CONCAT44D(fVar18,SUB84(dVar26,0));
    bVar32 = SUB84(dVar24,0) < fVar18;
  }
  else {
    dVar26 = dVar26 - dVar21;
    bVar32 = dVar24 < dVar26;
  }
  dVar27 = dVar26;
  if ((bVar32) && (dVar27 = in_xd4, (char)uVar15 == '\0')) {
    dVar27 = CONCAT44D(SUB84(dVar24,0),SUB84(dVar26,0));
  }
  uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  dVar21 = CONCAT44D(0x0,SUB84(dVar21,0));
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  cVar1 = (char)uVar7;
  uVar15 = uVar15 >> 0x14;
  cVar2 = (char)uVar15;
  fVar18 = F32HI(dVar27);
  if (cVar1 == '\0') {
    bVar32 = 0x0 < fVar18;
  }
  else {
    bVar32 = dVar21 < dVar27;
  }
  pdVar13 = (double *)(unsigned)(unaff_r14 + 0x3c);
  if (bVar32) {
    if (cVar2 == '\0') {
      dVar21 = CONCAT44D(0x0,(*(undefined1 *)(unsigned)0x8c124150));
    }
    else {
      dVar30 = CONCAT44D((*(uint *)(unsigned)0x8c124154),(*(undefined1 *)(unsigned)0x8c124150));
    }
  }
  else if (cVar2 == '\0') {
    dVar21 = CONCAT44D(0x0,(undefined4)(*(undefined1 *)(unsigned)0x8c124278));
  }
  else {
    dVar30 = CONCAT44D(0xffe7ffff,(undefined4)(*(undefined1 *)(unsigned)0x8c124278));
  }
  dVar26 = dVar27;
  if (cVar2 == '\0') {
    dVar26 = CONCAT44D(fVar18,SUB84(dVar31,0));
  }
  if (cVar1 == '\0') {
    dVar21 = CONCAT44D(F32HI(dVar26) * F32LO(dVar21) +
                              F32HI(dVar21),SUB84(dVar21,0));
  }
  iVar12 = (int)0xa8;
  dVar31 = dVar21;
  if (cVar2 == '\0') {
    dVar21 = (double)(D2U(dVar21) >> 0x20);
    dVar31 = dVar30;
  }
  uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  if (cVar2 == '\0') {
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar13,SUB84(dVar21,0));
  }
  else {
    dVar21 = *pdVar13;
  }
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  uVar15 = uVar15 >> 0x14;
  cVar1 = (char)uVar15;
  if ((char)uVar7 == '\0') {
    dVar21 = CONCAT44D(F32HI(dVar21) + F32LO(dVar21),SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar21;
  }
  uVar16 = (undefined4)(D2U(dVar21) >> 0x20);
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)pdVar13 = uVar16;
  }
  else {
    *pdVar13 = dVar21;
  }
  pfVar9 = ((float *)(unsigned long)*(unsigned *)(unsigned)(iVar12 + unaff_r14));
  if (cVar1 == '\0') {
    dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                              *(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)(iVar12 + unaff_r14)));
  }
  else {
    in_xd4 = *((double *)(unsigned long)*(unsigned *)(unsigned)(iVar12 + unaff_r14));
  }
  *(unsigned *)(unsigned)(iVar12 + unaff_r14) = pfVar9 + 1;
  if (cVar1 == '\0') {
    *pfVar9 = fVar17;
  }
  else {
    *(double *)(unsigned)(pfVar9 + -1) = in_xd14;
  }
  if (*(uint *)(unsigned)(iVar12 + -4 + unaff_r14) <= *(uint *)(unsigned)(iVar12 + unaff_r14)) {
    *(int *)(unsigned)(0xa8 + unaff_r14) = unaff_r14 + 0x54;
  }
  if (cVar1 == '\0') {
    dVar21 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(unaff_r14 + 0x3c));
  }
  else {
    dVar31 = *(double *)(unsigned)(unaff_r14 + 0x3c);
  }
  uVar7 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  uVar15 = (uVar7 & 0x80000) >> 0x13;
  if ((char)uVar15 == '\0') {
    dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),F32LO(dVar24) - F32LO(dVar21));
  }
  else {
    dVar24 = dVar24 - dVar21;
  }
  uVar15 = uVar15 << 0x13 | uVar7 & 0xfff00000 | 0x80000 & 0x3fffff;
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  bVar33 = (byte)uVar7;
  uVar15 = (uVar15 & 0x100000) >> 0x14;
  bVar34 = (byte)uVar15;
  dVar21 = (double)SUB84(dVar24,0);
  if (bVar34 == 0) {
    *(int *)(unsigned)((int)puVar14 + -8) = (int)(D2U(dVar21) >> 0x20);
    pdVar13 = (double *)(unsigned)((int)puVar14 + -0xc);
    *(int *)(unsigned)((int)puVar14 + -0xc) = SUB84(dVar21,0);
    dVar26 = (double)(ulonglong)*(uint *)(unsigned)(unaff_r14 + 0x38);
    dVar21 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124284),SUB84(dVar21,0));
  }
  else {
    *(double *)(unsigned)((int)puVar14 + -0xc) = dVar21;
    pdVar13 = (double *)(unsigned)((int)puVar14 + -0x14);
    *(double *)(unsigned)((int)puVar14 + -0x14) = dVar31;
    in_xd0 = *(double *)(unsigned)(unaff_r14 + 0x38);
    dVar21 = CONCAT44D(0x0,(*(undefined1 *)(unsigned)0x8c124284));
  }
  dVar30 = (double)SUB84(dVar26,0);
  if (bVar34 == 0) {
    dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),0x0);
  }
  else {
    dVar31 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c12428c),0x0);
  }
  if (bVar33 == 0) {
    dVar30 = CONCAT44D(F32HI(dVar30) +
                              F32HI(dVar21),SUB84(dVar30,0));
  }
  else {
    dVar30 = dVar30 + dVar21;
  }
  if (bVar34 != 0) {
    dVar31 = *pdVar13;
    pdVar13 = pdVar13 + 1;
  }
  dVar21 = *pdVar13;
  if (bVar33 == 0) {
    bVar32 = F32HI(dVar21) < F32HI(dVar30);
  }
  else {
    bVar32 = dVar21 < dVar30;
  }
  if (bVar32) {
    if (bVar34 == 0) {
      dVar21 = (double)(ulonglong)*(uint *)(unsigned)(unaff_r14 + 0x3c);
    }
    else {
      dVar31 = *(double *)(unsigned)(unaff_r14 + 0x3c);
    }
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
    uVar16 = (undefined4)(D2U(dVar24) >> 0x20);
    dVar30 = dVar24;
    if (bVar34 == 0) {
      dVar30 = CONCAT44D(uVar16,SUB84(dVar21,0));
    }
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    cVar1 = (char)uVar7;
    uVar15 = uVar15 >> 0x14;
    cVar2 = (char)uVar15;
    if (cVar1 == '\0') {
      dVar30 = CONCAT44D(F32HI(dVar30) - F32LO(dVar30),SUB84(dVar30,0)
                               );
    }
    else {
      dVar30 = dVar30 - dVar30;
    }
    if (cVar2 == '\0') {
      uVar22 = (undefined4)(D2U(dVar30) >> 0x20);
      dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c12428c),SUB84(dVar27,0));
      dVar24 = CONCAT44D(uVar16,uVar22);
      dVar30 = in_xd4;
      dVar21 = CONCAT44D(uVar22,*(undefined4 *)(unsigned)(unaff_r14 + 0x38));
      dVar26 = dVar31;
    }
    else {
      dVar26 = *(double *)(unsigned)(unaff_r14 + 0x38);
      dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c124290),(*(undefined4 *)(unsigned)(unsigned)0x8c12428c));
      dVar21 = dVar30;
    }
    fVar18 = F32HI(dVar27);
    if (cVar1 == '\0') {
      fVar23 = F32LO(dVar24) - F32LO(dVar21);
      dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),fVar23);
      bVar32 = fVar18 < fVar23;
    }
    else {
      dVar24 = dVar24 - dVar21;
      bVar32 = dVar27 < dVar24;
    }
    dVar31 = dVar30;
    if ((bVar32) && (dVar31 = dVar27, cVar2 == '\0')) {
      dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),fVar18);
      dVar31 = dVar30;
    }
    fVar18 = F32HI(dVar31);
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
    dVar21 = CONCAT44D(0x0,SUB84(dVar21,0));
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    cVar1 = (char)uVar7;
    uVar15 = uVar15 >> 0x14;
    cVar2 = (char)uVar15;
    if (cVar1 == '\0') {
      bVar32 = 0x0 < SUB84(dVar24,0);
    }
    else {
      bVar32 = dVar21 < dVar24;
    }
    pdVar13 = (double *)(unsigned)(unaff_r14 + 0x38);
    if (bVar32) {
      if (cVar2 == '\0') {
        dVar21 = CONCAT44D(0x0,(*(undefined4 *)(unsigned)(unsigned)0x8c124290));
      }
      else {
        dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c124294),(*(undefined4 *)(unsigned)(unsigned)0x8c124290));
      }
    }
    else if (cVar2 == '\0') {
      dVar21 = CONCAT44D(0x0,(*(undefined4 *)(unsigned)(unsigned)0x8c124294));
    }
    else {
      dVar26 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124298),(*(undefined4 *)(unsigned)(unsigned)0x8c124294));
    }
    if (cVar2 == '\0') {
      fVar18 = F32LO(dVar24);
    }
    if (cVar1 == '\0') {
      dVar21 = CONCAT44D(fVar18 * F32LO(dVar21) + F32HI(dVar21),
                                SUB84(dVar21,0));
    }
    dVar31 = dVar21;
    if (cVar2 == '\0') {
      dVar21 = (double)(D2U(dVar21) >> 0x20);
      dVar31 = dVar26;
    }
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
    if (cVar2 == '\0') {
      dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar13,SUB84(dVar21,0));
    }
    else {
      dVar21 = *pdVar13;
    }
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    uVar15 = uVar15 >> 0x14;
    if ((char)uVar7 == '\0') {
      dVar21 = CONCAT44D(F32HI(dVar21) + F32LO(dVar21),SUB84(dVar21,0)
                               );
    }
    else {
      dVar21 = dVar21 + dVar21;
    }
    if ((char)uVar15 == '\0') {
      *(int *)(unsigned)pdVar13 = (int)(D2U(dVar21) >> 0x20);
      dVar21 = (double)(ulonglong)*(uint *)(unsigned)(unaff_r14 + 0x38);
    }
    else {
      *pdVar13 = dVar21;
      dVar31 = *(double *)(unsigned)(unaff_r14 + 0x38);
    }
    uVar15 = uVar7 << 0x13 | uVar15 << 0x14 | 0x80000 & 0x3fffff;
    bVar33 = (byte)((uVar15 & 0x80000) >> 0x13);
    bVar34 = (byte)((uVar15 & 0x100000) >> 0x14);
    dVar21 = (double)SUB84(dVar21,0);
    if (bVar34 == 0) {
      dVar30 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124298),(*(undefined1 *)(unsigned)0x8c12429c));
    }
    else {
      dVar30 = CONCAT44D((*(undefined1 *)(unsigned)0x8c12429c),(*(undefined1 *)(unsigned)0x8c124298));
      in_xd0 = CONCAT44D((*(undefined1 *)(unsigned)0x8c1242a0),(*(undefined1 *)(unsigned)0x8c12429c));
    }
    if (bVar33 == 0) {
      bVar32 = F32HI(dVar21) < F32HI(dVar30);
    }
    else {
      bVar32 = dVar21 < dVar30;
    }
    if (bVar32) {
      if (bVar34 == 0) {
        dVar21 = (double)(ulonglong)(*(undefined1 *)(unsigned)0x8c1242a0);
        *(uint *)(unsigned)(unaff_r14 + 0x38) = (*(undefined1 *)(unsigned)0x8c1242a0);
      }
      else {
        dVar31 = CONCAT44D((*(undefined1 *)(unsigned)0x8c1242a4),(*(undefined1 *)(unsigned)0x8c1242a0));
        *(double *)(unsigned)(unaff_r14 + 0x38) = dVar31;
      }
    }
  }
  uVar16 = SUB84(dVar21,0);
  if (bVar34 == 0) {
    uVar16 = *(undefined4 *)(unsigned)(unaff_r14 + 0x3c);
  }
  else {
    dVar31 = *(double *)(unsigned)(unaff_r14 + 0x3c);
  }
  if (bVar34 == 0) {
    dVar21 = CONCAT44D((*(undefined1 *)(unsigned)0x8c1242a4),SUB84(dVar30,0));
    dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 + 0x38),uVar16);
  }
  else {
    dVar21 = CONCAT44D((*(uint *)(unsigned)0x8c1242a8),(*(undefined1 *)(unsigned)0x8c1242a4));
    dVar30 = *(double *)(unsigned)(unaff_r14 + 0x38);
  }
  uVar15 = ((uint)bVar33 << 0x13 | (uint)bVar34 << 0x14) & 0xffe7ffff;
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  cVar1 = (char)uVar7;
  uVar15 = uVar15 >> 0x14;
  cVar2 = (char)uVar15;
  fVar18 = F32HI(dVar21);
  if (cVar1 == '\0') {
    fVar23 = F32HI(dVar30);
    dVar30 = CONCAT44D(fVar23,fVar18 * fVar23 + F32LO(dVar30));
  }
  if (cVar2 == '\0') {
    *(int *)(unsigned)(unaff_r14 + 0x34) = SUB84(dVar30,0);
    fVar29 = 0x0;
  }
  else {
    *(double *)(unsigned)(unaff_r14 + 0x34) = dVar31;
    in_xd12 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c12428c),0x0);
  }
  uVar16 = (undefined4)(D2U(dVar24) >> 0x20);
  if (*(char *)(unsigned)(0x4ac + unaff_r14) == '\0') {
    if (cVar2 == '\0') {
      dVar24 = CONCAT44D(uVar16,fVar29);
    }
  }
  else {
    if (cVar2 == '\0') {
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),*(undefined4 *)(unsigned)(unaff_r14 + 0x3c));
      dVar24 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(unaff_r14 + 0x38));
    }
    else {
      dVar31 = *(double *)(unsigned)(unaff_r14 + 0x3c);
    }
    if (cVar1 == '\0') {
      dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),F32LO(dVar24) + F32LO(dVar30));
    }
    else {
      dVar24 = dVar24 + dVar30;
    }
  }
  uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  if (cVar2 == '\0') {
    dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),*(undefined4 *)(unsigned)(unaff_r14 + 0x2c));
  }
  else {
    dVar31 = *(double *)(unsigned)(unaff_r14 + 0x2c);
  }
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  cVar1 = (char)uVar7;
  uVar15 = uVar15 >> 0x14;
  cVar2 = (char)uVar15;
  fVar23 = F32LO(dVar24);
  if (cVar1 == '\0') {
    fVar19 = F32LO(dVar30) + fVar23;
  }
  else {
    fVar19 = SUB84(dVar30 + dVar24,0);
  }
  fVar25 = F32HI(dVar24);
  if (cVar2 == '\0') {
    dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 + 0x34),fVar19);
    dVar21 = CONCAT44D(fVar18,*(undefined4 *)(unsigned)(unaff_r14 + 0x40));
    dVar26 = CONCAT44D(fVar25,SUB84(dVar27,0));
  }
  else {
    dVar30 = *(double *)(unsigned)(unaff_r14 + 0x34);
    in_xd0 = *(double *)(unsigned)(unaff_r14 + 0x40);
    dVar26 = dVar24;
  }
  if (cVar1 == '\0') {
    fVar18 = F32LO(dVar30) - F32HI(dVar30);
  }
  else {
    fVar18 = SUB84(dVar30 - dVar30,0);
  }
  if (cVar1 == '\0') {
    dVar30 = CONCAT44D(0x3c23d70a,fVar18 * 0x3c23d70a);
    fVar18 = F32LO(dVar21) - fVar18 * 0x3c23d70a;
  }
  else {
    dVar30 = CONCAT44D(0x3c23d70a,fVar18) * CONCAT44D(0x3c23d70a,fVar18);
    fVar18 = SUB84(dVar21 - dVar30,0);
  }
  dVar21 = in_xd0;
  if (cVar2 == '\0') {
    dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),fVar18);
    dVar21 = dVar31;
  }
  if (cVar1 == '\0') {
    bVar32 = SUB84(dVar30,0) < fVar25;
  }
  else {
    bVar32 = dVar30 < dVar24;
  }
  if (cVar2 == '\0') {
    *(float *)(unsigned)(unaff_r14 + 0x40) = fVar18;
  }
  else {
    *(double *)(unsigned)(unaff_r14 + 0x40) = in_xd0;
  }
  if (cVar1 == '\0') {
    dVar26 = CONCAT44D(F32HI(dVar26) - fVar23,SUB84(dVar26,0));
  }
  else {
    dVar26 = dVar26 - dVar24;
  }
  if (bVar32) {
    if (cVar2 == '\0') {
      *(int *)(unsigned)(unaff_r14 + 0x40) = (int)(D2U(dVar26) >> 0x20);
    }
    else {
      *(double *)(unsigned)(unaff_r14 + 0x40) = dVar26;
    }
  }
  if (cVar2 == '\0') {
    dVar30 = (double)(ulonglong)*(uint *)(unsigned)(unaff_r14 + 0x34);
  }
  else {
    dVar21 = *(double *)(unsigned)(unaff_r14 + 0x34);
  }
  uVar15 = uVar7 << 0x13 | uVar15 << 0x14 | 0x80000 & 0x3fffff;
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  uVar15 = (uVar15 & 0x100000) >> 0x14;
  cVar1 = (char)uVar15;
  dVar31 = (double)SUB84(dVar30,0);
  if (cVar1 == '\0') {
    dVar30 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124354),(*(undefined1 *)(unsigned)0x8c124358));
  }
  else {
    dVar30 = CONCAT44D((*(undefined1 *)(unsigned)0x8c124358),(*(undefined1 *)(unsigned)0x8c124354));
  }
  fVar18 = F32HI(dVar30);
  if ((char)uVar7 == '\0') {
    dVar31 = CONCAT44D(F32HI(dVar31) + fVar18,SUB84(dVar31,0));
  }
  else {
    dVar31 = dVar31 + dVar30;
  }
  uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  if (cVar1 == '\0') {
    *(float *)(unsigned)(unaff_r14 + 0x30) = (float)dVar31;
  }
  else {
    *(double *)(unsigned)(unaff_r14 + 0x30) = dVar21;
  }
  iVar12 = (int)0x4a8;
  if (cVar1 == '\0') {
    dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(iVar12 + -0x10 + unaff_r14),
                              *(undefined4 *)(unsigned)(iVar12 + unaff_r14));
  }
  else {
    dVar21 = *(double *)(unsigned)(iVar12 + unaff_r14);
    dVar31 = *(double *)(unsigned)(iVar12 + -0x10 + unaff_r14);
  }
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  cVar1 = (char)uVar7;
  uVar15 = uVar15 >> 0x14;
  cVar2 = (char)uVar15;
  if (cVar1 == '\0') {
    dVar31 = CONCAT44D(F32HI(dVar31) + F32LO(dVar31),SUB84(dVar31,0));
  }
  else {
    dVar31 = dVar31 + dVar31;
  }
  if (cVar2 == '\0') {
    dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c12435c));
  }
  else {
    dVar21 = CONCAT44D((*(uint *)(unsigned)0x8c124360),(*(undefined4 *)(unsigned)(unsigned)0x8c12435c));
  }
  if (cVar1 == '\0') {
    dVar31 = CONCAT44D(F32HI(dVar31) + F32LO(dVar31),SUB84(dVar31,0));
  }
  else {
    dVar31 = dVar31 + dVar31;
  }
  fVar19 = F32HI(dVar31);
  if (cVar2 == '\0') {
    *(float *)(unsigned)(unaff_r14 + 0x50) = fVar19;
    dVar30 = CONCAT44D(fVar18,*(undefined4 *)(unsigned)(unaff_r14 + 0x30));
  }
  else {
    *(double *)(unsigned)(unaff_r14 + 0x50) = dVar31;
  }
  if (cVar1 == '\0') {
    bVar32 = SUB84(dVar30,0) < fVar19;
  }
  else {
    bVar32 = dVar30 < dVar31;
  }
  if (bVar32) {
    if (cVar2 == '\0') {
      dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 + 0x50),SUB84(dVar31,0));
      *(undefined4 *)(unsigned)(unaff_r14 + 0x30) = *(undefined4 *)(unsigned)(unaff_r14 + 0x50);
    }
    else {
      dVar31 = *(double *)(unsigned)(unaff_r14 + 0x50);
      *(double *)(unsigned)(unaff_r14 + 0x30) = dVar31;
    }
  }
  if (cVar2 == '\0') {
    dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(unaff_r14 + 0x30));
  }
  else {
    dVar21 = *(double *)(unsigned)(unaff_r14 + 0x30);
  }
  uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  bVar33 = (byte)uVar7;
  uVar15 = uVar15 >> 0x14;
  bVar34 = (byte)uVar15;
  if (bVar33 == 0) {
    bVar32 = SUB84(dVar31,0) < fVar17;
  }
  else {
    bVar32 = dVar31 < dVar28;
  }
  if (bVar32) {
    *(short *)(unsigned)(unaff_r14 + 0x44) = *(short *)(unsigned)(unaff_r14 + 0x44) + 1;
  }
  else {
    *(undefined2 *)(unsigned)(unaff_r14 + 0x44) = 0;
  }
  if (*(short *)(unsigned)(0x48e + unaff_r14) < *(short *)(unsigned)(unaff_r14 + 0x44)) {
    if (*(short *)(unsigned)(unaff_r14 + 0x46) == 0) {
      if (bVar34 == 0) {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(unaff_r14 + 0x34)
                                 );
      }
      else {
        dVar21 = *(double *)(unsigned)(unaff_r14 + 0x34);
      }
      uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
      bVar33 = (byte)((uVar15 & 0x80000) >> 0x13);
      bVar34 = (byte)(uVar15 >> 0x14);
      if (bVar33 == 0) {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) - fVar23);
      }
      else {
        dVar31 = dVar31 - dVar24;
      }
      if (bVar34 == 0) {
        *(int *)(unsigned)(unaff_r14 + 0x40) = SUB84(dVar31,0);
      }
      else {
        *(double *)(unsigned)(unaff_r14 + 0x40) = dVar21;
      }
    }
    *(undefined2 *)(unsigned)(unaff_r14 + 0x46) = *(undefined2 *)(unsigned)(0x490 + unaff_r14);
  }
  sVar11 = *(short *)(unsigned)(unaff_r14 + 0x46);
  *(short *)(unsigned)(unaff_r14 + 0x46) = sVar11 + -1;
  if (sVar11 < 1) {
    *(undefined2 *)(unsigned)(unaff_r14 + 0x46) = 0;
    *(undefined2 *)(unsigned)(unaff_r14 + 0x4a) = 0;
  }
  else {
    uVar6 = *(short *)(unsigned)(unaff_r14 + 0x4a) + 1;
    *(ushort *)(unsigned)(unaff_r14 + 0x4a) = uVar6;
    if (((uint)uVar6 != (int)*(short *)(unsigned)(0x492 + unaff_r14)) &&
       (*(short *)(unsigned)(unaff_r14 + 0x46) != 0)) {
      if (bVar34 == 0) {
        dVar31 = (double)(ulonglong)(uint)(*(undefined1 *)(unsigned)0x8c124474);
      }
      uVar15 = ((uint)bVar33 << 0x13 | (uint)bVar34 << 0x14) & 0xffe7ffff;
      if (bVar34 == 0) {
        dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 + 0x2c),SUB84(dVar31,0));
      }
      else {
        dVar31 = *(double *)(unsigned)(unaff_r14 + 0x2c);
      }
      bVar33 = (byte)((uVar15 & 0x80000) >> 0x13);
      bVar34 = (byte)(uVar15 >> 0x14);
      if (bVar33 == 0) {
        dVar31 = CONCAT44D(F32HI(dVar31) + F32LO(dVar31),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 + dVar31;
      }
      if (bVar34 == 0) {
        dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),*(undefined4 *)(unsigned)(unaff_r14 + 0x40)
                                 );
      }
      if (bVar33 == 0) {
        bVar32 = F32HI(dVar31) < SUB84(dVar30,0);
      }
      else {
        bVar32 = dVar31 < dVar30;
      }
      if (!bVar32) goto LAB_8c12441c;
    }
    if (bVar34 == 0) {
      dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(unaff_r14 + 0x2c));
    }
    uVar15 = ((uint)bVar33 << 0x13 | (uint)bVar34 << 0x14) & 0xffe7ffff;
    if (bVar34 == 0) {
      dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 + 0x40),fVar23);
    }
    else {
      dVar24 = *(double *)(unsigned)(unaff_r14 + 0x40);
    }
    bVar33 = (byte)((uVar15 & 0x80000) >> 0x13);
    bVar34 = (byte)(uVar15 >> 0x14);
    *(undefined2 *)(unsigned)(unaff_r14 + 0x4a) = 0;
    if (bVar33 == 0) {
      dVar24 = CONCAT44D(F32HI(dVar24) - F32LO(dVar31),SUB84(dVar24,0)
                               );
    }
    else {
      dVar24 = dVar24 - dVar31;
    }
    if (bVar34 == 0) {
      dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),(*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c124474)+4)));
    }
    fVar18 = F32HI(dVar24);
    if (bVar33 == 0) {
      bVar32 = SUB84(dVar31,0) < fVar18;
    }
    else {
      bVar32 = dVar31 < dVar24;
    }
    fVar23 = 0x3d4ccccc;
    if (bVar32) {
      fVar23 = 0x3e999999;
    }
    dVar30 = CONCAT44D(fVar23,SUB84(dVar30,0));
    if (bVar34 == 0) {
      dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 + 0x2c),SUB84(dVar31,0));
    }
    else {
      dVar31 = *(double *)(unsigned)(unaff_r14 + 0x2c);
    }
    if (bVar33 == 0) {
      dVar31 = CONCAT44D(fVar23 * fVar18 + F32HI(dVar31),SUB84(dVar31,0)
                               );
    }
    if (bVar34 == 0) {
      *(int *)(unsigned)(unaff_r14 + 0x2c) = (int)(D2U(dVar31) >> 0x20);
    }
    else {
      *(double *)(unsigned)(unaff_r14 + 0x2c) = dVar31;
    }
    *(short *)(unsigned)(0x4b4 + unaff_r14) = *(short *)(unsigned)(0x4b4 + unaff_r14) + 1;
  }
LAB_8c12441c:
  uVar16 = SUB84(dVar31,0);
  if (bVar34 == 0) {
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 + 0x2c),fVar29);
  }
  else {
    dVar21 = *(double *)(unsigned)(unaff_r14 + 0x2c);
  }
  uVar15 = ((uint)bVar33 << 0x13 | (uint)bVar34 << 0x14) & 0xffe7ffff;
  bVar33 = 0;
  bVar34 = 0;
  bVar35 = (byte)((uVar15 & 0x80000) >> 0x13);
  bVar36 = (byte)(uVar15 >> 0x14);
  fVar29 = F32LO(dVar24);
  if (bVar35 == 0) {
    dVar21 = CONCAT44D(F32HI(dVar21) + fVar29,SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar24;
  }
  if (bVar36 == 0) {
    uVar16 = *(undefined4 *)(unsigned)(unaff_r14 + 0x34);
  }
  fVar18 = F32HI(dVar21);
  dVar31 = dVar21;
  if (bVar36 == 0) {
    dVar31 = CONCAT44D(fVar18,uVar16);
  }
  if (bVar35 == 0) {
    dVar31 = CONCAT44D(F32HI(dVar31) - F32LO(dVar31),SUB84(dVar31,0));
  }
  else {
    dVar31 = dVar31 - dVar31;
  }
  uVar16 = (undefined4)(D2U(dVar31) >> 0x20);
  if (bVar36 == 0) {
    *(undefined4 *)(unsigned)(0x494 + unaff_r14) = uVar16;
    dVar31 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(unaff_r14 + 0x34));
  }
  else {
    *(double *)(unsigned)(0x494 + unaff_r14) = dVar31;
  }
  if (bVar35 == 0) {
    bVar32 = SUB84(dVar31,0) < fVar17;
  }
  else {
    bVar32 = dVar31 < dVar28;
  }
  if (bVar32) {
    if (bVar35 == 0) {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),fVar17 - fVar18);
    }
    else {
      dVar28 = dVar28 - dVar21;
    }
    if (bVar36 == 0) {
      dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                *(undefined4 *)(unsigned)(0x49c + unaff_r14));
    }
    if (bVar35 == 0) {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),F32LO(dVar28) + F32LO(dVar31));
    }
    else {
      dVar28 = dVar28 + dVar31;
    }
    if (bVar36 == 0) {
      dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),(*(undefined1 *)(unsigned)0x8c124484));
    }
    if (bVar35 == 0) {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),F32LO(dVar28) * F32LO(dVar31));
    }
    else {
      dVar28 = dVar28 * dVar31;
    }
    if (bVar36 == 0) {
      in_xd14 = CONCAT44D(SUB84(dVar28,0),fVar29);
    }
    if (bVar35 == 0) {
      uVar16 = SUB84(in_xd14,0);
    }
    else {
      uVar16 = SUB84(-in_xd14,0);
    }
    (vsp = ((unsigned long)(fr0_ - 40)), thunk_FUN_8c013cd8(iVar5,ar5_00,ar6_00,ar7_00));
    uVar15 = ((uint)bVar33 << 0xc | (uint)bVar34 << 0x12 | (uint)bVar35 << 0x13 |
             (uint)bVar36 << 0x14) & 0xffe7ffff;
    bVar35 = (byte)((uVar15 & 0x80000) >> 0x13);
    bVar36 = (byte)((uVar15 & 0x100000) >> 0x14);
    fVar29 = F32HI(dVar28);
    if (bVar35 == 0) {
      dVar30 = CONCAT44D(F32HI(dVar30) + fVar29,SUB84(dVar30,0));
    }
    else {
      dVar30 = dVar30 + dVar28;
    }
    dVar31 = dVar28;
    if (bVar36 == 0) {
      dVar31 = CONCAT44D(fVar29,uVar16);
    }
    if (bVar35 == 0) {
      dVar31 = CONCAT44D(F32HI(dVar31) /
                                F32HI(dVar30),SUB84(dVar31,0));
    }
    else {
      dVar31 = dVar31 / dVar30;
    }
  }
  else {
    dVar31 = in_xd12;
    if (bVar36 == 0) {
      dVar31 = CONCAT44D(SUB84(dVar21,0),fVar29);
    }
  }
  fVar17 = F32HI(dVar31);
  uVar7 = (uint)bVar35 << 0x13 | (uint)bVar36 << 0x14 | 0x80000 & 0x3fffff;
  uVar15 = (uVar7 & 0x80000) >> 0x13;
  cVar1 = (char)uVar15;
  uVar7 = (uVar7 & 0x100000) >> 0x14;
  cVar2 = (char)uVar7;
  fVar29 = (*(undefined4 *)(unsigned)(unsigned)0x8c1244f0);
  if (cVar2 == '\0') {
    fVar29 = (*(undefined1 *)(unsigned)0x8c1244ec);
  }
  if (cVar1 == '\0') {
    bVar32 = (float)((ulonglong)(double)fVar17 >> 0x20) < fVar29;
  }
  else {
    bVar32 = (double)fVar17 < CONCAT44D(fVar29,(*(undefined1 *)(unsigned)0x8c1244ec));
  }
  if (bVar32) {
    if (cVar2 == '\0') {
      in_xd12 = CONCAT44D(SUB84(dVar21,0),SUB84(dVar31,0));
    }
  }
  else {
    if (cVar2 == '\0') {
      dVar21 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c1244f0),(*(undefined1 *)(unsigned)0x8c1244ec));
    }
    else {
      dVar21 = CONCAT44D(0xffe7ffff,(*(undefined4 *)(unsigned)(unsigned)0x8c1244f0));
    }
    if (cVar1 == '\0') {
      bVar32 = F32HI(dVar21) < (float)((ulonglong)(double)fVar17 >> 0x20);
    }
    else {
      bVar32 = dVar21 < (double)fVar17;
    }
    in_xd12 = dVar31;
    if ((bVar32) && (in_xd12 = dVar28, cVar2 == '\0')) {
      in_xd12 = CONCAT44D((int)(D2U(dVar28) >> 0x20),SUB84(dVar31,0));
    }
  }
  uVar16 = SUB84((double)fVar17,0);
  iVar5 = (int)0x4a4;
  if (cVar2 == '\0') {
    *(int *)(unsigned)(0x4a4 + unaff_r14) = (int)((ulonglong)in_xd12 >> 0x20);
  }
  else {
    *(double *)(unsigned)(0x4a4 + unaff_r14) = in_xd12;
  }
  if (cVar2 == '\0') {
    uVar16 = *(undefined4 *)(unsigned)(iVar5 + unaff_r14);
  }
  uVar15 = (uVar15 << 0x13 | uVar7 << 0x14) & 0xffe7ffff;
  if (cVar2 == '\0') {
    dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(unaff_r14 + 0x4c),uVar16);
  }
  else {
    dVar28 = *(double *)(unsigned)(unaff_r14 + 0x4c);
  }
  if ((char)((uVar15 & 0x80000) >> 0x13) == '\0') {
    dVar28 = CONCAT44D(F32HI(dVar28) + F32LO(dVar28),SUB84(dVar28,0));
  }
  else {
    dVar28 = dVar28 + dVar28;
  }
  if ((char)(uVar15 >> 0x14) == '\0') {
    *(int *)(unsigned)(unaff_r14 + 0x4c) = (int)(D2U(dVar28) >> 0x20);
  }
  else {
    *(double *)(unsigned)(unaff_r14 + 0x4c) = dVar28;
  }
  return 0x4c;
}

__asm__(".globl _FUN_8c123eae\n.set _FUN_8c123eae, _FUN_8c123eae_def\n");
