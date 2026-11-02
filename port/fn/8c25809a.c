#include "../decls.h"
undefined1 * FUN_8c25809a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined4 in_r3;
  
  puVar1 = &DAT_8c4aa6dc;
  _DAT_8c4aa6dc = 1;
  _DAT_8c4aa6d4 = in_r3;
  if (DAT_8c277aec != (code *)0x0) {
    puVar1 = (undefined1 *)(*DAT_8c277aec)(ar4,ar5,ar6,ar7);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c25809a\n.set _FUN_8c25809a, _FUN_8c25809a_def\n");
