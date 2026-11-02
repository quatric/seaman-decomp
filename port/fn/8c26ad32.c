#include "../decls.h"
undefined4 FUN_8c26ad32_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,ar6,ar7);
  if (ar6 == 0) {
    iVar2 = libgcc_divide_helper_010468(*(undefined4 *)(ar4 + 0x40),*(undefined4 *)(ar4 + 0x10));
    uVar1 = s_E1242_sdMemBlkSetPrm_return__26acaa(ar4,ar5,iVar2 * 8,ar7);
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c26ad32\n.set _FUN_8c26ad32, _FUN_8c26ad32_def\n");
