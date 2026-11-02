#include "../decls.h"
undefined4 * FUN_8c2619b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (&memset);
  memset(0x8c4b3b20,0,(int)0x300,ar7);
  (*(code *)puVar1)(0x8c4b3e20,0,(int)0x400,ar7);
  (*(code *)puVar1)(0x8c4b4224,(int)0xff,(int)0x1000,ar7);
  (*(code *)puVar1)(0x8c4b5224,0,0x20,ar7);
  puVar2 = 0x8c4b4220;
  *(undefined4 *)0x8c4b5244 = 0;
  *puVar2 = 0;
  return puVar2;
}

__asm__(".globl _FUN_8c2619b4\n.set _FUN_8c2619b4, _FUN_8c2619b4_def\n");
