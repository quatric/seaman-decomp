#include "../decls.h"
undefined4 FUN_8c1f7158_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (*ar4 < 0xfffe) {
    *ar4 = *ar4 + 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f7158\n.set _FUN_8c1f7158, _FUN_8c1f7158_def\n");
