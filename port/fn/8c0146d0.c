#include "../decls.h"
undefined4 vsprintf_like_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c010e84(1,0,ar4,ar5);
  return uVar1;
}

__asm__(".globl _vsprintf_like\n.set _vsprintf_like, _vsprintf_like_def\n");
