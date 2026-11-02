#include "../decls.h"
undefined4 FUN_8c0279c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x100;
  return 1;
}

__asm__(".globl _FUN_8c0279c0\n.set _FUN_8c0279c0, _FUN_8c0279c0_def\n");
