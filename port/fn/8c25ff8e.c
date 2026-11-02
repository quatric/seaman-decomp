#include "../decls.h"
undefined4 FUN_8c25ff8e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (*(int *)(ar4 + 4) == 0) {
    *(undefined4 *)(ar4 + 4) = 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c25ff8e\n.set _FUN_8c25ff8e, _FUN_8c25ff8e_def\n");
