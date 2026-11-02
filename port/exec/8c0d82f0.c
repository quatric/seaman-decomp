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
undefined4 FUN_8c0d82f0_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d82f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr1 = 0;
  undefined8 uVar2;
  double dVar3;
  undefined8 in_dr4 = 0;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined8 in_xd0 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  fVar4 = F32HI(in_dr4);
  if ((*(undefined1 *)(unsigned)0x8c437c98) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c94) = fVar4 + 7980.0;
    in_fr1 = 0x45f96000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c98) = CONCAT31((*(undefined1 *)(unsigned)0x8c437c98),1);
  }
  if (ar5 < 36000) {
    fVar5 = (float)(int)ar5;
    if (fVar5 < 0.0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
  }
  else {
    fVar5 = (float)(int)(72000 - ar5);
    if (fVar5 < 0.0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
  }
  dVar6 = CONCAT44D(fVar4,fVar5 / 4500.0);
  uVar2 = CONCAT44(0x3f800000,in_fr1);
  if (1.0 < fVar5 / 4500.0) {
    dVar6 = CONCAT44D(fVar4,0x3f800000);
  }
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12c3a4_m0_1029d0(0x8c437b28,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c9c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437ca0),(int)((ulonglong)uVar2 >> 0x20));
    dVar3 = CONCAT44D(0x45034000,(int)uVar2);
  }
  else {
    dVar3 = -1.3608465208426776e-249;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c9c) = uVar2;
  }
  fVar4 = F32HI(dVar6);
  if (cVar8 == '\0') {
    bVar7 = F32HI(dVar3) < fVar4;
  }
  else {
    bVar7 = dVar3 < dVar6;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(0x45034000,SUB84(dVar3,0));
    }
    else {
      dVar3 = -1.3608465208426776e-249;
    }
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(fVar4 - F32HI(dVar3),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - dVar3;
    }
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(0x45034000,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c437c9c));
    }
    else {
      dVar3 = -1.3608465208426776e-249;
    }
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) +
                               F32LO(dVar3) * F32HI(dVar3),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + dVar3 * dVar3;
    }
    fVar4 = F32HI(dVar6);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c90) = fVar4;
    if (cVar9 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c90) = SUB84(dVar6,0);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c94) = fVar4;
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(0x45034000,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c437c9c));
    }
    else {
      dVar6 = -1.3608465208426776e-249;
      in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c9c);
    }
    if (cVar8 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c90) = F32LO(dVar6) * F32HI(dVar6);
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c90) = SUB84(dVar6 * dVar6,0);
    }
    if (cVar9 != '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c90) = (float)in_xd0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c94) = F32HI(in_xd0);
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235f84(0x8c43786c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0d82f0\n.set _FUN_8c0d82f0, _FUN_8c0d82f0_def\n");
