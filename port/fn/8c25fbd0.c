#include "../decls.h"
undefined4 FUN_8c25fbd0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined2 *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined2 *ar4_01;
  
  iVar2 = 0;
  do {
    if (*(short *)(iVar2 * 0xac + -0x73b4cbc0) == 0) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  if (iVar2 != 8) {
    iVar2 = iVar2 * 0xac;
    ar6_00 = 0xac;
    ar4_01 = (undefined2 *)(iVar2 + -0x73b4cbc0);
    ar5_00 = 0;
    ar4_00 = ar4_01;
    ar7_00 = ar7;
    memset(ar4_01,0,0xac,ar7);
    *ar4_01 = 1;
    iVar1 = FUN_8c264eda(ar4_00,ar5_00,ar6_00,ar7_00);
    *(int *)(iVar2 + -0x73b4cbb8) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(iVar2 + -0x73b4cb88) = ar4;
      *(undefined4 *)(iVar2 + -0x73b4cb84) = ar5;
      *(undefined4 *)(iVar2 + -0x73b4cb80) = ar6;
      *(undefined4 *)(iVar2 + -0x73b4cb7c) = ar7;
      *(undefined1 **)(iVar2 + -0x73b4cb38) = &LAB_8c25fba0;
      *(undefined2 **)(iVar2 + -0x73b4cb34) = ar4_01;
      *(undefined1 **)(iVar2 + -0x73b4cb30) = &LAB_8c25fbbe;
      *(undefined2 **)(iVar2 + -0x73b4cb2c) = ar4_01;
      return ar4_01;
    }
    FUN_8c25fc5c(ar4_01,ar5_00,ar6_00,ar7_00,ar5);
  }
  return 0;
}

__asm__(".globl _FUN_8c25fbd0\n.set _FUN_8c25fbd0, _FUN_8c25fbd0_def\n");
