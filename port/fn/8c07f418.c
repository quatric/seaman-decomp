#include "../decls.h"
undefined4 FUN_8c07f418_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  double dVar1;
  undefined8 in_xd0;
  undefined4 in_PR;
  char cVar2;
  char cVar3;
  undefined4 in_stack_ffffffac;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar3 = '\0';
  cVar2 = '\0';
  ar5_00 = ar5;
  uStack_c = in_PR;
  Vec3_set_zero(&uStack_18,ar5,ar6,ar7);
  Vec3_set_zero(&fStack_24,ar5_00,ar6,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7,in_stack_ffffffac);
  FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),ar6,ar7);
  vec3_copy_8c023d8c(&uStack_18,auStack_30,ar6,ar7);
  object_dtor_delete(auStack_30,0xffffffff,ar6,ar7);
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x254),uStack_18);
  }
  else {
    in_xd0 = CONCAT44(uStack_14,uStack_18);
    dVar1 = *(double *)(ar4 + 0x254);
  }
  if (cVar2 == '\0') {
    fStack_24 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_24 = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 600),uStack_14);
  }
  else {
    fStack_24 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_10,uStack_14);
    dVar1 = *(double *)(ar4 + 600);
  }
  if (cVar2 == '\0') {
    fStack_20 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_20 = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x25c),uStack_10);
  }
  else {
    fStack_20 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_c,uStack_10);
    dVar1 = *(double *)(ar4 + 0x25c);
  }
  if (cVar2 == '\0') {
    fStack_1c = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 != '\0') {
    fStack_1c = (float)in_xd0;
    uStack_18 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  vec3_copy_8c023d8c(ar4 + 0x254,&uStack_18,ar6,ar7);
  vec3_copy_8c02b5fc(auStack_3c,&fStack_24,ar6,ar7);
  FUN_8c023484(ar5,auStack_3c,ar6,ar7,auStack_4c);
  Vec3_assign(ar5,auStack_4c,ar6,ar7);
  Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
  object_dtor_delete(auStack_3c,0xffffffff,ar6,ar7);
  object_dtor_delete(&fStack_24,0xffffffff,ar6,ar7);
  object_dtor_delete(&uStack_18,0xffffffff,ar6,ar7);
  return ar5;
}

__asm__(".globl _FUN_8c07f418\n.set _FUN_8c07f418, _FUN_8c07f418_def\n");
