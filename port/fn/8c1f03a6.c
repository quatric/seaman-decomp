#include "../decls.h"
int FUN_8c1f03a6_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int in_r0;
  
  iVar1 = 0x8c470920;
  if (ar4 < 0x20) {
    *(undefined4 *)(0x8c470920 + ar4 * 4) = ar5;
    in_r0 = iVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f03a6\n.set _FUN_8c1f03a6, _FUN_8c1f03a6_def\n");
