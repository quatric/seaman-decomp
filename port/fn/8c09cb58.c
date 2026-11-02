#include "../decls.h"
undefined4 FUN_8c09cb58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 in_stack_ffffffec;
  
  noop_038c8c(ar4,ar5,ar6,ar7,in_stack_ffffffec);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(ar4 + iVar1 * 4 + 0x524) != 0) {
      a4 = *(int *)(ar4 + iVar1 * 4 + 0x524);
      (**(code **)(*(int *)(a4 + 8) + 0x5c))(a4,ar5,ar6,ar7);
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c09cb58\n.set _FUN_8c09cb58, _FUN_8c09cb58_def\n");
