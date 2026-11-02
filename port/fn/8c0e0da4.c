#include "../decls.h"
undefined4 FUN_8c0e0da4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  (**(code **)(0x1b0 + *ar4))(ar4,1,ar6,ar7);
  *(undefined4 *)(0x22814 + (int)ar4) = 1;
  *(undefined4 *)(0x22810 + (int)ar4) = 1;
  FUN_8c102a7c((int)ar4 + 0xb10,uVar1,ar6,ar7);
  FUN_8c102a7c((int)ar4 + 0xb30,uVar1,ar6,ar7);
  FUN_8c102a7c((int)ar4 + 0xad0,uVar1,ar6,ar7);
  FUN_8c102a7c((int)ar4 + 0xaf0,uVar1,ar6,ar7);
  FUN_8c102a7c((int)ar4 + 0xb50,uVar1,ar6,ar7);
  uVar1 = FUN_8c102974((int)ar4 + 0xb70,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e0da4\n.set _FUN_8c0e0da4, _FUN_8c0e0da4_def\n");
