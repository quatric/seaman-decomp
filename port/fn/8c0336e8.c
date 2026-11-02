#include "../decls.h"
undefined4 FUN_8c0336e8_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined8 in_xd0;
  undefined4 in_PR;
  char cVar4;
  char cVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar5 = '\0';
  cVar4 = '\0';
  uStack_c = in_PR;
  Vec3_set_zero(&uStack_18,ar5,ar6,ar7);
  FUN_8c031ab4(ar4,&uStack_18,ar6,ar7);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(uStack_18,*(undefined4 *)ar5);
  }
  else {
    in_xd0 = *ar5;
    dVar3 = (double)CONCAT44(uStack_14,uStack_18);
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *(float *)(ar4 + 0x158) = fVar2;
    dVar3 = (double)CONCAT44(uStack_14,*(undefined4 *)((int)ar5 + 4));
  }
  else {
    *(undefined8 *)(ar4 + 0x158) = in_xd0;
    in_xd0 = *(undefined8 *)((int)ar5 + 4);
    dVar3 = (double)CONCAT44(uStack_10,uStack_14);
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *(float *)(ar4 + 0x15c) = fVar2;
    dVar3 = (double)CONCAT44(uStack_10,*(undefined4 *)(ar5 + 1));
  }
  else {
    *(undefined8 *)(ar4 + 0x15c) = in_xd0;
    in_xd0 = ar5[1];
    dVar3 = (double)CONCAT44(uStack_c,uStack_10);
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *(float *)(ar4 + 0x160) = fVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x160) = in_xd0;
  }
  uVar1 = object_dtor_delete(&uStack_18,0xffffffff,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0336e8\n.set _FUN_8c0336e8, _FUN_8c0336e8_def\n");
