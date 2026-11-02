#include "../decls.h"
undefined4 FUN_8c2637ca_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 auStack_10 [4];
  
  uVar1 = FUN_8c1f3968(ar4,auStack_10,ar6,ar7);
  *ar5 = auStack_10[0];
  return uVar1;
}

__asm__(".globl _FUN_8c2637ca\n.set _FUN_8c2637ca, _FUN_8c2637ca_def\n");
