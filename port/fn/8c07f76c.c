#include "../decls.h"
uint FUN_8c07f76c_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *ar6_00;
  float fVar5;
  ulonglong uVar6;
  code *pcVar9;
  double dVar7;
  undefined8 uVar8;
  bool bVar10;
  char cVar11;
  char cVar12;
  code *pcStack_54;
  code *pcStack_50;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uStack_c = 1;
  uVar6 = (ulonglong)(uint)*(float *)(ar4 + 0x130);
  if (*(float *)(ar4 + 0x130) < 0.0) {
    uVar4 = 0;
    ar6_00 = ar6;
    iVar3 = FUN_8c031de8(ar4,0,ar6,ar7);
    if (iVar3 == 0) {
      *(undefined4 *)(ar4 + 0x2a0) = 2;
    }
    uVar2 = (uint)(iVar3 != 0);
    FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_20);
    FUN_8c022dac(ar4 + 0x14,auStack_20,ar6_00,ar7);
    pcStack_50 = (code *)(uVar6 >> 0x20);
    if (cVar12 == '\0') {
      pcVar9 = (code *)0x40000000;
      pcStack_54 = pcStack_50;
    }
    else {
      pcStack_50 = (code *)uVar6;
      pcStack_54 = (code *)0x40000000;
      pcVar9 = Vec3_dtor;
    }
    bVar1 = cVar11 == '\0';
    bVar10 = (float)(uint)pcVar9 < (float)(uint)pcStack_54;
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7);
    if (bVar1 && bVar10) {
      FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_30);
      Vec3_scale(auStack_30,&DAT_8c1379c4,ar6_00,ar7,auStack_40);
      FUN_8c023aa0(ar4 + 0x14,auStack_40,ar6_00,ar7);
      Vec3_dtor(auStack_40,0xffffffff,ar6_00,ar7);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7);
      Vec3_length(ar4 + 0x14,uVar4,ar6_00,ar7);
    }
    iVar3 = ar5;
    (**(code **)(*ar6 + 0x128))(ar6,ar5,ar6_00,ar7);
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
      pcStack_54 = pcVar9;
    }
    else {
      dVar7 = -7.932637895862283e-251;
      pcStack_50 = pcVar9;
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(pcStack_54,fVar5);
    }
    else {
      dVar7 = (double)CONCAT44(pcStack_50,pcStack_54);
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar12 == '\0') {
      uVar8 = CONCAT44(*(undefined4 *)(ar5 + 4),fVar5);
    }
    else {
      uVar8 = *(undefined8 *)(ar5 + 4);
    }
    if (cVar11 != '\0' || (float)((ulonglong)uVar8 >> 0x20) <= (float)uVar8) {
      FUN_8c031748(ar4,iVar3,ar6_00,ar7);
    }
  }
  else {
    uVar2 = FUN_8c031de8(ar4,8,ar6,ar7);
  }
  FUN_8c031c74(ar4,ar5,ar5,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c07f76c\n.set _FUN_8c07f76c, _FUN_8c07f76c_def\n");
