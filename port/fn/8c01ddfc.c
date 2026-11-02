#include "../decls.h"
undefined4 FUN_8c01ddfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)0x8c279254 = *(int *)(*(int *)(0x5b3c + ar4) + 4);
  if (*(undefined4 *)0x8c279250 != 0) {
    FUN_8c1fb57c(*(undefined4 *)0x8c279250,ar5,ar6,ar7);
  }
  iVar1 = malloc_thunk(*(undefined4 *)0x8c279254 << 2,ar5,ar6,ar7);
  *(undefined4 *)0x8c279250 = iVar1;
  if (*(undefined4 *)0x8c279250 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(0x5b3c + ar4) + 8;
    for (iVar4 = 0; iVar4 < *(undefined4 *)0x8c279254; iVar4 = iVar4 + 1) {
      *(int *)(iVar4 * 4 + *(undefined4 *)0x8c279250) = iVar1;
      iVar3 = log_message(iVar1,ar5,ar6,ar7);
      iVar1 = iVar1 + iVar3 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01ddfc\n.set _FUN_8c01ddfc, _FUN_8c01ddfc_def\n");
