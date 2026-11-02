#include "../decls.h"
uint FUN_8c110680_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  
  cVar6 = '\0';
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') ||
     (*(uint *)(ar4 + 0x48) < *(uint *)(ar4 + 0x2c))) {
    uVar4 = (*(undefined4 **)(ar4 + 0xc))[1];
    pfVar1 = (float *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),uVar4,ar6,ar7);
    if (pfVar1 == (float *)0x0) {
      if (*(char *)(ar4 + 0x28) != '\0') {
        iVar3 = *(int *)(ar4 + 0x48);
        while (iVar3 != 0) {
          cVar6 = '\0';
          iVar3 = FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),uVar4,ar6,ar7);
          if (iVar3 == 0) break;
          if (cVar6 == '\0') {
            uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x44),*(undefined4 *)(ar4 + 0x34));
          }
          else {
            uVar5 = *(undefined8 *)(ar4 + 0x44);
          }
          *(bool *)iVar3 = (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20);
          iVar3 = *(int *)(ar4 + 0x48) + -1;
          *(int *)(ar4 + 0x48) = iVar3;
        }
        if (*(int *)(ar4 + 0x48) == 0) {
          *(undefined1 *)(ar4 + 0x28) = 0;
        }
        return (int)*(char *)(ar4 + 0x28);
      }
    }
    else {
      if (cVar6 == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x44),**(undefined4 **)(ar4 + 0x3c));
      }
      else {
        uVar5 = *(undefined8 *)(ar4 + 0x44);
      }
      *(float *)(ar4 + 0x44) = (float)((ulonglong)uVar5 >> 0x20) - (float)uVar5;
      pfVar2 = *(float **)(ar4 + 0x3c);
      *(float **)(ar4 + 0x3c) = pfVar2 + 1;
      *pfVar2 = *pfVar1;
      *(float *)(ar4 + 0x44) = *(float *)(ar4 + 0x44) + *pfVar1;
      if (*(int *)(ar4 + 0x3c) == *(int *)(ar4 + 0x40)) {
        *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x38);
      }
      if (*(int *)(ar4 + 0x48) == *(int *)(ar4 + 0x2c)) {
        cVar6 = '\0';
        uVar4 = FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),uVar4,ar6,ar7);
        if (cVar6 == '\0') {
          uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x44),*(undefined4 *)(ar4 + 0x34));
        }
        else {
          uVar5 = *(undefined8 *)(ar4 + 0x44);
        }
        *(bool *)uVar4 = (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20);
      }
      else {
        *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + 1;
      }
    }
  }
  iVar3 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar3 + 0x40)) == *(int *)(iVar3 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c110680\n.set _FUN_8c110680, _FUN_8c110680_def\n");
