#include "../decls.h"
undefined4 FUN_8c0df668_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int ar5_00;
  int iVar4;
  int iVar5;
  undefined4 in_fr1;
  undefined8 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  cVar8 = '\0';
  FUN_8c0d99b8(&uStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_2c,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    uStack_2c = *(undefined4 *)(ar4 + 0x22d4c);
    uStack_28 = *(undefined4 *)(ar4 + 0x22d50);
    uStack_24 = *(undefined4 *)(ar4 + 0x22d54);
    uVar6 = CONCAT44(uStack_24,in_fr1);
  }
  else {
    uStack_2c = (undefined4)*(undefined8 *)(ar4 + 0x22d4c);
    uStack_28 = (undefined4)*(undefined8 *)(ar4 + 0x22d50);
    uVar6 = *(undefined8 *)(ar4 + 0x22d54);
    uStack_24 = (undefined4)uVar6;
    uStack_20 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  uVar2 = (undefined4)uVar6;
  iVar4 = ar4;
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x1024) != 0) {
    FUN_8c0d2028(iVar4,ar5,ar6,ar7);
    FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7);
  }
  iVar4 = ar4 + 0x7c;
  FUN_8c0e3ebc(ar4,ar4 + 0x78,iVar4,ar7);
  if (cVar8 == '\0') {
    uStack_1c = *(undefined4 *)(ar4 + 0x78);
    uStack_18 = *(undefined4 *)(ar4 + 0x7c);
    uVar7 = 0x42c80000;
  }
  else {
    uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x7c);
    uVar2 = 0x42c80000;
    uVar7 = 0xa68;
  }
  uStack_14 = 0x42c80000;
  iStack_10 = ar4 + 0xa68;
  puVar3 = &uStack_1c;
  FUN_8c0d400c(ar4 + 0x10ac,puVar3,iVar4,ar7);
  FUN_8c0e3f24(ar4,puVar3,iVar4,ar7);
  puVar3 = &uStack_1c;
  FUN_8c0d4900(ar4 + 0x10ac,puVar3,iVar4,ar7);
  if (cVar8 == '\0') {
    _DAT_8c438250 = CONCAT44(_DAT_8c438254,uVar7);
  }
  else {
    _DAT_8c438250 = CONCAT44(uVar7,uVar2);
    uStack_2c = uVar7;
  }
  FUN_8c0e15fc(ar4,puVar3,iVar4,ar7);
  FUN_8c01538c(ar4 + 0x22d40,puVar3,iVar4,ar7);
  FUN_8c0d7410(ar4 + 0x22d48,puVar3,iVar4,ar7);
  FUN_8c0d7410(ar4 + 0x22eb4,puVar3,iVar4,ar7);
  FUN_8c0d7410(ar4 + 0x23020,puVar3,iVar4,ar7);
  FUN_8c0d1168(ar4 + 0x13b8c,puVar3,iVar4,ar7);
  FUN_8c0d05d0(ar4 + 0x13b24,puVar3,iVar4,ar7);
  ar5_00 = ar4 + 0x226f8;
  FUN_8c0e4198(ar4,ar5_00,iVar4,ar7);
  FUN_8c0d9720(ar4 + 0x22704,ar5_00,iVar4,ar7);
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    iVar1 = FUN_8c0f6ab0(ar4 + iVar5 * 0x68 + 0xc0c,ar5_00,iVar4,ar7);
    if (iVar1 == 1) {
      iVar4 = ar4 + 4;
      ar5_00 = ar4 + 0xc;
      FUN_8c0f7118(ar4 + iVar5 * 0x68 + 0xc0c,ar5_00,iVar4,ar7);
    }
  }
  FUN_8c0da754(ar4,ar5_00,iVar4,ar7);
  Vec3_dtor(&uStack_2c,0xffffffff,iVar4,ar7);
  uVar2 = free_if_nonnull_wrap_0deb30(&uStack_1c,0xffffffff,iVar4,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0df668\n.set _FUN_8c0df668, _FUN_8c0df668_def\n");
