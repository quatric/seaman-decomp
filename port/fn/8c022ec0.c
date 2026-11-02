#include "../decls.h"
undefined4 Vec3_normalize_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 in_dr0;
  float fVar3;
  double dVar1;
  double dVar2;
  undefined4 uVar4;
  float in_fr15;
  undefined4 in_fr14;
  char cVar5;
  char cVar6;
  undefined4 in_stack_00000000;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar6 = '\0';
  cVar5 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  Vec3_length_sq(ar4,ar5,ar6,ar7);
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    in_fr15 = fVar3;
    fVar3 = fStack_1c;
  }
  fStack_1c = fVar3;
  if (in_fr15 == 0.0) {
    Vec3_assign(&fStack_1c,ar4,ar6,ar7);
  }
  else {
    if (cVar6 == '\0') {
      dVar1 = (double)CONCAT44(*(undefined4 *)ar4,(int)in_dr0);
    }
    else {
      dVar1 = *ar4;
    }
    if (cVar5 == '\0') {
      dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) / in_fr15,SUB84(dVar1,0));
    }
    else {
      dVar1 = dVar1 / (double)CONCAT44(in_fr14,in_fr15);
    }
    fStack_1c = SUB84(dVar1,0);
    if (cVar6 == '\0') {
      dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),fStack_1c);
      fStack_1c = (float)((ulonglong)dVar1 >> 0x20);
    }
    else {
      dVar2 = *(double *)((int)ar4 + 4);
    }
    if (cVar5 == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    uStack_18 = SUB84(dVar2,0);
    if (cVar6 == '\0') {
      dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),uStack_18);
      uStack_18 = (int)((ulonglong)dVar2 >> 0x20);
    }
    else {
      dVar1 = ar4[1];
    }
    if (cVar5 == '\0') {
      dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) / in_fr15,SUB84(dVar1,0));
    }
    else {
      dVar1 = dVar1 / (double)CONCAT44(in_fr14,in_fr15);
    }
    uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    uStack_14 = uVar4;
    if (cVar6 != '\0') {
      uStack_14 = SUB84(dVar1,0);
      uStack_10 = uVar4;
    }
  }
  Vec3_ctor_copy(in_stack_00000000,&fStack_1c,ar6,ar7);
  Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _Vec3_normalize\n.set _Vec3_normalize, _Vec3_normalize_def\n");
