#include "../decls.h"
undefined4 FUN_8c0d82f0_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  undefined8 uVar2;
  double dVar3;
  undefined8 in_dr4;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined8 in_xd0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  fVar4 = (float)((ulonglong)in_dr4 >> 0x20);
  if (DAT_8c437c98 == '\0') {
    _DAT_8c437c94 = fVar4 + 7980.0;
    in_fr1 = 0x45f96000;
    _DAT_8c437c98 = CONCAT31(DAT_8c437c98_1,1);
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
  dVar6 = (double)CONCAT44(fVar4,fVar5 / 4500.0);
  uVar2 = CONCAT44(0x3f800000,in_fr1);
  if (1.0 < fVar5 / 4500.0) {
    dVar6 = (double)CONCAT44(fVar4,0x3f800000);
  }
  Class_12c3a4_m0_1029d0(0x8c437b28,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    _DAT_8c437c9c = CONCAT44(_DAT_8c437ca0,(int)((ulonglong)uVar2 >> 0x20));
    dVar3 = (double)CONCAT44(0x45034000,(int)uVar2);
  }
  else {
    dVar3 = -1.3608465208426776e-249;
    _DAT_8c437c9c = uVar2;
  }
  fVar4 = (float)((ulonglong)dVar6 >> 0x20);
  if (cVar8 == '\0') {
    bVar7 = (float)((ulonglong)dVar3 >> 0x20) < fVar4;
  }
  else {
    bVar7 = dVar3 < dVar6;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(0x45034000,SUB84(dVar3,0));
    }
    else {
      dVar3 = -1.3608465208426776e-249;
    }
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(fVar4 - (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - dVar3;
    }
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(0x45034000,(int)_DAT_8c437c9c);
    }
    else {
      dVar3 = -1.3608465208426776e-249;
    }
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                               SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + dVar3 * dVar3;
    }
    fVar4 = (float)((ulonglong)dVar6 >> 0x20);
    _DAT_8c437c90 = fVar4;
    if (cVar9 != '\0') {
      _DAT_8c437c90 = SUB84(dVar6,0);
      _DAT_8c437c94 = fVar4;
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(0x45034000,(int)_DAT_8c437c9c);
    }
    else {
      dVar6 = -1.3608465208426776e-249;
      in_xd0 = _DAT_8c437c9c;
    }
    if (cVar8 == '\0') {
      _DAT_8c437c90 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      _DAT_8c437c90 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar9 != '\0') {
      _DAT_8c437c90 = (float)in_xd0;
      _DAT_8c437c94 = (float)((ulonglong)in_xd0 >> 0x20);
    }
  }
  uVar1 = FUN_8c235f84(0x8c43786c,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d82f0\n.set _FUN_8c0d82f0, _FUN_8c0d82f0_def\n");
