#include "../decls.h"
undefined4 FUN_8c202280_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  char *unaff_r14;
  
  if (((*unaff_r14 != '\0') && (*unaff_r14 != '\x03')) &&
     (a4 = FUN_8c1efd14(*(undefined4 *)(unaff_r14 + 0x24),ar5,ar6,ar7),
     *(char *)(a4 + 4) == '\b')) {
    FUN_8c20213e(a4,unaff_r14,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c202280\n.set _FUN_8c202280, _FUN_8c202280_def\n");
