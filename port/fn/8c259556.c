#include "../decls.h"
undefined4 FUN_8c259556_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = 0x8c4aabbc;
  *(undefined4 *)*(undefined4 *)0x8c4aabbc = 0x20000;
  iVar3 = *piVar1;
  if (ar4 == 3) {
    *(undefined4 *)(iVar3 + 0x60) = 0;
    goto LAB_8c259594;
  }
  if (ar4 == 0) {
    uVar2 = 1;
  }
  else {
    if (ar4 == 1) {
      *(undefined4 *)(iVar3 + 0x60) = 2;
      goto LAB_8c259594;
    }
    if (ar4 != 2) goto LAB_8c259594;
    uVar2 = 3;
  }
  *(undefined4 *)(iVar3 + 0x60) = uVar2;
LAB_8c259594:
  FUN_8c20f640(*piVar1);
  uVar2 = FUN_8c20fe00(*piVar1);
  return uVar2;
}

__asm__(".globl _FUN_8c259556\n.set _FUN_8c259556, _FUN_8c259556_def\n");
