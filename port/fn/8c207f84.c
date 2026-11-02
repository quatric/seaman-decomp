#include "../decls.h"
undefined4 FUN_8c207f84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint ar5_00;
  uint in_r3;
  int ar4_00;
  
  puVar1 = (&pvr_20a844);
  pvr_20a844(0x44,*(undefined4 *)0x8c4a9e74 & in_r3,ar6,ar7);
  ar4_00 = (int)0xe8;
  ar5_00 = *(undefined4 *)0x8c4a9eb0 | 8;
  (*(code *)puVar1)(ar4_00,ar5_00,ar6,ar7);
  FUN_8c21214e(ar4_00,ar5_00,ar6,ar7);
  FUN_8c205a40(ar4_00,ar5_00,ar6,ar7);
  (*(code *)puVar1)(0x44,*(undefined4 *)0x8c4a9e74 & 0xfffffffe,ar6,ar7);
  (*(code *)puVar1)((int)0xe8,*(undefined4 *)0x8c4a9eb0 | 8,ar6,ar7);
  do {
  } while (*(undefined4 *)0x8c4a9f1c == *(undefined4 *)0x8c4a9f1c);
  *(undefined4 *)0x8c4a9e54 = 1;
  return 0;
}

__asm__(".globl _FUN_8c207f84\n.set _FUN_8c207f84, _FUN_8c207f84_def\n");
