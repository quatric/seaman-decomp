#include "../decls.h"
undefined4 FUN_8c1f7eea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *in_r2;
  
  if ((*in_r2 != 0) && ((ar4 == 0 || (ar4 == 1)))) {
    DAT_8c00007e = (undefined1)ar4;
    iVar1 = FUN_8c1f97b4(2,DAT_8c273a18,ar6,ar7);
    if (iVar1 != -1) {
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f7eea\n.set _FUN_8c1f7eea, _FUN_8c1f7eea_def\n");
