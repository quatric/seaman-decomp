#include "../decls.h"
undefined4 FUN_8c1f7ffa_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar4 != (int *)0x0) {
    *ar4 = 0;
    iVar1 = FUN_8c1f8094(ar4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      *ar4 = (int)*(char *)(iVar1 + 0xb);
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f7ffa\n.set _FUN_8c1f7ffa, _FUN_8c1f7ffa_def\n");
