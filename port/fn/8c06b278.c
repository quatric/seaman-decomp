#include "../decls.h"
int FUN_8c06b278_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  if ((int)ar5 < 0) {
    uVar1 = 1 >> (~ar5 & 0x1f) + 1;
  }
  else {
    uVar1 = 1 << (ar5 & 0x1f);
  }
  iVar2 = 0x214;
  *(uint *)(0x214 + ar4) = *(uint *)(0x214 + ar4) & ~uVar1;
  return iVar2;
}

__asm__(".globl _FUN_8c06b278\n.set _FUN_8c06b278, _FUN_8c06b278_def\n");
