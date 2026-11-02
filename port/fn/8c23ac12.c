#include "../decls.h"
undefined4 FUN_8c23ac12_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  undefined8 *puVar1;
  code *in_r3;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined8 in_dr0;
  float fVar6;
  double dVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 in_fr7;
  undefined8 uVar9;
  undefined8 in_xd4;
  char cVar10;
  char cVar11;
  int iStack_8;
  undefined1 auStack_4 [4];
  
  cVar11 = '\0';
  cVar10 = '\0';
  fVar6 = (float)((ulonglong)in_dr0 >> 0x20) * *(float *)(ain0 + ar4);
  dVar5 = (double)CONCAT44(fVar6,(int)in_dr0);
  iStack_8 = ar4;
  (*in_r3)(*(undefined4 *)(ar4 + 0x88),ar5,ar6,ar7,fVar6);
  if (cVar11 == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),fVar6);
    piVar4 = &iStack_8;
  }
  else {
    piVar4 = (int *)auStack_4;
  }
  iVar3 = *piVar4;
  if (cVar10 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
  }
  puVar2 = (undefined8 *)(ar5 + 4);
  if (cVar11 == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),*(undefined4 *)(iVar3 + 0x108));
    uVar7 = CONCAT44(*(undefined4 *)(iVar3 + 0x10c),*(undefined4 *)(iVar3 + 0x110));
    uVar8 = CONCAT44(*(undefined4 *)puVar2,*(undefined4 *)(ar5 + 8));
    puVar1 = (undefined8 *)(ar5 + 0xc);
    uVar9 = CONCAT44(*(undefined4 *)puVar1,in_fr7);
  }
  else {
    uVar7 = *(undefined8 *)(iVar3 + 0x110);
    uVar8 = *puVar2;
    in_xd4 = *(undefined8 *)(ar5 + 0xc);
    puVar1 = (undefined8 *)(ar5 + 0x14);
    uVar9 = *puVar1;
  }
  fVar6 = (float)((ulonglong)dVar5 >> 0x20);
  if (cVar10 == '\0') {
    uVar8 = CONCAT44(fVar6 * SUB84(dVar5,0) + (float)((ulonglong)uVar8 >> 0x20),
                     fVar6 * (float)((ulonglong)uVar7 >> 0x20) + (float)uVar8);
    uVar9 = CONCAT44(fVar6 * (float)uVar7 + (float)((ulonglong)uVar9 >> 0x20),(int)uVar9);
  }
  if (cVar11 == '\0') {
    *(int *)puVar2 = (int)((ulonglong)uVar8 >> 0x20);
    *(int *)(ar5 + 8) = (int)uVar8;
    *(int *)puVar1 = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *puVar2 = uVar8;
    *(undefined8 *)(ar5 + 8) = in_xd4;
    *puVar1 = uVar9;
  }
  return 4;
}

__asm__(".globl _FUN_8c23ac12\n.set _FUN_8c23ac12, _FUN_8c23ac12_def\n");
