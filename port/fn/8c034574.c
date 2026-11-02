#include "../decls.h"
undefined4 FUN_8c034574_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  uint in_fr1;
  float fVar2;
  double dVar3;
  float in_fr4;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar4;
  undefined4 in_PR;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined4 in_stack_00000000;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uStack_10 = in_PR;
  Vec3_set_xyz(&fStack_1c,ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    vec3_copy_8c02b5fc(in_stack_00000000,&fStack_1c,ar6,ar7);
    object_dtor_delete(&fStack_1c,0xffffffff,ar6,ar7);
  }
  else {
    if (cVar6 == '\0') {
      bVar4 = in_fr4 < 0.0;
    }
    else {
      bVar4 = (double)CONCAT44(in_fr14,in_fr4) < (double)(ulonglong)in_fr1;
    }
    if (bVar4) {
      in_fr4 = 0.0;
    }
    while( true ) {
      if (cVar6 == '\0') {
        iVar5 = (int)in_fr4;
      }
      else {
        iVar5 = (int)(double)CONCAT44(in_fr14,in_fr4);
      }
      if (iVar5 <= *ar5) break;
      ar5 = ar5 + 4;
    }
    if (cVar6 == '\0') {
      iVar5 = (int)in_fr4;
    }
    else {
      iVar5 = (int)(double)CONCAT44(in_fr14,in_fr4);
    }
    if (*ar5 != iVar5) {
      ar5 = ar5 + -4;
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x43b40000,(float)ar5[1]);
    }
    else {
      dVar3 = 2.6584566620691055e+36;
    }
    if (cVar6 == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x47800000,fVar2);
    }
    else {
      dVar3 = 6.207226708901173e-78;
    }
    if (cVar6 == '\0') {
      fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
    }
    fStack_1c = (float)in_xd0;
    fVar1 = fStack_1c;
    if (cVar7 == '\0') {
      fStack_1c = fVar2;
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x43b40000,(float)ar5[2]);
    }
    else {
      dVar3 = 2.6584566620691055e+36;
    }
    if (cVar6 == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x47800000,fVar2);
    }
    else {
      dVar3 = 6.207226708901173e-78;
    }
    if (cVar6 == '\0') {
      fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
    }
    fStack_18 = fVar1;
    if (cVar7 == '\0') {
      fStack_18 = fVar2;
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x43b40000,(float)ar5[3]);
    }
    else {
      dVar3 = 2.6584566620691055e+36;
    }
    if (cVar6 == '\0') {
      fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (cVar7 == '\0') {
      dVar3 = (double)CONCAT44(0x47800000,fVar2);
    }
    else {
      dVar3 = 6.207226708901173e-78;
    }
    if (cVar6 == '\0') {
      fStack_14 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fStack_14 = SUB84(dVar3 / dVar3,0);
    }
    if (cVar7 != '\0') {
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
      fStack_14 = fVar1;
    }
    vec3_copy_8c02b5fc(in_stack_00000000,&fStack_1c,ar6,ar7);
    object_dtor_delete(&fStack_1c,0xffffffff,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c034574\n.set _FUN_8c034574, _FUN_8c034574_def\n");
