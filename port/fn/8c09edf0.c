#include "../decls.h"
undefined4 * FUN_8c09edf0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  code *pcVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined4 in_stack_ffffffcc;
  
  cVar7 = '\0';
  cVar6 = '\0';
  FUN_8c2219ac(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffffcc);
  FUN_8c22195c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffffcc);
  FUN_8c21415c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffffcc);
  FUN_8c21410c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffffcc);
  pfVar2 = (float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(0x3c23d70a,*pfVar2);
  }
  else {
    in_xd0 = *(undefined8 *)pfVar2;
    dVar4 = 5.2386906893627653e-11;
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar7 == '\0') {
    *pfVar2 = fVar3;
  }
  else {
    *(undefined8 *)pfVar2 = in_xd0;
  }
  if (cVar7 == '\0') {
    fVar3 = *(float *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4);
  }
  puVar1 = &DAT_8c09efa0;
  if (cVar7 == '\0') {
    pcVar5 = (code *)0x3dcccccd;
  }
  else {
    fVar3 = 0.1;
    pcVar5 = FUN_8c221916;
  }
  if (cVar6 != '\0' || fVar3 <= (float)(uint)pcVar5) {
    FUN_8c22195c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffffcc);
    FUN_8c21410c(*(int *)(ar4 + 0xfd0) + 1,ar5,ar6,ar7,in_stack_ffffffcc);
    FUN_8c221916(*(int *)(ar4 + 0xfd0) + 1,0,ar6,ar7);
    FUN_8c2140c6(*(int *)(ar4 + 0xfd0) + 1,0,ar6,ar7);
    _DAT_8c284d80 = _DAT_8c284d80 + -1;
    *(undefined4 *)(&DAT_8c13aaf0 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 0;
    if (cVar7 == '\0') {
      *(undefined4 *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = 0;
    }
    else {
      *(ulonglong *)(&DAT_8c13aae4 + (*(int *)(ar4 + 0xfd0) + -1) * 4) = (ulonglong)(uint)fVar3;
    }
    puVar1 = (undefined4 *)0xfd0;
    *(undefined4 *)(ar4 + 0xfd0) = 0;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c09edf0\n.set _FUN_8c09edf0, _FUN_8c09edf0_def\n");
