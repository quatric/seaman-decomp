#include "../decls.h"
int FUN_8c0e9668_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0xbe;
  iVar2 = 2;
  if (*(char *)(0xbe + ar4) < '\x02') {
    *(char *)(0xbe + ar4) = *(char *)(0xbe + ar4) + '\x01';
    iVar2 = iVar1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0e9668\n.set _FUN_8c0e9668, _FUN_8c0e9668_def\n");
