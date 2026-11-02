#include "../decls.h"
undefined4 FUN_8c031bb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fr1;
  float fVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double in_dr4;
  double in_xd0;
  undefined8 in_xd14;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
  *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
  uVar4 = (ulonglong)in_fr1;
  uVar1 = ar5;
  uVar2 = ar6;
  if (0.0 < fVar3) {
    *(float *)(ar4 + 0x24) = fVar3;
  }
  else {
    FUN_8c032ab0(ar4,ar5,ar6,ar7);
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0x24) = (int)(uVar4 >> 0x20);
    }
    else {
      *(ulonglong *)(ar4 + 0x24) = uVar4;
    }
  }
  dVar5 = (double)(uVar4 & 0xffffffff);
  if (cVar8 == '\0') {
    bVar7 = 0.0 < SUB84(in_dr4,0);
  }
  else {
    bVar7 = dVar5 < in_dr4;
  }
  if (bVar7) {
    ar6 = uVar1;
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x30) = SUB84(in_dr4,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = in_xd14;
    }
  }
  else {
    FUN_8c022fc0(ar5,ar6,uVar2,ar7);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),(int)((ulonglong)dVar5 >> 0x20));
      dVar5 = in_xd0;
    }
    else {
      dVar6 = *(double *)(ar4 + 0x24);
    }
    if (cVar8 == '\0') {
      fVar3 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x30) = fVar3;
    }
    else {
      *(double *)(ar4 + 0x30) = dVar5;
    }
  }
  FUN_8c031c64(ar4,ar6,uVar2,ar7);
  *(undefined4 *)(ar4 + 0x40) = 1;
  return 0x40;
}

__asm__(".globl _FUN_8c031bb4\n.set _FUN_8c031bb4, _FUN_8c031bb4_def\n");
