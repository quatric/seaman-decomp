#include "../decls.h"
undefined4 FUN_8c028e20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint ar5_00;
  undefined4 uVar2;
  undefined2 in_stack_ffffffe8;
  undefined2 uVar3;
  
  uVar1 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
  uVar2 = CONCAT22((short)uVar1,in_stack_ffffffe8);
  uVar1 = uVar1 & 0xffff;
  FUN_8c028edc(ar4 + 0x21c,uVar1,ar6,ar7,uVar2);
  uVar3 = (undefined2)((uint)uVar2 >> 0x10);
  uVar1 = FUN_8c02602c(ar5,uVar1,ar6,ar7);
  ar5_00 = uVar1 & 0xffff;
  FUN_8c028ed4(ar4 + 0x21c,ar5_00,ar6,ar7,CONCAT22(uVar3,(short)uVar1));
  uVar2 = get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7);
  uVar2 = FUN_8c034d38(ar4 + 0x2dc,uVar2,ar6,ar7);
  uVar2 = FUN_8c028ec8(*(undefined4 *)(ar4 + 0x308),uVar2,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c028e20\n.set _FUN_8c028e20, _FUN_8c028e20_def\n");
