#include "../decls.h"
undefined4 FUN_8c206300_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar5 = FUN_8c20aa40((&pvr_206ff0),ar5,ar6,ar7);
  *(undefined4 *)0x8c4a9d98 = 0;
  *(undefined4 *)0x8c4a9e5c = 0;
  *(undefined4 *)0x8c4a9f24 = 0;
  *(undefined4 *)0x8c4a9f28 = 0;
  puVar4 = 0x8c4aa0b0;
  puVar3 = 0x8c4aa104;
  puVar2 = 0x8c4aa0b4;
  uVar6 = 0;
  *(undefined4 *)0x8c4aa0b4 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *puVar3 = 0;
  *puVar4 = 0;
  do {
    iVar1 = uVar6 + 0x2c;
    uVar6 = uVar6 + 4;
    *(undefined4 *)((int)puVar2 + iVar1) = 0;
  } while (uVar6 < 0x14);
  return uVar5;
}

__asm__(".globl _FUN_8c206300\n.set _FUN_8c206300, _FUN_8c206300_def\n");
