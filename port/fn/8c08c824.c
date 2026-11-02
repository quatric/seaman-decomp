#include "../decls.h"
undefined4 FUN_8c08c824_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_fr1;
  double dVar3;
  float fVar4;
  undefined8 in_dr14;
  double dVar5;
  char cVar6;
  char cVar7;
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar7 = '\0';
  cVar6 = '\0';
  iVar1 = get_field_24_026024(*(undefined4 *)(ar4 + 0x928),ar5,ar6,ar7);
  if (iVar1 == 1) {
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x42c80000,in_fr1);
    }
    else {
      dVar3 = 3.829877612487459e+27;
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44(uVar2,(float)*(int *)(ar4 + 0x458) /
                                     (float)((ulonglong)dVar3 >> 0x20));
    }
    else {
      dVar5 = (double)CONCAT44(uVar2,(float)*(int *)(ar4 + 0x458)) / dVar3;
    }
  }
  else {
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x45a8c000,in_fr1);
    }
    else {
      dVar3 = 2.29233286239132e-311;
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44(uVar2,(float)*(int *)(ar4 + 0x458) /
                                     (float)((ulonglong)dVar3 >> 0x20));
    }
    else {
      dVar5 = (double)CONCAT44(uVar2,(float)*(int *)(ar4 + 0x458)) / dVar3;
    }
  }
  fVar4 = SUB84(dVar5,0);
  if (*(int *)(ar4 + 0x458) < 0x65) {
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c139e6c,SUB84(dVar3,0));
    }
    else {
      dVar3 = (double)CONCAT44(_DAT_8c139e70,DAT_8c139e6c);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x438) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(_DAT_8c139e70,SUB84(dVar3,0));
    }
    else {
      *(double *)(ar4 + 0x438) = dVar3;
      dVar3 = (double)CONCAT44(DAT_8c139e74,_DAT_8c139e70);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x43c) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(DAT_8c139e74,SUB84(dVar3,0));
    }
    else {
      *(double *)(ar4 + 0x43c) = dVar3;
      dVar3 = (double)CONCAT44(DAT_8c139e78,DAT_8c139e74);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x440) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(DAT_8c139e78,SUB84(dVar3,0));
    }
    else {
      *(double *)(ar4 + 0x440) = dVar3;
      dVar3 = (double)CONCAT44((*(uint *)0x8c139e7c),DAT_8c139e78);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x444) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x444) = dVar3;
    }
  }
  if (899 < *(int *)(ar4 + 0x458)) {
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44((float)*(int *)(ar4 + 0x458),fVar4);
    }
    else {
      dVar5 = (double)*(int *)(ar4 + 0x458);
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x44610000,SUB84(dVar3,0));
    }
    else {
      dVar3 = 1099511907856.0;
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) - (float)((ulonglong)dVar3 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 - dVar3;
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x42700000,SUB84(dVar3,0));
    }
    else {
      dVar3 = 2.12254649446278e-311;
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / (float)((ulonglong)dVar3 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar3;
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + 1.0,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(DAT_8c139e6c,SUB84(dVar3,0));
    }
    else {
      dVar3 = (double)CONCAT44(_DAT_8c139e70,DAT_8c139e6c);
    }
    fVar4 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x438) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(_DAT_8c139e70,SUB84(dVar3,0));
    }
    else {
      *(double *)(ar4 + 0x438) = dVar3;
      dVar3 = (double)CONCAT44(DAT_8c139e74,_DAT_8c139e70);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x43c) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(DAT_8c139e74,SUB84(dVar3,0));
    }
    else {
      *(double *)(ar4 + 0x43c) = dVar3;
      dVar3 = (double)CONCAT44(DAT_8c139e78,DAT_8c139e74);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x440) = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = (double)CONCAT44(DAT_8c139e78,SUB84(dVar3,0));
    }
    else {
      *(double *)(ar4 + 0x440) = dVar3;
      dVar3 = (double)CONCAT44((*(uint *)0x8c139e7c),DAT_8c139e78);
    }
    if (cVar6 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * fVar4,SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar4 + 0x444) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0x444) = dVar3;
    }
  }
  iVar1 = get_field_24_026024(*(undefined4 *)(ar4 + 0x928),ar5,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = *(int *)(ar4 + 0x458);
    *(int *)(ar4 + 0x458) = iVar1 + 1;
    uVar2 = 1000;
    if (1000 < iVar1 + 1) {
      *(undefined4 *)(ar4 + 0x458) = 0;
      uVar2 = 0x74;
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
    }
  }
  else {
    iVar1 = *(int *)(ar4 + 0x458);
    *(int *)(ar4 + 0x458) = iVar1 + 1;
    uVar2 = 0x1518;
    if (0x1518 < iVar1 + 1) {
      *(undefined4 *)(ar4 + 0x458) = 0;
      uVar2 = 0x74;
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c08c824\n.set _FUN_8c08c824, _FUN_8c08c824_def\n");
