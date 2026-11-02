#include "../decls.h"
undefined4 * FUN_8c264eda_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 *ar4_00;
  int ar4_01;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 * 0x34 + 0x8c4ba4a8) == 0) break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  if (iVar1 == 8) {
    ar4_00 = (undefined4 *)0x0;
  }
  else {
    ar4_00 = (undefined4 *)(iVar1 * 0x34 + 0x8c4ba4a8);
    memset(ar4_00,0,0x34,ar7);
    *ar4_00 = 1;
    ar5_00 = 0xac44;
    ar4_01 = (int)0x1f4;
    ar4_00[1] = iVar1;
    ar4_00[2] = 0;
    ar4_00[3] = 0;
    iVar1 = (int)ar4_00 + 0x32;
    FUN_8c260cf8(ar4_01,ar5_00,ar4_00 + 0xc,iVar1);
    memset(ar4_00 + 10,0,8,iVar1);
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c264eda\n.set _FUN_8c264eda, _FUN_8c264eda_def\n");
