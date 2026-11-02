#include "../decls.h"
undefined4 FUN_8c20a84e_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  uint uVar2;
  code *pcVar3;
  
  puVar1 = (&FUN_8c20732e);
  pcVar3 = FUN_8c20732e;
  uVar2 = ar4 + ar5;
  for (; ar4 <= uVar2; ar4 = ar4 + 0x20) {
    in_r0 = (*(code *)puVar1)(ar4,pcVar3);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c20a84e\n.set _FUN_8c20a84e, _FUN_8c20a84e_def\n");
