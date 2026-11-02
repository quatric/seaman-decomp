#include "../decls.h"
undefined4 FUN_8c1f7f1e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (((ar4 != (undefined4 *)0x0) && (*ar4 = 0, DAT_8c273a18 != 0)) &&
     (iVar1 = FUN_8c1f97b4(0,DAT_8c273a18,ar6,ar7), iVar1 != -1)) {
    if (DAT_8c00007e == '\0') {
      *ar4 = 0;
    }
    else {
      if (DAT_8c00007e != '\x01') {
        return 0xffffffff;
      }
      *ar4 = 1;
    }
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f7f1e\n.set _FUN_8c1f7f1e, _FUN_8c1f7f1e_def\n");
