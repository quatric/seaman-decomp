#include "../decls.h"
double * FUN_8c0369c4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  undefined4 in_fr15;
  double in_xd14;
  char cVar6;
  char cVar7;
  undefined4 in_stack_ffffffe4;
  
  cVar7 = '\0';
  cVar6 = '\0';
  *(float *)(ar4 + 0x468) =
       *(float *)(ar4 + 0x468) + (float)(int)*(char *)(ar4 + 0x46c) * 2.3148148e-06 * 8.0;
  fVar4 = *(float *)(ar4 + 0x468);
  iVar3 = ar5;
  if (fVar4 <= 1.0) {
    if (*(float *)(ar4 + 0x468) < 0.0) {
      *(undefined4 *)(ar4 + 0x468) = 0;
    }
  }
  else {
    uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
    in_stack_ffffffe4 = CONCAT22((short)((uint)in_stack_ffffffe4 >> 0x10),(short)uVar1);
    if ((short)uVar1 == 1) {
      if (cVar7 == '\0') {
        *(undefined4 *)(ar4 + 0x468) = 0x3f8147ae;
      }
      else {
        *(undefined8 *)(ar4 + 0x468) = 0x8c256fec3f8147ae;
      }
    }
    else if (cVar7 == '\0') {
      *(undefined4 *)(ar4 + 0x468) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x468) = CONCAT44(0x3f800000,fVar4);
    }
  }
  pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
  if (cVar7 == '\0') {
    in_fr15 = *(undefined4 *)pdVar2;
  }
  else {
    in_xd14 = *pdVar2;
  }
  pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
  dVar5 = in_xd14;
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(in_fr15,*(undefined4 *)(ar4 + 0x468));
  }
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
  }
  if (cVar7 == '\0') {
    *(int *)pdVar2 = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *pdVar2 = dVar5;
  }
  FUN_8c256fec(0,iVar3,ar6,ar7,in_stack_ffffffe4);
  FUN_8c02a29c(ar4,*(undefined4 *)(ar5 + 4),ar6,ar7);
  pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
  if (cVar7 == '\0') {
    *(undefined4 *)pdVar2 = in_fr15;
  }
  else {
    *pdVar2 = in_xd14;
  }
  return pdVar2;
}

__asm__(".globl _FUN_8c0369c4\n.set _FUN_8c0369c4, _FUN_8c0369c4_def\n");
