#include "../decls.h"
undefined4 FUN_8c23aece_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  undefined8 *puVar1;
  code *in_r3;
  undefined8 *puVar2;
  undefined8 in_dr0;
  double dVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 in_fr9;
  undefined8 uVar9;
  undefined8 in_xd4;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  dVar3 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ain0 + ar4));
  (*in_r3)(*(undefined4 *)(ar4 + 0x88),ar5,ar6,ar7,ar4);
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * SUB84(dVar3,0),SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar3;
  }
  puVar2 = (undefined8 *)((int)ar5 + 0x14);
  if (cVar11 == '\0') {
    uVar9 = CONCAT44(*(undefined4 *)ar5,in_fr9);
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),*(undefined4 *)(ar4 + 0x118));
    uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x11c),*(undefined4 *)(ar4 + 0x120));
    uVar6 = CONCAT44(*(undefined4 *)puVar2,*(undefined4 *)(ar5 + 3));
    puVar1 = (undefined8 *)((int)ar5 + 0x1c);
    uVar8 = CONCAT44(*(undefined4 *)puVar1,*(undefined4 *)(ar4 + 0x114));
  }
  else {
    uVar9 = *ar5;
    uVar5 = *(undefined8 *)(ar4 + 0x124);
    uVar6 = *puVar2;
    in_xd4 = *(undefined8 *)((int)ar5 + 0x1c);
    puVar1 = (undefined8 *)((int)ar5 + 0x24);
    uVar8 = *puVar1;
  }
  fVar4 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar10 == '\0') {
    uVar6 = CONCAT44(fVar4 * SUB84(dVar3,0) + (float)((ulonglong)uVar6 >> 0x20),
                     fVar4 * (float)((ulonglong)uVar5 >> 0x20) + (float)uVar6);
    fVar7 = (float)uVar8;
    uVar8 = CONCAT44(fVar4 * (float)uVar5 + (float)((ulonglong)uVar8 >> 0x20),fVar7);
    uVar9 = CONCAT44(fVar4 * fVar7 + (float)((ulonglong)uVar9 >> 0x20),(int)uVar9);
  }
  if (cVar11 == '\0') {
    *(int *)puVar2 = (int)((ulonglong)uVar6 >> 0x20);
    *(int *)(ar5 + 3) = (int)uVar6;
    *(int *)puVar1 = (int)((ulonglong)uVar8 >> 0x20);
    *(int *)ar5 = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *puVar2 = uVar6;
    ar5[3] = in_xd4;
    *puVar1 = uVar8;
    *ar5 = uVar9;
  }
  return 4;
}

__asm__(".globl _FUN_8c23aece\n.set _FUN_8c23aece, _FUN_8c23aece_def\n");
