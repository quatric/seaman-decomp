#include "../decls.h"
undefined4 FUN_8c1f2a0a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *in_r3;
  
  if (*(int *)(*in_r3 + 0x34) != 1) {
    iVar1 = FUN_8c1f23e0(ar4,ar5,ar6,ar7);
    if (iVar1 != 6) {
      if (iVar1 == 0) {
        FUN_8c1f2418(0,ar5,ar6,ar7);
      }
      return 0;
    }
    *(undefined4 *)(DAT_8c2739e0 + 0x34) = 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c1f2a0a\n.set _FUN_8c1f2a0a, _FUN_8c1f2a0a_def\n");
