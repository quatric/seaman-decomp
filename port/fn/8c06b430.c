#include "../decls.h"
int FUN_8c06b430_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x248;
  iVar2 = 2;
  if (*(char *)(0x248 + ar4 + ar5) < '\x02') {
    *(char *)(0x248 + ar4 + ar5) = *(char *)(0x248 + ar4 + ar5) + '\x01';
    iVar2 = iVar1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c06b430\n.set _FUN_8c06b430, _FUN_8c06b430_def\n");
