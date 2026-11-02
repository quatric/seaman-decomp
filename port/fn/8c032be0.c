#include "../decls.h"
undefined4 * FUN_8c032be0_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int ar5_00;
  float in_fr1;
  float fVar3;
  float fVar4;
  double dVar2;
  float fVar5;
  undefined8 in_dr4;
  float fVar6;
  double dVar7;
  undefined4 in_fr15;
  double dVar8;
  undefined8 in_xd0;
  bool bVar9;
  undefined4 in_PR;
  char cVar10;
  char cVar11;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  cVar11 = '\0';
  cVar10 = '\0';
  fVar6 = (float)((ulonglong)in_dr4 >> 0x20);
  dVar8 = (double)CONCAT44(fVar6,in_fr15);
  fVar5 = (float)in_dr4;
  fVar3 = fVar5 - fVar6;
  puVar1 = (undefined4 *)0xc;
  if (fVar6 != fVar5) {
    ar5_00 = ar5;
    fVar4 = fVar3;
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    fStack_28 = fVar4;
    fStack_20 = in_fr1;
    fVar6 = fVar4;
    if (cVar11 == '\0') {
      fStack_28 = fVar3;
      fStack_20 = fVar4;
      fVar6 = fStack_1c;
    }
    fStack_1c = fVar6;
    FUN_8c032ab0(ar4,ar5_00,ar6,ar7);
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(fStack_20,fVar5);
      fStack_24 = fVar4;
    }
    else {
      dVar7 = (double)CONCAT44(fStack_1c,fVar4);
      fStack_24 = in_fr1;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + fVar4,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + (double)CONCAT44(fVar4,in_fr1);
    }
    if (cVar11 == '\0') {
      dVar2 = (double)CONCAT44(0x40000000,in_fr1);
    }
    else {
      dVar2 = 5.377642816887133e-19;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / (float)((ulonglong)dVar2 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar2;
    }
    if (cVar11 == '\0') {
      dVar2 = (double)CONCAT44(0x3c23d70a,(float)(ar5 + -0x32));
    }
    else {
      dVar2 = 2.9939311649880902e-78;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar11 == '\0') {
      dVar2 = (double)CONCAT44(fStack_28,fVar3);
    }
    else {
      dVar2 = (double)CONCAT44(fStack_24,fStack_28);
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar2 * dVar2,0);
    }
    fStack_1c = fVar3;
    uStack_18 = in_PR;
    if (cVar11 != '\0') {
      fStack_1c = (float)in_xd0;
      uStack_18 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    puVar1 = (undefined4 *)0x18;
    if (cVar11 == '\0') {
      dVar2 = (double)CONCAT44(fStack_1c,fVar3);
    }
    else {
      dVar2 = (double)CONCAT44(uStack_18,fStack_1c);
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + (float)((ulonglong)dVar2 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + dVar2;
    }
    fVar3 = (float)((ulonglong)dVar7 >> 0x20);
    if (cVar10 != '\0' || fVar3 <= SUB84(dVar7,0)) {
      if (cVar10 == '\0') {
        bVar9 = fVar3 < (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        bVar9 = dVar7 < dVar8;
      }
      if (bVar9) {
        puVar1 = &DAT_8c032cb0;
      }
    }
    else {
      puVar1 = &DAT_8c032cb0;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c032be0\n.set _FUN_8c032be0, _FUN_8c032be0_def\n");
