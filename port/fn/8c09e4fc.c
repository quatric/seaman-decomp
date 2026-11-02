#include "../decls.h"
undefined4 FUN_8c09e4fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  undefined4 extraout_fr0;
  char cVar4;
  undefined4 uStack_1c;
  
  cVar4 = '\0';
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  uVar1 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5,ar6,ar7);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  ar5_00 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + iVar2 * 4,ar5,ar6,ar7);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uVar3 = FUN_8c026d74(*(int *)(*(int *)(ar4 + 0x328) + 0xa8) + iVar2 * 4,ar5,ar6,ar7);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uStack_1c = extraout_fr0;
  if (cVar4 == '\0') {
    uStack_1c = uVar3;
  }
  uVar1 = FUN_8c21bbb0(uVar1,ar5_00,uStack_1c,ar7,iVar2);
  return uVar1;
}

__asm__(".globl _FUN_8c09e4fc\n.set _FUN_8c09e4fc, _FUN_8c09e4fc_def\n");
