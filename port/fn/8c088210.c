#include "../decls.h"
undefined4 * CAnimal_m7_088210_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  double in_dr0;
  double dVar2;
  undefined4 in_fr3;
  double dVar4;
  double in_dr14;
  double in_xd14;
  bool bVar5;
  char cVar6;
  char cVar7;
  float fVar3;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (**(code **)(*ar5 + 0x184))(ar5,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd14;
  }
  CAnimal_m7_0f49b8(ar4,ar5,ar6,ar7);
  puVar1 = (undefined4 *)(*(uint *)(ar4 + 0x74) & 0x40);
  if (puVar1 != (undefined4 *)0x40) {
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),in_fr3);
    }
    else {
      dVar4 = *(double *)(ar4 + 0x34);
    }
    puVar1 = &DAT_8c08827c;
    dVar2 = in_dr0;
    if (cVar7 == '\0') {
      dVar2 = (double)CONCAT44(SUB84(in_dr14,0),0x41200000);
    }
    if (cVar6 == '\0') {
      fVar3 = (float)((ulonglong)dVar2 >> 0x20) - SUB84(dVar2,0);
      dVar2 = (double)CONCAT44(fVar3,SUB84(dVar2,0));
      bVar5 = fVar3 < (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      dVar2 = dVar2 - dVar2;
      bVar5 = dVar2 < dVar4;
    }
    if (bVar5) {
      puVar1 = &DAT_8c08827c;
      if (cVar7 == '\0') {
        dVar4 = (double)CONCAT44(0x41200000,SUB84(dVar2,0));
      }
      else {
        dVar4 = 1.251627927188126e-308;
      }
      if (cVar6 == '\0') {
        fVar3 = SUB84(in_dr14,0) - (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(in_dr14 - dVar4,0);
      }
      if (cVar7 == '\0') {
        *(float *)(ar4 + 0x34) = fVar3;
      }
      else {
        *(double *)(ar4 + 0x34) = in_dr0;
      }
    }
  }
  return puVar1;
}

__asm__(".globl _CAnimal_m7_088210\n.set _CAnimal_m7_088210, _CAnimal_m7_088210_def\n");
