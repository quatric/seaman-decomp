#include "../decls.h"
undefined4 FUN_8c1fce50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)0x80;
  uVar3 = 0x8c475fc0 + (int)0x400;
  uVar1 = 0x8c475fc0;
  do {
    *(undefined4 *)(uVar1 + 0x78) = ar4;
    uVar1 = uVar1 + iVar2;
  } while (uVar1 < uVar3);
  return 0x78;
}

__asm__(".globl _FUN_8c1fce50\n.set _FUN_8c1fce50, _FUN_8c1fce50_def\n");
