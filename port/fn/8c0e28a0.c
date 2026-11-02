#include "../decls.h"
undefined4 FUN_8c0e28a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  float fVar2;
  undefined8 in_dr0;
  undefined4 uVar5;
  double dVar3;
  float fVar6;
  double dVar4;
  undefined4 uVar7;
  double in_dr2;
  char cVar8;
  char cVar9;
  
  uVar5 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  ar5_00 = ar5;
  iVar1 = FUN_8c100b20(ar5,ar5,ar6,ar7);
  uVar7 = SUB84(in_dr2,0);
  if (iVar1 == 1) {
    FUN_8c0dc27c(ar5,ar5_00,ar6,ar7);
    if (cVar9 == '\0') {
      in_dr2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xa70),uVar7);
      dVar3 = (double)CONCAT44(0x40000000,uVar5);
    }
    else {
      in_dr2 = *(double *)(ar4 + 0xa70);
      dVar3 = -1.400628561984079e-250;
    }
    if (cVar8 == '\0') {
      fVar6 = (float)((ulonglong)dVar3 >> 0x20);
      fVar2 = SUB84(dVar3,0) * fVar6;
      dVar3 = (double)CONCAT44(fVar6,fVar2);
      in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) + fVar2,SUB84(in_dr2,0));
    }
    else {
      dVar3 = dVar3 * dVar3;
      in_dr2 = in_dr2 + dVar3;
    }
    uVar5 = (undefined4)((ulonglong)dVar3 >> 0x20);
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0xa70) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0xa70) = in_dr2;
    }
  }
  else {
    iVar1 = FUN_8c100b84(ar5,ar5_00,ar6,ar7);
    uVar7 = SUB84(in_dr2,0);
    if (iVar1 == 1) {
      FUN_8c0dc27c(ar5,ar5_00,ar6,ar7);
      if (cVar9 == '\0') {
        in_dr2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xa70),uVar7);
        dVar3 = (double)CONCAT44(0x40000000,uVar5);
      }
      else {
        in_dr2 = *(double *)(ar4 + 0xa70);
        dVar3 = -1.400628561984079e-250;
      }
      if (cVar8 == '\0') {
        fVar6 = (float)((ulonglong)dVar3 >> 0x20);
        fVar2 = SUB84(dVar3,0) * fVar6;
        dVar3 = (double)CONCAT44(fVar6,fVar2);
        in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) + fVar2,SUB84(in_dr2,0));
      }
      else {
        dVar3 = dVar3 * dVar3;
        in_dr2 = in_dr2 + dVar3;
      }
      uVar5 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0xa70) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0xa70) = in_dr2;
      }
    }
  }
  uVar7 = SUB84(in_dr2,0);
  iVar1 = FUN_8c100be8(ar5,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c0dc26c(ar5,ar5_00,ar6,ar7);
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xa68),uVar7);
      dVar4 = (double)CONCAT44(0x40000000,uVar5);
    }
    else {
      dVar3 = *(double *)(ar4 + 0xa68);
      dVar4 = -1.400628561984079e-250;
    }
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) +
                               SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar4 * dVar4;
    }
    if (cVar9 == '\0') {
      *(int *)(ar4 + 0xa68) = (int)((ulonglong)dVar3 >> 0x20);
    }
    else {
      *(double *)(ar4 + 0xa68) = dVar3;
    }
  }
  else {
    iVar1 = FUN_8c100c34(ar5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      FUN_8c0dc26c(ar5,ar5_00,ar6,ar7);
      if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 0xa68),uVar7);
        dVar4 = (double)CONCAT44(0x40000000,uVar5);
      }
      else {
        dVar3 = *(double *)(ar4 + 0xa68);
        dVar4 = -1.400628561984079e-250;
      }
      if (cVar8 == '\0') {
        dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) +
                                 SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20),SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 + dVar4 * dVar4;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0xa68) = (int)((ulonglong)dVar3 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0xa68) = dVar3;
      }
    }
  }
  FUN_8c0dc558(ar4,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0e28a0\n.set _FUN_8c0e28a0, _FUN_8c0e28a0_def\n");
