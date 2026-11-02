#include "../decls.h"
undefined4 FUN_8c1fb8ae_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  undefined4 *puVar2;
  
  if (ar4 < 0x40) {
    iVar1 = ar4 * 0x100;
    puVar2 = (undefined4 *)(iVar1 + 0xf7000000);
    *(uint *)(0xf6000000 + iVar1) = *(uint *)(iVar1 + 0xf6000000) & (int)(int)0xfffffeff;
    *puVar2 = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1fb8ae\n.set _FUN_8c1fb8ae, _FUN_8c1fb8ae_def\n");
