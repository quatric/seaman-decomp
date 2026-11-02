#include "../decls.h"
undefined4 FUN_8c206146_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 in_PR;
  
  if (DAT_8c2756b0 != 0) {
    ain0 = noop_205dd4(ar4,ar5,ar6,ar7,in_PR);
    DAT_8c2756b0 = 0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c206146\n.set _FUN_8c206146, _FUN_8c206146_def\n");
