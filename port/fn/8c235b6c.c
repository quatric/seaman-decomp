#include "../decls.h"
undefined4 FUN_8c235b6c_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar6_00;
  uint uVar2;
  
  uVar1 = ar5;
  ar6_00 = ar6;
  FUN_8c236454(ar4,ar5,ar6,ar7);
  uVar2 = (uint)((ar6 & 0x80000000) != 0);
  (*(code *)(&PTR_FUN_8c277aa0)[uVar2])((uint)((ar6 & 0x40) != 0),uVar1,ar6_00,ar7);
  (*(code *)(&PTR_FUN_8c277aa8)[uVar2 + (uint)((ar6 & 0x20) != 0) * 2])(ar4,ar5,ar6_00,ar7);
  uVar1 = _DAT_8c4aa3e4;
  FUN_8c2370dc(_DAT_8c4aa3e4,ar5,ar6_00,ar7);
  uVar1 = FUN_8c2364b2(uVar1,ar5,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c235b6c\n.set _FUN_8c235b6c, _FUN_8c235b6c_def\n");
