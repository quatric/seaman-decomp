#include "../decls.h"
int rand_range_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  double dVar2;
  undefined4 in_fr3;
  double dVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  iVar1 = rand(ar4,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    dVar3 = (double)CONCAT44((float)(ar6 - ar5),in_fr3);
  }
  else {
    dVar3 = (double)(ar6 - ar5);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar2 = -1.5729774447110699e+308;
  }
  if (cVar4 == '\0') {
    iVar1 = (int)((float)((ulonglong)dVar3 >> 0x20) *
                 (SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20)));
  }
  else {
    iVar1 = (int)(dVar3 * (dVar2 / dVar2));
  }
  return iVar1 + ar5;
}

__asm__(".globl _rand_range\n.set _rand_range, _rand_range_def\n");
