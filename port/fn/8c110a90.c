#include "../decls.h"
undefined8 * FUN_8c110a90_def(int ar4,int ar5,float *ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  
  uVar6 = 0;
  puVar1 = &DAT_8c110bd0;
  if (*(int *)(ar4 + 0x28) != 0) {
    do {
      iVar2 = uVar6 * 4;
      *ar6 = 10.0;
      pfVar3 = *(float **)(*(int *)(ar4 + 0x2c) + iVar2);
      puVar1 = *(undefined8 **)(ar4 + 0x30);
      pfVar5 = pfVar3 + *(int *)(*(int *)(ar4 + 0x34) + iVar2);
      pfVar4 = (float *)(*(int *)((int)puVar1 + iVar2) * 4 + ar5);
      for (; pfVar3 < pfVar5; pfVar3 = pfVar3 + 1) {
        fVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        *ar6 = fVar7 * *pfVar3 + *ar6;
      }
      uVar6 = uVar6 + 1;
      ar6 = ar6 + 1;
    } while (uVar6 < *(uint *)(ar4 + 0x28));
  }
  return puVar1;
}

__asm__(".globl _FUN_8c110a90\n.set _FUN_8c110a90, _FUN_8c110a90_def\n");
