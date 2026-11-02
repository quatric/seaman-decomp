#include "../decls.h"
undefined4 * FUN_8c10052c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if (*(int *)(ar4 + 0x188) == 6) {
    FUN_8c0c51a0(ar4,0,ar6,ar7);
  }
  *(undefined2 *)(ar4 + 0x18c) = 0x78;
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x140),*(undefined4 *)(ar4 + 0x130));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x130);
    dVar2 = *(double *)(ar4 + 0x140);
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (cVar5 == '\0') {
    *(float *)(ar4 + 0x130) = fVar1;
    fVar1 = *(float *)(ar4 + 0x130);
    fVar3 = 430.0;
  }
  else {
    *(undefined8 *)(ar4 + 0x130) = in_xd0;
    fVar1 = 430.0;
    fVar3 = 2.721048e+09;
  }
  if (cVar4 != '\0' || fVar3 <= fVar1) {
    if (cVar5 == '\0') {
      *(undefined4 *)(ar4 + 0x130) = 0x43d70000;
    }
    else {
      *(undefined8 *)(ar4 + 0x130) = 0x4f222fe643d70000;
    }
  }
  return &DAT_8c1005a0;
}

__asm__(".globl _FUN_8c10052c\n.set _FUN_8c10052c, _FUN_8c10052c_def\n");
