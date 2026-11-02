#include "../decls.h"
undefined4 FUN_8c1fffca_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  ar5_00 = 0;
  do {
    if (**(int **)(iVar3 + 0x1c) + 1 <= ar5_00) {
      return 0;
    }
    uVar1 = FUN_8c2009d0(ar4,ar5_00,ar6,ar7);
    uVar1 = uVar1 & 0xffff;
    if (((uVar1 != 0xfffc) && (uVar1 != 0xffff)) && (uVar1 != 0xfffa)) {
      if (ar5_00 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x30)) {
        iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x30);
      }
      else {
        iVar2 = **(int **)(iVar3 + 0x1c) + 1;
      }
      if (iVar2 <= (int)uVar1) {
        return 0xffffffff;
      }
    }
    ar5_00 = ar5_00 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c1fffca\n.set _FUN_8c1fffca, _FUN_8c1fffca_def\n");
