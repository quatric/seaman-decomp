#include "../decls.h"
undefined8 * FUN_8c112680_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  float *a5;
  uint uVar5;
  float *pfVar6;
  undefined8 uVar7;
  double dVar8;
  float fVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  
  uVar5 = 0;
  puVar2 = &DAT_8c112824;
  iVar4 = ar4[1];
  iVar3 = *ar4;
  a5 = (float *)(uint)ar4[3];
  pfVar6 = a5;
  if (iVar3 * iVar4 != 0) {
    do {
      uVar7 = 0x4000000000000000;
      thunk_FUN_8c013cd8(ar4,a5,ar6,ar7);
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      thunk_FUN_8c013dfc(ar4,a5,ar6,ar7);
      uVar5 = uVar5 + 1;
      cVar1 = (char)((((uint)bVar10 << 0x12 | (uint)bVar11 << 0x13 | (uint)bVar12 << 0x14) &
                     0x100000) >> 0x14);
      if (cVar1 == '\0') {
        dVar8 = (double)CONCAT44(0x3fe00000,(int)uVar7);
      }
      else {
        dVar8 = -1.5698269832574723e-250;
      }
      puVar2 = (undefined8 *)&DAT_8c112830;
      if (cVar1 == '\0') {
        dVar8 = (double)((ulonglong)dVar8 & 0xffffffff00000000);
      }
      if (cVar1 == '\0') {
        fVar9 = *pfVar6;
      }
      else {
        fVar9 = (float)((ulonglong)*(undefined8 *)pfVar6 >> 0x20);
      }
      *pfVar6 = fVar9 - (float)((double)(float)((ulonglong)uVar7 >> 0x20) * dVar8);
      pfVar6 = pfVar6 + 1;
    } while (uVar5 < (uint)(iVar3 * iVar4));
  }
  return puVar2;
}

__asm__(".globl _FUN_8c112680\n.set _FUN_8c112680, _FUN_8c112680_def\n");
