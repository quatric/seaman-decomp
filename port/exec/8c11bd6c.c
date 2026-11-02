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
undefined4 FUN_8c11bd6c_def(int ar4,undefined4 ar5,float *ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c11bd6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int a4;
  uint a4_00;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  ushort uVar11;
  float *pfVar12;
  int ar4_00;
  float *pfVar13;
  float *pfVar14;
  undefined4 uVar15;
  undefined8 in_dr0 = 0;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong in_dr4 = 0;
  longlong lVar19;
  float fVar20;
  float in_fr15 = 0;
  float fVar21;
  char cVar22;
  
  cVar22 = '\0';
  iVar5 = *(int *)(unsigned)(ar4 + 0x54);
  ar4_00 = *(int *)(unsigned)(ar4 + 0x44);
  pfVar6 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x40));
  pfVar4 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3c));
  uVar1 = *(ushort *)(unsigned)(ar4 + 0x4c);
  (*(ushort *)(fr0_ - 0x48)) = *(ushort *)(unsigned)(ar4 + 0x2a);
  uVar11 = *(ushort *)(unsigned)(ar4 + 0x28);
  fVar21 = *(float *)(unsigned)(ar4 + 0x5c);
  lVar19 = (ulonglong)*(uint *)(unsigned)(ar4 + 0x60) << 0x20;
  pfVar12 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2c));
  pfVar14 = (float *)(unsigned)(iVar5 * 4);
  a4 = ar4_00;
  pfVar9 = ar6;
  pfVar10 = pfVar14;
  pfVar8 = ar7;
  (vsp = ((unsigned long)(fr0_ - 76)), memmove(ar4_00,ar6,pfVar14,ar7));
  fVar17 = F32HI(lVar19);
  fVar20 = (float)in_dr4;
  pfVar13 = (float *)(unsigned)(ar4_00 + (int)pfVar14);
  if ((float *)(unsigned)(ar4_00 + (int)pfVar14) == pfVar6) {
    pfVar13 = pfVar4;
  }
  if (cVar22 == '\0') {
    in_fr15 = 0.5;
  }
  if ((char)ar5 == '\0') {
    if ((*(ushort *)(fr0_ - 0x48)) == 0) {
      pfVar6 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30));
      pfVar7 = ar6;
      for (pfVar4 = pfVar12; pfVar4 < (float *)(unsigned)((int)pfVar14 + (int)pfVar12); pfVar4 = pfVar4 + 1) {
        if (cVar22 == '\0') {
          *pfVar4 = *pfVar7;
          in_dr4 = in_dr4 & 0xffffffff;
        }
        else {
          *(ulonglong *)(unsigned)pfVar4 = *(ulonglong *)(unsigned)pfVar7;
          in_dr4 = *(ulonglong *)(unsigned)pfVar7;
        }
        (vsp = ((unsigned long)(fr0_ - 76)), thunk_FUN_8c013dfc(a4,pfVar9,pfVar10,pfVar8));
        fVar17 = F32HI(lVar19);
        fVar20 = (float)in_dr4;
        cVar22 = '\0';
        fVar16 = F32HI(in_dr0) * in_fr15;
        in_dr0 = CONCAT44(fVar16,(int)in_dr0);
        *pfVar6 = fVar16;
        pfVar7 = pfVar7 + 1;
        pfVar6 = pfVar6 + 1;
      }
    }
    if ((uint)uVar11 <= (uint)uVar1) {
      uVar11 = uVar11 + 1;
    }
    a4_00 = uVar1 + 1;
    if (uVar11 == a4_00) {
      if ((float)(*(ushort *)(fr0_ - 0x48)) < fVar17) {
        (*(ushort *)(fr0_ - 0x48)) = (*(ushort *)(fr0_ - 0x48)) + 1;
        fVar17 = (float)(*(ushort *)(fr0_ - 0x48));
      }
      lVar19 = (ulonglong)(uint)(1.0 / fVar17) << 0x20;
      pfVar6 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30));
      pfVar7 = pfVar13;
      for (pfVar4 = pfVar12; cVar22 = '\0', pfVar4 < (float *)(unsigned)((int)pfVar14 + (int)pfVar12);
          pfVar4 = pfVar4 + 1) {
        fVar20 = *pfVar4;
        fVar17 = *pfVar7 - fVar20;
        if (fVar20 < fVar17) {
          fVar17 = *pfVar4;
        }
        uVar15 = (undefined4)in_dr0;
        *pfVar4 = fVar17 * F32HI(lVar19) + *pfVar4;
        (vsp = ((unsigned long)(fr0_ - 76)), thunk_FUN_8c013dfc(a4_00,pfVar9,pfVar10,pfVar8));
        in_dr0 = CONCAT44(fVar17 * in_fr15,uVar15);
        *pfVar6 = fVar17 * in_fr15;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      }
    }
  }
  else {
    uVar11 = 0;
  }
  if (cVar22 == '\0') {
    lVar19 = CONCAT44(0x3f800000,fVar20);
  }
  else {
    lVar19 = 0x358637bd3f800000;
  }
  if ((*(ushort *)(fr0_ - 0x48)) != 0) {
    fVar17 = F32HI(lVar19);
    if (cVar22 == '\0') {
      lVar19 = (ulonglong)(uint)fVar17 << 0x20;
    }
    pfVar8 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34));
    pfVar4 = (float *)(unsigned)((int)pfVar14 + (int)pfVar8);
    uVar3 = (ulonglong)lVar19 >> 0x20;
    fVar20 = *(float *)(unsigned)(ar4 + 0x68);
    pfVar10 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x50));
    pfVar9 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38));
    for (; pfVar8 < pfVar4; pfVar8 = pfVar8 + 1) {
      fVar16 = *pfVar10;
      in_dr0 = CONCAT44(fVar16,(int)in_dr0);
      pfVar10 = pfVar10 + 1;
      fVar18 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      *pfVar8 = fVar21 * (fVar16 * fVar18 + fVar17);
    }
    pfVar10 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38));
    pfVar9 = (float *)(unsigned)((int)pfVar14 + (int)pfVar10);
    lVar19 = CONCAT44(fVar17,0x358637bd);
    pfVar8 = ar6;
    for (; pfVar10 < pfVar9; pfVar10 = pfVar10 + 1) {
      fVar16 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      fVar17 = *pfVar12;
      in_dr0 = CONCAT44(fVar17,(int)in_dr0);
      pfVar12 = pfVar12 + 1;
      *pfVar10 = (fVar16 + 1e-06) / (fVar17 * fVar20 + 1e-06);
    }
    pfVar12 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34));
    pfVar9 = (float *)(unsigned)((int)pfVar14 + (int)pfVar12);
    pfVar10 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38));
    for (; cVar22 = '\0', pfVar12 < pfVar9; pfVar12 = pfVar12 + 1) {
      fVar17 = *pfVar10;
      in_dr0 = CONCAT44(fVar17,(int)in_dr0);
      pfVar10 = pfVar10 + 1;
      *pfVar12 = fVar17 * ((float)uVar3 - fVar21) + *pfVar12;
    }
  }
  if ((*(ushort *)(fr0_ - 0x48)) == 0) {
    pfVar12 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x50));
    pfVar14 = (float *)(unsigned)((int)pfVar14 + (int)pfVar12);
    for (; pfVar12 < pfVar14; pfVar12 = pfVar12 + 1) {
      if (cVar22 == '\0') {
        *pfVar12 = F32HI(lVar19);
      }
      else {
        *(longlong *)(unsigned)pfVar12 = lVar19;
      }
    }
  }
  else {
    pfVar12 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34));
    if (cVar22 == '\0') {
      fVar17 = *(float *)(unsigned)(ar4 + 0x6c);
    }
    else {
      fVar17 = (float)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x6c) >> 0x20);
    }
    pfVar10 = (float *)(unsigned)((int)pfVar14 + (int)pfVar12);
    pfVar14 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x50));
    for (; pfVar12 < pfVar10; pfVar12 = pfVar12 + 1) {
      if (cVar22 == '\0') {
        lVar19 = CONCAT44((int)((ulonglong)lVar19 >> 0x20),*pfVar12);
      }
      fVar20 = F32HI(lVar19);
      if ((float)lVar19 <= fVar20) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = fVar20 - fVar20 / (float)lVar19;
      }
      cVar22 = '\0';
      fVar21 = fVar21 * fVar21;
      lVar19 = CONCAT44(fVar20,fVar21);
      fVar20 = fVar17;
      if (fVar17 < fVar21) {
        fVar20 = fVar21;
      }
      *pfVar14 = fVar20;
      pfVar14 = pfVar14 + 1;
    }
  }
  uVar2 = *(ushort *)(unsigned)(ar4 + 0x58);
  for (pfVar9 = ar7; pfVar9 < ar7 + uVar2; pfVar9 = pfVar9 + 1) {
    (vsp = ((unsigned long)(fr0_ - 76)), thunk_FUN_8c013dfc(pfVar12,pfVar14,pfVar10,pfVar8));
    fVar17 = F32HI(in_dr0) * in_fr15;
    in_dr0 = CONCAT44(fVar17,(int)in_dr0);
    *pfVar9 = fVar17;
  }
  for (; pfVar9 < ar7 + iVar5; pfVar9 = pfVar9 + 1) {
    (vsp = ((unsigned long)(fr0_ - 76)), thunk_FUN_8c013dfc(pfVar12,pfVar14,pfVar10,pfVar8));
    fVar17 = F32HI(in_dr0) * in_fr15;
    in_dr0 = CONCAT44(fVar17,(int)in_dr0);
    *pfVar9 = fVar17;
  }
  cVar22 = '\0';
  (vsp = ((unsigned long)(fr0_ - 76)), thunk_FUN_8c013dfc(pfVar12,pfVar14,pfVar10,pfVar8));
  if (cVar22 == '\0') {
    *(int *)(unsigned)(*(unsigned *)(fr0_ + 0x00000000) = (unsigned)(unsigned long)((int)((ulonglong)in_dr0 >> 0x20)));
  }
  else {
    *((undefined8 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) = in_dr0;
  }
  *(ushort *)(unsigned)(ar4 + 0x4c) = uVar1;
  *(ushort *)(unsigned)(ar4 + 0x2a) = (*(ushort *)(fr0_ - 0x48));
  *(ushort *)(unsigned)(ar4 + 0x28) = uVar11;
  *(unsigned *)(unsigned)(ar4 + 0x44) = pfVar13;
  return 0x44;
}

__asm__(".globl _FUN_8c11bd6c\n.set _FUN_8c11bd6c, _FUN_8c11bd6c_def\n");
