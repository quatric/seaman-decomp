#include "../decls.h"
undefined4 FUN_8c25fc5c_def(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (ar4 != (undefined2 *)0x0) {
    FUN_8c264f6a(*(undefined4 *)(ar4 + 4));
    in_r0 = memset(ar4,0,(int)0xac);
    *ar4 = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c25fc5c\n.set _FUN_8c25fc5c, _FUN_8c25fc5c_def\n");
