#include "../decls.h"
undefined4 FUN_8c1fb9d2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (&FUN_8c1fb8ae);
  puVar3 = 0x8c475f18 + 0x10;
  for (puVar4 = 0x8c475f18; puVar4 < puVar3; puVar4 = puVar4 + 1) {
    (*(code *)puVar1)(*puVar4,ar5,ar6,ar7);
  }
  puVar3 = 0x8c475f58 + 8;
  for (puVar4 = 0x8c475f58; puVar4 < puVar3; puVar4 = puVar4 + 1) {
    (*(code *)puVar1)(*puVar4,ar5,ar6,ar7);
  }
  uVar2 = (*(code *)puVar1)(*(undefined4 *)0x8c475f78,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c1fb9d2\n.set _FUN_8c1fb9d2, _FUN_8c1fb9d2_def\n");
