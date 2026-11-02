#include "../decls.h"
undefined4 FUN_8c207d32_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  uint a5;
  
  puVar1 = (&pvr_20a844);
  if (in_r0 == 1) {
    pvr_20a844(0x44,*(undefined4 *)0x8c4a9e74 & 0xfffffffe,ar6,ar7);
    a5 = *(undefined4 *)0x8c4a9eb0 | 8;
  }
  else {
    pvr_20a844(0x44,*(undefined4 *)0x8c4a9e74 & 0xfffffffe,ar6,ar7);
    a5 = *(undefined4 *)0x8c4a9eb0;
  }
  (*(code *)puVar1)((int)0xe8,a5,ar6,ar7);
  (*(code *)puVar1)(0x44,*(undefined4 *)0x8c4a9e74,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c207d32\n.set _FUN_8c207d32, _FUN_8c207d32_def\n");
