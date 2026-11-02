#include "../decls.h"
undefined4 FUN_8c0ff928_def(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *ar4_00;
  undefined8 *a5;
  undefined4 uVar4;
  undefined8 *a6;
  undefined4 in_fr1;
  undefined8 uVar5;
  char cVar6;
  undefined4 in_stack_ffffff50;
  undefined2 uVar7;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 auStack_90 [18];
  undefined8 uStack_48;
  
  cVar6 = '\0';
  if (DAT_8c4413c8 == '\0') {
    _DAT_8c4413c4 = 0xc1700000;
    _DAT_8c4413c8 = CONCAT31(DAT_8c4413c8_1,1);
  }
  if (DAT_8c4413d0 == '\0') {
    _DAT_8c4413cc = 0xc1400000;
    _DAT_8c4413d0 = CONCAT31(DAT_8c4413d0_1,1);
  }
  a5 = ar5;
  a6 = ar6;
  uVar3 = ar7;
  FUN_8c2363e8(auStack_90,ar5,ar6,ar7,in_stack_ffffff50);
  if (cVar6 == '\0') {
    uStack_a0 = *(undefined4 *)ar5;
    uStack_9c = *(undefined4 *)((int)ar5 + 4);
    uStack_98 = *(undefined4 *)ar6;
    uStack_94 = *(undefined4 *)((int)ar6 + 4);
    uVar5 = CONCAT44(uStack_94,in_fr1);
  }
  else {
    uStack_a0 = (undefined4)*ar5;
    uStack_9c = (undefined4)*(undefined8 *)((int)ar5 + 4);
    uStack_98 = (undefined4)*ar6;
    uVar5 = *(undefined8 *)((int)ar6 + 4);
    uStack_94 = (undefined4)uVar5;
    auStack_90[0] = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  uStack_a4 = 0x42c80000;
  (**(code **)(*(int *)(*(int *)(ar4 + 4) + 8) + 0x120))(*(int *)(ar4 + 4),a5,a6,uVar3);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (cVar6 == '\0') {
    uStack_48 = CONCAT44((*(uint*)((uchar*)&uStack_48+4)),uVar4);
    uVar4 = uStack_a4;
    uVar5 = uStack_48;
  }
  uStack_48 = uVar5;
  uStack_a4 = uVar4;
  FUN_8c257170(&uStack_a4,a5,a6,uVar3);
  uVar4 = ar7;
  FUN_8c2595aa(2,ar7,a6,uVar3);
  FUN_8c257148(0x2e38,uVar4,a6,uVar3);
  ar4_00 = auStack_90;
  FUN_8c2572ec(ar4_00,uVar4,a6,uVar3);
  FUN_8c219038(ar4_00,uVar4,a6,uVar3);
  FUN_8c219070(ar4_00,uVar4,a6,uVar3);
  FUN_8c21907e(ar4_00,uVar4,a6,uVar3);
  FUN_8c0f4b44(*(undefined4 *)(ar4 + 4),uVar4,a6,uVar3);
  FUN_8c256328(0,uVar4,a6,uVar3,in_stack_ffffff50);
  FUN_8c25b5d0(0,uVar4,a6,uVar3,in_stack_ffffff50);
  iVar1 = get_field_24_05c284(*(undefined4 *)(ar4 + 4),uVar4,a6,uVar3);
  if (iVar1 == 0xd) {
    FUN_8c25b5d0(0,uVar4,a6,uVar3,in_stack_ffffff50);
  }
  uVar7 = (undefined2)((uint)in_stack_ffffff50 >> 0x10);
  if (iVar1 == 10) {
    uVar2 = (**(code **)(*(int *)(*(int *)(ar4 + 4) + 8) + 0x148))(*(int *)(ar4 + 4),uVar4,a6,uVar3)
    ;
    if ((short)uVar2 != 3) {
      FUN_8c25b5d0(0,uVar4,a6,uVar3,CONCAT22(uVar7,(short)uVar2));
    }
  }
  (**(code **)(*(int *)(*(int *)(ar4 + 4) + 8) + 0x38))(*(int *)(ar4 + 4),uVar4,a6,uVar3);
  FUN_8c256210(1,uVar4,a6,uVar3);
  FUN_8c016340(ar4 + 0xc,uVar4,a6,uVar3);
  if (cVar6 != '\0') {
    auStack_90[0] = 0xff000000;
  }
  uStack_94 = 0x43700000;
  uStack_98 = 0x43a00000;
  uStack_9c = 0x43f00000;
  uStack_a0 = 0x44200000;
  uStack_a4 = 0x43fa0000;
  FUN_8c257170(&uStack_a4,uVar4,a6,uVar3);
  FUN_8c2595aa(0,ar7,a6,uVar3);
  uVar3 = FUN_8c259046(0xff000000,0xff000000,0xff000000,uVar3);
  return uVar3;
}

__asm__(".globl _FUN_8c0ff928\n.set _FUN_8c0ff928, _FUN_8c0ff928_def\n");
