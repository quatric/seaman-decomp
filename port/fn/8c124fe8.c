#include "../decls.h"
uint FUN_8c124fe8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  float *pfVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 in_dr4;
  float fVar9;
  char cVar10;
  short *psStack_1c;
  
  cVar10 = '\0';
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') &&
     (psStack_1c = (short *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),
                                         *(undefined4 *)(*(int *)(ar4 + 0xc) + 4),ar6,ar7),
     psStack_1c != (short *)0x0)) {
    pfVar7 = *(float **)(ar4 + 0x2c);
    puVar6 = *(undefined8 **)(ar4 + 0x44);
    uVar1 = *(ushort *)(ar4 + 0x36);
    if (cVar10 == '\0') {
      in_dr4 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(ar4 + 0x3c));
    }
    uVar5 = (uint)uVar1;
    iVar4 = 0;
    if (uVar5 != 0) {
      do {
        iVar4 = iVar4 + 1;
        cVar10 = '\0';
        fVar9 = (float)(int)*psStack_1c;
        *pfVar7 = fVar9 - (float)in_dr4;
        pfVar7 = pfVar7 + 1;
        in_dr4 = CONCAT44(fVar9,fVar9);
        psStack_1c = psStack_1c + 1;
      } while (iVar4 < (int)uVar5);
    }
    if (cVar10 == '\0') {
      *(int *)(ar4 + 0x3c) = (int)((ulonglong)in_dr4 >> 0x20);
    }
    else {
      *(undefined8 *)(ar4 + 0x3c) = in_dr4;
    }
    if (pfVar7 == *(float **)(ar4 + 0x30)) {
      pfVar7 = *(float **)(ar4 + 0x28);
    }
    iVar4 = (uint)uVar1 * 4;
    if (*(char *)(ar4 + 0x40) == '\0') {
      cVar10 = '\0';
      pfVar2 = (float *)FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),(int)(short)uVar1,ar6,ar7);
      *(float **)(ar4 + 0x2c) = pfVar7;
      puVar3 = (undefined8 *)((uint)*(ushort *)(ar4 + 0x38) * 4 + (int)puVar6);
      pfVar7 = pfVar7 + (uVar5 - *(ushort *)(ar4 + 0x38));
      while (puVar6 < puVar3) {
        if (cVar10 == '\0') {
          fVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          uVar8 = CONCAT44(*(undefined4 *)puVar6,fVar9);
          puVar6 = (undefined8 *)((int)puVar6 + 4);
        }
        else {
          pfVar7 = pfVar7 + 2;
          uVar8 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        cVar10 = '\0';
        *pfVar2 = (float)((ulonglong)uVar8 >> 0x20) * (float)uVar8;
        pfVar2 = pfVar2 + 1;
      }
      if (pfVar7 == *(float **)(ar4 + 0x30)) {
        pfVar7 = *(float **)(ar4 + 0x28);
      }
      puVar3 = (undefined8 *)(iVar4 + (int)puVar6);
      while (puVar6 < puVar3) {
        if (cVar10 == '\0') {
          fVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          uVar8 = CONCAT44(*(undefined4 *)puVar6,fVar9);
          puVar6 = (undefined8 *)((int)puVar6 + 4);
        }
        else {
          pfVar7 = pfVar7 + 2;
          uVar8 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        cVar10 = '\0';
        *pfVar2 = (float)((ulonglong)uVar8 >> 0x20) * (float)uVar8;
        pfVar2 = pfVar2 + 1;
      }
      if (pfVar7 == *(float **)(ar4 + 0x30)) {
        pfVar7 = *(float **)(ar4 + 0x28);
      }
      puVar3 = (undefined8 *)((uint)*(ushort *)(ar4 + 0x38) * 4 + (int)puVar6);
      while (puVar6 < puVar3) {
        if (cVar10 == '\0') {
          fVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          uVar8 = CONCAT44(*(undefined4 *)puVar6,fVar9);
          puVar6 = (undefined8 *)((int)puVar6 + 4);
        }
        else {
          pfVar7 = pfVar7 + 2;
          uVar8 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        cVar10 = '\0';
        *pfVar2 = (float)((ulonglong)uVar8 >> 0x20) * (float)uVar8;
        pfVar2 = pfVar2 + 1;
      }
    }
    else {
      puVar6 = *(undefined8 **)(ar4 + 0x2c);
      if (cVar10 == '\0') {
        *(undefined4 *)puVar6 = 0;
      }
      else {
        *puVar6 = 0x8c013ef400000000;
      }
      memmove(pfVar7,puVar6,iVar4,ar7);
      pfVar7 = pfVar7 + uVar1;
      if (pfVar7 == *(float **)(ar4 + 0x30)) {
        pfVar7 = *(float **)(ar4 + 0x28);
      }
      *(undefined1 *)(ar4 + 0x40) = 0;
      *(float **)(ar4 + 0x2c) = pfVar7;
    }
  }
  iVar4 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar4 + 0x40)) == *(int *)(iVar4 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c124fe8\n.set _FUN_8c124fe8, _FUN_8c124fe8_def\n");
