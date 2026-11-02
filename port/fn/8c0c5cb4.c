#include "../decls.h"
undefined4 FUN_8c0c5cb4_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int ar5_01;
  undefined4 in_stack_ffffffe8;
  int aiStack_10 [2];
  
  aiStack_10[0] = 0;
  ar5_00 = 0;
  FUN_8c0c412c(&DAT_8c2b5628,0,ar6,ar7);
  FUN_8c016340(0x8c431294,ar5_00,ar6,ar7);
  uVar1 = 0x8c35468c;
  FUN_8c0f8134(0x8c35468c,ar5_00,ar6,ar7);
  FUN_8c2565c4(uVar1,ar5_00,ar6,ar7,in_stack_ffffffe8);
  FUN_8c258e0a(0,ar5_00,ar6,ar7,in_stack_ffffffe8);
  FUN_8c0fef10(*(undefined4 *)(ar5 + 2000),ar5_00,ar6,ar7);
  aiStack_10[0] = FUN_8c0c5db0(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
  if (aiStack_10[0] != 0) {
    ar5_00 = 1;
    FUN_8c0d1b90(aiStack_10,1,ar6,ar7);
  }
  FUN_8c0b936c(ar5,ar5_00,ar6,ar7);
  uVar1 = ar4;
  ar5_01 = ar5;
  FUN_8c0c75f4(ar4,ar5,ar6,ar7);
  FUN_8c0f7ea0(uVar1,ar5_01,ar6,ar7);
  FUN_8c0ce920(ar4,ar5_01,ar6,ar7);
  *(int *)(ar5 + 0x7e0) = *(int *)(ar5 + 0x7e0) + 1;
  *(undefined4 *)(ar5 + 0x7dc) = 0;
  return 0x7dc;
}

__asm__(".globl _FUN_8c0c5cb4\n.set _FUN_8c0c5cb4, _FUN_8c0c5cb4_def\n");
