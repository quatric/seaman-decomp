#include "../decls.h"
undefined4 FUN_8c2619ee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = 0x8c4b5244;
  uVar3 = 0x8c4b5224;
  puVar1 = (&memset);
  *(undefined4 *)0x8c4b4220 = 0;
  *puVar2 = 0;
  (*(code *)puVar1)(uVar3,0,0x20);
  (*(code *)puVar1)(0x8c4b4224,(int)0xff,(int)0x1000);
  (*(code *)puVar1)(0x8c4b3e20,0,(int)0x400);
  uVar3 = (*(code *)puVar1)(0x8c4b3b20,0,(int)0x300);
  return uVar3;
}

__asm__(".globl _FUN_8c2619ee\n.set _FUN_8c2619ee, _FUN_8c2619ee_def\n");
