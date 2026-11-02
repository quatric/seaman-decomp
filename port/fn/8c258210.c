#include "../decls.h"
undefined4 aica_reg_258210_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uStack_10;
  uint uStack_c;
  
  uStack_c = ar4;
  FUN_8c1f92c0(0xa0702c00,&uStack_10,4,1,0,0);
  uStack_10 = uStack_10 & (int)(int)0xfffffcff | uStack_c;
  uVar1 = FUN_8c1f9610(&uStack_10,0xa0702c00,4,1,0,0);
  return uVar1;
}

__asm__(".globl _aica_reg_258210\n.set _aica_reg_258210, _aica_reg_258210_def\n");
