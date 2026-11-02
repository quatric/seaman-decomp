#include "../decls.h"
undefined4 FUN_8c119b16_def(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  undefined8 in_dr0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  
  fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
  if (ar6 != ar7) {
    cVar7 = '\0';
    fVar2 = (float)ar5;
    if (ar5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    iVar1 = *(int *)(*(int *)(ar4 + 0x1cc) + ar6 * 4);
    fVar3 = (float)iVar1;
    if (iVar1 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    iVar1 = *(int *)(*(int *)(ar4 + 0x1cc) + ar7 * 4);
    fVar4 = (float)iVar1;
    if (iVar1 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar5 = (float)(ar6 - ar7);
    if (ar6 - ar7 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    fVar5 = ((fVar2 - fVar3) + fVar4) / fVar5;
    fVar2 = 0.08544444;
    if (-26.0 <= fVar5) {
      if (78.0 < fVar5) {
        fVar2 = -4.4671087;
        thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
        if (cVar7 == '\0') {
          fVar2 = 1.0;
        }
        fVar6 = 10000.0 / (fVar6 + fVar2);
      }
      else {
        fVar6 = (91.0 - fVar5) * 76.899994;
      }
    }
    else {
      thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
      if (cVar7 == '\0') {
        fVar2 = 1.0;
      }
      fVar6 = 10000.0 / (fVar6 + fVar2);
    }
    fVar6 = fVar6 + 0.5;
    if (2.1474836e+09 <= fVar6) {
      fVar6 = fVar6 - 4.2949673e+09;
    }
    return (int)fVar6;
  }
  return 0;
}

__asm__(".globl _FUN_8c119b16\n.set _FUN_8c119b16, _FUN_8c119b16_def\n");
