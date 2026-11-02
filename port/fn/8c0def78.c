#include "../decls.h"
undefined4 FUN_8c0def78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 in_dr0;
  code *pcVar6;
  char cVar7;
  undefined4 in_stack_ffffffb8;
  undefined4 auStack_2c [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  cVar7 = '\0';
  puVar4 = &uStack_1c;
  FUN_8c0d99b8(puVar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x1024) != 0) {
    FUN_8c0d2028(puVar4,ar5,ar6,ar7);
    FUN_8c016340(ar4 + 0x1028,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x1024) == 2) {
    if (*(int *)(ar4 + 0x1020) == 0) {
      FUN_8c0bf0e8(ar4 + 0x13b24,ar5,ar6,ar7,in_stack_ffffffb8);
      uVar2 = (int)((ulonglong)in_dr0 >> 0x20);
      if (cVar7 == '\0') {
        uVar2 = auStack_2c[0];
      }
      auStack_2c[0] = uVar2;
      FUN_8c0d1858(&DAT_8c13f3b0,ar5,ar6,ar7);
    }
    else if (*(int *)(ar4 + 0x1020) == 1) {
      FUN_8c0bf11c(ar4 + 0x13b70,ar5,ar6,ar7,in_stack_ffffffb8);
      FUN_8c0d1858(&DAT_8c13f400,ar5,ar6,ar7);
    }
  }
  uVar2 = (undefined4)in_dr0;
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  iVar3 = ar4 + 0xa68;
  Vec3_ctor_copy(auStack_2c,iVar3,ar6,ar7);
  FUN_8c0bf11c(ar4 + 0x13b70,iVar3,ar6,ar7,in_stack_ffffffb8);
  FUN_8c0d4e88(ar4 + 0x10ac,auStack_2c,ar6,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
  iVar3 = ar4 + 0x7c;
  FUN_8c0e3ebc(ar4,ar4 + 0x78,iVar3,ar7);
  if (cVar7 == '\0') {
    uStack_1c = *(undefined4 *)(ar4 + 0x78);
    uStack_18 = *(undefined4 *)(ar4 + 0x7c);
    pcVar6 = (code *)0x42c80000;
  }
  else {
    uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x78);
    uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x7c);
    uVar2 = 0x42c80000;
    pcVar6 = FUN_8c0d3f7c;
  }
  uStack_14 = 0x42c80000;
  iStack_10 = ar4 + 0xa68;
  puVar4 = &uStack_1c;
  FUN_8c0d3f7c(ar4 + 0x10ac,puVar4,iVar3,ar7);
  FUN_8c0e3f24(ar4,puVar4,iVar3,ar7);
  puVar4 = &uStack_1c;
  iVar3 = ar4 + 0x22d48;
  FUN_8c0d46cc(ar4 + 0x10ac,iVar3,puVar4,ar7);
  if (cVar7 == '\0') {
    _DAT_8c438048 = CONCAT44(DAT_8c438048_4,pcVar6);
  }
  else {
    _DAT_8c438048 = CONCAT44(pcVar6,uVar2);
  }
  FUN_8c0e157c(ar4,iVar3,puVar4,ar7);
  FUN_8c01538c(ar4 + 0x22d40,iVar3,puVar4,ar7);
  FUN_8c0d7410(ar4 + 0x22d48,iVar3,puVar4,ar7);
  FUN_8c0d7410(ar4 + 0x22eb4,iVar3,puVar4,ar7);
  FUN_8c0d7410(ar4 + 0x23020,iVar3,puVar4,ar7);
  FUN_8c0d0990(ar4 + 0x13b70,iVar3,puVar4,ar7);
  FUN_8c0d05d0(ar4 + 0x13b24,iVar3,puVar4,ar7);
  iVar3 = ar4 + 0x226f8;
  FUN_8c0e4198(ar4,iVar3,puVar4,ar7);
  FUN_8c0d9720(ar4 + 0x22704,iVar3,puVar4,ar7);
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    iVar1 = FUN_8c0f6ab0(ar4 + iVar5 * 0x68 + 0xc0c,iVar3,puVar4,ar7);
    if (iVar1 == 1) {
      puVar4 = (undefined4 *)(ar4 + 4);
      iVar3 = ar4 + 0xc;
      FUN_8c0f7118(ar4 + iVar5 * 0x68 + 0xc0c,iVar3,puVar4,ar7);
    }
  }
  FUN_8c0da754(ar4,iVar3,puVar4,ar7);
  uVar2 = free_if_nonnull_wrap_0deb30(&uStack_1c,0xffffffff,puVar4,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0def78\n.set _FUN_8c0def78, _FUN_8c0def78_def\n");
