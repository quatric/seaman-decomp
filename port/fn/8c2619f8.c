#include "../decls.h"
undefined4 FUN_8c2619f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *in_r0;
  undefined4 uVar2;
  undefined4 *in_r2;
  undefined4 in_r3;
  
  uVar2 = 0x8c4b5224;
  puVar1 = (&memset);
  *in_r2 = in_r3;
  *in_r0 = in_r3;
  (*(code *)puVar1)(uVar2,ar5,0x20,ar7);
  (*(code *)puVar1)(0x8c4b4224,(int)0xff,(int)0x1000,ar7);
  (*(code *)puVar1)(0x8c4b3e20,0,(int)0x400,ar7);
  uVar2 = (*(code *)puVar1)(0x8c4b3b20,0,(int)0x300,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c2619f8\n.set _FUN_8c2619f8, _FUN_8c2619f8_def\n");
