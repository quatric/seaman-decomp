#include "../decls.h"
undefined4 FUN_8c0d8808_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  undefined4 in_stack_ffffffe0;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  ar6_00 = &stack0xffffffe0;
  uStack_14 = *(undefined4 *)(ar4 + 0x18);
  uStack_10 = *(undefined4 *)(ar4 + 0x1c);
  uStack_c = *(undefined4 *)(ar4 + 0x20);
  ar5_00 = &uStack_14;
  uVar1 = 0;
  FUN_8c21279c(0,ar5_00,&stack0xffffffe0,ar7,in_stack_ffffffe0);
  FUN_8c219038(uVar1,ar5_00,ar6_00,ar7);
  FUN_8c21907e(uVar1,ar5_00,ar6_00,ar7);
  uVar1 = FUN_8c219070(uVar1,ar5_00,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d8808\n.set _FUN_8c0d8808, _FUN_8c0d8808_def\n");
