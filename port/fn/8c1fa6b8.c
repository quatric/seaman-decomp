#include "../decls.h"
undefined4 FUN_8c1fa6b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 in_PR;
  
  FUN_8c1fa758(ar4,ar5,ar6,ar7,in_PR);
  ar5_00 = 0;
  uVar1 = 0;
  FUN_8c1fae2c(0,0,ar6,ar7);
  FUN_8c1fb924(uVar1,ar5_00,ar6,ar7);
  uVar1 = 0x105;
  (*(code *)0xac1f9914)(0x105,ar5_00,ar6,ar7);
  uVar1 = sh4_tmu_1f88c0(uVar1,ar5_00,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1fa6b8\n.set _FUN_8c1fa6b8, _FUN_8c1fa6b8_def\n");
