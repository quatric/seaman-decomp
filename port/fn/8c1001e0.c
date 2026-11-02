#include "../decls.h"
undefined4 FUN_8c1001e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ef68(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_8c01ecb0(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c1001e0\n.set _FUN_8c1001e0, _FUN_8c1001e0_def\n");
