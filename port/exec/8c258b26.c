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
undefined4 FUN_8c258b26_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c258b26";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 ar5_00;
  undefined4 *ar6_00;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr5 = 0;
  undefined4 uVar9;
  double dVar8;
  float fVar10;
  float fVar11;
  double in_dr6 = 0;
  undefined4 in_fr9 = 0;
  double in_dr14 = 0;
  undefined4 uVar12;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  byte in_IMASK = 0;
  byte in_S = 0;
  byte extraout_S = 0;
  byte extraout_T = 0;
  byte bVar13;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
  cVar14 = '\0';
  ar6_00 = ((undefined4 *)(unsigned)0x8c277c6c);
  ar5_00 = 0x100010;
  (*(undefined4 *)(unsigned)(unsigned)0x8c277c6c) = 0;
  if (ar4 < 0) {
    ar4 = 100;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad18) = 0x20;
    (*(undefined4 *)(unsigned)(unsigned)0x8c277c6c) = 1;
LAB_8c258b82:
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aacc0) = 0x100010;
  }
  else {
    if (ar6 < 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad18) = 0x22;
      ar6 = 100;
LAB_8c258b80:
      (*(undefined4 *)(unsigned)(unsigned)0x8c277c6c) = 2;
      goto LAB_8c258b82;
    }
    if ((*(int *)(fr0_ + 0x00000000)) < 0) {
      (*(int *)(fr0_ + 0x00000000)) = 100;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad18) = 0x24;
      goto LAB_8c258b80;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aacc0) = 0x100000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad18) = 0;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c277b2c) = ar5 + ar4 + ar6 + ar7 + (*(int *)(fr0_ + 0x00000000));
  iVar2 = ar7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c277ad0) = ar4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c277ad4) = ar5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c277ad8) = ar6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c277adc) = ar7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c277ae0) = (*(int *)(fr0_ + 0x00000000));
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c277b30) == 0) {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aace0) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c((*(undefined4 *)(unsigned)(unsigned)0x8c4aace0) & 0x8fffffff,0x100010,((undefined4 *)(unsigned)0x8c277c6c),ar7));
    }
    fVar3 = (float)(*(undefined4 *)(unsigned)(unsigned)0x8c277b2c);
    dVar5 = (double)(ulonglong)(uint)fVar3;
    dVar8 = in_xd2;
    if (cVar15 == '\0') {
      dVar8 = CONCAT44D(fVar3,in_fr5);
    }
    uVar9 = (undefined4)(D2U(dVar8) >> 0x20);
    uVar12 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    if (cVar14 != '\0' || 0.0 <= fVar3) {
      if (cVar15 == '\0') {
        in_dr14 = CONCAT44D(uVar12,uVar9);
      }
    }
    else {
      if (cVar15 == '\0') {
        in_dr14 = CONCAT44D(uVar12,uVar9);
        dVar5 = 6.58979161647419e-315;
      }
      else {
        in_xd2 = -2.7677198172564077e-250;
      }
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) + F32LO(dVar5));
      }
      else {
        in_dr14 = in_dr14 + dVar5;
      }
    }
    uVar9 = 0;
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b2c) * 4 + 0x160;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aace0) = (vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(uVar1,ar5_00,ar6_00,iVar2));
    in_fr5 = SUB84(dVar8,0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aace0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aace0) | 0x20000000;
    in_S = extraout_S;
    bVar13 = extraout_T;
  }
  else {
    uVar9 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b30);
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c277b34) < (*(undefined4 *)(unsigned)(unsigned)0x8c277b2c) * 4 + 0x160U) {
      fVar3 = (float)(*(undefined4 *)(unsigned)(unsigned)0x8c277b2c);
      bVar13 = fVar3 < 0.0;
      if ((bool)bVar13) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      in_dr14 = CONCAT44D(uVar9,fVar3);
      uVar9 = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aace0) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aace4) = 0;
      goto LAB_8c258cae;
    }
    fVar3 = (float)(*(undefined4 *)(unsigned)(unsigned)0x8c277b2c);
    bVar13 = fVar3 < 0.0;
    if ((bool)bVar13) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    in_dr14 = CONCAT44D(uVar9,fVar3);
    uVar9 = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aace0) = (*(undefined4 *)(unsigned)(unsigned)0x8c277b30);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aace4) = (*(undefined4 *)(unsigned)(unsigned)0x8c277b2c) + 0x58;
