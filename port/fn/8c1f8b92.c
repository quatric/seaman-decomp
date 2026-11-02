#include "../decls.h"
int FUN_8c1f8b92_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int extraout_r3;
  int iVar2;
  undefined4 d;
  
  if ((short)ar5 == 0) {
    iVar2 = 8;
  }
  else if ((short)ar5 == 1) {
    iVar2 = 0x20;
  }
  else if ((short)ar5 == 3) {
    iVar2 = 0x200;
  }
  else if ((short)ar5 == 4) {
    iVar2 = 0x800;
  }
  else {
    iVar2 = 0x80;
  }
  d = 100;
  iVar1 = libgcc_divide_helper_0106dc(ar4,100);
  libgcc_divide_helper_01051c(iVar1 * iVar2,d);
  iVar1 = libgcc_divide_helper_01051c(ar4,d);
  return iVar1 * iVar2 + extraout_r3;
}

__asm__(".globl _FUN_8c1f8b92\n.set _FUN_8c1f8b92, _FUN_8c1f8b92_def\n");
