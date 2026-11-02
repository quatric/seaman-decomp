#include "../decls.h"
undefined4 FUN_8c1fb048_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  (*(code *)0xac004000)(0x200,0x2,ar6,ar7);
  *(undefined4 *)0x0 = in_r0;
  *(undefined4 *)(&DATA_8c1fb3d4) = _DAT_ff000028;
  uVar1 = FUN_8c1fb0c8(ar4,ar5,extraout_r1);
  return uVar1;
}

__asm__(".globl _FUN_8c1fb048\n.set _FUN_8c1fb048, _FUN_8c1fb048_def\n");
