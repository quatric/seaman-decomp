#include "../decls.h"
int FUN_8c263d90_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  int iStack_c;
  int aiStack_8 [2];
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c263cd8(ar4,&iStack_c,aiStack_8,ar7);
  if (cVar4 == '\0') {
    fVar1 = (float)iStack_c / (float)aiStack_8[0];
  }
  else {
    fVar1 = SUB84((double)aiStack_8[0] / (double)aiStack_8[0],0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x42c80000,fVar1);
  }
  else {
    dVar2 = -3.874703964122394e-250;
  }
  if (cVar4 == '\0') {
    iVar3 = (int)(SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar2 * dVar2);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c263d90\n.set _FUN_8c263d90, _FUN_8c263d90_def\n");
