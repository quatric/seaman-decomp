#include "../decls.h"
undefined4 FUN_8c1f7f22_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r14;
  
  if (((unaff_r14 != (undefined4 *)0x0) && (*unaff_r14 = 0, DAT_8c273a18 != 0)) &&
     (iVar1 = FUN_8c1f97b4(0,DAT_8c273a18,ar6,ar7), iVar1 != -1)) {
    if (DAT_8c00007e == '\0') {
      *unaff_r14 = 0;
    }
    else {
      if (DAT_8c00007e != '\x01') {
        return 0xffffffff;
      }
      *unaff_r14 = 1;
    }
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f7f22\n.set _FUN_8c1f7f22, _FUN_8c1f7f22_def\n");
