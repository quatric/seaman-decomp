#include "../decls.h"
undefined4 FUN_8c0c6a4c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  int ar5_00;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar4_00 = ar5;
  ar5_00 = ar5;
  FUN_8c09d644(ar5,ar5,ar6,ar7);
  for (iVar2 = 1; iVar2 < 0xc; iVar2 = iVar2 + 1) {
    *(undefined4 *)(iVar2 * 0x80 + ar5) = 0xf;
    iVar1 = rand(ar4_00,ar5_00,ar6,ar7);
    ar4_00 = ar5 + iVar2 * 0x80;
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
    }
    else {
      dVar4 = 512.0001354217529;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0x40800000,fVar3);
    }
    else {
      dVar4 = 2.9939312000558264e-78;
    }
    if (cVar6 == '\0') {
      uVar5 = (undefined1)(int)(SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      uVar5 = (undefined1)(int)(dVar4 * dVar4);
    }
    *(undefined1 *)(ar4_00 + 0x6c) = uVar5;
  }
  return 0xc;
}

__asm__(".globl _FUN_8c0c6a4c\n.set _FUN_8c0c6a4c, _FUN_8c0c6a4c_def\n");
