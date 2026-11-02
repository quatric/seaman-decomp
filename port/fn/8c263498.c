#include "../decls.h"
undefined4 FUN_8c263498_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((*(char *)(ar4 + 2) == '\x01') && (*(int *)(ar4 + 8) != 0)) {
    uVar1 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
    uVar2 = *(undefined4 *)(ar4 + 8);
    FUN_8c1f367a(uVar2,ar5,ar6,ar7);
    uVar2 = sh4_tmu_1f88e6(uVar2,ar5,ar6,ar7);
    uVar1 = FUN_8c1f88f0(uVar1,uVar2,ar6,ar7);
    *(undefined4 *)(&DATA_8c278480) = uVar1;
    *(undefined1 *)(ar4 + 2) = 0;
  }
  *(undefined1 *)(ar4 + 1) = 1;
  return 1;
}

__asm__(".globl _FUN_8c263498\n.set _FUN_8c263498, _FUN_8c263498_def\n");
