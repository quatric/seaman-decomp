#include "../decls.h"
undefined4 FUN_8c265f84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 a4;
  
  puVar2 = (&FUN_8c2688e0);
  puVar1 = (&DATA_8c2784c0);
  a4 = ar4;
  if (*(int *)(&DATA_8c2784c0) != 0) {
    while (*(int *)((int)0x190 + *(int *)puVar1) != 0) {
      (*(code *)puVar2)(a4,ar5,ar6,ar7);
    }
    *(undefined4 *)((int)0x1a8 + *(int *)puVar1) = ar4;
  }
  return 0;
}

__asm__(".globl _FUN_8c265f84\n.set _FUN_8c265f84, _FUN_8c265f84_def\n");
