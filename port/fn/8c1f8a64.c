#include "../decls.h"
uint sh4_tmu_1f8a64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  *(undefined4 *)0xffd80000 = 0;
  cVar1 = *(undefined4 *)0xffd80004;
  *(undefined4 *)0xffd80004 = (char)((int)cVar1 | 4U);
  return (int)cVar1 | 4U;
}

__asm__(".globl _sh4_tmu_1f8a64\n.set _sh4_tmu_1f8a64, _sh4_tmu_1f8a64_def\n");
