#include "../decls.h"
undefined4 s_ERR_wrap_0fb1d4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(0xb0 + (int)ar4) == 1) {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    uVar1 = s_ERROR_0fb0de(ar4,(&DATA_8c141dd0) + 0x1a,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _s_ERR_wrap_0fb1d4\n.set _s_ERR_wrap_0fb1d4, _s_ERR_wrap_0fb1d4_def\n");
