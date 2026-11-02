#include "../decls.h"
undefined4 FUN_8c1f9150_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_8c1f9108(DAT_8c273a28 + 4 + uVar1,ar5,ar6,ar7);
    uVar1 = uVar1 + 0x34;
  } while (uVar1 < 0xd0);
  _DAT_8c474bac = 1;
  return 0;
}

__asm__(".globl _FUN_8c1f9150\n.set _FUN_8c1f9150, _FUN_8c1f9150_def\n");
