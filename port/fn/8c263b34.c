#include "../decls.h"
undefined4 FUN_8c263b34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  int *a4;
  int iVar1;
  undefined4 uVar2;
  
  ar5_00 = ar5;
  for (iVar1 = 0; iVar1 < *(char *)(ar4 + 3); iVar1 = iVar1 + 1) {
    a4 = *(int **)(iVar1 * 4 + ar4 + 0x18);
    (**(code **)(*a4 + 0x14))(a4,ar5,ar6,ar7);
  }
  uVar2 = ar5_00;
  FUN_8c262c3c(*(undefined4 *)(ar4 + 4),ar5_00,ar6,ar7,ar5_00);
  *(undefined4 *)(ar4 + 0x14) = uVar2;
  FUN_8c262c50(*(undefined4 *)(ar4 + 4),ar5_00,ar6,ar7);
  *(undefined1 *)(ar4 + 1) = 1;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  *(undefined1 *)(ar4 + 0x71) = 0;
  *(undefined4 *)(ar4 + 0x8c) = 0x7fffffff;
  *(undefined4 *)(ar4 + 0x90) = 0xffffffff;
  return 0x90;
}

__asm__(".globl _FUN_8c263b34\n.set _FUN_8c263b34, _FUN_8c263b34_def\n");
