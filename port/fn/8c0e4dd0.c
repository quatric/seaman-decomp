#include "../decls.h"
undefined4 FUN_8c0e4dd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  int iVar2;
  undefined4 in_PR;
  char cVar3;
  int in_stack_ffffffbc;
  undefined1 auStack_24 [12];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar3 = '\0';
  uStack_c = in_PR;
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    uStack_18 = *(undefined4 *)(ar4 + 0x10fc);
    uStack_14 = *(undefined4 *)(ar4 + 0x1100);
    uStack_10 = *(undefined4 *)(ar4 + 0x1104);
  }
  else {
    uStack_18 = (undefined4)*(undefined8 *)(ar4 + 0x10fc);
    uStack_14 = (undefined4)*(undefined8 *)(ar4 + 0x1100);
    uStack_10 = (undefined4)*(undefined8 *)(ar4 + 0x1104);
    uStack_c = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x1104) >> 0x20);
  }
  ar6_00 = auStack_24;
  ar5_00 = &uStack_18;
  uVar1 = 0;
  FUN_8c21279c(0,ar5_00,ar6_00,ar7,in_stack_ffffffbc);
  FUN_8c217ebc(uVar1,ar5_00,ar6_00,ar7);
  FUN_8c219038(uVar1,ar5_00,ar6_00,ar7);
  FUN_8c217ef4(uVar1,ar5_00,ar6_00,ar7);
  FUN_8c219070(uVar1,ar5_00,ar6_00,ar7);
  if (*(int *)(ar4 + 0x1024) != 0) {
    FUN_8c0d2028(uVar1,ar5_00,ar6_00,ar7);
    FUN_8c016340(ar4 + 0x1028,ar5_00,ar6_00,ar7);
  }
  if (*(int *)(ar4 + 0x1024) == 2) {
    FUN_8c0d1858(&DAT_8c13f450,ar5_00,ar6_00,ar7);
  }
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    if (*(int *)(iVar2 * 0x24 + ar4 + 0x1090) == 1) {
      **(undefined4 **)(ar4 + 0x10e8) = *(undefined4 *)(iVar2 * 0x24 + ar4 + 0x108c);
      FUN_8c01538c(ar4 + 0x10dc,ar5_00,ar6_00,ar7);
      uVar1 = 0;
      FUN_8c256328(0,ar5_00,ar6_00,ar7,in_stack_ffffffbc);
      FUN_8c019058(uVar1,ar5_00,ar6_00,ar7);
      in_stack_ffffffbc = iVar2;
      FUN_8c019198(uVar1,ar5_00,ar6_00,ar7);
      FUN_8c015adc(ar4 + 0x10e4,ar5_00,ar6_00,ar7);
      FUN_8c256210(1,ar5_00,ar6_00,ar7);
    }
  }
  FUN_8c01538c(ar4 + 0x28,ar5_00,ar6_00,ar7);
  FUN_8c015adc(ar4 + 0x30,ar5_00,ar6_00,ar7);
  if (*(int *)(ar4 + 0x15c8) == 1) {
    FUN_8c0d6090(ar4 + 0x15bc,ar5_00,ar6_00,ar7);
  }
  FUN_8c0da754(ar4,ar5_00,ar6_00,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0e4dd0\n.set _FUN_8c0e4dd0, _FUN_8c0e4dd0_def\n");
