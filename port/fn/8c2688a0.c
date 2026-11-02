#include "../decls.h"
undefined4 FUN_8c2688a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  
  puVar1 = (&DATA_8c2785a4);
  *(undefined4 *)0x8c2785a0 = ar4;
  *(undefined4 *)puVar1 = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c2688a0\n.set _FUN_8c2688a0, _FUN_8c2688a0_def\n");
