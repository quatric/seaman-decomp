#include "../decls.h"
undefined4 FUN_8c11ce44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c11c9d2(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x10),ar4 + 8,ar6,ar7);
  *(undefined4 *)(ar4 + 0x38) = 0;
  (**(code **)(ar4 + 0x18))(ar4,ar4 + 8,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c11ce44\n.set _FUN_8c11ce44, _FUN_8c11ce44_def\n");
