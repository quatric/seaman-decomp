#include "../decls.h"
undefined4 * FUN_8c0d2fc0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  *(undefined4 *)0x8c43784c = ar4;
  ((undefined1 *)1)[0x8c43784c] = ar4;
  ((undefined1 *)2)[0x8c43784c] = ar4;
  puVar1 = 0x8c43784c;
  ((undefined1 *)3)[0x8c43784c] = ar4;
  return puVar1;
}

__asm__(".globl _FUN_8c0d2fc0\n.set _FUN_8c0d2fc0, _FUN_8c0d2fc0_def\n");
