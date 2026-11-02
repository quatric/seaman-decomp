#include "../decls.h"
undefined4 FUN_8c0fdaac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_stack_ffffffc0;
  
  uVar1 = (uint)*(byte *)(ar4 + 0xd0);
  iVar2 = FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x8d1,ar4 + 0x14,ar6,ar7);
  if (((iVar2 != 0) ||
      (iVar2 = FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x911,ar4 + 0x5c,ar6,ar7), iVar2 != 0)) ||
     (iVar2 = FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x931,ar5,ar6,ar7), uVar3 = 0, iVar2 != 0)) {
    uVar1 = (uint)*(byte *)(ar4 + 0xd0);
    strcpy(uVar1 * 0x880 + ar4 + 0x8d1,ar4 + 0x14,ar6,ar7,in_stack_ffffffc0);
    strcpy(uVar1 * 0x880 + ar4 + 0x8f1,ar4 + 0x3c,ar6,ar7,in_stack_ffffffc0);
    strcpy(uVar1 * 0x880 + ar4 + 0x911,ar4 + 0x5c,ar6,ar7,in_stack_ffffffc0);
    strcpy(uVar1 * 0x880 + ar4 + 0x931,ar5,ar6,ar7,in_stack_ffffffc0);
    uVar3 = FUN_8c013fb4(uVar1 * 0x880 + ar4 + 0xd1,*(int *)(*(int *)(ar4 + 0x10) + 0x3c) + 0x10,
                         0x800,ar7);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0fdaac\n.set _FUN_8c0fdaac, _FUN_8c0fdaac_def\n");
