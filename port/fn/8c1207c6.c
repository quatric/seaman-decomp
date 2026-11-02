#include "../decls.h"
undefined4 FUN_8c1207c6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c12071a(ar4,ar5,ar6,ar7);
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  *(undefined4 *)(ar4 + 0x18) = *(undefined4 *)(ar4 + 0x24);
  return 0;
}

__asm__(".globl _FUN_8c1207c6\n.set _FUN_8c1207c6, _FUN_8c1207c6_def\n");
