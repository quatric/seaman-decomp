#include "../decls.h"
undefined4 FUN_8c06add8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  undefined8 in_dr0;
  float fVar3;
  double dVar2;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  (**(code **)(*ar5 + 0x184))(ar5,ar5,ar6,ar7);
  fVar1 = (float)in_dr0;
  if (cVar6 == '\0') {
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
  }
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  if (cVar6 == '\0') {
    fVar3 = 1.1754944e-38;
  }
  else {
    fVar1 = 1.1754944e-38;
    fVar3 = -NAN;
  }
  if (in_fr15 == fVar3) {
    (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x30,ar6,ar7);
    if (cVar6 == '\0') {
      fVar1 = *(float *)(ar4 + 0x34);
    }
    if (cVar5 != '\0' || fVar1 <= fVar3) {
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
    }
    else {
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
    }
  }
  else {
    (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x30,ar6,ar7);
    if (cVar6 == '\0') {
      fVar1 = *(float *)(ar4 + 0x34);
    }
    if (cVar5 != '\0' || fVar1 <= fVar3) {
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
    }
    else {
      if (cVar6 == '\0') {
        dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar1);
      }
      else {
        dVar2 = *(double *)(ar4 + 0x34);
      }
      if (cVar5 == '\0') {
        bVar4 = in_fr15 < (float)((ulonglong)dVar2 >> 0x20);
      }
      else {
        bVar4 = (double)CONCAT44(in_fr14,in_fr15) < dVar2;
      }
      if (bVar4) {
        *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
      }
      else {
        *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x10;
      }
    }
  }
  return 0x74;
}

__asm__(".globl _FUN_8c06add8\n.set _FUN_8c06add8, _FUN_8c06add8_def\n");
