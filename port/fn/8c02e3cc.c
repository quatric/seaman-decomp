#include "../decls.h"
int FUN_8c02e3cc_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)*ar4;
  if ((iVar1 == 1) && (iVar1 = (int)ar4[0xb], iVar1 == 5)) {
    iVar1 = FUN_8c02e38c(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02e3cc\n.set _FUN_8c02e3cc, _FUN_8c02e3cc_def\n");
