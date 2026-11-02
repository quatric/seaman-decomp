#include "../decls.h"
undefined4 FUN_8c25747c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float fVar1;
  
  fVar1 = ((float)(ushort)ar4 * 6.2831855) / 65536.0;
  sin(fVar1);
  cos(fVar1);
  return ain0;
}

__asm__(".globl _FUN_8c25747c\n.set _FUN_8c25747c, _FUN_8c25747c_def\n");