LAB_8c258cae:
  if (cVar15 == '\0') {
    dVar8 = CONCAT44D(0x42c80000,in_fr5);
  }
  else {
    dVar8 = -1.862832998689489e-249;
  }
  fVar3 = F32HI(dVar8);
  if (cVar14 == '\0') {
    dVar5 = CONCAT44D(uVar9,(float)ar4 * fVar3);
  }
  else {
    dVar5 = CONCAT44D(uVar9,(float)ar4) * dVar8;
  }
  dVar7 = in_xd2;
  if (cVar15 == '\0') {
    dVar8 = CONCAT44D(fVar3,SUB84(dVar5,0));
    dVar7 = in_xd4;
  }
  fVar3 = F32LO(in_dr14);
  if (cVar14 == '\0') {
    fVar10 = F32HI(dVar8);
    dVar8 = CONCAT44D(fVar10,F32LO(dVar8) / fVar3);
    fVar4 = (float)ar5 * fVar10;
  }
  else {
    dVar8 = dVar8 / in_dr14;
    fVar10 = F32HI(dVar8);
    fVar4 = SUB84(CONCAT44D((int)(D2U(dVar5) >> 0x20),(float)ar5) * dVar8,0);
  }
  dVar5 = in_xd2;
  if (cVar15 == '\0') {
    dVar5 = CONCAT44D(fVar4,in_fr9);
  }
  if (cVar14 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) / fVar3,SUB84(dVar5,0));
    dVar6 = CONCAT44D((float)ar7,(float)ar6 * fVar10);
  }
  else {
    dVar5 = dVar5 / in_dr14;
    dVar6 = (double)ar7 * dVar8;
  }
  if (cVar15 == '\0') {
    in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar6,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aace8) = SUB84(dVar8,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aace8) = SUB84(dVar7,0);
    in_xd6 = in_xd2;
  }
  fVar4 = F32HI(dVar6);
  if (cVar14 == '\0') {
    fVar11 = F32LO(in_dr6) / fVar3;
    dVar7 = CONCAT44D(fVar4 * fVar10,(float)(*(int *)(fr0_ + 0x00000000)) * fVar10);
  }
  else {
    fVar11 = SUB84(in_dr6 / in_dr14,0);
    dVar7 = CONCAT44D(fVar4,(float)(*(int *)(fr0_ + 0x00000000))) * dVar8 * dVar8;
  }
  dVar6 = dVar7;
  if (cVar15 == '\0') {
    dVar6 = CONCAT44D((int)(D2U(dVar7) >> 0x20),fVar11);
  }
  if (cVar14 == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar6) / fVar3,SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 / in_dr14;
  }
  if (cVar15 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aacec) = (undefined4)(D2U(dVar5) >> 0x20);
    in_xd2 = CONCAT44D(SUB84(dVar7,0),SUB84(dVar8,0));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aacec) = SUB84(dVar5,0);
  }
  if (cVar14 == '\0') {
    dVar8 = CONCAT44D(F32HI(in_xd2) / fVar3,SUB84(in_xd2,0));
  }
  else {
    dVar8 = in_xd2 / in_dr14;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aacf4) = SUB84(dVar6,0);
  uVar9 = (undefined4)(D2U(dVar8) >> 0x20);
  if (cVar15 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aacf0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aacf4);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aacf4) = (int)(D2U(dVar6) >> 0x20);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aacf8) = uVar9;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aacf0) = SUB84(in_xd6,0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aacf8) = SUB84(dVar8,0);
    (*(uint *)(unsigned)0x8c4aacfc) = uVar9;
  }
  ({ unsigned long ri0_ = (unsigned long)(
             (((uint)bVar13 | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); pvr_2580e4(uVar1,ar5_00,ar6_00,iVar2); });
  (vsp = ((unsigned long)(fr0_ - 0)), s_HARDWARE_211130(((undefined1 *)(unsigned)0x8c4aacbc),ar5_00,ar6_00,iVar2));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6a8) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b49e(0,ar5_00,ar6_00,iVar2));
  return (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6a8);
}

__asm__(".globl _FUN_8c258b26\n.set _FUN_8c258b26, _FUN_8c258b26_def\n");
