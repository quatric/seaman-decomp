#include "../decls.h"
undefined4 Class_129808_m1_014894_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *ar5_00;
  float in_fr1;
  float fVar2;
  float in_fr4;
  float in_PR;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  ar5_00 = ar4 + 5;
  FUN_8c023aa0(ar4 + 1,ar5_00,ar6,ar7);
  if (cVar4 == '\0') {
    in_fr1 = (float)ar4[2];
  }
  uVar1 = 0;
  fVar2 = in_fr4;
  if (cVar4 == '\0') {
    fVar2 = in_fr1;
    in_PR = in_fr4;
  }
  if (cVar3 == '\0' && fVar2 < in_PR) {
    uVar1 = (**(code **)(*ar4 + 0x14))(ar4,ar5_00,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _Class_129808_m1_014894\n.set _Class_129808_m1_014894, _Class_129808_m1_014894_def\n");
