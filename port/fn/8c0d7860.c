#include "../decls.h"
double * Class_12bea8_m1_0d7860_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  int iVar2;
  int *ar4_00;
  int *ar5_00;
  undefined4 in_fr1;
  double dVar3;
  double dVar4;
  undefined4 in_fr4;
  float fVar5;
  undefined8 in_dr14;
  undefined8 in_xd14;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  dVar4 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  pdVar1 = (double *)(uint)ar4[0xc];
  if (pdVar1 == (double *)0x0) {
    ar5_00 = ar4 + 5;
    ar4_00 = ar4 + 1;
    FUN_8c023aa0(ar4_00,ar5_00,ar6,ar7);
    pdVar1 = (double *)(ar4 + 2);
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(*(int *)pdVar1,in_fr1);
    }
    else {
      dVar3 = *pdVar1;
    }
    if (cVar7 == '\0') {
      bVar6 = (float)((ulonglong)dVar3 >> 0x20) < SUB84(dVar4,0);
    }
    else {
      bVar6 = dVar3 < dVar4;
    }
    if (bVar6) {
      if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44(0x3f000000,SUB84(dVar3,0));
      }
      else {
        dVar3 = -7.532505566649672e-251;
      }
      if (cVar7 == '\0') {
        fVar5 = SUB84(dVar4,0) + (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar4 + dVar3,0);
      }
      if (cVar8 == '\0') {
        ar4[2] = (int)fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 2) = in_xd14;
      }
      iVar2 = rand(ar4_00,ar5_00,ar6,ar7);
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
      }
      else {
        dVar4 = 409.60016536712646;
      }
      if (cVar7 == '\0') {
        fVar5 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x4079999a,fVar5);
      }
      else {
        dVar4 = 2.99393119985475e-78;
      }
      if (cVar7 == '\0') {
        iVar2 = (int)(SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        iVar2 = (int)(dVar4 * dVar4);
      }
      ar4[0xd] = iVar2;
      pdVar1 = (double *)0x1;
      ar4[0xc] = 1;
    }
  }
  else if (pdVar1 == (double *)0x1) {
    pdVar1 = (double *)0x2;
    ar4[0xc] = 2;
  }
  else if (pdVar1 == (double *)0x2) {
    pdVar1 = (double *)(**(code **)(*ar4 + 0x14))(ar4,ar5,ar6,ar7);
  }
  return pdVar1;
}

__asm__(".globl _Class_12bea8_m1_0d7860\n.set _Class_12bea8_m1_0d7860, _Class_12bea8_m1_0d7860_def\n");
