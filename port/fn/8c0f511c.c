#include "../decls.h"
double * CAnimal_m8_0f511c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  int a5;
  undefined4 uVar2;
  double in_dr0;
  float fVar4;
  double dVar3;
  float in_fr13;
  undefined4 in_fr12;
  undefined4 in_fr15;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  (**(code **)(*ar5 + 0x184))(ar5,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    in_fr13 = (float)((ulonglong)in_dr0 >> 0x20);
  }
  a5 = ar4 + 0x30;
  (**(code **)(*ar5 + 0x128))(ar5,a5,ar6,ar7);
  if (cVar9 == '\0') {
    in_fr15 = (int)((ulonglong)in_dr0 >> 0x20);
  }
  (**(code **)(*(int *)(ar4 + 8) + 0x174))(ar4,a5,ar6,ar7);
  uVar2 = SUB84(in_dr0,0);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  if (cVar9 == '\0') {
    fVar4 = 1.1754944e-38;
  }
  else {
    uVar2 = 0x800000;
    fVar4 = -NAN;
  }
  fVar5 = SUB84(in_dr0,0);
  fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
  if (in_fr13 == fVar4) {
    if (cVar8 == '\0') {
      in_dr0 = (double)CONCAT44(fVar6,fVar5 + fVar6);
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
    }
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),uVar2);
    }
    else {
      dVar3 = *(double *)(ar4 + 0x34);
    }
    if (cVar8 == '\0') {
      bVar7 = SUB84(in_dr0,0) < (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      bVar7 = in_dr0 < dVar3;
    }
    if (bVar7) {
      pdVar1 = (double *)0x74;
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
    }
    else {
      pdVar1 = (double *)0x74;
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),uVar2);
    }
    else {
      dVar3 = *(double *)(ar4 + 0x34);
    }
    if (cVar8 == '\0') {
      bVar7 = in_fr13 < (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      bVar7 = (double)CONCAT44(in_fr12,in_fr13) < dVar3;
    }
    if (bVar7) {
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(fVar6,fVar5 + fVar6);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar3,0));
      }
      else {
        dVar3 = *(double *)(ar4 + 0x34);
      }
      if (cVar8 == '\0') {
        bVar7 = SUB84(in_dr0,0) < (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        bVar7 = in_dr0 < dVar3;
      }
      if (bVar7) {
        pdVar1 = (double *)0x74;
        *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
      }
      else {
        pdVar1 = (double *)0x74;
        *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
      }
    }
    else {
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x10;
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44(fVar6,fVar5 + fVar6);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      pdVar1 = (double *)(ar4 + 0x34);
      if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)pdVar1,SUB84(dVar3,0));
      }
      else {
        dVar3 = *pdVar1;
      }
      if (cVar8 == '\0') {
        bVar7 = SUB84(in_dr0,0) < (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        bVar7 = in_dr0 < dVar3;
      }
      if (!bVar7) {
        pdVar1 = (double *)0x74;
        *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
      }
    }
  }
  return pdVar1;
}

__asm__(".globl _CAnimal_m8_0f511c\n.set _CAnimal_m8_0f511c, _CAnimal_m8_0f511c_def\n");
