#include "../decls.h"
int FUN_8c110460_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int iVar1;
  
  a5 = FUN_8c110414(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c1104b2(ar4,a5,ar6,ar7);
  return iVar1 + a5;
}

__asm__(".globl _FUN_8c110460\n.set _FUN_8c110460, _FUN_8c110460_def\n");
