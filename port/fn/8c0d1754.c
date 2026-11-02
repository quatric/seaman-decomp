#include "../decls.h"
undefined4 FUN_8c0d1754_def(float *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float in_PR;
  char cVar5;
  char cVar6;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  cVar6 = '\0';
  cVar5 = '\0';
  fStack_10 = in_PR;
  FUN_8c256294(0,ar5,&fStack_20,ar7);
  FUN_8c256294(0,ar5,&fStack_18,ar7);
  for (iVar2 = 1; iVar2 < 8; iVar2 = iVar2 + 1) {
    FUN_8c256294(0,iVar2 * 0xc + ar5,&fStack_28,ar7);
    fVar3 = fStack_20;
    fVar4 = fStack_1c;
    if (cVar6 == '\0') {
      fVar3 = fStack_28;
      fVar4 = fStack_20;
    }
    if (cVar5 != '\0' || fVar4 <= fVar3) {
      fVar3 = fStack_18;
      fVar4 = fStack_14;
      if (cVar6 == '\0') {
        fVar3 = fStack_28;
        fVar4 = fStack_18;
      }
      if (cVar5 == '\0' && fVar4 < fVar3) {
        if (cVar6 == '\0') {
          fStack_18 = fStack_28;
        }
        else {
          fStack_18 = fStack_28;
          fStack_14 = fStack_24;
        }
      }
    }
    else {
      if (cVar6 != '\0') {
        fStack_1c = fStack_24;
      }
      fStack_20 = fStack_28;
    }
    fVar3 = fStack_1c;
    fVar4 = fStack_18;
    if (cVar6 == '\0') {
      fVar3 = fStack_24;
      fVar4 = fStack_1c;
    }
    if (cVar5 != '\0' || fVar4 <= fVar3) {
      fVar3 = fStack_14;
      fVar4 = fStack_10;
      if (cVar6 == '\0') {
        fVar3 = fStack_24;
        fVar4 = fStack_14;
      }
      if (cVar5 == '\0' && fVar4 < fVar3) {
        if (cVar6 == '\0') {
          fStack_14 = fStack_24;
        }
        else {
          fStack_14 = fStack_24;
          fStack_10 = fStack_20;
        }
      }
    }
    else {
      if (cVar6 != '\0') {
        fStack_18 = fStack_20;
      }
      fStack_1c = fStack_24;
    }
  }
  fVar3 = fStack_20;
  fVar4 = fStack_1c;
  if (cVar6 == '\0') {
    fVar3 = *ar4;
    fVar4 = fStack_20;
  }
  if (cVar5 != '\0' || fVar4 <= fVar3) {
    fVar3 = fStack_18;
    fVar4 = fStack_14;
    if (cVar6 == '\0') {
      fVar3 = *ar4;
      fVar4 = fStack_18;
    }
    if (cVar5 != '\0' || fVar3 <= fVar4) {
      fVar3 = fStack_1c;
      if (cVar6 == '\0') {
        fVar3 = ar4[1];
        fStack_18 = fStack_1c;
      }
      if (cVar5 != '\0' || fStack_18 <= fVar3) {
        fVar3 = fStack_14;
        if (cVar6 == '\0') {
          fVar3 = ar4[1];
          fStack_10 = fStack_14;
        }
        if (cVar5 != '\0' || fVar3 <= fStack_10) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d1754\n.set _FUN_8c0d1754, _FUN_8c0d1754_def\n");
