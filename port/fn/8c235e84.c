#include "../decls.h"
undefined4 FUN_8c235e84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_fr4;
  undefined4 auStack_208 [128];
  undefined4 uStack_8;
  
  puVar2 = auStack_208;
  do {
    *puVar2 = in_fr4;
    puVar2 = puVar2 + 1;
  } while (puVar2 < &uStack_8);
  uVar1 = FUN_8c20a1d0(auStack_208,&uStack_8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c235e84\n.set _FUN_8c235e84, _FUN_8c235e84_def\n");
