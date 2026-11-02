#include "../decls.h"
int FUN_8c1f6142_def(undefined4 *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint *ar5_00;
  undefined4 auStack_10 [2];
  
  ar5_00 = ar5;
  if (((*ar5 & 1) == 0) || (iVar1 = FUN_8c1f002a(auStack_10,ar5,ar6,ar7), -1 < iVar1)
     ) {
    iVar1 = FUN_8c1f0312(5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = FUN_8c1f6120(auStack_10[0],ar5_00,ar6,ar7);
      ar4[1] = iVar1;
    }
    else {
      ar4[1] = auStack_10[0];
    }
    *ar4 = ar4[1];
    ar4[9] = ar5 + 5;
  }
  else {
    ar4[1] = 0;
    *ar4 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f6142\n.set _FUN_8c1f6142, _FUN_8c1f6142_def\n");
