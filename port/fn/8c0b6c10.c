#include "../decls.h"
undefined4 FUN_8c0b6c10_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0x8c286ebc;
  FUN_8c0c09a4(0x8c286ebc,ar5,ar6,ar7);
  FUN_8c102d40(uVar1,ar5,ar6,ar7);
  uVar1 = game_shutdown_b(uVar1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0b6c10\n.set _FUN_8c0b6c10, _FUN_8c0b6c10_def\n");
