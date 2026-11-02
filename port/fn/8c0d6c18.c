#include "../decls.h"
undefined4 FUN_8c0d6c18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 in_dr0;
  double dVar1;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd14;
  bool bVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  FUN_8c0d6aac(ar4,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 0xe8) + 8))((int *)(ar4 + 0xe8),ar5,ar6,ar7);
  if (cVar4 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),(int)in_dr0);
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
    in_dr0 = in_xd14;
  }
  else {
    dVar1 = *(double *)(ar4 + 0x34);
  }
  if (cVar3 == '\0') {
    bVar2 = (float)((ulonglong)dVar1 >> 0x20) < in_fr15;
  }
  else {
    bVar2 = dVar1 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar2) {
    if (cVar4 == '\0') {
      *(float *)(ar4 + 0x34) = in_fr15;
      *(float *)(ar4 + 0x24) = in_fr15;
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_dr0;
      *(undefined8 *)(ar4 + 0x24) = in_dr0;
    }
  }
  *(undefined4 *)(ar4 + 100) = 6;
  return 100;
}

__asm__(".globl _FUN_8c0d6c18\n.set _FUN_8c0d6c18, _FUN_8c0d6c18_def\n");
