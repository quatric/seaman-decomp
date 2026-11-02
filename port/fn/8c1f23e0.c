#include "../decls.h"
undefined4 FUN_8c1f23e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 auStack_c [3];
  
  iVar1 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x20))(auStack_c,ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return auStack_c[0];
}

__asm__(".globl _FUN_8c1f23e0\n.set _FUN_8c1f23e0, _FUN_8c1f23e0_def\n");
