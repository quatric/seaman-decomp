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
undefined4 FUN_8c212946_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c212946";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint a4;
  uint a5;
  undefined4 extraout_fr1 = 0;
  undefined4 extraout_fr1_00 = 0;
  undefined4 extraout_fr1_01 = 0;
  undefined4 extraout_fr1_02 = 0;
  undefined4 extraout_fr1_03 = 0;
  undefined4 extraout_fr1_04 = 0;
  undefined4 extraout_fr1_05 = 0;
  undefined4 extraout_fr1_06 = 0;
  undefined4 extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  undefined4 extraout_fr0_01 = 0;
  float extraout_fr0_02 = 0;
  undefined4 extraout_fr0_03 = 0;
  float extraout_fr0_04 = 0;
  float extraout_fr0_05 = 0;
  float extraout_fr0_06 = 0;
  float extraout_fr3 = 0;
  float fVar2;
  undefined4 extraout_fr2 = 0;
  undefined4 uVar3;
  double in_dr4 = 0;
  double dVar4;
  undefined4 in_fr13 = 0;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double in_dr14 = 0;
  double in_xd4 = 0;
  double in_xd14 = 0;
  double dVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c212898(ar4,ar4 + 8,ar4 + 0x10,ar7));
  uVar5 = extraout_fr1;
  if (cVar11 == '\0') {
    uVar5 = in_fr13;
  }
  dVar7 = CONCAT44D(extraout_fr0,uVar5);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c212898(ar4,ar4 + 0x10,ar4 + 0x18,ar7));
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D(F32HI(dVar7) + extraout_fr0_00,SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 + CONCAT44D(extraout_fr0_00,extraout_fr1_00);
  }
  dVar8 = dVar7;
  if (cVar11 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)(D2U(dVar7) >> 0x20));
    dVar8 = in_xd14;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c212898(ar5,ar5 + 8,ar5 + 0x10,ar7));
  uVar5 = extraout_fr1_01;
  if (cVar11 == '\0') {
    uVar5 = SUB84(dVar7,0);
  }
  dVar7 = CONCAT44D(extraout_fr0_01,uVar5);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c212898(ar5,ar5 + 0x10,ar5 + 0x18,ar7));
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D(F32HI(dVar7) + extraout_fr0_02,SUB84(dVar7,0));
  }
  else {
    dVar7 = dVar7 + CONCAT44D(extraout_fr0_02,extraout_fr1_02);
  }
  dVar4 = dVar7;
  if (cVar11 == '\0') {
    in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),(int)(D2U(dVar7) >> 0x20));
    dVar4 = in_xd4;
  }
  fVar2 = F32LO(in_dr4);
  if (cVar10 == '\0') {
    bVar9 = SUB84(in_dr14,0) < fVar2;
  }
  else {
    bVar9 = in_dr14 < in_dr4;
  }
  if (bVar9) {
    a4 = ar4;
    a5 = ar5;
    if (cVar11 == '\0') {
      dVar4 = CONCAT44D(fVar2,fVar2);
    }
  }
  else {
    a4 = ar5;
    a5 = ar4;
    dVar4 = dVar8;
    if (cVar11 == '\0') {
      dVar4 = CONCAT44D(SUB84(in_dr14,0),fVar2);
    }
  }
  fVar2 = extraout_fr3;
  if (cVar11 == '\0') {
    fVar2 = 1.025;
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)(D2U(dVar4) >> 0x20));
  }
  uVar1 = a4 + 0x20;
  if (cVar10 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),F32LO(in_dr14) * fVar2);
  }
  else {
    in_dr14 = in_dr14 * CONCAT44D(extraout_fr2,fVar2);
  }
  while( true ) {
    if (uVar1 <= a4) {
      return 0;
    }
    uVar3 = SUB84(dVar4,0);
    uVar6 = SUB84(dVar7,0);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c212898(a4,a5,a5 + 8,ar7));
    uVar5 = extraout_fr1_03;
    if (cVar11 == '\0') {
      uVar5 = uVar6;
    }
    dVar7 = CONCAT44D(extraout_fr0_03,uVar5);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c212898(a4,a5 + 8,a5 + 0x10,ar7));
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) + extraout_fr0_04,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + CONCAT44D(extraout_fr0_04,extraout_fr1_04);
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c212898(a4,a5 + 0x10,a5 + 0x18,ar7));
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) + extraout_fr0_05,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + CONCAT44D(extraout_fr0_05,extraout_fr1_05);
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c212898(a4,a5 + 0x18,a5,ar7));
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) + extraout_fr0_06,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + CONCAT44D(extraout_fr0_06,extraout_fr1_06);
    }
    dVar4 = dVar7;
    if (cVar11 == '\0') {
      dVar4 = CONCAT44D((int)(D2U(dVar7) >> 0x20),uVar3);
    }
    if (cVar10 == '\0') {
      bVar9 = F32HI(dVar4) < SUB84(in_dr14,0);
    }
    else {
      bVar9 = dVar4 < in_dr14;
    }
    if (bVar9) break;
    a4 = a4 + 8;
  }
  return 1;
}

__asm__(".globl _FUN_8c212946\n.set _FUN_8c212946, _FUN_8c212946_def\n");
