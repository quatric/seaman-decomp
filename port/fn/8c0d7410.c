#include "../decls.h"
undefined4 FUN_8c0d7410_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar4_00;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = DAT_8c13f550;
  uStack_10 = DAT_8c13f554;
  uStack_c = DAT_8c13f558;
  uStack_18 = *(undefined4 *)(ar4 + 0x15c);
  uVar1 = DAT_8c13f55c;
  FUN_8c233dac(&uStack_18,ar5,ar6,ar7);
  ar4_00 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,uVar1);
  FUN_8c019058(ar4_00,ar5,ar6,ar7);
  FUN_8c019160(ar4_00,ar5,ar6,ar7);
  FUN_8c015af8(ar4,ar5,ar6,ar7);
  FUN_8c256210(1,ar5,ar6,ar7);
  uVar1 = FUN_8c233dac(&stack0xffffffd8,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d7410\n.set _FUN_8c0d7410, _FUN_8c0d7410_def\n");
