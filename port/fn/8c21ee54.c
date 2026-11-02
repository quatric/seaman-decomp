#include "../decls.h"
undefined4 * FUN_8c21ee54_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar4 = 0x8c4aa380;
  puVar3 = 0x8c4aa37c;
  puVar2 = 0x8c4aad86;
  puVar1 = 0x8c4aa378;
  if (ar4 == (undefined4 *)0x29) {
    *(undefined4 *)0x8c4aa374 = 6;
    *puVar1 = 2;
    *puVar3 = 5;
    uVar5 = 0xbfff;
    *(undefined4 *)0x8c4aa380 = 0xffffffff;
    *puVar2 = *puVar2 & (ushort)uVar5;
    ar4 = puVar3;
  }
  else {
    *(undefined4 *)0x8c4aa374 = 0;
    *puVar1 = 0xffffffff;
    *puVar3 = 0xffffffff;
    *puVar4 = 0xffffffff;
    *puVar2 = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c21ee54\n.set _FUN_8c21ee54, _FUN_8c21ee54_def\n");
