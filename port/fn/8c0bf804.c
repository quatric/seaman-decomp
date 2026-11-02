#include "../decls.h"
undefined4 FUN_8c0bf804_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined4 in_stack_ffffff94;
  undefined1 auStack_60 [20];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uStack_2c = DAT_8c13be38;
  uStack_28 = DAT_8c13be3c;
  uStack_24 = DAT_8c13be40;
  uStack_20 = DAT_8c13be44;
  uStack_1c = DAT_8c13be48;
  uStack_18 = DAT_8c13be4c;
  uStack_14 = DAT_8c13be50;
  uStack_10 = DAT_8c13be54;
  uStack_4c = DAT_8c13be58;
  uStack_48 = DAT_8c13be5c;
  uStack_44 = DAT_8c13be60;
  uStack_40 = DAT_8c13be64;
  uStack_3c = DAT_8c13be68;
  uStack_38 = DAT_8c13be6c;
  uStack_34 = DAT_8c13be70;
  uStack_30 = DAT_8c13be74;
  FUN_8c0162f8(auStack_60,ar5,ar6,ar7);
  uVar4 = 4;
  uVar3 = 0x8c43654c;
  FUN_8c016318(auStack_60,&uStack_2c,0x8c43654c,4,in_stack_ffffff94);
  FUN_8c016324(auStack_60,&DAT_8c43655c,uVar3,uVar4);
  uVar2 = 0x80000060;
  FUN_8c015198(auStack_60,0x80000060,uVar3,uVar4,in_stack_ffffff94);
  FUN_8c0c453c(&DAT_8c2b5628,uVar2,uVar3,uVar4);
  FUN_8c01538c(ar5,uVar2,uVar3,uVar4);
  uVar2 = *(undefined4 *)(ar4 + 8);
  FUN_8c014a94(ar5,uVar2,uVar3,uVar4);
  FUN_8c01636c(auStack_60,uVar2,uVar3,uVar4);
  uVar4 = 4;
  uVar3 = 0x8c43654c;
  FUN_8c016318(auStack_60,&uStack_4c,0x8c43654c,4,in_stack_ffffff94);
  uVar2 = 1;
  FUN_8c014a94(ar5,1,uVar3,uVar4);
  FUN_8c01636c(auStack_60,uVar2,uVar3,uVar4);
  iVar1 = *(int *)(ar4 + 8);
  if (iVar1 == 3) {
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(0x42e20000,*(undefined4 *)(ar4 + 0x2c));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x2c);
      dVar5 = -1.3340701484224984e-249;
    }
    _DAT_8c436774 = 0x43360000;
    if (cVar6 == '\0') {
      _DAT_8c436778 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      _DAT_8c436778 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 != '\0') {
      _DAT_8c436778 = (float)in_xd0;
      (*(uint *)0x8c43677c) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    FUN_8c0c3b74(&DAT_8c2b5628,uVar2,uVar3,uVar4);
  }
  else if (iVar1 == 5) {
    FUN_8c1f8176(&stack0xffffff94,uVar2,uVar3,uVar4);
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(0x42c60000,*(undefined4 *)(ar4 + 0x2c));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x2c);
      dVar5 = 9.367488658879283e+17;
    }
    _DAT_8c436774 = 0x43360000;
    if (cVar6 == '\0') {
      _DAT_8c436778 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      _DAT_8c436778 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 != '\0') {
      _DAT_8c436778 = (float)in_xd0;
      (*(uint *)0x8c43677c) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    FUN_8c0c3b74(&DAT_8c2b5628,uVar2,uVar3,uVar4);
  }
  else if (iVar1 == 9) {
    if (cVar7 != '\0') {
      (*(uint *)0x8c43677c) = 0x3f19999a;
    }
    _DAT_8c436778 = 145.0;
    _DAT_8c436774 = 0x43aa0000;
    uVar4 = 0x10;
    uVar3 = 0;
    FUN_8c0c4370(&DAT_8c2b5628,ar4 + 0x10,0,0x10);
  }
  uVar2 = free_if_nonnull_wrap_0151a0(auStack_60,0xffffffff,uVar3,uVar4);
  return uVar2;
}

__asm__(".globl _FUN_8c0bf804\n.set _FUN_8c0bf804, _FUN_8c0bf804_def\n");
