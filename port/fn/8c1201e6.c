#include "../decls.h"
undefined4
FUN_8c1201e6_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
            undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20)

{
  uint uVar1;
  
  *(undefined4 *)(ar4 + 0x34) = ar7;
  *(undefined4 *)(ar4 + 0x38) = s12;
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x1c) = *ar5;
  *(undefined4 *)(ar4 + 0x20) = ar5[1];
  *(undefined4 *)(ar4 + 0x24) = ar5[2];
  *(undefined4 *)(ar4 + 0x28) = ar5[3];
  *(undefined4 *)(ar4 + 0x2c) = ar5[4];
  *(undefined4 *)(ar4 + 0x30) = ar5[5];
  *(undefined2 *)(ar4 + 0x3c) = (undefined2)s16;
  *(undefined2 *)(ar4 + 0x3e) = (undefined2)s20;
  *(undefined4 *)(ar4 + 0x10) = *ar6;
  *(undefined4 *)(ar4 + 0x14) = ar6[1];
  *(undefined4 *)(ar4 + 0x18) = ar6[2];
  uVar1 = FUN_8c11fcc4(ar4,s0,s4,s8);
  if (((uVar1 & 0xff) == 0) && (uVar1 = FUN_8c120078(ar4,s0,s4,s8), (uVar1 & 0xff) == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c1201e6\n.set _FUN_8c1201e6, _FUN_8c1201e6_def\n");
