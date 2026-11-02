#include "../decls.h"
undefined4 FUN_8c029af0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar4_00;
  int ar5_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 in_stack_ffffff88;
  undefined1 auStack_74 [64];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar5 = '\0';
  iVar2 = ar6;
  if (**(int **)(ar4 + 0x434) == 0) {
    uStack_1c = *(undefined4 *)(ar5 + 8);
    uStack_18 = *(undefined4 *)(ar5 + 0xc);
    uStack_14 = *(undefined4 *)(ar5 + 0x10);
    ar5_00 = ar5;
  }
  else {
    ar5_00 = ar6;
    FUN_8c2545ec(&uStack_1c,ar6,ar6,ar7);
  }
  if (*(int *)(*(int *)(ar4 + 0x434) + 4) == 0) {
    uStack_34 = *(undefined4 *)(ar5 + 0x14);
    uStack_30 = *(undefined4 *)(ar5 + 0x18);
    uStack_2c = *(undefined4 *)(ar5 + 0x1c);
  }
  else {
    ar5_00 = ar6;
    FUN_8c254698(&uStack_34,ar6,iVar2,ar7);
  }
  if (*(int *)(*(int *)(ar4 + 0x434) + 8) == 0) {
    if (cVar5 == '\0') {
      uStack_28 = *(undefined4 *)(ar5 + 0x20);
      uStack_24 = *(undefined4 *)(ar5 + 0x24);
      uStack_20 = *(undefined4 *)(ar5 + 0x28);
    }
    else {
      uStack_28 = (undefined4)*(undefined8 *)(ar5 + 0x20);
      uStack_24 = (undefined4)*(undefined8 *)(ar5 + 0x24);
      uStack_20 = (undefined4)*(undefined8 *)(ar5 + 0x28);
      uStack_1c = (undefined4)((ulonglong)*(undefined8 *)(ar5 + 0x28) >> 0x20);
    }
  }
  else {
    FUN_8c254780(&uStack_28,ar6,iVar2,ar7);
    ar5_00 = ar6;
  }
  FUN_8c25b5d0(0,ar5_00,iVar2,ar7,in_stack_ffffff88);
  uVar1 = uStack_34;
  uVar3 = uStack_30;
  uVar4 = uStack_2c;
  FUN_8c256e18(0,uStack_34,uStack_30,uStack_2c,in_stack_ffffff88);
  ar4_00 = 0;
  FUN_8c256fec(0,uVar1,uVar3,uVar4,in_stack_ffffff88);
  FUN_8c25484c(ar4_00,uVar1,uVar3,uVar4);
  *(int *)(ar4 + 0x434) = *(int *)(ar4 + 0x434) + 0x18;
  FUN_8c25cddc(auStack_74,uVar1,uVar3,uVar4,ar4);
  FUN_8c25b5d0(auStack_74,uVar1,uVar3,uVar4,ar4);
  FUN_8c02430c(auStack_74,uVar1,uVar3,uVar4);
  FUN_8c25cddc(auStack_74,uVar1,uVar3,uVar4,ar4);
  uVar1 = uStack_34;
  uVar3 = uStack_30;
  uVar4 = uStack_2c;
  FUN_8c256e18(auStack_74,uStack_34,uStack_30,uStack_2c,ar4);
  FUN_8c02430c(auStack_74,uVar1,uVar3,uVar4);
  FUN_8c25cddc(auStack_74,uVar1,uVar3,uVar4,ar4);
  FUN_8c256fec(auStack_74,uVar1,uVar3,uVar4,ar4);
  uVar1 = FUN_8c02430c(auStack_74,uVar1,uVar3,uVar4);
  return uVar1;
}

__asm__(".globl _FUN_8c029af0\n.set _FUN_8c029af0, _FUN_8c029af0_def\n");
