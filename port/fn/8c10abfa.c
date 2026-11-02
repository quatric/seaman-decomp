#include "../decls.h"
undefined4 FUN_8c10abfa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *unaff_r13;
  int a4;
  
  a4 = *unaff_r13;
  (**(code **)(a4 + 0x18))(a4,unaff_r13[10],ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,unaff_r13[0x16],ar6,ar7);
  uVar1 = FUN_8c11b884(*(undefined4 *)((int)0xb0 + (int)unaff_r13),a4);
  return uVar1;
}

__asm__(".globl _FUN_8c10abfa\n.set _FUN_8c10abfa, _FUN_8c10abfa_def\n");
