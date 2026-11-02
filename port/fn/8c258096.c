#include "../decls.h"
undefined1 * FUN_8c258096_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  _DAT_8c4aa6d4 = 0;
  puVar1 = &DAT_8c4aa6dc;
  _DAT_8c4aa6dc = 1;
  if (DAT_8c277aec != (code *)0x0) {
    puVar1 = (undefined1 *)(*DAT_8c277aec)();
  }
  return puVar1;
}

__asm__(".globl _FUN_8c258096\n.set _FUN_8c258096, _FUN_8c258096_def\n");
