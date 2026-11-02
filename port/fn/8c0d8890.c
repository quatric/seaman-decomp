#include "../decls.h"
undefined4 FUN_8c0d8890_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *ar5_00;
  undefined4 ar5_01;
  double dVar4;
  float fVar5;
  undefined4 in_fr14;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined1 auStack_18 [2];
  undefined1 uStack_16;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar5 = 0.2;
  ar5_00 = auStack_18;
  FUN_8c0b9d14(ar5,ar5_00,ar6,ar7);
  switch(uStack_16) {
  case 1:
  case 2:
  case 0xb:
  case 0xc:
    if (cVar8 == '\0') {
      fVar5 = 0.1;
    }
    break;
  default:
    if (cVar8 == '\0') {
      fVar5 = 0.2;
    }
    break;
  case 6:
  case 7:
    if (cVar8 == '\0') {
      fVar5 = 0.5;
    }
  }
  iVar1 = rand(ar5,ar5_00,ar6,ar7);
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 3.05573279121701e-310;
  }
  if (cVar7 == '\0') {
    bVar6 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20) < fVar5;
  }
  else {
    bVar6 = dVar4 / dVar4 < (double)CONCAT44(in_fr14,fVar5);
  }
  if (bVar6) {
    *(undefined4 *)(ar4 + 0x58) = 1;
    uVar2 = rand(ar5,ar5_00,ar6,ar7);
    ar5_01 = 0x3840;
    uVar3 = libgcc_divide_helper_0103d0(uVar2,0x3840,ar6,ar7);
    *(undefined4 *)(ar4 + 0x50) = uVar3;
    if (*(uint *)(ar4 + 0x50) < 0x1c20) {
      *(undefined4 *)(ar4 + 0x50) = 0x1c20;
    }
    iVar1 = rand(uVar2,ar5_01,ar6,ar7);
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
    }
    else {
      dVar4 = 3.05573279121701e-310;
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(0x44610000,fVar5);
    }
    else {
      dVar4 = 3.5336950296991835e+72;
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(0x44610000,fVar5);
    }
    else {
      dVar4 = 3.5336950296991835e+72;
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(0x4f000000,fVar5);
    }
    else {
      dVar4 = -9.046259633960061e+74;
    }
    if (cVar7 == '\0' && (float)((ulonglong)dVar4 >> 0x20) < SUB84(dVar4,0)) {
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0xcf800000,SUB84(dVar4,0));
      }
      else {
        dVar4 = 2.9939323502132253e-78;
      }
      if (cVar7 == '\0') {
        fVar5 = (float)((ulonglong)dVar4 >> 0x20);
        dVar4 = (double)CONCAT44(fVar5,SUB84(dVar4,0) + fVar5);
      }
      else {
        dVar4 = dVar4 + dVar4;
      }
    }
    if (cVar7 == '\0') {
      iVar1 = (int)SUB84(dVar4,0);
    }
    else {
      iVar1 = (int)dVar4;
    }
    uVar2 = 0x54;
    *(int *)(ar4 + 0x54) = iVar1;
  }
  else {
    uVar2 = 0x58;
    *(undefined4 *)(ar4 + 0x58) = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0d8890\n.set _FUN_8c0d8890, _FUN_8c0d8890_def\n");
