#include "../decls.h"
undefined4 * FUN_8c0d9600_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined4 in_fr3;
  double dVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar3 = *(float *)(ar4 + 0x14) + 1.0;
  *(float *)(ar4 + 0x14) = fVar3;
  iVar2 = *(int *)(ar4 + 0x10);
  puVar1 = (undefined4 *)0x8;
  if ((iVar2 < 9) && (-1 < iVar2)) {
    puVar1 = (undefined4 *)(&switchdata_8c0d962e_8c0d9634)[iVar2];
                    
    switch(iVar2) {
    default:
      puVar1 = (undefined4 *)FUN_8c031588(ar4 + *(int *)(ar4 + 0x10) * 4 + 0x2c,ar5,ar6,ar7);
      if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x14),in_fr3);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x14);
      }
      fVar3 = (float)(int)puVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar7 == '\0' && fVar3 < 0.0) {
        puVar1 = &DAT_8c0d9718;
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = -1.2916629790996152e-250;
        }
        if (cVar7 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar7 == '\0') {
        bVar6 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar4,0);
      }
      else {
        bVar6 = dVar5 < dVar4;
      }
      if (!bVar6) {
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x14) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x14) = (ulonglong)dVar4 & 0xffffffff;
        }
        *(char *)(ar4 + 0x18) = *(char *)(ar4 + 0x18) + -1;
        puVar1 = (undefined4 *)(uint)*(byte *)(ar4 + 0x18);
        if (puVar1 == (undefined4 *)0x0) {
          puVar1 = (undefined4 *)0x8;
          *(undefined4 *)(ar4 + 0x10) = 8;
        }
      }
      break;
    case 6:
      puVar1 = (undefined4 *)FUN_8c031588(ar4 + *(int *)(ar4 + 0x10) * 4 + 0x2c,ar5,ar6,ar7);
      if (cVar8 == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x14),in_fr3);
      }
      else {
        dVar5 = *(double *)(ar4 + 0x14);
      }
      fVar3 = (float)(int)puVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar7 == '\0' && fVar3 < 0.0) {
        puVar1 = &DAT_8c0d9718;
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(0x4f800000,fVar3);
        }
        else {
          dVar4 = -1.2916629790996152e-250;
        }
        if (cVar7 == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar7 == '\0') {
        bVar6 = (float)((ulonglong)dVar5 >> 0x20) < SUB84(dVar4,0);
      }
      else {
        bVar6 = dVar5 < dVar4;
      }
      if (!bVar6) {
        puVar1 = (undefined4 *)0x8;
        *(undefined4 *)(ar4 + 0x10) = 8;
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x14) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x14) = (ulonglong)dVar4 & 0xffffffff;
        }
      }
      break;
    case 7:
      break;
    case 8:
      puVar1 = (undefined4 *)FUN_8c0d97ec(ar4,ar5,ar6,ar7);
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x14) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x14) = (ulonglong)(uint)fVar3;
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0d9600\n.set _FUN_8c0d9600, _FUN_8c0d9600_def\n");
