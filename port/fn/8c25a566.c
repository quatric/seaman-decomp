#include "../decls.h"
undefined4 FUN_8c25a566_def(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int n;
  undefined4 d;
  
  if ((ar6 != 0) && (ar4 != 0)) {
    n = ar6 - ar4;
    d = 0x44;
    iVar1 = libgcc_divide_helper_0106dc(n,0x44);
    if ((iVar1 == 0) && (uVar2 = libgcc_divide_helper_01051c(n,d), uVar2 < ar5)) {
      return uVar2;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c25a566\n.set _FUN_8c25a566, _FUN_8c25a566_def\n");
