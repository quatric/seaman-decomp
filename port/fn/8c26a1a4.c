#include "../decls.h"
undefined4 FUN_8c26a1a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = memset(0x8c4beb48,0,0x40,ar7);
  iVar3 = 0xf;
  uVar4 = 0x8c4beb48 + 0x40;
  uVar2 = 0x8c4beb48;
  do {
    *(int *)(uVar2 + 4) = iVar3;
    uVar2 = uVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (uVar2 < uVar4);
  return uVar1;
}

__asm__(".globl _FUN_8c26a1a4\n.set _FUN_8c26a1a4, _FUN_8c26a1a4_def\n");
