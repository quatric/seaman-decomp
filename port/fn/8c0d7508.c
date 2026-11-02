#include "../decls.h"
undefined4 * FUN_8c0d7508_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 ar6_00;
  float fVar3;
  double dVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  undefined4 auStack_c [2];
  
  cVar7 = '\0';
  cVar6 = '\0';
  auStack_c[0] = 0xffffffff;
  puVar1 = *(undefined4 **)(ar4 + 0x164);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = rand(ar4,ar5,ar6,ar7);
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
    }
    else {
      dVar4 = 5.2386908071071214e-11;
    }
    if (cVar6 == '\0') {
      fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    puVar1 = &DAT_8c0d7588;
    if (cVar7 == '\0') {
      fVar5 = 0.1;
    }
    else {
      fVar3 = 0.1;
      fVar5 = -1.3200388e-31;
    }
    if (cVar6 != '\0' || fVar3 <= fVar5) {
      auStack_c[0] = FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7);
      ar6_00 = 0x12;
      FUN_8c021994(0x8c2b59d0,auStack_c[0],0x12,ar7);
      FUN_8c021a8c(0x8c2b59d0,auStack_c,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x164) = 2;
      puVar1 = &DAT_8c0d759c;
      if (cVar7 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0x40400000;
      }
      else {
        *(undefined8 *)(ar4 + 0x2c) = 0x4f222fe640400000;
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0d7508\n.set _FUN_8c0d7508, _FUN_8c0d7508_def\n");
