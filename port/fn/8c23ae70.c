#include "../decls.h"
undefined4 FUN_8c23ae70_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar5;
  double dVar4;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float in_fr11;
  undefined8 in_xd4;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
                    
  cVar14 = '\0';
  if (in_fr11 < 0.0) {
    fVar13 = *(float *)(ar4 + 0x70);
    fVar5 = -in_fr11;
    fVar11 = *(float *)(ar4 + 0x74);
    fVar3 = *(float *)(ar4 + 0x108);
    fVar8 = *(float *)(ar4 + 0x10c);
    fVar6 = *(float *)(ar4 + 0x110);
    *(float *)((int)ar5 + 4) = fVar5 * fVar3 + *(float *)((int)ar5 + 4);
    *(float *)(ar5 + 1) = fVar5 * fVar8 + *(float *)(ar5 + 1);
    *(float *)((int)ar5 + 0xc) = fVar5 * fVar6 + *(float *)((int)ar5 + 0xc);
    if (fVar11 < in_fr11 * in_fr11) {
      dVar4 = (double)CONCAT44(0x3f800000,fVar3);
      if (in_fr11 * in_fr11 < fVar13) {
        dVar4 = (double)CONCAT44(0x3f800000,*(undefined4 *)(ar4 + 0x80));
        FUN_8c23a8d8(*(undefined4 *)(ar4 + 0x88),ar5,ar6,ar7,0x88);
        if (cVar14 == '\0') {
          dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * SUB84(dVar4,0),SUB84(dVar4,0)
                                  );
        }
        else {
          dVar4 = dVar4 * dVar4;
        }
      }
      puVar2 = (undefined8 *)((int)ar5 + 0x14);
      if (cVar15 == '\0') {
        uVar12 = CONCAT44(*(undefined4 *)ar5,fVar11);
        dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x118));
        uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x11c),*(undefined4 *)(ar4 + 0x120));
        uVar9 = CONCAT44(*(undefined4 *)puVar2,*(undefined4 *)(ar5 + 3));
        puVar1 = (undefined8 *)((int)ar5 + 0x1c);
        uVar10 = CONCAT44(*(undefined4 *)puVar1,*(undefined4 *)(ar4 + 0x114));
      }
      else {
        uVar12 = *ar5;
        uVar7 = *(undefined8 *)(ar4 + 0x124);
        uVar9 = *puVar2;
        in_xd4 = *(undefined8 *)((int)ar5 + 0x1c);
        puVar1 = (undefined8 *)((int)ar5 + 0x24);
        uVar10 = *puVar1;
      }
      fVar3 = (float)((ulonglong)dVar4 >> 0x20);
      if (cVar14 == '\0') {
        uVar9 = CONCAT44(fVar3 * SUB84(dVar4,0) + (float)((ulonglong)uVar9 >> 0x20),
                         fVar3 * (float)((ulonglong)uVar7 >> 0x20) + (float)uVar9);
        fVar5 = (float)uVar10;
        uVar10 = CONCAT44(fVar3 * (float)uVar7 + (float)((ulonglong)uVar10 >> 0x20),fVar5);
        uVar12 = CONCAT44(fVar3 * fVar5 + (float)((ulonglong)uVar12 >> 0x20),(int)uVar12);
      }
      if (cVar15 == '\0') {
        *(int *)puVar2 = (int)((ulonglong)uVar9 >> 0x20);
        *(int *)(ar5 + 3) = (int)uVar9;
        *(int *)puVar1 = (int)((ulonglong)uVar10 >> 0x20);
        *(int *)ar5 = (int)((ulonglong)uVar12 >> 0x20);
      }
      else {
        *puVar2 = uVar9;
        ar5[3] = in_xd4;
        *puVar1 = uVar10;
        *ar5 = uVar12;
      }
    }
  }
  return 4;
}

__asm__(".globl _FUN_8c23ae70\n.set _FUN_8c23ae70, _FUN_8c23ae70_def\n");
