#include "../decls.h"
uint FUN_8c23ab90_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  float fVar6;
  double dVar5;
  float in_fr3;
  undefined8 uVar7;
  float fVar9;
  undefined8 uVar8;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float in_fr11;
  undefined8 in_xd4;
  char cVar13;
  char cVar14;
  int iStack_c;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  cVar14 = '\0';
                    
  cVar13 = '\0';
                    
  fVar12 = 1.0 / in_fr11;
                    
  fVar10 = 0.0;
  fVar6 = in_fr3 * in_fr3 * fVar12;
  fVar9 = in_fr3 * in_fr3 * fVar12;
  uVar1 = (((uint)(0.0 < in_fr3) << 1 | (uint)(in_fr11 < *(float *)(ar4 + 0x6c))) << 1 |
          (uint)(0.0 < -in_fr3)) << 1 | (uint)(*(float *)(ar4 + 0x74) < fVar9);
  if (uVar1 == 0xf) {
    if (*(float *)(ar4 + 0x68) < in_fr11) {
      fVar6 = fVar6 * *(float *)(ar4 + 0x68) * fVar12;
    }
    if (*(float *)(ar4 + 0x70) <= fVar9) {
      fVar10 = *(float *)(ar4 + 0x114);
      dVar5 = (double)CONCAT44(fVar6,*(float *)(ar4 + 0x118));
      fVar12 = *(float *)(ar4 + 0x11c);
      fVar9 = *(float *)(ar4 + 0x120);
      ar5[5] = fVar6 * *(float *)(ar4 + 0x118) + ar5[5];
      ar5[6] = fVar6 * fVar12 + ar5[6];
      ar5[7] = fVar6 * fVar9 + ar5[7];
      *ar5 = fVar6 * fVar10 + *ar5;
    }
    else {
      dVar5 = (double)CONCAT44(fVar6 * *(float *)(ar4 + 0x80),*(undefined4 *)(ar4 + 0xa0));
      FUN_8c23a8d8(*(undefined4 *)(ar4 + 0x88),ar5,ar6,ar7,0x88);
      if (cVar14 == '\0') {
        dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),iStack_c);
        piVar4 = (int *)auStack_8;
      }
      else {
        piVar4 = (int *)auStack_4;
      }
      ar4 = *piVar4;
      if (cVar13 == '\0') {
        dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 * dVar5;
      }
    }
    uVar1 = 4;
    pfVar3 = ar5 + 1;
    if (cVar14 == '\0') {
      dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),*(undefined4 *)(ar4 + 0x108));
      uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x10c),*(undefined4 *)(ar4 + 0x110));
      uVar8 = CONCAT44(*pfVar3,ar5[2]);
      pfVar2 = ar5 + 3;
      uVar11 = CONCAT44(*pfVar2,fVar10);
    }
    else {
      uVar7 = *(undefined8 *)(ar4 + 0x110);
      uVar8 = *(undefined8 *)pfVar3;
      in_xd4 = *(undefined8 *)(ar5 + 3);
      pfVar2 = ar5 + 5;
      uVar11 = *(undefined8 *)pfVar2;
    }
    fVar6 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar13 == '\0') {
      uVar8 = CONCAT44(fVar6 * SUB84(dVar5,0) + (float)((ulonglong)uVar8 >> 0x20),
                       fVar6 * (float)((ulonglong)uVar7 >> 0x20) + (float)uVar8);
      uVar11 = CONCAT44(fVar6 * (float)uVar7 + (float)((ulonglong)uVar11 >> 0x20),(int)uVar11);
    }
    if (cVar14 == '\0') {
      *pfVar3 = (float)((ulonglong)uVar8 >> 0x20);
      ar5[2] = (float)uVar8;
      *pfVar2 = (float)((ulonglong)uVar11 >> 0x20);
    }
    else {
      *(undefined8 *)pfVar3 = uVar8;
      *(undefined8 *)(ar5 + 2) = in_xd4;
      *(undefined8 *)pfVar2 = uVar11;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c23ab90\n.set _FUN_8c23ab90, _FUN_8c23ab90_def\n");
