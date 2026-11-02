#include "../decls.h"
undefined4 FUN_8c026de0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 extraout_fr0;
  undefined4 extraout_fr0_00;
  char cVar5;
  undefined4 in_stack_ffffffac;
  undefined2 uVar6;
  undefined4 ain0;
  undefined4 uStack_30;
  undefined4 uStack_14;
  
  uVar6 = (undefined2)((uint)in_stack_ffffffac >> 0x10);
  cVar5 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  ain0 = CONCAT22(uVar6,(short)uVar1);
  iVar4 = *(int *)(ar4 + 0x328) + (short)uVar1 * 0x124;
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5,ar6,ar7);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uVar1 = deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uStack_14 = extraout_fr0;
  if (cVar5 == '\0') {
    uStack_14 = uVar1;
  }
  FUN_8c2540a0(uStack_14,ar5,ar6,ar7,ain0);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  puVar3 = (undefined4 *)deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x434) = *puVar3;
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  iVar2 = FUN_8c026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    uVar1 = FUN_8c015bb8(iVar4 + 0x70,ar5,ar6,ar7);
    uVar1 = FUN_8c029510(ar4,uVar1,0,ar7);
  }
  else {
    iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
    uVar1 = FUN_8c026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
    uStack_30 = extraout_fr0_00;
    if (cVar5 == '\0') {
      uStack_30 = uVar1;
    }
    uVar1 = 0x29;
    FUN_8c21f200(uStack_30,0x29,ar6,ar7,ain0);
    uVar1 = FUN_8c015bb8(iVar4 + 0x70,uVar1,ar6,ar7);
    uVar1 = FUN_8c0297b8(ar4,uVar1,0,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c026de0\n.set _FUN_8c026de0, _FUN_8c026de0_def\n");
