#include "../decls.h"
undefined4 FUN_8c20a284_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_r3;
  
  if ((in_r3 & ar4) == 0) {
    *(undefined4 *)0x8c4a9c48 = ar4;
    pvr_20a844((int)0x108,ar4,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c20a284\n.set _FUN_8c20a284, _FUN_8c20a284_def\n");
