#include "../decls.h"
undefined4 FUN_8c0e057c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  undefined4 uVar1;
  
  uVar1 = 0x1b;
  a4 = s_Shell_0fef9c(0x8c3eb324,0x10,0x1b,ar7);
  (**(code **)(*(int *)(a4 + 8) + 0x30))(a4,ar5,uVar1,ar7);
  (**(code **)(*(int *)(a4 + 8) + 0x2c))(a4,ar6,uVar1,ar7);
  FUN_8c036988(a4,ar6,uVar1,ar7);
  FUN_8c078fb8(a4,ar6,uVar1,ar7);
  uVar1 = FUN_8c0df998(ar4,a4,uVar1,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e057c\n.set _FUN_8c0e057c, _FUN_8c0e057c_def\n");
