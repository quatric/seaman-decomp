#include "../decls.h"
undefined4 FUN_8c1f8d98_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(ar5 * 0x34 + DAT_8c273a28 + 4);
  if (piVar1[10] == 1) {
    uVar2 = 0x90101;
  }
  else {
    *(int *)(*piVar1 * 0x34 + DAT_8c273a28 + 4) = *piVar1;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x2c) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x30) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x34) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 8) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0xc) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x10) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x14) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x18) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x1c) = 3;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x20) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x24) = 0;
    piVar1[10] = 1;
    *ar4 = piVar1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f8d98\n.set _FUN_8c1f8d98, _FUN_8c1f8d98_def\n");
