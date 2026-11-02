#include "../decls.h"
undefined4 FUN_8c0df250_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 in_fr1;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffffa0;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  cVar11 = '\0';
  cVar10 = '\0';
  FUN_8c0d99b8(&uStack_20,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_30,ar5,ar6,ar7);
  if (cVar11 == '\0') {
    uStack_30 = *(undefined4 *)(ar4 + 0x22d4c);
    uStack_2c = *(undefined4 *)(ar4 + 0x22d50);
    uStack_28 = *(undefined4 *)(ar4 + 0x22d54);
    uVar7 = CONCAT44(uStack_28,in_fr1);
  }
  else {
    uStack_30 = (undefined4)*(undefined8 *)(ar4 + 0x22d4c);
    uStack_2c = (undefined4)*(undefined8 *)(ar4 + 0x22d50);
    uVar7 = *(undefined8 *)(ar4 + 0x22d54);
    uStack_28 = (undefined4)uVar7;
    uStack_24 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  iVar4 = ar4;
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x1024) != 0) {
    FUN_8c0d2028(iVar4,ar5,ar6,ar7);
    FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x1024) == 2) {
    if (*(int *)(ar4 + 0x1020) == 0) {
      FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7,in_stack_ffffffa0);
      fVar6 = (float)((ulonglong)uVar7 >> 0x20);
      if (cVar11 == '\0') {
        fVar6 = fStack_38;
      }
      fStack_38 = fVar6;
      FUN_8c0d1858(&DAT_8c13f3d8,ar5,ar6,ar7);
    }
    else if (*(int *)(ar4 + 0x1020) == 4) {
      FUN_8c0bf0ac(ar4 + 0x13b8c,ar5,ar6,ar7);
      FUN_8c0d1858(&DAT_8c13f428,ar5,ar6,ar7);
    }
  }
  uVar2 = (undefined4)uVar7;
  iVar4 = ar4 + 0x7c;
  FUN_8c0e3ebc(ar4,ar4 + 0x78,iVar4,ar7);
  if (cVar11 == '\0') {
    uStack_20 = *(undefined4 *)(ar4 + 0x78);
    uStack_1c = *(undefined4 *)(ar4 + 0x7c);
    uVar8 = 0x42c80000;
  }
  else {
    uStack_20 = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x7c);
    uVar2 = 0x42c80000;
    uVar8 = 0xa68;
  }
  uStack_18 = 0x42c80000;
  iStack_14 = ar4 + 0xa68;
  puVar3 = &uStack_20;
  FUN_8c0d400c(ar4 + 0x10ac,puVar3,iVar4,ar7);
  FUN_8c0e3f24(ar4,puVar3,iVar4,ar7);
  puVar3 = &uStack_20;
  FUN_8c0d4900(ar4 + 0x10ac,puVar3,iVar4,ar7);
  if (cVar11 == '\0') {
    _DAT_8c43814c = CONCAT44(DAT_8c43814c_4,uVar8);
  }
  else {
    _DAT_8c43814c = CONCAT44(uVar8,uVar2);
  }
  FUN_8c0e15fc(ar4,puVar3,iVar4,ar7);
  FUN_8c01538c(ar4 + 0x22d40,puVar3,iVar4,ar7);
  FUN_8c0d7410(ar4 + 0x22d48,puVar3,iVar4,ar7);
  for (iVar5 = 1; iVar5 < 3; iVar5 = iVar5 + 1) {
    FUN_8c0d43cc(&fStack_38,puVar3,iVar4,ar7);
    if (cVar11 == '\0') {
      fVar9 = -150.0;
      fVar6 = fStack_38;
    }
    else {
      fVar6 = -150.0;
      fVar9 = 800.0;
    }
    if (cVar10 != '\0' || fVar9 <= fVar6) {
      if (cVar11 == '\0') {
        fVar9 = 800.0;
        fVar6 = fStack_38;
      }
      else {
        fVar6 = 800.0;
        fVar9 = -100.0;
      }
      if (cVar10 != '\0' || fVar6 <= fVar9) {
        if (cVar11 == '\0') {
          fVar9 = -100.0;
          fVar6 = fStack_34;
        }
        else {
          fVar6 = -100.0;
          fVar9 = 600.0;
        }
        if (cVar10 != '\0' || fVar9 <= fVar6) {
          if (cVar11 == '\0') {
            fVar9 = 600.0;
            fVar6 = fStack_34;
          }
          else {
            fVar6 = 600.0;
            fVar9 = 1.99915e-40;
          }
          if (cVar10 != '\0' || fVar6 <= fVar9) {
            FUN_8c0d7410(ar4 + iVar5 * 0x16c + 0x22d48,puVar3,iVar4,ar7);
          }
        }
      }
    }
  }
  FUN_8c0d43cc(&fStack_38,puVar3,iVar4,ar7);
  if (cVar11 == '\0') {
    fVar9 = -150.0;
    fVar6 = fStack_38;
  }
  else {
    fVar6 = -150.0;
    fVar9 = 800.0;
  }
  if (cVar10 != '\0' || fVar9 <= fVar6) {
    if (cVar11 == '\0') {
      fVar9 = 800.0;
      fVar6 = fStack_38;
    }
    else {
      fVar6 = 800.0;
      fVar9 = -100.0;
    }
    if (cVar10 != '\0' || fVar6 <= fVar9) {
      if (cVar11 == '\0') {
        fVar9 = -100.0;
        fVar6 = fStack_34;
      }
      else {
        fVar6 = -100.0;
        fVar9 = 600.0;
      }
      if (cVar10 != '\0' || fVar9 <= fVar6) {
        if (cVar11 == '\0') {
          fVar6 = 600.0;
        }
        else {
          fStack_34 = 600.0;
          fVar6 = 1.99915e-40;
        }
        if (cVar10 != '\0' || fStack_34 <= fVar6) {
          FUN_8c0d05d0(ar4 + 0x13b24,puVar3,iVar4,ar7);
        }
      }
    }
  }
  FUN_8c0d43cc(&fStack_38,puVar3,iVar4,ar7);
  if (cVar11 == '\0') {
    fVar9 = 650.0;
    fVar6 = fStack_38;
  }
  else {
    fVar6 = 650.0;
    fVar9 = 1.9765e-40;
  }
  if (cVar10 != '\0' || fVar6 <= fVar9) {
    puVar3 = (undefined4 *)(ar4 + 0x226f8);
    FUN_8c0e4198(ar4,puVar3,iVar4,ar7);
  }
  FUN_8c0d9720(ar4 + 0x22704,puVar3,iVar4,ar7);
  FUN_8c0d1168(ar4 + 0x13b8c,puVar3,iVar4,ar7);
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    iVar1 = FUN_8c0f6ab0(ar4 + iVar5 * 0x68 + 0xc0c,puVar3,iVar4,ar7);
    if (iVar1 == 1) {
      iVar4 = ar4 + 4;
      puVar3 = (undefined4 *)(ar4 + 0xc);
      FUN_8c0f7118(ar4 + iVar5 * 0x68 + 0xc0c,puVar3,iVar4,ar7);
    }
  }
  FUN_8c0da754(ar4,puVar3,iVar4,ar7);
  Vec3_dtor(&uStack_30,0xffffffff,iVar4,ar7);
  uVar2 = free_if_nonnull_wrap_0deb30(&uStack_20,0xffffffff,iVar4,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0df250\n.set _FUN_8c0df250, _FUN_8c0df250_def\n");
