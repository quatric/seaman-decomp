#include "../decls.h"
undefined4 FUN_8c235eb4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = 0x8c4aabbc;
  *(int *)*(undefined4 *)0x8c4aabbc = (int)0x100;
  *(undefined4 *)(*piVar1 + 0x3c) = 0;
  FUN_8c20f640(*piVar1);
  uVar2 = FUN_8c20fe00(*piVar1);
  return uVar2;
}

__asm__(".globl _FUN_8c235eb4\n.set _FUN_8c235eb4, _FUN_8c235eb4_def\n");
