#include "../decls.h"
undefined4 FUN_8c238e98_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = 0x8c4ab274;
  uVar2 = FUN_8c23c814(ar4,*(undefined4 *)0x8c4ab274,ar5,ar7);
  *piVar1 = *piVar1 + ar5;
  return uVar2;
}

__asm__(".globl _FUN_8c238e98\n.set _FUN_8c238e98, _FUN_8c238e98_def\n");
