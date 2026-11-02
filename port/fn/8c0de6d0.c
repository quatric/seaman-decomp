#include "../decls.h"
undefined4 FUN_8c0de6d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  undefined8 in_dr0;
  undefined8 uVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffff98;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if (DAT_8c437e18 == '\0') {
    in_dr0 = CONCAT44(0x438d0000,(int)in_dr0);
    _DAT_8c437e10 = CONCAT44(0x438d0000,_DAT_8c437e10);
    DAT_8c437e18 = '\x01';
  }
  if (DAT_8c437e20 == '\0') {
    in_dr0 = CONCAT44(0x43cf8000,(int)in_dr0);
    _DAT_8c437e1c = 0x43cf8000;
    DAT_8c437e20 = '\x01';
  }
  puVar5 = &uStack_20;
  FUN_8c0d99b8(puVar5,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x1024) != 0) {
    FUN_8c0d2028(puVar5,ar5,ar6,ar7);
    FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x1024) == 2) {
    if (*(int *)(ar4 + 0x1020) == 0) {
      FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7,in_stack_ffffff98);
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      if (cVar10 == '\0') {
        fVar6 = fStack_38;
      }
      fStack_38 = fVar6;
      FUN_8c0d1858(&DAT_8c13f3b0,ar5,ar6,ar7);
    }
    else if (*(int *)(ar4 + 0x1020) == 1) {
      FUN_8c0bf11c(ar4 + 0x13b70,ar5,ar6,ar7,in_stack_ffffff98);
      FUN_8c0d1858(&DAT_8c13f400,ar5,ar6,ar7);
    }
  }
  uVar2 = (undefined4)in_dr0;
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  iVar3 = ar4 + 0xa68;
  Vec3_ctor_copy(auStack_30,iVar3,ar6,ar7);
  FUN_8c0bf11c(ar4 + 0x13b70,iVar3,ar6,ar7,in_stack_ffffff98);
  FUN_8c0d4e88(ar4 + 0x10ac,auStack_30,ar6,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  iVar4 = ar4 + 0x7c;
  iVar3 = ar4 + 0x78;
  FUN_8c0e3ebc(ar4,iVar3,iVar4,ar7);
  if (cVar10 == '\0') {
    uStack_20 = *(undefined4 *)(ar4 + 0x78);
    uStack_1c = *(undefined4 *)(ar4 + 0x7c);
    uVar7 = CONCAT44(uStack_1c,uVar2);
  }
  else {
    uStack_20 = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uVar7 = *(undefined8 *)(ar4 + 0x7c);
    uStack_1c = (undefined4)uVar7;
    iStack_18 = (int)((ulonglong)uVar7 >> 0x20);
  }
  iStack_14 = ar4 + 0xa68;
  FUN_8c0bf11c(ar4 + 0x13b70,iVar3,iVar4,ar7,in_stack_ffffff98);
  iStack_18 = (int)uVar7;
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  if (cVar10 == '\0') {
    iStack_18 = iVar3;
    iVar3 = iStack_14;
  }
  iStack_14 = iVar3;
  puVar5 = &uStack_20;
  FUN_8c0d3f7c(ar4 + 0x10ac,puVar5,iVar4,ar7);
  FUN_8c0e3f24(ar4,puVar5,iVar4,ar7);
  puVar5 = &uStack_20;
  iVar3 = ar4 + 0x22d48;
  FUN_8c0d4124(ar4 + 0x10ac,iVar3,puVar5,ar7);
  if (cVar10 == '\0') {
    _DAT_8c437e10 = CONCAT44(_DAT_8c437e14,(int)((ulonglong)uVar7 >> 0x20));
    uVar7 = _DAT_8c437e10;
  }
  _DAT_8c437e10 = uVar7;
  FUN_8c01538c(ar4 + 0x22d40,iVar3,puVar5,ar7);
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    FUN_8c0d43cc(&fStack_38,iVar3,puVar5,ar7);
    if (cVar10 == '\0') {
      fVar8 = -150.0;
      fVar6 = fStack_38;
    }
    else {
      fVar6 = -150.0;
      fVar8 = 800.0;
    }
    if (cVar9 != '\0' || fVar8 <= fVar6) {
      if (cVar10 == '\0') {
        fVar8 = 800.0;
        fVar6 = fStack_38;
      }
      else {
        fVar6 = 800.0;
        fVar8 = -100.0;
      }
      if (cVar9 != '\0' || fVar6 <= fVar8) {
        if (cVar10 == '\0') {
          fVar8 = -100.0;
          fVar6 = fStack_34;
        }
        else {
          fVar6 = -100.0;
          fVar8 = 600.0;
        }
        if (cVar9 != '\0' || fVar8 <= fVar6) {
          if (cVar10 == '\0') {
            fVar8 = 600.0;
            fVar6 = fStack_34;
          }
          else {
            fVar6 = 600.0;
            fVar8 = 1.99915e-40;
          }
          if (cVar9 != '\0' || fVar6 <= fVar8) {
            FUN_8c0d7354(ar4 + iVar4 * 0x16c + 0x22d48,iVar3,puVar5,ar7);
          }
        }
      }
    }
  }
  FUN_8c0e14fc(ar4,iVar3,puVar5,ar7);
  FUN_8c0d43cc(&fStack_38,iVar3,puVar5,ar7);
  if (cVar10 == '\0') {
    fVar8 = -150.0;
    fVar6 = fStack_38;
  }
  else {
    fVar6 = -150.0;
    fVar8 = 800.0;
  }
  if (cVar9 != '\0' || fVar8 <= fVar6) {
    if (cVar10 == '\0') {
      fVar8 = 800.0;
      fVar6 = fStack_38;
    }
    else {
      fVar6 = 800.0;
      fVar8 = -100.0;
    }
    if (cVar9 != '\0' || fVar6 <= fVar8) {
      if (cVar10 == '\0') {
        fVar8 = -100.0;
        fVar6 = fStack_34;
      }
      else {
        fVar6 = -100.0;
        fVar8 = 600.0;
      }
      if (cVar9 != '\0' || fVar8 <= fVar6) {
        if (cVar10 == '\0') {
          fVar6 = 600.0;
        }
        else {
          fStack_34 = 600.0;
          fVar6 = 1.99915e-40;
        }
        if (cVar9 != '\0' || fStack_34 <= fVar6) {
          FUN_8c0d0564(ar4 + 0x13b24,iVar3,puVar5,ar7);
        }
      }
    }
  }
  FUN_8c0d43cc(&fStack_38,iVar3,puVar5,ar7);
  if (cVar10 == '\0') {
    fVar8 = 650.0;
    fVar6 = fStack_38;
  }
  else {
    fVar6 = 650.0;
    fVar8 = 1.9765e-40;
  }
  if (cVar9 != '\0' || fVar6 <= fVar8) {
    iVar3 = ar4 + 0x226f8;
    FUN_8c0e4198(ar4,iVar3,puVar5,ar7);
  }
  FUN_8c0d9720(ar4 + 0x22704,iVar3,puVar5,ar7);
  FUN_8c0d092c(ar4 + 0x13b70,iVar3,puVar5,ar7);
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar1 = FUN_8c0f6ab0(ar4 + iVar4 * 0x68 + 0xc0c,iVar3,puVar5,ar7);
    if (iVar1 == 1) {
      puVar5 = (undefined4 *)(ar4 + 4);
      iVar3 = ar4 + 0xc;
      FUN_8c0f7118(ar4 + iVar4 * 0x68 + 0xc0c,iVar3,puVar5,ar7);
    }
  }
  FUN_8c0da754(ar4,iVar3,puVar5,ar7);
  uVar2 = free_if_nonnull_wrap_0deb30(&uStack_20,0xffffffff,puVar5,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0de6d0\n.set _FUN_8c0de6d0, _FUN_8c0de6d0_def\n");
