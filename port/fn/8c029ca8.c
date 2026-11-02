#include "../decls.h"
undefined4 FUN_8c029ca8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar4_00;
  int iVar2;
  undefined4 in_stack_ffffffe4;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((uint)in_stack_ffffffe4 >> 0x10);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  iVar2 = *(int *)(ar4 + 0x328);
  ar4_00 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,CONCAT22(uVar3,(short)uVar1));
  FUN_8c019088(ar4_00,ar5,ar6,ar7);
  FUN_8c019198(ar4_00,ar5,ar6,ar7);
  uVar1 = FUN_8c015510(*(int *)(iVar2 + (short)uVar1 * 0x124) + 0x1e8,ar5,ar6,ar7);
  FUN_8c02a29c(ar4,uVar1,ar6,ar7);
  uVar1 = FUN_8c256210(1,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c029ca8\n.set _FUN_8c029ca8, _FUN_8c029ca8_def\n");
