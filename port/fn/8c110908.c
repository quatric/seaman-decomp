#include "../decls.h"
undefined4 FUN_8c110908_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain1)

{
  byte bVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  uint ar5_00;
  int iVar6;
  undefined4 ar6_00;
  int unaff_r14;
  float extraout_fr3;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  char cVar10;
  
  cVar10 = '\0';
  bVar1 = *(byte *)(unaff_r14 + 8);
  iVar4 = *(int *)(unaff_r14 + 0xc);
  if (*(char *)(**(int **)(unaff_r14 + 0x10) + ain1) != '\x01') {
    ar6_00 = *(undefined4 *)(unaff_r14 + 0x28);
    ar5_00 = (uint)*(byte *)(unaff_r14 + 8);
    uVar9 = 0;
    uVar2 = FUN_8c112074(*(undefined4 *)(unaff_r14 + 0xc),ar5_00,ar6_00,ar7);
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
    if (cVar10 == '\0') {
      fVar8 = 1.0;
    }
    else {
      fVar8 = -NAN;
    }
    uVar2 = 0;
    fVar7 = extraout_fr3;
    if (*(char *)(unaff_r14 + 8) != '\0') {
      do {
        if (*(int *)(*(int *)(unaff_r14 + 0x28) + uVar2 * 4) != 0) {
          if (cVar10 == '\0') {
            fVar7 = **(float **)(*(int *)(unaff_r14 + 0x28) + uVar2 * 4);
          }
          cVar10 = '\0';
          uVar9 = CONCAT44((float)((ulonglong)uVar9 >> 0x20) + fVar8,(float)uVar9 + fVar7);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(byte *)(unaff_r14 + 8));
    }
    pfVar3 = (float *)FUN_8c111dfe(**(undefined4 **)(unaff_r14 + 0x10),ar5_00,ar6_00,ar7);
    *pfVar3 = (float)uVar9 / (float)((ulonglong)uVar9 >> 0x20);
  }
  piVar5 = *(int **)(unaff_r14 + 0xc);
  while( true ) {
    if ((int *)((uint)bVar1 * 8 + iVar4) <= piVar5) {
      return 1;
    }
    iVar6 = *piVar5;
    if ((*(int *)(*(int *)(iVar6 + 0x2c) + piVar5[1] * 4) != 0) &&
       (*(int *)(*(int *)(iVar6 + 0x40) + piVar5[1] * 4) == *(int *)(iVar6 + 0x3c))) break;
    piVar5 = piVar5 + 2;
  }
  return 0;
}

__asm__(".globl _FUN_8c110908\n.set _FUN_8c110908, _FUN_8c110908_def\n");
