#include "../decls.h"
undefined4 FUN_8c20d082_def(undefined4 ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if ((*ar5 & 3) == 1) {
    FUN_8c20a892(ar5[7],ar5[5]);
  }
  else if ((*ar5 & 0xffff) == 3) {
    FUN_8c20d7a0(ar4,ar5[7],ar5[3],ar5[6]);
  }
  else {
    uVar1 = ar5[6];
    if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0))
    {
      FUN_8c20a9c2(ar5[7],ar5[5]);
    }
    else {
      FUN_8c20d6ea(ar4,ar5[7],ar5[3],ar7);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c20d082\n.set _FUN_8c20d082, _FUN_8c20d082_def\n");
