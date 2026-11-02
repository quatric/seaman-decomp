#include "../decls.h"
undefined4 FUN_8c0e89c4_def(undefined4 ar4,double *ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 ar6_00;
  int iVar1;
  float fVar2;
  float fVar4;
  double dVar3;
  double in_dr2;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined2 uStack_10;
  undefined2 uStack_e;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar6_00 = 0xffffffff;
  FUN_8c10273c(&uStack_10,0xffffffff,0xffffffff,ar7);
  fVar2 = DAT_8c1264b8;
  fVar4 = _UNK_8c1264bc;
  if (cVar7 == '\0') {
    fVar2 = *(float *)ar5;
    fVar4 = DAT_8c1264b8;
  }
  if (fVar2 == fVar4) {
    FUN_8c0e84c8(s0,&uStack_10,ar6_00,ar7);
    free_if_nonnull_wrap_016660(&uStack_10,0xffffffff,ar6_00,ar7);
  }
  else {
    for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
      if (cVar7 == '\0') {
        in_dr2 = (double)CONCAT44(*(float *)ar5,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *ar5;
      }
      if (cVar7 == '\0') {
        dVar3 = (double)CONCAT44(0x42f00000,(float)iVar1);
      }
      else {
        dVar3 = 206158464480.0;
      }
      if (cVar6 == '\0') {
        fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar3 * dVar3,0);
      }
      if (cVar7 == '\0') {
        dVar3 = (double)CONCAT44(0x42480000,fVar2);
      }
      else {
        dVar3 = 123145319686144.0;
      }
      if (cVar6 == '\0') {
        bVar5 = (float)((ulonglong)in_dr2 >> 0x20) <
                SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        bVar5 = in_dr2 < dVar3 + dVar3;
      }
      if (!bVar5) {
        if (cVar7 == '\0') {
          in_dr2 = (double)CONCAT44(*(float *)ar5,SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *ar5;
        }
        if (cVar7 == '\0') {
          dVar3 = (double)CONCAT44(0x42f00000,(float)iVar1);
        }
        else {
          dVar3 = 206158464480.0;
        }
        if (cVar6 == '\0') {
          fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
        }
        else {
          fVar2 = SUB84(dVar3 * dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = (double)CONCAT44(0x42480000,fVar2);
        }
        else {
          dVar3 = 123145319686144.0;
        }
        if (cVar6 == '\0') {
          fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
        }
        else {
          fVar2 = SUB84(dVar3 + dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = (double)CONCAT44(0x42dc0000,fVar2);
        }
        else {
          dVar3 = 32985353214976.0;
        }
        if (cVar6 == '\0') {
          bVar5 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20) <
                  (float)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          bVar5 = dVar3 + dVar3 < in_dr2;
        }
        if (!bVar5) {
          uStack_10 = (undefined2)iVar1;
          break;
        }
      }
    }
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      if (cVar7 == '\0') {
        in_dr2 = (double)CONCAT44(*(float *)((int)ar5 + 4),SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *(double *)((int)ar5 + 4);
      }
      if (cVar7 == '\0') {
        dVar3 = (double)CONCAT44(0x42be0000,(float)iVar1);
      }
      else {
        dVar3 = 8796095209216.0;
      }
      if (cVar6 == '\0') {
        fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        fVar2 = SUB84(dVar3 * dVar3,0);
      }
      if (cVar7 == '\0') {
        dVar3 = (double)CONCAT44(0x42a00000,fVar2);
      }
      else {
        dVar3 = 14293653344256.0;
      }
      if (cVar6 == '\0') {
        bVar5 = (float)((ulonglong)in_dr2 >> 0x20) <
                SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
      }
      else {
        bVar5 = in_dr2 < dVar3 + dVar3;
      }
      if (!bVar5) {
        if (cVar7 == '\0') {
          in_dr2 = (double)CONCAT44(*(float *)((int)ar5 + 4),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *(double *)((int)ar5 + 4);
        }
        if (cVar7 == '\0') {
          dVar3 = (double)CONCAT44(0x42be0000,(float)iVar1);
        }
        else {
          dVar3 = 8796095209216.0;
        }
        if (cVar6 == '\0') {
          fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
        }
        else {
          fVar2 = SUB84(dVar3 * dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = (double)CONCAT44(0x42a00000,fVar2);
        }
        else {
          dVar3 = 14293653344256.0;
        }
        if (cVar6 == '\0') {
          fVar2 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
        }
        else {
          fVar2 = SUB84(dVar3 + dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = (double)CONCAT44(0x42aa0000,fVar2);
        }
        else {
          dVar3 = 2.993931217461508e-78;
        }
        if (cVar6 == '\0') {
          bVar5 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20) <
                  (float)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          bVar5 = dVar3 + dVar3 < in_dr2;
        }
        if (!bVar5) {
          uStack_e = (undefined2)iVar1;
          break;
        }
      }
    }
    FUN_8c0e84c8(s0,&uStack_10,ar6_00,ar7);
    free_if_nonnull_wrap_016660(&uStack_10,0xffffffff,ar6_00,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c0e89c4\n.set _FUN_8c0e89c4, _FUN_8c0e89c4_def\n");
