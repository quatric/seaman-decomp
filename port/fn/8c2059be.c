#include "../decls.h"
int FUN_8c2059be_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ((ar4 & 0xfffffff8) >> 1) + (ar4 & 3);
  if ((ar4 & 4) != 0) {
    iVar1 = iVar1 + 0x400000;
  }
  if (0x800000 <= ar4) {
    iVar1 = iVar1 + 0x400000;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c2059be\n.set _FUN_8c2059be, _FUN_8c2059be_def\n");
