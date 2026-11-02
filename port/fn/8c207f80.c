#include "../decls.h"
undefined4 FUN_8c207f80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  
  puVar1 = (&pvr_20a844);
  pvr_20a844(0x44,*(undefined4 *)0x8c4a9e74 & 0xfffffffe);
  (*(code *)puVar1)((int)0xe8,*(undefined4 *)0x8c4a9eb0 | 8);
  FUN_8c21214e();
  FUN_8c205a40();
  (*(code *)puVar1)(0x44,*(undefined4 *)0x8c4a9e74 & 0xfffffffe);
  (*(code *)puVar1)((int)0xe8,*(undefined4 *)0x8c4a9eb0 | 8);
  do {
  } while (*(undefined4 *)0x8c4a9f1c == *(undefined4 *)0x8c4a9f1c);
  *(undefined4 *)0x8c4a9e54 = 1;
  return 0;
}

__asm__(".globl _FUN_8c207f80\n.set _FUN_8c207f80, _FUN_8c207f80_def\n");
