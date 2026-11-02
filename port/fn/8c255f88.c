#include "../decls.h"
undefined4 FUN_8c255f88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = 0x8c4aabbc;
  *(undefined4 *)(*(undefined4 *)0x8c4aabbc + 0x68) = ar4;
  uVar2 = FUN_8c20fe00(*piVar1);
  return uVar2;
}

__asm__(".globl _FUN_8c255f88\n.set _FUN_8c255f88, _FUN_8c255f88_def\n");
