#include "../decls.h"
undefined4 FUN_8c1f8614_def(uint ar4,uint ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((ar5 & 0xff) < 3) {
    ar5 = ar5 + 0xc;
    ar4 = ar4 - 1;
  }
  iVar1 = libgcc_divide_helper_010468((ar5 & 0xff) * 0xd + 8,5);
  uVar2 = libgcc_divide_helper_010614
                    (((int)(ar4 & 0xffff) >> 2) + iVar1 + (ar4 & 0xffff) + (ar6 & 0xff) + -0xf,7);
  return uVar2;
}

__asm__(".globl _FUN_8c1f8614\n.set _FUN_8c1f8614, _FUN_8c1f8614_def\n");
