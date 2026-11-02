#include "../decls.h"
undefined4 FUN_8c010e38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint in_fr4;
  
  if ((in_fr4 & 0x7f800000) == 0x7f800000) {
    if ((in_fr4 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c010e38\n.set _FUN_8c010e38, _FUN_8c010e38_def\n");
