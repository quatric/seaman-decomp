#include "../decls.h"
uint FUN_8c23b6dc_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float in_fr11;
  float fVar14;
  float fVar15;
  undefined8 in_xd4;
  char cVar16;
  char cVar17;
  
  *(float *)((int)ar5 + 4) = *(float *)((int)ar5 + 4) + *(float *)(ar4 + 0xf8);
  fVar6 = *(float *)(ar4 + 0xfc);
  *(float *)(ar5 + 1) = *(float *)(ar5 + 1) + fVar6;
  *(float *)((int)ar5 + 0xc) = *(float *)((int)ar5 + 0xc) + *(float *)(ar4 + 0x100);
  cVar17 = '\0';
                    
  cVar16 = '\0';
                    
  uVar1 = (uint)(in_fr11 < *(float *)(ar4 + 0x6c)) << 1 | (uint)(0.0 < fVar6);
  if (uVar1 == 3) {
    fVar14 = 1.0 / SQRT(in_fr11);
    uVar1 = 4;
    fVar15 = 1.0;
    if (*(float *)(ar4 + 0x68) < in_fr11) {
      fVar15 = fVar14 * fVar14 * *(float *)(ar4 + 0x68);
    }
    fVar13 = *(float *)(ar4 + 0x70);
    fVar11 = *(float *)(ar4 + 0x74);
    fVar4 = *(float *)(ar4 + 0x108);
    fVar6 = fVar6 * fVar14;
    fVar8 = *(float *)(ar4 + 0x10c);
    fVar14 = *(float *)(ar4 + 0x110);
    *(float *)((int)ar5 + 4) = fVar6 * fVar4 + *(float *)((int)ar5 + 4);
    *(float *)(ar5 + 1) = fVar6 * fVar8 + *(float *)(ar5 + 1);
    dVar5 = (double)CONCAT44(fVar15,fVar4);
    *(float *)((int)ar5 + 0xc) = fVar6 * fVar14 + *(float *)((int)ar5 + 0xc);
    if (fVar11 < fVar6 * fVar6) {
      if (fVar6 * fVar6 < fVar13) {
        dVar5 = (double)CONCAT44(fVar15,*(float *)(ar4 + 0x80) * fVar15);
        FUN_8c23a8d8(*(undefined4 *)(ar4 + 0x88),ar5,ar6,ar7,0x88);
        if (cVar16 == '\0') {
          dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0)
                                  );
        }
        else {
          dVar5 = dVar5 * dVar5;
        }
      }
      uVar1 = 4;
      puVar3 = (undefined8 *)((int)ar5 + 0x14);
      if (cVar17 == '\0') {
        uVar12 = CONCAT44(*(undefined4 *)ar5,fVar11);
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),*(undefined4 *)(ar4 + 0x118));
        uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x11c),*(undefined4 *)(ar4 + 0x120));
        uVar9 = CONCAT44(*(undefined4 *)puVar3,*(undefined4 *)(ar5 + 3));
        puVar2 = (undefined8 *)((int)ar5 + 0x1c);
        uVar10 = CONCAT44(*(undefined4 *)puVar2,*(undefined4 *)(ar4 + 0x114));
      }
      else {
        uVar12 = *ar5;
        uVar7 = *(undefined8 *)(ar4 + 0x124);
        uVar9 = *puVar3;
        in_xd4 = *(undefined8 *)((int)ar5 + 0x1c);
        puVar2 = (undefined8 *)((int)ar5 + 0x24);
        uVar10 = *puVar2;
      }
      fVar6 = (float)((ulonglong)dVar5 >> 0x20);
      if (cVar16 == '\0') {
        uVar9 = CONCAT44(fVar6 * SUB84(dVar5,0) + (float)((ulonglong)uVar9 >> 0x20),
                         fVar6 * (float)((ulonglong)uVar7 >> 0x20) + (float)uVar9);
        fVar14 = (float)uVar10;
        uVar10 = CONCAT44(fVar6 * (float)uVar7 + (float)((ulonglong)uVar10 >> 0x20),fVar14);
        uVar12 = CONCAT44(fVar6 * fVar14 + (float)((ulonglong)uVar12 >> 0x20),(int)uVar12);
      }
      if (cVar17 == '\0') {
        *(int *)puVar3 = (int)((ulonglong)uVar9 >> 0x20);
        *(int *)(ar5 + 3) = (int)uVar9;
        *(int *)puVar2 = (int)((ulonglong)uVar10 >> 0x20);
        *(int *)ar5 = (int)((ulonglong)uVar12 >> 0x20);
      }
      else {
        *puVar3 = uVar9;
        ar5[3] = in_xd4;
        *puVar2 = uVar10;
        *ar5 = uVar12;
      }
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c23b6dc\n.set _FUN_8c23b6dc, _FUN_8c23b6dc_def\n");
