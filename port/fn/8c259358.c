#include "../decls.h"
undefined4 FUN_8c259358_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = 0x8c4aabbc;
  *(int *)*(undefined4 *)0x8c4aabbc = (int)0x2000;
  iVar3 = *piVar1;
  if (ar4 == 0) {
    *(undefined4 *)(iVar3 + 0x50) = 0;
    goto LAB_8c259396;
  }
  if (ar4 == 1) {
    uVar2 = 1;
  }
  else {
    if (ar4 == 2) {
      *(undefined4 *)(iVar3 + 0x50) = 2;
      goto LAB_8c259396;
    }
    if (ar4 != 3) goto LAB_8c259396;
    uVar2 = 3;
  }
  *(undefined4 *)(iVar3 + 0x50) = uVar2;
LAB_8c259396:
  FUN_8c20f640(*piVar1);
  uVar2 = FUN_8c20fe00(*piVar1);
  return uVar2;
}

__asm__(".globl _FUN_8c259358\n.set _FUN_8c259358, _FUN_8c259358_def\n");
