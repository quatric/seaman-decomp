#include "../decls.h"
undefined4 FUN_8c0e2844_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  ret_const_1_0dc548(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    FUN_8c0e2838(ar4 + iVar1 * 0x16c + 0x22d48,0,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c0e2844\n.set _FUN_8c0e2844, _FUN_8c0e2844_def\n");
