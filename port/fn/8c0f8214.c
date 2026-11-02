#include "../decls.h"
int FUN_8c0f8214_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c0fa9fc(ar4 + 0x1054,ar5,ar6,ar7);
  FUN_8c0fa70c(ar4,ar5,ar6,ar7);
  iVar1 = 0x89134;
  *(undefined4 *)(0x89134 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0f8214\n.set _FUN_8c0f8214, _FUN_8c0f8214_def\n");
