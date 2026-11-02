#include "../decls.h"
undefined4 FUN_8c25e884_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  undefined4 in_stack_fffffe00;
  undefined4 in_stack_fffffe04;
  int iStack_f8;
  
  uVar1 = 1;
  a6 = 0x12;
  if (((_DAT_8c4a9bcc & 1) == 1) || ((_DAT_8c4a9bcc & 0x2c) == 0)) {
    iStack_f8 = 0x12;
  }
  else {
    iStack_f8 = 0x24;
  }
  a7 = 0x1f;
  a5 = 0;
  _DAT_8c4a9ecc = 0xf0;
  _DAT_8c4a9ec4 = (iStack_f8 >> 1) + 0xf0;
  _DAT_8c4a9ec8 = iStack_f8;
  FUN_8c010838(1,0,0x12,0x1f,in_stack_fffffe00,in_stack_fffffe04);
  uVar1 = FUN_8c25e260(uVar1,a5,a6,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c25e884\n.set _FUN_8c25e884, _FUN_8c25e884_def\n");
