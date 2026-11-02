#include "../decls.h"
undefined4 FUN_8c0adc0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_fr0;
  char cVar5;
  undefined4 uStack_20;
  
  cVar5 = '\0';
  iVar4 = *(int *)(ar4 + 0x328);
  FUN_8c01538c(iVar4 + 0x78,ar5,ar6,ar7);
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
  FUN_8c21bbb0(uVar1,ar5_00,uStack_20,ar7,iVar2);
  uVar1 = 0;
  if ((*(int *)(ar4 + 0x88c) != 0) && (uVar1 = 0, *(int *)(ar4 + 0x890) != 0)) {
    FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x890),ar5_00,uStack_20,ar7);
    uVar1 = FUN_8c219a9a(*(undefined4 *)(ar4 + 0x88c),ar5_00,uStack_20,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0adc0c\n.set _FUN_8c0adc0c, _FUN_8c0adc0c_def\n");
