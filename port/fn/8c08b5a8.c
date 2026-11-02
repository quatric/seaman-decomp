#include "../decls.h"
undefined4 FUN_8c08b5a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_fr0;
  char cVar5;
  undefined4 in_stack_ffffffcc;
  undefined2 uVar6;
  undefined4 ain0;
  undefined4 uStack_20;
  
  uVar6 = (undefined2)((uint)in_stack_ffffffcc >> 0x10);
  cVar5 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  ain0 = CONCAT22(uVar6,(short)uVar1);
  iVar4 = *(int *)(ar4 + 0x328) + (short)uVar1 * 0x124;
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5,ar6,ar7);
  uVar1 = FUN_8c015bb8(iVar4 + 0x70,ar5,ar6,ar7);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  ar5_00 = deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uVar3 = FUN_8c026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uStack_20 = extraout_fr0;
  if (cVar5 == '\0') {
    uStack_20 = uVar3;
  }
  uVar1 = FUN_8c21bbb0(uVar1,ar5_00,uStack_20,ar7,ain0);
  return uVar1;
}

__asm__(".globl _FUN_8c08b5a8\n.set _FUN_8c08b5a8, _FUN_8c08b5a8_def\n");
