#include "../decls.h"
undefined4 FUN_8c0e3f24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  undefined4 in_PR;
  char cVar3;
  undefined4 in_stack_ffffffd8;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar3 = '\0';
  ar6_00 = &stack0xffffffd8;
  iVar1 = ar4;
  uStack_10 = in_PR;
  if ((*(int *)(ar4 + 0x22810) == 1) && (*(int *)(ar4 + 0x22814) == 1)) {
    FUN_8c2219a8(ar4,ar5,ar6,ar7,in_stack_ffffffd8);
    FUN_8c214158(iVar1,ar5,ar6,ar7,in_stack_ffffffd8);
    if (cVar3 == '\0') {
      uStack_1c = *(undefined4 *)(ar4 + 0x227f0);
      uStack_18 = *(undefined4 *)(ar4 + 0x227f4);
      uStack_14 = *(undefined4 *)(ar4 + 0x227f8);
    }
    else {
      uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x227f0);
      uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x227f4);
      uStack_14 = (undefined4)*(undefined8 *)(ar4 + 0x227f8);
      uStack_10 = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x227f8) >> 0x20);
    }
  }
  else if ((*(int *)(ar4 + 0x22810) == 0) && (*(int *)(ar4 + 0x22814) == 1)) {
    FUN_8c2219a8(ar4,ar5,ar6,ar7,in_stack_ffffffd8);
    FUN_8c214158(iVar1,ar5,ar6,ar7,in_stack_ffffffd8);
    if (cVar3 == '\0') {
      uStack_1c = *(undefined4 *)(ar4 + 0x22800);
      uStack_18 = *(undefined4 *)(ar4 + 0x22804);
      uStack_14 = *(undefined4 *)(ar4 + 0x22808);
    }
    else {
      uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x22800);
      uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x22804);
      uStack_14 = (undefined4)*(undefined8 *)(ar4 + 0x22808);
      uStack_10 = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x22808) >> 0x20);
    }
  }
  else {
    FUN_8c2219a8(ar4,ar5,ar6,ar7,in_stack_ffffffd8);
    FUN_8c214158(iVar1,ar5,ar6,ar7,in_stack_ffffffd8);
    if (cVar3 == '\0') {
      uStack_1c = *(undefined4 *)(ar4 + 0x227f0);
      uStack_18 = *(undefined4 *)(ar4 + 0x227f4);
      uStack_14 = *(undefined4 *)(ar4 + 0x227f8);
    }
    else {
      uStack_1c = (undefined4)*(undefined8 *)(ar4 + 0x227f0);
      uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x227f4);
      uStack_14 = (undefined4)*(undefined8 *)(ar4 + 0x227f8);
      uStack_10 = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x227f8) >> 0x20);
    }
  }
  FUN_8c22194e(iVar1,ar5,ar6,ar7,in_stack_ffffffd8);
  uVar2 = 1;
  FUN_8c22195c(1,ar5,ar6,ar7,in_stack_ffffffd8);
  FUN_8c2140fe(uVar2,ar5,ar6,ar7,in_stack_ffffffd8);
  uVar2 = 1;
  FUN_8c21410c(1,ar5,ar6,ar7,in_stack_ffffffd8);
  FUN_8c2219f6(uVar2,ar5,ar6,ar7,in_stack_ffffffd8);
  FUN_8c2141a6(uVar2,ar5,ar6,ar7,in_stack_ffffffd8);
  ar5_00 = &uStack_1c;
  uVar2 = 0;
  FUN_8c21279c(0,ar5_00,&stack0xffffffd8,ar7,in_stack_ffffffd8);
  FUN_8c219038(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c21907e(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c219070(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c217ebc(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c217f02(uVar2,ar5_00,ar6_00,ar7);
  uVar2 = FUN_8c217ef4(uVar2,ar5_00,ar6_00,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0e3f24\n.set _FUN_8c0e3f24, _FUN_8c0e3f24_def\n");
