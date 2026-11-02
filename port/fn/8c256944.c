#include "../decls.h"
int FUN_8c256944_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c2567f8(*(undefined4 *)(*DAT_8c277b04 + ar4 * 0xc + 8),ar5,ar6,ar7);
  if (iVar1 < 0) {
    _DAT_8c4aa6ac = ar4;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c256944\n.set _FUN_8c256944, _FUN_8c256944_def\n");
