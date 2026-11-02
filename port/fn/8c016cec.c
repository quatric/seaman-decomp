#include "../decls.h"
float * FUN_8c016cec_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined8 *ar7,int *s0)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 in_xd0;
  undefined4 in_PR;
  char cVar6;
  char cVar7;
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uVar5;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uStack_10 = in_PR;
  (**(code **)(*s0 + 0x34))(s0,auStack_20,ar6,ar7);
  if (cVar7 == '\0') {
    uVar5 = *(undefined4 *)ar5;
    *(undefined4 *)(ar4 + 0x30) = uVar5;
    *(undefined4 *)(ar4 + 4) = uVar5;
    uVar5 = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 0x34) = uVar5;
    *(undefined4 *)(ar4 + 8) = uVar5;
    uVar5 = *(undefined4 *)(ar5 + 1);
    *(undefined4 *)(ar4 + 0x38) = uVar5;
    *(undefined4 *)(ar4 + 0xc) = uVar5;
    *(undefined4 *)(ar4 + 0x20) = *(undefined4 *)ar7;
    *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)((int)ar7 + 4);
    *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar7 + 1);
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),uStack_14);
  }
  else {
    uVar3 = *ar5;
    *(undefined8 *)(ar4 + 0x30) = uVar3;
    *(undefined8 *)(ar4 + 4) = uVar3;
    uVar3 = *(undefined8 *)((int)ar5 + 4);
    *(undefined8 *)(ar4 + 0x34) = uVar3;
    *(undefined8 *)(ar4 + 8) = uVar3;
    uVar3 = ar5[1];
    *(undefined8 *)(ar4 + 0x38) = uVar3;
    *(undefined8 *)(ar4 + 0xc) = uVar3;
    *(undefined8 *)(ar4 + 0x20) = *ar7;
    *(undefined8 *)(ar4 + 0x24) = *(undefined8 *)((int)ar7 + 4);
    *(undefined8 *)(ar4 + 0x28) = ar7[1];
    in_xd0 = CONCAT44(uStack_10,uStack_14);
    dVar4 = *(double *)(ar4 + 0x28);
  }
  pfVar1 = (float *)(ar4 + 0x3c);
  if (cVar6 == '\0') {
    fVar2 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar7 == '\0') {
    *pfVar1 = fVar2;
  }
  else {
    *(undefined8 *)pfVar1 = in_xd0;
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c016cec\n.set _FUN_8c016cec, _FUN_8c016cec_def\n");
