#include "../decls.h"
uint FUN_8c233d14_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  double dVar1;
  double dVar2;
  undefined4 in_fr5;
  bool bVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  dVar1 = (double)CONCAT44(*(float *)(ar4 + 8) - *(float *)(ar5 + 8),in_fr1);
  FUN_8c258030(ar4,ar5,ar6,ar7,8);
  if (cVar5 == '\0') {
    dVar1 = (double)CONCAT44((int)((ulonglong)dVar1 >> 0x20),in_fr5);
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(ar5 + 0xc));
  }
  else {
    dVar2 = *(double *)(ar4 + 0xc);
  }
  if (cVar4 == '\0') {
    bVar3 = (float)((ulonglong)dVar1 >> 0x20) < (float)((ulonglong)dVar2 >> 0x20) + SUB84(dVar2,0);
  }
  else {
    bVar3 = dVar1 < dVar2 + dVar2;
  }
  return (uint)bVar3;
}

__asm__(".globl _FUN_8c233d14\n.set _FUN_8c233d14, _FUN_8c233d14_def\n");
