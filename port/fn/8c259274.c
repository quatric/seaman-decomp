#include "../decls.h"
undefined4 FUN_8c259274_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = 0x8c4aabbc;
  *(int *)*(undefined4 *)0x8c4aabbc = (int)0x4000;
  iVar3 = *piVar1;
  if (ar4 == 0) {
    *(undefined4 *)(iVar3 + 0x54) = 0;
  }
  else if (ar4 == 1) {
    *(undefined4 *)(iVar3 + 0x54) = 2;
  }
  else if (ar4 == 2) {
    *(undefined4 *)(iVar3 + 0x54) = 1;
  }
  FUN_8c20f640(*piVar1);
  uVar2 = FUN_8c20fe00(*piVar1);
  return uVar2;
}

__asm__(".globl _FUN_8c259274\n.set _FUN_8c259274, _FUN_8c259274_def\n");
