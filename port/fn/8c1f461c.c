#include "../decls.h"
uint FUN_8c1f461c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f45b8(ar4,ar5,ar6,ar7);
  return (uint)(*(int *)(iVar1 + 0x20) == ar5);
}

__asm__(".globl _FUN_8c1f461c\n.set _FUN_8c1f461c, _FUN_8c1f461c_def\n");
