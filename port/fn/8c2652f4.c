#include "../decls.h"
undefined4 aica_reg_2652f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *ar4_00;
  undefined4 ar5_00;
  int iVar1;
  
  FUN_8c1f92c0(0xa0702c00,(&DATA_8c2784b0),4,1,1,1);
  ar5_00 = 0xa0702c00;
  ar4_00 = (&DATA_8c2784b0);
  *(uint *)(&DATA_8c2784b0) = *(uint *)(&DATA_8c2784b0) & 0xfffffffe;
  FUN_8c1f9610(ar4_00,ar5_00,4,1,1,1);
  iVar1 = (int)0x100;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

__asm__(".globl _aica_reg_2652f4\n.set _aica_reg_2652f4, _aica_reg_2652f4_def\n");
