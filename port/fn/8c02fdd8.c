#include "../decls.h"
double * FUN_8c02fdd8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  undefined1 *a5;
  float *a6;
  float *a7;
  float fVar2;
  double dVar3;
  float fVar4;
  undefined4 in_fr3;
  undefined4 uVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_10 [8];
  
  cVar9 = '\0';
  cVar8 = '\0';
  a7 = &fStack_18;
  a6 = &fStack_14;
  a5 = auStack_10;
  (**(code **)(*ar5 + 0x120))(ar5,a5,a6,a7);
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(fStack_18,in_fr3);
    dVar3 = (double)CONCAT44(0x3dcccccd,fStack_14);
  }
  else {
    dVar6 = (double)CONCAT44(fStack_14,fStack_18);
    dVar3 = 8.15358646777176e-312;
  }
  if (cVar8 == '\0') {
    fVar4 = (float)((ulonglong)dVar3 >> 0x20);
    fVar2 = SUB84(dVar3,0) * fVar4;
    dVar3 = (double)CONCAT44(fVar4,fVar2);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar2,SUB84(dVar6,0));
  }
  else {
    dVar3 = dVar3 * dVar3;
    dVar6 = dVar6 - dVar3;
  }
  fVar2 = (float)((ulonglong)dVar6 >> 0x20);
  fStack_18 = fVar2;
  if (cVar9 != '\0') {
    fStack_18 = SUB84(dVar6,0);
    fStack_14 = fVar2;
  }
  (**(code **)(*ar5 + 0x180))(ar5,a5,a6,a7);
  uVar5 = SUB84(dVar6,0);
  fVar2 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar9 == '\0') {
    dVar3 = 4.14452302922905e-317;
    fStack_1c = fVar2;
  }
  else {
    fStack_1c = SUB84(dVar3,0);
    fStack_18 = fVar2;
  }
  pdVar1 = (double *)0x8;
  fVar2 = fStack_1c;
  fVar4 = fStack_18;
  if (cVar9 == '\0') {
    fVar2 = SUB84(dVar3,0);
    fVar4 = fStack_1c;
  }
  if (fVar2 != fVar4) {
    (**(code **)(*ar5 + 0x180))(ar5,a5,a6,a7);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(fStack_18,uVar5);
      dVar3 = (double)CONCAT44(0x42c80000,fVar4);
    }
    else {
      dVar6 = (double)CONCAT44(fStack_14,fStack_18);
      dVar3 = 2.0000004975590855;
    }
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) *
                               (SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20)),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 * (dVar3 / dVar3);
    }
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(0x40000000,fStack_14);
    }
    else {
      dVar3 = 1.6514225348597613e-308;
    }
    if (cVar8 == '\0') {
      fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar2,SUB84(dVar6,0));
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
      dVar6 = dVar6 - dVar3 / dVar3;
    }
    pdVar1 = (double *)(ar4 + 0x2c);
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)pdVar1,fVar2);
    }
    else {
      dVar3 = *pdVar1;
    }
    if (cVar8 == '\0') {
      bVar7 = (float)((ulonglong)dVar3 >> 0x20) < (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar7 = dVar3 < dVar6;
    }
    if (!bVar7) {
      (**(code **)(*ar5 + 0x180))(ar5,a5,a6,a7);
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(fStack_18,SUB84(dVar6,0));
        dVar3 = (double)CONCAT44(0x42c80000,(int)((ulonglong)dVar3 >> 0x20));
      }
      else {
        dVar6 = (double)CONCAT44(fStack_14,fStack_18);
        dVar3 = 2.0000004975590855;
      }
      if (cVar8 == '\0') {
        fVar4 = (float)((ulonglong)dVar3 >> 0x20);
        fVar2 = SUB84(dVar3,0) / fVar4;
        dVar3 = (double)CONCAT44(fVar4,fVar2);
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar2,SUB84(dVar6,0));
      }
      else {
        dVar3 = dVar3 / dVar3;
        dVar6 = dVar6 * dVar3;
      }
      fVar2 = SUB84(dVar3,0);
      if (cVar9 == '\0') {
        fVar2 = fStack_14;
      }
      pdVar1 = (double *)&DAT_8c02febc;
      if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(0x40000000,fVar2);
      }
      else {
        dVar3 = 1.6514225348597613e-308;
      }
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) -
                                 SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar3 / dVar3;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x2c) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x2c) = dVar6;
      }
    }
  }
  return pdVar1;
}

__asm__(".globl _FUN_8c02fdd8\n.set _FUN_8c02fdd8, _FUN_8c02fdd8_def\n");
