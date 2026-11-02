#include "../decls.h"
undefined4 * FUN_8c260cf8_def(int ar4,int ar5,undefined2 *ar6,undefined2 *ar7)

{
  float fVar1;
  float fVar2;
  float fVar4;
  double dVar3;
  double dVar5;
  undefined4 in_fr13;
  double dVar6;
  undefined4 uVar7;
  double in_xd2;
  undefined2 uVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  dVar3 = (double)CONCAT44((float)ar5,0x40c90fdb);
  fVar4 = (float)ar4 * 6.2831855;
  dVar6 = (double)CONCAT44(0x3fb504f3,in_fr13);
  FUN_8c013c38(ar4,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    fVar4 = 2.0;
  }
  else {
    fVar4 = SUB84((double)CONCAT44(fVar4,0x3f800000) + (double)CONCAT44(fVar4,0x3f800000),0);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - (float)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar6,0));
    dVar3 = (double)CONCAT44(0xbf800000,SQRT(fVar4));
  }
  else {
    dVar6 = dVar6 - dVar3;
    dVar3 = SQRT(-(double)CONCAT44(0x3f800000,fVar4));
  }
  uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(uVar7,uVar7);
    in_xd2 = (double)CONCAT44(SUB84(dVar3,0),uVar7);
  }
  fVar4 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar9 == '\0') {
    in_xd2 = (double)CONCAT44((float)((ulonglong)in_xd2 >> 0x20) + fVar4,SUB84(in_xd2,0));
  }
  else {
    in_xd2 = in_xd2 + dVar3;
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(fVar4,uVar7);
  }
  fVar4 = (float)((ulonglong)in_xd2 >> 0x20);
  if (cVar9 == '\0') {
    fVar1 = SUB84(dVar6,0) - fVar4;
    fVar2 = SQRT((SUB84(dVar3,0) + fVar4) * fVar1);
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),fVar2);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar2,fVar1);
  }
  else {
    dVar3 = SQRT((dVar3 + in_xd2) * (dVar6 - in_xd2));
    dVar6 = (dVar6 - in_xd2) - dVar3;
  }
  uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar5 = dVar6;
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),fVar4);
    dVar5 = (double)CONCAT44(uVar7,SUB84(in_xd2,0));
  }
  if (cVar9 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar3,0),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 / dVar3;
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),0x46000000);
  }
  fVar4 = (float)((ulonglong)dVar5 >> 0x20);
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(uVar7,fVar4);
  }
  if (cVar9 == '\0') {
    fVar1 = SUB84(dVar6,0) * SUB84(dVar3,0);
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar1);
    uVar8 = (undefined2)(int)fVar1;
  }
  else {
    dVar6 = dVar6 * dVar3;
    uVar8 = (undefined2)(int)dVar6;
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar4);
  }
  if (cVar9 == '\0') {
    fVar4 = SUB84(dVar6,0) * fVar4;
  }
  else {
    fVar4 = SUB84(dVar6 * dVar5,0);
  }
  *ar6 = uVar8;
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x45800000,fVar4);
  }
  else {
    dVar6 = 1.38524461322914e-309;
  }
  if (cVar9 == '\0') {
    fVar4 = (float)((ulonglong)dVar6 >> 0x20);
    dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) * fVar4);
  }
  else {
    dVar6 = dVar6 * dVar6;
  }
  if (cVar9 == '\0') {
    uVar8 = (undefined2)(int)-SUB84(dVar6,0);
  }
  else {
    uVar8 = (undefined2)(int)(double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),-SUB84(dVar6,0));
  }
  *ar7 = uVar8;
  return &DAT_8c260e88;
}

__asm__(".globl _FUN_8c260cf8\n.set _FUN_8c260cf8, _FUN_8c260cf8_def\n");
