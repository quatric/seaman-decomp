#include "../decls.h"
undefined4 FUN_8c0a4a5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ain0;
  undefined4 uVar2;
  undefined4 extraout_fr0;
  char cVar3;
  undefined4 uStack_14;
  
  cVar3 = '\0';
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  uVar1 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5,ar6,ar7);
  ain0 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uVar2 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + ain0 * 4,ar5,ar6,ar7);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uStack_14 = extraout_fr0;
  if (cVar3 == '\0') {
    uStack_14 = uVar2;
  }
  uVar1 = FUN_8c21ba62(uVar1,uStack_14,ar6,ar7,ain0);
  return uVar1;
}

__asm__(".globl _FUN_8c0a4a5c\n.set _FUN_8c0a4a5c, _FUN_8c0a4a5c_def\n");
