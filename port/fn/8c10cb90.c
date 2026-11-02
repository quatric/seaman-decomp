#include "../decls.h"
undefined4 FUN_8c10cb90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 ar5_00;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float fVar9;
  ulonglong in_dr2;
  undefined8 uVar10;
  uint in_fr5;
  ulonglong uVar11;
  char cVar12;
  
  if (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') {
    ar5_00 = *(undefined4 *)(*(int *)(ar4 + 0xc) + 4);
    puVar1 = (uint *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),ar5_00,ar6,ar7);
    if (puVar1 != (uint *)0x0) {
      cVar12 = '\0';
      puVar2 = (uint *)FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),ar5_00,ar6,ar7);
      puVar8 = *(undefined4 **)(ar4 + 0x34);
      if (cVar12 == '\0') {
        in_fr5 = *(uint *)(ar4 + 0x38);
        in_dr2 = (ulonglong)*puVar1;
        *puVar2 = *puVar1;
      }
      else {
        *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
      }
      pfVar4 = (float *)(puVar2 + 1);
      pfVar3 = (float *)(puVar1 + *(int *)(ar4 + 0x30) + 1);
      pfVar7 = pfVar4 + *(int *)(ar4 + 0x28);
      iVar6 = *(int *)(ar4 + 0x2c);
      if (cVar12 == '\0') {
        uVar11 = (ulonglong)in_fr5;
      }
      else {
        uVar11 = 0x3f00000000000000;
      }
      for (; pfVar4 < pfVar7; pfVar4 = pfVar4 + 1) {
        pfVar5 = pfVar3;
        if (cVar12 == '\0') {
          *pfVar4 = (float)(uVar11 >> 0x20);
        }
        else {
          *(ulonglong *)pfVar4 = uVar11;
        }
        while (fVar9 = (float)in_dr2, pfVar5 < pfVar3 + iVar6) {
          if (cVar12 == '\0') {
            fVar9 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            uVar10 = CONCAT44(*pfVar4,*puVar8);
            puVar8 = puVar8 + 1;
          }
          else {
            fVar9 = (float)((ulonglong)*(undefined8 *)pfVar5 >> 0x20);
            pfVar5 = pfVar5 + 2;
            uVar10 = *(undefined8 *)pfVar4;
            puVar8 = puVar8 + 2;
          }
          cVar12 = '\0';
          fVar9 = fVar9 * (float)uVar10 + (float)((ulonglong)uVar10 >> 0x20);
          in_dr2 = CONCAT44(fVar9,(float)uVar10);
          *pfVar4 = fVar9;
        }
        if (cVar12 == '\0') {
          fVar9 = *pfVar4;
        }
        cVar12 = '\0';
        fVar9 = fVar9 * (float)uVar11;
        in_dr2 = (ulonglong)(uint)fVar9;
        *pfVar4 = fVar9;
      }
      pfVar7 = pfVar7 + -*(int *)(ar4 + 0x28);
      if (cVar12 == '\0') {
        uVar10 = CONCAT44(*pfVar7,0x3f000000);
      }
      else {
        uVar10 = *(undefined8 *)pfVar7;
      }
      *pfVar7 = (float)((ulonglong)uVar10 >> 0x20) * (float)uVar10;
      iVar6 = **(int **)(ar4 + 0xc);
      return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar6 + 0x40)) ==
             *(int *)(iVar6 + 0x3c) ^ 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c10cb90\n.set _FUN_8c10cb90, _FUN_8c10cb90_def\n");
