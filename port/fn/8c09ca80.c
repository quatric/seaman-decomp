#include "../decls.h"
undefined4 FUN_8c09ca80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a4;
  int iVar2;
  undefined4 in_stack_ffffffe8;
  
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffe8);
  FUN_8c019198(uVar1,ar5,ar6,ar7);
  uVar1 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5,ar6,ar7);
  FUN_8c219a9a(uVar1,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    if (*(int *)(ar4 + iVar2 * 4 + 0x524) != 0) {
      a4 = *(int *)(ar4 + iVar2 * 4 + 0x524);
      (**(code **)(*(int *)(a4 + 8) + 0x3c))(a4,ar5,ar6,ar7);
    }
  }
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c09ca80\n.set _FUN_8c09ca80, _FUN_8c09ca80_def\n");
