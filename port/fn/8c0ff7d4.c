#include "../decls.h"
int FUN_8c0ff7d4_def(int *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  undefined1 *ar5_00;
  float fVar3;
  code *pcVar5;
  double dVar4;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(auStack_1c,ar5,ar6,ar7);
  iVar1 = *ar4;
  if (iVar1 == 0) {
    piVar2 = ar4 + 2;
    if (cVar7 == '\0') {
      *piVar2 = -0x3de00000;
    }
    else {
      piVar2[0] = -0x3de00000;
      piVar2[1] = -0x73fc9678;
    }
    FUN_8c036988(ar4[1],ar5_00,ar6,ar7);
    FUN_8c078fb8(ar4[1],ar5_00,ar6,ar7);
    (**(code **)(*(int *)(ar4[1] + 8) + 0x6c))(ar4[1],ar5_00,ar6,ar7);
    *ar4 = 1;
  }
  else if (iVar1 == 1) {
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0x41200000,ar4[2]);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 2);
      dVar4 = -1.3973411959191777e-250;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      ar4[2] = (int)fVar3;
    }
    else {
      *(undefined8 *)(ar4 + 2) = in_xd0;
    }
    iVar1 = FUN_8c1001e0(ar5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      *ar4 = 3;
    }
    if (cVar7 == '\0') {
      fVar3 = (float)ar4[2];
      pcVar5 = (code *)0x41700000;
    }
    else {
      fVar3 = 15.0;
      pcVar5 = FUN_8c2595aa;
    }
    if (cVar6 != '\0' || (float)(uint)pcVar5 <= fVar3) {
      piVar2 = ar4 + 2;
      if (cVar7 == '\0') {
        *piVar2 = 0x41700000;
      }
      else {
        piVar2[0] = 0x41700000;
        piVar2[1] = -0x73da6a56;
      }
      *ar4 = 2;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_8c1001e0(ar5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      *ar4 = 3;
    }
  }
  else if (iVar1 == 3) {
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0x41200000,ar4[2]);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 2);
      dVar4 = -1.3973411959191777e-250;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      ar4[2] = (int)fVar3;
      fVar3 = (float)ar4[2];
      pcVar5 = (code *)0xc2200000;
    }
    else {
      *(undefined8 *)(ar4 + 2) = in_xd0;
      fVar3 = -40.0;
      pcVar5 = FUN_8c036988;
    }
    if (cVar6 != '\0' || fVar3 <= (float)(uint)pcVar5) {
      (**(code **)(*(int *)(ar4[1] + 8) + 0x6c))(ar4[1],ar5_00,ar6,ar7);
      *ar4 = 4;
      ar5_00 = auStack_2c;
      FUN_8c2595aa(0,ar5_00,ar6,ar7);
    }
  }
  (**(code **)(*(int *)(ar4[1] + 8) + 0x1c))(ar4[1],ar5_00,ar6,ar7);
  iVar1 = *ar4;
  Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
  return iVar1;
}

__asm__(".globl _FUN_8c0ff7d4\n.set _FUN_8c0ff7d4, _FUN_8c0ff7d4_def\n");
