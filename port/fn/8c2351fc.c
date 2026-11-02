#include "../decls.h"
undefined4 FUN_8c2351fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double in_dr2;
  undefined4 uVar3;
  undefined8 in_dr4;
  undefined4 in_fr14;
  double in_xd2;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  fVar2 = (float)((ulonglong)in_dr4 >> 0x20);
  uVar1 = *(undefined4 *)(&DAT_8c277ab8 + ar4 * 4);
  FUN_8c237124(uVar1,ar5,ar6,ar7,ar4);
  uVar3 = (undefined4)in_dr4;
  if (ar4 == 0) {
    uVar1 = FUN_8c236510(uVar1,ar5,ar6,ar7);
  }
  else {
    uVar1 = FUN_8c2365e2(uVar1,ar5,ar6,ar7);
  }
  if (cVar5 == '\0') {
    _DAT_8c4aa3e0 = (double)CONCAT44(0xbf800000,uVar3);
    uVar3 = 0xbf800000;
    bVar4 = fVar2 < -1.0;
  }
  else {
    _DAT_8c4aa3e0 = -(double)CONCAT44(0x3f800000,uVar3);
    uVar3 = (undefined4)((ulonglong)_DAT_8c4aa3e0 >> 0x20);
    bVar4 = (double)CONCAT44(in_fr14,fVar2) < _DAT_8c4aa3e0;
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),uVar3);
      _DAT_8c4aa3e0 = in_xd2;
    }
    if (cVar5 == '\0') {
      fVar2 = SUB84(in_dr2,0) / fVar2;
    }
    else {
      fVar2 = SUB84(in_dr2 / (double)CONCAT44(in_fr14,fVar2),0);
    }
  }
  else {
    fVar2 = 1.0;
    _DAT_8c4aa3e0 = in_xd2;
  }
  if (cVar6 == '\0') {
    _DAT_8c4aa3e0 = (double)CONCAT44(uVar1,fVar2);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c2351fc\n.set _FUN_8c2351fc, _FUN_8c2351fc_def\n");
