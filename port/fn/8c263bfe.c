#include "../decls.h"
undefined4 FUN_8c263bfe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *a4;
  int iVar3;
  
  iVar3 = ar4;
  uVar1 = ar5;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  FUN_8c260ca0(iVar3,ar5,ar6,ar7,uVar1);
  for (iVar3 = 0; iVar3 < *(char *)(ar4 + 3); iVar3 = iVar3 + 1) {
    a4 = *(int **)(iVar3 * 4 + ar4 + 0x18);
    (**(code **)(*a4 + 0x14))(a4,ar5,ar6,ar7);
  }
  uVar2 = uVar1;
  FUN_8c262c3c(*(undefined4 *)(ar4 + 4),uVar1,ar6,ar7,uVar1);
  *(undefined4 *)(ar4 + 0x14) = uVar2;
  uVar2 = *(undefined4 *)(ar4 + 4);
  FUN_8c262c50(uVar2,uVar1,ar6,ar7);
  *(undefined1 *)(ar4 + 1) = 1;
  *(undefined1 *)(ar4 + 2) = 3;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  uVar1 = FUN_8c260cc8(uVar2,uVar1,ar6,ar7,0x4c);
  return uVar1;
}

__asm__(".globl _FUN_8c263bfe\n.set _FUN_8c263bfe, _FUN_8c263bfe_def\n");
