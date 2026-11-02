#include "../decls.h"
undefined4 FUN_8c264f6a_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  undefined4 uVar2;
  
  puVar1 = (&memset);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = 0;
    uVar2 = (*(code *)puVar1)(0,0x34);
    return uVar2;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c264f6a\n.set _FUN_8c264f6a, _FUN_8c264f6a_def\n");
