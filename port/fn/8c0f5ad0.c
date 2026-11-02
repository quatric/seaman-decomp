#include "../decls.h"
undefined4 FUN_8c0f5ad0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x1cc) = 0;
  *(undefined4 *)(ar4 + 0x1d0) = 0;
  *(undefined4 *)(ar4 + 0x1d4) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 1;
  return 0x74;
}

__asm__(".globl _FUN_8c0f5ad0\n.set _FUN_8c0f5ad0, _FUN_8c0f5ad0_def\n");
