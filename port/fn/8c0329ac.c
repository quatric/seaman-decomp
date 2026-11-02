#include "../decls.h"
undefined4 FUN_8c0329ac_def(undefined4 ar4,float *ar5,float *ar6,int *ar7)

{
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  float in_fr4;
  undefined4 in_fr14;
  char cVar4;
  char cVar5;
  float *in_stack_00000000;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if ((((in_fr4 + *in_stack_00000000 < *ar5) && (*ar5 < (*ar6 + *in_stack_00000000) - in_fr4)) &&
      (in_fr4 + in_stack_00000000[2] < ar5[2])) &&
     (fVar1 = (ar6[2] + in_stack_00000000[2]) - in_fr4, dVar2 = (double)CONCAT44(ar5[2],fVar1),
     ar5[2] < fVar1)) {
    (**(code **)(*ar7 + 0x128))(ar7,ar5,ar6,ar7);
    if (cVar5 == '\0') {
      dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),in_fr4);
    }
    if (cVar4 == '\0') {
      fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 + dVar2,0);
    }
    if (cVar5 == '\0') {
      dVar2 = (double)CONCAT44(ar5[1],fVar1);
    }
    else {
      dVar2 = *(double *)(ar5 + 1);
    }
    fVar1 = (float)((ulonglong)dVar2 >> 0x20);
    if (cVar4 == '\0' && SUB84(dVar2,0) < fVar1) {
      if (cVar5 == '\0') {
        dVar2 = (double)CONCAT44(fVar1,ar6[1]);
      }
      if (cVar4 == '\0') {
        fVar1 = SUB84(dVar2,0) - in_fr4;
      }
      else {
        fVar1 = SUB84(dVar2 - (double)CONCAT44(in_fr14,in_fr4),0);
      }
      if (cVar5 == '\0') {
        uVar3 = CONCAT44(ar5[1],fVar1);
      }
      else {
        uVar3 = *(undefined8 *)(ar5 + 1);
      }
      if (cVar4 == '\0' && (float)((ulonglong)uVar3 >> 0x20) < (float)uVar3) {
        return 1;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0329ac\n.set _FUN_8c0329ac, _FUN_8c0329ac_def\n");
