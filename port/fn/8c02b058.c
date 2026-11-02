#include "../decls.h"
undefined4 FUN_8c02b058_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  undefined4 in_fr1;
  double dVar3;
  float fVar4;
  undefined8 in_dr14;
  double dVar5;
  undefined8 in_xd14;
  char cVar6;
  char cVar7;
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar7 = '\0';
  cVar6 = '\0';
  (**(code **)(*(int *)(ar4 + 8) + 0x144))(ar4,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    dVar3 = (double)CONCAT44(0x43e10000,in_fr1);
  }
  else {
    dVar3 = 2.2923181056228e-311;
  }
  if (cVar6 == '\0') {
    fVar4 = (float)*(int *)(ar4 + 0x470) / (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar4 = SUB84((double)CONCAT44(uVar2,(float)*(int *)(ar4 + 0x470)) / dVar3,0);
  }
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x438),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x438);
  }
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),SUB84(dVar5,0) - 1.0);
  }
  else {
    dVar5 = dVar5 - (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
  }
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0x438) = SUB84(dVar5,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x438) = in_xd14;
  }
  ar5_00 = *(undefined4 *)(ar4 + 0x478);
  uVar2 = *(undefined4 *)(ar4 + 0x47c);
  s_CAnimal_ChangeBodyTexture_02af96(ar4,uVar2,ar6,ar7);
  *(int *)(ar4 + 0x474) = *(int *)(ar4 + 0x474) + 1;
  FUN_8c023df4(ar4 + 0x480,uVar2,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 8) + 0x34))(ar4,uVar2,ar6,ar7);
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0x438) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x438) = dVar5;
  }
  s_CAnimal_ChangeBodyTexture_02af96(ar4,ar5_00,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x470);
  *(int *)(ar4 + 0x470) = iVar1 + 1;
  if (iVar1 < 0x1c2) {
    uVar2 = 0x474;
    *(int *)(ar4 + 0x474) = *(int *)(ar4 + 0x474) + -1;
  }
  else {
    FUN_8c023df4(ar4 + 0x480,ar5_00,ar6,ar7);
    *(undefined4 *)(ar4 + 0x470) = 0;
    *(undefined4 *)(ar4 + 0x474) = 0;
    uVar2 = s_CAnimal_ChangeBodyTexture_02af96(ar4,*(undefined4 *)(ar4 + 0x47c),ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02b058\n.set _FUN_8c02b058, _FUN_8c02b058_def\n");
