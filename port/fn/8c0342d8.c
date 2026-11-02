#include "../decls.h"
undefined4 FUN_8c0342d8_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  float in_fr4;
  undefined4 in_fr14;
  bool bVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined4 in_stack_00000000;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  cVar4 = '\0';
  cVar3 = '\0';
  Vec3_ctor_xyz(&iStack_20,ar5,ar6,ar7);
  if (ar5 == (int *)0x0) {
    Vec3_ctor_copy(in_stack_00000000,&iStack_20,ar6,ar7);
    Vec3_dtor(&iStack_20,0xffffffff,ar6,ar7);
  }
  else {
    if (cVar3 == '\0') {
      bVar1 = in_fr4 < 0.0;
    }
    else {
      bVar1 = (double)CONCAT44(in_fr14,in_fr4) < (double)(ulonglong)in_fr1;
    }
    if (bVar1) {
      in_fr4 = 0.0;
    }
    while( true ) {
      if (cVar3 == '\0') {
        iVar2 = (int)in_fr4;
      }
      else {
        iVar2 = (int)(double)CONCAT44(in_fr14,in_fr4);
      }
      if (iVar2 <= *ar5) break;
      ar5 = ar5 + 4;
    }
    if (cVar3 == '\0') {
      iVar2 = (int)in_fr4;
    }
    else {
      iVar2 = (int)(double)CONCAT44(in_fr14,in_fr4);
    }
    if (*ar5 != iVar2) {
      ar5 = ar5 + -4;
    }
    if (cVar4 == '\0') {
      iStack_20 = ar5[1];
      iStack_1c = ar5[2];
      iStack_18 = ar5[3];
    }
    else {
      iStack_20 = (int)*(undefined8 *)(ar5 + 1);
      iStack_1c = (int)*(undefined8 *)(ar5 + 2);
      iStack_18 = (int)*(undefined8 *)(ar5 + 3);
      uStack_14 = (undefined4)((ulonglong)*(undefined8 *)(ar5 + 3) >> 0x20);
    }
    Vec3_ctor_copy(in_stack_00000000,&iStack_20,ar6,ar7);
    Vec3_dtor(&iStack_20,0xffffffff,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c0342d8\n.set _FUN_8c0342d8, _FUN_8c0342d8_def\n");
