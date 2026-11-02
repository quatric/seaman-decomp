#include "../decls.h"
undefined4 FUN_8c055490_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined4 uVar4;
  uint in_fr1;
  ulonglong uVar5;
  code *pcVar6;
  char cVar7;
  undefined4 in_stack_00000000;
  undefined8 uStack_84;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  cVar7 = '\0';
  uVar4 = 1;
  uVar2 = ar5;
  Vec3_ctor_zero(auStack_20,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_30,uVar2,ar6,ar7);
  if (*(int *)(ar4 + 300) == 0) {
    uVar5 = (ulonglong)in_fr1;
    if (cVar7 == '\0') {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x2c) = uVar5;
    }
    iVar1 = ar4 + 0x14;
    Vec3_assign(auStack_30,iVar1,ar6,ar7);
    uVar2 = (undefined4)uVar5;
    FUN_8c022d04(ar4 + 0x14,iVar1,ar6,ar7);
    ar6_00 = &DAT_8c125bf0;
    if (cVar7 == '\0') {
      uVar5 = CONCAT44(0x40400000,uVar2);
    }
    else {
      uVar5 = 0x41a0000040400000;
    }
    FUN_8c032518(ar4,ar5,&DAT_8c125bf0,in_stack_00000000);
    Vec3_assign(ar4 + 0x54,auStack_40,ar6_00,in_stack_00000000);
    Vec3_dtor(auStack_40,0xffffffff,ar6_00,in_stack_00000000);
    ar5_00 = auStack_30;
    Vec3_assign(ar4 + 0x14,ar5_00,ar6_00,in_stack_00000000);
    FUN_8c032ab0(ar4,ar5_00,ar6_00,in_stack_00000000);
    iVar1 = ar4 + 0x54;
    FUN_8c031bb4(ar4,ar5,iVar1,in_stack_00000000);
    *(undefined4 *)(ar4 + 0x40) = 5;
    if (cVar7 == '\0') {
      *(undefined4 *)(ar4 + 0x90) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0x90) = uVar5 & 0xffffffff;
    }
    if (cVar7 == '\0') {
      *(undefined4 *)(ar4 + 0x98) = 0;
      uVar2 = (undefined4)uVar5;
      pcVar6 = (code *)0x3f333333;
      *(undefined4 *)(ar4 + 0x278) = 0x3f333333;
    }
    else {
      *(ulonglong *)(ar4 + 0x98) = uVar5 & 0xffffffff;
      uVar2 = 0x3f333333;
      pcVar6 = Vec3_sub;
      *(undefined8 *)(ar4 + 0x278) = 0x8c023ae03f333333;
    }
    uVar3 = ar5;
    Vec3_sub(ar4 + 0x54,ar5,iVar1,in_stack_00000000,auStack_50);
    Vec3_normalize(auStack_50,uVar3,iVar1,in_stack_00000000);
    Vec3_assign(auStack_20,auStack_60,iVar1,in_stack_00000000);
    Vec3_dtor(auStack_60,0xffffffff,iVar1,in_stack_00000000);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_50,0xffffffff,iVar1,in_stack_00000000);
    FUN_8c0230f0(ar4 + 0x14,uVar3,iVar1,in_stack_00000000,auStack_70);
    FUN_8c0230f0(auStack_20,uVar3,iVar1,in_stack_00000000,(int)&uStack_84 + 4);
    FUN_8c022dac(auStack_70,(int)&uStack_84 + 4,iVar1,in_stack_00000000);
    if (cVar7 == '\0') {
      uStack_84 = CONCAT44((*(uint*)((uchar*)&uStack_84+4)),pcVar6);
    }
    else {
      uStack_84 = CONCAT44(pcVar6,uVar2);
    }
    Vec3_dtor((int)&uStack_84 + 4,0xffffffff,iVar1,in_stack_00000000);
    Vec3_dtor(auStack_70,0xffffffff,iVar1,in_stack_00000000);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    if (*(int *)(ar4 + 0x128) == 0) {
      *(undefined4 *)(ar4 + 0x2b8) = 2;
    }
  }
  else {
    in_stack_00000000 = ar7;
    if (*(int *)(ar4 + 300) != 1) goto LAB_8c0556a8;
  }
  ar6 = ar4 + 0x54;
  iVar1 = pure_virtual_stub(ar4,ar5,ar6,in_stack_00000000);
  if (iVar1 == 0) {
    uVar4 = 0;
    *(undefined4 *)(ar4 + 300) = 0;
    *(undefined4 *)(ar4 + 700) = 0;
  }
LAB_8c0556a8:
  Vec3_dtor(auStack_30,0xffffffff,ar6,in_stack_00000000);
  Vec3_dtor(auStack_20,0xffffffff,ar6,in_stack_00000000);
  return uVar4;
}

__asm__(".globl _FUN_8c055490\n.set _FUN_8c055490, _FUN_8c055490_def\n");
