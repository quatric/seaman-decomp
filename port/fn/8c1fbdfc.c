#include "../decls.h"
undefined4 FUN_8c1fbdfc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,code *ain1)

{
  undefined4 in_r2;
  undefined4 *in_r3;
  undefined4 uVar1;
  undefined4 in_PR;
  
  *in_r3 = in_r2;
  uVar1 = 0x14;
  (*ain1)(0x14,ar5,ar6,ar7,in_PR);
  FUN_8c1fcadc(uVar1,ar5,ar6,ar7);
  uVar1 = FUN_8c1fda04(uVar1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1fbdfc\n.set _FUN_8c1fbdfc, _FUN_8c1fbdfc_def\n");
