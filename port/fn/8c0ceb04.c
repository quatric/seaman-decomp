#include "../decls.h"
undefined4 FUN_8c0ceb04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float *a5;
  undefined4 in_fr1;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined8 in_dr14;
  uint uVar8;
  double dVar7;
  undefined8 in_xd0;
  char cVar9;
  char cVar10;
  undefined1 auStack_2c [16];
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  uVar8 = (uint)((ulonglong)in_dr14 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  FUN_8c02f670(ar5,ar5,ar6,ar7,auStack_2c);
  Vec3_ctor_copy(&fStack_1c,auStack_2c,ar6,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
  dVar7 = (double)((ulonglong)uVar8 << 0x20);
  a5 = &fStack_1c;
  iVar1 = (**(code **)(**(int **)(ar4 + 8) + 0x130))(*(int **)(ar4 + 8),a5,ar6,ar7);
  if (iVar1 == 2) {
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(fStack_1c,in_fr1);
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),0x451a6000);
    }
    else {
      dVar4 = (double)CONCAT44(fStack_18,fStack_1c);
    }
    if (cVar9 == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                               SUB84(dVar7,0) - (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar7 = dVar7 - dVar4;
    }
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(0x3f000000,SUB84(dVar4,0));
    }
    else {
      dVar4 = 2251800342167552.0;
    }
    if (cVar9 == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),
                               SUB84(dVar7,0) * (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar7 = dVar7 * dVar4;
    }
    if (cVar10 == '\0') {
      dVar4 = (double)CONCAT44(fStack_1c,SUB84(dVar4,0));
    }
    else {
      dVar4 = (double)CONCAT44(fStack_18,fStack_1c);
    }
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + SUB84(dVar7,0),SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar7;
    }
    fVar5 = (float)((ulonglong)dVar4 >> 0x20);
    if (cVar10 == '\0') {
      fVar6 = 160.0;
      fVar3 = fStack_18;
      fStack_1c = fVar5;
    }
    else {
      fStack_1c = SUB84(dVar4,0);
      in_xd0 = CONCAT44(uStack_14,fVar5);
      fVar3 = 160.0;
      fVar6 = 0.8;
      fStack_18 = fVar5;
    }
    if (cVar9 != '\0' || fVar6 <= fVar3) {
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(0x3f4ccccd,fStack_18);
      }
      else {
        in_xd0 = CONCAT44(uStack_14,fStack_18);
        dVar7 = -8.472843126934268e-251;
      }
      if (cVar9 == '\0') {
        fStack_18 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fStack_18 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 != '\0') {
        fStack_18 = (float)in_xd0;
        uStack_14 = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
    }
    FUN_8c036988(ar5,a5,ar6,ar7);
    uVar2 = Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  }
  else {
    uVar2 = Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0ceb04\n.set _FUN_8c0ceb04, _FUN_8c0ceb04_def\n");
