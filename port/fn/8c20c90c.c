#include "../decls.h"
int FUN_8c20c90c_def(uint *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c20d128(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if ((*ar4 & 0xffff) == 3) {
      iVar1 = FUN_8c203a92(ar4,ar5,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c2038c0(ar4[5],ar4,ar6,ar7);
      ar5 = ar4;
    }
    if (iVar1 == 3) {
      FUN_8c2072b2(3,ar5,ar6,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c20c90c\n.set _FUN_8c20c90c, _FUN_8c20c90c_def\n");
