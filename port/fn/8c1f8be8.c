#include "../decls.h"
int FUN_8c1f8be8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int extraout_r3;
  undefined4 d;
  int iVar2;
  
  if ((short)ar5 == 0) {
    d = 8;
  }
  else if ((short)ar5 == 1) {
    d = 0x20;
  }
  else if ((short)ar5 == 3) {
    d = 0x200;
  }
  else if ((short)ar5 == 4) {
    d = 0x800;
  }
  else {
    d = 0x80;
  }
  iVar2 = 100;
  iVar1 = libgcc_divide_helper_0106dc(ar4,d);
  libgcc_divide_helper_01051c(iVar1 * iVar2,d);
  iVar1 = libgcc_divide_helper_01051c(ar4,d);
  return iVar1 * iVar2 + extraout_r3;
}

__asm__(".globl _FUN_8c1f8be8\n.set _FUN_8c1f8be8, _FUN_8c1f8be8_def\n");
