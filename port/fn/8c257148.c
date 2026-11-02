#include "../decls.h"
undefined4 FUN_8c257148_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  double in_dr0;
  float fVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 in_PR;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar1 = FUN_8c259bd8(ar4 >> 1,ar5,ar6,ar7,in_PR);
  fVar2 = (float)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(_DAT_8c4aa4ac,fVar2);
  }
  else {
    dVar3 = (double)CONCAT44(_DAT_8c4aa4b0,_DAT_8c4aa4ac);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) / (fVar2 + SUB84(dVar3,0)),
                             SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 / (in_dr0 + dVar3);
  }
  uVar4 = (undefined4)((ulonglong)dVar3 >> 0x20);
  _DAT_8c4aa4a8 = uVar4;
  if (cVar6 != '\0') {
    _DAT_8c4aa4a8 = SUB84(dVar3,0);
    _DAT_8c4aa4ac = uVar4;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c257148\n.set _FUN_8c257148, _FUN_8c257148_def\n");
