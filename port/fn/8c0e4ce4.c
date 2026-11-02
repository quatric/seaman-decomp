#include "../decls.h"
undefined4 Class_12b758_m2_0e4ce4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  undefined8 in_xd0;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  FUN_8c0e4d64(ar4,*ar5,ar6,ar7);
  Class_12bb08_m2_0da5a8(ar4,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x3a03126f,*(undefined4 *)(ar4 + 0x106c));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x106c);
    dVar2 = -1.2980698352425083e-250;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) - (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 - dVar2,0);
  }
  if (cVar4 == '\0') {
    *(float *)(ar4 + 0x106c) = fVar1;
    fVar1 = *(float *)(ar4 + 0x106c);
  }
  else {
    *(undefined8 *)(ar4 + 0x106c) = in_xd0;
  }
  if (cVar3 == '\0' && fVar1 < 0.0) {
    if (cVar4 == '\0') {
      *(undefined4 *)(ar4 + 0x106c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x106c) = (ulonglong)(uint)fVar1;
    }
  }
  FUN_8c0dbd80(ar4,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _Class_12b758_m2_0e4ce4\n.set _Class_12b758_m2_0e4ce4, _Class_12b758_m2_0e4ce4_def\n");
