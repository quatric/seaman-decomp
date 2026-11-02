#include "../decls.h"
undefined4 FUN_8c258e52_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 *in_r3;
  
  if ((code *)*in_r3 != (code *)0x0) {
    in_r0 = (*(code *)*in_r3)(ar4,ar5,ar6,ar7);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c258e52\n.set _FUN_8c258e52, _FUN_8c258e52_def\n");
