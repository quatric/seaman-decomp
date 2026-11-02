#include "../decls.h"
undefined4 FUN_8c023c30_def(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  double dVar1;
  undefined8 in_xd0;
  char cVar2;
  char cVar3;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar3 = '\0';
  cVar2 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_1c = SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 / dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    in_xd0 = *(undefined8 *)((int)ar4 + 4);
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_18 = SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar1 / dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 1));
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_14 = SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar1 / dVar1,0);
  }
  if (cVar3 != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  Vec3_ctor_copy(s0,&fStack_1c,ar6,ar7);
  Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c023c30\n.set _FUN_8c023c30, _FUN_8c023c30_def\n");
