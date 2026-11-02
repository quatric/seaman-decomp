#include "../decls.h"
undefined4 FUN_8c20065a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  uVar1 = (*(code *)(&FUN_8c1fbc44))
                    (*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8),*(undefined4 *)(iVar2 + 0x20));
  return uVar1;
}

__asm__(".globl _FUN_8c20065a\n.set _FUN_8c20065a, _FUN_8c20065a_def\n");
