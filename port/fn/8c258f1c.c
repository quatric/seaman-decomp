#include "../decls.h"
undefined4 FUN_8c258f1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar1 = (&FUN_8c20b7a0);
  *(undefined4 *)0x8c4aa6d4 = 1;
  uVar4 = (*(code *)puVar1)(ar4,ar5,ar6,ar7);
  puVar3 = 0x8c4aa520;
  puVar2 = 0x8c4aa51c;
  *(undefined4 *)0x8c4aa518 = 0;
  *puVar2 = 0;
  *puVar3 = 0;
  return uVar4;
}

__asm__(".globl _FUN_8c258f1c\n.set _FUN_8c258f1c, _FUN_8c258f1c_def\n");
