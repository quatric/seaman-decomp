#include "../decls.h"
undefined4 FUN_8c25a1ee_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((((ar4 != 0x500) && (ar4 != 0x600)) && (ar4 != 0x700)) &&
     (ar4 != 0x800)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c25a1ee\n.set _FUN_8c25a1ee, _FUN_8c25a1ee_def\n");
