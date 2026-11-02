#include "../decls.h"
double * Vec3_length_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  undefined8 in_dr0;
  double dVar2;
  float in_fr15;
  undefined4 in_fr14;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  Vec3_length_sq(ar4,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
    fVar1 = in_fr15;
  }
  else {
    fVar1 = (float)in_dr0;
  }
  if (fVar1 != 0.0) {
    if (cVar4 == '\0') {
      dVar2 = (double)CONCAT44(*(undefined4 *)ar4,fVar1);
    }
    else {
      dVar2 = *ar4;
    }
    if (cVar3 == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)ar4 = (int)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),SUB84(dVar2,0));
    }
    else {
      *ar4 = dVar2;
      dVar2 = *(double *)((int)ar4 + 4);
    }
    if (cVar3 == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)((int)ar4 + 4) = (int)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),SUB84(dVar2,0));
    }
    else {
      *(double *)((int)ar4 + 4) = dVar2;
      dVar2 = ar4[1];
    }
    if (cVar3 == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)(ar4 + 1) = (int)((ulonglong)dVar2 >> 0x20);
    }
    else {
      ar4[1] = dVar2;
    }
  }
  return ar4;
}

__asm__(".globl _Vec3_length\n.set _Vec3_length, _Vec3_length_def\n");
