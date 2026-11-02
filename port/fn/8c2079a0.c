#include "../decls.h"
undefined4 FUN_8c2079a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (&pvr_20a844);
  pvr_20a844(0x68,*(undefined4 *)0x8c4a9e60,ar6,ar7);
  (*(code *)puVar1)(0x6c,*(undefined4 *)0x8c4a9e64,ar6,ar7);
  (*(code *)puVar1)(0x5c,*(undefined4 *)0x8c4a9e6c,ar6,ar7);
  (*(code *)puVar1)(0x4c,*(undefined4 *)0x8c4a9e70,ar6,ar7);
  (*(code *)puVar1)((int)0x118,*(undefined4 *)0x8c4a9ea8,ar6,ar7);
  (*(code *)puVar1)((int)0xf4,*(undefined4 *)0x8c4a9eac,ar6,ar7);
  (*(code *)puVar1)(0x48,*(undefined4 *)0x8c4a9e78,ar6,ar7);
  (*(code *)puVar1)(0x44,*(undefined4 *)0x8c4a9e74 & 0xfffffffe,ar6,ar7);
  uVar2 = (*(code *)puVar1)((int)0xe8,*(undefined4 *)0x8c4a9eb0 | 8,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c2079a0\n.set _FUN_8c2079a0, _FUN_8c2079a0_def\n");
