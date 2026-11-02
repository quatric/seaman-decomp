#include "../decls.h"
undefined4 aica_reg_1f8544_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  undefined4 a6;
  undefined4 a7;
  int iStack_10;
  uint uStack_c;
  
  ar5_00 = &iStack_10;
  a6 = 4;
  a7 = 2;
  iVar1 = FUN_8c1f92c0(0xa0710000,ar5_00,4,2,1,1);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  *ar4 = iStack_10 << 0x10 & 0xffff0000 | uStack_c & 0xffff;
  FUN_8c1f86e4(iStack_10,ar5_00,a6,a7);
  FUN_8c1f86e4(uStack_c,ar5_00,a6,a7);
  return 0;
}

__asm__(".globl _aica_reg_1f8544\n.set _aica_reg_1f8544, _aica_reg_1f8544_def\n");
