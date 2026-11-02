#include "../decls.h"
int FUN_8c2059e0_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  if (ar4 < 0x800000) {
    if (0x400000 <= ar4) {
      ar4 = ar4 - 0x400000;
      iVar1 = 4;
    }
    iVar1 = (ar4 & 0xfffffffc) * 2 + (ar4 & 3) + iVar1;
  }
  else {
    if (0xc00000 <= ar4) {
      ar4 = ar4 - 0x400000;
      iVar1 = 4;
    }
    iVar1 = (ar4 & 0xfffffffc) * 2 + (ar4 & 3) + iVar1 + 0xff800000;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c2059e0\n.set _FUN_8c2059e0, _FUN_8c2059e0_def\n");
