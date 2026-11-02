#include "../decls.h"
undefined4 FUN_8c1f8028_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *unaff_r14;
  
  if (unaff_r14 != (int *)0x0) {
    *unaff_r14 = 0x30;
    iVar1 = FUN_8c1f8094(ar4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      *unaff_r14 = (int)*(char *)(iVar1 + 0xc);
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f8028\n.set _FUN_8c1f8028, _FUN_8c1f8028_def\n");
