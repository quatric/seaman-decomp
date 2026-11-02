#include "../decls.h"
undefined4 FUN_8c0d75a0_def(int ar4,float *ar5,int ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_44;
  float fStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_24;
  float fStack_20;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (**(code **)(*(int *)(ar4 + 0xc4) + 0x38))((int *)(ar4 + 0xc4),&fStack_68,ar6,ar7);
  fVar1 = fStack_24;
  if (cVar4 == '\0') {
    fVar1 = *(float *)(ar6 + 8);
    fStack_20 = fStack_24;
  }
  if (cVar3 != '\0' || fVar1 <= fStack_20) {
    fVar1 = fStack_68;
    fVar2 = fStack_64;
    if (cVar4 == '\0') {
      fVar1 = *ar5;
      fVar2 = fStack_68;
    }
    if (cVar3 != '\0' || fVar2 <= fVar1) {
      fVar1 = fStack_44;
      if (cVar4 == '\0') {
        fVar1 = *ar5;
        fStack_40 = fStack_44;
      }
      if (cVar3 != '\0' || fVar1 <= fStack_40) {
        fVar1 = fStack_34;
        if (cVar4 == '\0') {
          fVar1 = ar5[1];
          fStack_30 = fStack_34;
        }
        if (cVar3 != '\0' || fStack_30 <= fVar1) {
          fVar1 = fStack_64;
          if (cVar4 == '\0') {
            fVar1 = ar5[1];
            fStack_60 = fStack_64;
          }
          if (cVar3 != '\0' || fVar1 <= fStack_60) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0d75a0\n.set _FUN_8c0d75a0, _FUN_8c0d75a0_def\n");
