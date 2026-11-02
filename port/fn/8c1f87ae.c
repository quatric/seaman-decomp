#include "../decls.h"
undefined4 FUN_8c1f87ae_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  iVar1 = 0x8c474a28;
  uVar3 = FUN_8c1f8710(0x8c474a28,ar5,ar6,ar7);
  puVar2 = (&FUN_8c1f6e5e);
  *(char *)(iVar1 + 0x3b) = (char)uVar3;
  uVar3 = (*(code *)puVar2)(0,iVar1);
  return uVar3;
}

__asm__(".globl _FUN_8c1f87ae\n.set _FUN_8c1f87ae, _FUN_8c1f87ae_def\n");
