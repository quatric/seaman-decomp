#include "../decls.h"
undefined4 FUN_8c1f1576_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c1f153c(0,ar4,10,ar7);
  if ((uint)(ushort)ar5 != (~uVar1 & 0xffff)) {
    return 0xffffffff;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f1576\n.set _FUN_8c1f1576, _FUN_8c1f1576_def\n");
