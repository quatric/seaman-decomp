#include "../decls.h"
undefined4 FUN_8c016014_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 4) = in_fr4;
  *(undefined4 *)(ar4 + 8) = in_fr5;
  *(undefined4 *)(ar4 + 0xc) = in_fr6;
  uVar1 = FUN_8c25754c(ar4 + 4,*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016014\n.set _FUN_8c016014, _FUN_8c016014_def\n");
